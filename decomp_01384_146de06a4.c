// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146de06a4 FUN_146de06a4 body=178 status=ok
// SIG undefined FUN_146de06a4(void)

int FUN_146de06a4(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar2 = *(ulonglong *)(param_3 + 8);
  uVar6 = uVar2;
  uVar5 = uVar2;
  if ((longlong)uVar2 < 0) {
    uVar6 = uVar2 + 3;
    uVar5 = uVar2 + 7;
  }
  pauVar3 = (undefined1 (*) [16])*param_1;
  if (uVar2 + 3 < 7) {
    iVar4 = *(int *)*pauVar3;
    if (1 < (longlong)uVar2) {
      uVar5 = 1;
      do {
        iVar4 = iVar4 + *(int *)(*pauVar3 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    auVar9 = *pauVar3;
    if (7 < (longlong)uVar2) {
      uVar5 = uVar5 & 0xfffffffffffffff8;
      iVar4 = *(int *)pauVar3[1];
      iVar10 = *(int *)(pauVar3[1] + 4);
      iVar11 = *(int *)(pauVar3[1] + 8);
      iVar12 = *(int *)(pauVar3[1] + 0xc);
      auVar8 = auVar9;
      if (0xf < uVar2) {
        lVar7 = 8;
        do {
          piVar1 = (int *)(*pauVar3 + lVar7 * 4);
          auVar8._0_4_ = auVar9._0_4_ + *piVar1;
          auVar8._4_4_ = auVar9._4_4_ + piVar1[1];
          auVar8._8_4_ = auVar9._8_4_ + piVar1[2];
          auVar8._12_4_ = auVar9._12_4_ + piVar1[3];
          piVar1 = (int *)(pauVar3[1] + lVar7 * 4);
          iVar4 = iVar4 + *piVar1;
          iVar10 = iVar10 + piVar1[1];
          iVar11 = iVar11 + piVar1[2];
          iVar12 = iVar12 + piVar1[3];
          lVar7 = lVar7 + 8;
          auVar9 = auVar8;
        } while (lVar7 < (longlong)uVar5);
      }
      auVar9._0_4_ = iVar4 + auVar8._0_4_;
      auVar9._4_4_ = iVar10 + auVar8._4_4_;
      auVar9._8_4_ = iVar11 + auVar8._8_4_;
      auVar9._12_4_ = iVar12 + auVar8._12_4_;
      if ((longlong)uVar5 < (longlong)uVar6) {
        piVar1 = (int *)(*pauVar3 + uVar5 * 4);
        auVar9._0_4_ = auVar9._0_4_ + *piVar1;
        auVar9._4_4_ = auVar9._4_4_ + piVar1[1];
        auVar9._8_4_ = auVar9._8_4_ + piVar1[2];
        auVar9._12_4_ = auVar9._12_4_ + piVar1[3];
      }
    }
    auVar9 = phaddd(auVar9,auVar9);
    auVar9 = phaddd(auVar9,auVar9);
    iVar4 = auVar9._0_4_;
    if ((longlong)uVar6 < (longlong)uVar2) {
      do {
        iVar4 = iVar4 + *(int *)(*pauVar3 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
  }
  return iVar4;
}



// FUNCTION 146de0756 FUN_146de0756 body=95 status=ok
// SIG undefined FUN_146de0756(void)

void FUN_146de0756(longlong param_1,longlong param_2,double param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) < param_2) {
    lVar1 = (longlong)((double)param_2 * param_3) + param_2;
    if (0x7ffffffe < lVar1) {
      lVar1 = 0x7fffffff;
    }
    if (lVar1 < param_2) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    FUN_146de07b6(param_1,lVar1);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 146de07b6 FUN_146de07b6 body=198 status=ok
// SIG undefined FUN_146de07b6(void)

void FUN_146de07b6(undefined8 *param_1,ulonglong param_2)

{
  void *_Src;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar1;
  void *_Src_00;
  
  uVar1 = -(ulonglong)(param_2 >> 0x3e != 0) | param_2 * 4;
  _Dst = (void *)FUN_144a7d36f(uVar1);
  _Dst_00 = (void *)FUN_144a7d36f(uVar1);
  _Src = (void *)*param_1;
  uVar1 = param_1[2];
  if ((longlong)param_2 <= (longlong)param_1[2]) {
    uVar1 = param_2;
  }
  if ((longlong)uVar1 < 1) {
    _Src_00 = (void *)param_1[1];
  }
  else {
    memcpy(_Dst,_Src,uVar1 << 2);
    _Src_00 = (void *)param_1[1];
    memcpy(_Dst_00,_Src_00,uVar1 << 2);
  }
  *param_1 = _Dst;
  param_1[1] = _Dst_00;
  param_1[3] = param_2;
  if (_Src_00 != (void *)0x0) {
    thunk_FUN_1400020a8(_Src_00);
  }
  if (_Src != (void *)0x0) {
    thunk_FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 146de087c FUN_146de087c body=124 status=ok
// SIG undefined FUN_146de087c(void)

longlong FUN_146de087c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  longlong local_20 [2];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = (longlong)(*(int **)(param_1 + 0x18))[*(longlong *)(param_1 + 8)] -
            (longlong)**(int **)(param_1 + 0x18);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      local_40 = lVar3;
      local_38 = lVar1;
      local_20[0] = lVar3;
      local_10 = lVar1;
      iVar2 = FUN_146ddd0fe(local_20,&local_41);
      lVar3 = (longlong)iVar2;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de08f9 FUN_146de08f9 body=146 status=ok
// SIG undefined FUN_146de08f9(void)

longlong FUN_146de08f9(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if (param_2 >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  if (0x3fffffffffffffff < param_3) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar1 = FUN_148d808e9(param_1,param_2 << 2,0x10);
  if (param_2 << 2 != 0 && lVar1 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  return lVar1;
}



// FUNCTION 146de098c FUN_146de098c body=305 status=ok
// SIG undefined FUN_146de098c(void)

void FUN_146de098c(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_5;
  lVar5 = *param_4;
  lVar6 = (longlong)*(int *)(*param_1 + 4 + lVar5 * 4);
  lVar7 = lVar6 - lVar3;
  if (lVar3 < lVar6) {
    local_58 = *param_2;
    piVar1 = (int *)(local_58 + lVar3 * 4);
    local_5c = *piVar1;
    if (lVar7 < 2) {
      lVar6 = 0;
    }
    else {
      lVar8 = 1;
      lVar6 = 0;
      iVar4 = local_5c;
      do {
        if (piVar1[lVar8] < iVar4) {
          lVar6 = lVar8;
          iVar4 = piVar1[lVar8];
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
    }
    lVar6 = lVar6 + lVar3;
    iVar4 = *(int *)(local_58 + lVar6 * 4);
    if (iVar4 != local_5c) {
      *piVar1 = iVar4;
      *(int *)(local_58 + lVar6 * 4) = local_5c;
      lVar3 = *param_3;
      uVar2 = *(undefined4 *)(lVar3 + *param_5 * 4);
      *(undefined4 *)(lVar3 + *param_5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
      *(undefined4 *)(lVar3 + lVar6 * 4) = uVar2;
      lVar3 = *param_5;
      lVar5 = *param_4;
    }
    *(int *)(*param_6 + lVar5 * 4) = (int)lVar3;
    lVar3 = (longlong)*(int *)(*param_2 + *param_5 * 4) * 0x10;
    local_4c = (undefined4)*param_4;
    FUN_146de1fb0(*param_7 + lVar3,*(undefined8 *)(*param_7 + lVar3));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1400020a8(param_1[4]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 146de0abe FUN_146de0abe body=240 status=ok
// SIG undefined FUN_146de0abe(void)

void FUN_146de0abe(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 <= param_1[1] && 0 < param_3) {
    lVar2 = param_1[1] + -1;
    lVar5 = 0;
    do {
      lVar3 = *param_1;
      fVar7 = *(float *)(lVar3 + lVar5 * 4);
      lVar6 = lVar5;
      fVar8 = fVar7;
      if (lVar5 < lVar2) {
        lVar3 = lVar5;
        do {
          lVar4 = *param_1;
          fVar8 = *(float *)(lVar4 + 4 + lVar3 * 4);
          if (ABS(fVar7) < ABS(fVar8)) {
            uVar1 = *(undefined4 *)(lVar4 + 4 + lVar6 * 4);
            *(float *)(lVar4 + 4 + lVar6 * 4) = fVar8;
            *(undefined4 *)(lVar4 + 4 + lVar3 * 4) = uVar1;
            lVar4 = *param_2;
            uVar1 = *(undefined4 *)(lVar4 + 4 + lVar6 * 4);
            *(undefined4 *)(lVar4 + 4 + lVar6 * 4) = *(undefined4 *)(lVar4 + 4 + lVar3 * 4);
            lVar6 = lVar6 + 1;
            *(undefined4 *)(lVar4 + 4 + lVar3 * 4) = uVar1;
          }
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
        lVar3 = *param_1;
        fVar7 = *(float *)(lVar3 + lVar5 * 4);
        fVar8 = *(float *)(lVar3 + lVar6 * 4);
      }
      lVar4 = lVar6 + 1;
      if (param_3 + -1 <= lVar6) {
        lVar4 = lVar5;
      }
      if (param_3 <= lVar6) {
        lVar2 = lVar6 + -1;
        lVar4 = lVar5;
      }
      *(float *)(lVar3 + lVar6 * 4) = fVar7;
      *(float *)(lVar3 + lVar5 * 4) = fVar8;
      lVar3 = *param_2;
      uVar1 = *(undefined4 *)(lVar3 + lVar6 * 4);
      *(undefined4 *)(lVar3 + lVar6 * 4) = *(undefined4 *)(lVar3 + lVar5 * 4);
      *(undefined4 *)(lVar3 + lVar5 * 4) = uVar1;
      lVar5 = lVar4;
    } while (lVar6 != param_3 + -1);
  }
  return;
}



// FUNCTION 146de0bae FUN_146de0bae body=147 status=ok
// SIG undefined FUN_146de0bae(void)

void FUN_146de0bae(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_146dd92fc(local_68,0,0);
  FUN_146de0c42(*param_2,local_68,*(undefined8 *)param_2[1]);
  FUN_146de0e5a(param_1,local_68);
  FUN_146ddcf04(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de0c42 FUN_146de0c42 body=535 status=ok
// SIG undefined FUN_146de0c42(void)

void FUN_146de0c42(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 8);
  local_70 = 0;
  if (lVar3 != 0) {
    if (lVar3 < 1) {
      local_70 = 0;
    }
    else {
      local_70 = FUN_141729f83(lVar3);
    }
  }
  local_44 = 0;
  local_68 = lVar3;
  local_50 = lVar3;
  FUN_146de04ef(&local_70,&local_58,&local_59);
  FUN_146dd92fc(param_2,lVar3,lVar3);
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      lVar7 = lVar6;
      if (param_3 != 0) {
        lVar7 = (longlong)*(int *)(param_3 + lVar6 * 4);
      }
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar10;
      }
      lVar9 = lVar8 - lVar10;
      if (lVar9 != 0 && lVar10 <= lVar8) {
        do {
          piVar1 = (int *)(local_70 + lVar7 * 4);
          *piVar1 = *piVar1 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  if (local_68 == 0) {
    lVar6 = 0;
  }
  else {
    local_58 = local_70;
    iVar4 = FUN_146de06a4(&local_58,&local_59);
    lVar6 = (longlong)iVar4;
  }
  FUN_146de0756(param_2 + 0x28,lVar6,0);
  **(undefined4 **)(param_2 + 0x18) = 0;
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar6 * 4) =
           *(int *)(local_70 + lVar6 * 4) + *(int *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar6 = 0;
    do {
      *(undefined4 *)(local_70 + lVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar7;
      }
      if (lVar7 < lVar10) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar9 = *(longlong *)(param_1 + 0x28);
        do {
          iVar4 = *(int *)(lVar9 + lVar7 * 4);
          if (param_3 == 0) {
            iVar5 = (int)lVar6;
          }
          else {
            iVar5 = *(int *)(param_3 + lVar6 * 4);
            iVar4 = *(int *)(param_3 + (longlong)iVar4 * 4);
          }
          iVar2 = *(int *)(local_70 + (longlong)iVar5 * 4);
          *(int *)(local_70 + (longlong)iVar5 * 4) = iVar2 + 1;
          *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 4) = iVar4;
          *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 4) =
               *(undefined4 *)(lVar8 + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar10 != lVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  FUN_1400020a8(local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de0e5a FUN_146de0e5a body=700 status=ok
// SIG undefined FUN_146de0e5a(void)

longlong FUN_146de0e5a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  longlong *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_146dde6fa(local_e8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_80 = &local_70;
  local_70 = local_d0;
  local_68 = local_e0;
  local_90 = local_78;
  local_78[0] = 0;
  local_98 = local_50;
  local_50[0] = local_d0;
  local_40 = local_e0;
  local_88 = &local_99;
  FUN_146de119a();
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar10 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar10 * 4);
      }
      else {
        lVar13 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar10 * 4) + lVar12;
      }
      if (lVar12 < lVar13) {
        lVar11 = *(longlong *)(param_2 + 0x30);
        do {
          piVar1 = (int *)(local_d0 + (longlong)*(int *)(lVar11 + lVar12 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  lVar10 = 0;
  iVar17 = 0;
  lVar11 = 0;
  if (local_e0 != 0) {
    iVar17 = 0;
    if (local_e0 < 1) {
      lVar10 = 0;
      lVar11 = local_e0;
    }
    else {
      lVar10 = FUN_141729f83();
      lVar11 = local_e0;
      if (0 < local_e0) {
        lVar12 = 0;
        iVar16 = 0;
        do {
          iVar17 = *(int *)(local_d0 + lVar12 * 4) + iVar16;
          *(int *)(local_d0 + lVar12 * 4) = iVar16;
          *(int *)(lVar10 + lVar12 * 4) = iVar16;
          lVar12 = lVar12 + 1;
          iVar16 = iVar17;
        } while (lVar12 < local_e0);
      }
    }
  }
  *(int *)(local_d0 + lVar11 * 4) = iVar17;
  FUN_146de0756(&local_c0,(longlong)iVar17,0);
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar12 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar12 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar12 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar11 = *(longlong *)(param_2 + 0x28);
        lVar2 = *(longlong *)(param_2 + 0x30);
        do {
          lVar15 = (longlong)*(int *)(lVar2 + lVar13 * 4);
          iVar17 = *(int *)(lVar10 + lVar15 * 4);
          *(int *)(lVar10 + lVar15 * 4) = iVar17 + 1;
          *(int *)(lStack_b8 + (longlong)iVar17 * 4) = (int)lVar12;
          *(undefined4 *)(local_c0 + (longlong)iVar17 * 4) = *(undefined4 *)(lVar11 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_e0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_c0;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  local_e0 = uVar5;
  uStack_d8 = uVar4;
  local_d0 = uVar3;
  uStack_c8 = uVar6;
  local_c0 = lVar11;
  lStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  FUN_1400020a8(lVar10);
  FUN_146de02bc(local_e8);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146de1118 FUN_146de1118 body=129 status=ok
// SIG undefined FUN_146de1118(void)

void FUN_146de1118(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  return;
}



// FUNCTION 146de119a FUN_146de119a body=151 status=ok
// SIG undefined FUN_146de119a(void)

void FUN_146de119a(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar4 = uVar3;
  if (((uVar5 & 3) == 0) &&
     (uVar4 = (ulonglong)(-((uint)(uVar5 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar4)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar3 - uVar4;
  uVar5 = uVar7 + 3;
  if (-1 < (longlong)uVar7) {
    uVar5 = uVar7;
  }
  lVar6 = (uVar5 & 0xfffffffffffffffc) + uVar4;
  FUN_146de1232(param_1,0,uVar4);
  if (3 < (longlong)uVar7) {
    do {
      uVar2 = *(undefined4 *)param_1[1];
      puVar1 = (undefined4 *)(*(longlong *)*param_1 + uVar4 * 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
      uVar4 = uVar4 + 4;
    } while ((longlong)uVar4 < lVar6);
  }
  FUN_146de1232(param_1,lVar6,uVar3);
  return;
}



// FUNCTION 146de1232 FUN_146de1232 body=31 status=ok
// SIG undefined FUN_146de1232(void)

void FUN_146de1232(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) = *(undefined4 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de1251 FUN_146de1251 body=538 status=ok
// SIG undefined FUN_146de1251(void)

void FUN_146de1251(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_51;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_68 = 0;
  if (lVar3 != 0) {
    if (lVar3 < 1) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_141729f83(lVar3);
    }
  }
  local_3c = 0;
  local_60 = lVar3;
  local_48 = lVar3;
  FUN_146de04ef(&local_68,local_50,&local_51);
  FUN_146dde6fa(param_2,lVar3,lVar3);
  if (lVar3 < 1) {
    **(undefined4 **)(param_2 + 0x18) = 0;
    FUN_146de0756(param_2 + 0x28,(longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar3 * 4),0);
  }
  else {
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar7 * 4);
      }
      else {
        lVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4) + lVar8;
      }
      if (lVar8 < lVar9) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        do {
          iVar10 = *(int *)(lVar4 + lVar8 * 4);
          if (lVar7 <= iVar10) {
            if ((int)lVar7 < iVar10) {
              iVar10 = (int)lVar7;
            }
            piVar1 = (int *)(local_68 + (longlong)iVar10 * 4);
            *piVar1 = *piVar1 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
    **(undefined4 **)(param_2 + 0x18) = 0;
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar7 * 4) =
           *(int *)(local_68 + lVar7 * 4) + *(int *)(*(longlong *)(param_2 + 0x18) + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    FUN_146de0756(param_2 + 0x28,(longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar3 * 4),0);
    lVar7 = 0;
    do {
      *(undefined4 *)(local_68 + lVar7 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar7 * 4);
      }
      else {
        lVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4) + lVar8;
      }
      if (lVar8 < lVar9) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        lVar5 = *(longlong *)(param_1 + 0x30);
        do {
          iVar10 = *(int *)(lVar5 + lVar8 * 4);
          if (lVar7 <= iVar10) {
            iVar6 = (int)lVar7;
            iVar11 = iVar10;
            if (iVar6 < iVar10) {
              iVar11 = iVar6;
            }
            iVar2 = *(int *)(local_68 + (longlong)iVar11 * 4);
            *(int *)(local_68 + (longlong)iVar11 * 4) = iVar2 + 1;
            if (iVar10 <= iVar6) {
              iVar10 = iVar6;
            }
            *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 4) = iVar10;
            *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 4) =
                 *(undefined4 *)(lVar4 + lVar8 * 4);
          }
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
  }
  FUN_1400020a8(local_68);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de146c FUN_146de146c body=538 status=ok
// SIG undefined FUN_146de146c(void)

void FUN_146de146c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_51;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  local_68 = 0;
  if (lVar3 != 0) {
    if (lVar3 < 1) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_141729f83(lVar3);
    }
  }
  local_3c = 0;
  local_60 = lVar3;
  local_48 = lVar3;
  FUN_146de04ef(&local_68,local_50,&local_51);
  FUN_146dde6fa(param_2,lVar3,lVar3);
  if (lVar3 < 1) {
    **(undefined4 **)(param_2 + 0x18) = 0;
    FUN_146de0756(param_2 + 0x28,(longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar3 * 4),0);
  }
  else {
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar7 * 4);
      }
      else {
        lVar9 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar7 * 4) + lVar8;
      }
      if (lVar8 < lVar9) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        do {
          iVar10 = *(int *)(lVar4 + lVar8 * 4);
          if (iVar10 <= lVar7) {
            if ((int)lVar7 < iVar10) {
              iVar10 = (int)lVar7;
            }
            piVar1 = (int *)(local_68 + (longlong)iVar10 * 4);
            *piVar1 = *piVar1 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
    **(undefined4 **)(param_2 + 0x18) = 0;
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar7 * 4) =
           *(int *)(local_68 + lVar7 * 4) + *(int *)(*(longlong *)(param_2 + 0x18) + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    FUN_146de0756(param_2 + 0x28,(longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar3 * 4),0);
    lVar7 = 0;
    do {
      *(undefined4 *)(local_68 + lVar7 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar7 * 4);
      }
      else {
        lVar9 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar7 * 4) + lVar8;
      }
      if (lVar8 < lVar9) {
        lVar4 = *(longlong *)(param_1 + 0x30);
        lVar5 = *(longlong *)(param_1 + 0x28);
        do {
          iVar10 = *(int *)(lVar5 + lVar8 * 4);
          if (iVar10 <= lVar7) {
            iVar6 = (int)lVar7;
            iVar11 = iVar10;
            if (iVar6 < iVar10) {
              iVar11 = iVar6;
            }
            iVar2 = *(int *)(local_68 + (longlong)iVar11 * 4);
            *(int *)(local_68 + (longlong)iVar11 * 4) = iVar2 + 1;
            if (iVar10 <= iVar6) {
              iVar10 = iVar6;
            }
            *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 4) = iVar10;
            *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 4) =
                 *(undefined4 *)(lVar4 + lVar8 * 4);
          }
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
  }
  FUN_1400020a8(local_68);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de1688 FUN_146de1688 body=129 status=ok
// SIG undefined FUN_146de1688(void)

void FUN_146de1688(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      FUN_146de170a();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar2 = (longlong *)FUN_146de171c(param_2);
    *param_1 = plVar2;
    param_1[1] = plVar2;
    param_1[2] = plVar2 + param_2 * 2;
    do {
      *plVar2 = 0;
      plVar2[1] = 0;
      lVar3 = FUN_14001cc68(0x18,0x10);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *plVar2 = lVar3;
      plVar2 = plVar2 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = plVar2;
  }
  return;
}



// FUNCTION 146de170a FUN_146de170a body=16 status=ok
// SIG undefined FUN_146de170a(void)

void FUN_146de170a(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 146de171c FUN_146de171c body=38 status=ok
// SIG undefined FUN_146de171c(void)

void FUN_146de171c(ulonglong param_1)

{
  if (0xff < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 0x10 + (ulonglong)(param_1 * 0x10 == 0),0x10);
  return;
}



// FUNCTION 146de1742 FUN_146de1742 body=61 status=ok
// SIG undefined FUN_146de1742(void)

void FUN_146de1742(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 146de1780 FUN_146de1780 body=118 status=ok
// SIG undefined FUN_146de1780(void)

void FUN_146de1780(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_146de1742(lVar1);
        lVar1 = lVar1 + 0x10;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
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



// FUNCTION 146de17f7 FUN_146de17f7 body=133 status=ok
// SIG undefined FUN_146de17f7(void)

void FUN_146de17f7(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = **(undefined8 **)(param_2 + 0x10);
  lVar1 = (*(undefined8 **)(param_2 + 0x10))[1];
  if (param_1[1] != lVar1) {
    FUN_146dddaba(param_1,lVar1,1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_146de187e();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de187e FUN_146de187e body=584 status=ok
// SIG undefined FUN_146de187e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146de187e(undefined8 *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  uint uVar16;
  uint uVar18;
  float fVar19;
  float fVar22;
  float fVar26;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar20 [16];
  uint uVar23;
  uint uVar25;
  uint uVar27;
  uint uVar29;
  float fVar30;
  uint uVar31;
  uint uVar33;
  undefined1 auVar21 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar17;
  int iVar24;
  int iVar28;
  int iVar32;
  
  auVar3 = _DAT_1499319a0;
  uVar2 = *(ulonglong *)(param_1[3] + 8);
  uVar5 = uVar2 + 3;
  if (-1 < (longlong)uVar2) {
    uVar5 = uVar2;
  }
  uVar5 = uVar5 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar2) {
    lVar4 = 0;
    auVar6 = pmovzxbw(in_XMM2,0x8000800080008000);
    auVar7 = pmovsxbw(in_XMM5,0x7ffe7ffe7ffe7ffe);
    do {
      auVar11 = *(undefined1 (*) [16])(*(longlong *)(param_1[1] + 0x10) + lVar4 * 4);
      fVar19 = auVar11._12_4_;
      fVar10 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar14 = auVar11._8_4_;
      auVar8._0_4_ = -(uint)((int)fVar10 < 0);
      auVar8._4_4_ = -(uint)((int)fVar13 < 0);
      auVar8._8_4_ = -(uint)((int)fVar14 < 0);
      auVar8._12_4_ = -(uint)((int)fVar19 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar20 = rsqrtps(unaff_XMM11,auVar11);
      fVar15 = auVar20._0_4_;
      fVar22 = auVar20._4_4_;
      fVar26 = auVar20._8_4_;
      fVar30 = auVar20._12_4_;
      auVar11 = auVar11 & auVar3;
      iVar17 = auVar11._0_4_;
      uVar16 = iVar17 - auVar6._0_4_;
      iVar24 = auVar11._4_4_;
      uVar23 = iVar24 - auVar6._4_4_;
      iVar28 = auVar11._8_4_;
      iVar32 = auVar11._12_4_;
      uVar27 = iVar28 - auVar6._8_4_;
      uVar31 = iVar32 - auVar6._12_4_;
      auVar34._0_4_ =
           -(uint)(((uint)(0x7effffff < uVar16) * 0x7effffff | (0x7effffff >= uVar16) * uVar16) ==
                  uVar16);
      auVar34._4_4_ =
           -(uint)(((uint)(0x7effffff < uVar23) * 0x7effffff | (0x7effffff >= uVar23) * uVar23) ==
                  uVar23);
      auVar34._8_4_ =
           -(uint)(((uint)(0x7effffff < uVar27) * 0x7effffff | (0x7effffff >= uVar27) * uVar27) ==
                  uVar27);
      auVar34._12_4_ =
           -(uint)(((uint)(0x7effffff < uVar31) * 0x7effffff | (0x7effffff >= uVar31) * uVar31) ==
                  uVar31);
      uVar18 = iVar17 - 1;
      uVar25 = iVar24 - 1;
      uVar29 = iVar28 - 1;
      uVar33 = iVar32 - 1;
      uVar16 = auVar7._0_4_;
      uVar23 = auVar7._4_4_;
      uVar27 = auVar7._8_4_;
      uVar31 = auVar7._12_4_;
      auVar36._0_4_ = -(uint)(((uVar16 < uVar18) * uVar16 | (uVar16 >= uVar18) * uVar18) == uVar18);
      auVar36._4_4_ = -(uint)(((uVar23 < uVar25) * uVar23 | (uVar23 >= uVar25) * uVar25) == uVar25);
      auVar36._8_4_ = -(uint)(((uVar27 < uVar29) * uVar27 | (uVar27 >= uVar29) * uVar29) == uVar29);
      auVar36._12_4_ = -(uint)(((uVar31 < uVar33) * uVar31 | (uVar31 >= uVar33) * uVar33) == uVar33)
      ;
      auVar21._0_4_ = -(uint)(iVar17 == 0x7f800000);
      auVar21._4_4_ = -(uint)(iVar24 == 0x7f800000);
      auVar21._8_4_ = -(uint)(iVar28 == 0x7f800000);
      auVar21._12_4_ = -(uint)(iVar32 == 0x7f800000);
      auVar12._0_4_ = -(uint)(0x7f800000 < iVar17);
      auVar12._4_4_ = -(uint)(0x7f800000 < iVar24);
      auVar12._8_4_ = -(uint)(0x7f800000 < iVar28);
      auVar12._12_4_ = -(uint)(0x7f800000 < iVar32);
      auVar20 = auVar12 | auVar21 | auVar34 | auVar8 & auVar36;
      auVar11._0_4_ =
           (float)((uint)((1.5 - fVar15 * fVar15 * fVar10 * 0.5) * fVar15 * fVar10) & auVar20._0_4_)
      ;
      auVar11._4_4_ =
           (float)((uint)((1.5 - fVar22 * fVar22 * fVar13 * 0.5) * fVar22 * fVar13) & auVar20._4_4_)
      ;
      auVar11._8_4_ =
           (float)((uint)((1.5 - fVar26 * fVar26 * fVar14 * 0.5) * fVar26 * fVar14) & auVar20._8_4_)
      ;
      auVar11._12_4_ =
           (float)((uint)((1.5 - fVar30 * fVar30 * fVar19 * 0.5) * fVar30 * fVar19) & auVar20._12_4_
                  );
      auVar9._0_4_ = -(uint)((int)auVar11._0_4_ < 0);
      auVar9._4_4_ = -(uint)((int)auVar11._4_4_ < 0);
      auVar9._8_4_ = -(uint)((int)auVar11._8_4_ < 0);
      auVar9._12_4_ = -(uint)((int)auVar11._12_4_ < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar20 = rsqrtps(auVar21,auVar11);
      fVar19 = auVar20._0_4_;
      fVar10 = auVar20._4_4_;
      fVar13 = auVar20._8_4_;
      fVar14 = auVar20._12_4_;
      auVar20 = auVar11 & auVar3;
      iVar17 = auVar20._0_4_;
      uVar18 = iVar17 - auVar6._0_4_;
      iVar24 = auVar20._4_4_;
      uVar25 = iVar24 - auVar6._4_4_;
      iVar28 = auVar20._8_4_;
      iVar32 = auVar20._12_4_;
      uVar29 = iVar28 - auVar6._8_4_;
      uVar33 = iVar32 - auVar6._12_4_;
      auVar35._0_4_ =
           -(uint)(((uint)(0x7effffff < uVar18) * 0x7effffff | (0x7effffff >= uVar18) * uVar18) ==
                  uVar18);
      auVar35._4_4_ =
           -(uint)(((uint)(0x7effffff < uVar25) * 0x7effffff | (0x7effffff >= uVar25) * uVar25) ==
                  uVar25);
      auVar35._8_4_ =
           -(uint)(((uint)(0x7effffff < uVar29) * 0x7effffff | (0x7effffff >= uVar29) * uVar29) ==
                  uVar29);
      auVar35._12_4_ =
           -(uint)(((uint)(0x7effffff < uVar33) * 0x7effffff | (0x7effffff >= uVar33) * uVar33) ==
                  uVar33);
      uVar18 = iVar17 - 1;
      uVar25 = iVar24 - 1;
      uVar29 = iVar28 - 1;
      uVar33 = iVar32 - 1;
      auVar37._0_4_ = -(uint)(((uVar16 < uVar18) * uVar16 | (uVar16 >= uVar18) * uVar18) == uVar18);
      auVar37._4_4_ = -(uint)(((uVar23 < uVar25) * uVar23 | (uVar23 >= uVar25) * uVar25) == uVar25);
      auVar37._8_4_ = -(uint)(((uVar27 < uVar29) * uVar27 | (uVar27 >= uVar29) * uVar29) == uVar29);
      auVar37._12_4_ = -(uint)(((uVar31 < uVar33) * uVar31 | (uVar31 >= uVar33) * uVar33) == uVar33)
      ;
      unaff_XMM11._0_4_ = -(uint)(iVar17 == 0x7f800000);
      unaff_XMM11._4_4_ = -(uint)(iVar24 == 0x7f800000);
      unaff_XMM11._8_4_ = -(uint)(iVar28 == 0x7f800000);
      unaff_XMM11._12_4_ = -(uint)(iVar32 == 0x7f800000);
      auVar20._0_4_ = -(uint)(0x7f800000 < iVar17);
      auVar20._4_4_ = -(uint)(0x7f800000 < iVar24);
      auVar20._8_4_ = -(uint)(0x7f800000 < iVar28);
      auVar20._12_4_ = -(uint)(0x7f800000 < iVar32);
      auVar20 = auVar20 | unaff_XMM11 | auVar35 | auVar9 & auVar37;
      puVar1 = (uint *)(*(longlong *)*param_1 + lVar4 * 4);
      *puVar1 = (uint)((1.5 - fVar19 * fVar19 * auVar11._0_4_ * 0.5) * fVar19 * auVar11._0_4_) &
                auVar20._0_4_;
      puVar1[1] = (uint)((1.5 - fVar10 * fVar10 * auVar11._4_4_ * 0.5) * fVar10 * auVar11._4_4_) &
                  auVar20._4_4_;
      puVar1[2] = (uint)((1.5 - fVar13 * fVar13 * auVar11._8_4_ * 0.5) * fVar13 * auVar11._8_4_) &
                  auVar20._8_4_;
      puVar1[3] = (uint)((1.5 - fVar14 * fVar14 * auVar11._12_4_ * 0.5) * fVar14 * auVar11._12_4_) &
                  auVar20._12_4_;
      lVar4 = lVar4 + 4;
    } while (lVar4 < (longlong)uVar5);
  }
  if ((longlong)uVar5 < (longlong)uVar2) {
    do {
      *(float *)(*(longlong *)*param_1 + uVar5 * 4) =
           SQRT(SQRT(*(float *)(*(longlong *)(param_1[1] + 0x10) + uVar5 * 4)));
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}



// FUNCTION 146de1ac6 FUN_146de1ac6 body=154 status=ok
// SIG undefined FUN_146de1ac6(void)

char * FUN_146de1ac6(char *param_1,char *param_2)

{
  size_t _Size;
  
  if (*param_2 == '\x01') {
    FUN_146de1118(param_1,param_2);
  }
  else if (param_1 != param_2) {
    FUN_146dde6fa(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(longlong *)(param_2 + 0x20) == 0) {
      _Size = *(longlong *)(param_1 + 8) * 4 + 4;
      if (_Size != 0) {
        memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size);
      }
      FUN_146de1b60(param_1 + 0x28,param_2 + 0x28);
    }
    else {
      FUN_146de1bbb(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 146de1b60 FUN_146de1b60 body=91 status=ok
// SIG undefined FUN_146de1b60(void)

undefined8 * FUN_146de1b60(undefined8 *param_1,undefined8 *param_2)

{
  FUN_146de0756(param_1,param_2[2],0);
  if ((0 < (longlong)param_2[2]) && (param_1[2] != 0)) {
    memcpy((void *)*param_1,(void *)*param_2,param_1[2] << 2);
    if (param_1[2] != 0) {
      memcpy((void *)param_1[1],(void *)param_2[1],param_1[2] << 2);
    }
  }
  return param_1;
}



// FUNCTION 146de1bbb FUN_146de1bbb body=1011 status=ok
// SIG undefined FUN_146de1bbb(void)

void FUN_146de1bbb(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_2 + 8);
  local_d8 = param_1;
  if (*param_2 == '\x01') {
    FUN_146dde6fa(param_1,*(undefined8 *)(param_2 + 0x10),lVar6);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar7 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de07b6(local_d8 + 0x28);
    }
    lVar9 = local_d8;
    if (0 < lVar6) {
      local_c0 = local_d8 + 0x28;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) =
             *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4);
        lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar8 * 4);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar8 * 4);
        }
        else {
          lVar7 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar8 * 4) + lVar5;
        }
        if (lVar5 < lVar7) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          local_d0 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined4 *)(local_c8 + lVar5 * 4);
            uVar2 = *(undefined4 *)(local_d0 + lVar5 * 4);
            iVar3 = *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4);
            *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) = iVar3 + 1;
            lVar9 = *(longlong *)(lVar9 + 0x38);
            FUN_146de0756(local_c0,lVar9 + 1,0);
            *(undefined4 *)(*(longlong *)(local_d8 + 0x28) + lVar9 * 4) = 0;
            *(undefined4 *)(*(longlong *)(local_d8 + 0x30) + lVar9 * 4) = uVar2;
            *(undefined4 *)(*(longlong *)(local_d8 + 0x28) + (longlong)iVar3 * 4) = uVar1;
            lVar5 = lVar5 + 1;
            lVar9 = local_d8;
          } while (lVar7 != lVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar6);
    }
    if ((*(longlong *)(lVar9 + 0x20) == 0) && (lVar6 = *(longlong *)(lVar9 + 8), -1 < lVar6)) {
      uVar1 = *(undefined4 *)(lVar9 + 0x38);
      lVar8 = lVar6;
      do {
        if (*(int *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4) != 0) goto LAB_146de1ed0;
        bVar4 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar4);
      lVar8 = -1;
LAB_146de1ed0:
      if (lVar8 < lVar6) {
        do {
          *(undefined4 *)(*(longlong *)(local_d8 + 0x18) + 4 + lVar8 * 4) = uVar1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(longlong *)(local_d8 + 8));
      }
    }
  }
  else {
    local_b8[0] = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    lStack_78 = 0;
    FUN_146dde6fa(local_b8,*(undefined8 *)(param_2 + 0x10),lVar6);
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (lStack_78 < lVar7 + local_80) {
      FUN_146de07b6(&local_90);
    }
    if (0 < lVar6) {
      lVar9 = 0;
      local_d0 = lVar6;
      do {
        *(undefined4 *)(local_a0 + 4 + lVar9 * 4) = *(undefined4 *)(local_a0 + lVar9 * 4);
        lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar9 * 4);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar9 * 4);
        }
        else {
          lVar8 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar9 * 4) + lVar6;
        }
        if (lVar6 < lVar8) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x30);
          do {
            lVar7 = local_80;
            uVar1 = *(undefined4 *)(local_c8 + lVar6 * 4);
            uVar2 = *(undefined4 *)(lVar5 + lVar6 * 4);
            iVar3 = *(int *)(local_a0 + 4 + lVar9 * 4);
            *(int *)(local_a0 + 4 + lVar9 * 4) = iVar3 + 1;
            FUN_146de0756(&local_90,local_80 + 1,0);
            *(undefined4 *)(local_90 + lVar7 * 4) = 0;
            *(undefined4 *)(lStack_88 + lVar7 * 4) = uVar2;
            *(undefined4 *)(local_90 + (longlong)iVar3 * 4) = uVar1;
            lVar6 = lVar6 + 1;
          } while (lVar8 != lVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != local_d0);
    }
    if ((lStack_98 == 0) && (-1 < local_b0)) {
      lVar6 = local_b0;
      do {
        if (*(int *)(local_a0 + lVar6 * 4) != 0) goto joined_r0x000146de1f2c;
        bVar4 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar4);
      lVar6 = -1;
joined_r0x000146de1f2c:
      for (; lVar6 < local_b0; lVar6 = lVar6 + 1) {
        *(undefined4 *)(local_a0 + 4 + lVar6 * 4) = (undefined4)local_80;
      }
    }
    local_b8[0] = 1;
    FUN_146de1ac6(local_d8,local_b8);
    FUN_146de02bc(local_b8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de1fb0 FUN_146de1fb0 body=94 status=ok
// SIG undefined FUN_146de1fb0(void)

void FUN_146de1fb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) != 0xaaaaaaaaaaaaaaa) {
    plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
    *(undefined4 *)(plVar2 + 2) = *param_3;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar2 = param_2;
    plVar2[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar2;
    *plVar1 = (longlong)plVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 146de2010 FUN_146de2010 body=148 status=ok
// SIG undefined FUN_146de2010(void)

void FUN_146de2010(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_146de20a4(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_146de20a4(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 146de20a4 FUN_146de20a4 body=38 status=ok
// SIG undefined FUN_146de20a4(void)

void FUN_146de20a4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de20ca FUN_146de20ca body=148 status=ok
// SIG undefined FUN_146de20ca(void)

void FUN_146de20ca(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_146de215e(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_146de215e(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 146de215e FUN_146de215e body=35 status=ok
// SIG undefined FUN_146de215e(void)

void FUN_146de215e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de2182 FUN_146de2182 body=124 status=ok
// SIG undefined FUN_146de2182(void)

void FUN_146de2182(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x160);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x60) * 2;
  }
  *(longlong *)(param_1 + 0x170) = lVar1;
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x168);
  FUN_146de21fe(param_1 + 0x50,param_2,param_3,param_1 + 0xe0,param_1 + 0x170,param_1 + 0x16c);
  *(uint *)(param_1 + 0x178) = (uint)(*(float *)(param_1 + 0x168) < *(float *)(param_1 + 0x16c)) * 2
  ;
  return;
}



// FUNCTION 146de21fe FUN_146de21fe body=1544 status=ok
// SIG undefined FUN_146de21fe(void)

void FUN_146de21fe(longlong param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4,
                  longlong *param_5,float *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  ulonglong *puStack_170;
  ulonglong local_168;
  ulonglong *puStack_160;
  ulonglong local_158;
  ulonglong *local_150;
  ulonglong local_148;
  longlong local_140;
  undefined1 local_131;
  ulonglong *local_130;
  ulonglong *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  ulonglong *local_110;
  undefined8 local_108;
  ulonglong *local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  fVar9 = *param_6;
  local_188 = *param_5;
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  local_f0 = param_3[2];
  local_100 = (ulonglong *)*param_3;
  uStack_f8 = param_3[1];
  local_128 = (ulonglong *)*param_2;
  puStack_120 = (ulonglong *)param_2[1];
  local_118 = (ulonglong *)param_2[2];
  local_190 = param_4;
  local_108 = param_1;
  FUN_146ddda34(&local_148,&local_130);
  local_128 = (ulonglong *)*param_2;
  puStack_120 = (ulonglong *)param_2[1];
  local_118 = (ulonglong *)param_2[2];
  if (puStack_120 != (ulonglong *)0x0) {
    local_d0 = (ulonglong)local_128;
    local_c0 = puStack_120;
    fVar5 = (float)FUN_146dddcaa(&local_d8);
    fVar7 = 0.0;
    if ((fVar5 != 0.0) || (NAN(fVar5))) {
      fVar8 = fVar9 * fVar9 * fVar5;
      fVar9 = 1.1754944e-38;
      if (1.1754944e-38 <= fVar8) {
        fVar9 = fVar8;
      }
      local_128 = &local_148;
      if (local_140 != 0) {
        local_d0 = local_148;
        fVar7 = (float)FUN_146dddd88(&local_d8,&local_130);
      }
      if (fVar7 < fVar9) {
        *param_5 = 0;
        fVar7 = fVar7 / fVar5;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        *param_6 = fVar7;
      }
      else {
        local_158 = 0;
        if (0 < (longlong)puVar1) {
          local_158 = FUN_141729e88(puVar1);
        }
        local_150 = puVar1;
        if (puVar1 != *(ulonglong **)(local_190 + 0x10)) {
          FUN_146dddaba(&local_158,*(ulonglong **)(local_190 + 0x10),1);
        }
        FUN_146de2808(local_190,&local_148,&local_158);
        local_168 = 0;
        puStack_160 = (ulonglong *)0x0;
        puVar2 = puStack_160;
        if ((puVar1 == (ulonglong *)0x0) || (puVar2 = puVar1, (longlong)puVar1 < 1)) {
          puStack_160 = puVar2;
          local_178 = 0;
        }
        else {
          local_168 = FUN_141729e88(puVar1);
          puStack_170 = (ulonglong *)0x0;
          puStack_160 = puVar1;
          local_178 = FUN_141729e88(puVar1);
        }
        puStack_120 = &local_158;
        fVar8 = 0.0;
        puStack_170 = puVar1;
        local_128 = &local_148;
        if (local_150 != (ulonglong *)0x0) {
          local_d0 = local_148;
          local_c8 = local_158;
          fVar8 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
        }
        if (local_188 < 1) {
          lVar4 = 0;
        }
        else {
          lVar3 = 0;
          do {
            local_180 = lVar3;
            if (puStack_170 != *(ulonglong **)(param_1 + 8)) {
              FUN_146dddaba(&local_178,*(ulonglong **)(param_1 + 8),1);
            }
            FUN_146dde0e2(&local_178,param_1,&local_158);
            fVar7 = 0.0;
            fVar6 = 0.0;
            if (puStack_170 != (ulonglong *)0x0) {
              local_d0 = local_158;
              local_c8 = local_178;
              local_128 = &local_158;
              puStack_120 = &local_178;
              fVar6 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
            }
            local_d8 = CONCAT44(fVar8 / fVar6,(undefined4)local_d8);
            local_c8 = local_158;
            local_b8[0] = *param_3;
            local_a8 = param_3[1];
            puStack_120 = (ulonglong *)&local_131;
            local_130 = local_b8;
            local_128 = &local_d8;
            local_118 = param_3;
            FUN_146dde30a(&local_130);
            puStack_120 = puStack_170;
            local_118 = (ulonglong *)CONCAT44(fVar8 / fVar6,(undefined4)local_118);
            local_110 = &local_178;
            FUN_146dde3e1(&local_148,&local_130,&local_d8);
            lVar4 = local_180;
            local_128 = &local_148;
            if (local_140 != 0) {
              local_d0 = local_148;
              fVar7 = (float)FUN_146dddd88(&local_d8,&local_130);
            }
            if (fVar7 < fVar9) break;
            if (puStack_160 != *(ulonglong **)(local_190 + 0x10)) {
              FUN_146dddaba(&local_168,*(ulonglong **)(local_190 + 0x10),1);
            }
            FUN_146de2808(local_190,&local_148,&local_168);
            fVar6 = 0.0;
            puStack_120 = &local_168;
            if (puStack_160 != (ulonglong *)0x0) {
              local_d0 = local_148;
              local_c8 = local_168;
              local_128 = &local_148;
              fVar6 = (float)FUN_146dddfe8(&local_d8,local_b8,&local_130);
            }
            local_128 = &local_168;
            local_110 = local_150;
            local_108 = CONCAT44(fVar6 / fVar8,(undefined4)local_108);
            local_100 = &local_158;
            FUN_146dde4cc(local_100,&local_130,&local_d8);
            lVar3 = lVar4 + 1;
            lVar4 = local_188;
            fVar8 = fVar6;
          } while (local_188 != lVar3);
        }
        fVar7 = fVar7 / fVar5;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        *param_6 = fVar7;
        *param_5 = lVar4;
        FUN_1400020a8(local_178);
        FUN_1400020a8(local_168);
        FUN_1400020a8(local_158);
      }
      goto LAB_146de232e;
    }
  }
  local_128 = local_b8;
  local_b8[0] = local_b8[0] & 0xffffffff00000000;
  local_d8 = *param_3;
  local_130 = &local_d8;
  local_c8 = param_3[1];
  puStack_120 = &local_158;
  local_118 = param_3;
  FUN_146ddd334();
  *param_5 = 0;
  *param_6 = 0.0;
LAB_146de232e:
  FUN_1400020a8(local_148);
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de2808 FUN_146de2808 body=331 status=ok
// SIG undefined FUN_146de2808(void)

void FUN_146de2808(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 **local_70;
  ulonglong local_68;
  undefined8 **local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x70;
  lVar2 = *(longlong *)(param_1 + 0x78);
  local_78 = lVar1;
  if (lVar2 == *(longlong *)(param_2 + 8)) {
    if (*(longlong *)(param_3 + 8) != lVar2) {
      FUN_146dddaba(param_3,lVar2,1);
    }
    FUN_146de2954(param_3,lVar1,param_2);
  }
  else {
    FUN_146de2ad9(param_3,param_2,&local_60);
  }
  local_58 = param_1 + 0x50;
  local_50 = param_3;
  FUN_146de2bca(param_3,&local_60,&local_70);
  local_70 = (undefined8 **)((ulonglong)local_70 & 0xffffffffffffff00);
  local_68 = param_1 + 8;
  local_60 = &local_70;
  local_58 = param_3;
  FUN_146de2cd2(param_3,&local_60);
  local_60 = (undefined8 **)((ulonglong)local_60 & 0xffffffffffffff00);
  local_58 = local_58 & 0xffffffffffffff00;
  local_70 = &local_60;
  local_68 = param_3;
  local_50 = param_1 + 8;
  FUN_146de2e22(param_3,&local_70);
  local_58 = param_1 + 0x50;
  local_50 = param_3;
  FUN_146de2bca(param_3,&local_60,&local_70);
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == *(longlong *)(param_2 + 8)) {
    if (*(longlong *)(param_3 + 8) != lVar1) {
      FUN_146dddaba(param_3,lVar1,1);
    }
    FUN_146de2f4c(param_3,local_78,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de2954 FUN_146de2954 body=300 status=ok
// SIG undefined FUN_146de2954(void)

void FUN_146de2954(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_3[1];
  if ((*param_1 == *param_3) && (param_1[1] == lVar5)) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar5 = param_2[1];
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        while (lVar3 = lVar4 + 1, *(char *)((longlong)local_38 + lVar4) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar4) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar3 * 4);
          while (lVar5 = (longlong)iVar2, lVar3 - lVar5 != 1) {
            lVar4 = *param_1;
            uVar1 = *(undefined4 *)(lVar4 + lVar5 * 4);
            *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)(lVar4 + -4 + lVar3 * 4);
            *(undefined4 *)(lVar4 + -4 + lVar3 * 4) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar5) = 1;
            iVar2 = *(int *)(*param_2 + lVar5 * 4);
          }
          lVar5 = param_2[1];
          lVar4 = lVar3;
          if (lVar5 <= lVar3) goto LAB_146de2a72;
        }
        lVar4 = lVar3;
      } while (lVar3 < lVar5);
    }
LAB_146de2a72:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar5) {
    lVar4 = 0;
    do {
      *(undefined4 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar4 * 4) * 4) =
           *(undefined4 *)(*param_3 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de2a82 FUN_146de2a82 body=87 status=ok
// SIG undefined FUN_146de2a82(void)

void FUN_146de2a82(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_1[1] == param_2) goto LAB_146de2acd;
  FUN_1400020a8(*param_1);
  if (param_2 < 1) {
LAB_146de2ac8:
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14001cc68(param_2,0x10);
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_146de2ac8;
    }
  }
  *param_1 = lVar1;
LAB_146de2acd:
  param_1[1] = param_3;
  return;
}



// FUNCTION 146de2ad9 FUN_146de2ad9 body=129 status=ok
// SIG undefined FUN_146de2ad9(void)

void FUN_146de2ad9(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_2;
  if (param_1[1] != param_2[1]) {
    FUN_146dddaba(param_1,param_2[1],1);
  }
  local_28 = *param_1;
  local_48 = &local_28;
  local_40 = &local_20;
  local_38 = param_3;
  local_30 = param_1;
  FUN_146de2b5c();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de2b5c FUN_146de2b5c body=110 status=ok
// SIG undefined FUN_146de2b5c(void)

void FUN_146de2b5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 146de2bca FUN_146de2bca body=214 status=ok
// SIG undefined FUN_146de2bca(void)

void FUN_146de2bca(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = **(longlong **)(param_2 + 8);
  lVar5 = **(longlong **)(param_2 + 0x10);
  uVar12 = (*(longlong **)(param_2 + 8))[1];
  local_38 = lVar4;
  local_30 = lVar5;
  if (param_1[1] != uVar12) {
    FUN_146dddaba(param_1,uVar12);
    uVar12 = param_1[1];
  }
  local_40 = *param_1;
  local_60 = &local_40;
  local_58 = &local_38;
  uVar13 = uVar12 + 3;
  if (-1 < (longlong)uVar12) {
    uVar13 = uVar12;
  }
  if (3 < (longlong)uVar12) {
    lVar14 = 0;
    do {
      pfVar1 = (float *)(lVar4 + lVar14 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(lVar5 + lVar14 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(local_40 + lVar14 * 4);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar6 * fVar9;
      pfVar3[2] = fVar7 * fVar10;
      pfVar3[3] = fVar8 * fVar11;
      lVar14 = lVar14 + 4;
    } while (lVar14 < (longlong)(uVar13 & 0xfffffffffffffffc));
  }
  local_50 = param_3;
  local_48 = param_1;
  FUN_146de2ca2(&local_60,uVar13 & 0xfffffffffffffffc,uVar12);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de2ca2 FUN_146de2ca2 body=48 status=ok
// SIG undefined FUN_146de2ca2(void)

void FUN_146de2ca2(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)param_1[1] + param_2 * 4) *
           *(float *)(((longlong *)param_1[1])[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de2cd2 FUN_146de2cd2 body=129 status=ok
// SIG undefined FUN_146de2cd2(void)

void FUN_146de2cd2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8);
  if (param_1[1] != lVar1) {
    FUN_146dddaba(param_1,lVar1,1);
    lVar2 = *param_2;
  }
  if (*param_1 != *(longlong *)param_2[1]) {
    FUN_146de2ad9(param_1,(longlong *)param_2[1],&local_21);
  }
  FUN_146de2d54(*(undefined8 *)(lVar2 + 8),param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de2d54 FUN_146de2d54 body=205 status=ok
// SIG undefined FUN_146de2d54(void)

void FUN_146de2d54(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(longlong *)(param_1 + 8)) {
    lVar5 = 0;
    do {
      lVar2 = *param_2;
      fVar1 = *(float *)(lVar2 + lVar5 * 4);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar5 * 4);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 4);
        }
        else {
          lVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar5 * 4) + lVar6;
        }
        lVar3 = *(longlong *)(param_1 + 0x28);
        lVar4 = *(longlong *)(param_1 + 0x30);
        lVar7 = lVar6;
        if (lVar6 < lVar8) {
          do {
            if (lVar5 <= *(int *)(lVar4 + lVar6 * 4)) {
              *(float *)(lVar2 + lVar5 * 4) = fVar1 / *(float *)(lVar3 + lVar6 * 4);
              lVar7 = lVar6 + (ulonglong)(lVar5 == *(int *)(lVar4 + lVar6 * 4));
              goto LAB_146de2dbc;
            }
            lVar6 = lVar6 + 1;
            lVar7 = lVar8;
          } while (lVar8 != lVar6);
        }
        *(float *)(lVar2 + lVar5 * 4) = fVar1 / *(float *)(lVar3 + lVar7 * 4);
LAB_146de2dbc:
        if (lVar7 < lVar8) {
          do {
            lVar6 = (longlong)*(int *)(lVar4 + lVar7 * 4);
            *(float *)(*param_2 + lVar6 * 4) =
                 *(float *)(*param_2 + lVar6 * 4) -
                 *(float *)(lVar2 + lVar5 * 4) * *(float *)(lVar3 + lVar7 * 4);
            lVar7 = lVar7 + 1;
          } while (lVar8 != lVar7);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(longlong *)(param_1 + 8));
  }
  return;
}



// FUNCTION 146de2e22 FUN_146de2e22 body=132 status=ok
// SIG undefined FUN_146de2e22(void)

void FUN_146de2e22(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  if (param_1[1] != lVar1) {
    FUN_146dddaba(param_1,lVar1,1);
    lVar2 = *param_2;
  }
  if (*param_1 != *(longlong *)param_2[1]) {
    FUN_146de2ad9(param_1,(longlong *)param_2[1],&local_21);
  }
  FUN_146de2ea8(lVar2 + 8,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de2ea8 FUN_146de2ea8 body=164 status=ok
// SIG undefined FUN_146de2ea8(void)

void FUN_146de2ea8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar2 + 8);
  if (0 < *(longlong *)(lVar2 + 8)) {
    do {
      lVar1 = lVar5 + -1;
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + -4 + lVar5 * 4);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar8 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar1 * 4);
      }
      else {
        lVar8 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar1 * 4) + lVar6;
      }
      lVar7 = lVar6;
      if (lVar6 < lVar8) {
        do {
          lVar7 = lVar6;
          if (lVar1 <= *(int *)(*(longlong *)(lVar2 + 0x30) + lVar6 * 4)) break;
          lVar6 = lVar6 + 1;
          lVar7 = lVar8;
        } while (lVar8 != lVar6);
      }
      lVar3 = *param_2;
      fVar9 = *(float *)(lVar3 + -4 + lVar5 * 4);
      lVar6 = lVar7 + 1;
      if (lVar6 < lVar8) {
        do {
          fVar9 = fVar9 - *(float *)(*(longlong *)(lVar2 + 0x28) + lVar6 * 4) *
                          *(float *)(lVar3 + (longlong)
                                             *(int *)(*(longlong *)(lVar2 + 0x30) + lVar6 * 4) * 4);
          lVar6 = lVar6 + 1;
        } while (lVar8 != lVar6);
      }
      *(float *)(lVar3 + lVar1 * 4) = fVar9 / *(float *)(*(longlong *)(lVar2 + 0x28) + lVar7 * 4);
      bVar4 = 1 < lVar5;
      lVar5 = lVar1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 146de2f4c FUN_146de2f4c body=298 status=ok
// SIG undefined FUN_146de2f4c(void)

void FUN_146de2f4c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_3[1];
  if ((*param_1 == *param_3) && (param_1[1] == lVar6)) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar6 = param_2[1];
    if (0 < lVar6) {
      lVar5 = 0;
      do {
        while (*(char *)((longlong)local_38 + lVar5) == '\x01') {
          lVar5 = lVar5 + 1;
          if (lVar6 <= lVar5) goto LAB_146de3068;
        }
        *(undefined1 *)((longlong)local_38 + lVar5) = 1;
        iVar2 = *(int *)(*param_2 + lVar5 * 4);
        lVar6 = lVar5;
        while (lVar4 = (longlong)iVar2, lVar4 != lVar5) {
          lVar3 = *param_1;
          uVar1 = *(undefined4 *)(lVar3 + lVar4 * 4);
          *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
          *(undefined4 *)(lVar3 + lVar6 * 4) = uVar1;
          *(undefined1 *)((longlong)local_38 + lVar4) = 1;
          lVar6 = lVar4;
          iVar2 = *(int *)(*param_2 + lVar4 * 4);
        }
        lVar5 = lVar5 + 1;
        lVar6 = param_2[1];
      } while (lVar5 < lVar6);
    }
LAB_146de3068:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar6) {
    lVar5 = 0;
    do {
      *(undefined4 *)(*param_1 + lVar5 * 4) =
           *(undefined4 *)(*param_3 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 4);
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de3078 FUN_146de3078 body=48 status=ok
// SIG undefined FUN_146de3078(void)

void FUN_146de3078(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 146de30a8 FUN_146de30a8 body=22 status=ok
// SIG undefined FUN_146de30a8(void)

void FUN_146de30a8(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 146de30be FUN_146de30be body=147 status=ok
// SIG undefined FUN_146de30be(void)

void FUN_146de30be(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146de3152 FUN_146de3152 body=62 status=ok
// SIG undefined FUN_146de3152(void)

void FUN_146de3152(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146de3190(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146de3190 FUN_146de3190 body=112 status=ok
// SIG undefined FUN_146de3190(void)

ulonglong FUN_146de3190(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146de31ca;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_146de31ca:
  return param_2 & 0xffffffff;
}



// FUNCTION 146de3200 FUN_146de3200 body=361 status=ok
// SIG undefined FUN_146de3200(void)

void FUN_146de3200(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_146dde6fa(local_90,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  lVar6 = local_88;
  if (*param_1 != *param_2) {
    local_a0 = 0;
    if (0 < local_88) {
      local_a0 = FUN_141729f83(local_88);
    }
    local_98 = lVar6;
    local_38 = lVar6;
    local_2c = 0;
    FUN_146de04ef(&local_a0,local_40,&local_41);
    for (lVar6 = *param_1; lVar6 != *param_2; lVar6 = lVar6 + 0xc) {
      piVar1 = (int *)(local_a0 + (longlong)*(int *)(lVar6 + 4) * 4);
      *piVar1 = *piVar1 + 1;
    }
    FUN_146de37a0(local_90,&local_a0);
    for (puVar7 = (undefined4 *)*param_1; puVar7 != (undefined4 *)*param_2; puVar7 = puVar7 + 3) {
      uVar2 = puVar7[2];
      lVar6 = (longlong)(int)puVar7[1];
      uVar3 = *puVar7;
      iVar4 = *(int *)(local_78 + lVar6 * 4);
      iVar5 = *(int *)(lStack_70 + lVar6 * 4);
      *(int *)(lStack_70 + lVar6 * 4) = iVar5 + 1;
      lVar6 = (longlong)iVar4 + (longlong)iVar5;
      *(undefined4 *)(lStack_60 + lVar6 * 4) = uVar3;
      *(undefined4 *)(local_68 + lVar6 * 4) = uVar2;
    }
    FUN_146de336a(local_90);
    FUN_1400020a8(local_a0);
  }
  FUN_146de34e2(param_3,local_90);
  FUN_146de02bc(local_90);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de336a FUN_146de336a body=375 status=ok
// SIG undefined FUN_146de336a(void)

void FUN_146de336a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_48 = 0;
  if (lVar7 != 0) {
    if (lVar7 < 1) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_141729f83(lVar7);
    }
  }
  local_1c = 0xffffffff;
  local_40 = lVar7;
  local_28 = lVar7;
  FUN_146de04ef(&local_48,local_30,&local_31);
  lVar7 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  if (0 < lVar7) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
      iVar5 = iVar4;
      if (0 < lVar6) {
        lVar7 = (longlong)*(int *)(lVar7 + lVar3 * 4);
        lVar6 = lVar6 + lVar7;
        do {
          lVar2 = *(longlong *)(param_1 + 0x28);
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
          iVar1 = *(int *)(local_48 + lVar8 * 4);
          if (iVar1 < iVar4) {
            *(undefined4 *)(lVar2 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar2 + lVar7 * 4);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
            *(int *)(local_48 + lVar8 * 4) = iVar5;
            iVar5 = iVar5 + 1;
          }
          else {
            *(float *)(lVar2 + (longlong)iVar1 * 4) =
                 *(float *)(lVar2 + (longlong)iVar1 * 4) + *(float *)(lVar2 + lVar7 * 4);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      *(int *)(lVar7 + lVar3 * 4) = iVar4;
      lVar3 = lVar3 + 1;
      lVar7 = *(longlong *)(param_1 + 8);
      iVar4 = iVar5;
    } while (lVar3 < lVar7);
  }
  *(int *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4) = iVar5;
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_146de0756(param_1 + 0x28,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4),0
               );
  FUN_1400020a8(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de34e2 FUN_146de34e2 body=700 status=ok
// SIG undefined FUN_146de34e2(void)

longlong FUN_146de34e2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  longlong *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_146dd92fc(local_e8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  local_80 = &local_70;
  local_70 = local_d0;
  local_68 = local_e0;
  local_90 = local_78;
  local_78[0] = 0;
  local_98 = local_50;
  local_50[0] = local_d0;
  local_40 = local_e0;
  local_88 = &local_99;
  FUN_146de119a();
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar10 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar10 * 4);
      }
      else {
        lVar13 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar10 * 4) + lVar12;
      }
      if (lVar12 < lVar13) {
        lVar11 = *(longlong *)(param_2 + 0x30);
        do {
          piVar1 = (int *)(local_d0 + (longlong)*(int *)(lVar11 + lVar12 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  lVar10 = 0;
  iVar17 = 0;
  lVar11 = 0;
  if (local_e0 != 0) {
    iVar17 = 0;
    if (local_e0 < 1) {
      lVar10 = 0;
      lVar11 = local_e0;
    }
    else {
      lVar10 = FUN_141729f83();
      lVar11 = local_e0;
      if (0 < local_e0) {
        lVar12 = 0;
        iVar16 = 0;
        do {
          iVar17 = *(int *)(local_d0 + lVar12 * 4) + iVar16;
          *(int *)(local_d0 + lVar12 * 4) = iVar16;
          *(int *)(lVar10 + lVar12 * 4) = iVar16;
          lVar12 = lVar12 + 1;
          iVar16 = iVar17;
        } while (lVar12 < local_e0);
      }
    }
  }
  *(int *)(local_d0 + lVar11 * 4) = iVar17;
  FUN_146de0756(&local_c0,(longlong)iVar17,0);
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar12 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar12 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar12 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar11 = *(longlong *)(param_2 + 0x28);
        lVar2 = *(longlong *)(param_2 + 0x30);
        do {
          lVar15 = (longlong)*(int *)(lVar2 + lVar13 * 4);
          iVar17 = *(int *)(lVar10 + lVar15 * 4);
          *(int *)(lVar10 + lVar15 * 4) = iVar17 + 1;
          *(int *)(lStack_b8 + (longlong)iVar17 * 4) = (int)lVar12;
          *(undefined4 *)(local_c0 + (longlong)iVar17 * 4) = *(undefined4 *)(lVar11 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_e0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_c0;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  local_e0 = uVar5;
  uStack_d8 = uVar4;
  local_d0 = uVar3;
  uStack_c8 = uVar6;
  local_c0 = lVar11;
  lStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  FUN_1400020a8(lVar10);
  FUN_146ddcf04(local_e8);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146de37a0 FUN_146de37a0 body=697 status=ok
// SIG undefined FUN_146de37a0(void)

void FUN_146de37a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  
  lVar9 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar9 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar9;
    if (lVar9 == 0) {
      FUN_14001cc68();
      lVar9 = *(longlong *)(param_1 + 0x20);
    }
    lVar6 = *(longlong *)(param_1 + 8);
    iVar7 = 0;
    lVar10 = 0;
    if (0 < lVar6) {
      lVar11 = 0;
      do {
        *(int *)(lVar9 + lVar11 * 4) = iVar7;
        iVar12 = *(int *)(*param_2 + lVar11 * 4);
        lVar6 = *(longlong *)(param_1 + 8);
        iVar7 = (iVar7 + iVar12 + *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar11 * 4)) -
                *(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + iVar12;
      } while (lVar11 < lVar6);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar10 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de07b6(param_1 + 0x28);
      lVar6 = *(longlong *)(param_1 + 8);
    }
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar6) {
      iVar7 = *(int *)(lVar10 + lVar6 * 4);
      do {
        lVar10 = lVar6 + -1;
        lVar11 = *(longlong *)(param_1 + 0x18);
        iVar12 = *(int *)(lVar11 + -4 + lVar6 * 4);
        iVar8 = iVar7 - iVar12;
        bVar14 = iVar12 <= iVar7;
        iVar7 = iVar12;
        if (iVar8 != 0 && bVar14) {
          uVar13 = (ulonglong)(iVar8 - 1);
          do {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar9 + lVar10 * 4) * 4 +
             uVar13 * 4) = *(undefined4 *)
                            (*(longlong *)(param_1 + 0x30) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 +
                            uVar13 * 4);
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar9 + lVar10 * 4) * 4 +
             uVar13 * 4) = *(undefined4 *)
                            (*(longlong *)(param_1 + 0x28) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 +
                            uVar13 * 4);
            bVar14 = uVar13 != 0;
            uVar13 = uVar13 - 1;
          } while (bVar14);
          lVar11 = *(longlong *)(param_1 + 0x18);
          iVar7 = *(int *)(lVar11 + lVar10 * 4);
        }
        *(undefined4 *)(lVar11 + lVar10 * 4) = *(undefined4 *)(lVar9 + lVar10 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4) = iVar8;
        bVar14 = 1 < lVar6;
        lVar6 = lVar10;
      } while (bVar14);
      lVar6 = *(longlong *)(param_1 + 8);
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar6) {
        *(int *)(lVar10 + lVar6 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar6 * 4) +
             *(int *)(lVar10 + -4 + lVar6 * 4) + *(int *)(*param_2 + -4 + lVar6 * 4);
        lVar6 = *(longlong *)(param_1 + 8);
        lVar10 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de0756(param_1 + 0x28,(longlong)*(int *)(lVar10 + lVar6 * 4),0);
    return;
  }
  lVar9 = FUN_14001cc68(lVar9 + 4 + (ulonglong)(lVar9 == -4),0x10);
  if (lVar9 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  iVar7 = 0;
  if (0 < lVar6) {
    piVar3 = *(int **)(param_1 + 0x18);
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar4 = *param_2;
    lVar10 = 0;
    iVar7 = 0;
    iVar12 = *piVar3;
    do {
      *(int *)(lVar9 + lVar10 * 4) = iVar7;
      iVar8 = piVar3[lVar10 + 1];
      iVar1 = *(int *)(lVar11 + lVar10 * 4);
      iVar2 = *(int *)(lVar4 + lVar10 * 4);
      lVar10 = lVar10 + 1;
      iVar12 = iVar8 - (iVar12 + iVar1);
      if (iVar12 < iVar2) {
        iVar12 = iVar2;
      }
      iVar7 = iVar1 + iVar7 + iVar12;
      iVar12 = iVar8;
    } while (lVar6 != lVar10);
  }
  *(int *)(lVar9 + lVar6 * 4) = iVar7;
  FUN_146de0756(param_1 + 0x28,(longlong)iVar7,0);
  lVar6 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar10 = lVar6 + -1;
      iVar7 = *(int *)(lVar9 + -4 + lVar6 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar6 * 4) < iVar7) &&
         (iVar12 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4), 0 < iVar12)) {
        uVar13 = (ulonglong)(iVar12 - 1);
        lVar11 = (longlong)iVar7 * 4;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar11 + uVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 + uVar13 * 4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar11 + uVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 + uVar13 * 4);
          bVar14 = uVar13 != 0;
          uVar13 = uVar13 - 1;
        } while (bVar14);
      }
      bVar14 = 1 < lVar6;
      lVar6 = lVar10;
    } while (bVar14);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar9;
  FUN_1400020a8(uVar5);
  return;
}



// FUNCTION 146de3a5a FUN_146de3a5a body=66 status=ok
// SIG undefined FUN_146de3a5a(void)

void FUN_146de3a5a(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146de3a9c FUN_146de3a9c body=124 status=ok
// SIG undefined FUN_146de3a9c(void)

longlong FUN_146de3a9c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  longlong local_20 [2];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = (longlong)(*(int **)(param_1 + 0x18))[*(longlong *)(param_1 + 8)] -
            (longlong)**(int **)(param_1 + 0x18);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      local_40 = lVar3;
      local_38 = lVar1;
      local_20[0] = lVar3;
      local_10 = lVar1;
      iVar2 = FUN_146ddd0fe(local_20,&local_41);
      lVar3 = (longlong)iVar2;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de3b1a FUN_146de3b1a body=57 status=ok
// SIG undefined FUN_146de3b1a(void)

void FUN_146de3b1a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1[1] != param_2) {
    FUN_1400020a8(*param_1);
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_146de3b53(param_2);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 146de3b53 FUN_146de3b53 body=105 status=ok
// SIG undefined FUN_146de3b53(void)

longlong FUN_146de3b53(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar2 = param_1 * 8;
    lVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    if (lVar2 == 0 || lVar1 != 0) {
      return lVar1;
    }
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  return 0;
}



// FUNCTION 146de3bbc FUN_146de3bbc body=143 status=ok
// SIG undefined FUN_146de3bbc(void)

void FUN_146de3bbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar5 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar5 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar5)) {
    uVar5 = uVar4;
  }
  lVar7 = uVar4 - uVar5;
  lVar6 = (lVar7 - (lVar7 >> 0x3f) & 0xfffffffffffffffeU) + uVar5;
  FUN_146de3c4c(param_1,0,uVar5);
  if (1 < lVar7) {
    do {
      uVar2 = *(undefined8 *)param_1[1];
      puVar1 = (undefined8 *)(*(longlong *)*param_1 + uVar5 * 8);
      *puVar1 = *(undefined8 *)param_1[1];
      puVar1[1] = uVar2;
      uVar5 = uVar5 + 2;
    } while ((longlong)uVar5 < lVar6);
  }
  FUN_146de3c4c(param_1,lVar6,uVar4);
  return;
}



// FUNCTION 146de3c4c FUN_146de3c4c body=34 status=ok
// SIG undefined FUN_146de3c4c(void)

void FUN_146de3c4c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) = *(undefined8 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de3c6e FUN_146de3c6e body=119 status=ok
// SIG undefined FUN_146de3c6e(void)

void FUN_146de3c6e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 0 && param_2 != 0) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_3),0) < param_2)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  param_3 = param_3 * param_2;
  if (param_1[1] != param_3) {
    FUN_1400020a8(*param_1);
    if (param_3 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_146de3b53(param_3);
    }
    *param_1 = uVar1;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 146de3ce5 FUN_146de3ce5 body=134 status=ok
// SIG undefined FUN_146de3ce5(void)

void FUN_146de3ce5(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = param_2[1];
  if (param_1[1] != local_20) {
    FUN_146de3c6e(param_1,local_20,1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_146de3d6c();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de3d6c FUN_146de3d6c body=109 status=ok
// SIG undefined FUN_146de3d6c(void)

void FUN_146de3d6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 - ((longlong)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 8);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar6 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 146de3dda FUN_146de3dda body=199 status=ok
// SIG undefined FUN_146de3dda(void)

double FUN_146de3dda(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  uVar8 = uVar1 + 3;
  if (-1 < (longlong)uVar1) {
    uVar8 = uVar1;
  }
  pdVar2 = *(double **)(param_1 + 8);
  if (uVar1 + 1 < 3) {
    dVar10 = *pdVar2 * *pdVar2;
  }
  else {
    uVar7 = uVar1 - ((longlong)uVar1 >> 0x3f) & 0xfffffffffffffffe;
    dVar10 = *pdVar2 * *pdVar2;
    dVar11 = pdVar2[1] * pdVar2[1];
    if (3 < (longlong)uVar1) {
      uVar8 = uVar8 & 0xfffffffffffffffc;
      dVar12 = pdVar2[2] * pdVar2[2];
      dVar13 = pdVar2[3] * pdVar2[3];
      if (7 < uVar1) {
        lVar9 = 4;
        do {
          dVar3 = pdVar2[lVar9];
          dVar4 = (pdVar2 + lVar9)[1];
          dVar5 = pdVar2[lVar9 + 2];
          dVar6 = (pdVar2 + lVar9 + 2)[1];
          dVar10 = dVar10 + dVar3 * dVar3;
          dVar11 = dVar11 + dVar4 * dVar4;
          dVar12 = dVar12 + dVar5 * dVar5;
          dVar13 = dVar13 + dVar6 * dVar6;
          lVar9 = lVar9 + 4;
        } while (lVar9 < (longlong)uVar8);
      }
      dVar10 = dVar12 + dVar10;
      dVar11 = dVar13 + dVar11;
      if ((longlong)uVar8 < (longlong)uVar7) {
        dVar12 = pdVar2[uVar8];
        dVar13 = (pdVar2 + uVar8)[1];
        dVar10 = dVar10 + dVar12 * dVar12;
        dVar11 = dVar11 + dVar13 * dVar13;
      }
    }
    dVar10 = dVar10 + dVar11;
    if ((longlong)uVar7 < (longlong)uVar1) {
      do {
        dVar10 = dVar10 + pdVar2[uVar7] * pdVar2[uVar7];
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return dVar10;
}



// FUNCTION 146de3ea2 FUN_146de3ea2 body=203 status=ok
// SIG undefined FUN_146de3ea2(void)

double FUN_146de3ea2(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 8) + 8);
  uVar8 = uVar1 + 3;
  if (-1 < (longlong)uVar1) {
    uVar8 = uVar1;
  }
  pdVar2 = *(double **)(param_1 + 8);
  if (uVar1 + 1 < 3) {
    dVar10 = *pdVar2 * *pdVar2;
  }
  else {
    uVar7 = uVar1 - ((longlong)uVar1 >> 0x3f) & 0xfffffffffffffffe;
    dVar10 = *pdVar2 * *pdVar2;
    dVar11 = pdVar2[1] * pdVar2[1];
    if (3 < (longlong)uVar1) {
      uVar8 = uVar8 & 0xfffffffffffffffc;
      dVar12 = pdVar2[2] * pdVar2[2];
      dVar13 = pdVar2[3] * pdVar2[3];
      if (7 < uVar1) {
        lVar9 = 4;
        do {
          dVar3 = pdVar2[lVar9];
          dVar4 = (pdVar2 + lVar9)[1];
          dVar5 = pdVar2[lVar9 + 2];
          dVar6 = (pdVar2 + lVar9 + 2)[1];
          dVar10 = dVar10 + dVar3 * dVar3;
          dVar11 = dVar11 + dVar4 * dVar4;
          dVar12 = dVar12 + dVar5 * dVar5;
          dVar13 = dVar13 + dVar6 * dVar6;
          lVar9 = lVar9 + 4;
        } while (lVar9 < (longlong)uVar8);
      }
      dVar10 = dVar12 + dVar10;
      dVar11 = dVar13 + dVar11;
      if ((longlong)uVar8 < (longlong)uVar7) {
        dVar12 = pdVar2[uVar8];
        dVar13 = (pdVar2 + uVar8)[1];
        dVar10 = dVar10 + dVar12 * dVar12;
        dVar11 = dVar11 + dVar13 * dVar13;
      }
    }
    dVar10 = dVar10 + dVar11;
    if ((longlong)uVar7 < (longlong)uVar1) {
      do {
        dVar10 = dVar10 + pdVar2[uVar7] * pdVar2[uVar7];
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return dVar10;
}



// FUNCTION 146de3f6e FUN_146de3f6e body=116 status=ok
// SIG undefined FUN_146de3f6e(void)

void FUN_146de3f6e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_2;
  if (*(longlong *)(param_1 + 8) != *(longlong *)(local_30 + 8)) {
    FUN_146de3c6e(param_1,*(longlong *)(local_30 + 8),1);
    local_30 = *param_2;
  }
  local_28 = param_2[1];
  FUN_146de3fe3(param_1,local_38,&local_39);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de3fe3 FUN_146de3fe3 body=216 status=ok
// SIG undefined FUN_146de3fe3(void)

void FUN_146de3fe3(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = **(longlong **)(param_2 + 8);
  lVar5 = **(longlong **)(param_2 + 0x10);
  lVar8 = (*(longlong **)(param_2 + 0x10))[1];
  local_38 = lVar4;
  local_30 = lVar5;
  if (param_1[1] != lVar8) {
    FUN_146de3c6e(param_1,lVar8);
    lVar8 = param_1[1];
  }
  local_48 = *param_1;
  local_68 = &local_48;
  local_60 = local_40;
  uVar9 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar10 = 0;
    do {
      pdVar1 = (double *)(lVar5 + lVar10 * 8);
      dVar6 = pdVar1[1];
      pdVar2 = (double *)(lVar4 + lVar10 * 8);
      dVar7 = pdVar2[1];
      pdVar3 = (double *)(local_48 + lVar10 * 8);
      *pdVar3 = *pdVar1 * *pdVar2;
      pdVar3[1] = dVar6 * dVar7;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar9);
  }
  local_58 = param_3;
  local_50 = param_1;
  FUN_146de40bc(&local_68,uVar9,lVar8);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de40bc FUN_146de40bc body=49 status=ok
// SIG undefined FUN_146de40bc(void)

void FUN_146de40bc(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)(param_1[1] + 8) + param_2 * 8) *
           *(double *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de40ee FUN_146de40ee body=222 status=ok
// SIG undefined FUN_146de40ee(void)

double FUN_146de40ee(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 8);
  uVar5 = uVar1 + 3;
  if (-1 < (longlong)uVar1) {
    uVar5 = uVar1;
  }
  pdVar2 = *(double **)(param_1 + 0x10);
  if (uVar1 + 1 < 3) {
    dVar7 = **(double **)(param_1 + 8) * *pdVar2;
  }
  else {
    uVar4 = uVar1 - ((longlong)uVar1 >> 0x3f) & 0xfffffffffffffffe;
    pdVar3 = *(double **)(param_1 + 8);
    dVar7 = *pdVar2 * *pdVar3;
    dVar8 = pdVar2[1] * pdVar3[1];
    if (3 < (longlong)uVar1) {
      uVar5 = uVar5 & 0xfffffffffffffffc;
      dVar9 = pdVar2[2] * pdVar3[2];
      dVar10 = pdVar2[3] * pdVar3[3];
      if (7 < uVar1) {
        lVar6 = 4;
        do {
          dVar7 = dVar7 + pdVar2[lVar6] * pdVar3[lVar6];
          dVar8 = dVar8 + (pdVar2 + lVar6)[1] * (pdVar3 + lVar6)[1];
          dVar9 = dVar9 + pdVar2[lVar6 + 2] * pdVar3[lVar6 + 2];
          dVar10 = dVar10 + (pdVar2 + lVar6 + 2)[1] * (pdVar3 + lVar6 + 2)[1];
          lVar6 = lVar6 + 4;
        } while (lVar6 < (longlong)uVar5);
      }
      dVar7 = dVar9 + dVar7;
      dVar8 = dVar10 + dVar8;
      if ((longlong)uVar5 < (longlong)uVar4) {
        dVar7 = dVar7 + pdVar2[uVar5] * pdVar3[uVar5];
        dVar8 = dVar8 + (pdVar2 + uVar5)[1] * (pdVar3 + uVar5)[1];
      }
    }
    dVar7 = dVar7 + dVar8;
    if ((longlong)uVar4 < (longlong)uVar1) {
      do {
        dVar7 = dVar7 + pdVar3[uVar4] * pdVar2[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return dVar7;
}



// FUNCTION 146de41cc FUN_146de41cc body=257 status=ok
// SIG undefined FUN_146de41cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146de41cc(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (param_1[1] != lVar3) {
    FUN_146de3c6e(param_1,lVar3,1);
    lVar3 = param_1[1];
  }
  auVar2 = _DAT_149931e80;
  if (0 < lVar3) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    _Dst = (void *)*param_1;
    if (lVar1 == 0) {
      memset(_Dst,0,lVar3 << 3);
      return;
    }
    lVar4 = lVar3 + -1;
    auVar6._8_4_ = (int)lVar4;
    auVar6._0_8_ = lVar4;
    auVar6._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = 0;
    auVar7 = pmovsxbq(in_XMM2,0x100);
    auVar6 = auVar6 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar6._0_8_ < (longlong)(uVar5 ^ auVar2._0_8_)) & 1)) {
        *(longlong *)((longlong)_Dst + uVar5 * 8) = lVar1;
      }
      auVar8._8_4_ = (int)uVar5;
      auVar8._0_8_ = uVar5;
      auVar8._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar2._8_8_) <= auVar6._8_8_) {
        *(longlong *)((longlong)_Dst + uVar5 * 8 + 8) = lVar1;
      }
      uVar5 = uVar5 + 2;
    } while ((lVar3 + 1U & 0xfffffffffffffffe) != uVar5);
  }
  return;
}



// FUNCTION 146de42ce FUN_146de42ce body=162 status=ok
// SIG undefined FUN_146de42ce(void)

void FUN_146de42ce(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar7 = *(ulonglong *)param_1[3];
  uVar8 = ((ulonglong *)param_1[3])[1];
  uVar10 = uVar8;
  if (((uVar7 & 7) == 0) &&
     (uVar10 = (ulonglong)((uint)(uVar7 >> 3) & 1), (longlong)uVar8 <= (longlong)uVar10)) {
    uVar10 = uVar8;
  }
  lVar12 = uVar8 - uVar10;
  lVar11 = (lVar12 - (lVar12 >> 0x3f) & 0xfffffffffffffffeU) + uVar10;
  FUN_146de4370(param_1,0,uVar10);
  if (1 < lVar12) {
    do {
      pdVar2 = (double *)(*(longlong *)(param_1[1] + 0x18) + uVar10 * 8);
      dVar9 = pdVar2[1];
      pdVar1 = (double *)(param_1[1] + 8);
      dVar5 = *pdVar1;
      pdVar3 = (double *)(*(longlong *)*param_1 + uVar10 * 8);
      dVar6 = pdVar3[1];
      pdVar4 = (double *)(*(longlong *)*param_1 + uVar10 * 8);
      *pdVar4 = *pdVar1 * *pdVar2 + *pdVar3;
      pdVar4[1] = dVar5 * dVar9 + dVar6;
      uVar10 = uVar10 + 2;
    } while ((longlong)uVar10 < lVar11);
  }
  FUN_146de4370(param_1,lVar11,uVar8);
  return;
}



// FUNCTION 146de4370 FUN_146de4370 body=49 status=ok
// SIG undefined FUN_146de4370(void)

void FUN_146de4370(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(param_1[1] + 8) * *(double *)(*(longlong *)(param_1[1] + 0x18) + param_2 * 8)
           + *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de43a1 FUN_146de43a1 body=180 status=ok
// SIG undefined FUN_146de43a1(void)

void FUN_146de43a1(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined1 local_28 [8];
  double local_20;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *(double *)(param_2 + 0x20);
  local_48 = local_28;
  local_10 = **(longlong **)(param_2 + 0x28);
  local_30 = *param_1;
  local_50 = &local_30;
  lVar4 = param_1[1];
  if (1 < lVar4) {
    lVar7 = 0;
    do {
      pdVar1 = (double *)(local_10 + lVar7 * 8);
      dVar5 = pdVar1[1];
      pdVar2 = (double *)(local_30 + lVar7 * 8);
      dVar6 = pdVar2[1];
      pdVar3 = (double *)(local_30 + lVar7 * 8);
      *pdVar3 = *pdVar2 - *pdVar1 * local_20;
      pdVar3[1] = dVar6 - dVar5 * local_20;
      lVar7 = lVar7 + 2;
    } while (lVar7 < (longlong)(lVar4 - (lVar4 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_40 = param_3;
  local_38 = param_1;
  FUN_146de4456(&local_50);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de4456 FUN_146de4456 body=54 status=ok
// SIG undefined FUN_146de4456(void)

void FUN_146de4456(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)*param_1 + param_2 * 8) -
           *(double *)(param_1[1] + 8) * *(double *)(*(longlong *)(param_1[1] + 0x18) + param_2 * 8)
      ;
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de448c FUN_146de448c body=249 status=ok
// SIG undefined FUN_146de448c(void)

void FUN_146de448c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  double local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = **(longlong **)(param_2 + 8);
  local_40 = *(double *)(param_2 + 0x30);
  lVar6 = **(longlong **)(param_2 + 0x38);
  lVar8 = (*(longlong **)(param_2 + 0x38))[1];
  local_50 = lVar5;
  local_30 = lVar6;
  if (param_1[1] != lVar8) {
    FUN_146de3c6e(param_1,lVar8);
    lVar8 = param_1[1];
  }
  local_60 = *param_1;
  local_80 = &local_60;
  local_78 = local_58;
  uVar9 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar10 = 0;
    do {
      pdVar1 = (double *)(lVar6 + lVar10 * 8);
      dVar7 = pdVar1[1];
      pdVar2 = (double *)(lVar5 + lVar10 * 8);
      dVar4 = pdVar2[1];
      pdVar3 = (double *)(local_60 + lVar10 * 8);
      *pdVar3 = *pdVar1 * local_40 + *pdVar2;
      pdVar3[1] = dVar7 * local_40 + dVar4;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar9);
  }
  local_70 = param_3;
  local_68 = param_1;
  FUN_146de4586(&local_80,uVar9,lVar8);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de4586 FUN_146de4586 body=53 status=ok
// SIG undefined FUN_146de4586(void)

void FUN_146de4586(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(lVar1 + 0x18) * *(double *)(*(longlong *)(lVar1 + 0x28) + param_2 * 8) +
           *(double *)(*(longlong *)(lVar1 + 8) + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de45bc FUN_146de45bc body=168 status=ok
// SIG undefined FUN_146de45bc(void)

void FUN_146de45bc(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_3 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_3 * 4 + 4 +
                          (ulonglong)((param_3 & 0x3fffffffffffffff) == 0x3fffffffffffffff));
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    *(ulonglong *)(param_1 + 8) = param_3;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
    param_3 = *(ulonglong *)(param_1 + 8);
  }
  memset(*(void **)(param_1 + 0x18),0,param_3 * 4 + 4);
  return;
}



// FUNCTION 146de4664 FUN_146de4664 body=3743 status=ok
// SIG undefined FUN_146de4664(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146de4664(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  size_t _Size;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  undefined1 *puVar32;
  bool bVar33;
  double dVar34;
  undefined1 auStack_168 [8];
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  undefined1 *local_138;
  uint *local_130;
  int local_128;
  int local_124;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong local_100;
  int *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined1 *local_b8;
  uint local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 *local_98;
  uint local_90;
  int local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_e8;
  local_68 = *(ulonglong *)(param_1 + 8);
  dVar34 = (double)(int)local_68;
  local_108 = param_2;
  if (dVar34 < 0.0) {
    dVar34 = sqrt(dVar34);
  }
  else {
    dVar34 = SQRT(dVar34);
  }
  iVar30 = 0x10;
  if (0x10 < (int)(dVar34 * 10.0)) {
    iVar30 = (int)(dVar34 * 10.0);
  }
  iVar8 = (int)local_68;
  if (iVar8 + -2 <= iVar30) {
    iVar30 = iVar8 + -2;
  }
  uVar10 = FUN_146de5690(param_1);
  iVar22 = iVar8 + 1;
  local_100 = (longlong)iVar22;
  FUN_141729ef6(local_108);
  local_124 = (int)uVar10 + iVar8 * 2 + (int)uVar10 / 5;
  local_60 = uVar10;
  FUN_146de554a(param_1 + 0x28,(longlong)local_124,0);
  if (iVar8 * 8 + 8 < 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  local_150 = local_100 * 0x20;
  if (local_150 < 0x20001) {
    puVar21 = auStack_168 + -(local_150 + 0x10);
    puVar11 = auStack_168 + -(local_150 + 0x10);
  }
  else {
    puVar11 = (undefined1 *)FUN_14001cc68(local_150,0x10);
    puVar21 = auStack_168;
    if (puVar11 == (undefined1 *)0x0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      puVar21 = auStack_168;
      puVar11 = (undefined1 *)0x0;
    }
  }
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar30);
  local_140 = (longlong)(iVar22 * 3);
  local_148 = (longlong)(iVar22 * 2);
  uVar10 = (ulonglong)(iVar22 * 6);
  lVar15 = *local_108;
  lVar17 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (0 < (int)(uint)local_68) {
    uVar25 = (uint)local_68 & 0x7fffffff;
    uVar27 = 0;
    do {
      *(int *)(puVar11 + uVar27 * 4) =
           *(int *)(lVar17 + 4 + uVar27 * 4) - *(int *)(lVar17 + uVar27 * 4);
      uVar27 = uVar27 + 1;
    } while (uVar25 != uVar27);
  }
  lVar28 = local_100;
  local_50 = lVar17;
  puVar20 = puVar11 + local_100 * 4;
  puVar32 = puVar11 + local_148 * 4;
  local_b8 = puVar11 + local_140 * 4;
  local_70 = puVar11 + (longlong)(iVar22 * 4) * 4;
  local_88 = puVar11 + (longlong)(iVar22 * 5) * 4;
  puVar1 = (undefined4 *)(puVar11 + uVar10 * 4);
  iVar30 = (int)local_68;
  local_e0 = (longlong)iVar30;
  *(undefined4 *)(puVar11 + (longlong)iVar30 * 4) = 0;
  puVar6 = local_70;
  puVar5 = local_88;
  puVar4 = local_b8;
  local_138 = puVar11 + (longlong)(iVar22 * 7) * 4;
  if (-1 < iVar30) {
    local_98 = (undefined1 *)(lVar28 * 4);
    lVar17 = 0;
    uVar10 = 0xffffffff;
    do {
      *(undefined4 *)(puVar4 + lVar17) = 0xffffffff;
      *(undefined4 *)(lVar15 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar32 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar11 + (longlong)(iVar22 * 7) * 4 + lVar17) = 0xffffffff;
      *(undefined4 *)(puVar20 + lVar17) = 1;
      *(undefined4 *)((longlong)puVar1 + lVar17) = 1;
      *(undefined4 *)(puVar6 + lVar17) = 0;
      *(undefined4 *)(puVar5 + lVar17) = *(undefined4 *)(puVar11 + lVar17);
      lVar17 = lVar17 + 4;
    } while (local_98 != (undefined1 *)lVar17);
    if (0 < (int)(uint)local_68) {
      uVar27 = (ulonglong)((uint)local_68 & 0x7fffffff);
      uVar10 = 0;
      do {
        if (puVar1[uVar10] != 0) {
          puVar1[uVar10] = 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar27 != uVar10);
      iVar30 = -2 - (uint)local_68;
      uVar10 = 0;
      local_54 = 0;
      do {
        puVar4 = local_b8;
        iVar8 = *(int *)(local_50 + uVar10 * 4);
        iVar22 = *(int *)(local_50 + 4 + uVar10 * 4);
        if (iVar8 < iVar22) {
          lVar17 = 0;
          do {
            if (uVar10 == *(uint *)(lVar2 + (longlong)iVar8 * 4 + lVar17 * 4)) {
              lVar17 = (longlong)*(int *)(local_88 + uVar10 * 4);
              if (lVar17 == 1) {
                *(undefined4 *)(local_70 + uVar10 * 4) = 0xfffffffe;
                local_54 = local_54 + 1;
                *(undefined4 *)(local_50 + uVar10 * 4) = 0xffffffff;
                puVar1[uVar10] = 0;
                goto LAB_146de534d;
              }
              if (*(int *)(local_88 + uVar10 * 4) <= (int)local_80) {
                if ((longlong)*(int *)(local_b8 + lVar17 * 4) == -1) {
                  uVar7 = 0xffffffff;
                }
                else {
                  *(int *)(lVar15 + (longlong)*(int *)(local_b8 + lVar17 * 4) * 4) = (int)uVar10;
                  uVar7 = *(undefined4 *)(local_b8 + lVar17 * 4);
                }
                *(undefined4 *)(puVar32 + uVar10 * 4) = uVar7;
                *(int *)(puVar4 + lVar17 * 4) = (int)uVar10;
                goto LAB_146de534d;
              }
              break;
            }
            lVar17 = lVar17 + 1;
          } while (iVar22 - iVar8 != (int)lVar17);
        }
        *(undefined4 *)(puVar20 + uVar10 * 4) = 0;
        *(undefined4 *)(local_70 + uVar10 * 4) = 0xffffffff;
        local_54 = local_54 + 1;
        *(int *)(local_50 + uVar10 * 4) = iVar30;
        *(int *)(puVar20 + local_e0 * 4) = *(int *)(puVar20 + local_e0 * 4) + 1;
LAB_146de534d:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar27);
      goto LAB_146de488e;
    }
  }
  local_54 = 0;
LAB_146de488e:
  uVar27 = local_60;
  *(undefined4 *)(local_70 + local_e0 * 4) = 0xfffffffe;
  *(undefined4 *)(local_50 + local_e0 * 4) = 0xffffffff;
  puVar1[local_e0] = 0;
  uVar25 = (uint)local_68;
  local_98 = puVar11;
  local_80 = puVar32;
  local_78 = puVar20;
  if (local_54 < (int)uVar25) {
    local_160 = (ulonglong)(uVar25 & 0x7fffffff);
    local_e8 = 0;
    iVar30 = 2;
    local_a0 = 0;
    local_d8 = lVar15;
    uVar14 = local_68;
    do {
      uVar7 = 0xffffffff;
      iVar8 = (int)local_a0;
      if (iVar8 < (int)uVar14) {
        lVar17 = 0;
        do {
          uVar25 = *(uint *)(local_b8 + lVar17 * 4 + (longlong)iVar8 * 4);
          if (uVar25 != 0xffffffff) {
            local_a0 = (ulonglong)(uint)(iVar8 + (int)lVar17);
            goto LAB_146de4942;
          }
          lVar17 = lVar17 + 1;
        } while (local_e0 - iVar8 != lVar17);
        local_a0 = local_68;
      }
      uVar25 = 0xffffffff;
LAB_146de4942:
      local_ac = uVar25;
      uVar10 = (ulonglong)(int)uVar25;
      if ((longlong)*(int *)(puVar32 + uVar10 * 4) != -1) {
        *(undefined4 *)(lVar15 + (longlong)*(int *)(puVar32 + uVar10 * 4) * 4) = 0xffffffff;
        uVar7 = *(undefined4 *)(puVar32 + uVar10 * 4);
      }
      *(undefined4 *)(local_b8 + (longlong)(int)local_a0 * 4) = uVar7;
      local_120 = (ulonglong)*(uint *)(local_70 + uVar10 * 4);
      local_8c = *(int *)(puVar20 + uVar10 * 4);
      local_f0 = uVar10;
      iVar8 = (int)uVar27;
      if (((int)*(uint *)(local_70 + uVar10 * 4) < 1) || ((int)local_a0 + iVar8 < local_124)) {
        uVar14 = uVar27 & 0xffffffff;
      }
      else {
        if (0 < (int)(uint)local_68) {
          iVar22 = -2;
          uVar14 = 0;
          do {
            lVar17 = (longlong)*(int *)(local_50 + uVar14 * 4);
            if (-1 < lVar17) {
              *(undefined4 *)(local_50 + uVar14 * 4) = *(undefined4 *)(lVar2 + lVar17 * 4);
              *(int *)(lVar2 + lVar17 * 4) = iVar22;
            }
            uVar14 = uVar14 + 1;
            iVar22 = iVar22 + -1;
          } while (local_160 != uVar14);
        }
        if (iVar8 < 1) {
          uVar14 = 0;
        }
        else {
          iVar22 = 0;
          uVar14 = 0;
          local_60 = uVar27;
          do {
            lVar17 = (longlong)iVar22;
            iVar22 = iVar22 + 1;
            uVar12 = -*(int *)(lVar2 + lVar17 * 4) - 2;
            if (-1 < (int)uVar12) {
              uVar27 = (ulonglong)uVar12;
              iVar9 = (int)uVar14;
              *(undefined4 *)(lVar2 + (longlong)iVar9 * 4) = *(undefined4 *)(local_50 + uVar27 * 4);
              *(int *)(local_50 + uVar27 * 4) = iVar9;
              uVar12 = iVar9 + 1;
              uVar14 = (ulonglong)uVar12;
              if (1 < *(int *)(puVar11 + uVar27 * 4)) {
                lVar17 = 0;
                do {
                  *(undefined4 *)(lVar2 + (longlong)(int)uVar12 * 4 + lVar17 * 4) =
                       *(undefined4 *)(lVar2 + (longlong)iVar22 * 4 + lVar17 * 4);
                  lVar17 = lVar17 + 1;
                  iVar9 = (int)lVar17;
                } while (iVar9 < *(int *)(puVar11 + uVar27 * 4) + -1);
                iVar22 = iVar22 + iVar9;
                uVar14 = (ulonglong)(uVar12 + iVar9);
              }
            }
          } while (iVar22 < iVar8);
        }
      }
      local_54 = local_54 + local_8c;
      *(int *)(puVar20 + uVar10 * 4) = -local_8c;
      uVar12 = *(uint *)(local_50 + uVar10 * 4);
      iVar8 = (int)local_120;
      local_c8 = CONCAT44(local_c8._4_4_,uVar12);
      uVar13 = (uint)uVar14;
      if (iVar8 == 0) {
        uVar13 = uVar12;
      }
      local_90 = uVar13;
      local_158 = uVar14;
      if (iVar8 < 0) {
        puVar26 = (uint *)(local_88 + uVar10 * 4);
        uVar25 = 0;
        *puVar26 = 0;
        piVar18 = (int *)(puVar11 + uVar10 * 4);
        *piVar18 = 0;
        *(undefined4 *)(local_70 + uVar10 * 4) = 0xfffffffe;
LAB_146de4e79:
        *puVar26 = uVar25;
        if ((int)uVar25 < (int)(uint)local_e8) {
          uVar25 = (uint)local_e8;
        }
        iVar30 = iVar30 + uVar25;
        *(int *)(puVar20 + uVar10 * 4) = local_8c;
        *piVar18 = 0;
        local_e8 = (ulonglong)uVar25;
LAB_146de4ea7:
        uVar14 = local_68;
        *(undefined4 *)(local_50 + uVar10 * 4) = 0xffffffff;
        puVar1[uVar10] = 0;
        uVar12 = local_90;
      }
      else {
        local_f8 = (int *)(puVar11 + uVar10 * 4);
        local_a8 = CONCAT44(local_a8._4_4_,-2 - uVar25);
        local_118 = CONCAT44(local_118._4_4_,iVar8 + 1);
        local_60 = 0;
        uVar10 = 1;
        uVar25 = local_ac;
        do {
          if ((int)local_120 < (int)uVar10) {
            iVar22 = *local_f8 - (int)local_120;
            local_d0 = (ulonglong)uVar25;
            iVar8 = (int)local_c8;
          }
          else {
            lVar17 = (longlong)(int)local_c8;
            local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
            local_d0 = (ulonglong)*(int *)(lVar2 + lVar17 * 4);
            iVar8 = *(int *)(local_50 + local_d0 * 4);
            iVar22 = *(int *)(puVar11 + local_d0 * 4);
          }
          local_c0 = uVar10;
          if (0 < iVar22) {
            lVar17 = 0;
            do {
              iVar9 = *(int *)(lVar2 + (longlong)iVar8 * 4 + lVar17 * 4);
              lVar28 = (longlong)iVar9;
              iVar29 = *(int *)(puVar20 + lVar28 * 4);
              if (0 < iVar29) {
                *(int *)(puVar20 + lVar28 * 4) = -iVar29;
                *(int *)(lVar2 + (longlong)(int)uVar13 * 4) = iVar9;
                iVar9 = *(int *)(lVar15 + lVar28 * 4);
                if ((longlong)*(int *)(puVar32 + lVar28 * 4) == -1) {
                  uVar7 = 0xffffffff;
                }
                else {
                  *(int *)(lVar15 + (longlong)*(int *)(puVar32 + lVar28 * 4) * 4) = iVar9;
                  uVar7 = *(undefined4 *)(puVar32 + lVar28 * 4);
                }
                lVar15 = local_148;
                if (iVar9 == -1) {
                  iVar9 = *(int *)(local_88 + lVar28 * 4);
                  lVar15 = local_140;
                }
                local_60 = (ulonglong)(uint)((int)local_60 + iVar29);
                uVar13 = uVar13 + 1;
                *(undefined4 *)(puVar11 + (longlong)iVar9 * 4 + lVar15 * 4) = uVar7;
                puVar20 = local_78;
                lVar15 = local_d8;
              }
              lVar17 = lVar17 + 1;
            } while (iVar22 != (int)lVar17);
          }
          uVar25 = local_ac;
          uVar12 = (uint)local_d0;
          if (uVar12 != local_ac) {
            *(undefined4 *)(local_50 + (longlong)(int)uVar12 * 4) = (undefined4)local_a8;
            puVar1[(int)uVar12] = 0;
          }
          uVar12 = local_90;
          uVar27 = local_f0;
          uVar10 = (ulonglong)((int)local_c0 + 1);
        } while ((int)local_c0 != (int)local_118);
        local_130 = (uint *)(local_88 + local_f0 * 4);
        *(uint *)(local_88 + local_f0 * 4) = (uint)local_60;
        *(uint *)(local_50 + local_f0 * 4) = local_90;
        iVar8 = uVar13 - local_90;
        *local_f8 = iVar8;
        lVar17 = local_50;
        *(undefined4 *)(local_70 + uVar27 * 4) = 0xfffffffe;
        if (iVar8 == 0 || (int)uVar13 < (int)uVar12) {
          uVar25 = (uint)local_60;
          uVar10 = local_f0;
          piVar18 = local_f8;
          puVar26 = local_130;
          goto LAB_146de4e79;
        }
        uVar10 = (ulonglong)(int)uVar12;
        local_c0 = (longlong)(int)uVar13;
        local_110 = uVar10;
        do {
          lVar15 = (longlong)*(int *)(lVar2 + uVar10 * 4);
          iVar8 = *(int *)(local_70 + lVar15 * 4);
          if (0 < iVar8) {
            iVar22 = *(int *)(local_78 + lVar15 * 4);
            iVar9 = *(int *)(lVar17 + lVar15 * 4);
            lVar28 = (longlong)iVar9;
            do {
              lVar31 = (longlong)*(int *)(lVar2 + lVar28 * 4);
              iVar29 = puVar1[lVar31];
              if (iVar29 < iVar30) {
                if (iVar29 != 0) {
                  iVar29 = *(int *)(local_88 + lVar31 * 4) + iVar22 + iVar30;
                  goto LAB_146de4c75;
                }
              }
              else {
                iVar29 = iVar29 + iVar22;
LAB_146de4c75:
                puVar1[lVar31] = iVar29;
                iVar9 = *(int *)(lVar17 + lVar15 * 4);
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < iVar9 + iVar8);
          }
          uVar10 = uVar10 + 1;
          uVar27 = local_110;
          puVar11 = local_98;
        } while (uVar10 != local_c0);
        do {
          local_c8 = uVar27;
          iVar8 = *(int *)(lVar2 + uVar27 * 4);
          lVar17 = (longlong)iVar8;
          uVar25 = *(uint *)(local_50 + lVar17 * 4);
          uVar10 = (ulonglong)uVar25;
          lVar15 = (longlong)(int)uVar25;
          iVar22 = *(int *)(local_70 + lVar17 * 4);
          local_d0 = uVar10;
          local_118 = lVar15;
          local_128 = iVar22 + uVar25;
          if (iVar22 < 1) {
            iVar29 = 0;
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            iVar29 = 0;
            do {
              iVar24 = *(int *)(lVar2 + lVar15 * 4);
              lVar28 = (longlong)iVar24;
              iVar16 = puVar1[lVar28];
              if (iVar16 != 0) {
                if (iVar16 - iVar30 == 0 || iVar16 < iVar30) {
                  *(undefined4 *)(local_50 + lVar28 * 4) = (undefined4)local_a8;
                  puVar1[lVar28] = 0;
                }
                else {
                  iVar29 = iVar29 + (iVar16 - iVar30);
                  iVar16 = (int)uVar10;
                  uVar10 = (ulonglong)(iVar16 + 1);
                  *(int *)(lVar2 + (longlong)iVar16 * 4) = iVar24;
                  iVar9 = iVar9 + iVar24;
                }
              }
              lVar15 = lVar15 + 1;
              puVar11 = local_98;
            } while (lVar15 < (int)(iVar22 + uVar25));
          }
          puVar20 = local_78;
          puVar32 = local_80;
          lVar15 = local_d8;
          iVar19 = (int)uVar10;
          iVar23 = (int)local_d0;
          *(int *)(local_70 + lVar17 * 4) = (iVar19 - iVar23) + 1;
          iVar24 = *(int *)(puVar11 + lVar17 * 4);
          iVar16 = iVar19;
          if (iVar22 < iVar24) {
            lVar28 = (longlong)local_128;
            do {
              iVar22 = *(int *)(lVar2 + lVar28 * 4);
              if (0 < *(int *)(local_78 + (longlong)iVar22 * 4)) {
                iVar29 = iVar29 + *(int *)(local_78 + (longlong)iVar22 * 4);
                iVar16 = (int)uVar10;
                uVar10 = (ulonglong)(iVar16 + 1);
                *(int *)(lVar2 + (longlong)iVar16 * 4) = iVar22;
                iVar9 = iVar9 + iVar22;
              }
              iVar16 = (int)uVar10;
              lVar28 = lVar28 + 1;
            } while (lVar28 < iVar24 + iVar23);
          }
          if (iVar29 == 0) {
            *(undefined4 *)(local_50 + lVar17 * 4) = (undefined4)local_a8;
            iVar8 = *(int *)(local_78 + lVar17 * 4);
            uVar10 = (ulonglong)(uint)((int)local_60 + iVar8);
            local_8c = local_8c - iVar8;
            local_54 = local_54 - iVar8;
            *(undefined4 *)(local_78 + lVar17 * 4) = 0;
            *(undefined4 *)(local_70 + lVar17 * 4) = 0xffffffff;
          }
          else {
            iVar22 = *(int *)(local_88 + lVar17 * 4);
            if (iVar29 < *(int *)(local_88 + lVar17 * 4)) {
              iVar22 = iVar29;
            }
            *(int *)(local_88 + lVar17 * 4) = iVar22;
            *(undefined4 *)(lVar2 + (longlong)iVar16 * 4) =
                 *(undefined4 *)(lVar2 + (longlong)iVar19 * 4);
            *(undefined4 *)(lVar2 + (longlong)iVar19 * 4) = *(undefined4 *)(lVar2 + local_118 * 4);
            *(uint *)(lVar2 + local_118 * 4) = local_ac;
            *(int *)(puVar11 + lVar17 * 4) = (iVar16 - iVar23) + 1;
            iVar9 = iVar9 % (int)(uint)local_68;
            *(undefined4 *)(local_80 + lVar17 * 4) =
                 *(undefined4 *)(local_138 + (longlong)iVar9 * 4);
            *(int *)(local_138 + (longlong)iVar9 * 4) = iVar8;
            *(int *)(local_d8 + lVar17 * 4) = iVar9;
            uVar10 = local_60;
          }
          uVar27 = local_c8 + 1;
          local_60 = uVar10;
        } while (local_c8 + 1 != local_c0);
        *local_130 = (uint)uVar10;
        uVar27 = local_e8;
        if ((int)local_e8 <= (int)(uint)uVar10) {
          uVar27 = uVar10;
        }
        local_e8 = uVar27 & 0xffffffff;
        iVar30 = iVar30 + (int)uVar27;
        uVar27 = local_110;
        do {
          lVar17 = (longlong)*(int *)(lVar2 + uVar27 * 4);
          local_a8 = uVar27;
          if (*(int *)(puVar20 + lVar17 * 4) < 0) {
            lVar17 = (longlong)*(int *)(lVar15 + lVar17 * 4);
            iVar8 = *(int *)(local_138 + lVar17 * 4);
            *(undefined4 *)(local_138 + lVar17 * 4) = 0xffffffff;
            lVar17 = local_50;
            while (local_50 = lVar17, iVar8 != -1) {
              lVar28 = (longlong)iVar8;
              iVar22 = *(int *)(puVar32 + lVar28 * 4);
              if (iVar22 == -1) break;
              iVar9 = *(int *)(puVar11 + lVar28 * 4);
              iVar29 = *(int *)(local_70 + lVar28 * 4);
              iVar24 = *(int *)(lVar17 + lVar28 * 4);
              lVar15 = (longlong)iVar24;
              if (iVar24 < iVar24 + iVar9 + -1) {
                do {
                  lVar31 = lVar15 * 4;
                  lVar15 = lVar15 + 1;
                  puVar1[*(int *)(lVar2 + 4 + lVar31)] = iVar30;
                } while (lVar15 < *(int *)(lVar17 + lVar28 * 4) + iVar9 + -1);
                iVar22 = *(int *)(puVar32 + lVar28 * 4);
                if (iVar22 == -1) {
                  iVar30 = iVar30 + 1;
                  puVar20 = local_78;
                  lVar15 = local_d8;
                  break;
                }
              }
              iVar24 = -2 - iVar8;
              do {
                lVar15 = (longlong)iVar22;
                if ((*(int *)(puVar11 + lVar15 * 4) == iVar9) &&
                   (*(int *)(local_70 + lVar15 * 4) == iVar29)) {
                  iVar16 = *(int *)(local_50 + lVar15 * 4);
                  lVar17 = (longlong)iVar16;
                  iVar19 = iVar16 + iVar9 + -1;
                  if (iVar19 < iVar16) {
                    iVar19 = iVar16;
                  }
                  do {
                    if (iVar19 == lVar17) {
                      *(int *)(local_50 + lVar15 * 4) = iVar24;
                      *(int *)(local_78 + lVar28 * 4) =
                           *(int *)(local_78 + lVar28 * 4) + *(int *)(local_78 + lVar15 * 4);
                      *(undefined4 *)(local_78 + lVar15 * 4) = 0;
                      *(undefined4 *)(local_70 + lVar15 * 4) = 0xffffffff;
                      iVar22 = *(int *)(local_80 + lVar15 * 4);
                      *(int *)(local_80 + (longlong)iVar8 * 4) = iVar22;
                      goto LAB_146de5000;
                    }
                    lVar31 = lVar17 * 4;
                    lVar17 = lVar17 + 1;
                  } while (puVar1[*(int *)(lVar2 + 4 + lVar31)] == iVar30);
                }
                iVar8 = iVar22;
                iVar22 = *(int *)(local_80 + lVar15 * 4);
LAB_146de5000:
                puVar11 = local_98;
              } while (iVar22 != -1);
              iVar30 = iVar30 + 1;
              puVar20 = local_78;
              lVar15 = local_d8;
              puVar32 = local_80;
              lVar17 = local_50;
              iVar8 = *(int *)(local_80 + lVar28 * 4);
            }
          }
          uVar10 = local_f0;
          uVar27 = local_a8 + 1;
        } while (uVar27 != local_c0);
        iVar8 = (int)local_68 - local_54;
        local_a8 = CONCAT44(local_a8._4_4_,iVar8);
        uVar27 = local_110;
        uVar12 = local_90;
        do {
          iVar22 = *(int *)(lVar2 + uVar27 * 4);
          lVar17 = (longlong)iVar22;
          iVar9 = *(int *)(puVar20 + lVar17 * 4);
          if (iVar9 < 0) {
            *(int *)(puVar20 + lVar17 * 4) = -iVar9;
            uVar13 = (int)local_60 + iVar9 + *(int *)(local_88 + lVar17 * 4);
            uVar25 = iVar9 + iVar8;
            if ((int)uVar13 <= (int)uVar25) {
              uVar25 = uVar13;
            }
            lVar28 = (longlong)(int)uVar25;
            if ((longlong)*(int *)(local_b8 + lVar28 * 4) == -1) {
              uVar7 = 0xffffffff;
            }
            else {
              *(int *)(lVar15 + (longlong)*(int *)(local_b8 + lVar28 * 4) * 4) = iVar22;
              uVar7 = *(undefined4 *)(local_b8 + lVar28 * 4);
            }
            *(undefined4 *)(puVar32 + lVar17 * 4) = uVar7;
            *(undefined4 *)(lVar15 + lVar17 * 4) = 0xffffffff;
            *(int *)(local_b8 + lVar28 * 4) = iVar22;
            uVar14 = local_a0 & 0xffffffff;
            if ((int)uVar25 < (int)local_a0) {
              uVar14 = (ulonglong)uVar25;
            }
            local_a0 = uVar14;
            *(uint *)(local_88 + lVar17 * 4) = uVar25;
            lVar17 = (longlong)(int)uVar12;
            uVar12 = uVar12 + 1;
            *(int *)(lVar2 + lVar17 * 4) = iVar22;
          }
          uVar27 = uVar27 + 1;
        } while (local_c0 != uVar27);
        *(int *)(puVar20 + local_f0 * 4) = local_8c;
        iVar8 = uVar12 - local_90;
        *local_f8 = iVar8;
        uVar14 = local_68;
        if (iVar8 == 0) goto LAB_146de4ea7;
      }
      uVar25 = (uint)uVar14;
      if ((int)local_120 == 0) {
        uVar12 = (uint)local_158;
      }
      uVar27 = (ulonglong)uVar12;
    } while (local_54 < (int)uVar25);
  }
  puVar11 = local_b8;
  lVar15 = local_100;
  plVar3 = local_108;
  uVar12 = (uint)local_68;
  if (0 < (int)uVar25) {
    uVar27 = 0;
    do {
      uVar25 = -*(int *)(local_50 + uVar27 * 4) - 2;
      uVar10 = (ulonglong)uVar25;
      *(uint *)(local_50 + uVar27 * 4) = uVar25;
      uVar27 = uVar27 + 1;
    } while ((uVar12 & 0x7fffffff) != uVar27);
  }
  if (-1 < (int)uVar12) {
    _Size = local_100 * 4;
    *(undefined8 *)(puVar21 + -0x28) = 0x146de53dd;
    memset(puVar11,(int)CONCAT71((int7)(uVar10 >> 8),0xff),_Size);
    uVar27 = (ulonglong)(uVar12 & 0x7fffffff);
    uVar10 = uVar27;
    do {
      if (*(int *)(local_78 + uVar10 * 4) < 1) {
        *(undefined4 *)(local_80 + uVar10 * 4) =
             *(undefined4 *)(puVar11 + (longlong)*(int *)(local_50 + uVar10 * 4) * 4);
        *(int *)(puVar11 + (longlong)*(int *)(local_50 + uVar10 * 4) * 4) = (int)uVar10;
      }
      bVar33 = 0 < (longlong)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar33);
    do {
      if ((0 < *(int *)(local_78 + uVar27 * 4)) &&
         (lVar17 = (longlong)*(int *)(local_50 + uVar27 * 4), lVar17 != -1)) {
        *(undefined4 *)(local_80 + uVar27 * 4) = *(undefined4 *)(puVar11 + lVar17 * 4);
        *(int *)(puVar11 + (longlong)*(int *)(local_50 + uVar27 * 4) * 4) = (int)uVar27;
      }
      bVar33 = 0 < (longlong)uVar27;
      uVar27 = uVar27 - 1;
    } while (bVar33);
    bVar33 = local_80 != (undefined1 *)0x0;
    lVar17 = 0;
    iVar30 = 0;
    do {
      iVar8 = iVar30;
      if (*(int *)(local_50 + lVar17 * 4) == -1) {
        lVar2 = *plVar3;
        iVar8 = -1;
        if ((puVar1 != (undefined4 *)0x0) &&
           (lVar2 != 0 && (bVar33 && puVar11 != (undefined1 *)0x0))) {
          *puVar1 = (int)lVar17;
          uVar10 = 0;
          do {
            iVar8 = puVar1[uVar10];
            iVar22 = *(int *)(puVar11 + (longlong)iVar8 * 4);
            if ((longlong)iVar22 == -1) {
              uVar25 = (int)uVar10 - 1;
              lVar28 = (longlong)iVar30;
              iVar30 = iVar30 + 1;
              *(int *)(lVar2 + lVar28 * 4) = iVar8;
            }
            else {
              *(undefined4 *)(puVar11 + (longlong)iVar8 * 4) =
                   *(undefined4 *)(local_80 + (longlong)iVar22 * 4);
              uVar25 = (int)uVar10 + 1;
              puVar1[uVar10 + 1] = iVar22;
            }
            uVar10 = (ulonglong)uVar25;
            iVar8 = iVar30;
          } while (-1 < (int)uVar25);
        }
      }
      lVar17 = lVar17 + 1;
      iVar30 = iVar8;
    } while (lVar17 != lVar15);
  }
  lVar2 = local_e0;
  lVar15 = *plVar3;
  lVar17 = plVar3[1];
  *(undefined8 *)(puVar21 + -0x28) = 0x146de51c1;
  lVar15 = FUN_146de08f9(lVar15,lVar2,lVar17);
  puVar11 = local_98;
  *plVar3 = lVar15;
  plVar3[1] = lVar2;
  if (0x20000 < local_150) {
    *(undefined8 *)(puVar21 + -0x28) = 0x146de51e3;
    FUN_1400020a8(puVar11);
  }
  if ((local_48 ^ (ulonglong)&local_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar21 + -0x28) = &UNK_146de5503;
  FUN_144d8e3a0();
}



// FUNCTION 146de5508 FUN_146de5508 body=66 status=ok
// SIG undefined FUN_146de5508(void)

void FUN_146de5508(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146de554a FUN_146de554a body=95 status=ok
// SIG undefined FUN_146de554a(void)

void FUN_146de554a(longlong param_1,longlong param_2,double param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) < param_2) {
    lVar1 = (longlong)((double)param_2 * param_3) + param_2;
    if (0x7ffffffe < lVar1) {
      lVar1 = 0x7fffffff;
    }
    if (lVar1 < param_2) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    FUN_146de55aa(param_1,lVar1);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 146de55aa FUN_146de55aa body=230 status=ok
// SIG undefined FUN_146de55aa(void)

void FUN_146de55aa(undefined8 *param_1,ulonglong param_2)

{
  void *_Src;
  void *_Dst;
  void *_Dst_00;
  void *_Src_00;
  ulonglong uVar1;
  
  _Dst = (void *)FUN_144a7d36f(-(ulonglong)(param_2 >> 0x3d != 0) | param_2 * 8);
  _Dst_00 = (void *)FUN_144a7d36f(-(ulonglong)(param_2 >> 0x3e != 0) | param_2 * 4);
  _Src = (void *)*param_1;
  uVar1 = param_1[2];
  if ((longlong)param_2 <= (longlong)param_1[2]) {
    uVar1 = param_2;
  }
  if ((longlong)uVar1 < 1) {
    _Src_00 = (void *)param_1[1];
  }
  else {
    memcpy(_Dst,_Src,uVar1 * 8);
    _Src_00 = (void *)param_1[1];
    memcpy(_Dst_00,_Src_00,uVar1 << 2);
  }
  *param_1 = _Dst;
  param_1[1] = _Dst_00;
  param_1[3] = param_2;
  if (_Src_00 != (void *)0x0) {
    thunk_FUN_1400020a8(_Src_00);
  }
  if (_Src != (void *)0x0) {
    thunk_FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 146de5690 FUN_146de5690 body=124 status=ok
// SIG undefined FUN_146de5690(void)

longlong FUN_146de5690(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  longlong local_20 [2];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = (longlong)(*(int **)(param_1 + 0x18))[*(longlong *)(param_1 + 8)] -
            (longlong)**(int **)(param_1 + 0x18);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      local_40 = lVar3;
      local_38 = lVar1;
      local_20[0] = lVar3;
      local_10 = lVar1;
      iVar2 = FUN_146ddd0fe(local_20,&local_41);
      lVar3 = (longlong)iVar2;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de570e FUN_146de570e body=700 status=ok
// SIG undefined FUN_146de570e(void)

longlong FUN_146de570e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  longlong *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_146de45bc(local_e8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_80 = &local_70;
  local_70 = local_d0;
  local_68 = local_e0;
  local_90 = local_78;
  local_78[0] = 0;
  local_98 = local_50;
  local_50[0] = local_d0;
  local_40 = local_e0;
  local_88 = &local_99;
  FUN_146de119a();
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar10 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar10 * 4);
      }
      else {
        lVar13 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar10 * 4) + lVar12;
      }
      if (lVar12 < lVar13) {
        lVar11 = *(longlong *)(param_2 + 0x30);
        do {
          piVar1 = (int *)(local_d0 + (longlong)*(int *)(lVar11 + lVar12 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  lVar10 = 0;
  iVar17 = 0;
  lVar11 = 0;
  if (local_e0 != 0) {
    iVar17 = 0;
    if (local_e0 < 1) {
      lVar10 = 0;
      lVar11 = local_e0;
    }
    else {
      lVar10 = FUN_141729f83();
      lVar11 = local_e0;
      if (0 < local_e0) {
        lVar12 = 0;
        iVar16 = 0;
        do {
          iVar17 = *(int *)(local_d0 + lVar12 * 4) + iVar16;
          *(int *)(local_d0 + lVar12 * 4) = iVar16;
          *(int *)(lVar10 + lVar12 * 4) = iVar16;
          lVar12 = lVar12 + 1;
          iVar16 = iVar17;
        } while (lVar12 < local_e0);
      }
    }
  }
  *(int *)(local_d0 + lVar11 * 4) = iVar17;
  FUN_146de554a(&local_c0,(longlong)iVar17,0);
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar12 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar12 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar12 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar11 = *(longlong *)(param_2 + 0x28);
        lVar2 = *(longlong *)(param_2 + 0x30);
        do {
          lVar15 = (longlong)*(int *)(lVar2 + lVar13 * 4);
          iVar17 = *(int *)(lVar10 + lVar15 * 4);
          *(int *)(lVar10 + lVar15 * 4) = iVar17 + 1;
          *(int *)(lStack_b8 + (longlong)iVar17 * 4) = (int)lVar12;
          *(undefined8 *)(local_c0 + (longlong)iVar17 * 8) = *(undefined8 *)(lVar11 + lVar13 * 8);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_e0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_c0;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  local_e0 = uVar5;
  uStack_d8 = uVar4;
  local_d0 = uVar3;
  uStack_c8 = uVar6;
  local_c0 = lVar11;
  lStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  FUN_1400020a8(lVar10);
  FUN_146de5508(local_e8);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146de59cc FUN_146de59cc body=129 status=ok
// SIG undefined FUN_146de59cc(void)

void FUN_146de59cc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  return;
}



// FUNCTION 146de5a4e FUN_146de5a4e body=154 status=ok
// SIG undefined FUN_146de5a4e(void)

char * FUN_146de5a4e(char *param_1,char *param_2)

{
  size_t _Size;
  
  if (*param_2 == '\x01') {
    FUN_146de59cc(param_1,param_2);
  }
  else if (param_1 != param_2) {
    FUN_146de45bc(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(longlong *)(param_2 + 0x20) == 0) {
      _Size = *(longlong *)(param_1 + 8) * 4 + 4;
      if (_Size != 0) {
        memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size);
      }
      FUN_146de5ae8(param_1 + 0x28,param_2 + 0x28);
    }
    else {
      FUN_146de5b43(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 146de5ae8 FUN_146de5ae8 body=91 status=ok
// SIG undefined FUN_146de5ae8(void)

undefined8 * FUN_146de5ae8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_146de554a(param_1,param_2[2],0);
  if ((0 < (longlong)param_2[2]) && (param_1[2] != 0)) {
    memcpy((void *)*param_1,(void *)*param_2,param_1[2] << 3);
    if (param_1[2] != 0) {
      memcpy((void *)param_1[1],(void *)param_2[1],param_1[2] << 2);
    }
  }
  return param_1;
}



// FUNCTION 146de5b43 FUN_146de5b43 body=1012 status=ok
// SIG undefined FUN_146de5b43(void)

void FUN_146de5b43(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_2 + 8);
  local_d8 = param_1;
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(param_2 + 0x10),lVar6);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar7 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(local_d8 + 0x28);
    }
    lVar9 = local_d8;
    if (0 < lVar6) {
      local_c0 = local_d8 + 0x28;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) =
             *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4);
        lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar8 * 4);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar8 * 4);
        }
        else {
          lVar7 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar8 * 4) + lVar5;
        }
        if (lVar5 < lVar7) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          local_d0 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar5 * 8);
            uVar2 = *(undefined4 *)(local_d0 + lVar5 * 4);
            iVar3 = *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4);
            *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) = iVar3 + 1;
            lVar9 = *(longlong *)(lVar9 + 0x38);
            FUN_146de554a(local_c0,lVar9 + 1,0);
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar9 * 8) = 0;
            *(undefined4 *)(*(longlong *)(local_d8 + 0x30) + lVar9 * 4) = uVar2;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + (longlong)iVar3 * 8) = uVar1;
            lVar5 = lVar5 + 1;
            lVar9 = local_d8;
          } while (lVar7 != lVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar6);
    }
    if ((*(longlong *)(lVar9 + 0x20) == 0) && (lVar6 = *(longlong *)(lVar9 + 8), -1 < lVar6)) {
      uVar2 = *(undefined4 *)(lVar9 + 0x38);
      lVar8 = lVar6;
      do {
        if (*(int *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4) != 0) goto LAB_146de5e59;
        bVar4 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar4);
      lVar8 = -1;
LAB_146de5e59:
      if (lVar8 < lVar6) {
        do {
          *(undefined4 *)(*(longlong *)(local_d8 + 0x18) + 4 + lVar8 * 4) = uVar2;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(longlong *)(local_d8 + 8));
      }
    }
  }
  else {
    local_b8[0] = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    lStack_78 = 0;
    FUN_146de45bc(local_b8,*(undefined8 *)(param_2 + 0x10),lVar6);
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (lStack_78 < lVar7 + local_80) {
      FUN_146de55aa(&local_90);
    }
    if (0 < lVar6) {
      lVar9 = 0;
      local_d0 = lVar6;
      do {
        *(undefined4 *)(local_a0 + 4 + lVar9 * 4) = *(undefined4 *)(local_a0 + lVar9 * 4);
        lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar9 * 4);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar9 * 4);
        }
        else {
          lVar8 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar9 * 4) + lVar6;
        }
        if (lVar6 < lVar8) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x30);
          do {
            lVar7 = local_80;
            uVar1 = *(undefined8 *)(local_c8 + lVar6 * 8);
            uVar2 = *(undefined4 *)(lVar5 + lVar6 * 4);
            iVar3 = *(int *)(local_a0 + 4 + lVar9 * 4);
            *(int *)(local_a0 + 4 + lVar9 * 4) = iVar3 + 1;
            FUN_146de554a(&local_90,local_80 + 1,0);
            *(undefined8 *)(local_90 + lVar7 * 8) = 0;
            *(undefined4 *)(lStack_88 + lVar7 * 4) = uVar2;
            *(undefined8 *)(local_90 + (longlong)iVar3 * 8) = uVar1;
            lVar6 = lVar6 + 1;
          } while (lVar8 != lVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != local_d0);
    }
    if ((lStack_98 == 0) && (-1 < local_b0)) {
      lVar6 = local_b0;
      do {
        if (*(int *)(local_a0 + lVar6 * 4) != 0) goto joined_r0x000146de5eb5;
        bVar4 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar4);
      lVar6 = -1;
joined_r0x000146de5eb5:
      for (; lVar6 < local_b0; lVar6 = lVar6 + 1) {
        *(undefined4 *)(local_a0 + 4 + lVar6 * 4) = (undefined4)local_80;
      }
    }
    local_b8[0] = 1;
    FUN_146de5a4e(local_d8,local_b8);
    FUN_146de5508(local_b8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de5f38 FUN_146de5f38 body=145 status=ok
// SIG undefined FUN_146de5f38(void)

void FUN_146de5f38(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_146de5fca(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_146de5fca(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 146de5fca FUN_146de5fca body=38 status=ok
// SIG undefined FUN_146de5fca(void)

void FUN_146de5fca(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 146de5ff0 FUN_146de5ff0 body=300 status=ok
// SIG undefined FUN_146de5ff0(void)

void FUN_146de5ff0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_3[1];
  if ((*param_1 == *param_3) && (param_1[1] == lVar5)) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar5 = param_2[1];
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        while (lVar3 = lVar4 + 1, *(char *)((longlong)local_38 + lVar4) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar4) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar3 * 4);
          while (lVar5 = (longlong)iVar2, lVar3 - lVar5 != 1) {
            lVar4 = *param_1;
            uVar1 = *(undefined8 *)(lVar4 + lVar5 * 8);
            *(undefined8 *)(lVar4 + lVar5 * 8) = *(undefined8 *)(lVar4 + -8 + lVar3 * 8);
            *(undefined8 *)(lVar4 + -8 + lVar3 * 8) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar5) = 1;
            iVar2 = *(int *)(*param_2 + lVar5 * 4);
          }
          lVar5 = param_2[1];
          lVar4 = lVar3;
          if (lVar5 <= lVar3) goto LAB_146de610e;
        }
        lVar4 = lVar3;
      } while (lVar3 < lVar5);
    }
LAB_146de610e:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar5) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar4 * 4) * 8) =
           *(undefined8 *)(*param_3 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de611d FUN_146de611d body=129 status=ok
// SIG undefined FUN_146de611d(void)

void FUN_146de611d(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_2;
  if (param_1[1] != param_2[1]) {
    FUN_146de3c6e(param_1,param_2[1],1);
  }
  local_28 = *param_1;
  local_48 = &local_28;
  local_40 = &local_20;
  local_38 = param_3;
  local_30 = param_1;
  FUN_146de61a0();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de61a0 FUN_146de61a0 body=109 status=ok
// SIG undefined FUN_146de61a0(void)

void FUN_146de61a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 - ((longlong)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 8);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar6 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 146de620e FUN_146de620e body=700 status=ok
// SIG undefined FUN_146de620e(void)

longlong FUN_146de620e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_99;
  longlong *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_146dd941a(local_e8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  local_80 = &local_70;
  local_70 = local_d0;
  local_68 = local_e0;
  local_90 = local_78;
  local_78[0] = 0;
  local_98 = local_50;
  local_50[0] = local_d0;
  local_40 = local_e0;
  local_88 = &local_99;
  FUN_146de119a();
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar10 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar10 * 4);
      }
      else {
        lVar13 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar10 * 4) + lVar12;
      }
      if (lVar12 < lVar13) {
        lVar11 = *(longlong *)(param_2 + 0x30);
        do {
          piVar1 = (int *)(local_d0 + (longlong)*(int *)(lVar11 + lVar12 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar13 != lVar12);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  lVar10 = 0;
  iVar17 = 0;
  lVar11 = 0;
  if (local_e0 != 0) {
    iVar17 = 0;
    if (local_e0 < 1) {
      lVar10 = 0;
      lVar11 = local_e0;
    }
    else {
      lVar10 = FUN_141729f83();
      lVar11 = local_e0;
      if (0 < local_e0) {
        lVar12 = 0;
        iVar16 = 0;
        do {
          iVar17 = *(int *)(local_d0 + lVar12 * 4) + iVar16;
          *(int *)(local_d0 + lVar12 * 4) = iVar16;
          *(int *)(lVar10 + lVar12 * 4) = iVar16;
          lVar12 = lVar12 + 1;
          iVar16 = iVar17;
        } while (lVar12 < local_e0);
      }
    }
  }
  *(int *)(local_d0 + lVar11 * 4) = iVar17;
  FUN_146de554a(&local_c0,(longlong)iVar17,0);
  lVar11 = *(longlong *)(param_2 + 8);
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + lVar12 * 4);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar12 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar12 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar11 = *(longlong *)(param_2 + 0x28);
        lVar2 = *(longlong *)(param_2 + 0x30);
        do {
          lVar15 = (longlong)*(int *)(lVar2 + lVar13 * 4);
          iVar17 = *(int *)(lVar10 + lVar15 * 4);
          *(int *)(lVar10 + lVar15 * 4) = iVar17 + 1;
          *(int *)(lStack_b8 + (longlong)iVar17 * 4) = (int)lVar12;
          *(undefined8 *)(local_c0 + (longlong)iVar17 * 8) = *(undefined8 *)(lVar11 + lVar13 * 8);
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar11 = *(longlong *)(param_2 + 8);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_e0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_c0;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  local_e0 = uVar5;
  uStack_d8 = uVar4;
  local_d0 = uVar3;
  uStack_c8 = uVar6;
  local_c0 = lVar11;
  lStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  FUN_1400020a8(lVar10);
  FUN_146de3a5a(local_e8);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146de64cc FUN_146de64cc body=725 status=ok
// SIG undefined FUN_146de64cc(void)

void FUN_146de64cc(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar10 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar10 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar10;
    if (lVar10 == 0) {
      FUN_14001cc68();
      lVar10 = *(longlong *)(param_1 + 0x20);
    }
    lVar7 = *(longlong *)(param_1 + 8);
    iVar8 = 0;
    lVar11 = 0;
    if (0 < lVar7) {
      lVar13 = 0;
      do {
        *(int *)(lVar10 + lVar13 * 4) = iVar8;
        iVar12 = *(int *)(*param_2 + lVar13 * 4);
        lVar7 = *(longlong *)(param_1 + 8);
        iVar8 = (iVar8 + iVar12 + *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar13 * 4)) -
                *(int *)(*(longlong *)(param_1 + 0x18) + lVar13 * 4);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + iVar12;
      } while (lVar13 < lVar7);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar11 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
      lVar7 = *(longlong *)(param_1 + 8);
    }
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar7) {
      iVar8 = *(int *)(lVar11 + lVar7 * 4);
      do {
        lVar11 = lVar7 + -1;
        lVar13 = *(longlong *)(param_1 + 0x18);
        iVar12 = *(int *)(lVar13 + -4 + lVar7 * 4);
        iVar9 = iVar8 - iVar12;
        bVar6 = iVar12 <= iVar8;
        iVar8 = iVar12;
        if (iVar9 != 0 && bVar6) {
          lVar13 = (ulonglong)(iVar9 - 1) << 2;
          do {
            *(undefined4 *)
             (lVar13 + *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 4)
                 = *(undefined4 *)
                    (lVar13 + *(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 8 +
             lVar13 * 2) = *(undefined8 *)
                            (*(longlong *)(param_1 + 0x28) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 +
                            lVar13 * 2);
            lVar13 = lVar13 + -4;
          } while (lVar13 != -4);
          lVar13 = *(longlong *)(param_1 + 0x18);
          iVar8 = *(int *)(lVar13 + lVar11 * 4);
        }
        *(undefined4 *)(lVar13 + lVar11 * 4) = *(undefined4 *)(lVar10 + lVar11 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4) = iVar9;
        bVar6 = 1 < lVar7;
        lVar7 = lVar11;
      } while (bVar6);
      lVar7 = *(longlong *)(param_1 + 8);
      lVar11 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar7) {
        *(int *)(lVar11 + lVar7 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar7 * 4) +
             *(int *)(lVar11 + -4 + lVar7 * 4) + *(int *)(*param_2 + -4 + lVar7 * 4);
        lVar7 = *(longlong *)(param_1 + 8);
        lVar11 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de554a(param_1 + 0x28,(longlong)*(int *)(lVar11 + lVar7 * 4),0);
    return;
  }
  lVar10 = FUN_14001cc68(lVar10 + 4 + (ulonglong)(lVar10 == -4),0x10);
  if (lVar10 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar7 = *(longlong *)(param_1 + 8);
  iVar8 = 0;
  if (0 < lVar7) {
    piVar3 = *(int **)(param_1 + 0x18);
    lVar13 = *(longlong *)(param_1 + 0x20);
    lVar4 = *param_2;
    lVar11 = 0;
    iVar8 = 0;
    iVar12 = *piVar3;
    do {
      *(int *)(lVar10 + lVar11 * 4) = iVar8;
      iVar9 = piVar3[lVar11 + 1];
      iVar1 = *(int *)(lVar13 + lVar11 * 4);
      iVar2 = *(int *)(lVar4 + lVar11 * 4);
      lVar11 = lVar11 + 1;
      iVar12 = iVar9 - (iVar12 + iVar1);
      if (iVar12 < iVar2) {
        iVar12 = iVar2;
      }
      iVar8 = iVar1 + iVar8 + iVar12;
      iVar12 = iVar9;
    } while (lVar7 != lVar11);
  }
  *(int *)(lVar10 + lVar7 * 4) = iVar8;
  FUN_146de554a(param_1 + 0x28,(longlong)iVar8,0);
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar11 = lVar7 + -1;
      iVar8 = *(int *)(lVar10 + -4 + lVar7 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar7 * 4) < iVar8) &&
         (iVar12 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4), 0 < iVar12)) {
        lVar13 = (ulonglong)(iVar12 - 1) << 2;
        do {
          *(undefined4 *)(lVar13 + *(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 4) =
               *(undefined4 *)
                (lVar13 + *(longlong *)(param_1 + 0x30) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8 + lVar13 * 2) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 + lVar13 * 2);
          lVar13 = lVar13 + -4;
        } while (lVar13 != -4);
      }
      bVar6 = 1 < lVar7;
      lVar7 = lVar11;
    } while (bVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar10;
  FUN_1400020a8(uVar5);
  return;
}



// FUNCTION 146de67e4 FUN_146de67e4 body=90 status=ok
// SIG undefined FUN_146de67e4(void)

void FUN_146de67e4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar1 * 0x30);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146de683e FUN_146de683e body=95 status=ok
// SIG undefined FUN_146de683e(void)

void FUN_146de683e(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x30 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 * 0x30);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146de68a4 FUN_146de68a4 body=193 status=ok
// SIG undefined FUN_146de68a4(void)

void FUN_146de68a4(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x30);
  iVar8 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar8 + 1U) {
    FUN_14083f2e4((longlong *)(param_3 + 8),iVar8);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  lVar10 = (longlong)iVar8 * 0x30;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  uVar7 = puVar12[5];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar10);
  *puVar1 = puVar12[4];
  puVar1[1] = uVar7;
  puVar12 = (undefined8 *)(lVar2 + 0x10 + lVar10);
  *puVar12 = uVar5;
  puVar12[1] = uVar6;
  *(undefined8 *)(lVar2 + lVar10) = uVar3;
  ((undefined8 *)(lVar2 + lVar10))[1] = uVar4;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar11 = ~param_2 + iVar8;
  if (iVar11 != 0) {
    iVar9 = 1;
    if (iVar11 < 1) {
      iVar9 = iVar11;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar8 - iVar9) * 0x30 + *(longlong *)(param_1 + 8)),
            (longlong)iVar9 * 0x30);
    iVar8 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar8 + -1;
  return;
}



// FUNCTION 146de6966 FUN_146de6966 body=47 status=ok
// SIG undefined FUN_146de6966(void)

longlong FUN_146de6966(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146de6996 FUN_146de6996 body=113 status=ok
// SIG undefined FUN_146de6996(void)

void FUN_146de6996(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 146de6a08 FUN_146de6a08 body=63 status=ok
// SIG undefined FUN_146de6a08(void)

void FUN_146de6a08(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146de6a48(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 146de6a48 FUN_146de6a48 body=117 status=ok
// SIG undefined FUN_146de6a48(void)

ulonglong FUN_146de6a48(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x30) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0x10);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 146de6b00 FUN_146de6b00 body=76 status=ok
// SIG undefined FUN_146de6b00(void)

void FUN_146de6b00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146de6b4c FUN_146de6b4c body=77 status=ok
// SIG undefined FUN_146de6b4c(void)

void FUN_146de6b4c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 4),
            (longlong)iVar3 << 2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146de6ba0 FUN_146de6ba0 body=135 status=ok
// SIG undefined FUN_146de6ba0(void)

void FUN_146de6ba0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1447808da((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar1 + (longlong)(int)param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 4),
            (longlong)iVar4 << 2);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146de6c28 FUN_146de6c28 body=47 status=ok
// SIG undefined FUN_146de6c28(void)

longlong FUN_146de6c28(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146de6cc0 FUN_146de6cc0 body=118 status=ok
// SIG undefined FUN_146de6cc0(void)

void FUN_146de6cc0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140b466f2((longlong *)(param_3 + 8),iVar1);
  }
  FUN_146de6f74((longlong)iVar1 * 400 + *(longlong *)(param_3 + 8),lVar2 + (longlong)param_2 * 400);
  FUN_146de6efc(param_1 + 8,param_2,1);
  return;
}



// FUNCTION 146de6d36 FUN_146de6d36 body=59 status=ok
// SIG undefined FUN_146de6d36(void)

longlong FUN_146de6d36(longlong param_1,int param_2)

{
  FUN_140b4d463(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146de6d72 FUN_146de6d72 body=112 status=ok
// SIG undefined FUN_146de6d72(void)

void FUN_146de6d72(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 400,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,400,8);
  }
  return;
}



// FUNCTION 146de6de2 FUN_146de6de2 body=101 status=ok
// SIG undefined FUN_146de6de2(void)

void FUN_146de6de2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 400 + *param_1);
  FUN_140b4d463(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 400 + (longlong)_Dst),(longlong)iVar2 * 400);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146de6e48 FUN_146de6e48 body=63 status=ok
// SIG undefined FUN_146de6e48(void)

void FUN_146de6e48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146de6e88(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,400,8);
  }
  return;
}



// FUNCTION 146de6e88 FUN_146de6e88 body=115 status=ok
// SIG undefined FUN_146de6e88(void)

ulonglong FUN_146de6e88(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 400) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 400,8);
      uVar1 = uVar1 / 400;
    }
  }
  return uVar1;
}



// FUNCTION 146de6efc FUN_146de6efc body=119 status=ok
// SIG undefined FUN_146de6efc(void)

void FUN_146de6efc(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 400 + lVar1);
  FUN_140b4d463(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 400),(longlong)iVar3 * 400);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 146de6f74 FUN_146de6f74 body=1001 status=ok
// SIG undefined FUN_146de6f74(void)

undefined4 * FUN_146de6f74(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  uVar2 = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_145741460(param_1 + 10,iVar1,0);
    FUN_1457414c2(*(undefined8 *)(param_1 + 10),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar3 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_146d8c0a4(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar3,(longlong)iVar1 * 0xc);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar3 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar3 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar3,(longlong)iVar1 << 2);
  }
  uVar4 = param_2[0x1a];
  uVar5 = param_2[0x1b];
  uVar6 = param_2[0x1c];
  uVar7 = param_2[0x1d];
  uVar8 = param_2[0x1f];
  uVar9 = param_2[0x20];
  uVar10 = param_2[0x21];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar8;
  param_1[0x20] = uVar9;
  param_1[0x21] = uVar10;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar6;
  param_1[0x1d] = uVar7;
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  pvVar3 = *(void **)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x22,iVar1,0);
    memcpy(*(void **)(param_1 + 0x22),pvVar3,(longlong)iVar1 << 2);
  }
  uVar4 = param_2[0x26];
  uVar5 = param_2[0x27];
  uVar6 = param_2[0x28];
  uVar7 = param_2[0x29];
  uVar8 = param_2[0x2b];
  uVar9 = param_2[0x2c];
  uVar10 = param_2[0x2d];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar8;
  param_1[0x2c] = uVar9;
  param_1[0x2d] = uVar10;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar5;
  param_1[0x28] = uVar6;
  param_1[0x29] = uVar7;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  iVar1 = param_2[0x30];
  pvVar3 = *(void **)(param_2 + 0x2e);
  param_1[0x30] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x31] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x2e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2e),pvVar3,(longlong)iVar1 << 2);
  }
  uVar4 = param_2[0x32];
  uVar5 = param_2[0x33];
  uVar6 = param_2[0x34];
  uVar7 = param_2[0x35];
  uVar8 = param_2[0x37];
  uVar9 = param_2[0x38];
  uVar10 = param_2[0x39];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar8;
  param_1[0x38] = uVar9;
  param_1[0x39] = uVar10;
  param_1[0x32] = uVar4;
  param_1[0x33] = uVar5;
  param_1[0x34] = uVar6;
  param_1[0x35] = uVar7;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  iVar1 = param_2[0x3c];
  pvVar3 = *(void **)(param_2 + 0x3a);
  param_1[0x3c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x3d] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x3a,iVar1,0);
    memcpy(*(void **)(param_1 + 0x3a),pvVar3,(longlong)iVar1 << 2);
  }
  uVar4 = param_2[0x3e];
  uVar5 = param_2[0x3f];
  uVar6 = param_2[0x40];
  uVar7 = param_2[0x41];
  uVar8 = param_2[0x43];
  uVar9 = param_2[0x44];
  uVar10 = param_2[0x45];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar8;
  param_1[0x44] = uVar9;
  param_1[0x45] = uVar10;
  param_1[0x3e] = uVar4;
  param_1[0x3f] = uVar5;
  param_1[0x40] = uVar6;
  param_1[0x41] = uVar7;
  *(undefined8 *)(param_1 + 0x46) = 0;
  iVar1 = param_2[0x48];
  pvVar3 = *(void **)(param_2 + 0x46);
  param_1[0x48] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x49] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x46,iVar1,0);
    memcpy(*(void **)(param_1 + 0x46),pvVar3,(longlong)iVar1 << 2);
  }
  uVar4 = param_2[0x4a];
  uVar5 = param_2[0x4b];
  uVar6 = param_2[0x4c];
  uVar7 = param_2[0x4d];
  uVar8 = param_2[0x4f];
  uVar9 = param_2[0x50];
  uVar10 = param_2[0x51];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar8;
  param_1[0x50] = uVar9;
  param_1[0x51] = uVar10;
  param_1[0x4a] = uVar4;
  param_1[0x4b] = uVar5;
  param_1[0x4c] = uVar6;
  param_1[0x4d] = uVar7;
  *(undefined8 *)(param_1 + 0x52) = 0;
  iVar1 = param_2[0x54];
  pvVar3 = *(void **)(param_2 + 0x52);
  param_1[0x54] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x55] = 0;
  }
  else {
    FUN_1405161ea(param_1 + 0x52,iVar1,0);
    memcpy(*(void **)(param_1 + 0x52),pvVar3,(longlong)iVar1 * 0xc);
  }
  param_1[0x62] = param_2[0x62];
  uVar2 = *(undefined8 *)(param_2 + 0x56);
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  uVar12 = *(undefined8 *)(param_2 + 0x5a);
  uVar13 = *(undefined8 *)(param_2 + 0x5c);
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  *(undefined8 *)(param_1 + 0x5a) = uVar12;
  *(undefined8 *)(param_1 + 0x5c) = uVar13;
  *(undefined8 *)(param_1 + 0x56) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  return param_1;
}



// FUNCTION 146de73c6 FUN_146de73c6 body=154 status=ok
// SIG undefined FUN_146de73c6(void)

void FUN_146de73c6(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 8));
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140acfddc((longlong *)(param_3 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_3 + 8);
  lVar11 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar11) = *puVar12;
  *(undefined8 *)(lVar3 + 0x10 + lVar11) = puVar12[2];
  puVar12[2] = 0;
  uVar4 = *(undefined4 *)(puVar12 + 4);
  uVar5 = *(undefined4 *)((longlong)puVar12 + 0x24);
  uVar6 = *(undefined4 *)(puVar12 + 5);
  uVar7 = *(undefined4 *)((longlong)puVar12 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)puVar12 + 0x34);
  uVar9 = *(undefined4 *)(puVar12 + 7);
  uVar10 = *(undefined4 *)((longlong)puVar12 + 0x3c);
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar11);
  *puVar1 = *(undefined4 *)(puVar12 + 6);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar11);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (*(longlong *)(lVar3 + lVar11) != 0) {
    *puVar12 = 0;
  }
  FUN_146de75fe(param_1 + 8,param_2,1);
  return;
}



// FUNCTION 146de7460 FUN_146de7460 body=59 status=ok
// SIG undefined FUN_146de7460(void)

longlong FUN_146de7460(longlong param_1,int param_2)

{
  FUN_140b4d48c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146de749c FUN_146de749c body=96 status=ok
// SIG undefined FUN_146de749c(void)

void FUN_146de749c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 146de74fc FUN_146de74fc body=95 status=ok
// SIG undefined FUN_146de74fc(void)

void FUN_146de74fc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x40 + *param_1);
  FUN_140b4d48c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146de755c FUN_146de755c body=63 status=ok
// SIG undefined FUN_146de755c(void)

void FUN_146de755c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146de759c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 146de759c FUN_146de759c body=97 status=ok
// SIG undefined FUN_146de759c(void)

ulonglong FUN_146de759c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146de75fe FUN_146de75fe body=113 status=ok
// SIG undefined FUN_146de75fe(void)

void FUN_146de75fe(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x40 + lVar1);
  FUN_140b4d48c(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x40),(longlong)iVar3 << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 146de7670 FUN_146de7670 body=269 status=ok
// SIG undefined FUN_146de7670(void)

void FUN_146de7670(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)*param_2;
  if (plVar4 == (longlong *)0x0) goto LAB_146de7692;
  uVar3 = *param_1;
  iVar2 = *(int *)(param_1 + 3);
  if (iVar2 == 2) {
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_38);
LAB_146de76f9:
    FUN_146de777e(param_1[2],local_38);
    plVar4 = (longlong *)*param_2;
    if (plVar4 != local_38) {
      *param_2 = (longlong)local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar4 + 0xc) == 0)) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
  }
  else {
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_38);
      goto LAB_146de76f9;
    }
    if (iVar2 == 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    FUN_146de777e(param_1[2],plVar4);
    local_38 = plVar4;
  }
  FUN_146dd965a(uVar3);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)*plVar4 == 0) && (*(int *)((longlong)local_38 + 0xc) == 0)) {
      (**(code **)*local_38)(local_38,1);
    }
  }
LAB_146de7692:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de777e FUN_146de777e body=77 status=ok
// SIG undefined FUN_146de777e(void)

void FUN_146de777e(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x1c) == '\x05' || *(char *)(param_2 + 0x1c) == '\x0f')
     ) {
    FUN_146de77cb(*param_1 + 0x78,param_1[1]);
    FUN_146daf556(param_2,param_1[1]);
    return;
  }
  return;
}



// FUNCTION 146de77cb FUN_146de77cb body=350 status=ok
// SIG undefined FUN_146de77cb(void)

void FUN_146de77cb(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = (int)param_2[1];
  if (iVar7 == 0) {
    return;
  }
  uVar8 = *(uint *)*param_2;
  if (iVar7 < 2) {
    iVar7 = *(int *)(param_1 + 0x10);
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    lVar9 = 1;
    do {
      uVar2 = *(uint *)(*param_2 + lVar9 * 4);
      if (uVar2 != uVar8) {
        if ((0 < (int)uVar5) && ((int)(uVar8 + 1) < (int)uVar2)) {
          lVar6 = (longlong)(int)(uVar8 + 1);
          iVar7 = ~uVar8 + uVar2;
          do {
            lVar4 = *(longlong *)(param_1 + 8);
            if (*(longlong *)(param_1 + 8) == 0) {
              lVar4 = param_1;
            }
            lVar1 = lVar4 + lVar6 * 8;
            puVar3 = *(undefined8 **)((ulonglong)uVar5 * -8 + lVar1);
            *(undefined8 *)((ulonglong)uVar5 * -8 + lVar1) = *(undefined8 *)(lVar4 + lVar6 * 8);
            *(undefined8 *)(lVar4 + lVar6 * 8) = 0;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            lVar6 = lVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar7 = (int)param_2[1];
        }
        uVar5 = uVar5 + 1;
        uVar8 = uVar2;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
    iVar7 = *(int *)(param_1 + 0x10);
    if ((int)uVar5 < 1) goto LAB_146de790a;
  }
  if ((int)(uVar8 + 1) < iVar7) {
    lVar9 = (longlong)(int)uVar8;
    do {
      lVar6 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar6 = param_1;
      }
      lVar4 = lVar6 + lVar9 * 8;
      puVar3 = *(undefined8 **)((ulonglong)uVar5 * -8 + 8 + lVar4);
      *(undefined8 *)((ulonglong)uVar5 * -8 + 8 + lVar4) = *(undefined8 *)(lVar6 + 8 + lVar9 * 8);
      *(undefined8 *)(lVar6 + 8 + lVar9 * 8) = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar9 = lVar9 + 1;
    } while (iVar7 + -1 != (int)lVar9);
    iVar7 = *(int *)(param_1 + 0x10);
  }
LAB_146de790a:
  FUN_1449226c0(param_1,iVar7 - uVar5,0);
  return;
}



// FUNCTION 146de792a FUN_146de792a body=90 status=ok
// SIG undefined FUN_146de792a(void)

longlong * FUN_146de792a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar2) {
    *param_1 = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(short *)(param_1 + 3) = (short)param_2[3];
  lVar4 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar4;
  return param_1;
}



// FUNCTION 146de7984 FUN_146de7984 body=71 status=ok
// SIG undefined FUN_146de7984(void)

undefined8 * FUN_146de7984(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f57480;
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



// FUNCTION 146de79cc FUN_146de79cc body=124 status=ok
// SIG undefined FUN_146de79cc(void)

undefined8 FUN_146de79cc(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)param_4 * 0x10;
  lVar4 = (longlong)*(int *)(param_3 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 8) + 0xa8);
  FUN_1429b9404(param_2,(*(int *)(lVar1 + lVar3) + lVar4) * 0x10 + lVar2,
                (*(int *)(lVar1 + 4 + lVar3) + lVar4) * 0x10 + lVar2,
                (*(int *)(lVar1 + 8 + lVar3) + lVar4) * 0x10 + lVar2,
                (*(int *)(lVar1 + 0xc + lVar3) + lVar4) * 0x10 + lVar2,0);
  return param_2;
}



// FUNCTION 146de7a48 FUN_146de7a48 body=443 status=ok
// SIG undefined FUN_146de7a48(void)

uint FUN_146de7a48(longlong param_1,longlong param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = *(longlong *)(param_1 + 8);
  lVar9 = (longlong)param_3;
  lVar7 = lVar9 * 0x10;
  iVar1 = *(int *)(lVar6 + lVar7);
  iVar2 = *(int *)(lVar6 + 4 + lVar7);
  iVar3 = *(int *)(lVar6 + 8 + lVar7);
  iVar4 = *(int *)(lVar6 + 0xc + lVar7);
  iVar5 = *(int *)(param_2 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
  fVar10 = (float)FUN_1408e9604((longlong)(iVar5 + iVar1) * 0x10 + lVar6,
                                (longlong)(iVar5 + iVar2) * 0x10 + lVar6,
                                (longlong)(iVar5 + iVar3) * 0x10 + lVar6,
                                (longlong)(iVar5 + iVar4) * 0x10 + lVar6);
  iVar5 = *(int *)(param_2 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
  pfVar8 = (float *)&stack0x00000028;
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar9) != '\0') {
    pfVar8 = (float *)&stack0x00000030;
  }
  fVar10 = (fVar10 - *(float *)(*(longlong *)(param_1 + 0xf8) + lVar9 * 4)) * *pfVar8;
  if (0.7853982 <= fVar10) {
    fVar10 = 0.7853982;
  }
  fVar11 = (param_4[0xb] * param_4[0xb] + param_4[9] * param_4[9] + param_4[10] * param_4[10]) *
           *(float *)(lVar6 + (longlong)(iVar5 + iVar4) * 4) +
           (param_4[8] * param_4[8] + param_4[6] * param_4[6] + param_4[7] * param_4[7]) *
           *(float *)(lVar6 + (longlong)(iVar3 + iVar5) * 4) +
           (param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]) *
           *(float *)(lVar6 + (longlong)(iVar1 + iVar5) * 4) +
           (param_4[5] * param_4[5] + param_4[3] * param_4[3] + param_4[4] * param_4[4]) *
           *(float *)(lVar6 + (longlong)(iVar2 + iVar5) * 4);
  if (fVar10 <= -0.7853982) {
    fVar10 = -0.7853982;
  }
  return (uint)(fVar10 / fVar11) & -(uint)(1e-08 < fVar11);
}



// FUNCTION 146de7c04 FUN_146de7c04 body=96 status=ok
// SIG undefined FUN_146de7c04(void)

undefined8 * FUN_146de7c04(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f4f4b0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146de7c64 FUN_146de7c64 body=162 status=ok
// SIG undefined FUN_146de7c64(void)

void FUN_146de7c64(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146def634(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_146def724(param_1,iVar1);
      }
      lVar2 = *param_1;
      lVar3 = (longlong)iVar1 * 0x50;
      *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      ((undefined8 *)(lVar2 + lVar3))[1] = 0;
      *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000080;
      *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
      FUN_146def7b8(lVar2 + lVar3,param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146de7d06 FUN_146de7d06 body=71 status=ok
// SIG undefined FUN_146de7d06(void)

void FUN_146de7d06(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146def8a6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146def924();
      return;
    }
  }
  return;
}



// FUNCTION 146de7d4e FUN_146de7d4e body=95 status=ok
// SIG undefined FUN_146de7d4e(void)

void FUN_146de7d4e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146def8a6(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146de7dae FUN_146de7dae body=205 status=ok
// SIG undefined FUN_146de7dae(void)

float FUN_146de7dae(longlong param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  if ((*(int *)(param_1 + 0x28) < 1) || (fVar8 = *(float *)(param_1 + 0x34), ABS(fVar8) <= 0.0001))
  {
    fVar8 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar5 = (longlong)param_2;
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar6 = lVar5 * 0x10;
    lVar7 = (longlong)*(int *)(param_1 + 0x178);
    fVar1 = *(float *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x20);
    fVar8 = (fVar8 * *(float *)(lVar4 + (*(int *)(lVar2 + 0xc + lVar6) - lVar7) * 4) + fVar1) *
            *(float *)(lVar3 + 8 + lVar5 * 0xc) +
            (*(float *)(lVar4 + (*(int *)(lVar2 + 8 + lVar6) - lVar7) * 4) * fVar8 + fVar1) *
            *(float *)(lVar3 + 4 + lVar5 * 0xc) +
            (*(float *)(lVar4 + (*(int *)(lVar2 + 4 + lVar6) - lVar7) * 4) * fVar8 + fVar1) *
            *(float *)(lVar3 + lVar5 * 0xc) +
            *(float *)(lVar4 + (*(int *)(lVar2 + lVar6) - lVar7) * 4) * fVar8 + fVar1;
  }
  return fVar8;
}



// FUNCTION 146de7e7c FUN_146de7e7c body=50 status=ok
// SIG undefined FUN_146de7e7c(void)

void FUN_146de7e7c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1429bba2a();
  FUN_1429bc2a4(param_1,param_2,param_3);
  return;
}



// FUNCTION 146de7eae FUN_146de7eae body=34 status=ok
// SIG undefined FUN_146de7eae(void)

void FUN_146de7eae(undefined8 param_1,undefined8 param_2)

{
  FUN_1429bc4ca();
  FUN_1429bcd3c(param_1,param_2);
  return;
}



// FUNCTION 146de7ed0 FUN_146de7ed0 body=649 status=ok
// SIG undefined FUN_146de7ed0(void)

undefined8 *
FUN_146de7ed0(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined1 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined4 param_17)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = &PTR_FUN_149f580e0;
  FUN_146ded362(param_1 + 1,param_7);
  *(int *)(param_1 + 3) = param_3;
  uVar1 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 2) == param_3) {
    uVar1 = param_1[1];
    iVar2 = param_3;
  }
  param_1[4] = uVar1;
  *(int *)(param_1 + 5) = iVar2;
  *(float *)(param_1 + 6) = (float)param_10;
  *(float *)((longlong)param_1 + 0x34) = param_10._4_4_ - (float)param_10;
  *(undefined4 *)(param_1 + 7) = param_11;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_12;
  *(undefined1 *)(param_1 + 8) = param_13;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_14;
  *(undefined4 *)(param_1 + 9) = param_15;
  FUN_146ded362(param_1 + 10,param_8,param_3);
  *(int *)(param_1 + 0xc) = param_3;
  uVar1 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xb) == param_3) {
    uVar1 = param_1[10];
    iVar2 = param_3;
  }
  param_1[0xd] = uVar1;
  *(int *)(param_1 + 0xe) = iVar2;
  *(float *)(param_1 + 0xf) = (float)param_16;
  *(float *)((longlong)param_1 + 0x7c) = param_16._4_4_ - (float)param_16;
  *(undefined4 *)(param_1 + 0x10) = param_17;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_4;
  param_1[0x18] = param_5;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_146ded7a6(param_1 + 0x19,param_6);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = param_2;
  *(int *)((longlong)param_1 + 0x17c) = param_3;
  *(undefined1 *)(param_1 + 0x30) = 0;
  fVar3 = *(float *)(param_1 + 6);
  fVar4 = *(float *)((longlong)param_1 + 0x34) + fVar3;
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  *(float *)((longlong)param_1 + 0x84) = fVar3;
  FUN_146de815a(param_1,param_9);
  return param_1;
}



// FUNCTION 146de815a FUN_146de815a body=389 status=ok
// SIG undefined FUN_146de815a(void)

void FUN_146de815a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[2] == *(int *)(*(longlong *)(param_1 + 0xb8) + 8)) {
    plVar1 = (longlong *)(param_1 + 0x118);
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *(undefined4 *)plVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x11c) = uVar5;
    *(undefined4 *)(param_1 + 0x120) = uVar6;
    *(undefined4 *)(param_1 + 0x124) = uVar7;
    FUN_140bfb9f0(param_1 + 0x128,*(undefined4 *)(param_1 + 0x17c),1);
    FUN_140aaccac(*(undefined8 *)(param_1 + 0xb8),local_40);
    if (0 < *(int *)(param_1 + 0x17c)) {
      lVar8 = 0;
      do {
        iVar14 = *(int *)(param_1 + 0x178);
        lVar3 = *(longlong *)(param_1 + 0x128);
        *(undefined8 *)(lVar3 + lVar8 * 8) = 0xffffffffffffffff;
        lVar11 = ((longlong)(int)lVar8 + (longlong)iVar14) * 0x10;
        lVar9 = (longlong)*(int *)(local_40[0] + 8 + lVar11);
        if (lVar9 != 0) {
          lVar11 = *(longlong *)(local_40[0] + lVar11);
          iVar13 = -1;
          lVar12 = 0;
          iVar14 = -1;
          do {
            lVar10 = (longlong)*(int *)(lVar11 + lVar12);
            iVar2 = *(int *)(*plVar1 + lVar10 * 4);
            if (iVar2 != -1) {
              iVar4 = iVar14;
              if (iVar2 < iVar14) {
                iVar4 = iVar2;
              }
              bVar15 = iVar14 == -1;
              iVar14 = iVar4;
              if (bVar15) {
                iVar14 = iVar2;
              }
              *(int *)(lVar3 + lVar8 * 8) = iVar14;
              iVar2 = *(int *)(*plVar1 + lVar10 * 4);
              iVar4 = iVar2;
              if (iVar2 < iVar13) {
                iVar4 = iVar13;
              }
              bVar15 = iVar13 == -1;
              iVar13 = iVar4;
              if (bVar15) {
                iVar13 = iVar2;
              }
              *(int *)(lVar3 + 4 + lVar8 * 8) = iVar13;
            }
            lVar12 = lVar12 + 4;
          } while (lVar9 * 4 != lVar12);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x17c));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x134) < 0) {
      *(undefined4 *)(param_1 + 0x130) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de82f4 FUN_146de82f4 body=3829 status=ok
// SIG undefined FUN_146de82f4(void)

void FUN_146de82f4(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_228 [32];
  int local_208;
  int local_200;
  undefined4 local_1f8;
  undefined4 local_1e8;
  int local_1e4;
  ulonglong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e8 = param_3;
  local_1c8 = param_4;
  FUN_146dd911c(param_4 + 0x30,*(int *)(param_1 + 0x90) << 2,*(int *)(param_1 + 0x90) * 3);
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar17 = 0xc;
    lVar26 = 0;
    uVar21 = 0;
    local_1d0 = param_2;
    iVar22 = *(int *)(param_1 + 0x90);
    do {
      local_1e4 = iVar22;
      lVar13 = *(longlong *)(param_1 + 0x88);
      uVar9 = *(uint *)(lVar13 + -0xc + lVar17);
      local_1b8 = (ulonglong)uVar9;
      uVar10 = *(uint *)(lVar13 + -8 + lVar17);
      local_1b0 = (ulonglong)uVar10;
      uVar11 = *(uint *)(lVar13 + -4 + lVar17);
      local_1c0 = (ulonglong)uVar11;
      local_1d8 = (ulonglong)*(uint *)(lVar13 + lVar17);
      local_198 = *(longlong *)(param_2 + 8);
      uVar12 = *(uint *)(param_2 + 0x10);
      local_1e0 = (ulonglong)uVar12;
      lVar14 = *(longlong *)(local_198 + 0xa8);
      local_1a0 = (longlong)(int)(uVar12 + uVar9);
      lVar20 = local_1a0 * 0x10;
      local_1a8 = (longlong)(int)(uVar12 + uVar10);
      lVar25 = local_1a8 * 0x10;
      lVar19 = (longlong)(int)(uVar12 + uVar11) * 0x10;
      lVar24 = (longlong)(int)(uVar12 + *(uint *)(lVar13 + lVar17)) * 0x10;
      local_190 = lVar17;
      fVar27 = (float)FUN_146de7dae(param_1,uVar21 & 0xffffffff);
      uVar16 = local_1c0;
      lVar13 = local_1c8;
      param_2 = local_1d0;
      uVar15 = local_1e8;
      fVar31 = *(float *)(lVar14 + lVar25);
      fVar32 = *(float *)(lVar14 + 4 + lVar25);
      lVar17 = *(longlong *)(param_1 + 0x98);
      fVar1 = *(float *)(lVar17 + lVar26);
      fVar2 = *(float *)(lVar17 + 4 + lVar26);
      fVar3 = *(float *)(lVar14 + 8 + lVar25);
      fVar4 = *(float *)(lVar14 + 4 + lVar19);
      fVar5 = *(float *)(lVar14 + 8 + lVar19);
      fVar6 = *(float *)(lVar17 + 8 + lVar26);
      fVar7 = *(float *)(lVar14 + 4 + lVar24);
      fVar8 = *(float *)(lVar14 + 8 + lVar24);
      fVar33 = fVar8 - fVar3;
      fVar34 = fVar7 - fVar32;
      fVar35 = *(float *)(lVar14 + lVar24) - fVar31;
      fVar36 = fVar5 - fVar3;
      fVar30 = fVar4 - fVar32;
      fVar28 = *(float *)(lVar14 + lVar19) - fVar31;
      fVar29 = fVar28 * fVar34 - fVar35 * fVar30;
      fVar35 = fVar36 * fVar35 - fVar33 * fVar28;
      fVar28 = fVar30 * fVar33 - fVar36 * fVar34;
      fVar30 = fVar29 * fVar29 + fVar28 * fVar28 + fVar35 * fVar35;
      if (*(char *)(*(longlong *)(param_1 + 0xa8) + uVar21) == '\x01') {
        if (((fVar30 != 1.0) || (fVar33 = fVar29, fVar34 = fVar28, fVar36 = fVar35, NAN(fVar30))) &&
           (fVar33 = DAT_14c846338, fVar34 = (float)DAT_14c846330, fVar36 = DAT_14c846330._4_4_,
           1e-08 <= fVar30)) {
          fVar30 = 1.0 / SQRT(fVar30);
          fVar33 = fVar29 * fVar30;
          fVar34 = fVar28 * fVar30;
          fVar36 = fVar35 * fVar30;
        }
        fVar33 = -fVar33;
        fVar34 = -fVar34;
        fVar36 = -fVar36;
      }
      else if (((fVar30 != 1.0) || (fVar33 = fVar29, fVar34 = fVar28, fVar36 = fVar35, NAN(fVar30)))
              && (fVar33 = DAT_14c846338, fVar34 = (float)DAT_14c846330,
                 fVar36 = DAT_14c846330._4_4_, 1e-08 <= fVar30)) {
        fVar30 = 1.0 / SQRT(fVar30);
        fVar33 = fVar29 * fVar30;
        fVar34 = fVar28 * fVar30;
        fVar36 = fVar35 * fVar30;
      }
      iVar18 = (int)local_1e0;
      iVar23 = (int)local_1d8;
      fVar31 = (*(float *)(lVar14 + 8 + lVar20) - (fVar6 * fVar8 + fVar2 * fVar5 + fVar1 * fVar3)) *
               fVar33 + (*(float *)(lVar14 + lVar20) -
                        (fVar6 * *(float *)(lVar14 + lVar24) +
                        fVar2 * *(float *)(lVar14 + lVar19) + fVar1 * fVar31)) * fVar34 +
                        (*(float *)(lVar14 + 4 + lVar20) -
                        (fVar6 * fVar7 + fVar2 * fVar4 + fVar1 * fVar32)) * fVar36;
      iVar22 = local_1e4;
      if (fVar31 <= fVar27) {
        fVar32 = 0.0;
        if (*(char *)(*(longlong *)(param_1 + 0x138) + uVar21) != '\x01') {
          fVar32 = *(float *)(param_1 + 0x3c);
        }
        local_17c = (fVar27 - fVar31) * *(float *)(param_1 + 0x80);
        local_184 = fVar34 * local_17c;
        local_180 = fVar36 * local_17c;
        local_17c = local_17c * fVar33;
        fVar31 = 1.0 - fVar32;
        local_138 = -*(float *)(param_1 + 0x80);
        local_110 = (fVar33 * fVar33 * fVar31 + fVar32) * local_138;
        local_120 = (fVar36 * fVar33 * fVar31 + 0.0) * local_138;
        local_130 = (fVar33 * fVar34 * fVar31 + 0.0) * local_138;
        local_124 = (fVar36 * fVar36 * fVar31 + fVar32) * local_138;
        local_134 = (fVar34 * fVar36 * fVar31 + 0.0) * local_138;
        local_138 = local_138 * (fVar31 * fVar34 * fVar34 + fVar32);
        local_108 = 0;
        uStack_100 = 0x3f80000000000000;
        local_12c = 0;
        local_11c = 0;
        local_10c = 0;
        lVar17 = *(longlong *)(local_198 + 0x90);
        local_128 = local_134;
        local_118 = local_130;
        local_114 = local_120;
        if (0.0 < *(float *)(lVar17 + local_1a0 * 4)) {
          local_208 = local_1e8;
          iVar22 = (int)local_1b8;
          FUN_146e24590(local_1c8,local_1d0,&local_184,local_1b8 & 0xffffffff);
          local_1f8 = uVar15;
          local_208 = iVar22;
          local_200 = iVar22;
          FUN_146e245fe(lVar13,param_2,&local_138,0);
          iVar18 = *(int *)(param_2 + 0x10);
          lVar17 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
          local_1a8 = (longlong)((int)local_1b0 + iVar18);
        }
        lVar13 = local_1c8;
        uVar15 = local_1e8;
        if (0.0 < *(float *)(lVar17 + local_1a8 * 4)) {
          local_170 = -*(float *)(*(longlong *)(param_1 + 0x98) + lVar26);
          local_178 = local_184 * local_170;
          local_174 = local_180 * local_170;
          local_170 = local_170 * local_17c;
          local_208 = local_1e8;
          iVar22 = (int)local_1b0;
          FUN_146e24590(local_1c8,param_2,&local_178,local_1b0 & 0xffffffff);
          local_178 = -*(float *)(*(longlong *)(param_1 + 0x98) + lVar26);
          local_150 = local_110 * local_178;
          local_160 = local_120 * local_178;
          local_170 = local_130 * local_178;
          local_154 = local_114 * local_178;
          local_164 = local_124 * local_178;
          local_174 = local_134 * local_178;
          local_158 = local_118 * local_178;
          local_168 = local_128 * local_178;
          local_178 = local_178 * local_138;
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0x3f800000;
          local_16c = 0;
          local_15c = 0;
          local_14c = 0;
          local_1f8 = uVar15;
          local_208 = (int)local_1b8;
          local_200 = iVar22;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
          fVar31 = -*(float *)(*(longlong *)(param_1 + 0x98) + lVar26);
          local_178 = local_178 * fVar31;
          local_174 = local_174 * fVar31;
          local_170 = local_170 * fVar31;
          local_168 = local_168 * fVar31;
          local_164 = local_164 * fVar31;
          local_160 = local_160 * fVar31;
          local_158 = local_158 * fVar31;
          local_154 = local_154 * fVar31;
          local_150 = fVar31 * local_150;
          local_1f8 = uVar15;
          iVar23 = (int)local_1d8;
          local_208 = iVar22;
          local_200 = iVar22;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
          iVar18 = *(int *)(param_2 + 0x10);
          lVar17 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
        }
        lVar13 = local_1c8;
        uVar15 = local_1e8;
        iVar22 = (int)uVar16;
        if (0.0 < *(float *)(lVar17 + (longlong)(iVar18 + iVar22) * 4)) {
          local_170 = -*(float *)(*(longlong *)(param_1 + 0x98) + 4 + lVar26);
          local_178 = local_184 * local_170;
          local_174 = local_180 * local_170;
          local_170 = local_170 * local_17c;
          local_208 = local_1e8;
          FUN_146e24590(local_1c8,param_2,&local_178,uVar16 & 0xffffffff);
          local_178 = -*(float *)(*(longlong *)(param_1 + 0x98) + 4 + lVar26);
          local_150 = local_110 * local_178;
          local_160 = local_120 * local_178;
          local_170 = local_130 * local_178;
          local_154 = local_114 * local_178;
          local_164 = local_124 * local_178;
          local_174 = local_134 * local_178;
          local_158 = local_118 * local_178;
          local_168 = local_128 * local_178;
          local_178 = local_178 * local_138;
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0x3f800000;
          local_16c = 0;
          local_15c = 0;
          local_14c = 0;
          local_1f8 = uVar15;
          local_208 = (int)local_1b8;
          local_200 = iVar22;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
          fVar31 = -*(float *)(*(longlong *)(param_1 + 0x98) + 4 + lVar26);
          local_178 = local_178 * fVar31;
          local_174 = local_174 * fVar31;
          local_170 = local_170 * fVar31;
          local_168 = local_168 * fVar31;
          local_164 = local_164 * fVar31;
          local_160 = local_160 * fVar31;
          local_158 = local_158 * fVar31;
          local_154 = local_154 * fVar31;
          local_150 = fVar31 * local_150;
          local_1f8 = uVar15;
          local_208 = iVar22;
          local_200 = iVar22;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
          iVar18 = *(int *)(param_2 + 0x10);
          lVar17 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
        }
        lVar13 = local_1c8;
        uVar15 = local_1e8;
        if (0.0 < *(float *)(lVar17 + (longlong)(iVar18 + iVar23) * 4)) {
          local_170 = -*(float *)(*(longlong *)(param_1 + 0x98) + 8 + lVar26);
          local_178 = local_184 * local_170;
          local_174 = local_180 * local_170;
          local_170 = local_170 * local_17c;
          local_208 = local_1e8;
          FUN_146e24590(local_1c8,param_2,&local_178,iVar23);
          local_178 = -*(float *)(*(longlong *)(param_1 + 0x98) + 8 + lVar26);
          local_150 = local_110 * local_178;
          local_160 = local_120 * local_178;
          local_170 = local_130 * local_178;
          local_154 = local_114 * local_178;
          local_164 = local_124 * local_178;
          local_174 = local_134 * local_178;
          local_158 = local_118 * local_178;
          local_168 = local_128 * local_178;
          local_178 = local_178 * local_138;
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0x3f800000;
          local_16c = 0;
          local_15c = 0;
          local_14c = 0;
          local_1f8 = uVar15;
          local_208 = (int)local_1b8;
          local_200 = iVar23;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
          fVar31 = -*(float *)(*(longlong *)(param_1 + 0x98) + 8 + lVar26);
          local_178 = local_178 * fVar31;
          local_174 = local_174 * fVar31;
          local_170 = local_170 * fVar31;
          local_168 = local_168 * fVar31;
          local_164 = local_164 * fVar31;
          local_160 = local_160 * fVar31;
          local_158 = local_158 * fVar31;
          local_154 = local_154 * fVar31;
          local_150 = fVar31 * local_150;
          local_1f8 = uVar15;
          local_208 = iVar23;
          local_200 = iVar23;
          FUN_146e245fe(lVar13,param_2,&local_178,0);
        }
        iVar22 = *(int *)(param_1 + 0x90);
      }
      uVar21 = uVar21 + 1;
      lVar26 = lVar26 + 0xc;
      lVar17 = local_190 + 0x10;
    } while ((longlong)uVar21 < (longlong)iVar22);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de91ea FUN_146de91ea body=189 status=ok
// SIG undefined FUN_146de91ea(void)

void FUN_146de91ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (0 < (longlong)*(int *)(param_1 + 0xe8)) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + lVar4 * 4) != 0) {
        FUN_144a1a59e((longlong *)(param_1 + 0xe0),lVar4,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        break;
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(param_1 + 0xe8) != lVar4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_140630782(param_1,1);
  return;
}



// FUNCTION 146de92a8 FUN_146de92a8 body=167 status=ok
// SIG undefined FUN_146de92a8(void)

void FUN_146de92a8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined4 local_84;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_84 = param_4;
  FUN_146df46ca(param_1,local_80);
  local_90 = &local_b8;
  local_98 = FUN_146dfa7a0;
  local_b8 = param_1;
  local_b0 = param_2;
  local_a8 = local_80;
  local_a0 = &local_84;
  FUN_1400bd65e(local_38,&local_98,param_3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de9350 FUN_146de9350 body=213 status=ok
// SIG undefined FUN_146de9350(void)

void FUN_146de9350(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x218) = *param_2;
  uVar1 = *(uint *)(param_1 + 0x18) | 0x80;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x219) = param_2[1];
    *(uint *)(param_1 + 0x18) = uVar1;
LAB_146de93e0:
    *(undefined1 *)(param_1 + 0x21a) = param_2[2];
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x219) = param_2[1];
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x18) | 0x80;
      *(undefined1 *)(param_1 + 0x219) = param_2[1];
      *(uint *)(param_1 + 0x18) = uVar1;
      if (lVar2 == 0) goto LAB_146de93e0;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x21a) = param_2[2];
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x21a) = param_2[2];
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
      if (lVar2 == 0) {
        return;
      }
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146de9426 FUN_146de9426 body=213 status=ok
// SIG undefined FUN_146de9426(void)

void FUN_146de9426(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x21b) = *param_2;
  uVar1 = *(uint *)(param_1 + 0x18) | 0x80;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x21c) = param_2[1];
    *(uint *)(param_1 + 0x18) = uVar1;
LAB_146de94b6:
    *(undefined1 *)(param_1 + 0x21d) = param_2[2];
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  else {
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x21c) = param_2[1];
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_1 + 0x18) | 0x80;
      *(undefined1 *)(param_1 + 0x21c) = param_2[1];
      *(uint *)(param_1 + 0x18) = uVar1;
      if (lVar2 == 0) goto LAB_146de94b6;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + 0x21d) = param_2[2];
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    else {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x21d) = param_2[2];
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
      if (lVar2 == 0) {
        return;
      }
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar2 + 8) + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146de94fc FUN_146de94fc body=24 status=ok
// SIG undefined FUN_146de94fc(void)

undefined8 FUN_146de94fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x108);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  *(undefined1 *)(lVar1 + 0x11 + (longlong)*(int *)(param_1 + 0x18) * 0x58));
}



// FUNCTION 146de9514 FUN_146de9514 body=21 status=ok
// SIG undefined FUN_146de9514(void)

ulonglong FUN_146de9514(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x108) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x10 + (longlong)param_2 * 0x58))
         ^ 1;
}



// FUNCTION 146de952a FUN_146de952a body=18 status=ok
// SIG undefined FUN_146de952a(void)

longlong FUN_146de952a(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x310 + *(longlong *)(param_1 + 0xe8);
}



// FUNCTION 146de953c FUN_146de953c body=15 status=ok
// SIG undefined FUN_146de953c(void)

longlong FUN_146de953c(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0xf8);
}



// FUNCTION 146de954c FUN_146de954c body=77 status=ok
// SIG undefined FUN_146de954c(void)

undefined8 * FUN_146de954c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f56360;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146de95a2 FUN_146de95a2 body=162 status=ok
// SIG undefined FUN_146de95a2(void)

void FUN_146de95a2(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = (longlong)param_2 * 0x58;
  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar4) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x11 + lVar4) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x12 + lVar4) = 1;
  pcVar1 = *(code **)(param_1 + 0x130);
  if (pcVar1 != (code *)0x0) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + (longlong)param_2 * 8);
    plVar3 = (longlong *)(param_1 + 0x150);
    if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x140);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146de9646 FUN_146de9646 body=1708 status=ok
// SIG undefined FUN_146de9646(void)

void FUN_146de9646(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8 [5];
  undefined8 uStack_d0;
  int iStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f8[4] = 0;
  uStack_d0 = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  iVar7 = *(int *)(param_1 + 0x100);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  uVar3 = 0;
  if (iVar7 != 0) {
    FUN_146ded3ca(local_f8 + 2);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
  }
  FUN_144a8c360(local_f8,uVar3,1);
  iVar7 = 0;
  bVar12 = false;
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar14 = 8;
    lVar16 = 4;
    lVar10 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar16 * 4) == '\0') {
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar14);
        bVar12 = false;
        if (*(byte *)((longlong)plVar15 + 0xc) < 2) {
          plVar15 = (longlong *)0x0;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + -8 + lVar14);
        if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
          cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
          bVar12 = cVar1 == '\x01' || cVar1 == '\x04';
        }
        if (plVar15 == (longlong *)0x0) {
          bVar8 = false;
        }
        else {
          cVar1 = *(char *)(*(longlong *)(*plVar15 + 0x2c0) + 0xb + (longlong)(int)plVar15[1] * 0x10
                           );
          bVar8 = cVar1 == '\x01' || cVar1 == '\x04';
        }
        if ((bool)(bVar12 | bVar8)) {
          uVar3 = FUN_146ded420(local_f8 + 2);
          *(undefined4 *)(local_f8[0] + lVar10 * 4) = uVar3;
          if ((!(bool)(bVar12 & bVar8)) &&
             (lVar6 = (longlong)*(int *)(local_f8[0] + lVar10 * 4), lVar6 != -1)) {
            *(undefined4 *)(local_f8[2] + 0x14 + lVar6 * 0x20) = 0;
          }
        }
        else {
          *(undefined4 *)(local_f8[0] + lVar10 * 4) = 0xffffffff;
        }
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + 0x10;
      lVar16 = lVar16 + 0x16;
    } while (lVar10 < *(int *)(param_1 + 0x100));
    bVar12 = 0 < *(int *)(param_1 + 0x100);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (bVar12) {
    lVar14 = 8;
    lVar16 = 0x10;
    lVar10 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar16) == '\0') {
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + -8 + lVar14);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar14);
        if (((plVar15 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar15 + 0xc))) &&
           ((cVar1 = *(char *)(*(longlong *)(*plVar15 + 0x2c0) + 0xb +
                              (longlong)(int)plVar15[1] * 0x10), cVar1 == '\x04' ||
            (cVar1 == '\x01')))) {
          uVar4 = ((uint)((ulonglong)plVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar15 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          local_120 = plVar15;
          plVar15 = (longlong *)FUN_146dfad2e(&local_98,uVar4 >> 0x10 ^ uVar4,&local_120);
          iVar7 = (int)plVar15[1];
          *(uint *)(plVar15 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(plVar15,iVar7);
          }
          *(int *)(*plVar15 + (longlong)iVar7 * 4) = (int)lVar10;
        }
        if (((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) &&
           ((cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb +
                              (longlong)(int)plVar2[1] * 0x10), cVar1 == '\x04' || (cVar1 == '\x01')
            ))) {
          uVar4 = ((uint)((ulonglong)plVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar2 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          local_120 = plVar2;
          plVar15 = (longlong *)FUN_146dfad2e(&local_98,uVar4 >> 0x10 ^ uVar4,&local_120);
          iVar7 = (int)plVar15[1];
          *(uint *)(plVar15 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(plVar15,iVar7);
          }
          *(int *)(*plVar15 + (longlong)iVar7 * 4) = (int)lVar10;
        }
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + 0x10;
      lVar16 = lVar16 + 0x58;
    } while (lVar10 < *(int *)(param_1 + 0x100));
    iVar7 = (int)uStack_90 - local_64;
  }
  iVar7 = (iVar7 + -1) * iVar7;
  iVar5 = iVar7 / 2;
  if (iVar7 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  local_128 = param_1;
  if (iStack_cc < iVar5) {
    FUN_146ded4f6(local_f8 + 4);
  }
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar7 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar7 = local_70;
  }
  local_108 = local_a8;
  iStack_104 = iStack_a4;
  local_100 = local_a0;
  local_fc = local_9c;
  local_118 = local_b8;
  local_110 = local_b0;
  local_120 = &local_98;
  if ((iStack_a4 != iVar7) || (local_b0 != local_88)) {
    do {
      uVar13 = (ulonglong)*(int *)(*local_120 + 0x10 + (longlong)iStack_104 * 0x20);
      if (0 < (longlong)uVar13) {
        plVar15 = (longlong *)(*local_120 + (longlong)iStack_104 * 0x20 + 8);
        uVar17 = 1;
        uVar9 = 0;
        do {
          iVar5 = *(int *)(local_f8[0] + (longlong)*(int *)(*plVar15 + uVar9 * 4) * 4);
          uVar9 = uVar9 + 1;
          if ((iVar5 != -1) && (uVar11 = uVar17, uVar9 < uVar13)) {
            do {
              if (*(int *)(local_f8[0] + (longlong)*(int *)(*plVar15 + uVar11 * 4) * 4) != -1) {
                FUN_146deaebc(local_f8 + 2,iVar5);
              }
              uVar11 = uVar11 + 1;
            } while (uVar13 != uVar11);
          }
          uVar17 = uVar17 + 1;
        } while (uVar9 != uVar13);
      }
      local_108 = local_108 & ~local_118._4_4_;
      FUN_1449c0562(&local_118);
    } while (local_120 != &local_98 || (local_110 != local_88 || iStack_104 != iVar7));
  }
  FUN_146db0be2(local_f8 + 2);
  FUN_146db13d4(local_f8 + 2);
  FUN_146db15b0();
  iVar7 = *(int *)(local_128 + 0x100);
  if (0 < iVar7) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      lVar16 = *(longlong *)(local_128 + 0x108);
      if (*(char *)(lVar16 + 0x10 + lVar10) == '\0') {
        lVar6 = (longlong)*(int *)(local_f8[0] + lVar14 * 4);
        if (lVar6 == -1) {
          uVar3 = 0xffffffff;
          *(undefined4 *)(lVar16 + lVar10) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(local_128 + 0x108) + 0xc + lVar10) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(local_128 + 0x108) + 4 + lVar10) = 0xffffffff;
        }
        else {
          lVar6 = lVar6 * 0x20;
          *(undefined4 *)(lVar16 + lVar10) = *(undefined4 *)(local_f8[2] + 0x10 + lVar6);
          *(undefined4 *)(*(longlong *)(local_128 + 0x108) + 0xc + lVar10) =
               *(undefined4 *)(local_c8 + 8 + (longlong)*(int *)(local_f8[2] + 0x10 + lVar6) * 0x18)
          ;
          *(undefined4 *)(*(longlong *)(local_128 + 0x108) + 4 + lVar10) =
               *(undefined4 *)(local_f8[2] + 0x14 + lVar6);
          uVar3 = *(undefined4 *)(local_f8[2] + 0x18 + lVar6);
        }
        *(undefined4 *)(*(longlong *)(local_128 + 0x108) + 8 + lVar10) = uVar3;
        iVar7 = *(int *)(local_128 + 0x100);
      }
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0x58;
    } while (lVar14 < iVar7);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146ded5dc(&local_98);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146deaf7a(local_f8 + 2);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146de9cf4 FUN_146de9cf4 body=268 status=ok
// SIG undefined FUN_146de9cf4(void)

void FUN_146de9cf4(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined1 param_8,
                  longlong param_9,longlong param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x108);
  lVar8 = (longlong)param_2 * 0x58;
  *(undefined8 *)(lVar3 + 0x28 + lVar8) = param_3[2];
  uVar7 = param_3[1];
  puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar8);
  *puVar1 = *param_3;
  puVar1[1] = uVar7;
  lVar3 = *(longlong *)(param_1 + 0x108);
  *(undefined8 *)(lVar3 + 0x40 + lVar8) = *(undefined8 *)(param_4 + 4);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  puVar2 = (undefined4 *)(lVar3 + 0x30 + lVar8);
  *puVar2 = *param_4;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (param_7 != '\0') {
    FUN_146de95a2(param_1,param_2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x13 + lVar8) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x48 + lVar8) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x108) + 0x4c + lVar8) = param_6;
  if (param_10 == 0 || param_9 == 0) {
    return;
  }
  FUN_146de9e00(param_1,param_2,param_9,param_10);
  return;
}



// FUNCTION 146de9e00 FUN_146de9e00 body=3234 status=ok
// SIG undefined FUN_146de9e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146de9e00(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  longlong lVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
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
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8 [12];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208 [12];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_e0;
  double dVar3;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  lVar12 = *(longlong *)(param_1 + 0xe8);
  lVar15 = (longlong)param_2;
  lVar11 = lVar15 * 0x310;
  dVar25 = *(double *)(lVar12 + 0x2d0 + lVar11);
  dVar1 = *(double *)(lVar12 + 0x2f8 + lVar11);
  if (((((dVar25 == 3.4028234663852886e+38) && (!NAN(dVar25))) && (dVar1 == 3.4028234663852886e+38))
      && (!NAN(dVar1))) || (*(char *)(param_1 + 0x67) != '\x01')) goto LAB_146dea00d;
  pdVar16 = (double *)(lVar12 + lVar11);
  if (((dVar25 != 3.4028234663852886e+38) || (NAN(dVar25))) &&
     (ABS(pdVar16[0x5c] + -3.4028234663852886e+38) <= 1e-08)) {
    pdVar16[0x5c] = pdVar16[6] * pdVar16[6] + pdVar16[4] * pdVar16[4] + pdVar16[5] * pdVar16[5];
    if (ABS(*(double *)(*(longlong *)(param_1 + 0xe8) + 0x2e0 + lVar11)) <= 1e-08) {
      *(double *)(*(longlong *)(param_1 + 0xe8) + lVar11 + 0x2e0) =
           pdVar16[0x12] * pdVar16[0x12] +
           pdVar16[0x10] * pdVar16[0x10] + pdVar16[0x11] * pdVar16[0x11];
    }
  }
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + lVar15 * 0x10);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 8 + lVar15 * 0x10);
  if ((((plVar7 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar7 + 0xc))) &&
      (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xd + (longlong)(int)plVar7[1] * 0x10) != '\0'))
     || (((plVar6 != (longlong *)0x0 && (1 < *(byte *)((longlong)plVar6 + 0xc))) &&
         (*(char *)(*(longlong *)(*plVar6 + 0x2c0) + 0xd + (longlong)(int)plVar6[1] * 0x10) != '\0')
         ))) goto LAB_146dea00d;
  dVar26 = *(double *)(param_4 + 0x80);
  dVar10 = *(double *)(param_4 + 0x88);
  dVar17 = *(double *)(param_4 + 0x90) * -1.0;
  dVar21 = *(double *)(param_4 + 0x98) * 1.0;
  dVar2 = *(double *)(param_4 + 0xd8);
  dVar3 = *(double *)(param_4 + 0xd8);
  dVar19 = *(double *)(param_4 + 0xc0);
  dVar18 = *(double *)(param_4 + 0xc0);
  dVar20 = (double)DAT_149931170;
  uVar29 = (undefined4)DAT_149931170;
  uVar30 = DAT_149931170._4_4_;
  dVar24 = DAT_149931170._8_8_;
  uVar31 = DAT_149931170._8_4_;
  uVar32 = DAT_149931170._12_4_;
  dVar22 = *(double *)(param_4 + 200);
  dVar27 = *(double *)(param_4 + 200);
  dVar28 = *(double *)(param_4 + 0xd0);
  dVar4 = *(double *)(param_4 + 0xd0);
  dVar23 = (dVar21 * dVar27 + (dVar18 * dVar17 * dVar24 - dVar3 * dVar10)) - dVar26 * dVar4 * 1.0;
  dVar3 = dVar17 * dVar4 * dVar24 + dVar10 * dVar27 + (dVar21 * dVar3 - dVar18 * dVar26 * dVar24);
  FUN_146deaaa4(param_4,&local_288);
  local_268._8_4_ = SUB84(dVar23,0);
  local_268._0_8_ =
       (dVar17 * dVar22 + (dVar19 * dVar21 * dVar20 - dVar2 * dVar26)) - dVar10 * dVar28 * -1.0;
  local_268._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  local_258._8_4_ = SUB84(dVar3,0);
  local_258._0_8_ =
       dVar21 * dVar28 * dVar20 + dVar26 * dVar22 + (dVar17 * dVar2 - dVar19 * dVar10 * dVar20);
  local_258._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_248 = local_288;
  uStack_240 = uStack_280;
  local_238 = local_278;
  uStack_230 = 0;
  local_228 = 0x3ff0000000000000;
  uStack_220 = 0x3ff0000000000000;
  local_218 = 0x3ff0000000000000;
  uStack_210 = 0;
  FUN_1447dc19e(pdVar16,local_208);
  dVar26 = *(double *)(param_3 + 0x80);
  dVar10 = *(double *)(param_3 + 0x88);
  dVar17 = *(double *)(param_3 + 0x90) * -1.0;
  dVar21 = *(double *)(param_3 + 0x98) * 1.0;
  dVar2 = *(double *)(param_3 + 0xd8);
  dVar3 = *(double *)(param_3 + 0xd8);
  dVar19 = *(double *)(param_3 + 0xc0);
  dVar18 = *(double *)(param_3 + 0xc0);
  dVar27 = *(double *)(param_3 + 200);
  dVar22 = *(double *)(param_3 + 200);
  dVar28 = *(double *)(param_3 + 0xd0);
  dVar4 = *(double *)(param_3 + 0xd0);
  dVar23 = (dVar21 * dVar22 + (dVar18 * dVar17 * dVar24 - dVar3 * dVar10)) - dVar26 * dVar4 * 1.0;
  dVar3 = dVar17 * dVar4 * dVar24 + dVar10 * dVar22 + (dVar21 * dVar3 - dVar18 * dVar26 * dVar24);
  FUN_146deaaa4(param_3,&local_368);
  local_348._8_4_ = SUB84(dVar23,0);
  local_348._0_8_ =
       (dVar17 * dVar27 + (dVar19 * dVar21 * dVar20 - dVar2 * dVar26)) - dVar10 * dVar28 * -1.0;
  local_348._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  local_338._8_4_ = SUB84(dVar3,0);
  local_338._0_8_ =
       dVar21 * dVar28 * dVar20 + dVar26 * dVar27 + (dVar17 * dVar2 - dVar19 * dVar10 * dVar20);
  local_338._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_328 = local_368;
  uStack_320 = uStack_360;
  local_318 = local_358;
  uStack_310 = 0;
  local_308 = 0x3ff0000000000000;
  uStack_300 = 0x3ff0000000000000;
  local_2f8 = 0x3ff0000000000000;
  uStack_2f0 = 0;
  FUN_1447dc19e(pdVar16 + 0xc);
  lVar12 = 0x50;
  do {
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x10) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x18) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x20) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x28) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x30) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x38) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x40) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x48) = 0;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_208 + lVar12 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(local_1a8 + lVar12) = 0x3ff0000000000000;
    *(undefined8 *)(local_1a8 + lVar12 + 8) = 0;
    lVar12 = lVar12 + 0x60;
  } while (lVar12 != 0x110);
  pdVar13 = local_2e8;
  pdVar14 = (double *)local_1a8;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar14 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar14 = pdVar14 + 1;
  }
  pdVar13 = local_208;
  pdVar14 = local_148;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar14 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar14 = pdVar14 + 1;
  }
  dVar2 = local_1a8._0_8_;
  local_398 = local_148[0];
  dStack_390 = local_148[1];
  local_3a8 = local_148[2];
  uStack_3a0 = 0;
  local_3b8 = local_148[3];
  uStack_3b0 = 0;
  if ((dVar25 != 3.4028234663852886e+38) || (NAN(dVar25))) {
    local_3c8 = local_188;
    dStack_3c0 = dStack_180;
    local_128 = local_128 - local_188;
    dStack_120 = dStack_120 - dStack_180;
    local_118 = local_118 - local_178;
    dVar18 = -dVar2;
    dVar22 = -local_1a8._8_8_;
    local_388 = local_198;
    dStack_380 = dStack_190;
    dVar27 = local_198 * -1.0;
    dVar28 = dStack_190 * 1.0;
    dVar25 = dStack_120 * dVar18 - dVar22 * local_128;
    dVar3 = local_118 * dVar22 - dVar27 * dStack_120;
    dVar19 = local_128 * dVar27 - local_118 * dVar18;
    dVar3 = dVar3 + dVar3;
    dVar19 = dVar19 + dVar19;
    dVar25 = dVar25 + dVar25;
    local_208[2] = dVar25 * dVar28 + local_118 + (dVar19 * dVar18 - dVar3 * dVar22);
    local_208[0] = (dVar25 * dVar22 - dVar19 * dVar27) + dVar28 * dVar3 + local_128;
    local_208[1] = dVar2 * dVar25 + dVar27 * dVar3 + dVar28 * dVar19 + dStack_120;
    lVar12 = 0;
    do {
      if ((*(char *)((longlong)pdVar16 + lVar12 + 0x1d8) != '\x01') ||
         (*(int *)((longlong)pdVar16 + lVar12 * 4 + 0xfc) == 2)) {
        local_208[lVar12] = 0.0;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    local_378 = local_1a8;
    dVar25 = local_208[2] - pdVar16[0x37];
    if (pdVar16[0x5a] * pdVar16[0x5a] * pdVar16[0x5c] <
        dVar25 * dVar25 +
        (local_208[0] - pdVar16[0x35]) * (local_208[0] - pdVar16[0x35]) +
        (local_208[1] - pdVar16[0x36]) * (local_208[1] - pdVar16[0x36])) {
      iVar5 = *(int *)(pdVar16 + 0x5b);
      if (iVar5 == 0) {
LAB_146dea796:
        pdVar16[0x37] = local_208[2];
        pdVar16[0x35] = local_208[0];
        pdVar16[0x36] = local_208[1];
        *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x14 + lVar15 * 0x58) = 1;
      }
      else {
        dVar19 = pdVar16[0x35] - pdVar16[4];
        dVar4 = pdVar16[0x36] - pdVar16[5];
        dVar17 = pdVar16[0x37] - pdVar16[6];
        dVar25 = -*pdVar16;
        dVar3 = -pdVar16[1];
        dVar20 = pdVar16[2] * -1.0;
        dVar24 = pdVar16[3] * 1.0;
        dVar26 = dVar19 * dVar20 - dVar25 * dVar17;
        dVar21 = dVar4 * dVar25 - dVar19 * dVar3;
        dVar23 = dVar17 * dVar3 - dVar4 * dVar20;
        dVar23 = dVar23 + dVar23;
        dVar26 = dVar26 + dVar26;
        local_3d8 = local_178;
        uStack_3d0 = uStack_170;
        dVar21 = dVar21 + dVar21;
        dVar17 = dVar24 * dVar21 + dVar17 + (dVar26 * dVar25 - dVar23 * dVar3);
        dVar19 = (dVar21 * dVar3 - dVar26 * dVar20) + dVar24 * dVar23 + dVar19;
        dVar4 = *pdVar16 * dVar21 + dVar20 * dVar23 + dVar24 * dVar26 + dVar4;
        local_188 = *(double *)(param_4 + 0x110) - local_188;
        dStack_180 = *(double *)(param_4 + 0x118) - dStack_180;
        local_178 = *(double *)(param_4 + 0x120) - local_178;
        dVar25 = dStack_180 * dVar18 - dVar22 * local_188;
        dVar24 = local_178 * dVar22 - dVar27 * dStack_180;
        dVar20 = local_188 * dVar27 - local_178 * dVar18;
        dVar24 = dVar24 + dVar24;
        dVar20 = dVar20 + dVar20;
        dVar25 = dVar25 + dVar25;
        dVar3 = dVar25 * dVar28 + local_178 + (dVar20 * dVar18 - dVar24 * dVar22);
        dVar22 = (dVar25 * dVar22 - dVar20 * dVar27) + dVar28 * dVar24 + local_188;
        dVar25 = (dVar27 * dVar24 - dVar18 * dVar25) + dVar28 * dVar20 + dStack_180;
        if (iVar5 == 2) {
          uVar29 = 0;
          uVar30 = 0x3ff00000;
          uVar31 = 0;
          uVar32 = 0xbff00000;
          if (dVar17 * dVar17 + dVar19 * dVar19 + dVar4 * dVar4 <
              dVar3 * dVar3 + dVar22 * dVar22 + dVar25 * dVar25) goto LAB_146dea796;
        }
        else {
          uVar29 = 0;
          uVar30 = 0x3ff00000;
          uVar31 = 0;
          uVar32 = 0xbff00000;
          if ((iVar5 == 1) &&
             (dVar3 * dVar3 + dVar22 * dVar22 + dVar25 * dVar25 <
              dVar17 * dVar17 + dVar19 * dVar19 + dVar4 * dVar4)) goto LAB_146dea796;
        }
      }
    }
  }
  if ((dVar1 != 3.4028234663852886e+38) || (NAN(dVar1))) {
    local_2e8[3] = (double)(&DAT_149931160)
                           [0.0 <= dStack_190 * local_148[3] +
                                   local_198 * local_148[2] +
                                   dVar2 * local_148[0] + local_148[1] * local_1a8._8_8_];
    local_2e8[0] = local_148[0] * local_2e8[3];
    local_2e8[1] = local_148[1] * local_2e8[3];
    local_2e8[2] = local_148[2] * local_2e8[3];
    local_2e8[3] = local_148[3] * local_2e8[3];
    local_208[2] = 0.0;
    local_208[3] = 0.0;
    local_208[0] = 0.0;
    local_208[1] = 0.0;
    local_258 = ZEXT816(0);
    local_268 = ZEXT816(0);
    local_348 = local_1a8;
    local_338._8_8_ = dStack_190;
    local_338._0_8_ = local_198;
    FUN_146deaca2();
    if (((*(char *)(pdVar16 + 0x4d) == '\0') && (*(char *)((longlong)pdVar16 + 0x26a) != '\x01')) ||
       (*(int *)(pdVar16 + 0x22) == 2)) {
      local_258._8_8_ = DAT_14c8463e8;
      local_258._0_8_ = DAT_14c8463e0;
      local_268._8_8_ = DAT_14c8463d8;
      local_268._0_8_ = DAT_14c8463d0;
    }
    if (((*(char *)(pdVar16 + 0x4d) == '\0') && (*(char *)((longlong)pdVar16 + 0x26c) != '\x01')) ||
       ((*(int *)(pdVar16 + 0x23) == 2 && (*(int *)((longlong)pdVar16 + 0x114) == 2)))) {
      local_208[2] = DAT_14c8463e0;
      local_208[3] = DAT_14c8463e8;
      local_208[0] = DAT_14c8463d0;
      local_208[1] = DAT_14c8463d8;
    }
    dVar2 = (double)local_268._8_8_ * local_208[2] * -1.0 +
            (double)local_258._0_8_ * local_208[1] +
            local_208[0] * (double)local_258._8_8_ * (double)CONCAT44(uVar30,uVar29) +
            local_208[3] * (double)local_268._0_8_;
    dVar3 = (double)local_268._0_8_ * local_208[2] * 1.0 +
            (double)local_258._8_8_ * local_208[1] +
            local_208[0] * (double)local_258._0_8_ * (double)CONCAT44(uVar32,uVar31) +
            local_208[3] * (double)local_268._8_8_;
    dVar25 = (double)local_258._8_8_ * local_208[2] * (double)CONCAT44(uVar30,uVar29) +
             ((local_208[0] * (double)local_268._8_8_ * (double)CONCAT44(uVar30,uVar29) +
              local_208[3] * (double)local_258._0_8_) - local_208[1] * (double)local_268._0_8_);
    dVar1 = (double)local_258._0_8_ * local_208[2] * (double)CONCAT44(uVar32,uVar31) +
            ((local_208[0] * (double)local_268._0_8_ * (double)CONCAT44(uVar32,uVar31) +
             local_208[3] * (double)local_258._8_8_) - local_208[1] * (double)local_268._8_8_);
    dVar19 = dVar1 * pdVar16[0x49] +
             pdVar16[0x48] * dVar25 + pdVar16[0x46] * dVar2 + dVar3 * pdVar16[0x47];
    dVar18 = (dVar19 + dVar19) * dVar19 + -1.0;
    dVar19 = dVar18;
    if (1.0 <= dVar18) {
      dVar19 = 1.0;
    }
    dVar19 = acos((double)(-(ulonglong)(dVar18 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar18 < -1.0) & (ulonglong)dVar19));
    if (pdVar16[0x5f] <= dVar19 && dVar19 != pdVar16[0x5f]) {
      auVar9._8_4_ = SUB84(dVar3,0);
      auVar9._0_8_ = dVar2;
      auVar9._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(pdVar16 + 0x46) = auVar9;
      auVar8._8_4_ = SUB84(dVar1,0);
      auVar8._0_8_ = dVar25;
      auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(pdVar16 + 0x48) = auVar8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x14 + lVar15 * 0x58) = 1;
    }
  }
LAB_146dea00d:
  if ((local_e0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146deaaa4 FUN_146deaaa4 body=509 status=ok
// SIG undefined FUN_146deaaa4(void)

double * FUN_146deaaa4(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  double dVar4;
  double dVar6;
  
  dVar15 = *(double *)(param_1 + 0x80);
  dVar8 = *(double *)(param_1 + 0x88);
  dVar9 = *(double *)(param_1 + 0x90) * -1.0;
  dVar11 = *(double *)(param_1 + 0x98) * 1.0;
  dVar1 = *(double *)(param_1 + 0xd8);
  dVar2 = *(double *)(param_1 + 0xd8);
  dVar3 = *(double *)(param_1 + 0xc0);
  dVar4 = *(double *)(param_1 + 0xc0);
  dVar5 = *(double *)(param_1 + 200);
  dVar6 = *(double *)(param_1 + 200);
  dVar7 = *(double *)(param_1 + 0xd0);
  dVar14 = *(double *)(param_1 + 0xd0);
  dVar10 = (dVar9 * dVar5 + (dVar3 * dVar11 * 1.0 - dVar1 * dVar15)) - dVar8 * dVar7 * -1.0;
  dVar12 = (dVar11 * dVar6 + (dVar4 * dVar9 * -1.0 - dVar2 * dVar8)) - dVar15 * dVar14 * 1.0;
  dVar13 = dVar11 * dVar7 * 1.0 + dVar15 * dVar5 + (dVar9 * dVar1 - dVar3 * dVar8 * 1.0);
  dVar14 = dVar9 * dVar14 * -1.0 + dVar8 * dVar6 + (dVar11 * dVar2 - dVar4 * dVar15 * -1.0);
  dVar2 = *(double *)(param_1 + 0xe0);
  dVar1 = *(double *)(param_1 + 0xe8);
  dVar3 = *(double *)(param_1 + 0xf0);
  dVar6 = dVar12 * dVar3 - dVar1 * dVar13;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar10 * dVar1 - dVar2 * dVar12;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar13 * dVar2 - dVar3 * dVar10;
  dVar15 = dVar15 + dVar15;
  dVar4 = *(double *)(param_1 + 0x120);
  dVar5 = *(double *)(param_1 + 0x118);
  *param_2 = *(double *)(param_1 + 0x110) -
             ((dVar12 * dVar7 - dVar15 * dVar13) + dVar14 * dVar6 + dVar2);
  param_2[1] = dVar5 - ((dVar13 * dVar6 - dVar7 * dVar10) + dVar14 * dVar15 + dVar1);
  param_2[2] = dVar4 - ((dVar10 * dVar15 - dVar6 * dVar12) + dVar14 * dVar7 + dVar3);
  return param_2;
}



// FUNCTION 146deaca2 FUN_146deaca2 body=538 status=ok
// SIG undefined FUN_146deaca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146deaca2(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  
  dVar3 = param_1[2] * -1.0;
  dVar5 = param_1[3] * 1.0;
  dVar10 = *param_2;
  dVar13 = param_2[1];
  dVar7 = param_2[2];
  dVar9 = param_2[3];
  dVar4 = param_1[1];
  dVar6 = param_1[1];
  dVar1 = dVar13 * dVar3 * -1.0 + ((dVar10 * dVar5 - *param_1 * dVar9 * 1.0) - dVar7 * dVar4);
  dVar2 = dVar10 * dVar3 * 1.0 + ((dVar13 * dVar5 - *param_1 * dVar7 * -1.0) - dVar9 * dVar6);
  dVar4 = dVar9 * dVar3 * 1.0 + dVar4 * dVar10 + (dVar5 * dVar7 - *param_1 * dVar13 * 1.0);
  dVar6 = dVar7 * dVar3 * -1.0 + dVar6 * dVar13 + (dVar5 * dVar9 - *param_1 * dVar10 * -1.0);
  if ((dVar1 != 0.0) ||
     (auVar8 = _DAT_14c8463e0, dVar10 = DAT_14c8463d0, dVar13 = DAT_14c8463d8, NAN(dVar1))) {
    dVar10 = dVar1 * dVar1 + 0.0;
    dVar13 = dVar6 * dVar6 + 0.0;
    auVar11._0_8_ = dVar10 + dVar13;
    auVar11._8_8_ = dVar10 + dVar13;
    auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar12 = sqrtpd(auVar11,auVar11);
    auVar12 = divpd(_DAT_149934d80,auVar12);
    auVar14._0_8_ = auVar12._0_8_ * 0.0;
    auVar14._8_8_ = auVar12._8_8_ * dVar6;
    auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar8);
    dVar10 = (double)((ulonglong)(dVar1 * auVar12._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
    dVar13 = (double)((ulonglong)(auVar12._8_8_ * 0.0) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_));
  }
  *param_4 = dVar10;
  param_4[1] = dVar13;
  *(undefined1 (*) [16])(param_4 + 2) = auVar8;
  dVar7 = auVar8._0_8_ * -1.0;
  dVar9 = auVar8._8_8_ * 1.0;
  *param_3 = (dVar7 * dVar2 + (dVar1 * dVar9 * 1.0 - dVar6 * dVar10)) - dVar13 * dVar4 * -1.0;
  param_3[1] = (dVar9 * dVar2 + (dVar1 * dVar7 * -1.0 - dVar6 * dVar13)) - dVar10 * dVar4 * 1.0;
  param_3[2] = dVar9 * dVar4 * 1.0 + dVar2 * dVar10 + (dVar6 * dVar7 - dVar1 * dVar13 * 1.0);
  param_3[3] = dVar7 * dVar4 * -1.0 + dVar2 * dVar13 + (dVar6 * dVar9 - dVar1 * dVar10 * -1.0);
  return;
}



// FUNCTION 146deaebc FUN_146deaebc body=190 status=ok
// SIG undefined FUN_146deaebc(void)

void FUN_146deaebc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_146ded556(param_1 + 2,iVar1);
  }
  *(ulonglong *)(param_1[2] + (longlong)iVar1 * 8) = CONCAT44(param_3,param_2);
  lVar3 = *param_1;
  lVar4 = (longlong)param_2 * 0x20;
  iVar2 = *(int *)(lVar3 + 8 + lVar4);
  *(uint *)(lVar3 + 8 + lVar4) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xc + lVar4) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + lVar4),iVar2);
  }
  *(int *)(*(longlong *)(lVar3 + lVar4) + (longlong)iVar2 * 4) = iVar1;
  lVar3 = *param_1;
  lVar4 = (longlong)param_3 * 0x20;
  iVar2 = *(int *)(lVar3 + 8 + lVar4);
  *(uint *)(lVar3 + 8 + lVar4) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xc + lVar4) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + lVar4),iVar2);
  }
  *(int *)(*(longlong *)(lVar3 + lVar4) + (longlong)iVar2 * 4) = iVar1;
  return;
}



// FUNCTION 146deaf7a FUN_146deaf7a body=84 status=ok
// SIG undefined FUN_146deaf7a(void)

void FUN_146deaf7a(longlong *param_1)

{
  FUN_146db6d75(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146ded74a(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146deafce FUN_146deafce body=626 status=ok
// SIG undefined FUN_146deafce(void)

void FUN_146deafce(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar11 = *param_2;
  dVar1 = param_2[1];
  dVar12 = *param_3;
  dVar10 = param_3[1];
  if (dVar10 <= dVar12) {
    if (ABS(dVar1) < 9.999999974752427e-07) {
      dVar14 = 0.0;
      dVar8 = (double)(~-(ulonglong)(0.0 < dVar11) & (ulonglong)-dVar12 |
                      (ulonglong)dVar12 & -(ulonglong)(0.0 < dVar11));
      goto LAB_146deb1ec;
    }
  }
  else if (ABS(dVar11) < 9.999999974752427e-07) {
    dVar8 = 0.0;
    dVar14 = (double)(~-(ulonglong)(0.0 < dVar1) & (ulonglong)-dVar10 |
                     (ulonglong)dVar10 & -(ulonglong)(0.0 < dVar1));
    goto LAB_146deb1ec;
  }
  dVar3 = dVar10 * dVar10;
  dVar2 = dVar12 * dVar12;
  dVar15 = ABS(dVar1) * dVar10;
  dVar13 = ABS(dVar11) * dVar12;
  dVar14 = dVar15 - dVar3;
  dVar4 = dVar13 - dVar2;
  if (dVar4 <= dVar14) {
    dVar4 = dVar14;
  }
  iVar7 = 0x14;
  do {
    dVar14 = 1.0 / (dVar3 + dVar4);
    dVar8 = 1.0 / (dVar2 + dVar4);
    dVar6 = dVar15 * dVar14;
    dVar5 = dVar13 * dVar8;
    dVar6 = dVar6 * dVar6;
    dVar5 = dVar5 * dVar5;
    dVar9 = dVar5 + dVar6 + -1.0;
    if (dVar9 < 9.999999747378752e-05) {
      dVar14 = dVar1 * dVar3 * dVar14;
      dVar8 = dVar11 * dVar2 * dVar8;
      goto LAB_146deb1ec;
    }
    dVar5 = dVar5 * dVar8 + dVar6 * dVar14;
    dVar4 = dVar4 + dVar9 / (dVar5 + dVar5);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  dVar14 = dVar1 * dVar3 * dVar14;
  dVar8 = dVar11 * dVar2 * dVar8;
  dVar10 = dVar14 / dVar10;
  dVar12 = dVar8 / dVar12;
  dVar11 = SQRT(dVar12 * dVar12 + dVar10 * dVar10);
  dVar14 = dVar14 / dVar11;
  dVar8 = dVar8 / dVar11;
LAB_146deb1ec:
  *param_1 = dVar8;
  param_1[1] = dVar14;
  return;
}



// FUNCTION 146deb240 FUN_146deb240 body=600 status=ok
// SIG undefined FUN_146deb240(void)

void FUN_146deb240(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  
  dVar9 = *param_1;
  dVar1 = param_1[1];
  dVar5 = param_1[2];
  dVar3 = dVar5 * dVar5 + dVar9 * dVar9 + dVar1 * dVar1;
  dVar2 = 1.0 - dVar3;
  dVar7 = 1.0 / (dVar3 + 1.0);
  dVar4 = (dVar2 + dVar2) * dVar7 * dVar7;
  dVar6 = param_2[1];
  dVar8 = param_2[2];
  dVar9 = dVar5 * dVar8 + dVar9 * *param_2 + dVar1 * dVar6;
  dVar7 = (3.0 - dVar3) * dVar9 * -4.0 * dVar7 * dVar7 * dVar7;
  dVar9 = dVar2 * dVar7 - (dVar9 + dVar9) * dVar4;
  dVar3 = (dVar5 + dVar5) * dVar7 + (dVar8 + dVar8) * dVar4;
  dVar8 = dVar7 * dVar1 * -2.0 - (dVar6 + dVar6) * dVar4;
  dVar6 = dVar8 * dVar8 + dVar9 * dVar9 + dVar3 * dVar3;
  if (9.99999993922529e-09 < dVar6) {
    dVar7 = dVar2 * dVar4 + -1.0;
    dVar2 = dVar1 * -2.0 * dVar4;
    dVar4 = (dVar5 + dVar5) * dVar4;
    dVar5 = 1.0 / SQRT(dVar6);
    dVar1 = dVar7 * dVar3 * dVar5 - dVar9 * dVar5 * dVar4;
    dVar6 = dVar2 * dVar9 * dVar5 - dVar8 * dVar5 * dVar7;
    dVar9 = dVar4 * dVar8 * dVar5 - dVar3 * dVar5 * dVar2;
    *param_4 = dVar9;
    param_4[1] = dVar6;
    param_4[2] = dVar1;
    *param_5 = -((dVar7 * dVar6 - dVar9 * dVar4) * param_3[2] +
                (dVar4 * dVar1 - dVar6 * dVar2) * *param_3 +
                (dVar2 * dVar9 - dVar1 * dVar7) * param_3[1]);
  }
  return;
}



// FUNCTION 146deb498 FUN_146deb498 body=125 status=ok
// SIG undefined FUN_146deb498(void)

void FUN_146deb498(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  *param_4 = 0.0;
  dVar1 = param_2[2] - param_1[2];
  dVar2 = param_2[1] - param_1[1];
  dVar3 = *param_2 - *param_1;
  dVar4 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  if (9.999999747378752e-05 < dVar4) {
    *param_3 = dVar3 / dVar4;
    param_3[1] = dVar2 / dVar4;
    param_3[2] = dVar1 / dVar4;
    *param_4 = dVar4;
  }
  return;
}



// FUNCTION 146deb516 FUN_146deb516 body=442 status=ok
// SIG undefined FUN_146deb516(void)

void FUN_146deb516(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8)

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
  longlong lVar10;
  undefined1 auStack_108 [32];
  double local_e8 [17];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_5[2] = 0.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  *param_6 = 0.0;
  param_7[2] = 0.0;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  *param_8 = 0.0;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar3 = param_3[1];
  dVar4 = param_2[1];
  dVar5 = *param_3;
  dVar6 = *param_2;
  local_e8[0xe] = 0.0;
  local_e8[0xf] = 0.0;
  local_e8[0xc] = 0.0;
  local_e8[0xd] = 0.0;
  local_e8[10] = 0.0;
  local_e8[0xb] = 0.0;
  local_e8[8] = 0.0;
  local_e8[9] = 0.0;
  local_e8[6] = 0.0;
  local_e8[7] = 0.0;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  FUN_14076d742();
  lVar10 = (longlong)param_4;
  dVar7 = local_e8[lVar10 * 4 + 2];
  dVar8 = local_e8[lVar10 * 4];
  dVar9 = local_e8[lVar10 * 4 + 1];
  *param_5 = dVar8;
  param_5[1] = dVar9;
  param_5[2] = dVar7;
  dVar7 = dVar7 * (dVar1 - dVar2) + dVar8 * (dVar5 - dVar6) + dVar9 * (dVar3 - dVar4);
  *param_6 = dVar7;
  dVar2 = (dVar1 - dVar2) - dVar7 * param_5[2];
  dVar3 = (dVar3 - dVar4) - param_5[1] * dVar7;
  dVar4 = (dVar5 - dVar6) - *param_5 * dVar7;
  dVar1 = SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3);
  if (9.999999747378752e-05 < dVar1) {
    *param_7 = dVar4 / dVar1;
    param_7[1] = dVar3 / dVar1;
    param_7[2] = dVar2 / dVar1;
    *param_8 = dVar1;
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146deb6d2 FUN_146deb6d2 body=236 status=ok
// SIG undefined FUN_146deb6d2(void)

void FUN_146deb6d2(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  double local_b8 [17];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  FUN_14076d742();
  lVar4 = (longlong)param_4;
  dVar1 = local_b8[lVar4 * 4 + 2];
  dVar2 = local_b8[lVar4 * 4];
  dVar3 = local_b8[lVar4 * 4 + 1];
  *param_5 = dVar2;
  param_5[1] = dVar3;
  param_5[2] = dVar1;
  *param_6 = (param_3[2] - param_2[2]) * dVar1 +
             (*param_3 - *param_2) * dVar2 + (param_3[1] - param_2[1]) * dVar3;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146deb7c0 FUN_146deb7c0 body=644 status=ok
// SIG undefined FUN_146deb7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146deb7c0(undefined8 param_1,double *param_2,double *param_3,ulonglong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  ulonglong uVar7;
  double dVar9;
  undefined1 auVar8 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  FUN_146deaca2(param_1,param_2,local_d8,&local_b8);
  dVar12 = local_b8;
  dVar6 = param_2[2];
  dVar9 = *param_2;
  dVar1 = param_2[1];
  dVar10 = dVar6 - dVar9 * 0.0;
  dVar11 = dVar9 * 0.0 - dVar1;
  dVar3 = dVar1 * 0.0 + dVar6 * -0.0;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  dVar3 = dVar3 + dVar3;
  dVar2 = param_2[3];
  *param_3 = (dVar1 * dVar11 - dVar10 * dVar6) + dVar3 * dVar2 + 1.0;
  param_3[1] = (dVar6 * dVar3 - dVar11 * dVar9) + dVar2 * dVar10 + 0.0;
  param_3[2] = (dVar9 * dVar10 - dVar3 * dVar1) + dVar2 * dVar11 + 0.0;
  auVar13._0_8_ = local_b8 * local_b8;
  auVar13._8_8_ = dStack_b0 * dStack_b0;
  dVar6 = local_a8 * local_a8 + auVar13._0_8_;
  dVar9 = dStack_a0 * dStack_a0 + auVar13._8_8_;
  auVar8._0_8_ = dVar6 + dVar9;
  auVar8._8_8_ = dVar6 + dVar9;
  auVar4 = sqrtpd(auVar13,auVar8);
  auVar13 = divpd(_DAT_149934d80,auVar4);
  auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar4._8_8_ = dStack_a0 * auVar13._8_8_;
  auVar4._0_8_ = local_a8 * auVar13._0_8_;
  auVar4 = blendvpd(_DAT_149935300,auVar4,auVar5);
  dVar9 = auVar4._8_8_;
  dVar6 = dVar9;
  if (1.0 <= dVar9) {
    dVar6 = 1.0;
  }
  dVar6 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar6));
  dVar6 = dVar6 + dVar6;
  uVar7 = ~-(ulonglong)(3.1415927410125732 < dVar6) & (ulonglong)dVar6 |
          (ulonglong)(dVar6 + -6.2831854820251465) & -(ulonglong)(3.1415927410125732 < dVar6);
  if ((-(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_) & 1) == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar12 * auVar13._0_8_;
  }
  *param_4 = -(ulonglong)(dVar12 < 0.0) & (uVar7 ^ 0x8000000000000000) |
             ~-(ulonglong)(dVar12 < 0.0) & uVar7;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146deba46 FUN_146deba46 body=205 status=ok
// SIG undefined FUN_146deba46(void)

void FUN_146deba46(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1[3];
  dVar3 = dVar2;
  if (1.0 <= dVar2) {
    dVar3 = 1.0;
  }
  dVar2 = acos((double)(~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3 |
                       -(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000));
  *param_3 = dVar2 + dVar2;
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (dVar4 <= 9.999999974752427e-07) {
    param_2[2] = param_4[2];
    dVar2 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = dVar2;
  }
  else {
    dVar4 = 1.0 / SQRT(dVar4);
    *param_2 = dVar2 * dVar4;
    param_2[1] = dVar3 * dVar4;
    param_2[2] = dVar1 * dVar4;
  }
  return;
}



// FUNCTION 146debb14 FUN_146debb14 body=241 status=ok
// SIG undefined FUN_146debb14(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146debb14(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  double *param_5)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_a0 [5];
  undefined1 local_78 [40];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0[3] = 0.0;
  local_a0[4] = 0.0;
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  FUN_146deaca2(param_1,param_2,local_a0 + 1,local_78);
  local_a0[0] = 0.0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x3ff0000000000000;
  FUN_146deba46(local_a0 + 1,param_4,local_a0);
  *param_5 = 0.0;
  if (local_a0[0] <= param_3) {
    if (-param_3 <= local_a0[0]) goto LAB_146debbb5;
    param_3 = local_a0[0] + param_3;
  }
  else {
    param_3 = local_a0[0] - param_3;
  }
  *param_5 = param_3;
LAB_146debbb5:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146debc06 FUN_146debc06 body=903 status=ok
// SIG undefined FUN_146debc06(void)

void FUN_146debc06(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
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
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [40];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (ABS(param_3 - param_4) <= 0.001) {
    local_178 = param_6;
    FUN_146debb14(ABS(param_3 - param_4),0x3f50624dd2f1a9fc,param_3,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_198);
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0x3ff0000000000000;
  *param_6 = 0;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  FUN_146deaca2(0,0x3f50624dd2f1a9fc,&local_f8,local_d8);
  dVar3 = dStack_e0;
  dVar2 = local_e8;
  dVar5 = dStack_e0 + 1.0;
  dVar4 = (double)FUN_144afd35e(local_e8,dVar5);
  dVar1 = dStack_f0;
  dVar4 = dVar4 * 4.0;
  local_108 = (double)FUN_144afd35e(dStack_f0,dVar5);
  local_108 = local_108 * 4.0;
  local_118 = param_3;
  local_110 = param_4;
  local_100 = dVar4;
  if (1.0 < (local_108 / param_3) * (local_108 / param_3) + (dVar4 / param_4) * (dVar4 / param_4)) {
    FUN_146deafce(&local_128,&local_108,&local_118);
    dVar5 = dVar2 - local_f8 * 0.0;
    dVar4 = local_f8 * 0.0 - dVar1;
    dVar6 = dVar1 * 0.0 + dVar2 * -0.0;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    dVar6 = dVar6 + dVar6;
    local_130 = (local_f8 * dVar5 - dVar6 * dVar1) + dVar3 * dVar4 + 0.0;
    local_138 = (dVar2 * dVar6 - dVar4 * local_f8) + dVar3 * dVar5 + 0.0;
    local_140 = (dVar1 * dVar4 - dVar5 * dVar2) + dVar3 * dVar6 + 1.0;
    dVar5 = tan(local_120 * 0.25);
    local_150 = tan(local_128 * 0.25);
    local_158 = 0;
    local_170 = 0;
    local_178 = param_6;
    local_168 = local_128 / (param_3 * param_3);
    local_160 = local_120 / (param_4 * param_4);
    local_148 = dVar5;
    FUN_146deb240(&local_158,&local_170,&local_140,param_5);
  }
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146debf8e FUN_146debf8e body=669 status=ok
// SIG undefined FUN_146debf8e(void)

void FUN_146debf8e(double *param_1,double *param_2,int param_3,double *param_4,double *param_5)

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
  double dVar11;
  uint uVar12;
  uint uVar13;
  
  dVar6 = param_2[2];
  dVar7 = *param_2;
  dVar11 = param_2[1];
  dVar10 = dVar6 - dVar7 * 0.0;
  dVar1 = dVar7 * 0.0 - dVar11;
  dVar2 = dVar11 * 0.0 + dVar6 * -0.0;
  dVar1 = dVar1 + dVar1;
  dVar10 = dVar10 + dVar10;
  dVar2 = dVar2 + dVar2;
  dVar8 = param_2[3];
  uVar12 = 0x3ff00000;
  dVar5 = (dVar7 * dVar10 - dVar2 * dVar11) + dVar8 * dVar1 + 0.0;
  dVar7 = (dVar6 * dVar2 - dVar1 * dVar7) + dVar8 * dVar10 + 0.0;
  dVar6 = (dVar11 * dVar1 - dVar10 * dVar6) + dVar2 * dVar8 + 1.0;
  if (param_3 == 2) {
    uVar13 = 0;
  }
  else {
    uVar13 = uVar12;
    uVar12 = 0;
  }
  dVar11 = param_1[2];
  dVar8 = *param_1;
  dVar1 = param_1[1];
  dVar3 = dVar8 * (double)((ulonglong)uVar12 << 0x20) + dVar1 * -0.0;
  dVar10 = dVar11 * 0.0 - (double)((ulonglong)uVar13 << 0x20) * dVar8;
  dVar4 = dVar1 * (double)((ulonglong)uVar13 << 0x20) - (double)((ulonglong)uVar12 << 0x20) * dVar11
  ;
  dVar3 = dVar3 + dVar3;
  dVar10 = dVar10 + dVar10;
  dVar4 = dVar4 + dVar4;
  dVar2 = param_1[3];
  dVar9 = (dVar8 * dVar10 - dVar4 * dVar1) + dVar2 * dVar3 + (double)((ulonglong)uVar13 << 0x20);
  dVar8 = (dVar11 * dVar4 - dVar3 * dVar8) + dVar2 * dVar10 + (double)((ulonglong)uVar12 << 0x20);
  dVar11 = (dVar1 * dVar3 - dVar10 * dVar11) + dVar4 * dVar2 + 0.0;
  *param_4 = dVar8 * dVar5 - dVar7 * dVar9;
  param_4[1] = dVar9 * dVar6 - dVar5 * dVar11;
  param_4[2] = dVar11 * dVar7 - dVar6 * dVar8;
  *param_5 = -(dVar9 * dVar5 + dVar11 * dVar6 + dVar7 * dVar8);
  return;
}



// FUNCTION 146dec22c FUN_146dec22c body=874 status=ok
// SIG undefined FUN_146dec22c(void)

void FUN_146dec22c(double *param_1,double *param_2,int param_3,double *param_4,double *param_5)

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
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  
  dVar9 = param_2[2];
  dVar10 = *param_2;
  dVar1 = param_2[1];
  dVar11 = dVar9 - dVar10 * 0.0;
  dVar3 = dVar10 * 0.0 - dVar1;
  dVar4 = dVar1 * 0.0 + dVar9 * -0.0;
  dVar3 = dVar3 + dVar3;
  dVar11 = dVar11 + dVar11;
  dVar4 = dVar4 + dVar4;
  dVar2 = param_2[3];
  uVar13 = 0x3ff00000;
  dVar8 = (dVar10 * dVar11 - dVar4 * dVar1) + dVar2 * dVar3 + 0.0;
  dVar10 = (dVar9 * dVar4 - dVar3 * dVar10) + dVar2 * dVar11 + 0.0;
  dVar9 = (dVar1 * dVar3 - dVar11 * dVar9) + dVar4 * dVar2 + 1.0;
  if (param_3 == 2) {
    uVar14 = 0;
  }
  else {
    uVar14 = uVar13;
    uVar13 = 0;
  }
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar5 = dVar2 * (double)((ulonglong)uVar13 << 0x20) + dVar3 * -0.0;
  dVar11 = dVar1 * 0.0 - (double)((ulonglong)uVar14 << 0x20) * dVar2;
  dVar6 = dVar3 * (double)((ulonglong)uVar14 << 0x20) - (double)((ulonglong)uVar13 << 0x20) * dVar1;
  dVar5 = dVar5 + dVar5;
  dVar11 = dVar11 + dVar11;
  dVar6 = dVar6 + dVar6;
  dVar4 = param_1[3];
  dVar7 = (dVar2 * dVar11 - dVar6 * dVar3) + dVar4 * dVar5 + (double)((ulonglong)uVar14 << 0x20);
  dVar12 = (dVar1 * dVar6 - dVar5 * dVar2) + dVar4 * dVar11 + (double)((ulonglong)uVar13 << 0x20);
  dVar11 = (dVar3 * dVar5 - dVar11 * dVar1) + dVar6 * dVar4 + 0.0;
  *param_4 = dVar12 * dVar8 - dVar10 * dVar7;
  param_4[1] = dVar7 * dVar9 - dVar8 * dVar11;
  param_4[2] = dVar11 * dVar10 - dVar9 * dVar12;
  *param_5 = 0.0;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.999999747378752e-05 < dVar4) {
    dVar9 = -(dVar7 * dVar8 + dVar11 * dVar9 + dVar10 * dVar12);
    if (1.0 <= dVar9) {
      dVar9 = 1.0;
    }
    if (dVar9 <= -1.0) {
      dVar9 = -1.0;
    }
    dVar10 = dVar9;
    if (1.0 <= dVar9) {
      dVar10 = 1.0;
    }
    dVar4 = 1.0 / SQRT(dVar4);
    *param_4 = dVar1 * dVar4;
    param_4[1] = dVar2 * dVar4;
    param_4[2] = dVar3 * dVar4;
    dVar9 = asin((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar10));
    *param_5 = dVar9;
  }
  return;
}



// FUNCTION 146dec596 FUN_146dec596 body=503 status=ok
// SIG undefined FUN_146dec596(void)

void FUN_146dec596(double *param_1,undefined8 param_2,undefined8 param_3,int param_4,double *param_5
                  ,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double dStack_c0;
  undefined1 local_b8 [40];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = 0;
  dStack_c0 = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_146deaca2(0,param_2,&local_d8,local_b8);
  puVar5 = &local_c8;
  if (param_4 != 2) {
    puVar5 = &uStack_d0;
  }
  if (param_4 == 2) {
    uVar10 = 0;
    uVar9 = 0x3ff00000;
  }
  else {
    uVar9 = 0;
    uVar10 = 0x3ff00000;
  }
  dVar4 = (double)FUN_144afd35e((int)*puVar5,dStack_c0 + 1.0);
  *param_6 = dVar4 * 4.0;
  dVar4 = param_1[2];
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar6 = dVar1 * (double)((ulonglong)uVar10 << 0x20) + dVar2 * -0.0;
  dVar7 = dVar4 * 0.0 - (double)((ulonglong)uVar9 << 0x20) * dVar1;
  dVar8 = dVar2 * (double)((ulonglong)uVar9 << 0x20) - (double)((ulonglong)uVar10 << 0x20) * dVar4;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar3 = param_1[3];
  *param_5 = (dVar2 * dVar6 - dVar7 * dVar4) + dVar8 * dVar3 + 0.0;
  param_5[1] = (dVar4 * dVar8 - dVar6 * dVar1) + dVar3 * dVar7 + (double)((ulonglong)uVar10 << 0x20)
  ;
  param_5[2] = (dVar1 * dVar7 - dVar8 * dVar2) + dVar3 * dVar6 + (double)((ulonglong)uVar9 << 0x20);
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dec78e FUN_146dec78e body=605 status=ok
// SIG undefined FUN_146dec78e(void)

void FUN_146dec78e(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar1 = param_1[3];
  dVar2 = param_2[3];
  dVar13 = param_1[2];
  dVar17 = *param_1;
  dVar3 = param_1[1];
  dVar4 = param_2[2];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar9 = dVar2 * dVar13 + dVar1 * dVar4;
  dVar16 = dVar2 * dVar3 + dVar1 * dVar6;
  dVar14 = dVar2 * dVar17 + dVar1 * dVar5;
  dVar10 = dVar3 * dVar6;
  dVar12 = dVar17 * dVar5;
  dVar7 = dVar13 * dVar4;
  dVar15 = dVar12 + dVar10 + dVar7;
  dVar8 = dVar17 * dVar4 + dVar13 * dVar5;
  dVar11 = dVar1 * dVar2 - dVar15;
  dVar17 = dVar17 * dVar6 + dVar5 * dVar3;
  *param_3 = (dVar12 + dVar12 + dVar11) * 0.5;
  param_3[1] = (dVar9 + dVar17) * 0.5;
  param_3[2] = (dVar8 - dVar16) * 0.5;
  dVar13 = dVar3 * dVar4 + dVar13 * dVar6;
  *param_4 = (dVar17 - dVar9) * 0.5;
  param_4[1] = (dVar10 + dVar10 + dVar11) * 0.5;
  param_4[2] = (dVar13 + dVar14) * 0.5;
  *param_5 = (dVar8 + dVar16) * 0.5;
  param_5[1] = (dVar13 - dVar14) * 0.5;
  param_5[2] = (dVar7 + dVar7 + dVar11) * 0.5;
  if (ABS(dVar15 + dVar1 * dVar2) < 9.99999993922529e-09) {
    *param_3 = *param_3 + 9.99999993922529e-09;
    param_4[1] = param_4[1] + 9.99999993922529e-09;
    param_5[2] = param_5[2] + 9.99999993922529e-09;
  }
  return;
}



// FUNCTION 146dec9ec FUN_146dec9ec body=15 status=ok
// SIG undefined FUN_146dec9ec(void)

byte FUN_146dec9ec(undefined8 param_1,longlong param_2)

{
  return (DAT_14c993b58 ^ 1) & *(byte *)(param_2 + 0x138);
}



// FUNCTION 146dec9fc FUN_146dec9fc body=15 status=ok
// SIG undefined FUN_146dec9fc(void)

byte FUN_146dec9fc(undefined8 param_1,longlong param_2)

{
  return (DAT_14c993b58 ^ 1) & *(byte *)(param_2 + 0x139);
}



// FUNCTION 146deca0c FUN_146deca0c body=15 status=ok
// SIG undefined FUN_146deca0c(void)

byte FUN_146deca0c(undefined8 param_1,longlong param_2)

{
  return (DAT_14c993b58 ^ 1) & *(byte *)(param_2 + 0x13a);
}



// FUNCTION 146deca1c FUN_146deca1c body=38 status=ok
// SIG undefined FUN_146deca1c(void)

ulonglong FUN_146deca1c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x98) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0x98) | *(ulonglong *)(param_2 + 0x148) & uVar1;
}



// FUNCTION 146deca42 FUN_146deca42 body=38 status=ok
// SIG undefined FUN_146deca42(void)

ulonglong FUN_146deca42(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0xa0) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0xa0) | *(ulonglong *)(param_2 + 0x150) & uVar1;
}



// FUNCTION 146deca68 FUN_146deca68 body=35 status=ok
// SIG undefined FUN_146deca68(void)

ulonglong FUN_146deca68(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x50) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0x50) | *(ulonglong *)(param_2 + 0xc0) & uVar1;
}



// FUNCTION 146deca8c FUN_146deca8c body=38 status=ok
// SIG undefined FUN_146deca8c(void)

ulonglong FUN_146deca8c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0xa8) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0xa8) | *(ulonglong *)(param_2 + 0x158) & uVar1;
}



// FUNCTION 146decab2 FUN_146decab2 body=38 status=ok
// SIG undefined FUN_146decab2(void)

ulonglong FUN_146decab2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0xb0) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0xb0) | *(ulonglong *)(param_2 + 0x160) & uVar1;
}



// FUNCTION 146decad8 FUN_146decad8 body=35 status=ok
// SIG undefined FUN_146decad8(void)

ulonglong FUN_146decad8(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x58) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0x58) | *(ulonglong *)(param_2 + 0xc0) & uVar1;
}



// FUNCTION 146decafc FUN_146decafc body=38 status=ok
// SIG undefined FUN_146decafc(void)

ulonglong FUN_146decafc(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0xb8) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0xb8) | *(ulonglong *)(param_2 + 0x168) & uVar1;
}



// FUNCTION 146decb22 FUN_146decb22 body=38 status=ok
// SIG undefined FUN_146decb22(void)

ulonglong FUN_146decb22(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0xc0) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0xc0) | *(ulonglong *)(param_2 + 0x170) & uVar1;
}



// FUNCTION 146decb48 FUN_146decb48 body=42 status=ok
// SIG undefined FUN_146decb48(void)

double FUN_146decb48(longlong param_1,longlong param_2,int param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x1d8 + (longlong)param_3) == '\x01') &&
     (dVar1 = *(double *)(param_1 + 0x78), dVar1 < 0.0)) {
    dVar1 = *(double *)(param_2 + 0x1e8 + (longlong)param_3 * 8);
  }
  return dVar1;
}



// FUNCTION 146decb72 FUN_146decb72 body=45 status=ok
// SIG undefined FUN_146decb72(void)

double FUN_146decb72(longlong param_1,longlong param_2,int param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x1db + (longlong)param_3) == '\x01') &&
     (dVar1 = *(double *)(param_1 + 0x80), dVar1 < 0.0)) {
    dVar1 = *(double *)(param_2 + 0x200 + (longlong)param_3 * 8);
  }
  return dVar1;
}



// FUNCTION 146decba0 FUN_146decba0 body=40 status=ok
// SIG undefined FUN_146decba0(void)

double FUN_146decba0(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x26a) == '\x01') && (dVar1 = *(double *)(param_1 + 0x88), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x278);
  }
  return dVar1;
}



// FUNCTION 146decbc8 FUN_146decbc8 body=40 status=ok
// SIG undefined FUN_146decbc8(void)

double FUN_146decbc8(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x26b) == '\x01') && (dVar1 = *(double *)(param_1 + 0x90), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x290);
  }
  return dVar1;
}



// FUNCTION 146decbf0 FUN_146decbf0 body=22 status=ok
// SIG undefined FUN_146decbf0(void)

undefined8 FUN_146decbf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x26b) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_2 + 0x2a8);
}



// FUNCTION 146decc06 FUN_146decc06 body=40 status=ok
// SIG undefined FUN_146decc06(void)

double FUN_146decc06(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x26c) == '\x01') && (dVar1 = *(double *)(param_1 + 0x88), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x288);
  }
  return dVar1;
}



// FUNCTION 146decc2e FUN_146decc2e body=40 status=ok
// SIG undefined FUN_146decc2e(void)

double FUN_146decc2e(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x26d) == '\x01') && (dVar1 = *(double *)(param_1 + 0x90), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x2a0);
  }
  return dVar1;
}



// FUNCTION 146decc56 FUN_146decc56 body=22 status=ok
// SIG undefined FUN_146decc56(void)

undefined8 FUN_146decc56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x26d) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_2 + 0x2b8);
}



// FUNCTION 146decc6c FUN_146decc6c body=40 status=ok
// SIG undefined FUN_146decc6c(void)

double FUN_146decc6c(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x268) == '\x01') && (dVar1 = *(double *)(param_1 + 0x88), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x278);
  }
  return dVar1;
}



// FUNCTION 146decc94 FUN_146decc94 body=40 status=ok
// SIG undefined FUN_146decc94(void)

double FUN_146decc94(longlong param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(char *)(param_2 + 0x269) == '\x01') && (dVar1 = *(double *)(param_1 + 0x90), dVar1 < 0.0))
  {
    dVar1 = *(double *)(param_2 + 0x290);
  }
  return dVar1;
}



// FUNCTION 146deccbc FUN_146deccbc body=35 status=ok
// SIG undefined FUN_146deccbc(void)

ulonglong FUN_146deccbc(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x60) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0x60) | *(ulonglong *)(param_2 + 200) & uVar1;
}



// FUNCTION 146decce0 FUN_146decce0 body=35 status=ok
// SIG undefined FUN_146decce0(void)

ulonglong FUN_146decce0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x68) < 0.0);
  return ~uVar1 & (ulonglong)*(double *)(param_1 + 0x68) | *(ulonglong *)(param_2 + 0xd0) & uVar1;
}



// FUNCTION 146decd04 FUN_146decd04 body=11 status=ok
// SIG undefined FUN_146decd04(void)

bool FUN_146decd04(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 0x13c) == 0;
}



// FUNCTION 146decd10 FUN_146decd10 body=11 status=ok
// SIG undefined FUN_146decd10(void)

bool FUN_146decd10(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 0x140) == 0;
}



// FUNCTION 146decd1c FUN_146decd1c body=11 status=ok
// SIG undefined FUN_146decd1c(void)

bool FUN_146decd1c(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 0x1e0) == 0;
}



// FUNCTION 146decd28 FUN_146decd28 body=11 status=ok
// SIG undefined FUN_146decd28(void)

bool FUN_146decd28(undefined8 param_1,longlong param_2)

{
  return *(int *)(param_2 + 0x270) == 0;
}



// FUNCTION 146decd34 FUN_146decd34 body=47 status=ok
// SIG undefined FUN_146decd34(void)

double FUN_146decd34(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = -(ulonglong)(*(double *)(param_1 + 0x70) < 0.0);
  return 1.0 - (double)(~uVar1 & (ulonglong)*(double *)(param_1 + 0x70) |
                       *(ulonglong *)(param_2 + 0xd8) & uVar1);
}



// FUNCTION 146decd64 FUN_146decd64 body=260 status=ok
// SIG undefined FUN_146decd64(void)

void FUN_146decd64(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar6 = dVar1;
  if ((dVar2 <= dVar1 || dVar3 <= dVar1) && (dVar6 = dVar2, dVar3 <= dVar2)) {
    dVar6 = dVar3;
  }
  dVar5 = dVar1;
  if ((dVar1 <= dVar2 || dVar1 <= dVar3) && (dVar5 = dVar2, dVar2 <= dVar3)) {
    dVar5 = dVar3;
  }
  if (((param_3 <= 0.0) || (dVar6 <= 0.0)) || (dVar5 / dVar6 <= param_3)) {
    param_1[2] = param_2[2];
    dVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = dVar1;
  }
  else {
    param_3 = dVar5 / param_3;
    dVar4 = dVar5 - dVar6;
    dVar5 = dVar5 - param_3;
    *param_1 = ((dVar1 - dVar6) / dVar4) * dVar5 + param_3;
    param_1[1] = ((dVar2 - dVar6) / dVar4) * dVar5 + param_3;
    param_1[2] = ((dVar3 - dVar6) / dVar4) * dVar5 + param_3;
  }
  return;
}



// FUNCTION 146dece68 FUN_146dece68 body=265 status=ok
// SIG undefined FUN_146dece68(void)

void FUN_146dece68(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (0.0 < param_4) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar6 = dVar1;
    if ((dVar1 <= dVar2 || dVar1 <= dVar3) && (dVar6 = dVar2, dVar2 <= dVar3)) {
      dVar6 = dVar3;
    }
    dVar7 = *param_3;
    dVar4 = param_3[1];
    dVar5 = param_3[2];
    if (dVar7 <= dVar4 || dVar7 <= dVar5) {
      uVar8 = SUB84(dVar4,0);
      uVar9 = (int)((ulonglong)dVar4 >> 0x20);
      if (dVar4 <= dVar5) {
        uVar8 = SUB84(dVar5,0);
        uVar9 = (int)((ulonglong)dVar5 >> 0x20);
      }
      dVar7 = (double)CONCAT44(uVar9,uVar8);
    }
    if (((0.0 < dVar6) && (0.0 < dVar7)) && (dVar6 / dVar7 < param_4)) {
      param_4 = param_4 / (dVar6 / dVar7);
      *param_1 = dVar1 * param_4;
      param_1[1] = dVar2 * param_4;
      param_1[2] = dVar3 * param_4;
      return;
    }
  }
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 146decf72 FUN_146decf72 body=744 status=ok
// SIG undefined FUN_146decf72(void)

void FUN_146decf72(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,double *param_7,double *param_8,double *param_9,
                  double *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [40];
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0.0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_a8 = 0.0;
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  dVar3 = *param_1;
  dVar5 = 0.0;
  if (0.0 < dVar3) {
    dVar5 = 1.0 / dVar3;
    local_c0 = 1.0 / param_3[2];
    dStack_c8 = 1.0 / param_3[1];
    local_d0 = 1.0 / *param_3;
    FUN_146decd64(&local_98,&local_d0,param_6);
    dVar7 = *param_2;
    uVar9 = SUB84(dVar7,0);
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar1 = 0.0;
    if (0.0 < dVar7) goto LAB_146ded188;
  }
  else {
    dVar7 = *param_2;
    uVar9 = SUB84(dVar7,0);
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar2 = 0.0;
    dVar4 = 0.0;
    dVar8 = 0.0;
    dVar6 = 0.0;
    dVar1 = dVar5;
    if (dVar7 <= 0.0) goto LAB_146ded02b;
LAB_146ded188:
    local_c0 = 1.0 / param_4[2];
    dStack_c8 = 1.0 / param_4[1];
    local_d0 = 1.0 / *param_4;
    FUN_146decd64(&local_b8);
    dVar2 = 0.0;
    dVar1 = 1.0 / (double)CONCAT44(uVar10,uVar9);
    if (dVar3 <= 0.0) {
      dVar4 = 0.0;
      dVar8 = 0.0;
      dVar6 = 0.0;
      goto LAB_146ded02b;
    }
    if ((((0.0 < dVar1) && (0.0 < param_5)) && (0.0 < dVar5)) && (dVar5 / dVar1 < param_5)) {
      dVar5 = dVar5 * (param_5 / (dVar5 / dVar1));
    }
    FUN_146dece68(&local_d0,&local_98,&local_b8);
    local_88 = local_c0;
    local_98 = local_d0;
    dStack_90 = dStack_c8;
  }
  dVar6 = 1.0 / local_88;
  dVar8 = 1.0 / dStack_90;
  dVar2 = 1.0 / dVar5;
  dVar4 = 1.0 / local_98;
LAB_146ded02b:
  *param_7 = dVar2;
  *param_9 = dVar4;
  param_9[1] = dVar8;
  param_9[2] = dVar6;
  dVar3 = 0.0;
  dVar5 = 0.0;
  dVar2 = 0.0;
  dVar7 = 0.0;
  if (0.0 < *param_2) {
    dVar3 = 1.0 / dVar1;
    dVar7 = 1.0 / local_a8;
    dVar2 = 1.0 / dStack_b0;
    dVar5 = 1.0 / local_b8;
  }
  *param_8 = dVar3;
  *param_10 = dVar5;
  param_10[1] = dVar2;
  param_10[2] = dVar7;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ded26e FUN_146ded26e body=69 status=ok
// SIG undefined FUN_146ded26e(void)

undefined8 * FUN_146ded26e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f58080;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1457a7980(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ded2b8 FUN_146ded2b8 body=38 status=ok
// SIG undefined FUN_146ded2b8(void)

undefined8 FUN_146ded2b8(undefined8 param_1,int param_2)

{
  FUN_146dfb2d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ded2e2 FUN_146ded2e2 body=39 status=ok
// SIG undefined FUN_146ded2e2(void)

undefined8 * FUN_146ded2e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b8e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ded30a FUN_146ded30a body=38 status=ok
// SIG undefined FUN_146ded30a(void)

undefined8 FUN_146ded30a(undefined8 param_1,int param_2)

{
  FUN_1457a79ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ded332 FUN_146ded332 body=48 status=ok
// SIG undefined FUN_146ded332(void)

void FUN_146ded332(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146ded362 FUN_146ded362 body=104 status=ok
// SIG undefined FUN_146ded362(void)

longlong * FUN_146ded362(longlong *param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  float fVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((0 < (int)param_3) && (*(uint *)(param_2 + 1) == param_3)) {
    FUN_144a12820(param_1,param_3,1);
    uVar1 = 0;
    do {
      fVar2 = *(float *)(*param_2 + uVar1 * 4);
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *(float *)(*param_1 + uVar1 * 4) = fVar2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return param_1;
}



// FUNCTION 146ded3ca FUN_146ded3ca body=86 status=ok
// SIG undefined FUN_146ded3ca(void)

void FUN_146ded3ca(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146ded420 FUN_146ded420 body=58 status=ok
// SIG undefined FUN_146ded420(void)

int FUN_146ded420(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ded470(param_1,iVar1);
  }
  FUN_146ded45a((longlong)iVar1 * 0x20 + *param_1);
  return iVar1;
}



// FUNCTION 146ded45a FUN_146ded45a body=22 status=ok
// SIG undefined FUN_146ded45a(void)

void FUN_146ded45a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}



// FUNCTION 146ded470 FUN_146ded470 body=132 status=ok
// SIG undefined FUN_146ded470(void)

void FUN_146ded470(longlong param_1,int param_2)

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



// FUNCTION 146ded4f6 FUN_146ded4f6 body=96 status=ok
// SIG undefined FUN_146ded4f6(void)

void FUN_146ded4f6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146ded556 FUN_146ded556 body=132 status=ok
// SIG undefined FUN_146ded556(void)

void FUN_146ded556(longlong param_1,int param_2)

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



// FUNCTION 146ded5dc FUN_146ded5dc body=52 status=ok
// SIG undefined FUN_146ded5dc(void)

void FUN_146ded5dc(longlong *param_1)

{
  FUN_146ded610();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ded610 FUN_146ded610 body=313 status=ok
// SIG undefined FUN_146ded610(void)

void FUN_146ded610(longlong *param_1)

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



// FUNCTION 146ded74a FUN_146ded74a body=43 status=ok
// SIG undefined FUN_146ded74a(void)

void FUN_146ded74a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146ded776 FUN_146ded776 body=48 status=ok
// SIG undefined FUN_146ded776(void)

void FUN_146ded776(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146ded7a6 FUN_146ded7a6 body=122 status=ok
// SIG undefined FUN_146ded7a6(void)

longlong FUN_146ded7a6(longlong param_1,longlong param_2)

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
    FUN_146ded820(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ded820 FUN_146ded820 body=115 status=ok
// SIG undefined FUN_146ded820(void)

undefined8 * FUN_146ded820(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14026dc32(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
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



// FUNCTION 146ded8b0 FUN_146ded8b0 body=96 status=ok
// SIG undefined FUN_146ded8b0(void)

void FUN_146ded8b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,4);
  }
  return;
}



// FUNCTION 146ded910 FUN_146ded910 body=113 status=ok
// SIG undefined FUN_146ded910(void)

void FUN_146ded910(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146ded982 FUN_146ded982 body=426 status=ok
// SIG undefined FUN_146ded982(void)

void FUN_146ded982(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146dedb2e FUN_146dedb2e body=419 status=ok
// SIG undefined FUN_146dedb2e(void)

void FUN_146dedb2e(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 146dedcd2 FUN_146dedcd2 body=96 status=ok
// SIG undefined FUN_146dedcd2(void)

void FUN_146dedcd2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146dedd32 FUN_146dedd32 body=90 status=ok
// SIG undefined FUN_146dedd32(void)

undefined8 * FUN_146dedd32(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1409697b8(param_1,iVar1,0);
    FUN_1409694a7(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 146dedd8c FUN_146dedd8c body=132 status=ok
// SIG undefined FUN_146dedd8c(void)

void FUN_146dedd8c(longlong param_1,int param_2)

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



// FUNCTION 146dede12 FUN_146dede12 body=983 status=ok
// SIG undefined FUN_146dede12(void)

ulonglong FUN_146dede12(longlong *param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong unaff_RBP;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_118 [44];
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined4 local_d4;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar5 = *(uint *)(param_1 + 1);
  local_e8 = (ulonglong)uVar5;
  local_ec = uVar5 + 3;
  if (-1 < (int)uVar5) {
    local_ec = uVar5;
  }
  local_ec = (int)local_ec >> 2;
  if (3 < (int)uVar5) {
    local_e0 = (ulonglong)local_ec;
    lVar20 = 0;
    uVar19 = 0;
    do {
      lVar14 = *param_1;
      lVar16 = uVar19 * 0x70 + 0x54;
      lVar21 = uVar19 * 0x70 + 0x38;
      lVar17 = uVar19 * 0x70 + 0x1c;
      lVar18 = uVar19 * 0x70;
      dVar1 = param_2[3];
      dVar2 = param_2[3];
      lVar22 = -(ulonglong)((double)*(float *)(lVar14 + 0x10 + lVar17) < *param_2);
      lVar23 = -(ulonglong)((double)*(float *)(lVar14 + 0x10 + lVar16) < *param_2);
      lVar24 = -(ulonglong)(dVar2 < (double)*(float *)(lVar14 + 4 + lVar17));
      lVar25 = -(ulonglong)(dVar2 < (double)*(float *)(lVar14 + 4 + lVar16));
      dVar2 = param_2[1];
      dVar3 = param_2[1];
      auVar30._8_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x14 + lVar17) < dVar3);
      auVar30._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x14 + lVar18) < dVar2);
      auVar9._8_4_ = (int)lVar22;
      auVar9._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x10 + lVar18) < *param_2);
      auVar9._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      auVar26._8_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x14 + lVar16) < dVar3);
      auVar26._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x14 + lVar21) < dVar2);
      dVar2 = param_2[4];
      dVar3 = param_2[4];
      auVar7._8_4_ = (int)lVar23;
      auVar7._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x10 + lVar21) < *param_2);
      auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      lVar22 = -(ulonglong)(dVar3 < (double)*(float *)(lVar14 + 8 + lVar17));
      lVar23 = -(ulonglong)(dVar3 < (double)*(float *)(lVar14 + 8 + lVar16));
      dVar3 = param_2[2];
      dVar4 = param_2[2];
      auVar31._8_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x18 + lVar17) < dVar4);
      auVar31._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x18 + lVar18) < dVar3);
      auVar11._8_4_ = (int)lVar24;
      auVar11._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar14 + 4 + lVar18));
      auVar11._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      auVar29._8_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x18 + lVar16) < dVar4);
      auVar29._0_8_ = -(ulonglong)((double)*(float *)(lVar14 + 0x18 + lVar21) < dVar3);
      auVar10._8_4_ = (int)lVar25;
      auVar10._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar14 + 4 + lVar21));
      auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      dVar1 = param_2[5];
      dVar3 = param_2[5];
      auVar27._8_8_ = -(ulonglong)(dVar3 < (double)*(float *)(lVar14 + 0xc + lVar17));
      auVar27._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar14 + 0xc + lVar18));
      auVar8._8_4_ = (int)lVar22;
      auVar8._0_8_ = -(ulonglong)(dVar2 < (double)*(float *)(lVar14 + 8 + lVar18));
      auVar8._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      auVar28._8_8_ = -(ulonglong)(dVar3 < (double)*(float *)(lVar14 + 0xc + lVar16));
      auVar28._0_8_ = -(ulonglong)(dVar1 < (double)*(float *)(lVar14 + 0xc + lVar21));
      auVar6._8_4_ = (int)lVar23;
      auVar6._0_8_ = -(ulonglong)(dVar2 < (double)*(float *)(lVar14 + 8 + lVar21));
      auVar6._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      iVar13 = movmskpd((int)lVar14,auVar27 | auVar8 | auVar31 | auVar11 | auVar30 | auVar9);
      iVar15 = movmskpd((int)lVar16,auVar28 | auVar6 | auVar29 | auVar10 | auVar26 | auVar7);
      lVar21 = 0;
      unaff_RBP = lVar20;
      do {
        if (((uint)(iVar13 + iVar15 * 4) >> ((uint)lVar21 & 0x1f) & 1) == 0) {
          local_d4 = *(undefined4 *)(*param_1 + unaff_RBP);
          cVar12 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_d4);
          if (cVar12 == '\0') goto LAB_146dee17e;
        }
        lVar21 = lVar21 + 1;
        unaff_RBP = unaff_RBP + 0x1c;
      } while (lVar21 != 4);
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x70;
    } while (uVar19 != local_e0);
  }
  uVar19 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  iVar13 = (int)local_e8;
  if ((int)(local_ec << 2) < iVar13) {
    lVar20 = (longlong)(int)(local_ec << 2);
    lVar21 = lVar20 * 0x1c + 0x10;
    do {
      lVar14 = *param_1 + lVar21;
      lVar16 = -3;
      do {
        dVar1 = (double)*(float *)(lVar14 + lVar16 * 4);
        if ((param_2[lVar16 + 6] <= dVar1 && dVar1 != param_2[lVar16 + 6]) ||
           ((double)*(float *)(lVar14 + 0xc + lVar16 * 4) < param_2[lVar16 + 3]))
        goto LAB_146dee170;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0);
      local_d4 = *(undefined4 *)(lVar20 * 0x1c + *param_1);
      cVar12 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_d4);
      if (cVar12 == '\0') goto LAB_146dee17e;
LAB_146dee170:
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 0x1c;
    } while (iVar13 != (int)lVar20);
  }
LAB_146dee180:
  if ((local_d0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
LAB_146dee17e:
  uVar19 = 0;
  goto LAB_146dee180;
}



// FUNCTION 146dee1ea FUN_146dee1ea body=322 status=ok
// SIG undefined FUN_146dee1ea(void)

void FUN_146dee1ea(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 146dee32e FUN_146dee32e body=63 status=ok
// SIG undefined FUN_146dee32e(void)

void FUN_146dee32e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146dee36e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 146dee36e FUN_146dee36e body=126 status=ok
// SIG undefined FUN_146dee36e(void)

ulonglong FUN_146dee36e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x1c) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
      uVar1 = uVar1 / 0x1c;
    }
  }
  return uVar1;
}



// FUNCTION 146dee3ec FUN_146dee3ec body=304 status=ok
// SIG undefined FUN_146dee3ec(void)

undefined4 *
FUN_146dee3ec(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146dee51e(param_1,local_50);
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_146dee604(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[4] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146dedb2e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dee51e FUN_146dee51e body=230 status=ok
// SIG undefined FUN_146dee51e(void)

int * FUN_146dee51e(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146dee604 FUN_146dee604 body=154 status=ok
// SIG undefined FUN_146dee604(void)

void FUN_146dee604(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_146dee69e(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_146dee66e;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_146dee66e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 146dee69e FUN_146dee69e body=138 status=ok
// SIG undefined FUN_146dee69e(void)

void FUN_146dee69e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146dee728 FUN_146dee728 body=113 status=ok
// SIG undefined FUN_146dee728(void)

void FUN_146dee728(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146dee79a FUN_146dee79a body=99 status=ok
// SIG undefined FUN_146dee79a(void)

void FUN_146dee79a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140969b20(param_1,iVar2);
    }
    FUN_1409694a7((longlong)iVar2 * 0x1c + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 146dee7fe FUN_146dee7fe body=79 status=ok
// SIG undefined FUN_146dee7fe(void)

undefined8 * FUN_146dee7fe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146dee89e(param_1,iVar1);
      FUN_146dee900(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146dee84e FUN_146dee84e body=79 status=ok
// SIG undefined FUN_146dee84e(void)

undefined8 * FUN_146dee84e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1409697b8(param_1,iVar1);
      FUN_1409694a7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146dee89e FUN_146dee89e body=98 status=ok
// SIG undefined FUN_146dee89e(void)

void FUN_146dee89e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,4);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146dee900 FUN_146dee900 body=88 status=ok
// SIG undefined FUN_146dee900(void)

void FUN_146dee900(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar2 = 0xc;
    do {
      *(undefined4 *)(param_1 + -4 + lVar2) = *(undefined4 *)(param_2 + -4 + lVar2);
      *(undefined8 *)(param_1 + -0xc + lVar2) = *(undefined8 *)(param_2 + -0xc + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0x3c);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 146dee958 FUN_146dee958 body=93 status=ok
// SIG undefined FUN_146dee958(void)

undefined8 * FUN_146dee958(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c0c7b9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146dee9b6(param_1,iVar1);
      FUN_146deea29(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146dee9b6 FUN_146dee9b6 body=115 status=ok
// SIG undefined FUN_146dee9b6(void)

void FUN_146dee9b6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146deea29 FUN_146deea29 body=52 status=ok
// SIG undefined FUN_146deea29(void)

void FUN_146deea29(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146dedd32(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 146deea5e FUN_146deea5e body=89 status=ok
// SIG undefined FUN_146deea5e(void)

undefined8 * FUN_146deea5e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146deeab8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 146deeab8 FUN_146deeab8 body=115 status=ok
// SIG undefined FUN_146deeab8(void)

void FUN_146deeab8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146deeb2c FUN_146deeb2c body=77 status=ok
// SIG undefined FUN_146deeb2c(void)

undefined8 * FUN_146deeb2c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146dee9b6(param_1,iVar1,0);
    FUN_146deea29(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146deeb7a FUN_146deeb7a body=98 status=ok
// SIG undefined FUN_146deeb7a(void)

void FUN_146deeb7a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146deebdc FUN_146deebdc body=252 status=ok
// SIG undefined FUN_146deebdc(void)

longlong * FUN_146deebdc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ded8b0(param_2);
    }
    FUN_146deedea(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146deef00(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x40;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146deecda FUN_146deecda body=269 status=ok
// SIG undefined FUN_146deecda(void)

longlong * FUN_146deecda(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1409694e8(param_2);
    }
    FUN_146def2dc(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146def37e(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x1c;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146deedea FUN_146deedea body=115 status=ok
// SIG undefined FUN_146deedea(void)

void FUN_146deedea(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14096990c(param_1,iVar1);
    }
    FUN_14096935a((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146deee5e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146deee5e FUN_146deee5e body=63 status=ok
// SIG undefined FUN_146deee5e(void)

void FUN_146deee5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146deee9e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,4);
  }
  return;
}



// FUNCTION 146deee9e FUN_146deee9e body=97 status=ok
// SIG undefined FUN_146deee9e(void)

ulonglong FUN_146deee9e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,4);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146deef00 FUN_146deef00 body=281 status=ok
// SIG undefined FUN_146deef00(void)

void FUN_146deef00(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = 0;
  do {
    FUN_14004b71e(param_2,param_1 + lVar6);
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x30);
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0x30 + lVar6);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *puVar2 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 8);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_2c = *(byte *)(param_1 + 0x3c) & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    uVar5 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_2);
      uVar5 = local_2c;
    }
  }
  else {
    uVar5 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe | uVar5 != 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146def01a FUN_146def01a body=260 status=ok
// SIG undefined FUN_146def01a(void)

longlong * FUN_146def01a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ded910(param_2);
    }
    FUN_146def120(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146deecda(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}


