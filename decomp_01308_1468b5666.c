// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468b5666 FUN_1468b5666 body=116 status=ok
// SIG undefined FUN_1468b5666(void)

ulonglong * FUN_1468b5666(longlong *param_1,ulonglong *param_2,uint param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_1[3])) {
    uVar1 = *(uint *)(param_1[2] + 0xc + (ulonglong)param_3 * 0x68);
    if ((ulonglong)uVar1 != 0) {
      if ((int)uVar1 < 0) {
        puVar2 = (ulonglong *)((ulonglong)~uVar1 * 0x38 + *param_1);
      }
      else {
        puVar2 = (ulonglong *)((ulonglong)uVar1 * 0x68 + param_1[2] + -0x68);
      }
      uVar3 = *puVar2;
      goto LAB_1468b56c3;
    }
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar3 = (ulonglong)DAT_14c892ce4;
LAB_1468b56c3:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1468b56da FUN_1468b56da body=216 status=ok
// SIG undefined FUN_1468b56da(void)

undefined8 * FUN_1468b56da(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = &PTR_FUN_149e8a358;
  *(undefined4 *)(param_1 + 0x13) = param_2;
  param_1[0x14] = param_3;
  FUN_1468c528a(param_1 + 0x15);
  param_1[0x47] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  if (DAT_14c86a9f0 == '\0') {
    if (DAT_14c8687b8 != '\0') {
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
  }
  else if (DAT_14c8687b8 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x231) = 1;
  }
  return param_1;
}



// FUNCTION 1468b57b2 FUN_1468b57b2 body=109 status=ok
// SIG undefined FUN_1468b57b2(void)

void FUN_1468b57b2(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2b) & 8) == 0) {
    return;
  }
  FUN_1468bab10(param_2,param_1 + 8);
  FUN_1468bac82(param_2,param_1 + 0x18);
  FUN_1468badf4(param_2,param_1 + 0x28);
  FUN_140219018(param_2,param_1 + 0x38);
  FUN_1468bb3ce(param_2,param_1 + 0x200);
  FUN_1468bb57a(param_2,param_1 + 0x48);
  return;
}



// FUNCTION 1468b5820 FUN_1468b5820 body=675 status=ok
// SIG undefined FUN_1468b5820(void)

longlong * FUN_1468b5820(longlong *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0xffffffff) {
    param_3 = ~param_3;
    do {
      uVar1 = (int)param_2[1] - 2;
      if ((int)param_3 < 0) {
        lVar3 = *param_1 + (ulonglong)~param_3 * 0x38;
        if (uVar1 < 0x7fffffff) {
          local_50 = *(ulonglong *)(*param_1 + 0x14 + (ulonglong)~param_3 * 0x38);
          goto LAB_1468b5997;
        }
LAB_1468b5898:
        if ((int)param_2[1] - 2U < 0x7fffffff) {
          puVar2 = &DAT_149e0635c;
LAB_1468b58ab:
          FUN_140056680(local_78,puVar2);
          FUN_144a7dea0(&local_68,local_78,param_2);
          if (&local_68 == param_2) {
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_2 != 0) {
              FUN_1400020a8();
            }
            *param_2 = local_68;
            local_68 = 0;
            *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
            local_60 = 0;
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        lVar3 = param_1[2] + (ulonglong)param_3 * 0x68 + -0x68;
        if (0x7ffffffe < uVar1) goto LAB_1468b5898;
        FUN_1468b5666(param_1,&local_50,param_3 - 1);
LAB_1468b5997:
        uVar4 = local_50;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if (uVar4 == DAT_14c892e7c) goto LAB_1468b5898;
        uVar1 = *(uint *)(lVar3 + 8);
        if (uVar1 != 0) {
          if ((int)uVar1 < 0) {
            uVar4 = *(ulonglong *)(*param_1 + 0x14 + (ulonglong)~uVar1 * 0x38);
            local_58 = uVar4;
          }
          else {
            FUN_1468b5666(param_1,&local_58,uVar1 - 1);
            uVar4 = local_58;
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
          }
          if (uVar4 != DAT_14c892e7c) goto LAB_1468b5898;
        }
        if ((int)param_2[1] - 2U < 0x7fffffff) {
          puVar2 = &DAT_149e31048;
          goto LAB_1468b58ab;
        }
      }
      FUN_1400021e4(lVar3,local_78);
      FUN_144a7dea0(&local_68,local_78,param_2);
      if (&local_68 == param_2) {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_68;
        local_68 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
        local_60 = 0;
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      param_3 = *(uint *)(lVar3 + 8);
    } while (param_3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468b5ac4 FUN_1468b5ac4 body=818 status=ok
// SIG undefined FUN_1468b5ac4(void)

undefined8
FUN_1468b5ac4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,byte param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 local_120;
  undefined *local_118;
  int local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined *local_f8;
  int local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  ulonglong *local_d8;
  char local_d0;
  undefined2 local_c8 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = local_c8;
  local_d0 = '\0';
  local_d8 = &local_48;
  bVar6 = false;
  bVar4 = 0;
  uVar7 = param_4 + 1;
  local_128 = param_3;
  local_120 = param_2;
  local_e0 = local_e8;
  if (uVar7 != 0) {
    bVar4 = 0;
    bVar6 = false;
    do {
      if ((int)uVar7 < 0) {
        lVar5 = (ulonglong)~uVar7 * 0x38 + *param_1;
      }
      else {
        lVar5 = param_1[2] + (ulonglong)uVar7 * 0x68 + -0x68;
      }
      if (0 < (int)((ulonglong)((longlong)local_e0 - (longlong)local_e8) >> 1)) {
        uVar1 = *(uint *)(lVar5 + 8);
        if (uVar1 == 0) {
LAB_1468b5c7c:
          if ((int)uVar7 < 0) {
            local_108 = *(ulonglong *)(*param_1 + 0x14 + (ulonglong)~uVar7 * 0x38);
          }
          else {
            FUN_1468b5666(param_1,&local_108,uVar7 - 1);
          }
          uVar3 = local_108;
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if (uVar3 == DAT_14c892e7c) goto LAB_1468b5ccb;
          local_f8 = &DAT_149e31048;
        }
        else {
          if ((int)uVar1 < 0) {
            local_100 = *(ulonglong *)(*param_1 + 0x14 + (ulonglong)~uVar1 * 0x38);
          }
          else {
            FUN_1468b5666(param_1,&local_100,uVar1 - 1);
          }
          uVar3 = local_100;
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if (uVar3 == DAT_14c892e7c) goto LAB_1468b5c7c;
LAB_1468b5ccb:
          local_f8 = &DAT_149e0635c;
        }
        local_f0 = 1;
        FUN_144a08824(&local_e8,0,0,&local_f8);
      }
      FUN_1400021e4(lVar5,&local_118);
      local_f0 = local_110 + -1;
      if (local_110 == 0) {
        local_f0 = 0;
      }
      local_f8 = local_118;
      FUN_144a08824(&local_e8,0,0,&local_f8);
      if (local_118 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      if ((bVar4 & 1) == 0) {
        if (0 < (int)uVar7) {
          lVar5 = param_1[2];
          bVar4 = *(byte *)(lVar5 + -0x1c + (ulonglong)uVar7 * 0x68);
          goto LAB_1468b5d64;
        }
LAB_1468b5d95:
        lVar5 = (ulonglong)~uVar7 * 0x38 + *param_1;
      }
      else {
        if ((int)uVar7 < 0) goto LAB_1468b5d95;
        lVar5 = param_1[2];
        bVar4 = 1;
LAB_1468b5d64:
        lVar5 = lVar5 + (ulonglong)uVar7 * 0x68 + -0x68;
      }
      bVar6 = (bool)(bVar6 | (int)uVar7 < 0);
      uVar7 = *(uint *)(lVar5 + 8);
    } while (uVar7 != 0);
  }
  if (((param_5 & bVar4) == 0) && (!bVar6)) {
    local_f8 = &DAT_149e0635c;
    local_f0 = 1;
    FUN_144a08824(&local_e8,0,0,&local_f8);
    local_f8 = (undefined *)*local_128;
    local_f0 = *(int *)(local_128 + 1) + -1;
    if (*(int *)(local_128 + 1) == 0) {
      local_f0 = 0;
    }
    FUN_144a08824(&local_e8,0,0,&local_f8);
  }
  uVar2 = local_120;
  *local_e0 = 0;
  FUN_140056680(local_120,local_e8);
  if (local_d0 == '\x01') {
    FUN_1400020a8(local_e8);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1468b5df8 FUN_1468b5df8 body=190 status=ok
// SIG undefined FUN_1468b5df8(void)

undefined8 FUN_1468b5df8(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468b5820(param_1,local_38);
  FUN_1400021e4((param_3 & 0xffffffff) * 0x38 + *param_1 + 0x14,local_58);
  FUN_144a882a8(local_48,local_58,&DAT_149e001d8);
  FUN_1401c7f3e(param_2,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b5eb8 FUN_1468b5eb8 body=295 status=ok
// SIG undefined FUN_1468b5eb8(void)

undefined8 FUN_1468b5eb8(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_1[2] + 0xc + (ulonglong)param_4 * 0x68);
  if ((ulonglong)uVar1 == 0) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_40 = (ulonglong)DAT_14c892ce4;
  }
  else {
    if ((int)uVar1 < 0) {
      puVar2 = (ulonglong *)((ulonglong)~uVar1 * 0x38 + *param_1);
    }
    else {
      puVar2 = (ulonglong *)((ulonglong)uVar1 * 0x68 + param_1[2] + -0x68);
    }
    local_40 = *puVar2;
  }
  local_78 = 0;
  FUN_1468b5ac4(param_1,local_50,param_3,param_4);
  FUN_1400021e4(&local_40,local_70);
  FUN_144a882a8(local_60,local_70,&DAT_149e001d8);
  FUN_1401c7f3e(param_2,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b5fe0 FUN_1468b5fe0 body=177 status=ok
// SIG undefined FUN_1468b5fe0(void)

undefined8
FUN_1468b5fe0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,byte param_5)

{
  undefined1 auStack_78 [32];
  byte local_58;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1401031ac(*(undefined8 *)(param_1 + 0xa0),0);
  }
  else {
    FUN_140056680(local_48,param_4);
  }
  local_58 = param_4 == 0 & param_5;
  FUN_1468b5ac4(param_1 + 8,param_2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b6092 FUN_1468b6092 body=131 status=ok
// SIG undefined FUN_1468b6092(void)

undefined8 FUN_1468b6092(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1401031ac(*(undefined8 *)(param_1 + 0xa0),0,local_38);
  FUN_1468b5eb8(param_1 + 8,param_2,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b6116 FUN_1468b6116 body=68 status=ok
// SIG undefined FUN_1468b6116(void)

void FUN_1468b6116(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(0x88,0x10);
    FUN_1427879d8(lVar1);
    *(longlong *)(param_1 + 0x238) = lVar1;
  }
  FUN_14681a46e(lVar1);
  return;
}



// FUNCTION 1468b615a FUN_1468b615a body=30 status=ok
// SIG undefined FUN_1468b615a(void)

void FUN_1468b615a(longlong param_1,undefined8 *param_2)

{
  if ((*(longlong *)(param_1 + 0x238) != 0) && (*(int *)(param_2 + 1) != 0)) {
    FUN_140c54e34(*(longlong *)(param_1 + 0x238),*param_2);
    return;
  }
  return;
}



// FUNCTION 1468b6178 FUN_1468b6178 body=45 status=ok
// SIG undefined FUN_1468b6178(void)

void FUN_1468b6178(longlong param_1,undefined8 param_2)

{
  FUN_140c54d7a(*(undefined8 *)(param_1 + 0x238));
  FUN_142787a10(*(undefined8 *)(param_1 + 0x238),param_2);
  return;
}



// FUNCTION 1468b61a6 FUN_1468b61a6 body=198 status=ok
// SIG undefined FUN_1468b61a6(void)

void FUN_1468b61a6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e8a358;
  lVar1 = param_1[0x47];
  if (lVar1 != 0) {
    FUN_1427879f6(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1468baaa5(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_146875c70(param_1 + 0x15);
  FUN_1468b626c(param_1 + 1);
  return;
}



// FUNCTION 1468b626c FUN_1468b626c body=129 status=ok
// SIG undefined FUN_1468b626c(void)

void FUN_1468b626c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1468b8ea0(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1468b903c(param_1[4],(int)param_1[5]);
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



// FUNCTION 1468b62ed FUN_1468b62ed body=2659 status=ok
// SIG undefined FUN_1468b62ed(void)

longlong FUN_1468b62ed(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  code **ppcVar17;
  code **ppcVar18;
  code **ppcVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  uint local_104;
  code *local_100;
  undefined1 local_f4 [4];
  code *local_f0;
  int local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  int local_c8;
  undefined1 local_bc [12];
  int local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  code *local_68;
  undefined8 uStack_60;
  code *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_6 == (undefined8 *)0x0) {
    pcVar7 = (code *)0x0;
  }
  else {
    pcVar7 = (code *)*param_6;
  }
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20), lVar10 != 0))
  goto LAB_1468b6636;
  local_78 = *param_2;
  local_70 = *(undefined1 *)(param_2 + 1);
  FUN_1468750d6(&local_78,&local_88);
  pcVar9 = local_88;
  if (local_80 == 0) {
    pcVar9 = (code *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_90,pcVar9,1);
  if (local_90 == (code *)0x0) {
    local_68 = (code *)0x149e8a39a;
    uStack_60._0_4_ = 0x14;
    ppcVar17 = &local_a8;
    FUN_1446e940c(ppcVar17,&local_68);
    local_68 = (code *)0x149e8a3c4;
    uStack_60 = (code **)CONCAT44(uStack_60._4_4_,6);
    ppcVar19 = &local_e0;
    FUN_1446e940c(ppcVar19,&local_68);
    pwVar12 = L"Can\'t resolve asset name";
    ppcVar18 = &local_68;
LAB_1468b65ef:
    FUN_140208bae(ppcVar18,ppcVar19,ppcVar17,pwVar12);
    local_118 = CONCAT44(local_118._4_4_,param_3);
    FUN_1427f2907(pcVar7,param_2,ppcVar18,param_1);
    if (*ppcVar18 != (code *)0x0) {
      (**(code **)(*(longlong *)*ppcVar18 + 0x10))();
    }
    lVar10 = 0;
  }
  else {
    local_a8 = (code *)0x0;
    uStack_a0 = 0;
    local_98 = local_90;
    FUN_144867a42(&local_68);
    if (local_58 != local_90) {
      local_90 = local_58;
      FUN_1400021e4(&local_90,&local_a8);
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_a8;
      local_80 = (uint)uStack_a0;
      local_7c = uStack_a0._4_4_;
      local_bc._4_8_ = local_a8;
      local_b0 = (uint)uStack_a0 - 1;
      if ((uint)uStack_a0 == 0) {
        local_b0 = 0;
      }
      cVar3 = FUN_140b1a3de();
      if (cVar3 == '\0') {
        local_a8 = (code *)0x149e8a468;
        uStack_a0._0_4_ = 0x16;
        ppcVar17 = &local_e0;
        FUN_1446e940c(ppcVar17,&local_a8);
        local_a8 = (code *)0x149e8a3c4;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,6);
        ppcVar19 = (code **)local_bc;
        FUN_1446e940c(ppcVar19,&local_a8);
        pwVar12 = L"PackagePath has invalid FCoreRedirects redirector to unmounted contentroot";
        ppcVar18 = &local_a8;
        goto LAB_1468b65ef;
      }
    }
    lVar6 = param_1;
    if (param_1 == 0) {
      pcVar9 = local_88;
      if (local_80 == 0) {
        pcVar9 = (code *)&DAT_149dfb77a;
      }
      uVar5 = FUN_144a7a812();
      lVar8 = 0;
      lVar6 = FUN_140277b32(uVar5,0,pcVar9);
      lVar10 = 1;
      cVar3 = '\x01';
      if (lVar6 == 0) goto LAB_1468b6401;
      if (*(longlong *)(lVar6 + 0x20) == 0) goto LAB_1468b63f2;
      lVar8 = 0;
    }
    else {
LAB_1468b63f2:
      lVar10 = 0;
      lVar8 = lVar6;
      if ((*(byte *)(lVar6 + 0x2c) & 0x11) != 0) goto LAB_1468b6624;
LAB_1468b6401:
      cVar3 = (char)lVar10;
    }
    pcVar9 = local_88;
    local_a8 = (code *)0x0;
    lVar10 = (longlong)(int)local_80;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,local_80);
    local_104 = param_3;
    local_100 = pcVar7;
    if (lVar10 == 0) {
      uStack_a0 = (ulonglong)local_80;
      uVar4 = 0;
    }
    else {
      FUN_1446dd670(&local_a8,local_80,0);
      memcpy(local_a8,pcVar9,lVar10 * 2);
      uVar4 = local_80;
    }
    local_d0 = local_88;
    local_c8 = uVar4 - 1;
    if (uVar4 == 0) {
      local_c8 = 0;
    }
    cVar2 = FUN_14475c62c();
    if (cVar2 == '\0') {
      FUN_1427b778a(&local_e0,&local_88);
      FUN_1412251f4(&local_68,&local_e0);
      if (local_e0 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_e0 = local_68;
      uStack_d8 = uStack_60;
      if ((uint)uStack_60 == local_80) {
        bVar20 = true;
        if (1 < (int)(uint)uStack_60) {
          lVar10 = 0;
          while( true ) {
            uVar13 = *(ushort *)(local_68 + lVar10);
            uVar14 = (ulonglong)uVar13;
            uVar15 = *(ushort *)(local_88 + lVar10);
            if (uVar13 != uVar15) break;
            if (uVar13 == 0) goto LAB_1468b6959;
LAB_1468b6805:
            lVar10 = lVar10 + 2;
          }
          if ((uVar15 | uVar13) < 0x80) {
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            uVar16 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1468b6805;
          }
          if (uVar13 != uVar15) goto LAB_1468b6a1e;
        }
      }
      else {
        bVar20 = true;
        if (local_80 + (uint)uStack_60 != 1) {
LAB_1468b6a1e:
          pcVar7 = local_68;
          uVar4 = (uint)uStack_60;
          uVar11 = uStack_60._4_4_;
          if (local_88 != (code *)0x0) {
            FUN_1400020a8();
            pcVar7 = local_e0;
            uVar4 = (uint)uStack_d8;
            uVar11 = uStack_d8._4_4_;
          }
          local_e0 = (code *)0x0;
          uStack_d8 = (code **)0x0;
          pcVar9 = (code *)&DAT_149dfb77a;
          if (uVar4 != 0) {
            pcVar9 = pcVar7;
          }
          local_88 = pcVar7;
          local_80 = uVar4;
          local_7c = uVar11;
          FUN_1446f470e(&local_68,pcVar9,1);
          local_90 = local_68;
          local_f0 = local_88;
          local_e8 = local_80 - 1;
          if (local_80 == 0) {
            local_e8 = 0;
          }
          cVar2 = FUN_140b1a3de(&local_f0,&local_78);
          bVar20 = true;
          if (cVar2 == '\0') {
            local_68 = (code *)0x149e8a558;
            uStack_60._0_4_ = 0x14;
            FUN_1446e940c(local_bc,&local_68);
            local_68 = (code *)0x149e8a3c4;
            uStack_60 = (code **)CONCAT44(uStack_60._4_4_,6);
            FUN_1446e940c(local_f4,&local_68);
            FUN_140208bae(&local_68,local_f4,local_bc,
                          L"GetDelegateResolvedPackagePath or GetLocalizedPackagePath returned path to unmounted contentroot"
                         );
            local_118 = CONCAT44(local_118._4_4_,local_104);
            FUN_1427f2907(local_100,param_2,&local_68,param_1);
            if (local_68 != (code *)0x0) {
              (**(code **)(*(longlong *)local_68 + 0x10))();
            }
            bVar20 = false;
          }
        }
      }
LAB_1468b6959:
      if (local_e0 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (bVar20) goto LAB_1468b648b;
      goto LAB_1468b6971;
    }
LAB_1468b648b:
    cVar2 = FUN_1427b6e6c(&local_78,0,&local_78);
    FUN_1468750d6(&local_78,&local_68);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    pcVar7 = local_100;
    uVar4 = local_104;
    local_88 = local_68;
    local_80 = (uint)uStack_60;
    local_7c = uStack_60._4_4_;
    if (cVar2 == '\0') {
      if ((local_104 & 0x2002) == 0) {
        local_58 = (code *)*param_2;
        local_68 = (code *)0x0;
        uStack_60 = (code **)0x0;
        cVar3 = FUN_145c98d34(0x40);
        if (cVar3 == '\0') {
          local_68 = (code *)0x149e8a5a4;
          uStack_60._0_4_ = 0x11;
          FUN_1446e940c(&local_e0,&local_68);
          local_68 = (code *)0x149e8a3c4;
          uStack_60 = (code **)CONCAT44(uStack_60._4_4_,6);
          FUN_1446e940c(local_bc,&local_68);
          FUN_140208bae(&local_68,local_bc,&local_e0,L"Can\'t find file.");
          goto LAB_1468b6c29;
        }
      }
LAB_1468b6971:
      lVar10 = 0;
    }
    else {
      if (cVar3 == '\0') {
        lVar6 = 0;
      }
      else {
        if ((uint)uStack_a0 == (uint)uStack_60) {
          if (1 < (int)(uint)uStack_60) {
            lVar10 = 0;
            while( true ) {
              uVar13 = *(ushort *)(local_a8 + lVar10);
              uVar14 = (ulonglong)uVar13;
              uVar15 = *(ushort *)(local_68 + lVar10);
              if (uVar13 != uVar15) break;
              if (uVar13 == 0) goto LAB_1468b6b63;
LAB_1468b6551:
              lVar10 = lVar10 + 2;
            }
            if ((uVar15 | uVar13) < 0x80) {
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              uVar16 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1468b6551;
            }
            pcVar9 = local_a8;
            if (uVar13 != uVar15) goto LAB_1468b6b95;
          }
LAB_1468b6b63:
          iVar1 = (uint)uStack_60 - 1;
          if ((uint)uStack_60 == 0) {
            iVar1 = 0;
          }
          FUN_1402980a2(&local_a8,local_68,iVar1);
        }
        else if ((uint)uStack_a0 + (uint)uStack_60 == 1) goto LAB_1468b6b63;
        pcVar9 = local_a8;
        if ((uint)uStack_a0 == 0) {
          pcVar9 = (code *)&DAT_149dfb77a;
        }
LAB_1468b6b95:
        lVar8 = FUN_14099f58f(pcVar9);
        if (lVar8 == 0) {
          local_68 = (code *)0x149e8a612;
          uStack_60._0_4_ = 0x16;
          FUN_1446e940c(&local_e0,&local_68);
          local_68 = (code *)0x149e8a3c4;
          uStack_60 = (code **)CONCAT44(uStack_60._4_4_,6);
          FUN_1446e940c(local_bc,&local_68);
          FUN_140208bae(&local_68,local_bc,&local_e0,L"Can\'t convert filename to asset name");
LAB_1468b6c29:
          local_118 = CONCAT44(local_118._4_4_,uVar4);
          FUN_1427f2907(pcVar7,param_2,&local_68,param_1);
          if (local_68 != (code *)0x0) {
            (**(code **)(*(longlong *)local_68 + 0x10))();
          }
          goto LAB_1468b6971;
        }
        lVar6 = lVar8;
        if ((uVar4 >> 0x13 & 1) != 0) {
          *(byte *)(lVar8 + 0x2e) = *(byte *)(lVar8 + 0x2e) | 0x10;
        }
      }
      if (((lVar8 == param_1) || (*(longlong *)(lVar8 + 0x48) == 0)) ||
         (lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20), lVar10 == 0)) {
        if (pcVar7 == (code *)0x0) {
          uStack_60 = &local_e0;
          local_68 = FUN_141073f72;
          lVar10 = FUN_144a773aa(&local_68,&DAT_14c75ec34);
          local_68 = *(code **)(lVar10 + 0x58);
          pcVar7 = local_68;
          if (local_68 != (code *)0x0) goto LAB_1468b6ca6;
          pcVar7 = (code *)0x0;
        }
        else {
LAB_1468b6ca6:
          *(int *)pcVar7 = *(int *)pcVar7 + 1;
          local_68 = pcVar7;
        }
        local_110 = param_8;
        local_118 = param_5;
        lVar10 = FUN_1427f379e(pcVar7,lVar8,&local_78,uVar4);
        if ((lVar6 != 0) && (lVar10 == 0)) {
          FUN_144757f48(lVar6,0x40000000);
          uVar4 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          do {
            uVar4 = *(uint *)(lVar6 + 8);
            if ((uVar4 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar20 = uVar4 == *(uint *)(lVar6 + 8);
            if (bVar20) {
              *(uint *)(lVar6 + 8) = uVar4 | 0x200000;
            }
            UNLOCK();
          } while (!bVar20);
        }
      }
      else {
        if (pcVar7 == (code *)0x0) goto LAB_1468b6974;
        uStack_60 = &local_e0;
        local_68 = FUN_141073f72;
        lVar6 = FUN_144a773aa(&local_68,&DAT_14c75ec34);
        pcVar9 = *(code **)(lVar6 + 0x58);
        if (pcVar9 != (code *)0x0) {
          *(int *)pcVar9 = *(int *)pcVar9 + 1;
        }
        local_68 = pcVar9;
        if (((*(int *)(pcVar9 + 0xc) < 1) || (*(int *)(pcVar7 + 0xc) != 1)) &&
           (cVar3 = (*(code *)PTR_FUN_14c758760)(), cVar3 == '\0')) {
          if (pcVar9 != pcVar7) {
            FUN_14690185a(pcVar7,pcVar9 + 0x10);
          }
        }
        else {
          *param_6 = pcVar9;
        }
      }
      FUN_1468b6d52(&local_68);
    }
LAB_1468b6974:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1468b6624:
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1468b6636:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1468b6d52 FUN_1468b6d52 body=44 status=ok
// SIG undefined FUN_1468b6d52(void)

void FUN_1468b6d52(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    FUN_14690182a(piVar1);
    FUN_1400020a8(piVar1);
    return;
  }
  return;
}



// FUNCTION 1468b6d7e FUN_1468b6d7e body=136 status=ok
// SIG undefined FUN_1468b6d7e(void)

void FUN_1468b6d7e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_144b00ba4();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + 0x20), lVar1 != 0)) {
    local_30 = 1;
    local_38 = &local_28;
    local_28 = lVar1;
    FUN_1427f38d2();
    uVar2 = FUN_1402a3fee();
    local_40 = 1;
    local_48 = &local_28;
    local_28 = lVar1;
    FUN_1468bc97a(uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b6e08 FUN_1468b6e08 body=323 status=ok
// SIG undefined FUN_1468b6e08(void)

longlong * FUN_1468b6e08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1468bb8de(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1468bb93e(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468b6f4e FUN_1468b6f4e body=57 status=ok
// SIG undefined FUN_1468b6f4e(void)

void FUN_1468b6f4e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)*param_1;
  AcquireSRWLockExclusive(SRWLock);
  FUN_14090659a(SRWLock + 1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001468b6f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1468b6f88 FUN_1468b6f88 body=135 status=ok
// SIG undefined FUN_1468b6f88(void)

void FUN_1468b6f88(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 0x328) = param_2;
  *(byte *)(param_1 + 0x3e1) = *(byte *)(param_1 + 0x3e1) & 0x7f | param_3 << 7;
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(0x10,0x10);
    FUN_146825ab4(lVar1,param_1 + 0x240);
    *(longlong *)(param_1 + 0x2f0) = lVar1;
  }
  plVar2 = (longlong *)FUN_14001cc68(8,0x10);
  *plVar2 = lVar1;
  *(longlong **)(param_1 + 0x2e8) = plVar2;
  *(longlong **)(param_1 + 0x2f8) = plVar2;
  *(undefined1 *)(param_1 + 0x300) = 1;
  return;
}



// FUNCTION 1468b7010 FUN_1468b7010 body=95 status=ok
// SIG undefined FUN_1468b7010(void)

void FUN_1468b7010(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x280) = DAT_14c89603c;
  *(undefined4 *)(param_1 + 0x288) = 1;
  puVar1 = (undefined8 *)FUN_144a8b586();
  *(undefined8 *)(param_1 + 0x28c) = *puVar1;
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(puVar1 + 1);
  *(byte *)(param_1 + 0x268) = *(byte *)(param_1 + 0x268) | 1;
  FUN_1449c2eca(param_1 + 0x240,1);
  FUN_146821802(param_1 + 0x240);
  return;
}



// FUNCTION 1468b7070 FUN_1468b7070 body=316 status=ok
// SIG undefined FUN_1468b7070(void)

longlong FUN_1468b7070(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30 + (longlong)param_2 * 0x38);
  if (lVar3 == 0) {
    lVar6 = *(longlong *)(param_1 + 8) + (longlong)param_2 * 0x38;
    do {
      if ((*(longlong *)(lVar6 + 0x28) != 0) && (lVar3 = FUN_144b00dc8(), lVar3 != 0)) break;
      uVar2 = *(uint *)(lVar6 + 8);
      if (uVar2 == 0) {
        uVar1 = *(ulonglong *)(lVar6 + 0x14);
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if (uVar1 == DAT_14c892e7c) {
          FUN_1400021e4(lVar6,&local_38);
          puVar5 = local_38;
          if (local_30 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          uVar4 = FUN_144a7a812();
          lVar3 = 0;
          lVar6 = FUN_140277b32(uVar4,0,puVar5,0);
          if (lVar6 != 0) {
            if (*(longlong *)(lVar6 + 0x48) == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x48) + 0x20);
            }
          }
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        uVar2 = *(uint *)(lVar6 + 8);
      }
      if (-1 < (int)uVar2) {
        lVar3 = 0;
        break;
      }
      lVar6 = *(longlong *)(param_1 + 8) + (ulonglong)~uVar2 * 0x38;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30 + (ulonglong)~uVar2 * 0x38);
    } while (lVar3 == 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1468b71ae FUN_1468b71ae body=183 status=ok
// SIG undefined FUN_1468b71ae(void)

void FUN_1468b71ae(undefined8 param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code *local_30;
  code **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_144b00dc8();
  uVar2 = FUN_14283ebea(param_1);
  if (((lVar3 != 0) && (-1 < (int)uVar2)) && ((int)uVar2 < *(int *)(lVar3 + 0x20))) {
    FUN_14472eae2(param_1,0x3400);
    pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x18) + 0x4c + (ulonglong)uVar2 * 0x68);
    *pbVar1 = *pbVar1 | 0x80;
  }
  local_38 = &local_48;
  local_28 = &local_40;
  local_40 = FUN_142802644;
  local_30 = FUN_1449cc908;
  local_58 = 0;
  local_48 = lVar3;
  FUN_14482c30e(param_1,&local_30,CONCAT71((int7)((ulonglong)local_28 >> 8),1),0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b7266 FUN_1468b7266 body=86 status=ok
// SIG undefined FUN_1468b7266(void)

undefined8 FUN_1468b7266(void)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_141073f72;
  lVar1 = FUN_144a773aa(&local_18,&DAT_14c75ec34);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(undefined8 *)(lVar1 + 0x58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b72be FUN_1468b72be body=213 status=ok
// SIG undefined FUN_1468b72be(void)

int FUN_1468b72be(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x3c8);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0xe8) < 1) {
      iVar6 = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x328) + 0x1a0))
                (*(longlong **)(param_1 + 0x328),(longlong)*(int *)(param_1 + 0xec));
      iVar6 = *(int *)(param_1 + 0x3c8);
    }
  }
  iVar7 = *(int *)(param_1 + 0xe8);
  if (iVar6 < iVar7) {
    plVar1 = *(longlong **)(param_1 + 0x2f8);
    do {
      cVar2 = FUN_1427f9d12(param_1,iVar7,100);
      if (cVar2 != '\0') {
        iVar6 = *(int *)(param_1 + 0x3c8);
        iVar7 = *(int *)(param_1 + 0xe8);
        break;
      }
      uVar5 = FUN_1468b7428(param_1 + 0x1f0);
      thunk_FUN_14010d536(uVar5,*(undefined8 *)(*plVar1 + 8));
      iVar6 = *(int *)(param_1 + 0x3c8) + 1;
      *(int *)(param_1 + 0x3c8) = iVar6;
      iVar7 = *(int *)(param_1 + 0xe8);
    } while (iVar6 < iVar7);
  }
  iVar4 = 2;
  if (iVar6 == iVar7) {
    bVar3 = FUN_1427f9d12(param_1,iVar7,1);
    iVar4 = bVar3 + 1;
  }
  return iVar4;
}



// FUNCTION 1468b7394 FUN_1468b7394 body=29 status=ok
// SIG undefined FUN_1468b7394(void)

undefined8 FUN_1468b7394(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x318);
  return param_2;
}



// FUNCTION 1468b73e2 FUN_1468b73e2 body=68 status=ok
// SIG undefined FUN_1468b73e2(void)

void FUN_1468b73e2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1468baaa5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1468bbdae(param_1,param_2);
  return;
}



// FUNCTION 1468b7428 FUN_1468b7428 body=59 status=ok
// SIG undefined FUN_1468b7428(void)

longlong FUN_1468b7428(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406f071e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1468bbef3(lVar2);
  return lVar2;
}



// FUNCTION 1468b7464 FUN_1468b7464 body=59 status=ok
// SIG undefined FUN_1468b7464(void)

longlong FUN_1468b7464(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468bbf04(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  thunk_FUN_1468bf556(lVar2);
  return lVar2;
}



// FUNCTION 1468b74a0 FUN_1468b74a0 body=59 status=ok
// SIG undefined FUN_1468b74a0(void)

longlong FUN_1468b74a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468bbf9a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  thunk_FUN_1468bf190(lVar2);
  return lVar2;
}



// FUNCTION 1468b74f0 FUN_1468b74f0 body=72 status=ok
// SIG undefined FUN_1468b74f0(void)

void FUN_1468b74f0(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2d4) == '\0') {
    if ((DAT_14c872bf0 == '\x01') && (0 < *(int *)(param_1 + 0x110))) {
      iVar1 = 0;
      do {
        FUN_1427fa436(param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x110));
    }
    *(undefined1 *)(param_1 + 0x2d4) = 1;
  }
  return;
}



// FUNCTION 1468b7538 FUN_1468b7538 body=204 status=ok
// SIG undefined FUN_1468b7538(void)

undefined8 FUN_1468b7538(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x2d) & 8) != 0)) {
    local_20 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    FUN_1400021e4(&local_20,local_38);
    FUN_146871c70(&local_28,local_38,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    local_20 = *(ulonglong *)(param_2 + 0x18);
    FUN_1400021e4(&local_20,local_38);
    FUN_146871c70(&local_20,local_38,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28 != local_20) {
      uVar1 = 0;
      goto LAB_1468b755d;
    }
  }
  uVar1 = 1;
LAB_1468b755d:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b7606 FUN_1468b7606 body=118 status=ok
// SIG undefined FUN_1468b7606(void)

undefined8 * FUN_1468b7606(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc + (param_3 & 0xffffffff) * 0x68);
  if ((int)uVar1 < 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)~uVar1 * 0x38);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x68 + (longlong)(int)uVar1 * 0x68);
    if ((longlong)(int)uVar1 < 0) {
      puVar3 = (undefined8 *)((ulonglong)~uVar1 * 0x38 + *(longlong *)(param_1 + 8));
    }
    uVar2 = *puVar3;
  }
  else {
    if (uVar1 == 0) {
      FUN_1446f57c6(&DAT_14c8687c0,param_2);
      return param_2;
    }
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1468b767c FUN_1468b767c body=29 status=ok
// SIG undefined FUN_1468b767c(void)

undefined8 FUN_1468b767c(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0xd8);
  return param_2;
}



// FUNCTION 1468b769a FUN_1468b769a body=164 status=ok
// SIG undefined FUN_1468b769a(void)

longlong * FUN_1468b769a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_1427fcad6();
  if (plVar3 != (longlong *)0x0) {
    if (param_3 == '\0') {
      lVar4 = FUN_144a797b2();
      plVar5 = plVar3;
      if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        do {
          if ((*(uint *)(plVar5 + 1) & 0x30) != 0) goto LAB_1468b76b8;
          plVar1 = plVar5 + 4;
          plVar5 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != (longlong *)0x0);
        cVar2 = (**(code **)(*plVar3 + 0x290))(plVar3);
        if (cVar2 == '\0') {
          lVar4 = FUN_140007dea();
          if (*(int *)(plVar3[2] + 0x38) < *(int *)(lVar4 + 0x38)) {
            return plVar3;
          }
          if (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              != lVar4 + 0x30) {
            return plVar3;
          }
        }
      }
    }
LAB_1468b76b8:
    FUN_1427ff290(param_1 + 0x240,plVar3);
  }
  return plVar3;
}



// FUNCTION 1468b773e FUN_1468b773e body=119 status=ok
// SIG undefined FUN_1468b773e(void)

longlong FUN_1468b773e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(uint *)(lVar1 + 0xc + (longlong)param_2 * 0x68);
  if (((int)uVar3 < 0) && ((*(byte *)(param_1 + 0x2d2) & 0x10) == 0)) {
    FUN_1427fa436(param_1,~uVar3);
    uVar3 = *(uint *)(lVar1 + (longlong)param_2 * 0x68 + 0xc);
  }
  lVar1 = FUN_1428001a0(param_1,uVar3);
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1468b77b6 FUN_1468b77b6 body=64 status=ok
// SIG undefined FUN_1468b77b6(void)

undefined8 FUN_1468b77b6(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((DAT_14c872ba8 != '\x01') || (*(char *)(param_1 + 0x2e0) != '\x01')) {
    uVar1 = FUN_1428001a0();
    return uVar1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0 < (int)param_2) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x28 + (ulonglong)param_2 * 0x68);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28 + (ulonglong)~param_2 * 0x38);
}



// FUNCTION 1468b77f6 FUN_1468b77f6 body=50 status=ok
// SIG undefined FUN_1468b77f6(void)

undefined8 FUN_1468b77f6(longlong param_1,undefined8 param_2,uint param_3)

{
  if ((int)param_3 < 0) {
    FUN_1468b5df8(param_1 + 8,param_2,~param_3);
  }
  else {
    FUN_1468b6092(param_1,param_2,param_3 - 1);
  }
  return param_2;
}



// FUNCTION 1468b7828 FUN_1468b7828 body=202 status=ok
// SIG undefined FUN_1468b7828(void)

undefined8 FUN_1468b7828(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_140007dea();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 3;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b78f4 FUN_1468b78f4 body=207 status=ok
// SIG undefined FUN_1468b78f4(void)

undefined8 FUN_1468b78f4(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)param_2 * 0x38;
  lVar3 = *(longlong *)(lVar4 + 0x30 + lVar6);
  do {
    if (lVar3 != 0) {
LAB_1468b791b:
      uVar2 = 0;
LAB_1468b791d:
      if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar1 = *(uint *)(lVar6 + lVar4 + 8);
    if (uVar1 == 0) {
      FUN_1400021e4(lVar6 + lVar4,&local_20);
      puVar7 = local_20;
      if (local_18 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      uVar2 = FUN_144a7a812();
      lVar3 = FUN_140277b32(uVar2,0,puVar7,0);
      lVar4 = lVar3;
      if (local_20 != (undefined2 *)0x0) {
        lVar4 = FUN_1400020a8();
      }
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) == 0)) {
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar3 + 0x2c)) &
                0xffffffffffffff10;
        uVar2 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 4);
        goto LAB_1468b791d;
      }
      goto LAB_1468b791b;
    }
    lVar6 = (longlong)(int)~uVar1 * 0x38;
    lVar3 = *(longlong *)(lVar4 + 0x30 + lVar6);
  } while( true );
}



// FUNCTION 1468b79c4 FUN_1468b79c4 body=151 status=ok
// SIG undefined FUN_1468b79c4(void)

longlong FUN_1468b79c4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1e8 [44];
  undefined4 local_1bc;
  undefined **local_1b8;
  longlong local_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1bc = 0;
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_1;
  FUN_144aa02de(local_1a8,&local_1bc);
  uVar1 = FUN_1468b77b6(param_1 + -0x240,local_1bc);
  *param_2 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b7a5c FUN_1468b7a5c body=210 status=ok
// SIG undefined FUN_1468b7a5c(void)

longlong FUN_1468b7a5c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1e8 [44];
  undefined4 local_1bc;
  undefined **local_1b8;
  longlong local_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1bc = 0;
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  local_1b0 = param_1;
  FUN_144aa02de(local_1a8,&local_1bc);
  lVar1 = FUN_1468b77b6(param_1 + -0x240,local_1bc);
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  *param_2 = lVar1;
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b7b30 FUN_1468b7b30 body=279 status=ok
// SIG undefined FUN_1468b7b30(void)

longlong * FUN_1468b7b30(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[-9] < 1) {
    FUN_1417115de(param_1,param_2);
    FUN_1403f008c(param_1 + 0x1e,param_2);
  }
  else {
    local_34 = 0xffffffff;
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
    if (((int)local_34 < 0) || ((int)param_1[-9] <= (int)local_34)) {
      *param_2 = 0;
      param_2[1] = 0;
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = 0;
      param_2[3] = 0;
      FUN_1468216ba(param_1);
    }
    else {
      puVar2 = (undefined4 *)(param_1[-10] + (ulonglong)local_34 * 0x20);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *(undefined4 *)param_2 = *puVar2;
      *(undefined4 *)((longlong)param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
      FUN_144a787a6(param_2 + 2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468b7c48 FUN_1468b7c48 body=117 status=ok
// SIG undefined FUN_1468b7c48(void)

void FUN_1468b7c48(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_144b00dc8(param_2);
    if (lVar2 == param_1 + -0x240) {
      uVar1 = FUN_14283ebea(param_2);
      if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + -0x220))) &&
         ((lVar2 = (ulonglong)uVar1 * 0x68 + *(longlong *)(param_1 + -0x228),
          (*(byte *)(param_1 + 0x28) & 0x40) != 0 || (*(int *)(param_1 + 0x44) < 0x3f2)))) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))();
        *(longlong *)(lVar2 + 0x30) = lVar3 - *(longlong *)(lVar2 + 0x28);
      }
    }
  }
  return;
}



// FUNCTION 1468b7cbe FUN_1468b7cbe body=117 status=ok
// SIG undefined FUN_1468b7cbe(void)

void FUN_1468b7cbe(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_144b00dc8(param_2);
    if (lVar2 == param_1 + -0x240) {
      uVar1 = FUN_14283ebea(param_2);
      if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + -0x220))) &&
         ((lVar2 = (ulonglong)uVar1 * 0x68 + *(longlong *)(param_1 + -0x228),
          (*(byte *)(param_1 + 0x28) & 0x40) != 0 || (*(int *)(param_1 + 0x44) < 0x3f2)))) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))();
        *(longlong *)(lVar2 + 0x38) = lVar3 - *(longlong *)(lVar2 + 0x28);
      }
    }
  }
  return;
}



// FUNCTION 1468b7d34 FUN_1468b7d34 body=556 status=ok
// SIG undefined FUN_1468b7d34(void)

ulonglong FUN_1468b7d34(longlong param_1,undefined4 *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_b8 = &local_98;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  local_b0 = 1;
  FUN_1468714e6(&local_a8,&local_60,&local_70,&local_80);
  FUN_1446f82e2(&local_50,local_68,local_70,1);
  lVar12 = local_50;
  FUN_1446f82e2(&local_50,local_78,local_80,1);
  lVar1 = local_50;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 1) goto LAB_1468b7e4f;
  lVar8 = 0;
  puVar5 = &DAT_14c87eb00;
  lVar11 = 0;
  do {
    if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar8) == lVar12) {
      uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x14 + lVar8);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar7 == DAT_14c892e7c) {
        if (lVar1 == 0) {
          uVar10 = ~(uint)lVar11;
          goto LAB_1468b7ec7;
        }
        if (0 < (longlong)*(int *)(param_1 + 0x10)) {
          puVar3 = (uint *)(*(longlong *)(param_1 + 8) + 8);
          uVar7 = 0;
          goto LAB_1468b7ea7;
        }
        break;
      }
      iVar2 = *(int *)(param_1 + 0x10);
    }
    lVar11 = lVar11 + 1;
    lVar8 = lVar8 + 0x38;
  } while (lVar11 < iVar2);
  goto LAB_1468b7e4d;
  while( true ) {
    piVar4 = (int *)(*(longlong *)(param_1 + 8) + 8);
    lVar12 = 0;
    while ((*(longlong *)(piVar4 + -2) != local_50 || (*piVar4 != (int)uVar7))) {
      lVar12 = lVar12 + 1;
      piVar4 = piVar4 + 0xe;
      puVar5 = (undefined *)0x0;
      if (*(int *)(param_1 + 0x10) == lVar12) goto LAB_1468b7e4f;
    }
    uVar7 = (ulonglong)~(uint)lVar12;
    puVar6 = puVar6 + 2;
    if (puVar6 == puVar9) break;
LAB_1468b7eef:
    FUN_1446f82e2(&local_50,*(undefined4 *)(puVar6 + 1),*puVar6,1);
    if ((longlong)*(int *)(param_1 + 0x10) < 1) goto LAB_1468b7e4d;
  }
  uVar10 = ~(uint)lVar12;
LAB_1468b7ec7:
  *param_3 = uVar10;
  puVar5 = (undefined *)CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  goto LAB_1468b7e4f;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar3 = puVar3 + 0xe;
    if ((longlong)*(int *)(param_1 + 0x10) == uVar7) break;
LAB_1468b7ea7:
    if ((*(longlong *)(puVar3 + -2) == lVar1) && (~*puVar3 == (uint)lVar11)) {
      uVar7 = ~uVar7;
      if ((longlong)(int)uStack_90 < 1) {
        uVar10 = (uint)uVar7;
        goto LAB_1468b7ec7;
      }
      puVar9 = local_98 + (longlong)(int)uStack_90 * 2;
      puVar6 = local_98;
      goto LAB_1468b7eef;
    }
  }
LAB_1468b7e4d:
  puVar5 = (undefined *)0x0;
LAB_1468b7e4f:
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar5 & 0xffffffff;
}



// FUNCTION 1468b7f62 FUN_1468b7f62 body=107 status=ok
// SIG undefined FUN_1468b7f62(void)

undefined8 FUN_1468b7f62(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c872ba8 == '\x01') {
    local_18 = &local_21;
    local_20 = FUN_141073f72;
    FUN_144a773aa(&local_20,&DAT_14c75ec34);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
  }
  else {
    uVar1 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b7fce FUN_1468b7fce body=539 status=ok
// SIG undefined FUN_1468b7fce(void)

longlong * FUN_1468b7fce(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140133bee(&local_40);
  FUN_144867a42(&local_58,2,&local_40,0);
  *param_1 = 0;
  param_1[1] = 0;
  if (((CONCAT44(uStack_54,local_58) == local_40) && (CONCAT44(uStack_4c,uStack_50) == local_38)) &&
     (local_48 == local_30)) {
    if (param_3 == '\0') goto LAB_1468b80df;
    FUN_144867a42(&local_78,0x10002,&local_40,0);
    local_48 = local_68;
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    if (((local_78 == local_40) && (uStack_70 == local_38)) && (local_68 == local_30))
    goto LAB_1468b80df;
  }
  FUN_14103acde(&local_58,&local_78);
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
LAB_1468b80df:
  if ((1 < (int)param_1[1]) && (cVar1 = FUN_14622a6c4(param_1), cVar1 != '\0')) {
    if ((int)param_1[1] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    uVar2 = FUN_144a797b2();
    local_88 = L"FindNewPathNameForClass";
    lVar3 = FUN_140277cc4(uVar2,puVar4,0,1);
    if (lVar3 == 0) {
      if ((int)param_1[1] == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_1;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/LinkerLoad.cpp",0x1a21,
                    L"No classes that match \"%s\" class name found when looking for redirected class"
                    ,puVar4);
    }
    else {
      local_78 = 0;
      uStack_70 = 0;
      FUN_1401031ac(lVar3,0,&local_78);
      if (&local_78 == param_1) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_78;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468b81ea FUN_1468b81ea body=77 status=ok
// SIG undefined FUN_1468b81ea(void)

void FUN_1468b81ea(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_1;
  FUN_1468999d4(0x40,&local_28,0x4000000);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b8238 FUN_1468b8238 body=209 status=ok
// SIG undefined FUN_1468b8238(void)

void FUN_1468b8238(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  cVar1 = FUN_140f11842(0,&local_48,0,0);
  if (cVar1 != '\0') {
    puVar2 = local_48;
    if ((int)uStack_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar2,1);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = local_50;
    cVar1 = FUN_145c98d34(0x40);
    if (cVar1 != '\0') {
      local_38 = 0;
      uStack_30 = 0;
      local_28 = local_50;
      FUN_1468999d4(0x40,&local_38,0x4000000);
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468b8332 FUN_1468b8332 body=120 status=ok
// SIG undefined FUN_1468b8332(void)

undefined8 FUN_1468b8332(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
    FUN_14054551c((longlong *)(param_1 + 0x178),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x178);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
  }
  return 1;
}



// FUNCTION 1468b83aa FUN_1468b83aa body=412 status=ok
// SIG undefined FUN_1468b83aa(void)

ulonglong FUN_1468b83aa(longlong param_1,LARGE_INTEGER param_2)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(&local_98);
  iVar6 = *(int *)(param_1 + 0x3c0);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar6 != 0) {
    dVar3 = (double)local_98.QuadPart * DAT_14c83f420;
    plVar1 = (longlong *)(param_1 + 0x3b8);
    iVar10 = 0;
    LVar4 = param_2;
    do {
      puVar7 = (undefined8 *)((longlong)(iVar6 + -1) * 0x40 + *plVar1);
      pcVar2 = (code *)*puVar7;
      plVar9 = (longlong *)puVar7[2];
      if ((longlong *)puVar7[2] == (longlong *)0x0) {
        plVar9 = puVar7 + 4;
      }
      local_98 = LVar4;
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar5 = (*pcVar2)(uVar8,&local_98);
      if (cVar5 != '\0') {
        FUN_14033138c(plVar1,*(int *)(param_1 + 0x3c0) + -1);
        FUN_1403312ee(plVar1);
      }
      if (0.0 < (double)param_2) {
        iVar6 = iVar10 * -0x33333333;
        iVar10 = iVar10 + 1;
        if (iVar6 + 0xe6666666U < 0x33333333) {
          QueryPerformanceCounter(&local_98);
          LVar4.s = (_struct_19)
                    (((dVar3 + 16777216.0) -
                     ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0)) + param_2.s);
          if ((double)LVar4 <= 0.0) {
            uVar11 = 0;
            break;
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0x3c0);
    } while (iVar6 != 0);
  }
  if ((local_90 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b8548 FUN_1468b8548 body=343 status=ok
// SIG undefined FUN_1468b8548(void)

void FUN_1468b8548(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  local_34 = -1;
  puVar3 = *(ulonglong **)(param_1 + 0x248);
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)(param_1 + 0x26a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_34,4);
    }
    else {
      FUN_14572512c(plVar2,&local_34);
    }
  }
  else {
    local_34 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  lVar4 = *(longlong *)(param_1 + 0x210);
  lVar7 = (longlong)local_34 * 0x30;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar4 + 0x2c + lVar7);
  uVar5 = *(ulonglong *)(lVar4 + 8 + lVar7);
  uVar8 = 0x7fffffffffffffff;
  if (uVar5 < 0x7fffffffffffffff) {
    uVar8 = uVar5;
  }
  param_2[5] = (char)uVar8;
  param_2[6] = (char)(uVar8 >> 8);
  param_2[7] = (char)(uVar8 >> 0x10);
  param_2[8] = (char)(uVar8 >> 0x18);
  param_2[9] = (char)(uVar8 >> 0x20);
  uVar6 = *(undefined8 *)(lVar4 + 0x20 + lVar7);
  *param_2 = (char)uVar6;
  param_2[1] = (char)((ulonglong)uVar6 >> 8);
  param_2[2] = (char)((ulonglong)uVar6 >> 0x10);
  param_2[3] = (char)((ulonglong)uVar6 >> 0x18);
  param_2[4] = (char)((ulonglong)uVar6 >> 0x20);
  *param_4 = *(undefined8 *)(lVar4 + 0x10 + lVar7);
  *param_3 = *(undefined1 *)(lVar4 + 4 + lVar7);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b86c4 FUN_1468b86c4 body=38 status=ok
// SIG undefined FUN_1468b86c4(void)

undefined8 FUN_1468b86c4(undefined8 param_1,int param_2)

{
  FUN_1468b61a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b86ea FUN_1468b86ea body=38 status=ok
// SIG undefined FUN_1468b86ea(void)

undefined8 FUN_1468b86ea(undefined8 param_1,int param_2)

{
  FUN_1427f9dce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b8710 FUN_1468b8710 body=48 status=ok
// SIG undefined FUN_1468b8710(void)

longlong FUN_1468b8710(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x240;
  FUN_1427f9dce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b8748 FUN_1468b8748 body=94 status=ok
// SIG undefined FUN_1468b8748(void)

undefined8 FUN_1468b8748(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402ac1b3(0,&local_38);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_30._4_4_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b87a8 FUN_1468b87a8 body=275 status=ok
// SIG undefined FUN_1468b87a8(void)

longlong * FUN_1468b87a8(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  local_20 = 0;
  puVar3 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
    }
    else {
      FUN_14572512c(param_1,&local_20);
    }
  }
  else {
    local_20 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  if (((longlong)local_1c < 0) || ((int)param_1[-0xb] <= local_1c)) {
    *param_2 = 0;
    FUN_1468216ba(param_1);
  }
  else {
    *param_2 = CONCAT44(local_20,*(undefined4 *)(param_1[-0xc] + (longlong)local_1c * 4));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b88d0 FUN_1468b88d0 body=175 status=ok
// SIG undefined FUN_1468b88d0(void)

undefined8 FUN_1468b88d0(undefined8 param_1)

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
  local_b8 = FUN_145b09694();
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



// FUNCTION 1468b8980 FUN_1468b8980 body=38 status=ok
// SIG undefined FUN_1468b8980(void)

undefined8 FUN_1468b8980(undefined8 param_1,int param_2)

{
  FUN_145af5b54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b89a6 FUN_1468b89a6 body=33 status=ok
// SIG undefined FUN_1468b89a6(void)

void FUN_1468b89a6(undefined8 param_1)

{
  FUN_145af5be4();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1468b89c8 FUN_1468b89c8 body=105 status=ok
// SIG undefined FUN_1468b89c8(void)

longlong FUN_1468b89c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0xe0) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0xe0) < 2) {
    lVar2 = 0;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x50) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x50) < 2) {
    lVar1 = 0;
  }
  return lVar2 + (ulonglong)(*(int *)(param_1 + 0xc4) + 0x1fU >> 5) * 4 +
         ((longlong)*(int *)(param_1 + 0x14) + (longlong)*(int *)(param_1 + 0xa4)) * 0x20 +
         (ulonglong)(*(int *)(param_1 + 0x34) + 0x1fU >> 5) * 4 + lVar1;
}



// FUNCTION 1468b8a32 FUN_1468b8a32 body=38 status=ok
// SIG undefined FUN_1468b8a32(void)

undefined8 FUN_1468b8a32(undefined8 param_1,int param_2)

{
  FUN_145af5cbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b8a5e FUN_1468b8a5e body=33 status=ok
// SIG undefined FUN_1468b8a5e(void)

void FUN_1468b8a5e(undefined8 param_1)

{
  FUN_145af5d08();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1468b8ab0 FUN_1468b8ab0 body=133 status=ok
// SIG undefined FUN_1468b8ab0(void)

void FUN_1468b8ab0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_1468b8b36(param_1 + 8,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar2 < iVar1) && (iVar3 == iVar4)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
    return;
  }
  return;
}



// FUNCTION 1468b8b36 FUN_1468b8b36 body=134 status=ok
// SIG undefined FUN_1468b8b36(void)

void FUN_1468b8b36(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_140b3a1ec(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1468b8bbc FUN_1468b8bbc body=322 status=ok
// SIG undefined FUN_1468b8bbc(void)

void FUN_1468b8bbc(longlong *param_1)

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



// FUNCTION 1468b8d00 FUN_1468b8d00 body=135 status=ok
// SIG undefined FUN_1468b8d00(void)

longlong FUN_1468b8d00(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140f5cbae();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1468b8d3a;
  }
  local_30 = param_3;
  FUN_1468b8d88(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1468b8d3a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b8d88 FUN_1468b8d88 body=279 status=ok
// SIG undefined FUN_1468b8d88(void)

undefined4 * FUN_1468b8d88(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412eb9fa(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1412eb984(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412ebbe0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b8ea0 FUN_1468b8ea0 body=54 status=ok
// SIG undefined FUN_1468b8ea0(void)

void FUN_1468b8ea0(longlong *param_1)

{
  FUN_1468b8ed6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468b8ed6 FUN_1468b8ed6 body=356 status=ok
// SIG undefined FUN_1468b8ed6(void)

void FUN_1468b8ed6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1468b903c FUN_1468b903c body=43 status=ok
// SIG undefined FUN_1468b903c(void)

void FUN_1468b903c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1468b9068 FUN_1468b9068 body=54 status=ok
// SIG undefined FUN_1468b9068(void)

void FUN_1468b9068(longlong *param_1)

{
  FUN_146869402(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468b909e FUN_1468b909e body=119 status=ok
// SIG undefined FUN_1468b909e(void)

void FUN_1468b909e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1468b9116(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b9116 FUN_1468b9116 body=141 status=ok
// SIG undefined FUN_1468b9116(void)

void FUN_1468b9116(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,4);
  return;
}



// FUNCTION 1468b91a4 FUN_1468b91a4 body=132 status=ok
// SIG undefined FUN_1468b91a4(void)

void FUN_1468b91a4(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1468b9228(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1468b9228 FUN_1468b9228 body=96 status=ok
// SIG undefined FUN_1468b9228(void)

void FUN_1468b9228(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146880a0e(param_1,param_2,1);
  return;
}



// FUNCTION 1468b9288 FUN_1468b9288 body=201 status=ok
// SIG undefined FUN_1468b9288(void)

void FUN_1468b9288(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1468b9351 FUN_1468b9351 body=581 status=ok
// SIG undefined FUN_1468b9351(void)

void FUN_1468b9351(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x0001468b938e:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(uint *)(param_1 + (longlong)iVar10 * 3 + 1) <=
            *(uint *)(param_1 + (longlong)iVar11 * 3 + 1))) {
          iVar10 = iVar11;
        }
        if (*(uint *)(param_1 + (longlong)iVar8 * 3 + 1) <
            *(uint *)(param_1 + (longlong)iVar10 * 3 + 1)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_28 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          local_38 = uVar4;
          uStack_30 = uVar5;
          iVar8 = iVar10;
          goto joined_r0x0001468b938e;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_28 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_28;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(uint *)(param_1 + (longlong)iVar10 * 3 + 1) <=
                *(uint *)(param_1 + (longlong)iVar8 * 3 + 1))) {
              iVar11 = iVar8;
            }
            if (*(uint *)(param_1 + (longlong)iVar11 * 3 + 1) <=
                *(uint *)(param_1 + (longlong)iVar12 * 3 + 1)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_28 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468b9598 FUN_1468b9598 body=128 status=ok
// SIG undefined FUN_1468b9598(void)

void FUN_1468b9598(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c950cc8;
  if (DAT_14c950cfc != 0) {
    *(int *)(DAT_14c950cc8 + (longlong)DAT_14c950cf8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c950cfc) {
    iVar4 = DAT_14c950cf8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14c950cfc = DAT_14c950cfc + 1;
  puVar3 = &DAT_14c950cd8;
  if (DAT_14c950ce8 != (undefined *)0x0) {
    puVar3 = DAT_14c950ce8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c950cf8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1468b9618 FUN_1468b9618 body=132 status=ok
// SIG undefined FUN_1468b9618(void)

void FUN_1468b9618(longlong param_1,int param_2)

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



// FUNCTION 1468b969e FUN_1468b969e body=110 status=ok
// SIG undefined FUN_1468b969e(void)

undefined8 * FUN_1468b969e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b09694();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e8bad0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  return puVar3;
}



// FUNCTION 1468b970c FUN_1468b970c body=340 status=ok
// SIG undefined FUN_1468b970c(void)

undefined4 *
FUN_1468b970c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1468b9862(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_1468b9948(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1468b9a48(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b9862 FUN_1468b9862 body=230 status=ok
// SIG undefined FUN_1468b9862(void)

int * FUN_1468b9862(longlong *param_1,int *param_2)

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



// FUNCTION 1468b9948 FUN_1468b9948 body=142 status=ok
// SIG undefined FUN_1468b9948(void)

void FUN_1468b9948(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1468b99d6((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1468b99b2;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1468b99b2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1468b99d6 FUN_1468b99d6 body=114 status=ok
// SIG undefined FUN_1468b99d6(void)

void FUN_1468b99d6(longlong *param_1,int param_2)

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



// FUNCTION 1468b9a48 FUN_1468b9a48 body=474 status=ok
// SIG undefined FUN_1468b9a48(void)

void FUN_1468b9a48(longlong *param_1)

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



// FUNCTION 1468b9c24 FUN_1468b9c24 body=96 status=ok
// SIG undefined FUN_1468b9c24(void)

undefined8 * FUN_1468b9c24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_144a8d392();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e8bd70;
  return puVar3;
}



// FUNCTION 1468b9c84 FUN_1468b9c84 body=68 status=ok
// SIG undefined FUN_1468b9c84(void)

void FUN_1468b9c84(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1468b9cc8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140957390(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1468b9cc8 FUN_1468b9cc8 body=322 status=ok
// SIG undefined FUN_1468b9cc8(void)

void FUN_1468b9cc8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1468b9e0c FUN_1468b9e0c body=46 status=ok
// SIG undefined FUN_1468b9e0c(void)

void FUN_1468b9e0c(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_1468b9fe2();
  FUN_1468ba13f(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 1468b9e3a FUN_1468b9e3a body=422 status=ok
// SIG undefined FUN_1468b9e3a(void)

void FUN_1468b9e3a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1468b9fe2 FUN_1468b9fe2 body=349 status=ok
// SIG undefined FUN_1468b9fe2(void)

void FUN_1468b9fe2(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar12 * 0x20);
        if (iVar12 < iVar11) {
          puVar17 = (undefined8 *)((longlong)iVar12 * 0x20 + lVar5);
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          puVar9 = (undefined8 *)((longlong)(int)(uVar14 - 1) * 0x20 + lVar5 + 0x20);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -4;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar18 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar6 = puVar15[-4];
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-1];
          puVar17[2] = puVar15[-2];
          puVar17[3] = uVar8;
          *puVar17 = uVar6;
          puVar17[1] = uVar7;
          plVar18 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar18 = param_1 + 2;
          }
          iVar19 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar19 = iVar12;
          }
          puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar19 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1] - uVar3;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x20 + (longlong)_Dst),(longlong)iVar12 << 5);
        iVar10 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1446f4a44(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1468ba13f FUN_1468ba13f body=777 status=ok
// SIG undefined FUN_1468ba13f(void)

void FUN_1468ba13f(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar23 + fVar23);
    plVar16 = &local_368;
    do {
      piVar9 = (int *)*plVar16;
      piVar17 = (int *)plVar16[1];
      iVar19 = (int)plVar16[2];
      iVar11 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar9) >> 5);
      piVar14 = piVar17;
      piVar21 = piVar9;
      if (iVar19 != 0) {
LAB_1468ba203:
        if (8 < (int)(iVar11 + 1U)) {
          uVar12 = (ulonglong)(iVar11 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar9 + uVar12 * 8);
          uVar2 = *(undefined8 *)(piVar9 + uVar12 * 8 + 2);
          uVar3 = *(undefined8 *)(piVar9 + uVar12 * 8 + 4);
          uVar4 = *(undefined8 *)(piVar9 + uVar12 * 8 + 4 + 2);
          uVar5 = *(undefined8 *)piVar9;
          uVar6 = *(undefined8 *)(piVar9 + 2);
          uVar7 = *(undefined8 *)(piVar9 + 6);
          *(undefined8 *)(piVar9 + uVar12 * 8 + 4) = *(undefined8 *)(piVar9 + 4);
          *(undefined8 *)(piVar9 + uVar12 * 8 + 4 + 2) = uVar7;
          *(undefined8 *)(piVar9 + uVar12 * 8) = uVar5;
          *(undefined8 *)(piVar9 + uVar12 * 8 + 2) = uVar6;
          *(undefined8 *)(piVar9 + 4) = uVar3;
          *(undefined8 *)(piVar9 + 6) = uVar4;
          *(undefined8 *)piVar9 = uVar1;
          *(undefined8 *)(piVar9 + 2) = uVar2;
          piVar13 = piVar17 + 8;
          piVar10 = piVar9;
          do {
            piVar8 = piVar10 + 8;
            piVar18 = piVar10 + 8;
            do {
              piVar10 = piVar18;
              piVar15 = piVar8;
              if (piVar17 < piVar10) break;
              piVar8 = piVar15 + 8;
              piVar18 = piVar10 + 8;
            } while (*piVar10 <= *piVar9);
            piVar8 = piVar13 + -0x10;
            do {
              piVar18 = piVar13;
              piVar22 = piVar8;
              piVar13 = piVar18 + -8;
              if (piVar13 <= piVar9) break;
              piVar8 = piVar22 + -8;
            } while (*piVar9 <= *piVar13);
            if (piVar13 < piVar10) goto LAB_1468ba2e6;
            uVar1 = *(undefined8 *)piVar10;
            uVar2 = *(undefined8 *)(piVar10 + 2);
            uVar3 = *(undefined8 *)(piVar10 + 4);
            uVar4 = *(undefined8 *)(piVar10 + 6);
            uVar5 = *(undefined8 *)piVar13;
            uVar6 = *(undefined8 *)(piVar18 + -6);
            uVar7 = *(undefined8 *)(piVar18 + -2);
            *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar18 + -4);
            *(undefined8 *)(piVar10 + 6) = uVar7;
            *(undefined8 *)piVar10 = uVar5;
            *(undefined8 *)(piVar10 + 2) = uVar6;
            *(undefined8 *)(piVar18 + -4) = uVar3;
            *(undefined8 *)(piVar18 + -2) = uVar4;
            *(undefined8 *)piVar13 = uVar1;
            *(undefined8 *)(piVar18 + -6) = uVar2;
          } while( true );
        }
        if (piVar9 < piVar17) {
          do {
            piVar14 = piVar9;
            if (piVar9 + 8 <= piVar17) {
              piVar21 = piVar9 + 8;
              iVar19 = *piVar9;
              do {
                iVar11 = *piVar21;
                iVar20 = iVar19;
                if (iVar19 <= iVar11) {
                  iVar20 = iVar11;
                }
                if (iVar19 < iVar11) {
                  piVar14 = piVar21;
                }
                piVar21 = piVar21 + 8;
                iVar19 = iVar20;
              } while (piVar21 <= piVar17);
            }
            local_68 = *(undefined8 *)piVar14;
            uStack_60 = *(undefined8 *)(piVar14 + 2);
            local_58 = *(undefined8 *)(piVar14 + 4);
            uStack_50 = *(undefined8 *)(piVar14 + 6);
            uVar4 = local_68;
            uVar5 = uStack_60;
            uVar1 = *(undefined8 *)piVar17;
            uVar2 = *(undefined8 *)(piVar17 + 2);
            uVar3 = *(undefined8 *)(piVar17 + 6);
            *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar17 + 4);
            *(undefined8 *)(piVar14 + 6) = uVar3;
            *(undefined8 *)piVar14 = uVar1;
            *(undefined8 *)(piVar14 + 2) = uVar2;
            local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(piVar17 + 4) = local_58;
            *(undefined8 *)(piVar17 + 6) = uStack_50;
            *piVar17 = (int)local_68;
            piVar17[1] = local_68._4_4_;
            piVar17[2] = (int)uStack_60;
            piVar17[3] = uStack_60._4_4_;
            piVar17 = piVar17 + -8;
            local_68 = uVar4;
            uStack_60 = uVar5;
          } while (piVar9 < piVar17);
        }
        goto LAB_1468ba427;
      }
LAB_1468ba43c:
      FUN_1468ba449(piVar9);
LAB_1468ba427:
      plVar16 = plVar16 + -3;
    } while (&local_368 <= plVar16);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1468ba2e6:
  local_68 = *(undefined8 *)piVar9;
  uStack_60 = *(undefined8 *)(piVar9 + 2);
  local_58 = *(undefined8 *)(piVar9 + 4);
  uStack_50 = *(undefined8 *)(piVar9 + 6);
  uVar4 = local_68;
  uVar5 = uStack_60;
  uVar1 = *(undefined8 *)piVar13;
  uVar2 = *(undefined8 *)(piVar18 + -6);
  uVar3 = *(undefined8 *)(piVar18 + -2);
  *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar18 + -4);
  *(undefined8 *)(piVar9 + 6) = uVar3;
  *(undefined8 *)piVar9 = uVar1;
  *(undefined8 *)(piVar9 + 2) = uVar2;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(piVar18 + -4) = local_58;
  *(undefined8 *)(piVar18 + -2) = uStack_50;
  *piVar13 = (int)local_68;
  piVar18[-7] = local_68._4_4_;
  piVar18[-6] = (int)uStack_60;
  piVar18[-5] = uStack_60._4_4_;
  iVar19 = iVar19 + -1;
  piVar18 = piVar18 + -0x10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)piVar22 - (longlong)piVar21 < (longlong)piVar14 - (longlong)piVar15) {
    if (piVar10 < piVar17) {
      *plVar16 = (longlong)piVar10;
      plVar16[1] = (longlong)piVar17;
      *(int *)(plVar16 + 2) = iVar19;
      plVar16 = plVar16 + 3;
    }
    piVar15 = piVar9;
    if (piVar13 <= piVar9 + 8) goto LAB_1468ba427;
  }
  else {
    if (piVar9 + 8 < piVar13) {
      *plVar16 = (longlong)piVar9;
      plVar16[1] = (longlong)piVar18;
      *(int *)(plVar16 + 2) = iVar19;
      plVar16 = plVar16 + 3;
    }
    piVar9 = piVar10;
    piVar18 = piVar17;
    piVar22 = piVar17;
    if (piVar17 <= piVar10) goto LAB_1468ba427;
  }
  iVar11 = (int)((ulonglong)((longlong)piVar22 - (longlong)piVar15) >> 5);
  piVar17 = piVar18;
  piVar14 = piVar22;
  piVar21 = piVar15;
  if (iVar19 == 0) goto LAB_1468ba43c;
  goto LAB_1468ba203;
}



// FUNCTION 1468ba449 FUN_1468ba449 body=580 status=ok
// SIG undefined FUN_1468ba449(void)

void FUN_1468ba449(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x0001468ba47d:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar12 * 4) <= *(int *)(param_1 + (longlong)iVar13 * 4))) {
          iVar12 = iVar13;
        }
        if (*(int *)(param_1 + (longlong)iVar9 * 4) < *(int *)(param_1 + (longlong)iVar12 * 4)) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x0001468ba47d;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               (*(int *)(param_1 + (longlong)iVar12 * 4) <= *(int *)(param_1 + (longlong)iVar9 * 4))
               ) {
              iVar13 = iVar9;
            }
            if (*(int *)(param_1 + (longlong)iVar13 * 4) <= *(int *)(param_1 + (longlong)iVar14 * 4)
               ) break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ba68e FUN_1468ba68e body=141 status=ok
// SIG undefined FUN_1468ba68e(void)

void FUN_1468ba68e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  FUN_1468ba71b();
  bVar1 = *(byte *)(*(longlong *)(*param_1 + 8) + 0x28);
  if (((bVar1 & 1) != 0) ||
     (((bVar1 & 4) == 0 && ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((0 < (int)uVar3) && (0 < iVar5)) {
      *(int *)(param_2 + 0x48) = iVar5;
      FUN_1468b9e3a(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1468ba71b FUN_1468ba71b body=675 status=ok
// SIG undefined FUN_1468ba71b(void)

void FUN_1468ba71b(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  FUN_1449b19ea(*param_1);
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) == 0) {
    local_78 = param_2 + 2;
    local_80 = (longlong *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar2 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar3 = local_98._4_4_;
      local_98 = uVar2;
      do {
        lVar5 = *local_b0;
        FUN_144aa02de(*param_1,lVar5 + (longlong)iVar3 * 0x20);
        lVar5 = lVar5 + (longlong)iVar3 * 0x20;
        plVar6 = (longlong *)(lVar5 + 8);
        local_84 = *(int *)(lVar5 + 0x10);
        local_80 = param_1;
        FUN_1449b19ea(*param_1,&local_84);
        plVar1 = local_80;
        lVar5 = FUN_144aff0ec(&local_80);
        if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
          FUN_1406089a0(plVar6,local_84,1);
        }
        if (0 < local_84) {
          lVar4 = 0;
          lVar5 = 0;
          do {
            (**(code **)(**(longlong **)(*plVar1 + 8) + 0x160))
                      (*(longlong **)(*plVar1 + 8),*plVar6 + lVar4);
            lVar5 = lVar5 + 1;
            lVar4 = lVar4 + 8;
          } while (lVar5 < local_84);
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar3 = local_98._4_4_;
        uVar2 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    FUN_1468b8ed6(param_2,local_88);
    uVar2 = local_98;
    if (0 < local_88) {
      iVar3 = 0;
      do {
        FUN_1468ba9c0(param_2,&local_b0);
        plVar6 = local_a8;
        *(undefined4 *)local_a8 = 0;
        plVar1 = local_a8 + 1;
        local_a8[1] = 0;
        local_a8[2] = 0;
        *(undefined4 *)(local_a8 + 3) = 0xffffffff;
        FUN_144aa02de(*param_1,local_a8);
        local_84 = (int)plVar6[2];
        local_80 = param_1;
        FUN_1449b19ea(*param_1,&local_84);
        plVar6 = local_80;
        lVar5 = FUN_144aff0ec(&local_80);
        if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
          FUN_1406089a0(plVar1,local_84,1);
        }
        if (0 < local_84) {
          lVar5 = 0;
          lVar4 = 0;
          do {
            (**(code **)(**(longlong **)(*plVar6 + 8) + 0x160))
                      (*(longlong **)(*plVar6 + 8),*plVar1 + lVar5);
            lVar4 = lVar4 + 1;
            lVar5 = lVar5 + 8;
          } while (lVar4 < local_84);
        }
        iVar3 = iVar3 + 1;
        uVar2 = local_98;
      } while (iVar3 < local_88);
    }
  }
  local_98 = uVar2;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ba9c0 FUN_1468ba9c0 body=229 status=ok
// SIG undefined FUN_1468ba9c0(void)

int * FUN_1468ba9c0(longlong *param_1,int *param_2)

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



// FUNCTION 1468baaa5 FUN_1468baaa5 body=38 status=ok
// SIG undefined FUN_1468baaa5(void)

void FUN_1468baaa5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468baacc(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 1468baacc FUN_1468baacc body=68 status=ok
// SIG undefined FUN_1468baacc(void)

void FUN_1468baacc(longlong *param_1)

{
  FUN_1467d68ca(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14688a64e(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468bab10 FUN_1468bab10 body=369 status=ok
// SIG undefined FUN_1468bab10(void)

longlong * FUN_1468bab10(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1468bbcd2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x49249 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1468bf571(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x38;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1468bbcd2(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1468b7464(param_2);
        FUN_1468bf571(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468bac82 FUN_1468bac82 body=369 status=ok
// SIG undefined FUN_1468bac82(void)

longlong * FUN_1468bac82(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1468bbd40(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x27627 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1468bf1cf(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1468bbd40(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1468b74a0(param_2);
        FUN_1468bf1cf(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468badf4 FUN_1468badf4 body=414 status=ok
// SIG undefined FUN_1468badf4(void)

longlong * FUN_1468badf4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1468b903c(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1468bafce(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1468bb02e(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1468baf94(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1468bb348(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1468bb02e(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468baf94 FUN_1468baf94 body=57 status=ok
// SIG undefined FUN_1468baf94(void)

void FUN_1468baf94(undefined8 *param_1,int param_2)

{
  FUN_1468b903c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1468bafce(param_1,param_2);
  return;
}



// FUNCTION 1468bafce FUN_1468bafce body=96 status=ok
// SIG undefined FUN_1468bafce(void)

void FUN_1468bafce(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1468bb02e FUN_1468bb02e body=478 status=ok
// SIG undefined FUN_1468bb02e(void)

longlong * FUN_1468bb02e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [44];
  uint local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_1dc = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1dc = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1dc,4);
    }
    else {
      FUN_14572512c(param_1,&local_1dc);
    }
  }
  else {
    local_1dc = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1dc == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1468bb24e(param_2,0);
    }
  }
  else if ((((int)local_1dc < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1dc && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_1dc;
    lVar6 = 0;
    lVar5 = 0;
    do {
      local_1d8 = &PTR_FUN_149e37810;
      local_1d0 = param_1;
      local_1c8 = &local_1d8;
      local_1c0 = &local_1c8;
      FUN_144aa02de(&local_1d8,*param_2 + lVar6);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar5 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_1dc) ||
       (FUN_1468bb24e(param_2), 0 < (int)local_1dc)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1468bb20e(param_2);
        local_1d8 = &PTR_FUN_149e37810;
        local_1d0 = param_1;
        local_1c8 = &local_1d8;
        local_1c0 = &local_1c8;
        FUN_144aa02de(&local_1d8,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_1dc);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468bb20e FUN_1468bb20e body=64 status=ok
// SIG undefined FUN_1468bb20e(void)

longlong FUN_1468bb20e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468bb2c2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_1468bb2ae(lVar2,1);
  return lVar2;
}



// FUNCTION 1468bb24e FUN_1468bb24e body=96 status=ok
// SIG undefined FUN_1468bb24e(void)

void FUN_1468bb24e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1468bb2ae FUN_1468bb2ae body=19 status=ok
// SIG undefined FUN_1468bb2ae(void)

void FUN_1468bb2ae(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 1468bb2c2 FUN_1468bb2c2 body=132 status=ok
// SIG undefined FUN_1468bb2c2(void)

void FUN_1468bb2c2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468bb348 FUN_1468bb348 body=132 status=ok
// SIG undefined FUN_1468bb348(void)

void FUN_1468bb348(longlong param_1,int param_2)

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



// FUNCTION 1468bb3ce FUN_1468bb3ce body=363 status=ok
// SIG undefined FUN_1468bb3ce(void)

longlong * FUN_1468bb3ce(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1468baaa5(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1468bbdae(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x20000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467c5a62(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x80;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1468b73e2(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1468bb53a(param_2);
        FUN_1467c5a62(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468bb53a FUN_1468bb53a body=64 status=ok
// SIG undefined FUN_1468bb53a(void)

longlong FUN_1468bb53a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14688ac70(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_14688ac2f(lVar2,1);
  return lVar2;
}



// FUNCTION 1468bb57a FUN_1468bb57a body=131 status=ok
// SIG undefined FUN_1468bb57a(void)

longlong FUN_1468bb57a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1468bb5fd();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1468b9e3a(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1468bb5fd FUN_1468bb5fd body=735 status=ok
// SIG undefined FUN_1468bb5fd(void)

longlong * FUN_1468bb5fd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined1 auStack_248 [40];
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f4;
  undefined **local_1f0;
  longlong *local_1e8;
  undefined ***local_1e0;
  undefined8 local_1d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1f4 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1f4,4);
      }
      else {
        FUN_14572512c(param_1,&local_1f4);
      }
    }
    else {
      local_1f4 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_1e8 = param_2 + 2;
    local_1f0 = (undefined **)&DAT_100000000;
    local_1e0 = (undefined ***)&DAT_ffffffff;
    local_1d8 = (undefined ****)((ulonglong)local_1d8 & 0xffffffff00000000);
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_1f0);
    }
    local_218 = local_1f0;
    local_210 = local_1e8;
    local_208 = local_1e0;
    pppuVar5 = local_208;
    local_200 = (undefined4)local_1d8;
    local_1fc = local_1d8._4_4_;
    local_208._4_4_ = (int)((ulonglong)local_1e0 >> 0x20);
    local_220 = param_2;
    if (local_208._4_4_ < (int)local_1e8[3]) {
      iVar6 = local_208._4_4_;
      local_208 = pppuVar5;
      do {
        lVar4 = *local_220;
        local_1f0 = &PTR_FUN_149e37810;
        local_1e8 = param_1;
        local_1e0 = &local_1f0;
        local_1d8 = &local_1e0;
        FUN_144aa02de(&local_1f0,lVar4 + (longlong)iVar6 * 0x20);
        FUN_140219018(param_1,lVar4 + (longlong)iVar6 * 0x20 + 8);
        local_208 = (undefined ***)CONCAT44(local_208._4_4_,(uint)local_208 & ~local_218._4_4_);
        FUN_1449c0562(&local_218);
        iVar6 = local_208._4_4_;
        pppuVar5 = local_208;
      } while (local_208._4_4_ < (int)local_210[3]);
    }
  }
  else {
    local_1f4 = 0;
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1f4,4);
      }
      else {
        FUN_14572512c(param_1,&local_1f4);
      }
    }
    else {
      local_1f4 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_1468b8ed6(param_2,local_1f4);
    pppuVar5 = local_208;
    if (0 < local_1f4) {
      iVar6 = 0;
      do {
        FUN_1468ba9c0(param_2,&local_220);
        *(undefined4 *)local_218 = 0;
        ppuVar2 = local_218 + 1;
        local_218[1] = (undefined *)0x0;
        local_218[2] = (undefined *)0x0;
        *(undefined4 *)(local_218 + 3) = 0xffffffff;
        local_1f0 = &PTR_FUN_149e37810;
        local_1e8 = param_1;
        local_1e0 = &local_1f0;
        local_1d8 = &local_1e0;
        FUN_144aa02de(&local_1f0);
        FUN_140219018(param_1,ppuVar2);
        iVar6 = iVar6 + 1;
        pppuVar5 = local_208;
      } while (iVar6 < local_1f4);
    }
  }
  local_208 = pppuVar5;
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468bb8de FUN_1468bb8de body=96 status=ok
// SIG undefined FUN_1468bb8de(void)

void FUN_1468bb8de(longlong param_1,int param_2)

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



// FUNCTION 1468bb93e FUN_1468bb93e body=132 status=ok
// SIG undefined FUN_1468bb93e(void)

void FUN_1468bb93e(longlong param_1,int param_2)

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



// FUNCTION 1468bb9c4 FUN_1468bb9c4 body=54 status=ok
// SIG undefined FUN_1468bb9c4(void)

void FUN_1468bb9c4(longlong *param_1)

{
  FUN_1468bb9fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468bb9fa FUN_1468bb9fa body=128 status=ok
// SIG undefined FUN_1468bb9fa(void)

void FUN_1468bb9fa(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1468bba7c FUN_1468bba7c body=251 status=ok
// SIG undefined FUN_1468bba7c(void)

PSRWLOCK FUN_1468bba7c(PSRWLOCK param_1,longlong param_2)

{
  InitializeSRWLock(param_1);
  param_1[5].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[6].Ptr = 0;
  param_1[1].Ptr = (PVOID)0x0;
  param_1[2].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[6].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[7].Ptr + 4) = 0;
  param_1[9].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[10].Ptr = 0;
  *(undefined1 *)&param_1[0xb].Ptr = 0;
  param_1[0xc].Ptr = (PVOID)0x0;
  param_1[0xd].Ptr = (PVOID)0x0;
  param_1[0xe].Ptr = (PVOID)0x0;
  param_1[0xf].Ptr = (PVOID)0x0;
  param_1[0x10].Ptr = (PVOID)0x0;
  param_1[0x11].Ptr = (PVOID)0x0;
  *(undefined2 *)&param_1[0x12].Ptr = 0x100;
  param_1[0x14].Ptr = (PVOID)0x0;
  param_1[0x16].Ptr = (PVOID)0x0;
  param_1[0x20].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x21].Ptr = 0;
  param_1[0x1c].Ptr = (PVOID)0x0;
  param_1[0x1d].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[0x21].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[0x22].Ptr + 4) = 0;
  param_1[0x24].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x25].Ptr = 0;
  param_1[0x2a].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x2b].Ptr = 0;
  param_1[0x26].Ptr = (PVOID)0x0;
  param_1[0x27].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[0x2b].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[0x2c].Ptr + 4) = 0;
  param_1[0x2e].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x2f].Ptr = 0;
  FUN_144881636(param_1 + 0x26,param_2);
  *(undefined1 *)&param_1[0x30].Ptr = 1;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_2);
  return param_1;
}



// FUNCTION 1468bbb78 FUN_1468bbb78 body=164 status=ok
// SIG undefined FUN_1468bbb78(void)

void FUN_1468bbb78(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1468bbbf8;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1468bbbf8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1468bbc1c FUN_1468bbc1c body=182 status=ok
// SIG undefined FUN_1468bbc1c(void)

void FUN_1468bbc1c(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c964730;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c96473c = DAT_14c96473c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c964728 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c964728 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c96473c = DAT_14c96473c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1468bbcab;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14c96473c = DAT_14c96473c + -1;
LAB_1468bbcab:
  FUN_14474d06a(&DAT_14c964728,0);
  return;
}



// FUNCTION 1468bbcd2 FUN_1468bbcd2 body=109 status=ok
// SIG undefined FUN_1468bbcd2(void)

void FUN_1468bbcd2(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1468bbd40 FUN_1468bbd40 body=109 status=ok
// SIG undefined FUN_1468bbd40(void)

void FUN_1468bbd40(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 1468bbdae FUN_1468bbdae body=96 status=ok
// SIG undefined FUN_1468bbdae(void)

void FUN_1468bbdae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 1468bbe0e FUN_1468bbe0e body=96 status=ok
// SIG undefined FUN_1468bbe0e(void)

void FUN_1468bbe0e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1468bbe6e FUN_1468bbe6e body=132 status=ok
// SIG undefined FUN_1468bbe6e(void)

void FUN_1468bbe6e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468bbef3 FUN_1468bbef3 body=11 status=ok
// SIG undefined FUN_1468bbef3(void)

void FUN_1468bbef3(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1468bbefe thunk_FUN_1468bf556 body=5 status=ok
// SIG undefined thunk_FUN_1468bf556(void)

void thunk_FUN_1468bf556(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1468bbf04 FUN_1468bbf04 body=143 status=ok
// SIG undefined FUN_1468bbf04(void)

void FUN_1468bbf04(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468bbf94 thunk_FUN_1468bf190 body=5 status=ok
// SIG undefined thunk_FUN_1468bf190(void)

void thunk_FUN_1468bf190(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 8;
  *(byte *)((longlong)param_1 + 0x4d) = *(byte *)((longlong)param_1 + 0x4d) & 0xfe;
  param_1[10] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1468bbf9a FUN_1468bbf9a body=143 status=ok
// SIG undefined FUN_1468bbf9a(void)

void FUN_1468bbf9a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468bc02a FUN_1468bc02a body=364 status=ok
// SIG undefined FUN_1468bc02a(void)

undefined4 * FUN_1468bc02a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
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
  FUN_1468bc198(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar7 = (uint)uVar3 & 0xffff;
  uVar6 = ((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4);
  uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + *(int *)(local_40 + 1) + 0x9e3779b9 ^ uVar6;
  cVar5 = FUN_1468bc27e(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
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
      *(uint *)((longlong)local_40 + 0x14) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1468bc378(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bc198 FUN_1468bc198 body=230 status=ok
// SIG undefined FUN_1468bc198(void)

int * FUN_1468bc198(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 1468bc27e FUN_1468bc27e body=136 status=ok
// SIG undefined FUN_1468bc27e(void)

undefined8 FUN_1468bc27e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == (int)param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1468bc306((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468bc306 FUN_1468bc306 body=114 status=ok
// SIG undefined FUN_1468bc306(void)

void FUN_1468bc306(longlong *param_1,int param_2)

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



// FUNCTION 1468bc378 FUN_1468bc378 body=505 status=ok
// SIG undefined FUN_1468bc378(void)

void FUN_1468bc378(longlong *param_1)

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
        uVar3 = *(undefined8 *)(lVar2 + lVar5 * 0x18);
        uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar8 = ((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar7 >> 4);
        uVar10 = (longlong)
                 (int)(uVar8 * 0x40 + *(int *)(lVar2 + 8 + lVar5 * 0x18) + (uVar8 >> 2) + 0x9e3779b9
                      ^ uVar8) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1468bc572 FUN_1468bc572 body=67 status=ok
// SIG undefined FUN_1468bc572(void)

void FUN_1468bc572(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468bc5b6(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  if (iVar1 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_1468b9116(param_1,*(undefined4 *)(param_1 + 0x108),iVar1);
  return;
}



// FUNCTION 1468bc5b6 FUN_1468bc5b6 body=108 status=ok
// SIG undefined FUN_1468bc5b6(void)

ulonglong FUN_1468bc5b6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x40;
  if (0x40 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1468bc622 FUN_1468bc622 body=90 status=ok
// SIG undefined FUN_1468bc622(void)

void FUN_1468bc622(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 2);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 1468bc67c FUN_1468bc67c body=320 status=ok
// SIG undefined FUN_1468bc67c(void)

undefined4 * FUN_1468bc67c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b2a4d4(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_145b2a43e(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1414c876c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bc7be FUN_1468bc7be body=138 status=ok
// SIG undefined FUN_1468bc7be(void)

void FUN_1468bc7be(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1468bc848 FUN_1468bc848 body=48 status=ok
// SIG undefined FUN_1468bc848(void)

void FUN_1468bc848(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1468bc878 FUN_1468bc878 body=257 status=ok
// SIG undefined FUN_1468bc878(void)

void FUN_1468bc878(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
      uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      lVar2 = param_1 + 0x1a8;
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x1b0);
      }
      iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1b8) - 1U & (uVar1 >> 0x10 ^ uVar1))
                               * 4);
      if (iVar3 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x170);
        do {
          if (*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x10) == param_2) goto LAB_1468bc952;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar2 + 8);
        } while (iVar3 != -1);
      }
    }
    FUN_14688074a((longlong *)(param_1 + 0x170),local_2c,&local_28,0);
    LOCK();
    *(undefined4 *)(param_1 + 0x1e8) = 1;
    UNLOCK();
  }
LAB_1468bc952:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bc97a FUN_1468bc97a body=168 status=ok
// SIG undefined FUN_1468bc97a(void)

void FUN_1468bc97a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_1468bca24(&local_78);
  FUN_142804a6a(param_1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bca24 FUN_1468bca24 body=199 status=ok
// SIG undefined FUN_1468bca24(void)

void FUN_1468bca24(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1468c0444(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_146880a98(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_14688074a(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bcaee FUN_1468bcaee body=1196 status=ok
// SIG undefined FUN_1468bcaee(void)

void FUN_1468bcaee(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined1 *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_99;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  local_f0 = param_1;
  FUN_1468bfc4c(local_98,param_1 + 0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  local_c0 = (code *)0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  local_b8 = local_88;
  iVar9 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_c0);
    iVar9 = local_70;
  }
  local_d0 = local_b0;
  iStack_cc = iStack_ac;
  local_c8 = local_a8;
  local_c4 = local_a4;
  local_e0 = local_c0;
  local_d8 = local_b8;
  local_e8 = local_98;
  if ((iStack_ac != iVar9) || (local_b8 != local_88)) {
    do {
      lVar5 = *(longlong *)(*local_e8 + (longlong)iStack_cc * 0x10);
      if (0 < *(int *)(lVar5 + 0x10)) {
        lVar6 = 0x30;
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar5 + 8);
          lVar8 = *(longlong *)(lVar4 + lVar6);
          if (lVar8 == 0) {
LAB_1468bcc70:
            lVar8 = *(longlong *)(lVar4 + -8 + lVar6);
            if (lVar8 != 0) {
              uVar3 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x19 & 1) == 0) goto LAB_1468bccb2;
            }
          }
          else {
            iVar2 = *(int *)(lVar4 + -0x14 + lVar6);
            if (((longlong)iVar2 < 0) || (*(int *)(lVar8 + 0x20) <= iVar2)) goto LAB_1468bcc70;
            if (*(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x40 + (longlong)iVar2 * 0x68) ==
                *(longlong *)(lVar4 + -8 + lVar6)) goto LAB_1468bcc70;
LAB_1468bccb2:
            *(undefined8 *)(lVar4 + -8 + lVar6) = 0;
          }
          *(undefined8 *)(lVar4 + lVar6) = 0;
          *(undefined4 *)(lVar4 + -0x14 + lVar6) = 0xffffffff;
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x38;
        } while (lVar7 < *(int *)(lVar5 + 0x10));
      }
      local_c0 = FUN_141073f72;
      local_b8 = &local_99;
      lVar5 = FUN_144a773aa(&local_c0,&DAT_14c75ec34);
      *(undefined4 *)(*(longlong *)(lVar5 + 0x58) + 4) = 0;
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != local_98 || (local_d8 != local_88 || iStack_cc != iVar9));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(local_98);
  lVar5 = local_f0;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(local_f0 + 0x148);
  EnterCriticalSection(lpCriticalSection);
  FUN_1468bfc4c(local_98,lVar5 + 0xf8);
  LeaveCriticalSection(lpCriticalSection);
  local_c0 = (code *)0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  iVar9 = 0;
  local_b8 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_c0);
    iVar9 = local_70;
  }
  local_d0 = local_b0;
  iStack_cc = iStack_ac;
  local_c8 = local_a8;
  local_c4 = local_a4;
  local_e0 = local_c0;
  local_d8 = local_b8;
  local_e8 = local_98;
  if ((iStack_ac != iVar9) || (local_b8 != local_88)) {
    do {
      lVar5 = *(longlong *)(*local_e8 + (longlong)iStack_cc * 0x10);
      lVar6 = (longlong)*(int *)(lVar5 + 0x20);
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar5 + 0x40 + lVar7);
          if ((lVar4 != 0) && ((*(byte *)(lVar5 + 0x4c + lVar7) & 1) != 0)) {
            FUN_1400f84b8(lVar4,0,0xffffffff,1);
            *(undefined8 *)(lVar5 + 0x40 + lVar7) = 0;
            pbVar1 = (byte *)(lVar5 + 0x4c + lVar7);
            *pbVar1 = *pbVar1 & 0x7f;
            pbVar1 = (byte *)(lVar5 + 0x4d + lVar7);
            *pbVar1 = *pbVar1 & 0xfe;
          }
          lVar7 = lVar7 + 0x68;
        } while (lVar6 * 0x68 - lVar7 != 0);
      }
      local_b8 = &local_99;
      local_c0 = FUN_141073f72;
      lVar5 = FUN_144a773aa(&local_c0,&DAT_14c75ec34);
      *(undefined4 *)(*(longlong *)(lVar5 + 0x58) + 8) = 0;
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != local_98 || (local_d8 != local_88 || iStack_cc != iVar9));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145a26156(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bcf9c FUN_1468bcf9c body=17 status=ok
// SIG undefined FUN_1468bcf9c(void)

void FUN_1468bcf9c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0x7f;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xfe;
  return;
}



// FUNCTION 1468bcfae FUN_1468bcfae body=110 status=ok
// SIG undefined FUN_1468bcfae(void)

void FUN_1468bcfae(longlong param_1,uint param_2)

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
    FUN_145a2618e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_146880a98(param_1);
    return;
  }
  FUN_1468c05e2(param_1);
  FUN_145a2618e(param_1,param_2);
  return;
}



// FUNCTION 1468bd01c FUN_1468bd01c body=1555 status=ok
// SIG undefined FUN_1468bd01c(void)

int FUN_1468bd01c(longlong *param_1,uint param_2,ulonglong *param_3,longlong param_4,
                 undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong *puStack_90;
  ulonglong *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  byte local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (-1 < (int)param_2) {
    lVar10 = (ulonglong)param_2 << 3;
    do {
      param_2 = param_2 - 1;
      plVar13 = *(longlong **)(*param_1 + lVar10);
      local_50 = plVar13;
      if (((((ulonglong)plVar13 & 1) != 0) && (((ulonglong)plVar13 & 0xfffffffffffffffe) != 0)) &&
         (DAT_14c950c29 == '\x01')) {
        FUN_1456cec3c();
      }
      if (lVar10 == 0) {
        uVar4 = FUN_1446f4b16();
        cVar2 = FUN_1400164de(&local_50,uVar4);
        iVar3 = 0;
        if (cVar2 == '\0') {
          plVar13 = (longlong *)0x0;
        }
        lVar10 = (**(code **)(*plVar13 + 0x210))(plVar13,param_3);
        if (lVar10 == param_4) {
          FUN_14281147a(plVar13,param_3,param_5);
          iVar3 = 1;
        }
        goto LAB_1468bd324;
      }
      uVar4 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de(&local_50,uVar4);
      if ((cVar2 != '\0') && (plVar13 != (longlong *)0x0)) {
        bVar1 = *(byte *)(plVar13 + 0xe);
        (**(code **)(*(longlong *)plVar13[0xf] + 0x178))();
        if (0 < (int)param_3[1]) {
          iVar8 = *(int *)(plVar13[0xf] + 0x34);
          lVar5 = 0;
          lVar10 = 0;
          iVar3 = 0;
          local_a8 = param_4;
          do {
            if ((bVar1 & 1) == 0) {
              uVar9 = *param_3;
            }
            else {
              uVar9 = *param_3;
              if ((uVar9 & 1) != 0) {
                uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)param_3;
              }
            }
            local_b8 = param_5;
            iVar11 = FUN_1468bd01c(param_1,param_2,uVar9 + lVar5,local_a8);
            iVar3 = iVar3 + iVar11;
            lVar10 = lVar10 + 1;
            lVar5 = lVar5 + iVar8;
          } while (lVar10 < (int)param_3[1]);
          goto LAB_1468bd324;
        }
        break;
      }
      lVar5 = FUN_145b2af0c();
      if ((((ulonglong)plVar13 & 1) == 0) || (((ulonglong)plVar13 & 0xfffffffffffffffe) == 0)) {
LAB_1468bd105:
        uVar4 = FUN_144a7e162();
        cVar2 = FUN_1400164de(&local_50,uVar4);
        if ((cVar2 != '\0') && (plVar13 != (longlong *)0x0)) {
          local_98 = plVar13[0xe];
          local_60 = &local_98;
          local_88 = (ulonglong *)plVar13[0xf];
          iStack_80 = (int)plVar13[0x10];
          uStack_7c = *(undefined4 *)((longlong)plVar13 + 0x84);
          iStack_78 = (int)plVar13[0x11];
          local_58 = 0xffffffffffffffff;
          puStack_90 = param_3;
          FUN_14000a0a0(&local_60);
          iVar3 = 0;
          if ((int)(uint)local_58 < 0) goto LAB_1468bd324;
          iVar3 = 0;
          goto LAB_1468bd3a3;
        }
        lVar5 = FUN_145bd343e();
        if ((((ulonglong)plVar13 & 1) != 0) && (((ulonglong)plVar13 & 0xfffffffffffffffe) != 0)) {
          lVar6 = *(longlong *)(((ulonglong)plVar13 & 0xfffffffffffffffe) + 0x10);
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30 && &DAT_00000001 < plVar13)) goto LAB_1468bd0f2;
        }
        uVar4 = FUN_1446ebfd4();
        cVar2 = FUN_1400164de(&local_50,uVar4);
        if ((cVar2 != '\0') && (plVar13 != (longlong *)0x0)) {
          plVar14 = (longlong *)((ulonglong)param_2 * 8 + *param_1);
          local_a8 = param_4;
          uVar4 = FUN_1446ddbd2();
          cVar2 = FUN_1400164de(plVar14,uVar4);
          if (cVar2 == '\0') {
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar14;
          }
          local_68 = *(byte *)(plVar13 + 0x13);
          local_98 = plVar13[0xe];
          puStack_90 = (ulonglong *)plVar13[0xf];
          iStack_80 = (int)plVar13[0x10];
          uStack_7c = *(undefined4 *)((longlong)plVar13 + 0x84);
          iStack_78 = (int)plVar13[0x11];
          uStack_74 = *(undefined4 *)((longlong)plVar13 + 0x8c);
          local_70 = plVar13[0x12];
          iVar3 = (int)param_3[1];
          iVar8 = 0;
          local_88 = param_3;
          if (iVar3 < 1) goto LAB_1468bd4b1;
          iVar11 = 0;
          goto LAB_1468bd496;
        }
        lVar5 = FUN_145bd316e();
        if ((((ulonglong)plVar13 & 1) != 0) && (((ulonglong)plVar13 & 0xfffffffffffffffe) != 0)) {
          lVar6 = *(longlong *)(((ulonglong)plVar13 & 0xfffffffffffffffe) + 0x10);
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30 && &DAT_00000001 < plVar13)) goto LAB_1468bd0f2;
        }
        uVar4 = FUN_140019ace();
        cVar2 = FUN_1400164de(&local_50,uVar4);
        if ((cVar2 != '\0') && (plVar13 != (longlong *)0x0)) goto LAB_1468bd5c2;
        puVar12 = (ulonglong *)(*param_1 + lVar10 + -8);
        uVar4 = FUN_1446ddbd2();
        cVar2 = FUN_1400164de(puVar12,uVar4);
        if ((cVar2 == '\0') || (uVar9 = *puVar12, uVar9 == 0)) {
          lVar5 = *param_1;
          lVar6 = FUN_141235584();
          uVar9 = *(ulonglong *)(lVar5 + -8 + lVar10);
          if (((uVar9 & 1) != 0) && (uVar9 = uVar9 & 0xfffffffffffffffe, uVar9 != 0)) {
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(uVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_1468bd1f2;
          }
        }
        else {
LAB_1468bd1f2:
          param_3 = (ulonglong *)((longlong)param_3 + (longlong)*(int *)(uVar9 + 0x44));
        }
      }
      else {
        lVar6 = *(longlong *)(((ulonglong)plVar13 & 0xfffffffffffffffe) + 0x10);
        if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)) ||
           ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
             lVar5 + 0x30 || (plVar13 < (longlong *)0x2)))) goto LAB_1468bd105;
      }
LAB_1468bd0f2:
      lVar10 = lVar10 + -8;
    } while( true );
  }
  iVar3 = 0;
  goto LAB_1468bd324;
  while( true ) {
    lVar5 = lVar10 + 0x10;
    if (*(longlong *)(lVar10 + 0x20) != 0) {
      lVar5 = *(longlong *)(lVar10 + 0x20);
    }
    if ((*(uint *)(lVar5 + (ulonglong)((uint)local_58 >> 5) * 4) >> ((uint)local_58 & 0x1f) & 1) ==
        0) break;
    local_b8 = param_5;
    iVar8 = FUN_1468bd01c(param_1,param_2,
                          (longlong)(int)(uint)local_58 * (longlong)iStack_78 + *puStack_90,param_4)
    ;
    iVar3 = iVar3 + iVar8;
    FUN_14000a0a0(&local_60);
    if ((int)(uint)local_58 < 0) break;
LAB_1468bd3a3:
    lVar10 = local_60[1];
    if (*(int *)(lVar10 + 0x28) <= (int)(uint)local_58) break;
  }
  goto LAB_1468bd324;
LAB_1468bd5c2:
  cVar2 = (**(code **)(*(longlong *)plVar13[0xe] + 0x1b8))();
  plVar13 = (longlong *)plVar13[0xe];
  if (cVar2 == '\0') {
    cVar2 = (char)*(ulonglong *)
                   ((longlong)param_3 +
                   (longlong)*(int *)((longlong)plVar13 + 0x34) * (longlong)(int)plVar13[6]);
  }
  else {
    cVar2 = (**(code **)(*plVar13 + 0x1c8))(plVar13,param_3);
  }
  iVar3 = 0;
  if ((cVar2 != '\0') && (param_3 != (ulonglong *)0x0)) {
    local_b8 = param_5;
    iVar3 = FUN_1468bd01c(param_1,param_2,param_3,param_4);
  }
  goto LAB_1468bd324;
  while (iVar11 = iVar11 + 1, iVar8 = iVar3, iVar3 != iVar11) {
LAB_1468bd496:
    local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar11);
    cVar2 = FUN_1446ec082(&local_98,&local_60);
    iVar8 = iVar11;
    if (cVar2 != '\0') break;
  }
LAB_1468bd4b1:
  local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar8);
  cVar2 = FUN_1446ec082(&local_98);
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar3 = 0;
    local_a0 = lVar10;
    do {
      if (local_a0 == plVar13[0xe]) {
        if ((local_68 & 1) == 0) {
          uVar7 = *local_88;
        }
        else {
          uVar9 = *local_88;
          uVar7 = ((longlong)uVar9 >> 0x18) + (longlong)local_88;
          if ((uVar9 & 1) == 0) {
            uVar7 = uVar9;
          }
        }
        iVar11 = local_70._4_4_ * iVar8;
LAB_1468bd56f:
        local_b8 = param_5;
        iVar11 = FUN_1468bd01c(param_1,param_2,(longlong)iVar11 + uVar7,local_a8);
        iVar3 = iVar3 + iVar11;
      }
      else if (local_a0 == plVar13[0xf]) {
        if ((local_68 & 1) == 0) {
          uVar7 = *local_88;
        }
        else {
          uVar9 = *local_88;
          uVar7 = ((longlong)uVar9 >> 0x18) + (longlong)local_88;
          if ((uVar9 & 1) == 0) {
            uVar7 = uVar9;
          }
        }
        uVar7 = (longlong)iVar8 * (longlong)local_70._4_4_ + uVar7;
        iVar11 = iStack_80;
        goto LAB_1468bd56f;
      }
      uVar9 = local_88[1];
      do {
        iVar8 = iVar8 + 1;
        if ((int)uVar9 <= iVar8) break;
        local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar8);
        cVar2 = FUN_1446ec082(&local_98,&local_60);
      } while (cVar2 == '\0');
      local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar8);
      cVar2 = FUN_1446ec082(&local_98,&local_60);
    } while (cVar2 != '\0');
  }
LAB_1468bd324:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1468bd630 FUN_1468bd630 body=226 status=ok
// SIG undefined FUN_1468bd630(void)

longlong FUN_1468bd630(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_29;
  local_28 = FUN_1456d0794;
  lVar3 = FUN_144a773aa(&local_28,&DAT_14c75eca8);
  if ((0 < (longlong)(int)param_1[1]) &&
     (lVar4 = FUN_14689aee4(*param_1 + (longlong)(int)param_1[1] * 8 + -8), lVar4 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (0 < (longlong)iVar1) {
      lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + -8 + (longlong)iVar1 * 8);
      iVar2 = *(int *)(lVar4 + 0x38);
      if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
          lVar4 + 0x30)) goto LAB_1468bd6c2;
      if (iVar1 != 1) {
        iVar5 = iVar1 + -1;
        plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(iVar1 - 2) * 8);
        do {
          lVar6 = *plVar7;
          if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
              == lVar4 + 0x30)) goto LAB_1468bd6c2;
          iVar5 = iVar5 + -1;
          plVar7 = plVar7 + -1;
        } while (0 < iVar5);
      }
    }
  }
  lVar6 = 0;
LAB_1468bd6c2:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1468bd714 FUN_1468bd714 body=131 status=ok
// SIG undefined FUN_1468bd714(void)

void FUN_1468bd714(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 8) = param_2;
  local_28 = &local_31;
  local_30 = FUN_1456d0794;
  lVar2 = FUN_144a773aa(&local_30,&DAT_14c75eca8);
  iVar1 = *(int *)(lVar2 + 0x18);
  *(uint *)(lVar2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar1 + 1U) {
    FUN_1447f76d2((longlong *)(lVar2 + 0x10),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1 * 8) = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bd798 FUN_1468bd798 body=94 status=ok
// SIG undefined FUN_1468bd798(void)

void FUN_1468bd798(void)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_1456d0794;
  lVar1 = FUN_144a773aa(&local_18,&DAT_14c75eca8);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  FUN_1404559b4(lVar1 + 0x10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bd7f8 FUN_1468bd7f8 body=805 status=ok
// SIG undefined FUN_1468bd7f8(void)

longlong * FUN_1468bd7f8(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined1 local_51;
  code *local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_14124d582(0,0);
  uVar10 = *param_2;
  *(ulonglong *)*param_1 = uVar10;
  if ((((uVar10 & 1) != 0) && ((uVar10 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_14689ae88(param_2,&local_60);
  local_48 = &local_51;
  local_50 = FUN_1456d0794;
  lVar3 = FUN_144a773aa(&local_50,&DAT_14c75eca8);
  if ((code *)0x1 < local_60) {
    iVar9 = *(int *)(lVar3 + 0x38) + -1;
    do {
      if (((ulonglong)local_60 & 1) != 0) {
        lVar5 = *(longlong *)(((ulonglong)local_60 & 0xfffffffffffffffe) + 0x10);
        lVar4 = FUN_144a797b2();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) break;
      }
      pcVar7 = local_60;
      if (((ulonglong)local_60 & 1) == 0) {
        if (local_60 != (code *)0x0) {
          lVar5 = *(longlong *)(local_60 + 8);
          lVar4 = FUN_1446ddbd2();
          if (*(ulonglong *)(lVar4 + 8) == 0) {
            bVar12 = lVar5 != 0;
            if (lVar5 != lVar4 && bVar12) {
              do {
                lVar5 = *(longlong *)(lVar5 + 0x30);
                bVar12 = lVar5 != 0;
                if (lVar5 == lVar4) break;
              } while (lVar5 != 0);
            }
            if (bVar12) goto LAB_1468bd8d8;
          }
          else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_1468bd8d8:
            iVar1 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
              FUN_14124d582(param_1,iVar1);
            }
            *(code **)(*param_1 + (longlong)iVar1 * 8) = pcVar7;
          }
        }
      }
      else {
        uVar10 = (ulonglong)local_60 & 0xfffffffffffffffe;
        if (uVar10 != 0) {
          lVar5 = FUN_1446f4bba();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(uVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            if (iVar9 == -1) break;
            puVar11 = (ulonglong *)((longlong)iVar9 * 8 + *(longlong *)(lVar3 + 0x30));
            uVar6 = FUN_1446dcc8c();
            cVar2 = FUN_1400164de(puVar11,uVar6);
            if ((cVar2 == '\0') ||
               (pcVar7 = (code *)*puVar11, pcVar8 = pcVar7, pcVar7 == (code *)0x0)) {
              lVar5 = FUN_145b2baee();
              pcVar7 = (code *)*puVar11;
              if (((ulonglong)pcVar7 & 1) != 0) {
                pcVar8 = (code *)((ulonglong)pcVar7 & 0xfffffffffffffffe);
                if (pcVar8 == (code *)0x0) {
                  pcVar7 = (code *)0x1;
                }
                else if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(pcVar8 + 0x10) + 0x38))
                        && (*(longlong *)
                             (*(longlong *)(*(longlong *)(pcVar8 + 0x10) + 0x30) +
                             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30))
                goto LAB_1468bd9fe;
              }
              lVar5 = 0;
            }
            else {
LAB_1468bd9fe:
              lVar5 = *(longlong *)(pcVar8 + 0x70);
            }
            if ((*(int *)(lVar5 + 0x38) < *(int *)(uVar10 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(uVar10 + 0x38) * 8)
                != uVar10 + 0x30)) break;
            local_60 = pcVar7;
            if ((((ulonglong)pcVar7 & 1) != 0) &&
               ((((ulonglong)pcVar7 & 0xfffffffffffffffe) != 0 && (DAT_14c950c29 == '\x01')))) {
              FUN_1456cec3c();
            }
            iVar1 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
              FUN_14124d582(param_1,iVar1);
            }
            uVar10 = *puVar11;
            *(ulonglong *)(*param_1 + (longlong)iVar1 * 8) = uVar10;
            if ((((uVar10 & 1) != 0) && ((uVar10 & 0xfffffffffffffffe) != 0)) &&
               (DAT_14c950c29 == '\x01')) {
              FUN_1456cec3c();
            }
            iVar9 = iVar9 + -1;
          }
        }
      }
      FUN_14689ae88(&local_60,&local_50);
      local_60 = local_50;
      if (((((ulonglong)local_50 & 1) != 0) && (((ulonglong)local_50 & 0xfffffffffffffffe) != 0)) &&
         (DAT_14c950c29 == '\x01')) {
        FUN_1456cec3c();
      }
    } while ((code *)0x1 < local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468bdb1e FUN_1468bdb1e body=205 status=ok
// SIG undefined FUN_1468bdb1e(void)

void FUN_1468bdb1e(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(ulonglong *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  local_40 = uVar3;
  if (((uVar3 & 1) != 0) && (uVar3 = uVar3 & 0xfffffffffffffffe, uVar3 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar3);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar3);
    }
  }
  uVar1 = FUN_142804fad(&local_40,param_4);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = param_3;
  FUN_1468bd01c(param_1,(int)param_1[1] + -1,uVar1,uVar2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468bdbec FUN_1468bdbec body=205 status=ok
// SIG undefined FUN_1468bdbec(void)

void FUN_1468bdbec(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(ulonglong *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  local_40 = uVar3;
  if (((uVar3 & 1) != 0) && (uVar3 = uVar3 & 0xfffffffffffffffe, uVar3 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar3);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar3);
    }
  }
  uVar1 = FUN_142804fad(&local_40,param_4);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = param_3;
  FUN_1468bd01c(param_1,(int)param_1[1] + -1,uVar1,uVar2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468bdcba FUN_1468bdcba body=362 status=ok
// SIG undefined FUN_1468bdcba(void)

ulonglong FUN_1468bdcba(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  longlong local_38 [2];
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  if ((((local_40 & 1) != 0) && ((local_40 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468bd7f8(local_38,&local_40);
  lVar2 = FUN_1468bd630(local_38);
  if (lVar2 == 0) {
    local_20 = local_44;
    local_28 = FUN_1456d0794;
    lVar2 = FUN_144a773aa(&local_28,&DAT_14c75eca8);
    if (0 < *(int *)(lVar2 + 0x28)) {
      local_28 = (code *)**(ulonglong **)(lVar2 + 0x20);
      if (local_28 != (code *)0x0) {
        uVar1 = ((uint)((ulonglong)local_28 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_28 >> 4)) *
                -0x7a143595;
        uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
        uVar3 = FUN_1468c17a8(param_1 + 0x68,uVar1 >> 0x10 ^ uVar1,&local_28);
        FUN_1468c1108(uVar3,local_44,local_38,0);
        uVar4 = CONCAT71((int7)((ulonglong)(param_1 + 0x68) >> 8),local_28 != (code *)0x0);
        goto LAB_1468bdd4f;
      }
    }
    uVar4 = 0;
  }
  else {
    local_28 = (code *)0x0;
    FUN_14485c47a(&local_28,lVar2);
    uVar3 = FUN_1468c0770(param_1 + 0x18,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28,
                          &local_28);
    FUN_1468c1108(uVar3,local_44,local_38,0);
    uVar4 = CONCAT71((int7)((ulonglong)(param_1 + 0x18) >> 8),1);
  }
LAB_1468bdd4f:
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bde3e FUN_1468bde3e body=47 status=ok
// SIG undefined FUN_1468bde3e(void)

undefined4 FUN_1468bde3e(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14610933e();
  FUN_146108736(param_1 + 0x18);
  FUN_146108776(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x14) = 1;
  return uVar1;
}



// FUNCTION 1468bde6e FUN_1468bde6e body=88 status=ok
// SIG undefined FUN_1468bde6e(void)

void FUN_1468bde6e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1[0x18];
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc4) < iVar1 + 1U) {
    FUN_1468625c0(param_1 + 0x17,iVar1);
  }
  *(longlong *)(param_1[0x17] + (longlong)iVar1 * 8) = param_2;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined8 *)(param_2 + 0xf0) = uVar2;
  return;
}



// FUNCTION 1468bdec6 FUN_1468bdec6 body=4 status=ok
// SIG undefined FUN_1468bdec6(void)

undefined1 FUN_1468bdec6(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



// FUNCTION 1468bdeca FUN_1468bdeca body=446 status=ok
// SIG undefined FUN_1468bdeca(void)

int FUN_1468bdeca(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x18))();
  plVar1 = param_1 + 0x1a;
  plVar2 = param_1 + 0x1c;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  iVar7 = 0;
  local_60 = plVar2;
  if ((int)param_1[0x1f] != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_1[0x1f];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (local_60 != plVar2)) {
    iVar6 = 0;
    do {
      plVar9 = (longlong *)((longlong)iStack_74 * 0x10 + *local_90);
      uVar5 = FUN_140e6158c();
      cVar3 = FUN_1400164de(plVar9,uVar5);
      if ((cVar3 == '\0') || (lVar8 = *plVar9, lVar8 == 0)) {
        uVar5 = FUN_140019da0();
        cVar3 = FUN_1400164de(plVar9,uVar5);
        if ((cVar3 != '\0') && (lVar8 = *plVar9, lVar8 != 0)) goto LAB_1468bdff3;
      }
      else {
LAB_1468bdff3:
        if (*(longlong *)(lVar8 + 0x70) == lVar4) {
          if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_98);
          }
          *(longlong *)(lVar8 + 0x70) = local_98;
          iVar6 = iVar6 + 1;
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != plVar2 || iStack_74 != iVar7));
  }
  FUN_1461091ae(plVar1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1468be090 FUN_1468be090 body=61 status=ok
// SIG undefined FUN_1468be090(void)

void FUN_1468be090(longlong param_1)

{
  *(code **)(param_1 + 0xb0) = FUN_14609ba58;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_1468be089;
  FUN_1407c2e84();
  *(code **)(param_1 + 0xc0) = FUN_140631fbe;
  return;
}



// FUNCTION 1468be0cd FUN_1468be0cd body=71 status=ok
// SIG undefined FUN_1468be0cd(void)

void FUN_1468be0cd(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_144a88810();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_1468c206e(uVar2);
  return;
}



// FUNCTION 1468be115 FUN_1468be115 body=71 status=ok
// SIG undefined FUN_1468be115(void)

void FUN_1468be115(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_14001206a();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_1468c2116(uVar2);
  return;
}



// FUNCTION 1468be15e FUN_1468be15e body=49 status=ok
// SIG undefined FUN_1468be15e(void)

undefined8 FUN_1468be15e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2d0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  return 1;
}



// FUNCTION 1468be196 FUN_1468be196 body=99 status=ok
// SIG undefined FUN_1468be196(void)

void FUN_1468be196(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_14280510e(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468be1fa FUN_1468be1fa body=626 status=ok
// SIG undefined FUN_1468be1fa(void)

void FUN_1468be1fa(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0 [2];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14c951360 == '\0') && (DAT_14c872ce0 != 0)) {
    FUN_1446f470e(&local_78,L"MetadataRedirects",1);
    plVar3 = (longlong *)FUN_140d6a126(DAT_14c872ce0,L"CoreUObject.Metadata",0,&DAT_14c872ce8);
    uVar1 = local_88;
    if (plVar3 != (longlong *)0x0) {
      local_68 = plVar3 + 2;
      local_70 = (longlong *)&DAT_100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      if ((int)plVar3[5] != 0) {
        FUN_1449c0562(&local_70);
      }
      local_88 = local_60;
      uVar1 = local_88;
      local_80 = local_58;
      local_7c = local_54;
      local_98 = local_70;
      local_90 = local_68;
      local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      local_a0 = plVar3;
      if (local_88._4_4_ < (int)local_68[3]) {
        iVar2 = local_88._4_4_;
        local_88 = uVar1;
        do {
          lVar4 = (longlong)iVar2 * 0x40;
          if (*(longlong *)(*local_a0 + lVar4) == local_78) {
            local_b0[1] = 0;
            local_b0[0] = 0;
            lVar5 = *local_a0;
            uVar7 = (ulonglong)(*(int *)(lVar5 + 0x28 + lVar4) - 2U < 0x7fffffff) * 0x10;
            puVar6 = &DAT_149dfb77a;
            if (*(int *)(uVar7 + 0x18 + lVar5 + lVar4) != 0) {
              puVar6 = *(undefined2 **)(lVar4 + lVar5 + 8 + (uVar7 | 8));
            }
            FUN_140e134ac(puVar6,L"OldKey=",local_b0 + 1);
            lVar4 = *local_a0;
            lVar5 = (longlong)local_88._4_4_ * 0x40;
            uVar7 = (ulonglong)(*(int *)(lVar4 + 0x28 + lVar5) - 2U < 0x7fffffff) * 0x10;
            puVar6 = &DAT_149dfb77a;
            if (*(int *)(uVar7 + 0x18 + lVar4 + lVar5) != 0) {
              puVar6 = *(undefined2 **)(lVar5 + lVar4 + 8 + (uVar7 | 8));
            }
            FUN_140e134ac(puVar6,L"NewKey=",local_b0);
            local_70 = local_b0 + 1;
            local_68 = local_b0;
            FUN_140906722(&DAT_14c9512f8,local_4c,&local_70,0);
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
          FUN_1449c0562(&local_98);
          iVar2 = local_88._4_4_;
          uVar1 = local_88;
        } while (local_88._4_4_ < (int)local_90[3]);
      }
    }
    local_88 = uVar1;
    DAT_14c951360 = '\x01';
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468be472 FUN_1468be472 body=39 status=ok
// SIG undefined FUN_1468be472(void)

undefined8 * FUN_1468be472(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  FUN_14680ea3d(L"UObject(FVTableHelper& Helper)");
  return param_1;
}



// FUNCTION 1468be49a FUN_1468be49a body=214 status=ok
// SIG undefined FUN_1468be49a(void)

undefined8 * FUN_1468be49a(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  return param_1;
}



// FUNCTION 1468be574 FUN_1468be574 body=166 status=ok
// SIG undefined FUN_1468be574(void)

longlong * FUN_1468be574(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x48))(0,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,&DAT_149e01fe8);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468be61c FUN_1468be61c body=249 status=ok
// SIG undefined FUN_1468be61c(void)

void FUN_1468be61c(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = param_1[2];
  if ((*(byte *)(lVar1 + 0xd6) & 0x80) != 0) {
    lVar3 = FUN_144938c96(param_1);
    local_f8 = param_1;
    if (param_2 == (undefined1 *)0x0) {
      uVar4 = 0;
      FUN_1468993e6(local_e8,param_1,0);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
      }
      local_f0 = local_e8;
      FUN_14019af10(lVar1,param_1,lVar3,uVar4);
      FUN_1401be4be(local_e8);
    }
    else {
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
      }
      local_f0 = param_2;
      FUN_14019af10(lVar1,param_1,lVar3,uVar4);
    }
  }
  cVar2 = FUN_1400439fc(param_1,0,local_e8);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468be71a caseD_13 body=1 status=ok
// SIG undefined caseD_13(void)

void switchD_143c3d4dc::caseD_13(void)

{
  return;
}



// FUNCTION 1468be71e caseD_15 body=1 status=ok
// SIG undefined caseD_15(void)

void switchD_143c3d4dc::caseD_15(void)

{
  return;
}



// FUNCTION 1468be722 FUN_1468be722 body=11 status=ok
// SIG undefined FUN_1468be722(void)

void FUN_1468be722(undefined8 param_1,longlong *param_2)

{
  *(undefined1 *)(*param_2 + 0x98) = 1;
  return;
}



// FUNCTION 1468be72e caseD_2e body=372 status=ok
// SIG undefined caseD_2e(void)

void switchD_143c3d4dc::caseD_2e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_758 [1792];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_788;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((*(byte *)((longlong)plVar2 + 0xd7) & 0x10) == 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar3 = plVar2[0x22];
      if ((lVar3 != 0) && (0 < (int)plVar2[0xb])) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447f76d2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x3e0))(plVar2,param_2);
    }
  }
  uVar4 = FUN_1446dcc8c();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_758,uVar4,plVar2,param_1);
  while (0 < (int)local_50) {
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_758;
    }
    puVar5 = *(undefined1 **)(puVar6 + (ulonglong)local_50 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar6 + (ulonglong)local_50 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar5 = puVar6 + (ulonglong)local_50 * 0xe0 + -0xd8;
    }
    plVar2 = *(longlong **)
              (*(longlong *)
                (*(longlong *)
                  (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_50 * 0xe0 + -8) * 0x18) +
                0x70) + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))
                (plVar2,*(undefined8 *)
                         (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_50 * 0xe0 + -8) *
                                   0x18 + 8),param_2);
    }
    FUN_140caedf2(local_758);
  }
  FUN_140021a7a(local_758);
  if ((local_30 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468be8a4 caseD_3f body=135 status=ok
// SIG undefined caseD_3f(void)

undefined8 * switchD_143c3d4dc::caseD_3f(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_14c964678 == (longlong *)0x0 || DAT_14c964680 == 0) ||
      (cVar1 = (**(code **)(*DAT_14c964678 + 0x30))(), cVar1 == '\0')) ||
     ((cVar1 = (**(code **)(*param_1 + 0x1c0))(), cVar1 == '\0' &&
      (((*(uint *)(param_1 + 1) & 0x10) == 0 || ((*(byte *)(param_1[2] + 0xd4) & 0x80) != 0)))))) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar2 = DAT_14c964678;
    if (DAT_14c964680 == 0) {
      plVar2 = (longlong *)0x0;
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_1);
  }
  return param_2;
}



// FUNCTION 1468be92c caseD_41 body=271 status=ok
// SIG undefined caseD_41(void)

void switchD_143c3d4dc::caseD_41(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  FUN_14689c554(local_a8,&local_b8,param_1,0);
  FUN_14689c76a(local_a8,param_1,0,0);
  if (0 < (int)uStack_b0) {
    lVar5 = 0;
    iVar3 = (int)uStack_b0;
    do {
      plVar2 = *(longlong **)(local_b8 + lVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
          FUN_144757f48(plVar2,param_2);
          (**(code **)(*plVar2 + 0x1d8))(plVar2);
          iVar3 = (int)uStack_b0;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar3);
  }
  FUN_14689c70e(local_a8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bea3c FUN_1468bea3c body=169 status=ok
// SIG undefined FUN_1468bea3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468bea3c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = *(uint *)(param_1 + 1);
LAB_1468bea42:
  do {
    param_1[2] = 0;
    do {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 1) = uVar3;
      if (*(int *)(*param_1 + 0x24) <= (int)uVar3) {
        return;
      }
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar3 >> 0x10) * 8);
    } while (*(longlong *)(lVar4 + (ulonglong)(uVar3 & 0xffff) * 0x18) == 0);
    plVar1 = (longlong *)(lVar4 + (ulonglong)(uVar3 & 0xffff) * 0x18);
    param_1[2] = (longlong)plVar1;
    if (plVar1 == (longlong *)0x0) {
      if ((*(uint *)(param_1 + 4) & _DAT_00000008) != 0) goto LAB_1468bea42;
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
      if ((*(uint *)(param_1 + 4) & *(uint *)(lVar4 + 8)) != 0) goto LAB_1468bea42;
    }
    uVar2 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar4 + 8)) == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1468beae6 FUN_1468beae6 body=619 status=ok
// SIG undefined FUN_1468beae6(void)

void FUN_1468beae6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8 [2];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    local_78 = *(longlong *)(param_1 + 0x10);
    if (local_78 == 0) {
      local_70 = (longlong *)0x0;
    }
    else {
      local_70 = *(longlong **)(local_78 + 0x50);
    }
    local_68 = 0xffffffff;
    local_64 = 0x101;
    local_62 = 0;
    FUN_144a2daf0(&local_78);
    if (local_70 != (longlong *)0x0) {
      do {
        plVar1 = local_70;
        lVar3 = FUN_1446f8646();
        if (((plVar1[2] & 1U) == 0) || (uVar6 = plVar1[2] & 0xfffffffffffffffe, uVar6 == 0)) {
LAB_1468bebbe:
          uVar6 = 0;
        }
        else if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1468bebbe;
        uVar4 = FUN_1446f8646();
        if (uVar6 != uVar4) {
          local_88 = (undefined2 *)0x0;
          uStack_80 = 0;
          if (local_70 == (longlong *)0x0) {
            FUN_140056680(&local_b8,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(local_70 + 4,&local_b8);
          }
          puVar5 = &DAT_149dfb77a;
          if (local_b0 != 0) {
            puVar5 = local_b8;
          }
          FUN_140056680(local_a8,puVar5);
          FUN_144a882a8(&local_98,local_a8,&DAT_149e06162);
          puVar5 = &DAT_149dfb77a;
          if (local_90 != 0) {
            puVar5 = local_98;
          }
          local_d8 = 0;
          cVar2 = FUN_14063337c(param_2,puVar5,&local_88,1);
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar2 != '\0') {
            puVar5 = local_88;
            if ((int)uStack_80 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            if (puVar5 != (undefined2 *)0x0) {
              local_c8 = DAT_14c872be8;
              local_d0 = 0x8000000;
              local_d8 = param_1;
              (**(code **)(*local_70 + 0xf8))(local_70,puVar5,param_1,1);
            }
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        local_70 = (longlong *)local_70[3];
        FUN_144a2daf0(&local_78);
      } while (local_70 != (longlong *)0x0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468bed52 FUN_1468bed52 body=186 status=ok
// SIG undefined FUN_1468bed52(void)

longlong * FUN_1468bed52(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = 0;
  uVar3 = param_2;
  do {
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)((longlong)&PTR_u_CPF_Edit_149e8dc80 + lVar4);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1414d5cb2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
    }
    uVar3 = uVar3 >> 1;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x1c8);
  param_2 = param_2 >> 0x3d;
  lVar4 = 0;
  do {
    if ((param_2 & 1) != 0) {
      uVar2 = *(undefined8 *)((longlong)&PTR_u_CPF_SkipNexusAccum_149e8e6f0 + lVar4);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1414d5cb2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
    }
    param_2 = param_2 >> 1;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  return param_1;
}



// FUNCTION 1468bee0d FUN_1468bee0d body=11 status=ok
// SIG undefined FUN_1468bee0d(void)

void FUN_1468bee0d(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  return;
}



// FUNCTION 1468bee18 FUN_1468bee18 body=37 status=ok
// SIG undefined FUN_1468bee18(void)

undefined8 * FUN_1468bee18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401031ac(param_2,param_3,param_1);
  return param_1;
}



// FUNCTION 1468bee40 FUN_1468bee40 body=99 status=ok
// SIG undefined FUN_1468bee40(void)

void FUN_1468bee40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40) == 0)) {
    cVar3 = FUN_1468ff18e(lVar2,DAT_14c951640);
    if (cVar3 == '\0') goto LAB_1468bee8c;
  }
  FUN_144757f48(param_1,0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144757f48(*(longlong *)(param_1 + 0x28),0x40);
  }
LAB_1468bee8c:
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x94);
  *piVar1 = *piVar1 + 1;
  *(undefined1 *)(lVar2 + 0x98) = 1;
  return;
}



// FUNCTION 1468beea4 FUN_1468beea4 body=133 status=ok
// SIG undefined FUN_1468beea4(void)

void FUN_1468beea4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined ***local_198;
  undefined ****local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_190);
  (**(code **)(*local_198[1] + 0x150))(local_198[1],param_1 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bef2a FUN_1468bef2a body=50 status=ok
// SIG undefined FUN_1468bef2a(void)

void FUN_1468bef2a(longlong param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_20();
                    /* WARNING: Could not recover jumptable at 0x0001468bef59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),param_1 + 0x28);
  return;
}



// FUNCTION 1468bef66 FUN_1468bef66 body=365 status=ok
// SIG undefined FUN_1468bef66(void)

void FUN_1468bef66(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = *param_2;
  switchD_143c3d4dc::caseD_3d();
  local_48 = (void *)0x0;
  uStack_40 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    FUN_14020fad6(&local_48,&DAT_149e01fe8);
  }
  else {
    local_60 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    local_98 = 0;
    FUN_1468d9c7a(&local_58,&local_60,0,0);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_48 = (void *)CONCAT44(uStack_54,local_58);
    uStack_40 = CONCAT44(uStack_4c,uStack_50);
  }
  FUN_1446ddc76(&local_88,"DestinationObject",1);
  _Src = local_48;
  local_80 = local_88;
  local_78 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_70 = (int)uStack_40;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_40 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar1 * 2);
  }
  local_68 = 1;
  FUN_1407c67d8(param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf0d4 FUN_1468bf0d4 body=179 status=ok
// SIG undefined FUN_1468bf0d4(void)

undefined8 FUN_1468bf0d4(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 >> 0xd & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144a79778(param_1);
  }
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_48,uVar1,0);
  FUN_140056680(local_58,L"DestinationObject");
  local_38 = local_58;
  local_30 = local_48;
  FUN_1411f1c38(param_2,local_24,&local_38,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf190 FUN_1468bf190 body=63 status=ok
// SIG undefined FUN_1468bf190(void)

void FUN_1468bf190(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 8;
  *(byte *)((longlong)param_1 + 0x4d) = *(byte *)((longlong)param_1 + 0x4d) & 0xfe;
  param_1[10] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1468bf1cf FUN_1468bf1cf body=104 status=ok
// SIG undefined FUN_1468bf1cf(void)

undefined8 FUN_1468bf1cf(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  undefined8 local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_1;
  FUN_1468bf238();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf238 FUN_1468bf238 body=796 status=ok
// SIG undefined FUN_1468bf238(void)

void FUN_1468bf238(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48 [3];
  int local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(*param_1 + 8);
  FUN_144aa02de(*param_1,param_2 + 0xc);
  FUN_144aa02de(*param_1,param_2 + 0x14);
  if (0x1fb < *(int *)(lVar2 + 0x40)) {
    FUN_144aa02de(*param_1,param_2 + 0x18);
  }
  FUN_144aa02de(*param_1,param_2 + 8);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),param_2);
  local_2c = *(uint *)(param_2 + 0x1c) & 0x2d4003b;
  FUN_144afef32(*param_1);
  if ((*(byte *)(lVar2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x1c) = local_2c & 0x2d4003b;
  }
  if (*(int *)(lVar2 + 0x40) < 0x1ff) {
    local_48[0] = CONCAT44(local_48[0]._4_4_,*(undefined4 *)(param_2 + 0x20));
    FUN_144aa02de(*param_1,local_48);
    *(longlong *)(param_2 + 0x20) = (longlong)(int)local_48[0];
    local_30 = *(int *)(param_2 + 0x28);
    FUN_144aa02de(*param_1,&local_30);
    *(longlong *)(param_2 + 0x28) = (longlong)local_30;
  }
  else {
    FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 0x20);
    FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 0x28);
  }
  local_48[0] = CONCAT71(local_48[0]._1_7_,*(undefined1 *)(param_2 + 0x4c)) & 0xffffffffffffff01;
  FUN_1456bb002(*param_1,local_48);
  bVar1 = *(byte *)(param_2 + 0x4c);
  *(byte *)(param_2 + 0x4c) = bVar1 & 0xfe | (byte)local_48[0];
  local_48[0] = CONCAT71(local_48[0]._1_7_,bVar1 >> 1) & 0xffffffffffffff01;
  FUN_1456bb002(*param_1,local_48);
  bVar1 = *(byte *)(param_2 + 0x4c);
  *(byte *)(param_2 + 0x4c) = bVar1 & 0xfd | (byte)local_48[0] * '\x02';
  local_48[0] = CONCAT71(local_48[0]._1_7_,bVar1 >> 2) & 0xffffffffffffff01;
  FUN_1456bb002(*param_1,local_48);
  *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) & 0xfb | (byte)local_48[0] << 2;
  iVar3 = *(int *)(lVar2 + 0x44);
  if (iVar3 < 0x3ed) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_14490a6ba(param_1);
    iVar3 = *(int *)(lVar2 + 0x44);
  }
  if (0x3ed < iVar3) {
    local_48[0] = CONCAT71(local_48[0]._1_7_,*(byte *)(param_2 + 0x4c) >> 5) & 0xffffffffffffff01;
    FUN_1456bb002(*param_1,local_48);
    *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) & 0xdf | (byte)local_48[0] << 5;
  }
  FUN_144afef32(*param_1,param_2 + 0x50);
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (0x16c < (int)uVar4) {
    local_48[0] = CONCAT71(local_48[0]._1_7_,*(byte *)(param_2 + 0x4c) >> 3) & 0xffffffffffffff01;
    FUN_1456bb002(*param_1,local_48);
    bVar1 = *(byte *)(param_2 + 0x4c);
    *(byte *)(param_2 + 0x4c) = bVar1 & 0xf7 | (byte)local_48[0] << 3;
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    if (0x1e4 < (int)uVar4) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,bVar1 >> 4) & 0xffffffffffffff01;
      FUN_1456bb002(*param_1,local_48);
      *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) & 0xef | (byte)local_48[0] << 4;
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
    }
  }
  if (0x3ea < (int)((ulonglong)uVar4 >> 0x20)) {
    local_48[0] = CONCAT71(local_48[0]._1_7_,*(byte *)(param_2 + 0x4c) >> 6) & 0xffffffffffffff01;
    FUN_1456bb002(*param_1,local_48);
    *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) & 0xbf | (byte)local_48[0] << 6;
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
  }
  if (0x1fa < (int)uVar4) {
    FUN_144aa02de(*param_1,param_2 + 0x54);
    FUN_144aa02de(*param_1,param_2 + 0x58);
    FUN_144aa02de(*param_1,param_2 + 0x5c);
    FUN_144aa02de(*param_1,param_2 + 0x60);
    FUN_144aa02de(*param_1,param_2 + 100);
  }
  if (((*(byte *)(lVar2 + 0x28) & 0x40) == 0) && (0x3f1 < *(int *)(lVar2 + 0x44))) {
    FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 0x30);
    FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 0x38);
  }
  else if ((*(byte *)(lVar2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf556 FUN_1468bf556 body=27 status=ok
// SIG undefined FUN_1468bf556(void)

void FUN_1468bf556(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1468bf571 FUN_1468bf571 body=104 status=ok
// SIG undefined FUN_1468bf571(void)

undefined8 FUN_1468bf571(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  undefined8 local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_1;
  FUN_1468bf5da();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf5da FUN_1468bf5da body=142 status=ok
// SIG undefined FUN_1468bf5da(void)

void FUN_1468bf5da(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),param_2 + 0xc);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),param_2 + 0x14);
  FUN_144aa02de(*param_1,param_2 + 8);
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),param_2);
  lVar1 = *(longlong *)(*param_1 + 8);
  if (0x3ea < *(int *)(lVar1 + 0x44)) {
    FUN_1456bb002(*param_1,param_2 + 0x20);
    lVar1 = *(longlong *)(*param_1 + 8);
  }
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1468bf668 FUN_1468bf668 body=362 status=ok
// SIG undefined FUN_1468bf668(void)

void FUN_1468bf668(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [32];
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 2;
  FUN_144afef32(*param_1);
  local_38 = (int)param_2[1];
  FUN_144aa02de(*param_1,&local_38);
  if (local_38 != 0) {
    if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
      FUN_1468bf7d4(param_2,local_38,1);
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      puVar6 = (undefined1 *)(lVar1 + 4);
      do {
        uVar4 = local_34;
        FUN_144afef32(*param_1,puVar6 + -4);
        if (1 < uVar4) {
          plVar2 = *(longlong **)(*param_1 + 8);
          puVar5 = *(undefined1 **)plVar2[1];
          if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
            (**(code **)(*plVar2 + 0x170))(plVar2,puVar6,1);
          }
          else {
            *puVar6 = *puVar5;
            *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
          }
        }
        FUN_1408383eb(*(undefined8 *)(*param_1 + 8),puVar6 + 4);
        FUN_1408383eb(*(undefined8 *)(*param_1 + 8),puVar6 + 0xc);
        FUN_1408383eb(*(undefined8 *)(*param_1 + 8),puVar6 + 0x14);
        FUN_1408383eb(*(undefined8 *)(*param_1 + 8),puVar6 + 0x1c);
        FUN_144aa02de(*param_1,puVar6 + 0x24);
        FUN_144afef32(*param_1,puVar6 + 0x28);
        puVar5 = puVar6 + 0x2c;
        puVar6 = puVar6 + 0x30;
      } while (puVar5 != (undefined1 *)((longlong)(int)lVar3 * 0x30 + lVar1));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bf7d4 FUN_1468bf7d4 body=116 status=ok
// SIG undefined FUN_1468bf7d4(void)

void FUN_1468bf7d4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1468c2232(param_1,iVar1);
    }
    FUN_1468c2204((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1468c3348(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1468bf84a FUN_1468bf84a body=38 status=ok
// SIG undefined FUN_1468bf84a(void)

undefined8 FUN_1468bf84a(undefined8 param_1,int param_2)

{
  FUN_145ab7db0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468bf870 FUN_1468bf870 body=42 status=ok
// SIG undefined FUN_1468bf870(void)

undefined8 FUN_1468bf870(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Private\\UObject/LinkerPlaceholderBase.h",0xa9,
                L"Pure virtual not implemented (%s)",
                L"FLinkerPlaceholderBase::GetPlaceholderAsUObject");
  return 0;
}



// FUNCTION 1468bf946 FUN_1468bf946 body=525 status=ok
// SIG undefined FUN_1468bf946(void)

int FUN_1468bf946(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar5 = 0;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar6 = FUN_140007dea();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      lVar6 = FUN_144b00dc8(param_2);
      if ((lVar6 != 0) && ((*(uint *)(param_2 + 8) >> 0x15 & 1) == 0)) {
        FUN_144757f48(param_2,0x400);
        FUN_1427ff290(lVar6 + 0x240,param_2);
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    }
  }
  local_94 = FUN_1468bdeca(param_1,param_2);
  iVar4 = FUN_1468c33f6(param_1,param_2);
  plVar1 = (longlong *)(param_1 + 0x170);
  iVar2 = *(int *)(param_1 + 0x178);
  local_98 = *(int *)(param_1 + 0x1a4);
  lVar6 = param_1 + 0x180;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar6;
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x198);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar6)) {
    do {
      plVar3 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x10);
      (**(code **)(*plVar3 + 0x310))(plVar3,param_2);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar6 || iStack_74 != iVar5));
  }
  FUN_1461087b6(plVar1);
  iVar5 = FUN_14610933e(param_1,param_2);
  FUN_146108736(param_1 + 0x18);
  FUN_146108776(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x14) = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return ((iVar4 + local_94 + iVar2) - local_98) + iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468bfb5c FUN_1468bfb5c body=122 status=ok
// SIG undefined FUN_1468bfb5c(void)

longlong FUN_1468bfb5c(longlong param_1,longlong param_2)

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
    FUN_1468bfbd6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1468bfbd6 FUN_1468bfbd6 body=117 status=ok
// SIG undefined FUN_1468bfbd6(void)

undefined8 * FUN_1468bfbd6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a2618e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1468bfc4c FUN_1468bfc4c body=93 status=ok
// SIG undefined FUN_1468bfc4c(void)

longlong FUN_1468bfc4c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1468bfcaa(param_1);
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



// FUNCTION 1468bfcaa FUN_1468bfcaa body=146 status=ok
// SIG undefined FUN_1468bfcaa(void)

longlong * FUN_1468bfcaa(longlong *param_1,longlong *param_2)

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



// FUNCTION 1468bfd3c FUN_1468bfd3c body=52 status=ok
// SIG undefined FUN_1468bfd3c(void)

void FUN_1468bfd3c(longlong *param_1)

{
  FUN_1468bfd70();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468bfd70 FUN_1468bfd70 body=312 status=ok
// SIG undefined FUN_1468bfd70(void)

void FUN_1468bfd70(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1468bfeaa FUN_1468bfeaa body=38 status=ok
// SIG undefined FUN_1468bfeaa(void)

undefined8 FUN_1468bfeaa(undefined8 param_1,int param_2)

{
  FUN_1459a52e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468bfed0 FUN_1468bfed0 body=38 status=ok
// SIG undefined FUN_1468bfed0(void)

undefined8 FUN_1468bfed0(undefined8 param_1,int param_2)

{
  FUN_145caced8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468bfef6 FUN_1468bfef6 body=360 status=ok
// SIG undefined FUN_1468bfef6(void)

void FUN_1468bfef6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1468c0060 FUN_1468c0060 body=129 status=ok
// SIG undefined FUN_1468c0060(void)

undefined8 FUN_1468c0060(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a79778(param_2);
  FUN_140a10636(&local_28,uVar1);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468c00e2 FUN_1468c00e2 body=284 status=ok
// SIG undefined FUN_1468c00e2(void)

void FUN_1468c00e2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1e8 [32];
  undefined **local_1c8;
  longlong *local_1c0;
  undefined ***local_1b8;
  undefined8 **local_1b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  lVar4 = FUN_144a797b2();
  if (((lVar4 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    plVar5 = *(longlong **)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (plVar5 == (longlong *)0x0) {
      FUN_1404a881e(param_1);
      plVar5 = *(longlong **)(param_1 + 8);
    }
    lVar4 = plVar5[0x12];
    lVar2 = plVar5[0xe];
    lVar3 = plVar5[0x13];
    plVar5[0x12] = lVar1;
    (**(code **)(*plVar5 + 0x88))(plVar5,0);
    plVar5[0x13] = 0;
    local_1b0 = &local_1b8;
    local_1c8 = &PTR_FUN_149e37810;
    local_1b8 = &local_1c8;
    local_1c0 = plVar5;
    FUN_144938ae6(*(undefined8 *)(param_1 + 0x18));
    plVar5[0x12] = lVar4;
    (**(code **)(*plVar5 + 0x88))(plVar5,lVar2);
    plVar5[0x13] = lVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    FUN_14689c7d2(*(undefined8 *)(param_1 + 0x18),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 1468c0200 FUN_1468c0200 body=64 status=ok
// SIG undefined FUN_1468c0200(void)

undefined8 * FUN_1468c0200(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c0248 FUN_1468c0248 body=194 status=ok
// SIG undefined FUN_1468c0248(void)

void FUN_1468c0248(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x12 & 1) != 0)) {
    lVar5 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1];
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(**(longlong **)(param_1 + 0x10) + lVar6) == lVar2) {
          return;
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    cVar4 = FUN_144b00bde(lVar2,*(undefined8 *)(param_1 + 0x18));
    if (cVar4 == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
      lVar5 = *(longlong *)(*param_2 + 0x20);
      if ((*param_2 != lVar2 && lVar2 != lVar5) &&
         ((param_3 == 0 ||
          (lVar2 = *(longlong *)(lVar5 + 0x10),
          *(longlong *)(param_1 + 0x18) != lVar2 && lVar2 != param_3)))) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        iVar1 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
          FUN_140ef9edc(plVar3,iVar1);
        }
        *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = *param_2;
      }
    }
  }
  return;
}



// FUNCTION 1468c030a FUN_1468c030a body=38 status=ok
// SIG undefined FUN_1468c030a(void)

undefined8 FUN_1468c030a(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c0340 FUN_1468c0340 body=32 status=ok
// SIG undefined FUN_1468c0340(void)

undefined8 FUN_1468c0340(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FArchiveCountMem");
  return param_2;
}



// FUNCTION 1468c0360 FUN_1468c0360 body=97 status=ok
// SIG undefined FUN_1468c0360(void)

void FUN_1468c0360(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)param_3;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * uVar2);
    uVar3 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / uVar2)) {
      uVar3 = uVar1 / uVar2 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar3,uVar2,param_4);
  }
  return;
}



// FUNCTION 1468c03c2 FUN_1468c03c2 body=129 status=ok
// SIG undefined FUN_1468c03c2(void)

void FUN_1468c03c2(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
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
  uVar6 = (ulonglong)param_3;
  uVar3 = FUN_144a3809e(lVar4 * uVar6);
  uVar5 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar3 / uVar6)) {
    uVar5 = uVar3 / uVar6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar5;
  FUN_144a7f90c(param_1,param_2,uVar5,uVar6,param_4);
  return;
}



// FUNCTION 1468c0444 FUN_1468c0444 body=413 status=ok
// SIG undefined FUN_1468c0444(void)

void FUN_1468c0444(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1468c05e2 FUN_1468c05e2 body=322 status=ok
// SIG undefined FUN_1468c05e2(void)

void FUN_1468c05e2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1468c0726 FUN_1468c0726 body=74 status=ok
// SIG undefined FUN_1468c0726(void)

undefined8 * FUN_1468c0726(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e8f030;
  puVar1 = TlsGetValue(DAT_14c75eca8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75eca8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c0770 FUN_1468c0770 body=141 status=ok
// SIG undefined FUN_1468c0770(void)

longlong FUN_1468c0770(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1468c07fe();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x60;
    if (lVar3 + lVar2 != 0) goto LAB_1468c07ad;
  }
  local_30 = param_3;
  FUN_1468c08b8(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x60;
LAB_1468c07ad:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c07fe FUN_1468c07fe body=184 status=ok
// SIG undefined FUN_1468c07fe(void)

int FUN_1468c07fe(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_145d6a85a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1468c0890;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1468c0890:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c08b8 FUN_1468c08b8 body=272 status=ok
// SIG undefined FUN_1468c08b8(void)

undefined4 * FUN_1468c08b8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1468c09ca(param_1,local_48);
  FUN_1468c0b76(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1468c0ab8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1468c0f4e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c09ca FUN_1468c09ca body=238 status=ok
// SIG undefined FUN_1468c09ca(void)

int * FUN_1468c09ca(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1468c0ab8 FUN_1468c0ab8 body=189 status=ok
// SIG undefined FUN_1468c0ab8(void)

undefined8 FUN_1468c0ab8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_1468c0e16();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar2 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_1468bfd3c(lVar1 + lVar4 + 8);
      memmove((void *)(lVar1 + lVar4),param_3,0x58);
      FUN_1468c0ed4(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_1468c0ade;
    }
  }
  uVar3 = 0;
LAB_1468c0ade:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c0b76 FUN_1468c0b76 body=156 status=ok
// SIG undefined FUN_1468c0b76(void)

undefined8 * FUN_1468c0b76(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1468c0c14(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1468bfd3c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c0c14 FUN_1468c0c14 body=123 status=ok
// SIG undefined FUN_1468c0c14(void)

undefined8 * FUN_1468c0c14(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1468c0c90();
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



// FUNCTION 1468c0c90 FUN_1468c0c90 body=388 status=ok
// SIG undefined FUN_1468c0c90(void)

longlong * FUN_1468c0c90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x18) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c0e16 FUN_1468c0e16 body=189 status=ok
// SIG undefined FUN_1468c0e16(void)

int FUN_1468c0e16(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_14472ecf8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1468c0e3f;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1468c0e3f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1468c0ed4 FUN_1468c0ed4 body=122 status=ok
// SIG undefined FUN_1468c0ed4(void)

void FUN_1468c0ed4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1468c0f4e FUN_1468c0f4e body=440 status=ok
// SIG undefined FUN_1468c0f4e(void)

void FUN_1468c0f4e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1468c1108 FUN_1468c1108 body=304 status=ok
// SIG undefined FUN_1468c1108(void)

undefined4 *
FUN_1468c1108(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1468c123a(param_1,local_50);
  FUN_1468c139e(local_48,param_3);
  *(undefined4 *)(local_48 + 0x10) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = FUN_1468c149f(local_48);
  local_68 = param_4;
  cVar2 = FUN_1468c1320(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1468c15f0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c123a FUN_1468c123a body=230 status=ok
// SIG undefined FUN_1468c123a(void)

int * FUN_1468c123a(longlong *param_1,int *param_2)

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



// FUNCTION 1468c1320 FUN_1468c1320 body=125 status=ok
// SIG undefined FUN_1468c1320(void)

void FUN_1468c1320(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = FUN_1468c1500();
    if (iVar6 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      *(undefined4 *)plVar1 = *param_3;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
      *(undefined4 *)(plVar1 + 1) = uVar3;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      FUN_1468c157e(param_1,*param_4);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_1468c1341;
    }
  }
  uVar5 = 0;
LAB_1468c1341:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1468c139e FUN_1468c139e body=77 status=ok
// SIG undefined FUN_1468c139e(void)

undefined8 * FUN_1468c139e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1468c13ec(param_1,iVar1,0);
    FUN_1468c144e(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1468c13ec FUN_1468c13ec body=98 status=ok
// SIG undefined FUN_1468c13ec(void)

void FUN_1468c13ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1468c144e FUN_1468c144e body=81 status=ok
// SIG undefined FUN_1468c144e(void)

void FUN_1468c144e(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(ulonglong *)(param_2 + lVar2 * 8);
      *(ulonglong *)(param_1 + lVar2 * 8) = uVar1;
      if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01'))
      {
        FUN_1456cec3c();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 1468c149f FUN_1468c149f body=96 status=ok
// SIG undefined FUN_1468c149f(void)

ulonglong FUN_1468c149f(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar3 = FUN_144a78877(uVar3 & 0xffffffff,uVar4 >> 0x10 ^ uVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  return uVar3;
}



// FUNCTION 1468c1500 FUN_1468c1500 body=126 status=ok
// SIG undefined FUN_1468c1500(void)

int FUN_1468c1500(longlong *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      uVar1 = *(uint *)(param_3 + 1);
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar2 + 8 + lVar6 * 0x18) == uVar1) {
          if ((int)uVar1 < 1) {
            return iVar3;
          }
          uVar4 = 0;
          while (*(longlong *)(*(longlong *)(lVar2 + lVar6 * 0x18) + uVar4 * 8) ==
                 *(longlong *)(*param_3 + uVar4 * 8)) {
            uVar4 = uVar4 + 1;
            if (uVar1 == uVar4) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468c157e FUN_1468c157e body=114 status=ok
// SIG undefined FUN_1468c157e(void)

void FUN_1468c157e(longlong *param_1,int param_2)

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



// FUNCTION 1468c15f0 FUN_1468c15f0 body=438 status=ok
// SIG undefined FUN_1468c15f0(void)

void FUN_1468c15f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1468c149f(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c17a8 FUN_1468c17a8 body=188 status=ok
// SIG undefined FUN_1468c17a8(void)

longlong FUN_1468c17a8(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1468c1847;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1468c1866(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1468c1847:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1468c1866 FUN_1468c1866 body=272 status=ok
// SIG undefined FUN_1468c1866(void)

undefined4 * FUN_1468c1866(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1468c1978(param_1,local_48);
  FUN_1468c1b1e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1468c1a66(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1468c1c36(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c1978 FUN_1468c1978 body=238 status=ok
// SIG undefined FUN_1468c1978(void)

int * FUN_1468c1978(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1468c1a66 FUN_1468c1a66 body=184 status=ok
// SIG undefined FUN_1468c1a66(void)

undefined8 FUN_1468c1a66(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1468bfd3c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1468c1bbc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468c1b1e FUN_1468c1b1e body=156 status=ok
// SIG undefined FUN_1468c1b1e(void)

undefined8 * FUN_1468c1b1e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1468c0c14(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1468bfd3c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c1bbc FUN_1468c1bbc body=122 status=ok
// SIG undefined FUN_1468c1bbc(void)

void FUN_1468c1bbc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1468c1c36 FUN_1468c1c36 body=478 status=ok
// SIG undefined FUN_1468c1c36(void)

void FUN_1468c1c36(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
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



// FUNCTION 1468c1e16 FUN_1468c1e16 body=477 status=ok
// SIG undefined FUN_1468c1e16(void)

void FUN_1468c1e16(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1468c1ff4 FUN_1468c1ff4 body=122 status=ok
// SIG undefined FUN_1468c1ff4(void)

undefined8 * FUN_1468c1ff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_144a817a2();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_146898afe(puVar3,param_1);
  FUN_14609ba96(puVar3 + 0x4a);
  *puVar3 = &PTR_FUN_149e8cba0;
  puVar3[0x4a] = &PTR_LAB_149e8cf90;
  return puVar3;
}



// FUNCTION 1468c206e FUN_1468c206e body=167 status=ok
// SIG undefined FUN_1468c206e(void)

undefined8 * FUN_1468c206e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  FUN_14680ea3d(L"UObject(FVTableHelper& Helper)");
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_149e8cfe0;
  param_1[5] = &PTR_LAB_149e8d280;
  return param_1;
}



// FUNCTION 1468c2116 FUN_1468c2116 body=123 status=ok
// SIG undefined FUN_1468c2116(void)

undefined8 * FUN_1468c2116(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  FUN_14680ea3d(L"UObject(FVTableHelper& Helper)");
  *param_1 = &PTR_FUN_149e5e270;
  FUN_145ccd2ec(param_1 + 6);
  param_1[0x15] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_145ccd2fe(param_1 + 0x1c);
  *param_1 = &PTR_FUN_149e8d2e0;
  param_1[0x1c] = &PTR_LAB_149e8d640;
  return param_1;
}


