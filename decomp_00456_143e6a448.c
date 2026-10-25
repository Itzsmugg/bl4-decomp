// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e6a448 FUN_143e6a448 body=96 status=ok
// SIG undefined FUN_143e6a448(void)

byte FUN_143e6a448(longlong param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_28 = *(undefined8 *)(param_1 + 8);
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c == param_3 & bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6a4aa FUN_143e6a4aa body=379 status=ok
// SIG undefined FUN_143e6a4aa(void)

undefined4 FUN_143e6a4aa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 *local_58;
  uchar aauStack_50 [2] [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  local_58 = (undefined8 *)0x0;
  aauStack_50[0][0] = '\0';
  aauStack_50[0][1] = '\0';
  aauStack_50[0][2] = '\0';
  aauStack_50[0][3] = '\0';
  aauStack_50[0][4] = '\0';
  aauStack_50[0][5] = '\0';
  aauStack_50[0][6] = '\0';
  aauStack_50[0][7] = '\0';
  CoCreateGuid((GUID *)&local_58);
  *(ulong *)(param_1 + 10) = (ulong)local_58;
  *(undefined4 *)((longlong)param_1 + 0x54) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0xb) = aauStack_50[0]._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = aauStack_50[0]._4_4_;
  plVar2 = (longlong *)FUN_14001cc68(0x40,0x10);
  *plVar2 = (longlong)&PTR_FUN_14b435500;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  FUN_1446f470e(&local_58,L"WINDOWS",1);
  plVar3 = (longlong *)FUN_140272950(&local_58);
  (**(code **)(*plVar3 + 0x90))(plVar3,plVar2 + 6);
  param_1[4] = (longlong)plVar2;
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2,(int)param_1[1]);
  if ((char)uVar1 == '\0') goto LAB_143e6a572;
  local_58 = (undefined8 *)0x0;
  aauStack_50[0] = (uchar  [8])((ulonglong)aauStack_50[0] & 0xffffffff00000000);
  FUN_1489b6e02(&local_58,param_2);
  FUN_1489b6d1a(param_1 + 0x16,local_60,&local_58);
  if (aauStack_50[0]._0_4_ == 0) {
LAB_143e6a609:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    aauStack_50[0] = (uchar  [8])((ulonglong)aauStack_50[0] & 0xffffffff00000000);
    goto LAB_143e6a609;
  }
  *(undefined4 *)(param_1 + 5) = 1;
LAB_143e6a572:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6a626 FUN_143e6a626 body=1004 status=ok
// SIG undefined FUN_143e6a626(void)

ulonglong FUN_143e6a626(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  GUID local_78;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  local_78._0_8_ = (longlong *)0x0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  CoCreateGuid(&local_78);
  *(ulong *)(param_1 + 10) = local_78.Data1;
  *(undefined4 *)((longlong)param_1 + 0x54) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0xb) = local_78.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = local_78.Data4._4_4_;
  FUN_145e3ae00(param_1 + 0xc,0);
  plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
  *plVar6 = (longlong)&PTR_FUN_14b435500;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  FUN_1446f470e(&local_78,L"WINDOWS",1);
  plVar7 = (longlong *)FUN_140272950(&local_78);
  (**(code **)(*plVar7 + 0x90))(plVar7,plVar6 + 6);
  param_1[4] = (longlong)plVar6;
  uVar4 = (**(code **)(*plVar6 + 8))(plVar6,(int)param_1[1]);
  plVar7 = (longlong *)param_1[4];
  uVar10 = CONCAT71((int7)((ulonglong)(plVar6 + 6) >> 8),plVar7 == (longlong *)0x0 & (byte)uVar4);
  if ((plVar7 == (longlong *)0x0) || ((byte)uVar4 == 0)) goto LAB_143e6a72b;
  cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,*param_2,*(undefined4 *)(param_2 + 2));
  uVar10 = 0;
  iVar9 = 0;
  if (cVar3 == '\0') goto LAB_143e6a72b;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((longlong)param_1 + 0x14);
  plVar7 = param_1 + 8;
  iVar5 = *(int *)((longlong)param_1 + 0x4c);
  *(undefined4 *)(param_1 + 9) = 0;
  if (iVar5 < 0) {
    FUN_144893a1c(plVar7,0);
    iVar9 = (int)param_1[9];
    iVar5 = *(int *)((longlong)param_1 + 0x4c);
  }
  uVar1 = *(uint *)(param_2 + 2);
  _Src = (void *)*param_2;
  *(uint *)(param_1 + 9) = iVar9 + uVar1;
  if ((uint)(iVar5 - iVar9) < uVar1) {
    FUN_1447403be(plVar7,iVar9);
LAB_143e6a7b5:
    memcpy((void *)((longlong)iVar9 + *plVar7),_Src,(longlong)(int)uVar1);
  }
  else if (uVar1 != 0) goto LAB_143e6a7b5;
  *(int *)((longlong)param_1 + 0x3c) = (int)param_1[3];
  local_78._0_8_ = (undefined8 *)0x0;
  local_78.Data4 = (uchar  [8])((ulonglong)local_78.Data4 & 0xffffffff00000000);
  FUN_1489b6f6e(&local_78,param_3);
  FUN_1489b6e86(param_1 + 0x19,local_68,&local_78);
  if (local_78.Data4._0_4_ == 0) {
LAB_143e6a842:
    if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_78._0_8_)(local_78._0_8_,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_78.Data4 = (uchar  [8])((ulonglong)local_78.Data4 & 0xffffffff00000000);
    goto LAB_143e6a842;
  }
  local_78._0_8_ = (longlong *)0x0;
  local_78.Data4 = (uchar  [8])((ulonglong)local_78.Data4 & 0xffffffff00000000);
  FUN_14009d848(&local_78,param_4);
  if ((local_78.Data4._0_4_ == 0) || ((longlong *)local_78._0_8_ == (longlong *)0x0)) {
LAB_143e6a9ec:
    if (local_78.Data4._0_4_ == 0) goto LAB_143e6a9ac;
    if ((longlong *)local_78._0_8_ != (longlong *)0x0) {
      (*(code *)**(undefined8 **)local_78._0_8_)(local_78._0_8_,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_143e6a99f;
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)local_78._0_8_ + 0x30))();
    if (cVar3 == '\0') {
      goto LAB_143e6a9ec;
    }
    plVar7 = param_1 + 0x1c;
    if (*(int *)((longlong)param_1 + 0xf4) < 1) {
      iVar9 = (int)param_1[0x1d];
      iVar5 = (int)param_1[0x1e] + -1;
      *(int *)(param_1 + 0x1e) = iVar5;
      if (iVar5 <= iVar9) {
        iVar5 = iVar9;
        if (0 < iVar9) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar7 + (longlong)iVar8 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar6 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar7,iVar8);
              FUN_14005b248(plVar7);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[0x1d];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 0x1e) = iVar8;
        if ((iVar8 < iVar9) && (*(int *)((longlong)param_1 + 0xec) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_78.Data4._0_4_ != 0) && ((longlong *)local_78._0_8_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)local_78._0_8_ + 0x38))(local_78._0_8_,local_68);
    }
    iVar9 = (int)param_1[0x1d];
    *(uint *)(param_1 + 0x1d) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0xec) < iVar9 + 1U) {
      FUN_1447a71f6(plVar7,iVar9);
    }
    lVar2 = *plVar7;
    lVar11 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar2 + lVar11) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar11) = 0;
    *(undefined8 *)(lVar2 + lVar11) = local_78._0_8_;
    local_78._0_8_ = (longlong *)0x0;
    *(undefined4 *)(lVar2 + 8 + lVar11) = local_78.Data4._0_4_;
LAB_143e6a99f:
    local_78.Data4 = (uchar  [8])((ulonglong)local_78.Data4 & 0xffffffff00000000);
LAB_143e6a9ac:
    if ((longlong *)local_78._0_8_ != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar10 = (ulonglong)uVar4;
LAB_143e6a72b:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 143e6aa14 FUN_143e6aa14 body=802 status=ok
// SIG undefined FUN_143e6aa14(void)

void FUN_143e6aa14(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  undefined1 local_4a0 [7];
  char local_499;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 local_488 [32];
  undefined1 local_468 [1000];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if ((int)param_1[5] != 0) {
    plVar1 = param_1 + 0x1c;
    local_4a8 = param_1 + 0xc;
    local_4b8 = param_1 + 0x19;
    local_4b0 = param_1 + 0x16;
    do {
      iVar5 = (**(code **)(*(longlong *)param_1[4] + 0x10))((longlong *)param_1[4],local_488,0x400);
      iVar6 = (int)param_1[5];
      if (iVar5 < 1) {
        if (iVar6 != 2) break;
        fVar14 = *(float *)((longlong)param_1 + 0x3c) - param_2;
        *(float *)((longlong)param_1 + 0x3c) = fVar14;
        plVar2 = (longlong *)param_1[4];
        fVar13 = *(float *)(param_1 + 7);
        if (((plVar2 != (longlong *)0x0) && (fVar14 <= 0.0)) &&
           (*(float *)(param_1 + 3) <= fVar13 && fVar13 != *(float *)(param_1 + 3))) {
          (**(code **)(*plVar2 + 0x18))(plVar2,param_1[8],(int)param_1[9]);
          fVar13 = *(float *)(param_1 + 7);
          *(int *)((longlong)param_1 + 0x3c) = (int)param_1[3];
        }
        *(float *)(param_1 + 7) = fVar13 - param_2;
        if (0.0 < fVar13 - param_2) break;
        iVar6 = *(int *)((longlong)param_1 + 0xf4);
        *(int *)((longlong)param_1 + 0xf4) = iVar6 + 1;
        uVar7 = (ulonglong)(int)param_1[0x1d];
        if ((longlong)uVar7 < 1) {
          *(int *)((longlong)param_1 + 0xf4) = iVar6;
          break;
        }
        bVar11 = false;
        do {
          lVar9 = uVar7 * 0x10 + -8;
          uVar10 = uVar7;
          while (((*(int *)(*plVar1 + lVar9) != 0 &&
                  (plVar2 = *(longlong **)(*plVar1 + -8 + lVar9), plVar2 != (longlong *)0x0)) &&
                 (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
            lVar9 = lVar9 + -0x10;
            bVar3 = uVar10 < 2;
            uVar10 = uVar10 - 1;
            if (bVar3) {
              iVar6 = *(int *)((longlong)param_1 + 0xf4) + -1;
              *(int *)((longlong)param_1 + 0xf4) = iVar6;
              if (bVar11) goto LAB_143e6abe3;
              goto LAB_143e6ac7d;
            }
          }
          uVar7 = uVar10 - 1;
          bVar11 = true;
        } while (1 < uVar10);
        iVar6 = *(int *)((longlong)param_1 + 0xf4) + -1;
        *(int *)((longlong)param_1 + 0xf4) = iVar6;
LAB_143e6abe3:
        if (iVar6 < 1) {
          iVar6 = (int)param_1[0x1d];
          iVar8 = iVar6;
          if (0 < iVar6) {
            iVar12 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar12 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar1,iVar12);
                FUN_14005b248(plVar1);
              }
              else {
                iVar12 = iVar12 + 1;
              }
              iVar8 = (int)param_1[0x1d];
            } while (iVar12 < iVar8);
          }
          iVar12 = iVar8 * 2;
          if (iVar12 < 3) {
            iVar12 = 2;
          }
          *(int *)(param_1 + 0x1e) = iVar12;
          if ((iVar12 < iVar6) && (*(int *)((longlong)param_1 + 0xec) != iVar8)) {
            FUN_14045812c(plVar1);
          }
        }
      }
      else if (iVar6 == 2) {
        local_498 = 0;
        uStack_490 = 0;
        cVar4 = (**(code **)(*param_1 + 8))(param_1,local_488,iVar5,&local_498);
        if (cVar4 != '\0') {
          local_499 = '\0';
          FUN_1457adc9c(local_4a8,local_4a0,&local_498,&local_499);
          if (local_499 == '\0') {
            FUN_1489b70b4(local_4b8,local_468,iVar5 + -0x20);
          }
        }
      }
      else if ((iVar6 == 1) &&
              (cVar4 = (**(code **)*param_1)(param_1,local_488,iVar5,&local_498), cVar4 != '\0')) {
        FUN_1489b6ff2(local_4b0,local_468,iVar5 + -0x20,local_498);
      }
LAB_143e6ac7d:
    } while (0 < iVar5);
  }
  if ((local_80 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6ad4e FUN_143e6ad4e body=102 status=ok
// SIG undefined FUN_143e6ad4e(void)

void FUN_143e6ad4e(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014b435536;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146563ddc(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6adb8 FUN_143e6adb8 body=57 status=ok
// SIG undefined FUN_143e6adb8(void)

void FUN_143e6adb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb8e038 == 0) {
    uVar1 = FUN_145a251d7();
    DAT_14cb8e038 = FUN_14171c317(FUN_146563f1e,uVar1,L"EInAppPurchaseState");
  }
  return;
}



// FUNCTION 143e6adf1 FUN_143e6adf1 body=57 status=ok
// SIG undefined FUN_143e6adf1(void)

void FUN_143e6adf1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb8e068 == 0) {
    uVar1 = FUN_145a251d7();
    DAT_14cb8e068 = FUN_14171c317(FUN_146563f4d,uVar1,L"EMPMatchOutcome");
  }
  return;
}



// FUNCTION 143e6ae2a FUN_143e6ae2a body=505 status=ok
// SIG undefined FUN_143e6ae2a(void)

void FUN_143e6ae2a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar6 = 0x10;
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x38);
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar5 + lVar6) != 0) {
        puVar7 = *(undefined2 **)(lVar5 + -8 + lVar6);
      }
      if (DAT_14c927740 == 0) {
        local_68 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_80 = &local_68;
        local_88 = &LAB_146856450;
        local_90 = FUN_1427b121c;
        local_98 = L"Engine";
        uStack_a0 = 0;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
        local_b0 = CONCAT44(local_b0._4_4_,8);
        local_b8 = CONCAT44(local_b8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      local_b0 = 0;
      local_b8 = local_b8 & 0xffffffff00000000;
      lVar4 = FUN_141433b6f(DAT_14c927740,0,puVar7,0);
      if (lVar4 != 0) {
        iVar2 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
          FUN_1489bb2b8(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        lVar8 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar3 + lVar8) = 0;
        ((undefined8 *)(lVar3 + lVar8))[1] = 0;
        lVar3 = *plVar1;
        *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(lVar5 + -0x10 + lVar6);
        local_a8 = 0;
        uStack_a0 = 0;
        local_b0 = local_b0 & 0xffffffffffffff00;
        local_b8 = 0;
        lVar5 = FUN_140584627(DAT_14c951640,lVar4,0);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        *(longlong *)(lVar3 + lVar8 + 8) = lVar5;
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x40));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6b024 FUN_143e6b024 body=91 status=ok
// SIG undefined FUN_143e6b024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143e6b024(longlong param_1)

{
  DWORD DVar1;
  
  _DAT_14cb8e0c8 = _DAT_14cb8e0c8 + 1;
  DVar1 = GetCurrentThreadId();
  LOCK();
  *(DWORD *)(param_1 + 0x170) = DVar1;
  UNLOCK();
  do {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x20))
              (*(longlong **)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168),0);
    if (*(int *)(param_1 + 0x16c) == 0) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))((longlong *)(param_1 + 8));
    }
  } while (*(int *)(param_1 + 0x16c) == 0);
  return 0;
}



// FUNCTION 143e6b080 FUN_143e6b080 body=96 status=ok
// SIG undefined FUN_143e6b080(void)

void FUN_143e6b080(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  LOCK();
  *(undefined4 *)(param_1 + 0x16c) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000143e6b0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
  return;
}



// FUNCTION 143e6b0f2 FUN_143e6b0f2 body=106 status=ok
// SIG undefined FUN_143e6b0f2(void)

void FUN_143e6b0f2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  iVar1 = *(int *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x134) < iVar1 + 1U) {
    FUN_1418b5002((longlong *)(param_1 + 0x128),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000143e6b155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  return;
}



// FUNCTION 143e6b15c FUN_143e6b15c body=904 status=ok
// SIG undefined FUN_143e6b15c(void)

void FUN_143e6b15c(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *_Dst;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0xdc) & 1) != 0) {
    LOCK();
    *(undefined1 *)(param_1 + 0xdc) = 0;
    UNLOCK();
    local_88 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"OnlineSubsystem",L"MaxParallelTasks",param_1 + 0xd8);
  }
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x100);
  EnterCriticalSection(p_Var1);
  iVar8 = *(int *)(param_1 + 0xd8);
  iVar7 = *(int *)(param_1 + 0xf8);
  LeaveCriticalSection(p_Var1);
  iVar9 = iVar8 - iVar7;
  if (iVar9 != 0 && iVar7 <= iVar8) {
    uVar10 = iVar9 + 1;
    do {
      lVar2 = **(longlong **)(param_1 + 0xe8);
      if (lVar2 == 0) break;
      plVar3 = *(longlong **)(lVar2 + 8);
      lVar4 = *(longlong *)(param_1 + 0xe8);
      *(longlong *)(param_1 + 0xe8) = lVar2;
      *(undefined8 *)(lVar2 + 8) = 0;
      if (lVar4 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar3 + 0x20))(plVar3);
      EnterCriticalSection(p_Var1);
      iVar8 = *(int *)(param_1 + 0xf8);
      *(uint *)(param_1 + 0xf8) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0xfc) < iVar8 + 1U) {
        FUN_146564434((longlong *)(param_1 + 0xf0),iVar8);
      }
      *(longlong **)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar8 * 8) = plVar3;
      LeaveCriticalSection(p_Var1);
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x138);
  do {
    EnterCriticalSection(p_Var1);
    iVar8 = *(int *)(param_1 + 0x130);
    if (iVar8 < 1) {
      LeaveCriticalSection(p_Var1);
      break;
    }
    plVar3 = *(longlong **)(param_1 + 0x128);
    plVar5 = (longlong *)*plVar3;
    if (iVar8 - 1U == 0) {
      iVar7 = 0;
    }
    else {
      memmove(plVar3,plVar3 + 1,(ulonglong)(iVar8 - 1U) << 3);
      iVar7 = *(int *)(param_1 + 0x130) + -1;
    }
    *(int *)(param_1 + 0x130) = iVar7;
    FUN_1418b5164((undefined8 *)(param_1 + 0x128));
    LeaveCriticalSection(p_Var1);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)*plVar5)(plVar5,1);
    }
  } while (iVar8 != 1);
  QueryPerformanceCounter(&local_78);
  dVar6 = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (((*(char *)(param_1 + 0x50) == '\x01') && (*(char *)(param_1 + 0x68) == '\0')) &&
       ((double)*(float *)(param_1 + 0x9c) + *(double *)(param_1 + 0x58) < dVar6)) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xb0);
  EnterCriticalSection(lpCriticalSection);
  iVar8 = *(int *)(param_1 + 0xa8);
  LeaveCriticalSection(lpCriticalSection);
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(p_Var1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  LeaveCriticalSection(p_Var1);
  if (lVar2 == 0) {
    if (0 < iVar8) {
      EnterCriticalSection(lpCriticalSection);
      _Dst = *(undefined8 **)(param_1 + 0xa0);
      plVar3 = (longlong *)*_Dst;
      iVar8 = *(int *)(param_1 + 0xa8) + -1;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        memmove(_Dst,_Dst + 1,(longlong)iVar8 << 3);
        iVar8 = *(int *)(param_1 + 0xa8) + -1;
      }
      *(int *)(param_1 + 0xa8) = iVar8;
      FUN_1418b51f2(param_1 + 0xa0);
      LeaveCriticalSection(lpCriticalSection);
      (**(code **)(*plVar3 + 0x20))(plVar3);
      EnterCriticalSection(p_Var1);
      *(longlong **)(param_1 + 0x10) = plVar3;
      LeaveCriticalSection(p_Var1);
      *(double *)(param_1 + 0x40) = dVar6;
      *(undefined1 *)(param_1 + 0x48) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
    }
  }
  else if (((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(param_1 + 0x48) == '\0')) &&
          ((double)*(float *)(param_1 + 0x9c) + *(double *)(param_1 + 0x40) < dVar6)) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    local_78.QuadPart = 0;
    uStack_70 = 0;
    EnterCriticalSection(lpCriticalSection);
    FUN_143e6b4e6(&local_78,param_1 + 0xa0);
    LeaveCriticalSection(lpCriticalSection);
    if (local_78.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6b4e6 FUN_143e6b4e6 body=88 status=ok
// SIG undefined FUN_143e6b4e6(void)

undefined8 * FUN_143e6b4e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489bb408(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 143e6b53e FUN_143e6b53e body=626 status=ok
// SIG undefined FUN_143e6b53e(void)

void FUN_143e6b53e(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + -8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    *(undefined1 *)(param_1 + 0x48) = 1;
    QueryPerformanceCounter(&local_68);
    *(double *)(param_1 + 0x50) = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(local_70);
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  local_68.QuadPart = 0;
  uStack_60 = 0;
  EnterCriticalSection(p_Var1);
  FUN_143e6b4e6(&local_68,param_1 + 0xe8);
  LeaveCriticalSection(p_Var1);
  if (0 < (int)uStack_60) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(local_68.QuadPart + lVar4 * 8);
      if (*(char *)(param_1 + 0x90) == '\x01') {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        *(longlong **)(param_1 + 0x58) = plVar2;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar3 != '\0') {
        (**(code **)(*plVar2 + 0x30))(plVar2);
        local_58 = plVar2;
        EnterCriticalSection(p_Var1);
        local_50 = &local_58;
        FUN_1489bb33e(param_1 + 0xe8,&local_50);
        LeaveCriticalSection(p_Var1);
        FUN_143e6b0f2(local_70,plVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)uStack_60);
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x58) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  if (local_68.QuadPart != 0) {
    FUN_1400020a8();
  }
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(p_Var1);
  plVar2 = *(longlong **)(param_1 + 8);
  LeaveCriticalSection(p_Var1);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      *(longlong **)(param_1 + 0x58) = plVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    }
    (**(code **)(*plVar2 + 0x38))(plVar2);
    cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (cVar3 != '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2);
      FUN_143e6b0f2(local_70,plVar2);
      EnterCriticalSection(p_Var1);
      *(undefined8 *)(param_1 + 8) = 0;
      LeaveCriticalSection(p_Var1);
    }
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    *(undefined1 *)(param_1 + 0x48) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6b7be FUN_143e6b7be body=15 status=ok
// SIG undefined FUN_143e6b7be(void)

void FUN_143e6b7be(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 143e6b7ce FUN_143e6b7ce body=956 status=ok
// SIG undefined FUN_143e6b7ce(void)

ulonglong FUN_143e6b7ce(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined2 **param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  wchar_t *_Str;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  undefined8 *puVar15;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  wcsrchr(_Str,L'_');
  puVar12 = (undefined2 *)*param_2;
  iVar4 = *(int *)(param_2 + 1);
  uVar16 = (longlong)iVar4 * 2;
  do {
    if (uVar16 == 0) {
      puVar14 = (undefined8 *)0x0;
      goto switchD_143e6b917_caseD_63;
    }
    uVar11 = uVar16 - 2;
    lVar5 = uVar16 - 2;
    uVar16 = uVar11;
  } while (*(short *)((longlong)puVar12 + lVar5) != 0x5f);
  uVar11 = uVar11 >> 1;
  iVar10 = (int)uVar11;
  puVar14 = (undefined8 *)0x0;
  if (iVar10 == -1) goto switchD_143e6b917_caseD_63;
  iVar17 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar17 = 0;
  }
  if (iVar17 <= iVar10 + 1) goto switchD_143e6b917_caseD_63;
  uVar3 = puVar12[iVar10 + 1];
  if (iVar4 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  uVar16 = 0;
  if (0 < iVar10) {
    uVar16 = uVar11 & 0xffffffff;
  }
  FUN_14006620a(&local_68,puVar12,uVar16);
  if (&local_68 == param_4) {
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_68;
    local_68 = (undefined2 *)0x0;
    *(int *)(param_4 + 1) = (int)uStack_60;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_60._4_4_;
  }
  puVar15 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
  if (uVar3 < 0x62) {
    if (uVar3 == 0x49) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      cVar8 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      if (cVar8 != '\0') {
        *param_1 = 3;
LAB_143e6bac1:
        uVar9 = FUN_1418b4cfe(param_1,&local_68);
        puVar14 = (undefined8 *)(ulonglong)uVar9;
        goto LAB_143e6bb0d;
      }
    }
    else {
      if (uVar3 != 0x55) goto switchD_143e6b917_caseD_63;
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      cVar8 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      if (cVar8 != '\0') {
        *param_1 = 4;
        goto LAB_143e6bac1;
      }
    }
LAB_143e6bad2:
    puVar14 = (undefined8 *)0x0;
LAB_143e6bb0d:
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto switchD_143e6b917_caseD_63;
  }
  puVar14 = puVar15;
  switch(uVar3) {
  case 0x62:
    uVar9 = (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_68);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    if ((char)uVar9 != '\0') {
      uVar7 = local_68._0_1_;
      FUN_140c3a2ac(param_1);
      *param_1 = 9;
      param_1[8] = uVar7;
    }
    break;
  case 99:
  case 0x65:
  case 0x67:
  case 0x68:
    break;
  case 100:
    uVar9 = (**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,&local_68);
    puVar12 = local_68;
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    if ((char)uVar9 != '\0') {
      FUN_140c3a2ac(param_1);
      *param_1 = 5;
      *(undefined2 **)(param_1 + 8) = puVar12;
    }
    break;
  case 0x66:
    uVar9 = (**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,&local_68);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    if ((char)uVar9 != '\0') {
      fVar18 = (float)(double)local_68;
      FUN_140c3a2ac(param_1);
      *param_1 = 7;
      *(float *)(param_1 + 8) = fVar18;
    }
    break;
  case 0x69:
    uVar9 = (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,&local_68);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    if ((char)uVar9 == '\0') break;
    uVar13 = local_68._0_4_;
    FUN_140c3a2ac(param_1);
    *param_1 = 1;
    goto LAB_143e6ba9e;
  case 0x6a:
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    cVar8 = (**(code **)(*(longlong *)*param_3 + 0x80))((longlong *)*param_3,&local_70);
    if (cVar8 == '\0') {
      cVar8 = (**(code **)(*(longlong *)*param_3 + 0x58))((longlong *)*param_3,&local_68);
      if (cVar8 == '\0') goto LAB_143e6bad2;
      puVar12 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar12 = local_68;
      }
      FUN_140c3a228(param_1,puVar12);
      *param_1 = 10;
    }
    else {
      local_80 = *local_70;
      local_78 = (longlong *)local_70[1];
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      puVar15 = &local_80;
      FUN_1489b75f6(param_1,puVar15);
      plVar6 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    puVar14 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
    goto LAB_143e6bb0d;
  default:
    if (uVar3 == 0x73) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      uVar9 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      puVar14 = (undefined8 *)(ulonglong)uVar9;
      if ((char)uVar9 != '\0') {
        puVar12 = local_68;
        if ((int)uStack_60 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        FUN_140c3a228(param_1,puVar12);
      }
      goto LAB_143e6bb0d;
    }
    if (uVar3 != 0x75) break;
    uVar9 = (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_68);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    if ((char)uVar9 == '\0') break;
    uVar13 = local_68._0_4_;
    FUN_140c3a2ac(param_1);
    *param_1 = 2;
LAB_143e6ba9e:
    *(undefined4 *)(param_1 + 8) = uVar13;
  }
switchD_143e6b917_caseD_63:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar14 & 0xffffffff;
}



// FUNCTION 143e6bb8c FUN_143e6bb8c body=5317 status=ok
// SIG undefined FUN_143e6bb8c(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143e6bb8c(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                       ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  wchar_t *******pppppppwVar13;
  wchar_t *******pppppppwVar14;
  uint uVar15;
  undefined8 unaff_RSI;
  wchar_t *******_Size;
  undefined *puVar16;
  byte bVar17;
  longlong lVar18;
  wchar_t *****pppppwVar19;
  ulonglong uVar20;
  ushort uVar21;
  uint uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  wchar_t *******pppppppwVar25;
  bool bVar26;
  bool bVar27;
  wchar_t ******ppppppwVar28;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined *puStack_120;
  undefined *local_118;
  code *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined2 *local_d8;
  int local_d0;
  wchar_t *******local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  wchar_t *******pppppppwStack_90;
  wchar_t *******local_88;
  undefined8 uStack_80;
  wchar_t *******local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  _Size = (wchar_t *******)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_e0 = param_3;
  for (; param_2 != (longlong *)0x0; param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2))
  {
    for (plVar23 = (longlong *)param_2[10]; plVar23 != (longlong *)0x0;
        plVar23 = (longlong *)plVar23[3]) {
      plVar12 = param_1;
      if ((~*(uint *)(plVar23[1] + 0x18) & 0x8001) == 0) goto LAB_143e6bc2b;
    }
  }
LAB_143e6d015:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return (ulonglong)_Size & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143e6bc2b:
  local_e8 = plVar12;
  local_f0 = param_2;
  FUN_1400021e4(plVar23 + 4);
  if ((((param_4 == 0) || (param_4 == 0xffffffffffffffff)) ||
      (bVar26 = false, (plVar23[7] & param_4) != 0)) &&
     ((bVar26 = false, param_5 != 0xffffffffffffffff && ((plVar23[7] & param_5) == 0)))) {
    uVar9 = 0;
    iVar11 = local_d0 + -1;
    if (local_d0 == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      puVar7 = &DAT_149dfb77a;
      if (local_d0 != 0) {
        puVar7 = local_d8;
      }
      lVar18 = 0;
      uVar9 = 0;
      do {
        uVar15 = ((uint)(0x19 < (ushort)puVar7[lVar18] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar18]
                 ) - 0x20;
        uVar22 = (uint)(uVar9 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar15) & 0xff) * 4);
        uVar9 = (ulonglong)
                (uVar22 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
        lVar18 = lVar18 + 1;
      } while (iVar11 != (int)lVar18);
    }
    iVar11 = FUN_140dfa800(param_1,uVar9,&local_d8);
    _Size = (wchar_t *******)((longlong)iVar11 * 0x38 + *param_1);
    if (_Size == (wchar_t *******)0x0 || iVar11 == -1) goto LAB_143e6c501;
    iVar11 = *(int *)((longlong)plVar23 + 0x44);
    puVar16 = (undefined *)plVar23[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_140a4831c;
      local_128 = 0x1000000008001;
      puStack_120 = (undefined *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    pppppppwVar14 = _Size + 2;
    pppppppwVar25 = (wchar_t *******)(iVar11 + local_e0);
    if (DAT_14c949690 == 0) {
      bVar26 = puVar16 != (undefined *)0x0;
      if (puVar16 != &DAT_14c949688 && bVar26) {
        do {
          puVar16 = *(undefined **)(puVar16 + 0x30);
          bVar26 = puVar16 != (undefined *)0x0;
          if (puVar16 == &DAT_14c949688) break;
        } while (puVar16 != (undefined *)0x0);
      }
      if (!bVar26) goto LAB_143e6bdbe;
LAB_143e6bd6c:
      switch(*(char *)pppppppwVar14) {
      case '\x01':
        ppppppwVar28 = (wchar_t ******)(longlong)*(int *)(_Size + 3);
        break;
      case '\x02':
        ppppppwVar28 = (wchar_t ******)(ulonglong)*(uint *)(_Size + 3);
        break;
      case '\x03':
      case '\x04':
        ppppppwVar28 = _Size[3];
        break;
      case '\x05':
        ppppppwVar28 = (wchar_t ******)(longlong)(double)_Size[3];
        break;
      case '\x06':
        _Size = (wchar_t *******)plVar23[0xf];
        local_78 = (wchar_t *******)0x0;
        uStack_70 = 0;
        FUN_140b74118(pppppppwVar14,&local_78);
        pppppppwVar14 = (wchar_t *******)&DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          pppppppwVar14 = local_78;
        }
        FUN_1446f470e(&local_88,pppppppwVar14,1);
        iVar11 = FUN_1448e5bf4(_Size,local_88,0);
        pppppppwVar14 = local_78;
        if ((iVar11 != -1) &&
           (pppppwVar19 = _Size[8][(longlong)iVar11 * 2 + 1],
           pppppwVar19 != (wchar_t *****)0xffffffffffffffff)) {
          plVar12 = (longlong *)plVar23[0xe];
          lVar18 = *plVar12;
          goto LAB_143e6c091;
        }
joined_r0x000143e6c780:
        if (pppppppwVar14 != (wchar_t *******)0x0) {
          FUN_1400020a8(pppppppwVar14);
        }
        goto LAB_143e6c0cc;
      case '\a':
        ppppppwVar28 = (wchar_t ******)(longlong)*(float *)(_Size + 3);
        break;
      default:
        ppppppwVar28 = (wchar_t ******)0x0;
      }
      (**(code **)(*(longlong *)plVar23[0xe] + 0x1f8))
                ((longlong *)plVar23[0xe],pppppppwVar25,ppppppwVar28);
LAB_143e6c0cc:
      bVar26 = true;
      param_1 = local_e8;
      goto LAB_143e6c501;
    }
    if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c949690) != 0) goto LAB_143e6bd6c;
LAB_143e6bdbe:
    puVar16 = (undefined *)plVar23[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_1468e0f50;
      puStack_120 = (undefined *)0x0;
      local_128 = 0x1008001;
      FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
      atexit(FUN_142816f26);
      _Init_thread_footer(&DAT_14c952108);
    }
    if (DAT_14c9520c0 != 0) {
      if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c9520c0) != 0) goto LAB_143e6be02;
LAB_143e6bf29:
      puVar24 = (undefined8 *)plVar23[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        local_118 = (undefined *)FUN_1446ddbd2();
        local_110 = FUN_14067a048;
        puStack_120 = (undefined *)0x0;
        local_128 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      if (DAT_14c951cd8 == 0) {
        bVar26 = puVar24 != (undefined8 *)0x0;
        if (puVar24 != &DAT_14c951cd0 && bVar26) {
          do {
            puVar24 = (undefined8 *)puVar24[6];
            bVar26 = puVar24 != (undefined8 *)0x0;
            if (puVar24 == &DAT_14c951cd0) break;
          } while (puVar24 != (undefined8 *)0x0);
        }
        if (!bVar26) goto LAB_143e6c10d;
LAB_143e6bf74:
        if (*(char *)pppppppwVar14 == '\t') {
          pbVar8 = (byte *)((longlong)pppppppwVar25 + (ulonglong)*(byte *)((longlong)plVar23 + 0x71)
                           );
          bVar5 = *(byte *)((longlong)pppppppwVar25 + (ulonglong)*(byte *)((longlong)plVar23 + 0x71)
                           );
          bVar10 = *(byte *)((longlong)plVar23 + 0x73);
          if (*(char *)(_Size + 3) != '\x01') goto LAB_143e6c1e0;
          bVar17 = *(byte *)((longlong)plVar23 + 0x72);
        }
        else {
          pbVar8 = (byte *)((longlong)pppppppwVar25 + (ulonglong)*(byte *)((longlong)plVar23 + 0x71)
                           );
          bVar5 = *(byte *)((longlong)pppppppwVar25 + (ulonglong)*(byte *)((longlong)plVar23 + 0x71)
                           );
          bVar10 = *(byte *)((longlong)plVar23 + 0x73);
LAB_143e6c1e0:
          bVar17 = 0;
        }
        *pbVar8 = ~bVar10 & bVar5 | bVar17;
        goto LAB_143e6c4f1;
      }
      if ((puVar24[3] & DAT_14c951cd8) != 0) goto LAB_143e6bf74;
LAB_143e6c10d:
      puVar16 = (undefined *)plVar23[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        local_118 = (undefined *)FUN_1446ddbd2();
        local_110 = FUN_140dafe7a;
        puStack_120 = (undefined *)0x0;
        local_128 = 0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      if (DAT_14c963e40 == 0) {
        bVar26 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c963e38 && bVar26) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar26 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c963e38) break;
          } while (puVar16 != (undefined *)0x0);
        }
        if (!bVar26) goto LAB_143e6c22a;
LAB_143e6c151:
        local_78 = (wchar_t *******)0x0;
        uStack_70 = 0;
        _Size = (wchar_t *******)&local_78;
        FUN_140b74118(pppppppwVar14,_Size);
        pppppppwVar14 = local_78;
        pppppppwVar13 = local_78;
        if (_Size != pppppppwVar25) {
          iVar11 = (int)uStack_70;
          _Size = (wchar_t *******)(longlong)(int)uStack_70;
          *(int *)(pppppppwVar25 + 1) = (int)uStack_70;
          if ((int)uStack_70 == 0 && *(int *)((longlong)pppppppwVar25 + 0xc) == 0) {
            ((wchar_t *)((longlong)pppppppwVar25 + 0xc))[0] = L'\0';
            ((wchar_t *)((longlong)pppppppwVar25 + 0xc))[1] = L'\0';
          }
          else {
            FUN_1446dd670(pppppppwVar25,uStack_70 & 0xffffffff);
            pppppppwVar13 = local_78;
            if (iVar11 != 0) {
              _Size = (wchar_t *******)((longlong)_Size * 2);
              memcpy(*pppppppwVar25,pppppppwVar14,(size_t)_Size);
              pppppppwVar13 = local_78;
            }
          }
        }
        goto LAB_143e6c0a2;
      }
      if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c963e40) != 0) goto LAB_143e6c151;
LAB_143e6c22a:
      puVar16 = (undefined *)plVar23[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        FUN_1446ddbd2();
        local_110 = FUN_140b31576;
        local_118 = &DAT_14c951a38;
        puStack_120 = (undefined *)0x0;
        local_128 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 == 0) {
        bVar26 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c951a90 && bVar26) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar26 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c951a90) break;
          } while (puVar16 != (undefined *)0x0);
        }
        if (!bVar26) goto LAB_143e6c394;
LAB_143e6c26e:
        local_88 = (wchar_t *******)0x0;
        uStack_80 = 0;
        FUN_140b74118(pppppppwVar14,&local_88);
        local_98 = 0;
        pppppppwStack_90 = (wchar_t *******)0x0;
        FUN_14047afda(&local_a8,&local_88);
        bVar5 = FUN_14047b282(local_a8,&local_98,0);
        lVar18 = local_98;
        if ((local_98 != 0 & bVar5) == 1) {
          FUN_1468c80a4(plVar23,&local_c8);
          iVar11 = local_c0 + -1;
          if (local_c0 == 0) {
            iVar11 = 0;
          }
          local_78 = local_c8;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar11);
          FUN_14047e0ee(lVar18,local_b8,&local_78);
          local_108 = 0;
          uStack_100 = 0;
          local_128 = 0;
          puStack_120 = (undefined *)0x0;
          local_110 = (code *)((ulonglong)local_110 & 0xffffffffffffff00);
          local_118 = (undefined *)0x0;
          cVar4 = FUN_142a66f13(local_b8,plVar23,pppppppwVar25);
          plVar12 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          if (local_c8 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          plVar12 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          _Size = pppppppwStack_90;
          if (pppppppwStack_90 != (wchar_t *******)0x0) {
            LOCK();
            pppppppwVar14 = pppppppwStack_90 + 1;
            *(int *)pppppppwVar14 = *(int *)pppppppwVar14 + -1;
            UNLOCK();
            if (*(int *)pppppppwVar14 == 0) {
              (*(code *)**pppppppwStack_90)(pppppppwStack_90);
              LOCK();
              pwVar3 = (wchar_t *)((longlong)_Size + 0xc);
              *(int *)pwVar3 = *(int *)pwVar3 + -1;
              UNLOCK();
              if (*(int *)pwVar3 == 0) {
                (*(code *)(*_Size)[2])(_Size);
              }
            }
          }
          if (local_88 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          bVar26 = true;
          param_1 = local_e8;
          if (cVar4 == '\0') goto LAB_143e6c501;
          goto LAB_143e6c4f1;
        }
LAB_143e6c2d2:
        plVar12 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        _Size = pppppppwStack_90;
        pppppppwVar14 = local_88;
        if (pppppppwStack_90 != (wchar_t *******)0x0) {
          LOCK();
          pppppppwVar25 = pppppppwStack_90 + 1;
          *(int *)pppppppwVar25 = *(int *)pppppppwVar25 + -1;
          UNLOCK();
          pppppppwVar14 = local_88;
          if (*(int *)pppppppwVar25 == 0) {
            (*(code *)**pppppppwStack_90)(pppppppwStack_90);
            LOCK();
            pwVar3 = (wchar_t *)((longlong)_Size + 0xc);
            *(int *)pwVar3 = *(int *)pwVar3 + -1;
            UNLOCK();
            pppppppwVar14 = local_88;
            if (*(int *)pwVar3 == 0) {
              (*(code *)(*_Size)[2])(_Size);
              pppppppwVar14 = local_88;
            }
          }
        }
        goto joined_r0x000143e6c780;
      }
      if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c951a98) != 0) goto LAB_143e6c26e;
LAB_143e6c394:
      _Size = (wchar_t *******)plVar23[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1))
      {
        local_118 = (undefined *)FUN_1446ddbd2();
        local_110 = FUN_140fb5c52;
        puStack_120 = (undefined *)0x0;
        local_128 = 0x40008001;
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
      if (DAT_14c963e98 == 0) {
        bVar26 = _Size != (wchar_t *******)0x0;
        if (_Size != (wchar_t *******)&DAT_14c963e90 && bVar26) {
          do {
            _Size = (wchar_t *******)_Size[6];
            bVar26 = _Size != (wchar_t *******)0x0;
            if (_Size == (wchar_t *******)&DAT_14c963e90) break;
          } while (_Size != (wchar_t *******)0x0);
        }
        if (bVar26) goto LAB_143e6c3d8;
      }
      else if (((ulonglong)_Size[3] & DAT_14c963e98) != 0) {
LAB_143e6c3d8:
        bVar26 = true;
        param_1 = local_e8;
        if (*(char *)pppppppwVar14 != '\x06') goto LAB_143e6c501;
        local_78 = (wchar_t *******)0x0;
        uStack_70 = 0;
        FUN_140b74118(pppppppwVar14,&local_78);
        FUN_140009b9a(&local_88,&local_78);
        _Size = (wchar_t *******)*pppppppwVar25;
        if (_Size != local_88) {
          *pppppppwVar25 = (wchar_t ******)local_88;
          if (local_88 != (wchar_t *******)0x0) {
            (*(code *)(*local_88)[1])();
          }
          if (_Size != (wchar_t *******)0x0) {
            (*(code *)(*_Size)[2])(_Size);
          }
        }
        *(int *)(pppppppwVar25 + 1) = (int)uStack_80;
        pppppppwVar13 = local_78;
        if (local_88 != (wchar_t *******)0x0) {
          (*(code *)(*local_88)[2])();
          pppppppwVar13 = local_78;
        }
        goto LAB_143e6c0a2;
      }
      _Size = (wchar_t *******)plVar23[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_118 = (undefined *)FUN_1446ddbd2();
        local_110 = FUN_1403a682c;
        puStack_120 = (undefined *)0x0;
        local_128 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar26 = _Size != (wchar_t *******)0x0;
        if (_Size != (wchar_t *******)&DAT_14c952a08 && bVar26) {
          do {
            _Size = (wchar_t *******)_Size[6];
            bVar26 = _Size != (wchar_t *******)0x0;
            if (_Size == (wchar_t *******)&DAT_14c952a08) break;
          } while (_Size != (wchar_t *******)0x0);
        }
        if (!bVar26) {
LAB_143e6c7df:
          if (*(char *)pppppppwVar14 == '\x06') {
            local_78 = (wchar_t *******)0x0;
            uStack_70 = 0;
            FUN_140b74118(pppppppwVar14,&local_78);
            pppppppwVar14 = local_78;
            if ((int)uStack_70 == 0) {
              pppppppwVar14 = (wchar_t *******)&DAT_149dfb77a;
            }
            if (pppppppwVar14 == (wchar_t *******)0x0) {
              bVar27 = true;
            }
            else {
              local_118 = DAT_14c872be8;
              puStack_120 = (undefined *)CONCAT44(puStack_120._4_4_,0x8000000);
              local_128 = 0;
              lVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23,pppppppwVar14,pppppppwVar25);
              bVar27 = lVar18 == 0;
            }
            if (local_78 != (wchar_t *******)0x0) {
              FUN_1400020a8();
            }
            bVar26 = true;
            param_1 = local_e8;
            if (bVar27) goto LAB_143e6c501;
          }
          goto LAB_143e6c4f1;
        }
      }
      else if (((ulonglong)_Size[3] & DAT_14c952a10) == 0) goto LAB_143e6c7df;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e120) && (FUN_144b3d300(&DAT_14cb8e120), DAT_14cb8e120 == -1))
      {
        FUN_1446f470e(&DAT_14cb8e118,L"DateTime");
        _Init_thread_footer(&DAT_14cb8e120);
      }
      if ((*(char *)pppppppwVar14 != '\x06') ||
         (*(longlong *)(plVar23[0xe] + 0x18) != DAT_14cb8e118)) {
        local_88 = (wchar_t *******)0x0;
        uStack_80 = 0;
        FUN_140b74118(pppppppwVar14,&local_88);
        plVar12 = *(longlong **)(plVar23[0xe] + 0xb8);
        lVar18 = FUN_145c518a2();
        if ((plVar12 == (longlong *)0x0) ||
           ((plVar23[0xe] == lVar18 ||
            ((**(code **)(*plVar12 + 8))(plVar12,&local_78), (uStack_70 & 0x1000000000000) == 0))))
        {
          local_98 = 0;
          pppppppwStack_90 = (wchar_t *******)0x0;
          FUN_14047afda(&local_a8,&local_88);
          bVar5 = FUN_14047b282(local_a8,&local_98,0);
          lVar18 = local_98;
          if ((local_98 != 0 & bVar5) != 1) goto LAB_143e6c2d2;
          FUN_1468c80a4(plVar23,&local_c8);
          iVar11 = local_c0 + -1;
          if (local_c0 == 0) {
            iVar11 = 0;
          }
          local_78 = local_c8;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar11);
          FUN_14047e0ee(lVar18,local_b8,&local_78);
          local_108 = 0;
          uStack_100 = 0;
          local_128 = 0;
          puStack_120 = (undefined *)0x0;
          local_110 = (code *)((ulonglong)local_110 & 0xffffffffffffff00);
          local_118 = (undefined *)0x0;
          cVar4 = FUN_142a66f13(local_b8,plVar23,pppppppwVar25);
          plVar12 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          if (local_c8 != (wchar_t *******)0x0) {
            FUN_1400020a8();
          }
          plVar12 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          _Size = pppppppwStack_90;
          if (pppppppwStack_90 != (wchar_t *******)0x0) {
            LOCK();
            pppppppwVar14 = pppppppwStack_90 + 1;
            *(int *)pppppppwVar14 = *(int *)pppppppwVar14 + -1;
            UNLOCK();
            if (*(int *)pppppppwVar14 == 0) {
              (*(code *)**pppppppwStack_90)(pppppppwStack_90);
              LOCK();
              pwVar3 = (wchar_t *)((longlong)_Size + 0xc);
              *(int *)pwVar3 = *(int *)pwVar3 + -1;
              UNLOCK();
              if (*(int *)pwVar3 == 0) {
                (*(code *)(*_Size)[2])(_Size);
              }
            }
          }
          pppppppwVar13 = local_88;
          pppppppwVar14 = local_88;
          if (cVar4 == '\0') goto joined_r0x000143e6c780;
        }
        else {
          local_78 = (wchar_t *******)&DAT_149dfb77a;
          if ((int)uStack_80 != 0) {
            local_78 = local_88;
          }
          puStack_120 = DAT_14c872be8;
          local_128 = 0;
          cVar4 = (**(code **)(*plVar12 + 0x78))(plVar12,&local_78,pppppppwVar25);
          pppppppwVar13 = local_88;
          if ((cVar4 == '\0') && (local_78 != (wchar_t *******)0x0)) {
            local_118 = DAT_14c872be8;
            puStack_120 = (undefined *)CONCAT44(puStack_120._4_4_,0x8000000);
            local_128 = 0;
            (**(code **)(*plVar23 + 0xf8))(plVar23,local_78,pppppppwVar25);
            pppppppwVar13 = local_88;
          }
        }
        goto LAB_143e6c0a2;
      }
      local_78 = (wchar_t *******)0x0;
      uStack_70 = 0;
      FUN_140b74118(pppppppwVar14,&local_78);
      pppppppwVar14 = local_78;
      if ((int)uStack_70 == 0) {
        pppppppwVar14 = (wchar_t *******)&DAT_149dfb77a;
      }
      lVar18 = 0;
      while( true ) {
        uVar6 = *(ushort *)((longlong)pppppppwVar14 + lVar18);
        uVar9 = (ulonglong)uVar6;
        uVar21 = *(ushort *)((longlong)&DAT_149e25ba0 + lVar18);
        if (uVar6 != uVar21) break;
        if (uVar6 == 0) goto LAB_143e6c78e;
LAB_143e6c67d:
        lVar18 = lVar18 + 2;
      }
      if ((uVar21 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar20 = (ulonglong)uVar21;
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143e6c67d;
      }
      if (uVar6 != uVar21) {
        lVar18 = 0;
        goto LAB_143e6c6bc;
      }
LAB_143e6c78e:
      *pppppppwVar25 = (wchar_t ******)0x0;
      goto LAB_143e6c795;
    }
    bVar26 = puVar16 != (undefined *)0x0;
    if (puVar16 != &DAT_14c9520b8 && bVar26) {
      do {
        puVar16 = *(undefined **)(puVar16 + 0x30);
        bVar26 = puVar16 != (undefined *)0x0;
        if (puVar16 == &DAT_14c9520b8) break;
      } while (puVar16 != (undefined *)0x0);
    }
    if (!bVar26) goto LAB_143e6bf29;
LAB_143e6be02:
    lVar18 = (**(code **)(*plVar23 + 0x1f0))(plVar23);
    if ((lVar18 != 0) && (*(char *)pppppppwVar14 == '\x06')) {
      _Size = (wchar_t *******)(**(code **)(*plVar23 + 0x1f0))(plVar23);
      local_78 = (wchar_t *******)0x0;
      uStack_70 = 0;
      FUN_140b74118(pppppppwVar14,&local_78);
      pppppppwVar14 = (wchar_t *******)&DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        pppppppwVar14 = local_78;
      }
      FUN_1446f470e(&local_88,pppppppwVar14,1);
      iVar11 = FUN_1448e5bf4(_Size,local_88,0);
      pppppppwVar14 = local_78;
      if ((iVar11 == -1) || (*(int *)(_Size[8] + (longlong)iVar11 * 2 + 1) == -1))
      goto joined_r0x000143e6c780;
      pppppwVar19 = (wchar_t *****)(longlong)*(int *)(_Size[8] + (longlong)iVar11 * 2 + 1);
      lVar18 = *plVar23;
      plVar12 = plVar23;
LAB_143e6c091:
      (**(code **)(lVar18 + 0x1f8))(plVar12,pppppppwVar25,pppppwVar19);
      pppppppwVar13 = local_78;
LAB_143e6c0a2:
      if (pppppppwVar13 == (wchar_t *******)0x0) goto LAB_143e6c4f1;
      goto LAB_143e6c0ab;
    }
    cVar4 = (**(code **)(*plVar23 + 0x1e0))(plVar23);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*plVar23 + 0x1e8))(plVar23);
      bVar26 = true;
      param_1 = local_e8;
      if (cVar4 == '\0') goto LAB_143e6c501;
      switch(*(char *)pppppppwVar14) {
      case '\x01':
        ppppppwVar28 = (wchar_t ******)(longlong)*(int *)(_Size + 3);
        break;
      case '\x02':
        ppppppwVar28 = (wchar_t ******)(ulonglong)*(uint *)(_Size + 3);
        break;
      case '\x03':
      case '\x04':
        ppppppwVar28 = _Size[3];
        break;
      case '\x05':
        ppppppwVar28 = (wchar_t ******)(longlong)(double)_Size[3];
        break;
      case '\x06':
        local_78 = (wchar_t *******)0x0;
        uStack_70 = 0;
        FUN_140b74118(pppppppwVar14,&local_78);
        pppppppwVar14 = (wchar_t *******)&DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          pppppppwVar14 = local_78;
        }
        lVar18 = _wtoi64((wchar_t *)pppppppwVar14);
        (**(code **)(*plVar23 + 0x1f8))(plVar23,pppppppwVar25,lVar18);
        pppppppwVar13 = local_78;
        goto LAB_143e6c0a2;
      case '\a':
        ppppppwVar28 = (wchar_t ******)(longlong)*(float *)(_Size + 3);
        break;
      default:
        ppppppwVar28 = (wchar_t ******)0x0;
      }
      (**(code **)(*plVar23 + 0x1f8))(plVar23,pppppppwVar25,ppppppwVar28);
    }
    else {
      if (*(char *)pppppppwVar14 == '\a') {
        ppppppwVar28 = (wchar_t ******)(double)*(float *)(_Size + 3);
      }
      else {
        if (*(char *)pppppppwVar14 != '\x05') goto LAB_143e6c4f1;
        ppppppwVar28 = _Size[3];
      }
      (**(code **)(*plVar23 + 0x208))(plVar23,pppppppwVar25,ppppppwVar28);
    }
    goto LAB_143e6c4f1;
  }
  goto LAB_143e6c501;
LAB_143e6c6bc:
  uVar6 = *(ushort *)((longlong)pppppppwVar14 + lVar18);
  uVar9 = (ulonglong)uVar6;
  uVar21 = *(ushort *)((longlong)&DAT_149f7e63e + lVar18);
  if (uVar6 == uVar21) {
    if (uVar6 == 0) goto LAB_143e6cc35;
LAB_143e6c6d5:
    lVar18 = lVar18 + 2;
    goto LAB_143e6c6bc;
  }
  if ((uVar21 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar20 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143e6c6d5;
  }
  if (uVar6 != uVar21) {
    lVar18 = 0;
    goto LAB_143e6c715;
  }
LAB_143e6cc35:
  *pppppppwVar25 = (wchar_t ******)0x2bca2875f4373fff;
  goto LAB_143e6c795;
LAB_143e6c715:
  uVar6 = *(ushort *)((longlong)pppppppwVar14 + lVar18);
  uVar9 = (ulonglong)uVar6;
  uVar21 = *(ushort *)((longlong)&DAT_149f7e646 + lVar18);
  if (uVar6 == uVar21) {
    if (uVar6 == 0) goto LAB_143e6cc47;
LAB_143e6c72c:
    lVar18 = lVar18 + 2;
    goto LAB_143e6c715;
  }
  if ((uVar21 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar20 = (ulonglong)uVar21;
    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar20]) goto LAB_143e6c72c;
  }
  if (uVar6 != uVar21) {
    cVar4 = FUN_14170a85e(pppppppwVar14,pppppppwVar25);
    pppppppwVar14 = local_78;
    if (cVar4 == '\0') goto joined_r0x000143e6c780;
    goto LAB_143e6c795;
  }
LAB_143e6cc47:
  FUN_140212f8e(&local_88);
  *pppppppwVar25 = (wchar_t ******)local_88;
LAB_143e6c795:
  pppppppwVar13 = local_78;
  if (local_78 != (wchar_t *******)0x0) {
LAB_143e6c0ab:
    FUN_1400020a8(pppppppwVar13);
  }
LAB_143e6c4f1:
  bVar26 = false;
  param_1 = local_e8;
LAB_143e6c501:
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar26) {
    _Size = (wchar_t *******)0x0;
  }
  else {
    plVar23 = plVar23 + 3;
    do {
      for (plVar23 = (longlong *)*plVar23; plVar23 != (longlong *)0x0;
          plVar23 = (longlong *)plVar23[3]) {
        param_2 = local_f0;
        plVar12 = local_e8;
        if ((~*(uint *)(plVar23[1] + 0x18) & 0x8001) == 0) goto LAB_143e6bc2b;
      }
      local_f0 = (longlong *)(**(code **)(*local_f0 + 0x2b0))();
      plVar23 = local_f0 + 10;
    } while (local_f0 != (longlong *)0x0);
    _Size = (wchar_t *******)CONCAT71((int7)((ulonglong)_Size >> 8),1);
  }
  goto LAB_143e6d015;
}



// FUNCTION 143e6d052 FUN_143e6d052 body=428 status=ok
// SIG undefined FUN_143e6d052(void)

ulonglong FUN_143e6d052(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                       ulonglong param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68 [2];
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_70 = param_2;
  do {
    if (param_1 == (longlong *)0x0) {
LAB_143e6d1d0:
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return uVar4 & 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    for (lVar6 = param_1[10]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
      local_78 = param_1;
      if ((~*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) & 0x8001) == 0) {
LAB_143e6d0e1:
        if ((((param_4 == 0) || (param_4 == 0xffffffffffffffff)) ||
            ((*(ulonglong *)(lVar6 + 0x38) & param_4) != 0)) &&
           ((param_5 != 0xffffffffffffffff && ((*(ulonglong *)(lVar6 + 0x38) & param_5) == 0)))) {
          FUN_1400021e4(lVar6 + 0x20,local_68);
          iVar1 = *(int *)(lVar6 + 0x44);
          local_58 = local_68;
          FUN_1489bb46a(param_3,&local_4c,&local_58);
          lVar7 = *param_3 + (longlong)local_4c * 0x38 + 0x10;
          if (*(int *)(lVar6 + 0x30) == 1) {
            cVar3 = FUN_1489b774a(lVar6,iVar1 + local_70,lVar7);
            bVar2 = true;
            if (cVar3 == '\0') goto LAB_143e6d18d;
          }
          else {
LAB_143e6d18d:
            FUN_140c3a2ac(lVar7);
            bVar2 = false;
          }
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (!bVar2) {
            uVar4 = 0;
            goto LAB_143e6d1d0;
          }
        }
        plVar5 = (longlong *)(lVar6 + 0x18);
        do {
          for (lVar6 = *plVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) & 0x8001) == 0) goto LAB_143e6d0e1;
          }
          local_78 = (longlong *)(**(code **)(*local_78 + 0x2b0))();
          plVar5 = local_78 + 10;
        } while (local_78 != (longlong *)0x0);
        uVar4 = CONCAT71((int7)((ulonglong)&local_58 >> 8),1);
        goto LAB_143e6d1d0;
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  } while( true );
}



// FUNCTION 143e6d200 FUN_143e6d200 body=1089 status=ok
// SIG undefined FUN_143e6d200(void)

void FUN_143e6d200(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t **ppwVar3;
  int iVar4;
  int iVar5;
  wchar_t **ppwVar6;
  char cVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  uint *puVar21;
  double dVar22;
  undefined1 auStack_118 [36];
  uint local_f4;
  uint *local_f0;
  longlong local_e8;
  longlong local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  wchar_t **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_14047afda(&local_98);
  cVar7 = FUN_14047b282(local_98,&local_88,0);
  if ((cVar7 != '\0') && (local_88 != 0)) {
    local_d8 = L"Attrs";
    local_d0 = CONCAT44(local_d0._4_4_,5);
    local_e8 = param_1;
    cVar7 = FUN_146843260(local_88,&local_d8,6);
    if (cVar7 != '\0') {
      local_a8 = L"Attrs";
      local_a0 = 5;
      plVar8 = (longlong *)FUN_14047df14(local_88);
      plVar8 = (longlong *)*plVar8;
      puVar21 = (uint *)(plVar8 + 2);
      iVar4 = (int)plVar8[5];
      if (iVar4 == 0) {
        uVar20 = 1;
        uVar15 = 0;
        iVar19 = 0;
        iVar14 = 0;
      }
      else {
        puVar9 = (uint *)plVar8[4];
        if ((uint *)plVar8[4] == (uint *)0x0) {
          puVar9 = puVar21;
        }
        uVar16 = *puVar9;
        if (uVar16 == 0) {
          iVar19 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar19 = iVar4 + -1;
          }
          uVar15 = 0;
          uVar12 = (ulonglong)(uint)(iVar19 >> 5);
          if (iVar19 >> 5 < 1) {
            uVar12 = uVar15;
          }
          iVar19 = 0;
          do {
            if (uVar12 == uVar15) goto LAB_143e6d3d9;
            iVar19 = iVar19 + 0x20;
            uVar16 = puVar9[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar15 = 0;
          iVar19 = 0;
        }
        uVar20 = (ulonglong)(-uVar16 & uVar16);
        uVar12 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar14 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar14) {
          iVar14 = iVar4;
        }
      }
      if (iVar14 != iVar4) {
        local_e0 = local_e8 + 0x28;
        uVar16 = 0xffffffff;
        local_f0 = puVar21;
        do {
          lVar17 = *plVar8 + (longlong)iVar14 * 0x28;
          local_b8 = 0;
          uStack_b0 = 0;
          local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffffffffff00);
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          local_78 = *(longlong **)(lVar17 + 0x10);
          ppwVar6 = *(wchar_t ***)(lVar17 + 0x18);
          local_70 = ppwVar6;
          if (ppwVar6 == (wchar_t **)0x0) {
            cVar7 = FUN_143e6b7ce(&local_d8,lVar17,&local_78,&local_b8);
          }
          else {
            LOCK();
            *(int *)(ppwVar6 + 1) = *(int *)(ppwVar6 + 1) + 1;
            UNLOCK();
            local_f4 = uVar16;
            cVar7 = FUN_143e6b7ce(&local_d8,lVar17,&local_78,&local_b8);
            puVar21 = local_f0;
            uVar16 = local_f4;
            if (ppwVar6 != (wchar_t **)0x0) {
              LOCK();
              ppwVar3 = ppwVar6 + 1;
              *(int *)ppwVar3 = *(int *)ppwVar3 + -1;
              UNLOCK();
              if (*(int *)ppwVar3 == 0) {
                (**(code **)*ppwVar6)(ppwVar6);
                LOCK();
                piVar1 = (int *)((longlong)ppwVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                puVar21 = local_f0;
                uVar16 = local_f4;
                if (*piVar1 == 0) {
                  (**(code **)(*ppwVar6 + 8))(ppwVar6);
                  puVar21 = local_f0;
                  uVar16 = local_f4;
                }
              }
            }
          }
          if (cVar7 != '\0') {
            local_78 = &local_b8;
            local_70 = &local_d8;
            FUN_140dfa58e(local_e0,local_64,&local_78,0);
          }
          FUN_140c3a2ac(&local_d8);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          uVar16 = uVar16 & ~(uint)uVar20;
          puVar9 = (uint *)plVar8[4];
          if ((uint *)plVar8[4] == (uint *)0x0) {
            puVar9 = puVar21;
          }
          iVar5 = (int)plVar8[5];
          iVar14 = (int)uVar15;
          lVar17 = (longlong)iVar14;
          uVar13 = puVar9[lVar17] & uVar16;
          if (uVar13 == 0) {
            iVar10 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar10 = iVar5 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar19 = iVar19 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar14) {
              iVar11 = iVar14;
            }
            if (iVar14 < iVar10) {
              lVar18 = 0;
              do {
                uVar13 = puVar9[lVar17 + lVar18 + 1];
                if (uVar13 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar18 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_143e6d5d2;
                }
                iVar19 = iVar19 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar11 - lVar17 != lVar18);
              uVar16 = 0xffffffff;
              iVar14 = iVar11;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            puVar21 = local_f0;
            iVar14 = iVar5;
          }
          else {
LAB_143e6d5d2:
            uVar20 = (ulonglong)(-uVar13 & uVar13);
            uVar12 = uVar20 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar14 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar14) {
              iVar14 = iVar5;
            }
          }
        } while (iVar14 != iVar4);
      }
    }
LAB_143e6d3d9:
    local_d8 = L"Rev";
    local_d0 = CONCAT44(local_d0._4_4_,3);
    cVar7 = FUN_146843260(local_88,&local_d8,3);
    lVar17 = local_e8;
    if (cVar7 != '\0') {
      local_d8 = L"Rev";
      local_d0 = CONCAT44(local_d0._4_4_,3);
      dVar22 = (double)FUN_1468393c6(local_88);
      *(int *)(lVar17 + 0x24) = (int)dVar22;
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_90 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  plVar8 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6d6b1 FUN_143e6d6b1 body=1 status=ok
// SIG undefined FUN_143e6d6b1(void)

void FUN_143e6d6b1(void)

{
  return;
}



// FUNCTION 143e6d6b2 FUN_143e6d6b2 body=148 status=ok
// SIG undefined FUN_143e6d6b2(void)

undefined4 FUN_143e6d6b2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x38) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          return *(undefined4 *)(lVar3 + 0x28);
        }
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 143e6d834 FUN_143e6d834 body=69 status=ok
// SIG undefined FUN_143e6d834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e6d834(void)

{
  _DAT_14cb8e308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e6d876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8e310,1);
  return;
}



// FUNCTION 143e6d885 FUN_143e6d885 body=69 status=ok
// SIG undefined FUN_143e6d885(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e6d885(void)

{
  _DAT_14cb8e340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e6d8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8e348,1);
  return;
}



// FUNCTION 143e6d8ca FUN_143e6d8ca body=254 status=ok
// SIG undefined FUN_143e6d8ca(void)

longlong * FUN_143e6d8ca(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14099d55c(DAT_14cb8e350,&local_28,0);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
      local_20 = (int)param_1[1];
      goto LAB_143e6d92e;
    }
LAB_143e6d933:
    local_38 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystem",L"LocalPlatformName",param_1);
    local_20 = (int)param_1[1];
    if (local_20 < 2) {
      FUN_14020fad6(param_1,L"OTHER");
      goto LAB_143e6d9a8;
    }
  }
  else {
    *param_1 = local_28;
    *(int *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
LAB_143e6d92e:
    if (local_20 < 2) goto LAB_143e6d933;
  }
  lVar2 = *param_1;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(lVar2 + uVar3 * 2);
    *(ushort *)(lVar2 + uVar3 * 2) = uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20 + -0x20;
    uVar3 = uVar3 + 1;
  } while (local_20 - 1 != uVar3);
LAB_143e6d9a8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6d9c9 FUN_143e6d9c9 body=69 status=ok
// SIG undefined FUN_143e6d9c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e6d9c9(void)

{
  _DAT_14cb8e358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e6da0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8e360,1);
  return;
}



// FUNCTION 143e6ed1a FUN_143e6ed1a body=166 status=ok
// SIG undefined FUN_143e6ed1a(void)

void FUN_143e6ed1a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x98))(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*local_28 + 0x40))(local_28,param_2,&local_38);
    FUN_145842369(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6edc2 FUN_143e6edc2 body=67 status=ok
// SIG undefined FUN_143e6edc2(void)

void FUN_143e6edc2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_143e6ed1a(param_1,*param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000143e6edfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e6ee05 FUN_143e6ee05 body=49 status=ok
// SIG undefined FUN_143e6ee05(void)

void FUN_143e6ee05(void)

{
  FUN_144760e21(DAT_14cb8e380,DAT_14cb8e388);
  if (DAT_14cb8e380 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e6ee36 FUN_143e6ee36 body=305 status=ok
// SIG undefined FUN_143e6ee36(void)

ulonglong FUN_143e6ee36(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_1400021e4(&local_28,local_38);
  local_40 = 0;
  cVar2 = FUN_14154b114(&local_28);
  if (((cVar2 != '\0') && (lVar3 = FUN_143e6ef68(local_38,param_1 + 0x30), lVar3 != 0)) &&
     ((int)param_1[0xe] != *(int *)((longlong)param_1 + 0x9c))) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    plVar4 = param_1 + 0x14;
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x15];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x16] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(param_1[0xd] + (longlong)iVar6 * 0x18) == param_2) {
          lVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
          if (lVar3 != 0) {
            param_1[1] = param_2;
            uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            goto LAB_143e6ef38;
          }
          break;
        }
        iVar6 = *(int *)(param_1[0xd] + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar7 = 0;
LAB_143e6ef38:
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143e6ef68 FUN_143e6ef68 body=305 status=ok
// SIG undefined FUN_143e6ef68(void)

undefined8 FUN_143e6ef68(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(local_30,puVar3,1);
  cVar1 = FUN_14154b114(local_30,&local_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_140a684bb(&local_28,param_1,param_2);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    uVar2 = local_28;
    cVar1 = FUN_14011feae(&DAT_14c874628,local_28);
    if (cVar1 == '\0') {
      FUN_1402c9134(&DAT_14c874628,uVar2,local_30,0);
    }
    uVar2 = FUN_1401e3324(&DAT_14c874628,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6f09a FUN_143e6f09a body=241 status=ok
// SIG undefined FUN_143e6f09a(void)

undefined8 * FUN_143e6f09a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar4 = *param_3;
    uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar9 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar3 = *param_2 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*param_2 + (longlong)iVar9 * 0x20) == lVar4) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return param_1;
          }
          uVar5 = *(undefined8 *)(lVar3 + 8);
          lVar4 = *(longlong *)(lVar3 + 0x10);
          if (lVar4 == 0) {
            *param_1 = uVar5;
            param_1[1] = 0;
            return param_1;
          }
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[1];
          *param_1 = uVar5;
          param_1[1] = lVar4;
          if (plVar7 == (longlong *)0x0) {
            return param_1;
          }
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_1;
          }
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_1;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
          return param_1;
        }
        iVar9 = *(int *)(lVar3 + 0x18);
      } while (iVar9 != -1);
    }
  }
  return param_1;
}



// FUNCTION 143e6f18c FUN_143e6f18c body=336 status=ok
// SIG undefined FUN_143e6f18c(void)

void FUN_143e6f18c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_68 = &local_58;
  local_58 = 0;
  local_48 = param_2;
  FUN_140a6868c(param_1,&local_60,&local_48,&local_50);
  if (local_50 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x108);
    EnterCriticalSection(lpCriticalSection);
    plVar2 = (longlong *)(param_1 + 0xb8);
    FUN_1489bde62(plVar2,&local_3c,local_60);
    if ((longlong)local_3c == -1) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      lVar3 = *plVar2;
      lVar6 = (longlong)local_3c * 0x20;
      plVar4 = *(longlong **)(lVar3 + 8 + lVar6);
      plVar5 = *(longlong **)(lVar3 + 0x10 + lVar6);
      *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + lVar6 + 0x10) = 0;
      }
      FUN_1489bdee6(plVar2);
      LeaveCriticalSection(lpCriticalSection);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x150))(plVar4);
        FUN_144a8b5fe(param_1 + 0x130,local_60);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6f390 FUN_143e6f390 body=29 status=ok
// SIG undefined FUN_143e6f390(void)

undefined8 FUN_143e6f390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6f3c2 FUN_143e6f3c2 body=85 status=ok
// SIG undefined FUN_143e6f3c2(void)

void FUN_143e6f3c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438310;
  return;
}



// FUNCTION 143e6f418 FUN_143e6f418 body=85 status=ok
// SIG undefined FUN_143e6f418(void)

void FUN_143e6f418(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438310;
  return;
}



// FUNCTION 143e6f46e FUN_143e6f46e body=118 status=ok
// SIG undefined FUN_143e6f46e(void)

void FUN_143e6f46e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438310;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6f4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6f4e4 FUN_143e6f4e4 body=59 status=ok
// SIG undefined FUN_143e6f4e4(void)

void FUN_143e6f4e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e6f55e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6f520 FUN_143e6f520 body=61 status=ok
// SIG undefined FUN_143e6f520(void)

undefined8 FUN_143e6f520(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e6f55e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6f55e FUN_143e6f55e body=132 status=ok
// SIG undefined FUN_143e6f55e(void)

void FUN_143e6f55e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)*param_1 + 0xc0))((longlong *)*param_1,&local_20);
  puVar2 = local_20;
  if (local_18 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_1407bb416();
  FUN_145d61a94(uVar1,DAT_14cb8e330,puVar2,0xffffffff);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e6f5e4 FUN_143e6f5e4 body=29 status=ok
// SIG undefined FUN_143e6f5e4(void)

undefined8 FUN_143e6f5e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6f616 FUN_143e6f616 body=85 status=ok
// SIG undefined FUN_143e6f616(void)

void FUN_143e6f616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438540;
  return;
}



// FUNCTION 143e6f66c FUN_143e6f66c body=85 status=ok
// SIG undefined FUN_143e6f66c(void)

void FUN_143e6f66c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438540;
  return;
}



// FUNCTION 143e6f6c2 FUN_143e6f6c2 body=118 status=ok
// SIG undefined FUN_143e6f6c2(void)

void FUN_143e6f6c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438540;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6f729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6f73e FUN_143e6f73e body=83 status=ok
// SIG undefined FUN_143e6f73e(void)

undefined8 * FUN_143e6f73e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4385b0;
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 143e6f7a6 FUN_143e6f7a6 body=110 status=ok
// SIG undefined FUN_143e6f7a6(void)

void FUN_143e6f7a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438620;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4385b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e6f814 FUN_143e6f814 body=110 status=ok
// SIG undefined FUN_143e6f814(void)

void FUN_143e6f814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438620;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4385b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e6f882 FUN_143e6f882 body=148 status=ok
// SIG undefined FUN_143e6f882(void)

void FUN_143e6f882(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438620;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4385b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6f906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6f920 FUN_143e6f920 body=20 status=ok
// SIG undefined FUN_143e6f920(void)

undefined1 FUN_143e6f920(longlong param_1)

{
  FUN_143e6f934(param_1 + 0x18);
  return 1;
}



// FUNCTION 143e6f934 FUN_143e6f934 body=95 status=ok
// SIG undefined FUN_143e6f934(void)

void FUN_143e6f934(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,&local_28);
  FUN_145c26966(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6f994 FUN_143e6f994 body=29 status=ok
// SIG undefined FUN_143e6f994(void)

undefined8 FUN_143e6f994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e6f9c6 FUN_143e6f9c6 body=93 status=ok
// SIG undefined FUN_143e6f9c6(void)

void FUN_143e6f9c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143e6fa24 FUN_143e6fa24 body=93 status=ok
// SIG undefined FUN_143e6fa24(void)

void FUN_143e6fa24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143e6fa82 FUN_143e6fa82 body=126 status=ok
// SIG undefined FUN_143e6fa82(void)

void FUN_143e6fa82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b438690;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e6faf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e6fb00 FUN_143e6fb00 body=66 status=ok
// SIG undefined FUN_143e6fb00(void)

void FUN_143e6fb00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143e6fb8a(param_1 + 0x18,param_2,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6fb44 FUN_143e6fb44 body=68 status=ok
// SIG undefined FUN_143e6fb44(void)

undefined8 FUN_143e6fb44(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143e6fb8a(param_1 + 0x18,param_2,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6fb8a FUN_143e6fb8a body=191 status=ok
// SIG undefined FUN_143e6fb8a(void)

void FUN_143e6fb8a(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == '\x01') {
    (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      (**(code **)(*local_28 + 0x68))(local_28,param_2,&local_38);
      plVar3 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e6fc55 FUN_143e6fc55 body=2342 status=ok
// SIG undefined FUN_143e6fc55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e6fc55(void)

{
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_6c [4];
  wchar_t *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14098d3d2(FUN_143e6adb8,L"/Script/OnlineSubsystem",L"EInAppPurchaseState",&DAT_14cb8e030);
  FUN_14098d3d2(FUN_143e6adf1,L"/Script/OnlineSubsystem",L"EMPMatchOutcome",&DAT_14cb8e060);
  FUN_1446f470e(&DAT_14cb8e078,L"UNSET",1);
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OnlineSubsystem",&PTR_FUN_14b435f30,1,&PTR_FUN_14b435ee0);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  DAT_14cb8e138 = (ulonglong)DAT_14c892e70;
  local_68 = L"Online";
  local_60 = 6;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"OnlinePresence";
  local_60 = 0xe;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Online";
  local_60 = 6;
  FUN_140208c1e(&DAT_14cb8e140,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_143e6d642);
  local_68 = L"Offline";
  local_60 = 7;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"OnlinePresence";
  local_60 = 0xe;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Offline";
  local_60 = 7;
  FUN_140208c1e(&DAT_14cb8e150,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_143e6d656);
  local_68 = L"Away";
  local_60 = 4;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"OnlinePresence";
  local_60 = 0xe;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Away";
  local_60 = 4;
  FUN_140208c1e(&DAT_14cb8e160,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_143e6d66a);
  local_68 = L"DoNotDisturb";
  local_60 = 0xc;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"OnlinePresence";
  local_60 = 0xe;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Do Not Disturb";
  local_60 = 0xe;
  FUN_140208c1e(&DAT_14cb8e170,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_143e6d67e);
  local_68 = L"Chat";
  local_60 = 4;
  FUN_1446e940c(&local_54,&local_68);
  local_68 = L"OnlinePresence";
  local_60 = 0xe;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = L"Chat";
  local_60 = 4;
  FUN_140208c1e(&DAT_14cb8e180,local_6c,&local_54,&local_68);
  atexit((_func_5014 *)&LAB_143e6d692);
  FUN_1446f470e(&DAT_14cb8e190,L"PRESENCESEARCH",1);
  FUN_1446f470e(&DAT_14cb8e198,L"NULL",1);
  FUN_1446f470e(&DAT_14cb8e1a0,L"GOOGLEPLAY",1);
  FUN_1446f470e(&DAT_14cb8e1a8,&DAT_14a37f8b0,1);
  FUN_1446f470e(&DAT_14cb8e1b0,L"APPLE",1);
  FUN_1446f470e(&DAT_14cb8e1b8,L"AMAZON",1);
  FUN_1446f470e(&DAT_14cb8e1c0,L"GOOGLE",1);
  FUN_1446f470e(&DAT_14cb8e1c8,L"FACEBOOK",1);
  FUN_1446f470e(&DAT_14cb8e1d0,L"GAMECIRCLE",1);
  FUN_1446f470e(&DAT_14cb8e468,L"STEAM",1);
  FUN_1446f470e(&DAT_14cb8e1d8,&DAT_14b4367d0,1);
  FUN_1446f470e(&DAT_14cb8e1e0,L"PS4SERVER",1);
  FUN_1446f470e(&DAT_14cb8e1e8,&DAT_14b4367ec,1);
  FUN_1446f470e(&DAT_14cb8e1f0,&DAT_14b4367f4,1);
  FUN_1446f470e(&DAT_14cb8e1f8,L"THUNDERHEAD",1);
  FUN_1446f470e(&DAT_14cb8e200,&DAT_14b436814,1);
  FUN_1446f470e(&DAT_14cb8e208,L"TENCENT",1);
  FUN_1446f470e(&DAT_14cb8e210,L"NINTENDO",1);
  FUN_1446f470e(&DAT_14cb8e218,L"SAMSUNG",1);
  FUN_1446f470e(&DAT_14cb8e220,&DAT_14b43684e,1);
  FUN_140056680(&DAT_14cb8e470,L"RichPresence");
  atexit((_func_5014 *)&LAB_143e6d746);
  FUN_140056680(&DAT_14cb8e228,L"CustomData");
  atexit((_func_5014 *)&LAB_143e6d757);
  FUN_140056680(&DAT_14cb8e238,L"AppId");
  atexit((_func_5014 *)&LAB_143e6d768);
  FUN_140056680(&DAT_14cb8e248,L"ProductName");
  atexit((_func_5014 *)&LAB_143e6d779);
  FUN_140056680(&DAT_14cb8e258,L"Platform");
  atexit((_func_5014 *)&LAB_143e6d78a);
  FUN_140056680(&DAT_14cb8e268,L"OverrideAppId");
  atexit((_func_5014 *)&LAB_143e6d79b);
  FUN_140056680(&DAT_14cb8e278,L"SessionId");
  atexit((_func_5014 *)&LAB_143e6d7ac);
  FUN_140056680(&DAT_14cb8e288,L"ResourceKey");
  atexit((_func_5014 *)&LAB_143e6d7bd);
  FUN_140056680(&DAT_14cb8e298,L"auth_login");
  atexit((_func_5014 *)&LAB_143e6d7ce);
  FUN_140056680(&DAT_14cb8e2a8,L"auth_type");
  atexit((_func_5014 *)&LAB_143e6d7df);
  FUN_140056680(&DAT_14cb8e2b8,L"auth_password");
  atexit((_func_5014 *)&LAB_143e6d7f0);
  FUN_140056680(&DAT_14cb8e2c8,L"no_user_id");
  atexit((_func_5014 *)&LAB_143e6d801);
  FUN_140056680(&DAT_14cb8e2d8,L"no_auth_token");
  atexit((_func_5014 *)&LAB_143e6d812);
  FUN_140056680(&DAT_14cb8e2e8,L"no_auth_type");
  atexit((_func_5014 *)&LAB_143e6d823);
  FUN_140056680(&local_68,&DAT_149dfb77a);
  local_88 = CONCAT44(local_88._4_4_,1);
  FUN_140f510cc(&DAT_14cb8e340,L"oss.PlatformOverride",&local_68,
                L"Overrides the detected platform of this client for various debugging\nValid values WIN MAC PSN XBL IOS AND LIN SWT OTHER"
               );
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143e6d885);
  local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb8e358,L"OSS.VoiceLoopback",&local_68,
                L"Enables voice loopback\n1 Enabled. 0 Disabled.");
  atexit(FUN_143e6d9c9);
  FUN_1446f470e(&DAT_14cb8e370,L"DefaultInstance",1);
  local_68 = (wchar_t *)0x800000014b438d1e;
  local_54 = 0xf;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_14656420c(&local_68);
  DAT_14cb8e380 = 0;
  _DAT_14cb8e388 = 0;
  _DAT_14cb8e390 = 2;
  atexit(FUN_143e6ee05);
  FUN_1446f470e(&DAT_14cb8e398,L"OnMatchEnded",1);
  FUN_1446f470e(&DAT_14cb8e3a8,L"OnMatchReceivedTurn",1);
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_14282b410(L"/Script/OnlineSubsystem",&PTR_FUN_14b4379a0,1,0);
  FUN_1400b22c2(&DAT_14cb8e3d0,"errors.com.epicgames.localuser.invalid_localusernum");
  atexit((_func_5014 *)&LAB_143e6f2dd);
  FUN_1400b22c2(&DAT_14cb8e3e0,"errors.com.epicgames.account.no_cached_friend");
  atexit((_func_5014 *)&LAB_143e6f2ee);
  FUN_1400b22c2(&DAT_14cb8e3f0,"errors.com.epicgames.account.account_does_not_exist");
  atexit((_func_5014 *)&LAB_143e6f2ff);
  FUN_1400b22c2(&DAT_14cb8e400,"errors.com.epicgames.account.friendship_already_exists");
  atexit((_func_5014 *)&LAB_143e6f310);
  FUN_1400b22c2(&DAT_14cb8e410,"errors.com.epicgames.users.invalid_userid");
  atexit((_func_5014 *)&LAB_143e6f321);
  FUN_1400b22c2(&DAT_14cb8e420,"something");
  atexit((_func_5014 *)&LAB_143e6f332);
  FUN_1400b22c2(&DAT_14cb8e430,"Friend not found");
  atexit((_func_5014 *)&LAB_143e6f343);
  FUN_1400b22c2(&DAT_14cb8e440,"BlockedPlayers");
  atexit((_func_5014 *)&LAB_143e6f354);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e705e0 FUN_143e705e0 body=662 status=ok
// SIG undefined FUN_143e705e0(void)

void FUN_143e705e0(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&DAT_14cb8e48c,L"UNSET",1);
  local_50 = L"Online";
  local_48 = 6;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Online";
  local_48 = 6;
  FUN_140208c1e(&DAT_14cb8e498,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e7057c);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_140208c1e(&DAT_14cb8e4a8,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e70590);
  local_50 = L"Away";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Away";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb8e4b8,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e705a4);
  local_50 = L"DoNotDisturb";
  local_48 = 0xc;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Do Not Disturb";
  local_48 = 0xe;
  FUN_140208c1e(&DAT_14cb8e4c8,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e705b8);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb8e4d8,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e705cc);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e708dc FUN_143e708dc body=662 status=ok
// SIG undefined FUN_143e708dc(void)

void FUN_143e708dc(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&DAT_14cb8e4e8,L"UNSET",1);
  local_50 = L"Online";
  local_48 = 6;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Online";
  local_48 = 6;
  FUN_140208c1e(&DAT_14cb8e4f0,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e70878);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Offline";
  local_48 = 7;
  FUN_140208c1e(&DAT_14cb8e500,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e7088c);
  local_50 = L"Away";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Away";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb8e510,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e708a0);
  local_50 = L"DoNotDisturb";
  local_48 = 0xc;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Do Not Disturb";
  local_48 = 0xe;
  FUN_140208c1e(&DAT_14cb8e520,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e708b4);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"OnlinePresence";
  local_48 = 0xe;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Chat";
  local_48 = 4;
  FUN_140208c1e(&DAT_14cb8e530,local_58,local_54,&local_50);
  atexit((_func_5014 *)&LAB_143e708c8);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e70b74 FUN_143e70b74 body=57 status=ok
// SIG undefined FUN_143e70b74(void)

void FUN_143e70b74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb8e560 == 0) {
    uVar1 = FUN_1465645b9();
    DAT_14cb8e560 = FUN_14171c317(FUN_1465645e8,uVar1,L"ECoherentRenderingSettingsSeverity");
  }
  return;
}



// FUNCTION 143e70bae FUN_143e70bae body=2048 status=ok
// SIG undefined FUN_143e70bae(void)

void FUN_143e70bae(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  int iStack_bc;
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [2];
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  local_88 = L"CoherentRenderingPlugin";
  local_80 = 0x17;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_78);
  (**(code **)(*local_78 + 0x20))(local_78,&local_58);
  local_48 = local_58;
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = 0;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  local_38 = L"Shaders";
  local_30 = 7;
  FUN_140bee87a(local_68,&local_48,2);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_70 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plStack_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
      }
    }
  }
  FUN_140056680(&local_48,L"/Plugin/CoherentRenderingPlugin");
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  DAT_14cb8e590 = param_1;
  FUN_14020fad6(&local_78,L"Win64");
  FUN_140056680(&local_98,L"Release");
  iVar4 = (int)plStack_70;
  FUN_140056680(&local_48);
  iVar2 = (int)local_40;
  iVar5 = (uint)((int)local_40 == 0) + iVar4 + (uint)(iVar4 == 0);
  local_c8 = local_48;
  local_48 = (undefined2 *)0x0;
  local_c0 = (int)local_40;
  iVar4 = local_40._4_4_;
  iStack_bc = local_40._4_4_;
  local_40 = 0;
  iVar9 = iVar5 + iVar2;
  if (iVar9 < iVar2) {
LAB_143e7135e:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar5);
  }
  if (-1 < iVar9) {
    if ((iVar4 < iVar9) && (FUN_1446f8c06(&local_c8), local_48 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    iVar4 = (int)plStack_70 + -1;
    if ((int)plStack_70 == 0) {
      iVar4 = 0;
    }
    FUN_1401aebe8(&local_c8,local_78,iVar4);
    iVar2 = iStack_bc;
    iVar4 = local_c0;
    iVar10 = local_90 + -1;
    if (local_90 == 0) {
      iVar10 = 0;
    }
    iVar5 = iVar10 + 1 + (uint)(local_c0 == 0);
    local_b8 = local_c8;
    local_c8 = (undefined2 *)0x0;
    local_b0 = local_c0;
    local_ac = iStack_bc;
    local_c0 = 0;
    iStack_bc = 0;
    iVar9 = iVar5 + iVar4;
    if (iVar9 < iVar4) goto LAB_143e7135e;
    if (-1 < iVar9) {
      if (iVar2 < iVar9) {
        FUN_1446f8c06(&local_b8);
      }
      FUN_1401aebe8(&local_b8,local_98,iVar10);
      FUN_145ef8e44(&local_58);
      iVar4 = local_b0 + -1;
      if (local_b0 == 0) {
        iVar4 = 0;
      }
      iVar2 = (int)local_50;
      iVar5 = iVar4 + 1 + (uint)((int)local_50 == 0);
      local_48 = local_58;
      local_58 = (undefined2 *)0x0;
      iVar10 = local_50._4_4_;
      local_40 = local_50;
      local_50 = 0;
      iVar9 = iVar5 + iVar2;
      if (iVar9 < iVar2) goto LAB_143e7135e;
      if (-1 < iVar9) {
        if (iVar10 < iVar9) {
          FUN_1446f8c06(&local_48);
        }
        FUN_1401aebe8(&local_48,local_b8,iVar4);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401aea18(&local_a8,&local_48);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar4 = (int)plStack_70;
        FUN_140056680(&local_48);
        iVar2 = (int)local_40;
        iVar5 = (uint)((int)local_40 == 0) + iVar4 + (uint)(iVar4 == 0);
        local_c8 = local_48;
        local_48 = (undefined2 *)0x0;
        local_c0 = (int)local_40;
        iVar4 = local_40._4_4_;
        iStack_bc = local_40._4_4_;
        local_40 = 0;
        iVar9 = iVar5 + iVar2;
        if (iVar9 < iVar2) goto LAB_143e7135e;
        if (-1 < iVar9) {
          if ((iVar4 < iVar9) && (FUN_1446f8c06(&local_c8), local_48 != (undefined2 *)0x0)) {
            FUN_1400020a8();
          }
          iVar4 = (int)plStack_70 + -1;
          if ((int)plStack_70 == 0) {
            iVar4 = 0;
          }
          FUN_1401aebe8(&local_c8,local_78,iVar4);
          iVar2 = iStack_bc;
          iVar4 = local_c0;
          iVar10 = local_90 + -1;
          if (local_90 == 0) {
            iVar10 = 0;
          }
          iVar5 = iVar10 + 1 + (uint)(local_c0 == 0);
          local_b8 = local_c8;
          local_c8 = (undefined2 *)0x0;
          local_b0 = local_c0;
          local_ac = iStack_bc;
          local_c0 = 0;
          iStack_bc = 0;
          iVar9 = iVar5 + iVar4;
          if (iVar9 < iVar4) goto LAB_143e7135e;
          if (-1 < iVar9) {
            if (iVar2 < iVar9) {
              FUN_1446f8c06(&local_b8);
            }
            FUN_1401aebe8(&local_b8,local_98,iVar10);
            FUN_140d6ac5a();
            FUN_140056680(&local_58);
            iVar4 = local_b0 + -1;
            if (local_b0 == 0) {
              iVar4 = 0;
            }
            iVar2 = (int)local_50;
            iVar5 = iVar4 + 1 + (uint)((int)local_50 == 0);
            local_48 = local_58;
            local_58 = (undefined2 *)0x0;
            iVar10 = local_50._4_4_;
            local_40 = local_50;
            local_50 = 0;
            iVar9 = iVar5 + iVar2;
            if (iVar9 < iVar2) goto LAB_143e7135e;
            if (-1 < iVar9) {
              if (iVar10 < iVar9) {
                FUN_1446f8c06(&local_48);
              }
              FUN_1401aebe8(&local_48,local_b8,iVar4);
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1401aea18(&local_58,&local_48);
              if (local_48 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_c8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar8 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar8 = local_a8;
              }
              FUN_1458f4f8e(puVar8);
              puVar8 = &DAT_149dfb77a;
              if ((int)local_50 != 0) {
                puVar8 = local_58;
              }
              FUN_1458f4f8e(puVar8);
              puVar8 = local_a8;
              lVar11 = (longlong)local_a0;
              local_d8 = (undefined2 *)0x0;
              local_d0 = local_a0;
              FUN_1446dd670(&local_d8,local_a0 + (uint)(lVar11 == 0) + 0x1e,0);
              if (lVar11 != 0) {
                memcpy(local_d8,puVar8,lVar11 * 2);
              }
              FUN_1401aebe8(&local_d8,L"RenoirCore.WindowsDesktop.dll",0x1d);
              plVar6 = (longlong *)FUN_14054d1d4();
              puVar8 = local_d8;
              if (local_d0 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              cVar3 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar8);
              if (cVar3 == '\0') {
                lVar11 = 0;
              }
              else {
                puVar8 = local_d8;
                if (local_d0 == 0) {
                  puVar8 = &DAT_149dfb77a;
                }
                lVar11 = FUN_14155261e(puVar8);
              }
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar8 = local_58;
              *(longlong *)(param_1 + 0x48) = lVar11;
              if (lVar11 == 0) {
                lVar11 = (longlong)(int)local_50;
                local_e8 = (undefined2 *)0x0;
                local_e0 = (int)local_50;
                FUN_1446dd670(&local_e8,(int)local_50 + (uint)(lVar11 == 0) + 0x1e,0);
                if (lVar11 != 0) {
                  memcpy(local_e8,puVar8,lVar11 * 2);
                }
                FUN_1401aebe8(&local_e8,L"RenoirCore.WindowsDesktop.dll",0x1d);
                plVar6 = (longlong *)FUN_14054d1d4();
                puVar8 = local_e8;
                if (local_e0 == 0) {
                  puVar8 = &DAT_149dfb77a;
                }
                cVar3 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar8);
                if (cVar3 == '\0') {
                  uVar7 = 0;
                }
                else {
                  puVar8 = local_e8;
                  if (local_e0 == 0) {
                    puVar8 = &DAT_149dfb77a;
                  }
                  uVar7 = FUN_14155261e(puVar8);
                }
                if (local_e8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *(undefined8 *)(param_1 + 0x48) = uVar7;
              }
              puVar8 = &DAT_149dfb77a;
              if ((int)local_50 != 0) {
                puVar8 = local_58;
              }
              FUN_145be8130(puVar8);
              puVar8 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar8 = local_a8;
              }
              FUN_145be8130(puVar8);
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_98 != 0) {
                FUN_1400020a8();
              }
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_68[0] != 0) {
                FUN_1400020a8();
              }
              if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0();
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 143e713b0 FUN_143e713b0 body=94 status=ok
// SIG undefined FUN_143e713b0(void)

void FUN_143e713b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(1000,0x10);
  FUN_145c777d8(puVar2);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = puVar1;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)(param_1 + 0x40) = puVar2, puVar3 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    puVar3 = *(undefined8 **)(param_1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7140b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30),puVar3);
  return;
}



// FUNCTION 143e7140e FUN_143e7140e body=151 status=ok
// SIG undefined FUN_143e7140e(void)

void FUN_143e7140e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_1 + 0x60))();
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[3] = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[4] = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[7] = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((HMODULE)param_1[9] != (HMODULE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e71497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FreeLibrary((HMODULE)param_1[9]);
    return;
  }
  return;
}



// FUNCTION 143e714a6 FUN_143e714a6 body=643 status=ok
// SIG undefined FUN_143e714a6(void)

void FUN_143e714a6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"Coh_IndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  iVar4 = *(int *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  iVar10 = *(byte *)(param_1 + 0x18) + 0x8001;
  uVar7 = FUN_1414e3242(iVar10,0);
  local_84 = iVar4;
  local_80 = uVar5;
  local_7c = iVar10;
  if (iVar4 == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_78,iVar10,uVar5);
  }
  local_a8 = uVar7;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_a0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,&DAT_14ca85100,&local_84);
    *(undefined4 *)(local_90 + 0x18) = uVar7;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_a0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,&DAT_14ca85100,&local_84);
    *(undefined4 *)(local_90 + 0x18) = uVar7;
  }
  plVar11 = (longlong *)(param_1 + 0x10);
  if (plVar11 != &local_90) {
    lVar6 = *plVar11;
    *plVar11 = local_90;
    local_90 = 0;
    if (lVar6 == 0) goto LAB_143e716b5;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar6;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar6 = local_90;
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_90 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_90 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar6;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar12 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
LAB_143e716b5:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7172a FUN_143e7172a body=314 status=ok
// SIG undefined FUN_143e7172a(void)

void FUN_143e7172a(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_168 [40];
  longlong local_140 [2];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  if (param_3 == (char *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar1 = strlen(param_3);
    FUN_1446e6fe8(local_130,param_3,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_140,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e598) {
    FUN_144b3d300(&DAT_14cb8e598);
    if (DAT_14cb8e598 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_14054d46e(&DAT_14c846b20,L"SuppressCoherentErrors");
      _Init_thread_footer(&DAT_14cb8e598);
    }
  }
  if (local_140[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e71866 FUN_143e71866 body=304 status=ok
// SIG undefined FUN_143e71866(void)

void FUN_143e71866(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != 0) {
    plVar1 = (longlong *)FUN_145b17960();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    if (*(char *)(lVar2 + 0x2a) != '\x01') goto LAB_143e71972;
  }
  FUN_1489bf82c(param_1 + 8,&local_48,param_2);
  lVar2 = local_48;
  lVar5 = (longlong)local_40;
  if (lVar5 == 0) {
    local_40 = 0;
  }
  else {
    lVar4 = 0;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar2 + 8 + lVar4);
      lVar3 = (longlong)local_50;
      _Src = *(void **)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar3 * 2);
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar5 * 0x10 != lVar4);
  }
  FUN_1447a1747(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_143e71972:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e71998 FUN_143e71998 body=373 status=ok
// SIG undefined FUN_143e71998(void)

void FUN_143e71998(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010101;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_24 = 0;
  local_2c = 1;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x288);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143e71abe;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143e71abe:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e71b0e FUN_143e71b0e body=991 status=ok
// SIG undefined FUN_143e71b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e71b0e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  memset((void *)(param_1 + 0x60),0,0xe8);
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(undefined8 *)(param_1 + 0x149) = 0;
  *(undefined8 *)(param_1 + 0x151) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  local_68 = local_68 & 0xffffffffff000000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  lVar6 = *(longlong *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar13) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar13) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 0x2b9) = (undefined2)local_68;
  *(undefined1 *)(param_1 + 699) = local_68._2_1_;
  *(undefined1 (*) [16])(param_1 + 700) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2c8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x2d8) = 0x4680000046800000;
  *(undefined1 (*) [16])(param_1 + 0x2e0) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  FUN_1400b22c2(&local_68,"Coherent Renoir Begin Commands");
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81498) {
    local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x58);
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_50 = 1;
    local_4c = 0x6000000000;
    local_44 = 0;
    local_38 = 0;
    local_70 = 1;
    local_78 = &local_68;
    FUN_144760590(&DAT_14ca85100,&local_78,0);
  }
  *(undefined1 *)(param_1 + 0x248) = 1;
  auVar4 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x220) != 0) {
    uVar10 = (longlong)*(int *)(param_1 + 0x220) + 0x7ffffffffffffff;
    uVar11 = uVar10 & 0x7ffffffffffffff;
    auVar14._8_4_ = (int)uVar11;
    auVar14._0_8_ = uVar11;
    auVar14._12_4_ = (int)(uVar11 >> 0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x30);
    uVar12 = 0;
    auVar15 = pmovsxbq(in_XMM1,0x100);
    auVar14 = auVar14 | _DAT_149931e80;
    do {
      if ((bool)(~(auVar14._0_8_ < (longlong)(uVar12 ^ auVar4._0_8_)) & 1)) {
        puVar5[-4] = 0;
      }
      auVar16._8_4_ = (int)uVar12;
      auVar16._0_8_ = uVar12;
      auVar16._12_4_ = (int)(uVar12 >> 0x20);
      if ((longlong)((auVar16._8_8_ | auVar15._8_8_) ^ auVar4._8_8_) <= auVar14._8_8_) {
        *puVar5 = 0;
      }
      uVar12 = uVar12 + 2;
      puVar5 = puVar5 + 8;
    } while ((uVar11 - ((uint)uVar10 & 1)) + 2 != uVar12);
  }
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x238) + lVar6 * 4) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x228) + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x230));
  }
  if (0 < *(int *)(param_1 + 600)) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x250) + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 600));
  }
  if (0 < *(int *)(param_1 + 0x270)) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x268) + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x270));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e71eee FUN_143e71eee body=699 status=ok
// SIG undefined FUN_143e71eee(void)

void FUN_143e71eee(longlong param_1,uint param_2,uint param_3,int *param_4,undefined8 param_5)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar15 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar16 = *(int *)(param_1 + 0x1e8) - 1;
    uVar8 = *(uint *)(lVar15 + (ulonglong)(uVar16 & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar8 * 0x18);
        if (*puVar9 == param_2) goto LAB_143e71f5c;
        uVar8 = puVar9[4];
      } while (uVar8 != 0xffffffff);
    }
    puVar9 = (uint *)0x0;
LAB_143e71f5c:
    uVar8 = *(uint *)(lVar15 + (ulonglong)(uVar16 & param_3) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar8 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar9 == (uint *)0x0) {
            return;
          }
          if (puVar1 == (uint *)0x0) {
            return;
          }
          if (*(longlong *)(puVar9 + 2) == 0) {
            return;
          }
          lVar15 = *(longlong *)(puVar1 + 2);
          if (lVar15 == 0) {
            return;
          }
          iVar3 = param_4[2];
          iVar4 = *param_4;
          iVar5 = param_4[1];
          iVar6 = param_4[3];
          lVar7 = *(longlong *)(*(longlong *)(puVar9 + 2) + 0x58);
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          lVar15 = *(longlong *)(lVar15 + 0x58);
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar14 = puVar10 + 0xc;
          if (DAT_14ca85108 < puVar14) {
            FUN_140023dd8(&DAT_14ca85100,0x68);
            puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            puVar14 = puVar10 + 0xc;
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = puVar14;
          *DAT_14ca85130 = puVar10;
          DAT_14ca85130 = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &PTR_LAB_14a289d68;
          *(int *)(puVar10 + 2) = iVar3 - iVar5;
          *(int *)((longlong)puVar10 + 0x14) = iVar6 - iVar4;
          *(undefined4 *)(puVar10 + 3) = 1;
          *(int *)((longlong)puVar10 + 0x1c) = iVar5;
          *(int *)(puVar10 + 4) = iVar4;
          *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
          *(int *)(puVar10 + 5) = (int)(float)param_5;
          *(int *)((longlong)puVar10 + 0x2c) = (int)param_5._4_4_;
          *(undefined4 *)(puVar10 + 6) = 0;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          *(undefined4 *)(puVar10 + 7) = 0;
          *(undefined4 *)((longlong)puVar10 + 0x3c) = 1;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 1;
          puVar10[10] = lVar7;
          puVar10[0xb] = lVar15;
          if (lVar15 != 0) {
            LOCK();
            puVar9 = (uint *)(lVar15 + 8);
            uVar8 = *puVar9;
            *puVar9 = *puVar9 - 1;
            UNLOCK();
            if ((uVar8 & 0x3fffffff) == 1) {
              puVar9 = (uint *)(lVar15 + 8);
              LOCK();
              uVar8 = *puVar9;
              *puVar9 = *puVar9 | 0x40000000;
              UNLOCK();
              if ((uVar8 >> 0x1e & 1) == 0) {
                bVar2 = *(byte *)(lVar15 + 0xd);
                plVar11 = (longlong *)FUN_14001cc68(0x10,8);
                plVar11[1] = lVar15;
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c8;
                if ((bVar2 & 2) == 0) {
                  do {
                    *plVar11 = (longlong)plVar13;
                    LOCK();
                    bVar17 = plVar13 != DAT_14ca843c0;
                    plVar12 = plVar11;
                    if (bVar17) {
                      plVar13 = DAT_14ca843c0;
                      plVar12 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar12;
                    UNLOCK();
                  } while (bVar17);
                }
                else {
                  do {
                    *plVar11 = (longlong)plVar12;
                    LOCK();
                    bVar17 = plVar12 != DAT_14ca843c8;
                    plVar13 = plVar11;
                    if (bVar17) {
                      plVar12 = DAT_14ca843c8;
                      plVar13 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar13;
                    UNLOCK();
                  } while (bVar17);
                }
              }
            }
          }
          if (lVar7 == 0) {
            return;
          }
          LOCK();
          puVar9 = (uint *)(lVar7 + 8);
          uVar8 = *puVar9;
          *puVar9 = *puVar9 - 1;
          UNLOCK();
          if ((uVar8 & 0x3fffffff) != 1) {
            return;
          }
          puVar9 = (uint *)(lVar7 + 8);
          LOCK();
          uVar8 = *puVar9;
          *puVar9 = *puVar9 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) != 0) {
            return;
          }
          bVar2 = *(byte *)(lVar7 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar7;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar2 & 2) != 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar17 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar11;
              if (bVar17) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar17);
            return;
          }
          do {
            *plVar11 = (longlong)plVar13;
            LOCK();
            bVar17 = plVar13 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar17) {
              plVar13 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar17);
          return;
        }
        uVar8 = puVar1[4];
      } while (uVar8 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 143e721aa FUN_143e721aa body=1164 status=ok
// SIG undefined FUN_143e721aa(void)

ulonglong FUN_143e721aa(longlong param_1,uint param_2,int *param_3,void *param_4)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 uVar3;
  code cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  void *_Src;
  code *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  size_t _Size;
  bool bVar18;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  void *local_98;
  undefined8 uStack_90;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_4 != (void *)0x0) && (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4))) {
    lVar16 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar5 = *(uint *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar5 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 != (uint *)0x0) {
            FUN_140056680(local_80,L"while trying to execute a Read Texture command!");
            lVar16 = *(longlong *)(puVar2 + 2);
            if (lVar16 == 0) {
LAB_143e724cf:
              uVar14 = 0;
              goto LAB_143e7252d;
            }
            if (*(char *)(lVar16 + 0x70) == '\x04') {
              FUN_140040a08(&local_60);
              uVar14 = 0;
              pcVar15 = local_60;
              if (local_60 == (code *)0x0) goto LAB_143e7252d;
            }
            else {
              lVar9 = *(longlong *)(lVar16 + 0x68);
              if (lVar9 == 0) {
LAB_143e722f2:
                lVar9 = 0;
              }
              else {
                if (DAT_14cb0b9a0 == 0) {
                  local_b0 = &local_60;
                  local_60 = FUN_1449e2820;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = &LAB_146408884;
                  local_b8 = &LAB_147d719e1;
                  local_c0 = &LAB_140fb41fe;
                  local_c8 = L"Engine";
                  local_d0 = 0;
                  local_d8 = 0x10000000;
                  local_e0 = 8;
                  local_e8 = (code **)CONCAT44(local_e8._4_4_,0x168);
                  FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,
                                &DAT_147d719e0);
                }
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb0b9a0 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) != DAT_14cb0b9a0 + 0x30))
                goto LAB_143e722f2;
              }
              pcVar15 = *(code **)(lVar16 + 0x58);
              if (pcVar15 == (code *)0x0) goto LAB_143e724cf;
              uVar14 = (ulonglong)(*(char *)(lVar9 + 0x15b) == '\x06');
              LOCK();
              *(int *)(pcVar15 + 8) = *(int *)(pcVar15 + 8) + 1;
              UNLOCK();
            }
            if (((param_3[1] != 0 || *param_3 != 0) || (param_3[2] != *(int *)(lVar16 + 0x20))) ||
               (param_3[3] != *(int *)(lVar16 + 0x24))) goto LAB_143e724d3;
            local_98 = (void *)0x0;
            uStack_90 = 0;
            if ((char)uVar14 != '\0') goto LAB_143e724d3;
            lVar9 = (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15);
            uVar6 = *(undefined4 *)(lVar9 + 0x28);
            lVar9 = (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15);
            uVar7 = *(undefined4 *)(lVar9 + 0x24);
            local_60 = (code *)0x0;
            local_58 = 0;
            FUN_14007658c(&DAT_14ca850c8,&local_60,5);
            local_60 = (code *)&DAT_00000006;
            local_58 = CONCAT31(local_58._1_3_,1);
            local_54 = 0x467a0000;
            local_50 = 0;
            local_4c = 0;
            local_70 = 0;
            local_68 = CONCAT44(uVar6,uVar7);
            local_e8 = &local_60;
            (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,pcVar15,&local_70,&local_98);
            _Src = local_98;
            if ((longlong)(int)uStack_90 != 0) {
              lVar9 = 0;
              do {
                uVar3 = *(undefined1 *)((longlong)local_98 + lVar9 + 2);
                *(undefined1 *)((longlong)local_98 + lVar9 + 2) =
                     *(undefined1 *)((longlong)local_98 + lVar9);
                *(undefined1 *)((longlong)local_98 + lVar9) = uVar3;
                lVar9 = lVar9 + 4;
              } while ((longlong)(int)uStack_90 * 4 != lVar9);
            }
            if (local_98 == (void *)0x0) {
LAB_143e724d3:
              uVar14 = 0;
            }
            else {
              lVar9 = (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15);
              iVar8 = *(int *)(lVar9 + 0x24);
              lVar9 = (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15);
              uVar14 = (ulonglong)
                       (uint)(iVar8 * *(int *)((longlong)&DAT_14c873428 +
                                              (ulonglong)((uint)*(byte *)(lVar9 + 0x33) * 0x30)));
              if ((longlong)*(int *)(lVar16 + 0x38) < 0x36) {
                lVar9 = (longlong)*(int *)(lVar16 + 0x38) * 0x10;
                uVar5 = *(uint *)(&DAT_14b43b288 + lVar9);
                uVar13 = (*(int *)(lVar16 + 0x24) + uVar5) - 1;
                uVar17 = (ulonglong)uVar13 / (ulonglong)uVar5;
                _Size = (longlong)*(int *)(&DAT_14b43b28c + lVar9) *
                        ((ulonglong)
                         ((*(int *)(lVar16 + 0x20) + *(uint *)(&DAT_14b43b284 + lVar9)) - 1) /
                        (ulonglong)*(uint *)(&DAT_14b43b284 + lVar9));
                if (_Size - uVar14 == 0) {
LAB_143e72550:
                  memcpy(param_4,_Src,uVar17 * uVar14);
                }
                else if (uVar5 <= uVar13) {
                  lVar16 = 0;
                  do {
                    memcpy((void *)(lVar16 * _Size + (longlong)param_4),_Src,_Size);
                    lVar16 = lVar16 + 1;
                    _Src = (void *)((longlong)_Src + uVar14);
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
              }
              else if (uVar14 == 0) {
                uVar17 = 0;
                goto LAB_143e72550;
              }
              uVar14 = CONCAT71((int7)((ulonglong)_Src >> 8),1);
              if (local_98 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            LOCK();
            pcVar1 = pcVar15 + 8;
            uVar5 = *(uint *)pcVar1;
            *(uint *)pcVar1 = *(uint *)pcVar1 - 1;
            UNLOCK();
            if ((uVar5 & 0x3fffffff) == 1) {
              pcVar1 = pcVar15 + 8;
              LOCK();
              uVar5 = *(uint *)pcVar1;
              *(uint *)pcVar1 = *(uint *)pcVar1 | 0x40000000;
              UNLOCK();
              if ((uVar5 >> 0x1e & 1) == 0) {
                cVar4 = pcVar15[0xd];
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = (longlong)pcVar15;
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                if (((byte)cVar4 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar12;
                    LOCK();
                    bVar18 = plVar12 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar18) {
                      plVar12 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                  } while (bVar18);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar18 = plVar11 != DAT_14ca843c8;
                    plVar12 = plVar10;
                    if (bVar18) {
                      plVar11 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar18);
                }
              }
            }
LAB_143e7252d:
            if (local_80[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_143e7228f;
          }
          break;
        }
        uVar5 = puVar2[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  uVar14 = 0;
LAB_143e7228f:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 143e72638 FUN_143e72638 body=10327 status=ok
// SIG undefined FUN_143e72638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e72638(longlong param_1,longlong param_2,uint param_3,longlong param_4,uint param_5)

{
  uint *puVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [4];
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  byte bVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  wchar_t *_Dest;
  undefined8 *puVar31;
  uint uVar32;
  longlong lVar33;
  wchar_t *pwVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  longlong local_438;
  undefined8 *local_430;
  ulonglong local_428;
  char *local_420;
  longlong local_418;
  undefined8 *local_410;
  longlong local_408;
  ulonglong local_400;
  longlong local_3f8;
  undefined4 *local_3f0;
  longlong local_3e8;
  ulonglong local_3e0;
  undefined8 *local_3d8;
  undefined1 auStack_3cd [8];
  undefined1 auStack_3c5 [8];
  undefined4 uStack_3bd;
  byte bStack_3b9;
  undefined8 local_3b8;
  undefined8 *local_3b0;
  undefined4 local_3a8;
  byte local_3a3;
  undefined8 local_3a0;
  undefined4 local_398;
  longlong local_2f8;
  longlong lStack_2f0;
  byte local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [7];
  undefined1 auStack_2c9 [5];
  undefined1 auStack_2c4 [3];
  undefined1 auStack_2c1 [5];
  byte abStack_2bc [3];
  undefined1 uStack_2b9;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined8 *local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  ulonglong local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined8 local_220;
  longlong lStack_205;
  undefined1 local_1f8 [4];
  byte local_1f4;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  longlong local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (param_5 != 0) {
    uVar19 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x218);
      iVar24 = -1;
      if ((longlong)*(int *)(param_1 + 0x220) != 0) {
        lVar33 = 0;
        iVar18 = 0;
        do {
          iVar24 = iVar18;
          if (*(int *)(lVar12 + lVar33) == *(int *)(param_4 + uVar19 * 0x18)) break;
          iVar18 = iVar18 + 1;
          lVar33 = lVar33 + 0x20;
          iVar24 = -1;
        } while ((longlong)*(int *)(param_1 + 0x220) * 0x20 != lVar33);
      }
      lVar33 = param_4 + uVar19 * 0x18;
      *(undefined8 *)(lVar12 + 0x10 + (longlong)iVar24 * 0x20) = *(undefined8 *)(lVar33 + 8);
      *(undefined4 *)(lVar12 + 0x1c + (longlong)iVar24 * 0x20) = *(undefined4 *)(lVar33 + 0x10);
      *(undefined1 *)(param_1 + 0x248) = 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_5);
  }
  local_418 = param_2;
  if (param_3 != 0) {
    local_3f0 = (undefined4 *)(param_1 + 0x2d0);
    local_420 = (char *)(param_1 + 0x2b8);
    local_400 = (ulonglong)param_3;
    local_408 = param_1 + 0x80;
    local_410 = (undefined8 *)(param_1 + 0x290);
    local_3f8 = param_1 + 0x1d8;
    uVar19 = 0;
    do {
      if (0 < *(int *)(param_1 + 600)) {
        lVar12 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x250) + lVar12 * 4) = 0xffffffff;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(param_1 + 600));
      }
      if (0 < *(int *)(param_1 + 0x230)) {
        lVar12 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x238) + lVar12 * 4) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(param_1 + 0x228) + lVar12 * 4) = 0xffffffff;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(param_1 + 0x230));
      }
      if (0 < *(int *)(param_1 + 0x270)) {
        lVar12 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x268) + lVar12 * 4) = 0xffffffff;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(param_1 + 0x270));
      }
      uVar23 = (ulonglong)*(uint *)(local_418 + 0x10 + uVar19 * 0x18);
      local_3e0 = uVar19;
      if (uVar23 != 0) {
        lVar12 = *(longlong *)(local_418 + uVar19 * 0x18);
        lVar33 = *(longlong *)(local_418 + 8 + uVar19 * 0x18);
        local_3e8 = lVar33 + 8;
        uVar19 = 0;
        local_448 = lVar33;
        local_438 = lVar12;
        local_428 = uVar23;
LAB_143e7287e:
        uVar11 = *(uint *)(lVar12 + uVar19 * 8);
        if (0x19 < uVar11) goto switchD_143e72898_caseD_8;
        uVar26 = (ulonglong)*(uint *)(lVar12 + 4 + uVar19 * 8);
        switch(uVar11) {
        case 0:
          FUN_143e74e90(param_1,uVar26 + lVar33);
          lVar12 = local_438;
          lVar33 = local_448;
          break;
        case 1:
          uVar27 = (ulonglong)*(uint *)(lVar33 + 4 + uVar26);
          if (uVar27 != 0) {
            uVar20 = 0;
            do {
              *(int *)(*(longlong *)(param_1 + 0x228) +
                      (longlong)(*(int *)(uVar26 + lVar33) + (int)uVar20) * 4) =
                   ((int *)(uVar26 + lVar33))[uVar20 + 2];
              uVar20 = uVar20 + 1;
            } while (uVar27 != uVar20);
          }
        case 3:
switchD_143e72898_caseD_3:
          *(undefined1 *)(param_1 + 0x248) = 1;
          break;
        case 2:
          uVar27 = (ulonglong)*(uint *)(lVar33 + 4 + uVar26);
          if (uVar27 != 0) {
            uVar20 = 0;
            do {
              *(int *)(*(longlong *)(param_1 + 0x238) +
                      (longlong)(*(int *)(uVar26 + lVar33) + (int)uVar20) * 4) =
                   ((int *)(uVar26 + lVar33))[uVar20 + 2];
              uVar20 = uVar20 + 1;
            } while (uVar27 != uVar20);
          }
          goto switchD_143e72898_caseD_3;
        case 4:
          if ((longlong)*(int *)(param_1 + 0x178) != 0) {
            uVar27 = 0;
            lVar28 = 0;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x170) + uVar27) == *(int *)(lVar33 + uVar26)) {
                if ((~uVar27 & 0xffffffff0) != 0) {
                  *(undefined8 *)(param_1 + 0x2e0) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 8 + (lVar28 >> 0x20) * 0x10)
                  ;
                }
                break;
              }
              lVar28 = lVar28 + 0x100000000;
              uVar27 = uVar27 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != uVar27);
          }
          break;
        case 5:
          if ((longlong)*(int *)(param_1 + 0x188) != 0) {
            uVar27 = 0;
            lVar28 = 0;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x180) + uVar27) == *(int *)(lVar33 + uVar26)) {
                if ((~uVar27 & 0xffffffff0) != 0) {
                  *(undefined8 *)(param_1 + 0x298) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 8 + (lVar28 >> 0x20) * 0x10)
                  ;
                }
                break;
              }
              lVar28 = lVar28 + 0x100000000;
              uVar27 = uVar27 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x188) * 0x10 != uVar27);
          }
          break;
        case 6:
          if ((*local_420 == '\x01') &&
             ((fVar36 = *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x2c8), fVar36 != 0.0 ||
              (NAN(fVar36))))) {
            FUN_144afa3e8(param_1);
            FUN_144729e20(param_1);
            uVar11 = *(uint *)(local_448 + uVar26);
            uVar32 = uVar11 / 3;
            if (*(int *)(local_448 + 0xc + uVar26) != 0) {
              uVar32 = 0;
            }
            if (uVar11 == 0) {
              uVar4 = *(undefined4 *)(local_448 + 8 + uVar26);
              puVar13 = (undefined8 *)
                        ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
              pwVar34 = (wchar_t *)(puVar13 + 4);
              if (DAT_14ca85108 < pwVar34) {
                FUN_140023dd8(&DAT_14ca85100,0x28);
                puVar13 = (undefined8 *)
                          ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                pwVar34 = (wchar_t *)(puVar13 + 4);
              }
              DAT_14ca85160 = DAT_14ca85160 + 1;
              DAT_14ca85100 = pwVar34;
              *DAT_14ca85130 = puVar13;
              DAT_14ca85130 = puVar13 + 1;
              puVar13[1] = 0;
              *puVar13 = &PTR_LAB_14a1fc200;
              *(undefined4 *)(puVar13 + 2) = uVar4;
              *(uint *)((longlong)puVar13 + 0x14) = uVar32;
              *(undefined4 *)(puVar13 + 3) = 1;
              lVar12 = local_438;
              lVar33 = local_448;
              uVar23 = local_428;
            }
            else {
              uVar4 = *(undefined4 *)(local_448 + 4 + uVar26);
              uVar5 = *(undefined4 *)(local_448 + 8 + uVar26);
              uVar21 = *(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x10);
              puVar13 = (undefined8 *)
                        ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
              pwVar34 = (wchar_t *)(puVar13 + 6);
              if (DAT_14ca85108 < pwVar34) {
                FUN_140023dd8(&DAT_14ca85100,0x38);
                puVar13 = (undefined8 *)
                          ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                pwVar34 = (wchar_t *)(puVar13 + 6);
              }
              DAT_14ca85160 = DAT_14ca85160 + 1;
              DAT_14ca85100 = pwVar34;
              *DAT_14ca85130 = puVar13;
              DAT_14ca85130 = puVar13 + 1;
              puVar13[1] = 0;
              *puVar13 = &PTR_FUN_14a1fb5b0;
              puVar13[2] = uVar21;
              *(undefined4 *)(puVar13 + 3) = uVar5;
              *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
              *(uint *)(puVar13 + 4) = uVar11 * 3;
              *(undefined4 *)((longlong)puVar13 + 0x24) = uVar4;
              *(uint *)(puVar13 + 5) = uVar32;
              *(undefined4 *)((longlong)puVar13 + 0x2c) = 1;
              lVar12 = local_438;
              lVar33 = local_448;
              uVar23 = local_428;
            }
          }
          break;
        case 7:
          plVar14 = *(longlong **)(lVar33 + 0xc0 + uVar26);
          if (plVar14 != (longlong *)0x0) {
            lVar33 = uVar26 + lVar33;
            local_2b8 = CONCAT44(*(undefined4 *)(lVar33 + 0x10),*(undefined4 *)(lVar33 + 200));
            local_2a8 = *(undefined8 **)(lVar33 + 0x48);
            uStack_2a0 = (uint)*(undefined8 *)(lVar33 + 0x50);
            uStack_29c = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x50) >> 0x20);
            uStack_290 = *(undefined8 *)(lVar33 + 0x60);
            uStack_298 = (undefined4)*(undefined8 *)(lVar33 + 0x58);
            uStack_294 = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x58) >> 0x20);
            local_288 = CONCAT44((int)*(float *)(lVar33 + 0x6c),(int)*(float *)(lVar33 + 0x68));
            local_280 = CONCAT44((int)*(float *)(lVar33 + 0x74),(int)*(float *)(lVar33 + 0x70));
            local_278 = CONCAT44((int)*(float *)(lVar33 + 0x7c),(int)*(float *)(lVar33 + 0x78));
            local_258 = (undefined4)*(undefined8 *)(lVar33 + 0x90);
            local_238 = (undefined4)*(undefined8 *)(lVar33 + 0xb0);
            local_248._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0xa0) >> 0x20);
            uStack_234 = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0xb0) >> 0x20);
            uStack_264 = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x80) >> 0x20);
            uVar4 = uStack_264;
            uStack_250 = (undefined4)*(undefined8 *)(lVar33 + 0x98);
            uVar5 = uStack_250;
            uStack_230 = (undefined4)*(undefined8 *)(lVar33 + 0xb8);
            uStack_260._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x88) >> 0x20);
            uStack_24c = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x98) >> 0x20);
            uVar6 = uStack_24c;
            uStack_23c = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0xa8) >> 0x20);
            uVar8 = uStack_23c;
            _local_268 = CONCAT44(local_258,(int)*(undefined8 *)(lVar33 + 0x80));
            uVar21 = CONCAT44(local_238,(int)*(undefined8 *)(lVar33 + 0xa0));
            _local_258 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar33 + 0x90) >> 0x20),uVar4);
            _uStack_250 = CONCAT44(uStack_234,local_248._4_4_);
            local_248 = CONCAT44(uVar5,(int)*(undefined8 *)(lVar33 + 0x88));
            _uStack_240 = CONCAT44(uStack_230,(int)*(undefined8 *)(lVar33 + 0xa8));
            _local_238 = CONCAT44(uVar6,uStack_260._4_4_);
            _uStack_230 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar33 + 0xb8) >> 0x20),uVar8);
            local_228 = *(undefined4 *)(param_1 + 0x158);
            local_220 = *(undefined8 *)(lVar33 + 0xd0);
            uStack_260 = uVar21;
            (**(code **)(*plVar14 + 8))(plVar14,&DAT_14ca85100,local_408);
            *local_410 = 0;
            local_410[1] = 0;
            lVar12 = local_438;
            lVar33 = local_448;
          }
          break;
        case 10:
          *(undefined4 *)(local_420 + 0x10) = *(undefined4 *)(lVar33 + 0x10 + uVar26);
          puVar29 = (undefined4 *)(lVar33 + uVar26);
          uVar4 = puVar29[1];
          uVar5 = puVar29[2];
          uVar6 = puVar29[3];
          *(undefined4 *)local_420 = *puVar29;
          *(undefined4 *)(local_420 + 4) = uVar4;
          *(undefined4 *)(local_420 + 8) = uVar5;
          *(undefined4 *)(local_420 + 0xc) = uVar6;
          break;
        case 0xb:
          fVar36 = *(float *)(lVar33 + uVar26);
          fVar2 = *(float *)(lVar33 + 4 + uVar26);
          fVar37 = *(float *)(lVar33 + 0xc + uVar26);
          fVar38 = *(float *)(lVar33 + 8 + uVar26);
          puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
          pwVar34 = (wchar_t *)(puVar13 + 5);
          if (DAT_14ca85108 < pwVar34) {
            FUN_140023dd8(&DAT_14ca85100,0x30);
            puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8)
            ;
            pwVar34 = (wchar_t *)(puVar13 + 5);
            lVar12 = local_438;
            lVar33 = local_448;
          }
          fVar38 = fVar38 + fVar36;
          fVar37 = fVar37 + fVar2;
          DAT_14ca85160 = DAT_14ca85160 + 1;
          puVar29 = (undefined4 *)(uVar26 + lVar33);
          DAT_14ca85100 = pwVar34;
          *DAT_14ca85130 = puVar13;
          DAT_14ca85130 = puVar13 + 1;
          puVar13[1] = 0;
          *puVar13 = &PTR_LAB_14a1e7fc8;
          *(float *)(puVar13 + 2) = fVar36;
          *(float *)((longlong)puVar13 + 0x14) = fVar2;
          *(undefined4 *)(puVar13 + 3) = 0;
          *(float *)((longlong)puVar13 + 0x1c) = (float)-((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1)
          ;
          *(float *)(puVar13 + 4) = (float)-((int)ROUND(-0.5 - (fVar37 + fVar37)) >> 1);
          *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
          uVar4 = puVar29[1];
          uVar5 = puVar29[2];
          uVar6 = puVar29[3];
          *local_3f0 = *puVar29;
          local_3f0[1] = uVar4;
          local_3f0[2] = uVar5;
          local_3f0[3] = uVar6;
          break;
        case 0xd:
          uVar27 = (ulonglong)*(uint *)(lVar33 + 4 + uVar26);
          if (uVar27 != 0) {
            uVar20 = 0;
            do {
              *(int *)(*(longlong *)(param_1 + 0x268) +
                      (longlong)(*(int *)(uVar26 + lVar33) + (int)uVar20) * 4) =
                   ((int *)(uVar26 + lVar33))[uVar20 + 2];
              uVar20 = uVar20 + 1;
            } while (uVar27 != uVar20);
          }
          *(undefined1 *)(param_1 + 0x278) = 1;
          break;
        case 0xe:
          uVar27 = (ulonglong)*(uint *)(lVar33 + 4 + uVar26);
          if (uVar27 == 0) {
            lVar28 = 0;
            do {
              *(undefined4 *)(*(longlong *)(param_1 + 0x250) + lVar28 * 4) = 0xffffffff;
              lVar28 = lVar28 + 1;
            } while (lVar28 != 5);
          }
          else {
            uVar20 = 0;
            do {
              *(int *)(*(longlong *)(param_1 + 0x250) +
                      (longlong)(*(int *)(uVar26 + lVar33) + (int)uVar20) * 4) =
                   ((int *)(uVar26 + lVar33))[uVar20 + 2];
              uVar20 = uVar20 + 1;
            } while (uVar27 != uVar20);
          }
          *(undefined1 *)(param_1 + 0x260) = 1;
          break;
        case 0xf:
          bVar10 = *(byte *)(lVar33 + uVar26);
          if (*(uint *)(param_1 + 0x158) != (uint)bVar10) {
            puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8)
            ;
            pwVar34 = (wchar_t *)(puVar13 + 3);
            if (DAT_14ca85108 < pwVar34) {
              FUN_140023dd8(&DAT_14ca85100,0x20);
              puVar13 = (undefined8 *)
                        ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
              pwVar34 = (wchar_t *)(puVar13 + 3);
              lVar12 = local_438;
              lVar33 = local_448;
            }
            DAT_14ca85160 = DAT_14ca85160 + 1;
            DAT_14ca85100 = pwVar34;
            *DAT_14ca85130 = puVar13;
            DAT_14ca85130 = puVar13 + 1;
            puVar13[1] = 0;
            *puVar13 = &PTR_LAB_14a2901c8;
            *(uint *)(puVar13 + 2) = (uint)bVar10;
            *(uint *)(param_1 + 0x158) = (uint)bVar10;
          }
          break;
        case 0x12:
          if ((*local_420 == '\x01') &&
             ((fVar36 = *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x2c8), fVar36 != 0.0 ||
              (NAN(fVar36))))) {
            FUN_144afa3e8(param_1);
            iVar24 = *(int *)(local_448 + 0x10 + uVar26);
            if (DAT_14ca84ef1 == '\0') {
              *(int *)(param_1 + 0x2f0) = iVar24 << 2;
              iVar24 = 0;
            }
            FUN_144729e20(param_1);
            uVar11 = *(uint *)(local_448 + uVar26);
            uVar4 = *(undefined4 *)(local_448 + 4 + uVar26);
            uVar32 = uVar11 / 3;
            if (*(int *)(local_448 + 0x14 + uVar26) != 0) {
              uVar32 = 0;
            }
            uVar5 = *(undefined4 *)(local_448 + 0xc + uVar26);
            uVar6 = *(undefined4 *)(local_448 + 8 + uVar26);
            puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x298) + 0x10);
            puVar31 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8)
            ;
            pwVar34 = (wchar_t *)(puVar31 + 6);
            if (DAT_14ca85108 < pwVar34) {
              local_430 = puVar13;
              FUN_140023dd8(&DAT_14ca85100,0x38);
              puVar31 = (undefined8 *)
                        ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
              pwVar34 = (wchar_t *)(puVar31 + 6);
              puVar13 = local_430;
            }
            DAT_14ca85160 = DAT_14ca85160 + 1;
            DAT_14ca85100 = pwVar34;
            *DAT_14ca85130 = puVar31;
            DAT_14ca85130 = puVar31 + 1;
            puVar31[1] = 0;
            *puVar31 = &PTR_FUN_14a1fb5b0;
            puVar31[2] = puVar13;
            *(undefined4 *)(puVar31 + 3) = uVar6;
            *(int *)((longlong)puVar31 + 0x1c) = iVar24;
            *(uint *)(puVar31 + 4) = uVar11 * 3;
            *(undefined4 *)((longlong)puVar31 + 0x24) = uVar4;
            *(uint *)(puVar31 + 5) = uVar32;
            *(undefined4 *)((longlong)puVar31 + 0x2c) = uVar5;
            lVar12 = local_438;
            lVar33 = local_448;
            uVar23 = local_428;
          }
          break;
        case 0x13:
          uVar27 = (ulonglong)*(uint *)(lVar33 + uVar26);
          if (*(uint *)(lVar33 + uVar26) < *(uint *)(lVar33 + 4 + uVar26)) {
            lVar28 = uVar26 + lVar33;
            do {
              iVar24 = *(int *)(lVar28 + 8 + uVar27 * 4);
              iVar17 = -1;
              iVar18 = iVar17;
              if ((iVar24 != -1) && ((longlong)*(int *)(param_1 + 0x178) != 0)) {
                lVar12 = 0;
                iVar25 = 0;
                do {
                  iVar18 = iVar25;
                  if (*(int *)(*(longlong *)(param_1 + 0x170) + lVar12) == iVar24) break;
                  iVar25 = iVar25 + 1;
                  lVar12 = lVar12 + 0x10;
                  iVar18 = iVar17;
                } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != lVar12);
              }
              if (uVar27 == 0) {
                if (iVar18 == -1) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = *(undefined8 *)
                            (*(longlong *)(param_1 + 0x170) + 8 + (longlong)iVar18 * 0x10);
                }
                *(undefined8 *)(param_1 + 0x2e0) = uVar21;
              }
              else if (uVar27 == 1) {
                if (iVar18 == -1) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = *(undefined8 *)
                            (*(longlong *)(param_1 + 0x170) + 8 + (longlong)iVar18 * 0x10);
                }
                *(undefined8 *)(param_1 + 0x2e8) = uVar21;
              }
              uVar27 = uVar27 + 1;
              lVar12 = local_438;
              lVar33 = local_448;
            } while (uVar27 < *(uint *)(lVar28 + 4));
          }
          break;
        case 0x16:
          FUN_1400b22c2(&local_2b8,uVar26 + local_3e8);
          lVar12 = local_438;
          lVar33 = local_448;
          if (local_2b8 != 0) {
            FUN_1400020a8();
            lVar12 = local_438;
            lVar33 = local_448;
          }
          break;
        case 0x18:
          if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
            lVar12 = *(longlong *)(param_1 + 0x1e0);
            if (*(longlong *)(param_1 + 0x1e0) == 0) {
              lVar12 = local_3f8;
            }
            uVar11 = *(uint *)(lVar12 + (ulonglong)
                                        (*(int *)(param_1 + 0x1e8) - 1U & *(uint *)(lVar33 + uVar26)
                                        ) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar11 * 0x18);
                if (*puVar1 == *(uint *)(lVar33 + uVar26)) {
                  if (puVar1 != (uint *)0x0) {
                    if ((longlong)*(int *)(param_1 + 0x198) == 0) goto LAB_143e7357c;
                    uVar23 = 0;
                    lVar12 = 0;
                    goto LAB_143e7356a;
                  }
                  break;
                }
                uVar11 = puVar1[4];
              } while (uVar11 != 0xffffffff);
            }
          }
          local_430 = (undefined8 *)0x0;
          local_440 = 0;
          goto LAB_143e735b4;
        case 0x19:
          if ((DAT_14ca8527b & 8) != 0) {
            (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&DAT_14ca85100,1);
            DAT_14ca8527b = DAT_14ca8527b & 0xf7;
            lVar12 = local_438;
            lVar33 = local_448;
          }
          puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
          pwVar34 = (wchar_t *)(puVar13 + 2);
          if (DAT_14ca85108 < pwVar34) {
            FUN_140023dd8(&DAT_14ca85100,0x18);
            puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8)
            ;
            pwVar34 = (wchar_t *)(puVar13 + 2);
            lVar12 = local_438;
            lVar33 = local_448;
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = pwVar34;
          *DAT_14ca85130 = puVar13;
          DAT_14ca85130 = puVar13 + 1;
          puVar13[1] = 0;
          *puVar13 = &PTR_LAB_14a217b58;
          bVar10 = DAT_14ca85169;
          DAT_14ca8527b = DAT_14ca8527b & 0xfd;
          _DAT_14ca85278 = 0;
          puVar13 = *(undefined8 **)(param_1 + 0x2a0);
          if (puVar13 != (undefined8 *)0x0) {
            local_2b8 = -1;
            uStack_2b0 = 0xffffffff;
            uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
            uStack_29c = 0;
            uStack_298 = 0x60;
            uStack_294 = 0;
            local_288 = local_288 & 0xffffffffffffff00;
            uVar23 = DAT_14ca84ab8 + (ulonglong)(DAT_14ca84ab8 == 0);
            uVar26 = -uVar23;
            lVar12 = (uVar23 & uVar26) + _DAT_14ca84ab0;
            pbVar30 = (byte *)((ulonglong)((longlong)DAT_14ca85100 + (uVar23 - 1)) & uVar26);
            pwVar34 = (wchar_t *)(pbVar30 + lVar12);
            local_2a8 = puVar13;
            if (DAT_14ca85108 < pwVar34) {
              FUN_140023dd8(&DAT_14ca85100,(int)uVar23 + (int)lVar12);
              pbVar30 = (byte *)((ulonglong)((uVar23 - 1) + (longlong)DAT_14ca85100) & uVar26);
              pwVar34 = (wchar_t *)(pbVar30 + lVar12);
            }
            DAT_14ca85100 = pwVar34;
            *pbVar30 = bVar10 * '\x04' | bVar10;
            local_3b0 = &local_2b8;
            local_3a8 = 1;
            local_3b8._0_2_ = CONCAT11(bVar10,bVar10);
            local_3b8 = (undefined8 *)CONCAT44(2,(undefined4)local_3b8);
            local_3a0 = 0;
            local_398 = 0;
            if (*(code **)(*DAT_14ca83900 + 200) == FUN_14006d1b6) {
              FUN_14006d1b6(DAT_14ca83900,pbVar30,&local_3b8);
            }
            else {
              (**(code **)(*DAT_14ca83900 + 200))(DAT_14ca83900,pbVar30,&local_3b8);
            }
            puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8)
            ;
            pwVar34 = (wchar_t *)(puVar13 + 3);
            if (DAT_14ca85108 < pwVar34) {
              FUN_140023dd8(&DAT_14ca85100,0x20);
              puVar13 = (undefined8 *)
                        ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
              pwVar34 = (wchar_t *)(puVar13 + 3);
            }
            uVar4 = uStack_298;
            DAT_14ca85160 = DAT_14ca85160 + 1;
            DAT_14ca85100 = pwVar34;
            *DAT_14ca85130 = puVar13;
            DAT_14ca85130 = puVar13 + 1;
            puVar13[1] = 0;
            *puVar13 = &PTR_FUN_14a380c20;
            puVar13[2] = pbVar30;
            if ((uStack_2a0 & 0xff) == 3) {
              puVar13 = local_2a8;
              if (local_2a8 != (undefined8 *)0x0) {
LAB_143e7334d:
                lVar12 = puVar13[2];
                if (lVar12 != 0) {
                  DAT_14ca85166 = 1;
                  puVar13 = (undefined8 *)
                            ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                  pwVar34 = (wchar_t *)(puVar13 + 4);
                  if (DAT_14ca85108 < pwVar34) {
                    FUN_140023dd8(&DAT_14ca85100,0x28);
                    puVar13 = (undefined8 *)
                              ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                    pwVar34 = (wchar_t *)(puVar13 + 4);
                  }
                  DAT_14ca85160 = DAT_14ca85160 + 1;
                  DAT_14ca85100 = pwVar34;
                  *DAT_14ca85130 = puVar13;
                  DAT_14ca85130 = puVar13 + 1;
                  plVar14 = (longlong *)
                            ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                  pwVar34 = (wchar_t *)(plVar14 + 2);
                  if (DAT_14ca85108 < pwVar34) {
                    FUN_140023dd8(&DAT_14ca85100,0x18);
                    plVar14 = (longlong *)
                              ((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
                    pwVar34 = (wchar_t *)(plVar14 + 2);
                  }
                  DAT_14ca85100 = pwVar34;
                  *plVar14 = lVar12;
                  *(undefined4 *)(plVar14 + 1) = uVar4;
                  puVar13[1] = 0;
                  *puVar13 = &PTR_LAB_14a380c28;
                  puVar13[2] = plVar14;
                  *(undefined4 *)(puVar13 + 3) = 1;
                }
              }
            }
            else {
              puVar13 = &local_2b8;
              if ((uStack_2a0 & 0xff) - 1 < 2) goto LAB_143e7334d;
            }
            if (*(undefined8 **)(param_1 + 0x2b0) != (undefined8 *)0x0) {
              local_2b8 = -1;
              uStack_2b0 = 0xffffffff;
              uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
              uStack_29c = 0;
              uStack_298 = 0x60;
              uStack_294 = 0;
              local_288 = local_288 & 0xffffffffffffff00;
              local_3b8 = &local_2b8;
              local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,1);
              local_2a8 = *(undefined8 **)(param_1 + 0x2b0);
              FUN_144760590(&DAT_14ca85100,&local_3b8,0);
            }
            lVar12 = *(longlong *)(param_1 + 0x2a0);
            if (lVar12 != 0) {
              *(undefined8 *)(param_1 + 0x2a0) = 0;
              LOCK();
              puVar1 = (uint *)(lVar12 + 8);
              uVar11 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar11 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar12 + 8);
                LOCK();
                uVar11 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar11 >> 0x1e & 1) == 0) {
                  bVar10 = *(byte *)(lVar12 + 0xd);
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = lVar12;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar10 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar35 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar35) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
            lVar28 = *(longlong *)(param_1 + 0x2b0);
            lVar12 = local_438;
            lVar33 = local_448;
            uVar23 = local_428;
            if (lVar28 != 0) {
              *(undefined8 *)(param_1 + 0x2b0) = 0;
              LOCK();
              puVar1 = (uint *)(lVar28 + 8);
              uVar11 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar11 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar28 + 8);
                LOCK();
                uVar11 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar11 >> 0x1e & 1) == 0) {
                  bVar10 = *(byte *)(lVar28 + 0xd);
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = lVar28;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  lVar12 = local_438;
                  lVar33 = local_448;
                  uVar23 = local_428;
                  if ((bVar10 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar35 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar35) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar35);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar35 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar35) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar35);
                  }
                }
              }
            }
          }
        }
        goto switchD_143e72898_caseD_8;
      }
LAB_143e74def:
      uVar19 = local_3e0 + 1;
    } while (uVar19 != local_400);
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar12 = lVar12 + 0x100000000;
    uVar23 = uVar23 + 0x10;
    if ((longlong)*(int *)(param_1 + 0x198) * 0x10 == uVar23) break;
LAB_143e7356a:
    if (*(int *)(*(longlong *)(param_1 + 400) + uVar23) == *(int *)(lVar33 + 0xc + uVar26)) {
      if ((~uVar23 & 0xffffffff0) != 0) {
        local_440 = *(longlong *)(*(longlong *)(param_1 + 400) + 8 + (lVar12 >> 0x20) * 0x10);
        goto LAB_143e7359f;
      }
      break;
    }
  }
LAB_143e7357c:
  local_440 = 0;
LAB_143e7359f:
  local_430 = *(undefined8 **)(*(longlong *)(puVar1 + 2) + 0x58);
  if (local_430 == (undefined8 *)0x0) {
    local_430 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_430 + 1) = *(int *)(local_430 + 1) + 1;
    UNLOCK();
  }
LAB_143e735b4:
  bVar10 = DAT_14ca85169;
  local_2b8 = -1;
  uStack_2b0 = 0xffffffff;
  uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
  uStack_29c = 0;
  uStack_298 = 0x1000;
  uStack_294 = 0;
  local_288 = local_288 & 0xffffffffffffff00;
  uVar23 = DAT_14ca84ab8 + (ulonglong)(DAT_14ca84ab8 == 0);
  uVar27 = -uVar23;
  lVar12 = (uVar23 & uVar27) + _DAT_14ca84ab0;
  pbVar30 = (byte *)((ulonglong)((longlong)DAT_14ca85100 + (uVar23 - 1)) & uVar27);
  pwVar34 = (wchar_t *)(pbVar30 + lVar12);
  local_2a8 = local_430;
  if (DAT_14ca85108 < pwVar34) {
    FUN_140023dd8(&DAT_14ca85100,(int)uVar23 + (int)lVar12);
    pbVar30 = (byte *)((ulonglong)((uVar23 - 1) + (longlong)DAT_14ca85100) & uVar27);
    pwVar34 = (wchar_t *)(pbVar30 + lVar12);
  }
  DAT_14ca85100 = pwVar34;
  *pbVar30 = bVar10 * '\x04' | bVar10;
  local_3b0 = &local_2b8;
  local_3a8 = 1;
  local_3b8._0_2_ = CONCAT11(bVar10,bVar10);
  local_3b8 = (undefined8 *)CONCAT44(2,(undefined4)local_3b8);
  local_3a0 = 0;
  local_398 = 0;
  if (*(code **)(*DAT_14ca83900 + 200) == FUN_14006d1b6) {
    FUN_14006d1b6(DAT_14ca83900,pbVar30,&local_3b8);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 200))(DAT_14ca83900,pbVar30,&local_3b8);
  }
  puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
  pwVar34 = (wchar_t *)(puVar13 + 3);
  if (DAT_14ca85108 < pwVar34) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
    pwVar34 = (wchar_t *)(puVar13 + 3);
  }
  uVar4 = uStack_298;
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar34;
  *DAT_14ca85130 = puVar13;
  DAT_14ca85130 = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a380c20;
  puVar13[2] = pbVar30;
  if ((uStack_2a0 & 0xff) == 3) {
    puVar13 = local_2a8;
    if (local_2a8 == (undefined8 *)0x0) goto LAB_143e7381e;
  }
  else {
    puVar13 = &local_2b8;
    if (1 < (uStack_2a0 & 0xff) - 1) goto LAB_143e7381e;
  }
  lVar12 = puVar13[2];
  if (lVar12 != 0) {
    DAT_14ca85166 = 1;
    puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
    pwVar34 = (wchar_t *)(puVar13 + 4);
    if (DAT_14ca85108 < pwVar34) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar13 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
      pwVar34 = (wchar_t *)(puVar13 + 4);
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = pwVar34;
    *DAT_14ca85130 = puVar13;
    DAT_14ca85130 = puVar13 + 1;
    plVar14 = (longlong *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
    pwVar34 = (wchar_t *)(plVar14 + 2);
    if (DAT_14ca85108 < pwVar34) {
      FUN_140023dd8(&DAT_14ca85100,0x18);
      plVar14 = (longlong *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
      pwVar34 = (wchar_t *)(plVar14 + 2);
    }
    DAT_14ca85100 = pwVar34;
    *plVar14 = lVar12;
    *(undefined4 *)(plVar14 + 1) = uVar4;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_14a380c28;
    puVar13[2] = plVar14;
    *(undefined4 *)(puVar13 + 3) = 1;
  }
LAB_143e7381e:
  puVar13 = local_430;
  if ((local_440 != 0) && (lVar12 = *(longlong *)(local_440 + 0x10), lVar12 != 0)) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar12 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar12;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
    puVar13 = local_430;
    puVar31 = *(undefined8 **)(local_440 + 0x10);
    if (puVar31 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar31 + 1) = *(int *)(puVar31 + 1) + 1;
      UNLOCK();
    }
    local_2b8 = -1;
    uStack_2b0 = 0xffffffff;
    uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
    uStack_29c = 0;
    uStack_298 = 0x8000;
    uStack_294 = 0;
    local_288 = local_288 & 0xffffffffffffff00;
    local_3b8 = &local_2b8;
    local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,1);
    local_2a8 = puVar31;
    FUN_144760590(&DAT_14ca85100,&local_3b8,0);
    if ((char)local_288 == '\x01') {
      local_288 = local_288 & 0xffffffffffffff00;
    }
    if (puVar31 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar31 + 1);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(puVar31 + 1);
        LOCK();
        uVar11 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)((longlong)puVar31 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)puVar31;
          plVar14 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          puVar13 = local_430;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar14;
              LOCK();
              bVar35 = plVar14 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar35) {
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar35 = plVar16 != DAT_14ca843c8;
              plVar14 = plVar15;
              if (bVar35) {
                plVar16 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(puVar13 + 1);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    puVar1 = (uint *)(puVar13 + 1);
    if ((uVar11 & 0x3fffffff) == 1) {
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)((longlong)puVar13 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = (longlong)puVar13;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        puVar13 = local_430;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
    LOCK();
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    LOCK();
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)((longlong)puVar13 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = (longlong)puVar13;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        puVar13 = local_430;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
    LOCK();
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)((longlong)puVar13 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = (longlong)puVar13;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        puVar13 = local_430;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
  }
  lVar12 = 0x15;
  do {
    *(undefined8 *)(auStack_3cd + lVar12) = 0;
    *(undefined8 *)(auStack_3c5 + lVar12) = 0;
    *(undefined4 *)((longlong)&uStack_3bd + lVar12) = 0xffffffff;
    (&bStack_3b9 + lVar12)[0] = 0;
    (&bStack_3b9 + lVar12)[1] = 0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xd5);
  local_2e4 = 0;
  local_2e8 = 0;
  local_2f8 = 0;
  lStack_2f0 = 0;
  local_2e0 = 0xffffffff;
  uStack_2dc = 0xffffffff;
  uStack_2d8 = 0xffffffff;
  uStack_2d4 = 0xffffffff;
  _local_2d0 = 0;
  auStack_2c9._1_4_ = auStack_2c9._1_4_ & 0xffffff00;
  auStack_2c1[1] = 0;
  auStack_2c1[2] = 0;
  auStack_2c1[3] = 0;
  _auStack_2c4 = 0;
  local_3a8 = 0xffffffff;
  cVar3 = *(char *)(local_448 + 0x2d + uVar26);
  bVar10 = 1;
  local_3b8 = puVar13;
  if (*(char *)(local_448 + 0x2c + uVar26) == '\x01') {
    FUN_1489bfd38(param_1,&local_3d8,*(undefined4 *)(local_448 + 8 + uVar26),
                  *(undefined4 *)(local_448 + 0xc + uVar26));
    puVar13 = local_3d8;
    local_3b0 = local_3d8;
    if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81498) {
      local_2b8 = -1;
      uStack_2b0 = 0xffffffff;
      local_2a8 = local_3d8;
      uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
      uStack_29c = 0;
      uStack_298 = 0x1000;
      uStack_294 = 0;
      local_288 = (ulonglong)local_288._1_7_ << 8;
      unique0x0000a600 = &local_2b8;
      stack0xfffffffffffffc40 = 1;
      FUN_144760590(&DAT_14ca85100,auStack_3cd + 5,0);
      bVar10 = 1;
    }
    else {
      local_2b8 = -1;
      uStack_2b0 = 0xffffffff;
      local_2a8 = local_3d8;
      uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
      uStack_29c = 0;
      uStack_298 = 0x4000;
      uStack_294 = 0;
      local_288 = (ulonglong)local_288._1_7_ << 8;
      unique0x0000a600 = &local_2b8;
      stack0xfffffffffffffc40 = 1;
      FUN_144760590(&DAT_14ca85100,auStack_3cd + 5,0);
      bVar10 = 2;
    }
    puVar31 = *(undefined8 **)(param_1 + 0x2b0);
    if (puVar31 != puVar13) {
      *(undefined8 **)(param_1 + 0x2b0) = puVar13;
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
      }
      if (puVar31 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = (uint *)(puVar31 + 1);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(puVar31 + 1);
          LOCK();
          uVar11 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar11 >> 0x1e & 1) == 0) {
            bVar22 = *(byte *)((longlong)puVar31 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)puVar31;
            plVar14 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar22 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar14;
                LOCK();
                bVar35 = plVar14 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar35) {
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar35);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar35 = plVar16 != DAT_14ca843c8;
                plVar14 = plVar15;
                if (bVar35) {
                  plVar16 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar35);
            }
          }
        }
      }
    }
    puVar13 = local_3d8;
    if (local_3d8 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_3d8 + 1);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_3d8 + 1);
        LOCK();
        uVar11 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar22 = *(byte *)((longlong)local_3d8 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)puVar13;
          plVar14 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar22 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar14;
              LOCK();
              bVar35 = plVar14 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar35) {
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar35 = plVar16 != DAT_14ca843c8;
              plVar14 = plVar15;
              if (bVar35) {
                plVar16 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  local_3a3 = cVar3 * '\x04' + 4U | bVar10;
  if (local_440 != 0) {
    lVar12 = *(longlong *)(local_440 + 0x10);
    if (lVar12 == 0) {
      local_2f8 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      local_2f8 = lVar12;
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar11 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(lVar12 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = lVar12;
          plVar14 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar14;
              LOCK();
              bVar35 = plVar14 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar35) {
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar35 = plVar16 != DAT_14ca843c8;
              plVar14 = plVar15;
              if (bVar35) {
                plVar16 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
    bVar10 = 0x50;
    if (*(char *)(local_448 + 0x2f + uVar26) == '\x01') {
      plVar14 = *(longlong **)(local_440 + 0x10);
      if (plVar14 == (longlong *)0x0) {
        (**(code **)(_DAT_00000000 + 8))(0);
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        (**(code **)(*plVar14 + 8))(plVar14);
        LOCK();
        puVar1 = (uint *)(plVar14 + 1);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(plVar14 + 1);
          LOCK();
          uVar11 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar11 >> 0x1e & 1) == 0) {
            bVar10 = *(byte *)((longlong)plVar14 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)plVar14;
            plVar14 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar10 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar14;
                LOCK();
                bVar35 = plVar14 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar35) {
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar35);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar35 = plVar16 != DAT_14ca843c8;
                plVar14 = plVar15;
                if (bVar35) {
                  plVar16 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar35);
            }
          }
        }
      }
      bVar10 = 0x90;
    }
    bVar22 = 5;
    if (*(char *)(local_448 + 0x2e + uVar26) == '\x01') {
      plVar14 = *(longlong **)(local_440 + 0x10);
      if (plVar14 == (longlong *)0x0) {
        (**(code **)(_DAT_00000000 + 8))(0);
      }
      else {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        (**(code **)(*plVar14 + 8))(plVar14);
        LOCK();
        puVar1 = (uint *)(plVar14 + 1);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(plVar14 + 1);
          LOCK();
          uVar11 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar11 >> 0x1e & 1) == 0) {
            bVar22 = *(byte *)((longlong)plVar14 + 0xd);
            plVar15 = (longlong *)FUN_14001cc68(0x10,8);
            plVar15[1] = (longlong)plVar14;
            plVar14 = DAT_14ca843c0;
            plVar16 = DAT_14ca843c8;
            if ((bVar22 & 2) == 0) {
              do {
                *plVar15 = (longlong)plVar14;
                LOCK();
                bVar35 = plVar14 != DAT_14ca843c0;
                plVar16 = plVar15;
                if (bVar35) {
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar16;
                UNLOCK();
              } while (bVar35);
            }
            else {
              do {
                *plVar15 = (longlong)plVar16;
                LOCK();
                bVar35 = plVar16 != DAT_14ca843c8;
                plVar14 = plVar15;
                if (bVar35) {
                  plVar16 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar35);
            }
          }
        }
      }
      bVar22 = 9;
    }
    local_2e8 = bVar22 | bVar10;
    local_2e4 = 0x22;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar13 != local_430) {
    *(undefined8 **)(param_1 + 0x2a0) = local_430;
    if (local_430 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_430 + 1) = *(int *)(local_430 + 1) + 1;
      UNLOCK();
    }
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar13 + 1);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(puVar13 + 1);
        LOCK();
        uVar11 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar11 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)((longlong)puVar13 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = (longlong)puVar13;
          plVar14 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar14;
              LOCK();
              bVar35 = plVar14 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar35) {
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar35);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar35 = plVar16 != DAT_14ca843c8;
              plVar14 = plVar15;
              if (bVar35) {
                plVar16 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar35);
          }
        }
      }
    }
  }
  puVar13 = local_430;
  *(longlong *)(param_1 + 0x2a8) = local_440;
  _Dest = (wchar_t *)((ulonglong)((longlong)DAT_14ca85100 + 1U) & 0xfffffffffffffffe);
  pwVar34 = _Dest + 0x13;
  if (DAT_14ca85108 < pwVar34) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    _Dest = (wchar_t *)((ulonglong)((longlong)DAT_14ca85100 + 1U) & 0xfffffffffffffffe);
    pwVar34 = _Dest + 0x13;
  }
  DAT_14ca85100 = pwVar34;
  wcscpy(_Dest,L"Coherent Rendering");
  puVar31 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
  pwVar34 = (wchar_t *)(puVar31 + 0x23);
  if (DAT_14ca85108 < pwVar34) {
    FUN_140023dd8(&DAT_14ca85100,0x120);
    puVar31 = (undefined8 *)((ulonglong)((longlong)DAT_14ca85100 + 7U) & 0xfffffffffffffff8);
    pwVar34 = (wchar_t *)(puVar31 + 0x23);
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = pwVar34;
  *DAT_14ca85130 = puVar31;
  DAT_14ca85130 = puVar31 + 1;
  puVar31[1] = 0;
  *puVar31 = &PTR_FUN_14a217b50;
  memcpy(puVar31 + 2,&local_3b8,0xe8);
  uVar7 = auStack_2c1[2];
  lVar12 = _local_2d0;
  puVar31[0x1f] = _local_2d0;
  if (_local_2d0 != 0) {
    LOCK();
    *(int *)(_local_2d0 + 8) = *(int *)(_local_2d0 + 8) + 1;
    UNLOCK();
  }
  *(uint *)((longlong)puVar31 + 0x107) =
       CONCAT13(auStack_2c1[3],CONCAT12(auStack_2c1[2],CONCAT11(auStack_2c1[1],auStack_2c1[0])));
  puVar31[0x20] = CONCAT44(_auStack_2c4,auStack_2c9._1_4_);
  puVar31[0x22] = _Dest;
  lVar33 = 0x11;
  do {
    *(undefined8 *)(local_2d0 + lVar33 + 7) = 0;
    *(undefined8 *)(auStack_2c4 + lVar33 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_2b9 + lVar33) = 0;
    lVar33 = lVar33 + 0x18;
  } while (lVar33 != 0xd1);
  local_1f8 = (undefined1  [4])0x0;
  local_1f4 = 0;
  lVar33 = 0xd9;
  do {
    *(undefined8 *)(local_2d0 + lVar33 + 7) = 0;
    *(undefined8 *)(auStack_2c4 + lVar33 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_2b9 + lVar33) = 0;
    lVar33 = lVar33 + 0x18;
  } while (lVar33 != 0x199);
  local_130 = 0;
  local_100 = 0;
  local_f7 = 0;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  lVar33 = 0x15;
  do {
    if (*(longlong *)(auStack_3cd + lVar33) == 0) break;
    *(longlong *)(local_2d0 + lVar33 + 3) = *(longlong *)(auStack_3cd + lVar33);
    bVar10 = *(byte *)((longlong)&local_3b8 + lVar33);
    bVar22 = bVar10 >> 2;
    auStack_2c1[lVar33 + 4] = bVar22;
    abStack_2bc[lVar33] = bVar10 & 3;
    *(undefined4 *)(auStack_2c4 + lVar33 + 3) = *(undefined4 *)((longlong)&uStack_3bd + lVar33);
    *(uint *)(auStack_2c9 + lVar33 + 4) = (uint)(&bStack_3b9)[lVar33];
    local_1f8 = (undefined1  [4])((int)local_1f8 + 1);
    local_1f4 = local_1f4 | bVar22 == 2;
    lVar28 = *(longlong *)(auStack_3c5 + lVar33);
    if (lVar28 != 0) {
      local_130 = 1;
      uVar21 = *(undefined8 *)(auStack_2c9 + lVar33 + 4);
      *(undefined8 *)((longlong)&lStack_205 + lVar33) = *(undefined8 *)(local_2d0 + lVar33 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe03 + lVar33) = uVar21;
      *(undefined8 *)(local_1f8 + lVar33 + 3) = *(undefined8 *)(auStack_2c1 + lVar33 + 4);
      *(longlong *)((longlong)&lStack_205 + lVar33) = lVar28;
    }
    lVar33 = lVar33 + 0x18;
  } while (lVar33 != 0xd5);
  auVar9 = local_1f8;
  local_128 = local_2f8;
  uStack_120 = CONCAT44(local_2e4,
                        CONCAT13(local_2e8,
                                 CONCAT12(local_2e8 >> 2,CONCAT11(local_2e8 >> 4,local_2e8 >> 6))))
               & 0xffffffff030303ff;
  local_108 = local_2e8 >> 6 == 2;
  local_107 = (local_2e8 >> 2 & 3) == 2;
  if ((lStack_2f0 != 0) && (lStack_2f0 != local_2f8)) {
    uStack_110 = uStack_120;
    local_118 = lStack_2f0;
  }
  local_100 = _local_2d0;
  local_f8 = auStack_2c9[1];
  local_f7 = auStack_2c1[2];
  if (0 < (longlong)(int)local_1f8) {
    memcpy(&DAT_14ca851a8,&local_2b8,(longlong)(int)local_1f8 * 0x18);
  }
  _DAT_14ca851a0 = (int)auVar9;
  _DAT_14ca85268 = (undefined4)local_128;
  uRam000000014ca8526c = local_128._4_4_;
  uRam000000014ca85270 = (undefined4)uStack_120;
  uRam000000014ca85274 = uStack_120._4_4_;
  bVar10 = DAT_14ca8527b & 0xfe | lVar12 != 0;
  DAT_14ca8527a = uVar7;
  _DAT_14ca85278 = (ushort)auStack_2c1[3];
  DAT_14ca8527b = bVar10 | 2;
  if (_auStack_2c4 != 0) {
    DAT_14ca8527b = bVar10 | 10;
    (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,&DAT_14ca85100,1);
  }
  if (lVar12 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar12 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = lVar12;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        puVar13 = local_430;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
  }
  lVar12 = local_438;
  lVar33 = local_448;
  uVar23 = local_428;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (uint *)(puVar13 + 1);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(puVar13 + 1);
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)((longlong)puVar13 + 0xd);
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        plVar15[1] = (longlong)puVar13;
        plVar14 = DAT_14ca843c0;
        plVar16 = DAT_14ca843c8;
        lVar12 = local_438;
        lVar33 = local_448;
        uVar23 = local_428;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar15 = (longlong)plVar14;
            LOCK();
            bVar35 = plVar14 != DAT_14ca843c0;
            plVar16 = plVar15;
            if (bVar35) {
              plVar14 = DAT_14ca843c0;
              plVar16 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar16;
            UNLOCK();
          } while (bVar35);
        }
        else {
          do {
            *plVar15 = (longlong)plVar16;
            LOCK();
            bVar35 = plVar16 != DAT_14ca843c8;
            plVar14 = plVar15;
            if (bVar35) {
              plVar16 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar35);
        }
      }
    }
  }
switchD_143e72898_caseD_8:
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar23) goto LAB_143e74def;
  goto LAB_143e7287e;
}



// FUNCTION 143e74e90 FUN_143e74e90 body=13619 status=ok
// SIG undefined FUN_143e74e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e74e90(longlong param_1,int *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  int *piVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  code *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined5 uStack_94;
  undefined3 uStack_8f;
  undefined5 uStack_8c;
  undefined8 uStack_87;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong)*(int *)(param_1 + 0x208) != 0) {
    lVar31 = *(longlong *)(param_1 + 0x200);
    lVar15 = 0;
    do {
      if (*(int *)(lVar31 + lVar15) == *param_2) {
        iVar24 = (int)(lVar15 >> 3) * 0x286bca1b;
        if (iVar24 != -1) {
          lVar15 = (longlong)iVar24 * 0x98;
          if (*(int *)(param_1 + 0x350) == *(int *)(param_1 + 0x37c)) goto LAB_143e75062;
          iVar24 = *(int *)(lVar31 + 0x7c + lVar15);
          bVar6 = *(byte *)(lVar31 + 0xc + lVar15);
          iVar7 = *(int *)(lVar31 + 0x10 + lVar15);
          uVar27 = *(uint *)(lVar31 + 0x14 + lVar15);
          iVar8 = *(int *)(lVar31 + 0x18 + lVar15);
          iVar9 = *(int *)(lVar31 + 0x1c + lVar15);
          uVar10 = *(uint *)(lVar31 + 0x20 + lVar15);
          iVar11 = *(int *)(lVar31 + 0x24 + lVar15);
          lVar32 = param_1 + 0x380;
          if (*(longlong *)(param_1 + 0x388) != 0) {
            lVar32 = *(longlong *)(param_1 + 0x388);
          }
          iVar23 = *(int *)(lVar32 + (ulonglong)
                                     (*(int *)(param_1 + 0x390) - 1U &
                                     iVar24 * 0x4b1 + (uint)bVar6 + (uint)bVar6 * 4 +
                                     (iVar7 << 8 | iVar8 << 0x10 | uVar27) * 0x75 +
                                     (iVar9 << 8 | iVar11 << 0x10 | uVar10) * 0x40b7) * 4);
          if (iVar23 == -1) goto LAB_143e75062;
          fVar2 = *(float *)(lVar31 + 0x28 + lVar15);
          fVar3 = *(float *)(lVar31 + 0x2c + lVar15);
          fVar4 = *(float *)(lVar31 + 0x30 + lVar15);
          fVar5 = *(float *)(lVar31 + 0x34 + lVar15);
          lVar32 = *(longlong *)(param_1 + 0x348);
          goto LAB_143e74fe9;
        }
        break;
      }
      lVar15 = lVar15 + 0x98;
    } while ((longlong)*(int *)(param_1 + 0x208) * 0x98 - lVar15 != 0);
  }
  goto LAB_143e76a84;
LAB_143e74fe9:
  do {
    lVar29 = (longlong)iVar23 * 0x40;
    if (((((*(byte *)(lVar32 + lVar29) == bVar6) &&
          (lVar33 = lVar32 + lVar29, *(int *)(lVar33 + 4) == iVar7)) &&
         (*(uint *)(lVar33 + 8) == uVar27)) &&
        ((*(int *)(lVar33 + 0xc) == iVar8 && (*(int *)(lVar33 + 0x10) == iVar9)))) &&
       ((*(uint *)(lVar33 + 0x14) == uVar10 && (*(int *)(lVar33 + 0x18) == iVar11)))) {
      if ((*(float *)(lVar33 + 0x1c) == fVar2) && (!NAN(*(float *)(lVar33 + 0x1c)) && !NAN(fVar2)))
      {
        if ((*(float *)(lVar33 + 0x20) == fVar3) && (!NAN(*(float *)(lVar33 + 0x20)) && !NAN(fVar3))
           ) {
          if ((*(float *)(lVar33 + 0x24) == fVar4) &&
             (!NAN(*(float *)(lVar33 + 0x24)) && !NAN(fVar4))) {
            if ((*(float *)(lVar33 + 0x28) == fVar5) &&
               ((!NAN(*(float *)(lVar33 + 0x28)) && !NAN(fVar5) &&
                (*(int *)(lVar33 + 0x2c) == iVar24)))) goto LAB_143e75065;
          }
        }
      }
    }
    iVar23 = *(int *)(lVar32 + 0x38 + lVar29);
  } while (iVar23 != -1);
LAB_143e75062:
  lVar33 = 0;
LAB_143e75065:
  lVar31 = lVar31 + lVar15;
  local_148 = *(longlong *)(lVar33 + 0x30);
  if (local_148 != 0) {
    LOCK();
    *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
    UNLOCK();
  }
  iVar24 = FUN_144a850aa((longlong *)(param_1 + 0x2f8),
                         *(int *)(lVar31 + 0x4c) << 8 |
                         *(int *)(lVar31 + 0x44) << 0x10 | *(int *)(lVar31 + 0x68) << 0x18 |
                         *(uint *)(lVar31 + 0x50),lVar31 + 0x38);
  if (iVar24 == -1) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)iVar24 * 0x48 + *(longlong *)(param_1 + 0x2f8);
  }
  local_150 = *(longlong *)(lVar15 + 0x38);
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  iVar24 = *(int *)(lVar31 + 4);
  plVar20 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar30 = 0;
  if (0x1c < iVar24) {
    if (iVar24 < 0x1f) goto switchD_143e76ede_caseD_34;
    if (iVar24 < 0x20) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f490) && (FUN_144b3d300(&DAT_14cb8f490), DAT_14cb8f490 == -1))
      {
        FUN_14615af9c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0d72;
        local_188 = &LAB_1489c0d76;
        local_190 = FUN_1489c0d7a;
        local_198 = FUN_1489c0dd8;
        local_1b0 = L"ClearQuadVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8f3e8,0,&DAT_14cb8f380,L"FRenoirClearQuadVS");
        _DAT_14cb8f3e8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784c2);
        _Init_thread_footer(&DAT_14cb8f490);
      }
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f3e8,0);
      local_130 = uStack_120;
      uVar30 = local_128;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f490) &&
         (FUN_144b3d300(&DAT_14cb8f490), local_130 = uStack_120, uVar30 = local_128,
         DAT_14cb8f490 == -1)) {
        FUN_14615af9c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0d72;
        local_188 = &LAB_1489c0d76;
        local_190 = FUN_1489c0d7a;
        local_198 = FUN_1489c0dd8;
        local_1b0 = L"ClearQuadVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8f3e8,0,&DAT_14cb8f380,L"FRenoirClearQuadVS");
        _DAT_14cb8f3e8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784c2);
        _Init_thread_footer(&DAT_14cb8f490);
        local_130 = uStack_120;
        uVar30 = local_128;
      }
    }
    else if (iVar24 < 0x2f) {
      local_130 = 0;
      if (iVar24 == 0x20) {
        FUN_1415d2ffe();
        FUN_1448e935e(plVar20,&local_128,&DAT_14cb8ecf8,0);
        FUN_1415d2ffe();
        local_130 = uStack_120;
        uVar30 = local_128;
      }
    }
    else if (iVar24 < 0x3c) {
      local_130 = 0;
      switch(iVar24) {
      case 0x2f:
switchD_143e76ede_caseD_2f:
        FUN_1415d2ee4();
        FUN_1448e935e(plVar20,&local_128,&DAT_14cb8eaa8,0);
        FUN_1415d2ee4();
        local_130 = uStack_120;
        uVar30 = local_128;
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
        break;
      case 0x34:
      case 0x36:
        goto switchD_143e76ede_caseD_34;
      case 0x35:
        FUN_1415d3580();
        FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f638,0);
        FUN_1415d3580();
        local_130 = uStack_120;
        uVar30 = local_128;
        break;
      default:
        local_130 = 0;
      }
    }
    else if (iVar24 == 0x47) {
      FUN_1460ac804();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f9b0,0);
      FUN_1460ac804();
      local_130 = uStack_120;
      uVar30 = local_128;
    }
    else {
      if (iVar24 == 0x40) goto switchD_143e76ede_caseD_2f;
      local_130 = 0;
      uVar30 = 0;
      if (iVar24 == 0x3c) goto LAB_143e7511b;
    }
    goto switchD_143e76ede_caseD_30;
  }
  if (iVar24 != 0) {
    if (iVar24 != 9) {
      local_130 = 0;
      uVar30 = 0;
      if (iVar24 == 0xd) goto switchD_143e76ede_caseD_2f;
      goto switchD_143e76ede_caseD_30;
    }
switchD_143e76ede_caseD_34:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8e900) && (FUN_144b3d300(&DAT_14cb8e900), DAT_14cb8e900 == -1)) {
      FUN_14615aba0();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c06b0;
      local_188 = &LAB_1489c06b4;
      local_190 = FUN_1489c06b8;
      local_198 = FUN_1489c0716;
      local_1b0 = L"StandardVS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
      local_160 = 0;
      local_168 = 0xe8;
      local_1a0 = 1;
      local_1a8 = 0;
      FUN_140db5666(&DAT_14cb8e858,0,&DAT_14cb8e7f0,L"FRenoirStandardRareVS");
      _DAT_14cb8e858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7844a);
      _Init_thread_footer(&DAT_14cb8e900);
    }
    if ((int)plVar20[1] != *(int *)((longlong)plVar20 + 0x34)) {
      plVar19 = plVar20 + 7;
      if ((longlong *)plVar20[8] != (longlong *)0x0) {
        plVar19 = (longlong *)plVar20[8];
      }
      iVar24 = *(int *)((longlong)plVar19 +
                       (ulonglong)
                       ((int)plVar20[9] - 1U &
                       (int)DAT_14cb8e888 + (int)((ulonglong)DAT_14cb8e888 >> 0x20) * 0x17) * 4);
      if (iVar24 != -1) {
        do {
          plVar19 = (longlong *)(*plVar20 + (longlong)iVar24 * 0x18);
          if (*plVar19 == DAT_14cb8e888) {
            uVar30 = 0;
            if (plVar19 != (longlong *)0x0) {
              lVar15 = 0;
              if (plVar19 + 1 == (longlong *)0x0) goto LAB_143e755ea;
              lVar15 = plVar19[1];
              puVar14 = *(ulonglong **)(lVar15 + 0x28);
              lVar32 = ((ulonglong)(DAT_14cb8e880 * -0x622015f714c7d297) >> 0x2f ^
                       DAT_14cb8e880 * -0x622015f714c7d297) * -0x622015f714c7d297;
              uVar30 = puVar14[3];
              if ((uVar30 & 1) != 0) {
                uVar30 = (longlong)puVar14 + ((longlong)uVar30 >> 0x18) + 0x18;
              }
              uVar25 = puVar14[5];
              if ((uVar25 & 1) != 0) {
                uVar25 = (longlong)puVar14 + ((longlong)uVar25 >> 0x18) + 0x28;
              }
              uVar26 = puVar14[1];
              if ((uVar26 & 1) != 0) {
                uVar26 = (longlong)puVar14 + ((longlong)uVar26 >> 0x18) + 8;
              }
              uVar28 = *puVar14;
              if ((uVar28 & 1) != 0) {
                uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar14;
              }
              uVar27 = *(uint *)(uVar28 + (ulonglong)
                                          ((uint)puVar14[2] &
                                           ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) *
                                           0x2d69 & 0xffff) * 4);
              if (uVar27 != 0xffffffff) {
                goto LAB_143e75599;
              }
            }
            break;
          }
          iVar24 = (int)plVar19[2];
        } while (iVar24 != -1);
      }
    }
    goto LAB_143e755b6;
  }
LAB_143e7511b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8e6b0) && (FUN_144b3d300(&DAT_14cb8e6b0), DAT_14cb8e6b0 == -1)) {
    FUN_145c7a192();
    local_170 = &LAB_14712ac08;
    local_178 = &LAB_14712ac0c;
    local_180 = &LAB_1489c0542;
    local_188 = &LAB_1489c0546;
    local_190 = FUN_1489c054a;
    local_198 = FUN_1489c05a8;
    local_1b0 = L"StandardVS";
    local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
    local_160 = 0;
    local_168 = 0xe8;
    local_1a0 = 1;
    local_1a8 = 0;
    FUN_140db5666(&DAT_14cb8e608,0,&DAT_14cb8e5a0,L"FRenoirStandardVS");
    _DAT_14cb8e608 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_143e78432);
    _Init_thread_footer(&DAT_14cb8e6b0);
  }
  if ((int)plVar20[1] != *(int *)((longlong)plVar20 + 0x34)) {
    plVar19 = plVar20 + 7;
    if ((longlong *)plVar20[8] != (longlong *)0x0) {
      plVar19 = (longlong *)plVar20[8];
    }
    iVar24 = *(int *)((longlong)plVar19 +
                     (ulonglong)
                     ((int)plVar20[9] - 1U &
                     (int)DAT_14cb8e638 + (int)((ulonglong)DAT_14cb8e638 >> 0x20) * 0x17) * 4);
    if (iVar24 != -1) {
      do {
        plVar19 = (longlong *)(*plVar20 + (longlong)iVar24 * 0x18);
        if (*plVar19 == DAT_14cb8e638) {
          uVar30 = 0;
          if (plVar19 != (longlong *)0x0) {
            lVar15 = 0;
            if (plVar19 + 1 == (longlong *)0x0) goto LAB_143e75341;
            lVar15 = plVar19[1];
            puVar14 = *(ulonglong **)(lVar15 + 0x28);
            lVar32 = ((ulonglong)(DAT_14cb8e630 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14cb8e630 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar30 = puVar14[3];
            if ((uVar30 & 1) != 0) {
              uVar30 = (longlong)puVar14 + ((longlong)uVar30 >> 0x18) + 0x18;
            }
            uVar25 = puVar14[5];
            if ((uVar25 & 1) != 0) {
              uVar25 = (longlong)puVar14 + ((longlong)uVar25 >> 0x18) + 0x28;
            }
            uVar26 = puVar14[1];
            if ((uVar26 & 1) != 0) {
              uVar26 = (longlong)puVar14 + ((longlong)uVar26 >> 0x18) + 8;
            }
            uVar28 = *puVar14;
            if ((uVar28 & 1) != 0) {
              uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar14;
            }
            uVar27 = *(uint *)(uVar28 + (ulonglong)
                                        ((uint)puVar14[2] &
                                         ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar27 != 0xffffffff) {
              goto LAB_143e752f0;
            }
          }
          break;
        }
        iVar24 = (int)plVar19[2];
      } while (iVar24 != -1);
    }
  }
  goto LAB_143e7530d;
  while (uVar27 = *(uint *)(uVar26 + uVar28 * 4), uVar27 != 0xffffffff) {
LAB_143e75599:
    uVar28 = (ulonglong)uVar27;
    if ((*(longlong *)(uVar30 + uVar28 * 8) == DAT_14cb8e880) &&
       (*(int *)(uVar25 + uVar28 * 4) == 0)) {
      uVar25 = puVar14[7];
      if ((uVar25 & 1) != 0) {
        uVar25 = (longlong)(puVar14 + 7) + ((longlong)uVar25 >> 0x18);
      }
      uVar30 = *(ulonglong *)(uVar25 + (longlong)(int)uVar27 * 8);
      if ((uVar30 & 1) != 0) {
        uVar30 = ((longlong)uVar30 >> 0x18) + uVar25 + (longlong)(int)uVar27 * 8;
      }
      if (uVar30 != 0) goto LAB_143e755ea;
      break;
    }
  }
LAB_143e755b6:
  uVar30 = 0;
  lVar15 = 0;
LAB_143e755ea:
  local_130 = lVar15;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8e900) && (FUN_144b3d300(&DAT_14cb8e900), DAT_14cb8e900 == -1)) {
    FUN_14615aba0();
    local_170 = &LAB_14712ac08;
    local_178 = &LAB_14712ac0c;
    local_180 = &LAB_1489c06b0;
    local_188 = &LAB_1489c06b4;
    local_190 = FUN_1489c06b8;
    local_198 = FUN_1489c0716;
    local_1b0 = L"StandardVS";
    local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
    local_160 = 0;
    local_168 = 0xe8;
    local_1a0 = 1;
    local_1a8 = 0;
    FUN_140db5666(&DAT_14cb8e858,0,&DAT_14cb8e7f0,L"FRenoirStandardRareVS");
    _DAT_14cb8e858 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_143e7844a);
    puVar21 = &DAT_14cb8e900;
    goto LAB_143e774e1;
  }
  goto switchD_143e76ede_caseD_30;
  while (uVar27 = *(uint *)(uVar26 + uVar28 * 4), uVar27 != 0xffffffff) {
LAB_143e75f13:
    uVar28 = (ulonglong)uVar27;
    if ((*(longlong *)(uVar30 + uVar28 * 8) == DAT_14cb8ef70) &&
       (*(int *)(uVar25 + uVar28 * 4) == 0)) {
      uVar30 = puVar14[7];
      if ((uVar30 & 1) != 0) {
        uVar30 = (longlong)(puVar14 + 7) + ((longlong)uVar30 >> 0x18);
      }
      uVar25 = *(ulonglong *)(uVar30 + (longlong)(int)uVar27 * 8);
      if ((uVar25 & 1) != 0) {
        uVar25 = ((longlong)uVar25 >> 0x18) + uVar30 + (longlong)(int)uVar27 * 8;
      }
      if (uVar25 != 0) goto LAB_143e75f64;
      break;
    }
  }
  goto LAB_143e75f2f;
  while (uVar27 = *(uint *)(uVar26 + uVar28 * 4), uVar27 != 0xffffffff) {
LAB_143e75c58:
    uVar28 = (ulonglong)uVar27;
    if ((*(longlong *)(uVar30 + uVar28 * 8) == DAT_14cb8e758) &&
       (*(int *)(uVar25 + uVar28 * 4) == 0)) {
      uVar30 = puVar14[7];
      if ((uVar30 & 1) != 0) {
        uVar30 = (longlong)(puVar14 + 7) + ((longlong)uVar30 >> 0x18);
      }
      uVar25 = *(ulonglong *)(uVar30 + (longlong)(int)uVar27 * 8);
      if ((uVar25 & 1) != 0) {
        uVar25 = ((longlong)uVar25 >> 0x18) + uVar30 + (longlong)(int)uVar27 * 8;
      }
      if (uVar25 != 0) goto LAB_143e75ca9;
      break;
    }
  }
  goto LAB_143e75c74;
  while (uVar27 = *(uint *)(uVar26 + uVar28 * 4), uVar27 != 0xffffffff) {
LAB_143e76d2a:
    uVar28 = (ulonglong)uVar27;
    if ((*(longlong *)(uVar30 + uVar28 * 8) == DAT_14cb8e9a8) &&
       (*(int *)(uVar25 + uVar28 * 4) == 0)) {
      uVar30 = puVar14[7];
      if ((uVar30 & 1) != 0) {
        uVar30 = (longlong)(puVar14 + 7) + ((longlong)uVar30 >> 0x18);
      }
      uVar25 = *(ulonglong *)(uVar30 + (longlong)(int)uVar27 * 8);
      if ((uVar25 & 1) != 0) {
        uVar25 = ((longlong)uVar25 >> 0x18) + uVar30 + (longlong)(int)uVar27 * 8;
      }
      if (uVar25 != 0) goto LAB_143e76d7b;
      break;
    }
  }
  goto LAB_143e76d46;
  while (uVar27 = *(uint *)(uVar26 + uVar28 * 4), uVar27 != 0xffffffff) {
LAB_143e752f0:
    uVar28 = (ulonglong)uVar27;
    if ((*(longlong *)(uVar30 + uVar28 * 8) == DAT_14cb8e630) &&
       (*(int *)(uVar25 + uVar28 * 4) == 0)) {
      uVar25 = puVar14[7];
      if ((uVar25 & 1) != 0) {
        uVar25 = (longlong)(puVar14 + 7) + ((longlong)uVar25 >> 0x18);
      }
      uVar30 = *(ulonglong *)(uVar25 + (longlong)(int)uVar27 * 8);
      if ((uVar30 & 1) != 0) {
        uVar30 = ((longlong)uVar30 >> 0x18) + uVar25 + (longlong)(int)uVar27 * 8;
      }
      if (uVar30 != 0) goto LAB_143e75341;
      break;
    }
  }
LAB_143e7530d:
  uVar30 = 0;
  lVar15 = 0;
LAB_143e75341:
  local_130 = lVar15;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8e6b0) && (FUN_144b3d300(&DAT_14cb8e6b0), DAT_14cb8e6b0 == -1)) {
    FUN_145c7a192();
    local_170 = &LAB_14712ac08;
    local_178 = &LAB_14712ac0c;
    local_180 = &LAB_1489c0542;
    local_188 = &LAB_1489c0546;
    local_190 = FUN_1489c054a;
    local_198 = FUN_1489c05a8;
    local_1b0 = L"StandardVS";
    local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
    local_160 = 0;
    local_168 = 0xe8;
    local_1a0 = 1;
    local_1a8 = 0;
    FUN_140db5666(&DAT_14cb8e608,0,&DAT_14cb8e5a0,L"FRenoirStandardVS");
    _DAT_14cb8e608 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_143e78432);
    puVar21 = &DAT_14cb8e6b0;
LAB_143e774e1:
    _Init_thread_footer(puVar21);
    local_130 = lVar15;
  }
switchD_143e76ede_caseD_30:
  uVar13 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  iVar24 = *(int *)(lVar31 + 4);
  local_138 = 0;
  if (iVar24 < 0x2f) {
    if (iVar24 < 0x1d) {
      if (iVar24 != 0) {
        if (iVar24 != 9) {
          if (iVar24 == 0xd) goto LAB_143e7581c;
          goto LAB_143e75a65;
        }
        goto LAB_143e756c9;
      }
LAB_143e7584a:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e6b0) && (FUN_144b3d300(&DAT_14cb8e6b0), DAT_14cb8e6b0 == -1))
      {
        FUN_145c7a192();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0542;
        local_188 = &LAB_1489c0546;
        local_190 = FUN_1489c054a;
        local_198 = FUN_1489c05a8;
        local_1b0 = L"StandardVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8e608,0,&DAT_14cb8e5a0,L"FRenoirStandardVS");
        _DAT_14cb8e608 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e78432);
        _Init_thread_footer(&DAT_14cb8e6b0);
      }
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8e608,0);
      if ((DAT_14cb8e6b0 <=
           *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110)) || (FUN_144b3d300(&DAT_14cb8e6b0), DAT_14cb8e6b0 != -1))
      goto LAB_143e75a29;
      FUN_145c7a192();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c0542;
      local_188 = &LAB_1489c0546;
      local_190 = FUN_1489c054a;
      local_198 = FUN_1489c05a8;
      local_1b0 = L"StandardVS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
      local_160 = 0;
      local_168 = 0xe8;
      local_1a0 = 1;
      local_1a8 = 0;
      FUN_140db5666(&DAT_14cb8e608,0,&DAT_14cb8e5a0,L"FRenoirStandardVS");
      _DAT_14cb8e608 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78432);
      puVar21 = &DAT_14cb8e6b0;
LAB_143e77a45:
      _Init_thread_footer(puVar21);
    }
    else if (iVar24 - 0x1dU < 2) {
LAB_143e756c9:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e900) && (FUN_144b3d300(&DAT_14cb8e900), DAT_14cb8e900 == -1))
      {
        FUN_14615aba0();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c06b0;
        local_188 = &LAB_1489c06b4;
        local_190 = FUN_1489c06b8;
        local_198 = FUN_1489c0716;
        local_1b0 = L"StandardVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8e858,0,&DAT_14cb8e7f0,L"FRenoirStandardRareVS");
        _DAT_14cb8e858 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7844a);
        _Init_thread_footer(&DAT_14cb8e900);
      }
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8e858,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e900) && (FUN_144b3d300(&DAT_14cb8e900), DAT_14cb8e900 == -1))
      {
        FUN_14615aba0();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c06b0;
        local_188 = &LAB_1489c06b4;
        local_190 = FUN_1489c06b8;
        local_198 = FUN_1489c0716;
        local_1b0 = L"StandardVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8e858,0,&DAT_14cb8e7f0,L"FRenoirStandardRareVS");
        _DAT_14cb8e858 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7844a);
        puVar21 = &DAT_14cb8e900;
        goto LAB_143e77a45;
      }
    }
    else {
      if (iVar24 != 0x1f) {
        local_138 = 0;
        if (iVar24 == 0x20) {
          FUN_1415d2ffe();
          FUN_1448e935e(uVar13,&local_128,&DAT_14cb8ecf8,0);
          FUN_1415d2ffe();
          goto LAB_143e759b8;
        }
        goto LAB_143e75a65;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f490) && (FUN_144b3d300(&DAT_14cb8f490), DAT_14cb8f490 == -1))
      {
        FUN_14615af9c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0d72;
        local_188 = &LAB_1489c0d76;
        local_190 = FUN_1489c0d7a;
        local_198 = FUN_1489c0dd8;
        local_1b0 = L"ClearQuadVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8f3e8,0,&DAT_14cb8f380,L"FRenoirClearQuadVS");
        _DAT_14cb8f3e8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784c2);
        _Init_thread_footer(&DAT_14cb8f490);
      }
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f3e8,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f490) && (FUN_144b3d300(&DAT_14cb8f490), DAT_14cb8f490 == -1))
      {
        FUN_14615af9c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0d72;
        local_188 = &LAB_1489c0d76;
        local_190 = FUN_1489c0d7a;
        local_198 = FUN_1489c0dd8;
        local_1b0 = L"ClearQuadVS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadVS.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb8f3e8,0,&DAT_14cb8f380,L"FRenoirClearQuadVS");
        _DAT_14cb8f3e8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784c2);
        puVar21 = &DAT_14cb8f490;
        goto LAB_143e77a45;
      }
    }
LAB_143e75a29:
    if (local_128 == 0) {
      local_138 = 0;
    }
    else {
LAB_143e75a36:
      local_138 = *(longlong *)
                   (*(longlong *)(*(longlong *)(uStack_120 + 8) + 0x50) +
                   (longlong)*(int *)(local_128 + 0xd4) * 8);
      if (local_138 == 0) {
        local_138 = FUN_1400bafc2(*(longlong *)(uStack_120 + 8),(longlong)*(int *)(local_128 + 0xd4)
                                  ,1);
      }
    }
  }
  else {
    if (iVar24 < 0x3c) {
      if (iVar24 - 0x35U < 2) {
        FUN_1415d3580();
        FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f638,0);
        FUN_1415d3580();
      }
      else {
        if (iVar24 != 0x2f) {
          if (iVar24 == 0x34) goto LAB_143e756c9;
          goto LAB_143e75a65;
        }
LAB_143e7581c:
        FUN_1415d2ee4();
        FUN_1448e935e(uVar13,&local_128,&DAT_14cb8eaa8,0);
        FUN_1415d2ee4();
      }
    }
    else {
      if (iVar24 == 0x3c) goto LAB_143e7584a;
      if (iVar24 == 0x40) goto LAB_143e7581c;
      if (iVar24 != 0x47) goto LAB_143e75a65;
      FUN_1460ac804();
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f9b0,0);
      FUN_1460ac804();
    }
LAB_143e759b8:
    local_138 = 0;
    if (local_128 != 0) goto LAB_143e75a36;
  }
LAB_143e75a65:
  iVar24 = *(int *)(lVar31 + 8);
  plVar20 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar25 = 0;
  local_140 = uVar30;
  if (iVar24 < 0xd) {
    if (iVar24 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e7d8) && (FUN_144b3d300(&DAT_14cb8e7d8), DAT_14cb8e7d8 == -1))
      {
        FUN_14615aa4c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0612;
        local_188 = &LAB_1489c0616;
        local_190 = FUN_1489c061a;
        local_198 = FUN_1489c0642;
        local_1b0 = L"StandardPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e730,0,&DAT_14cb8e6c8,L"FRenoirStandardPS");
        _DAT_14cb8e730 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7843e);
        _Init_thread_footer(&DAT_14cb8e7d8);
      }
      if ((int)plVar20[1] != *(int *)((longlong)plVar20 + 0x34)) {
        plVar19 = plVar20 + 7;
        if ((longlong *)plVar20[8] != (longlong *)0x0) {
          plVar19 = (longlong *)plVar20[8];
        }
        iVar24 = *(int *)((longlong)plVar19 +
                         (ulonglong)
                         ((int)plVar20[9] - 1U &
                         (int)DAT_14cb8e760 + (int)((ulonglong)DAT_14cb8e760 >> 0x20) * 0x17) * 4);
        if (iVar24 != -1) {
          do {
            plVar19 = (longlong *)(*plVar20 + (longlong)iVar24 * 0x18);
            if (*plVar19 == DAT_14cb8e760) {
              uVar25 = 0;
              if (plVar19 != (longlong *)0x0) {
                lVar15 = 0;
                if (plVar19 + 1 == (longlong *)0x0) goto LAB_143e75ca9;
                lVar15 = plVar19[1];
                puVar14 = *(ulonglong **)(lVar15 + 0x28);
                lVar32 = ((ulonglong)(DAT_14cb8e758 * -0x622015f714c7d297) >> 0x2f ^
                         DAT_14cb8e758 * -0x622015f714c7d297) * -0x622015f714c7d297;
                uVar30 = puVar14[3];
                if ((uVar30 & 1) != 0) {
                  uVar30 = (longlong)puVar14 + ((longlong)uVar30 >> 0x18) + 0x18;
                }
                uVar25 = puVar14[5];
                if ((uVar25 & 1) != 0) {
                  uVar25 = (longlong)puVar14 + ((longlong)uVar25 >> 0x18) + 0x28;
                }
                uVar26 = puVar14[1];
                if ((uVar26 & 1) != 0) {
                  uVar26 = (longlong)puVar14 + ((longlong)uVar26 >> 0x18) + 8;
                }
                uVar28 = *puVar14;
                if ((uVar28 & 1) != 0) {
                  uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar14;
                }
                uVar27 = *(uint *)(uVar28 + (ulonglong)
                                            ((uint)puVar14[2] &
                                             ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) *
                                             0x2d69 & 0xffff) * 4);
                if (uVar27 != 0xffffffff) {
                  goto LAB_143e75c58;
                }
              }
              break;
            }
            iVar24 = (int)plVar19[2];
          } while (iVar24 != -1);
        }
      }
LAB_143e75c74:
      uVar25 = 0;
      lVar15 = 0;
LAB_143e75ca9:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e7d8) && (FUN_144b3d300(&DAT_14cb8e7d8), DAT_14cb8e7d8 == -1))
      {
        FUN_14615aa4c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0612;
        local_188 = &LAB_1489c0616;
        local_190 = FUN_1489c061a;
        local_198 = FUN_1489c0642;
        local_1b0 = L"StandardPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e730,0,&DAT_14cb8e6c8,L"FRenoirStandardPS");
        _DAT_14cb8e730 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7843e);
        puVar21 = &DAT_14cb8e7d8;
LAB_143e77793:
        _Init_thread_footer(puVar21);
      }
    }
    else {
      lVar15 = 0;
      if (iVar24 == 9) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb8eff0) &&
           (FUN_144b3d300(&DAT_14cb8eff0), DAT_14cb8eff0 == -1)) {
          FUN_14615ae48();
          local_170 = &LAB_14712ac08;
          local_178 = &LAB_14712ac0c;
          local_180 = &LAB_1489c0afa;
          local_188 = &LAB_1489c0afe;
          local_190 = FUN_1489c0b02;
          local_198 = FUN_1489c0b2a;
          local_1b0 = L"StencilPS";
          local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPS.usf";
          local_160 = 0;
          local_168 = 0x110;
          local_1a0 = 1;
          local_1a8 = 3;
          FUN_140db5666(&DAT_14cb8ef48,0,&DAT_14cb8eee0,L"FRenoirStencilPS");
          _DAT_14cb8ef48 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_143e78492);
          _Init_thread_footer(&DAT_14cb8eff0);
        }
        if ((int)plVar20[1] != *(int *)((longlong)plVar20 + 0x34)) {
          plVar19 = plVar20 + 7;
          if ((longlong *)plVar20[8] != (longlong *)0x0) {
            plVar19 = (longlong *)plVar20[8];
          }
          iVar24 = *(int *)((longlong)plVar19 +
                           (ulonglong)
                           ((int)plVar20[9] - 1U &
                           (int)DAT_14cb8ef78 + (int)((ulonglong)DAT_14cb8ef78 >> 0x20) * 0x17) * 4)
          ;
          if (iVar24 != -1) {
            do {
              plVar19 = (longlong *)(*plVar20 + (longlong)iVar24 * 0x18);
              if (*plVar19 == DAT_14cb8ef78) {
                uVar25 = 0;
                if (plVar19 != (longlong *)0x0) {
                  lVar15 = 0;
                  if (plVar19 + 1 == (longlong *)0x0) goto LAB_143e75f64;
                  lVar15 = plVar19[1];
                  puVar14 = *(ulonglong **)(lVar15 + 0x28);
                  lVar32 = ((ulonglong)(DAT_14cb8ef70 * -0x622015f714c7d297) >> 0x2f ^
                           DAT_14cb8ef70 * -0x622015f714c7d297) * -0x622015f714c7d297;
                  uVar30 = puVar14[3];
                  if ((uVar30 & 1) != 0) {
                    uVar30 = (longlong)puVar14 + ((longlong)uVar30 >> 0x18) + 0x18;
                  }
                  uVar25 = puVar14[5];
                  if ((uVar25 & 1) != 0) {
                    uVar25 = (longlong)puVar14 + ((longlong)uVar25 >> 0x18) + 0x28;
                  }
                  uVar26 = puVar14[1];
                  if ((uVar26 & 1) != 0) {
                    uVar26 = (longlong)puVar14 + ((longlong)uVar26 >> 0x18) + 8;
                  }
                  uVar28 = *puVar14;
                  if ((uVar28 & 1) != 0) {
                    uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar14;
                  }
                  uVar27 = *(uint *)(uVar28 + (ulonglong)
                                              ((uint)puVar14[2] &
                                               ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) *
                                               0x2d69 & 0xffff) * 4);
                  if (uVar27 != 0xffffffff) {
                    goto LAB_143e75f13;
                  }
                }
                break;
              }
              iVar24 = (int)plVar19[2];
            } while (iVar24 != -1);
          }
        }
LAB_143e75f2f:
        uVar25 = 0;
        lVar15 = 0;
LAB_143e75f64:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb8eff0) &&
           (FUN_144b3d300(&DAT_14cb8eff0), DAT_14cb8eff0 == -1)) {
          FUN_14615ae48();
          local_170 = &LAB_14712ac08;
          local_178 = &LAB_14712ac0c;
          local_180 = &LAB_1489c0afa;
          local_188 = &LAB_1489c0afe;
          local_190 = FUN_1489c0b02;
          local_198 = FUN_1489c0b2a;
          local_1b0 = L"StencilPS";
          local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPS.usf";
          local_160 = 0;
          local_168 = 0x110;
          local_1a0 = 1;
          local_1a8 = 3;
          FUN_140db5666(&DAT_14cb8ef48,0,&DAT_14cb8eee0,L"FRenoirStencilPS");
          _DAT_14cb8ef48 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_143e78492);
          puVar21 = &DAT_14cb8eff0;
          goto LAB_143e77793;
        }
      }
    }
  }
  else if (iVar24 < 0x2f) {
    switch(iVar24) {
    case 0x1d:
switchD_143e75b6c_caseD_36:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8ea28) && (FUN_144b3d300(&DAT_14cb8ea28), DAT_14cb8ea28 == -1))
      {
        FUN_14615acf4();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0780;
        local_188 = &LAB_1489c0784;
        local_190 = FUN_1489c0788;
        local_198 = FUN_1489c07b0;
        local_1b0 = L"StandardRarePS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardRarePS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e980,0,&DAT_14cb8e918,L"FRenoirStandardRarePS");
        _DAT_14cb8e980 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e78456);
        _Init_thread_footer(&DAT_14cb8ea28);
      }
      if ((int)plVar20[1] != *(int *)((longlong)plVar20 + 0x34)) {
        plVar19 = plVar20 + 7;
        if ((longlong *)plVar20[8] != (longlong *)0x0) {
          plVar19 = (longlong *)plVar20[8];
        }
        iVar24 = *(int *)((longlong)plVar19 +
                         (ulonglong)
                         ((int)plVar20[9] - 1U &
                         (int)DAT_14cb8e9b0 + (int)((ulonglong)DAT_14cb8e9b0 >> 0x20) * 0x17) * 4);
        if (iVar24 != -1) {
          do {
            plVar19 = (longlong *)(*plVar20 + (longlong)iVar24 * 0x18);
            if (*plVar19 == DAT_14cb8e9b0) {
              uVar25 = 0;
              if (plVar19 != (longlong *)0x0) {
                lVar15 = 0;
                if (plVar19 + 1 == (longlong *)0x0) goto LAB_143e76d7b;
                lVar15 = plVar19[1];
                puVar14 = *(ulonglong **)(lVar15 + 0x28);
                lVar32 = ((ulonglong)(DAT_14cb8e9a8 * -0x622015f714c7d297) >> 0x2f ^
                         DAT_14cb8e9a8 * -0x622015f714c7d297) * -0x622015f714c7d297;
                uVar30 = puVar14[3];
                if ((uVar30 & 1) != 0) {
                  uVar30 = (longlong)puVar14 + ((longlong)uVar30 >> 0x18) + 0x18;
                }
                uVar25 = puVar14[5];
                if ((uVar25 & 1) != 0) {
                  uVar25 = (longlong)puVar14 + ((longlong)uVar25 >> 0x18) + 0x28;
                }
                uVar26 = puVar14[1];
                if ((uVar26 & 1) != 0) {
                  uVar26 = (longlong)puVar14 + ((longlong)uVar26 >> 0x18) + 8;
                }
                uVar28 = *puVar14;
                if ((uVar28 & 1) != 0) {
                  uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar14;
                }
                uVar27 = *(uint *)(uVar28 + (ulonglong)
                                            ((uint)puVar14[2] &
                                             ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) *
                                             0x2d69 & 0xffff) * 4);
                if (uVar27 != 0xffffffff) {
                  goto LAB_143e76d2a;
                }
              }
              break;
            }
            iVar24 = (int)plVar19[2];
          } while (iVar24 != -1);
        }
      }
LAB_143e76d46:
      uVar25 = 0;
      lVar15 = 0;
LAB_143e76d7b:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8ea28) && (FUN_144b3d300(&DAT_14cb8ea28), DAT_14cb8ea28 == -1))
      {
        FUN_14615acf4();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0780;
        local_188 = &LAB_1489c0784;
        local_190 = FUN_1489c0788;
        local_198 = FUN_1489c07b0;
        local_1b0 = L"StandardRarePS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardRarePS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e980,0,&DAT_14cb8e918,L"FRenoirStandardRarePS");
        _DAT_14cb8e980 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e78456);
        puVar21 = &DAT_14cb8ea28;
        goto LAB_143e77793;
      }
      break;
    case 0x1e:
      FUN_1415d3232();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f070,0);
      FUN_1415d3232();
      uVar25 = local_128;
      lVar15 = uStack_120;
      break;
    case 0x1f:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f5b8) && (FUN_144b3d300(&DAT_14cb8f5b8), DAT_14cb8f5b8 == -1))
      {
        FUN_14615b0f0();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0e42;
        local_188 = &LAB_1489c0e46;
        local_190 = FUN_1489c0e4a;
        local_198 = FUN_1489c0e72;
        local_1b0 = L"ClearQuadPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8f510,0,&DAT_14cb8f4a8,L"FRenoirClearQuadPS");
        _DAT_14cb8f510 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784ce);
        _Init_thread_footer(&DAT_14cb8f5b8);
      }
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f510,0);
      uVar25 = local_128;
      lVar15 = uStack_120;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8f5b8) &&
         (FUN_144b3d300(&DAT_14cb8f5b8), uVar25 = local_128, lVar15 = uStack_120,
         DAT_14cb8f5b8 == -1)) {
        FUN_14615b0f0();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0e42;
        local_188 = &LAB_1489c0e46;
        local_190 = FUN_1489c0e4a;
        local_198 = FUN_1489c0e72;
        local_1b0 = L"ClearQuadPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8f510,0,&DAT_14cb8f4a8,L"FRenoirClearQuadPS");
        _DAT_14cb8f510 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e784ce);
        _Init_thread_footer(&DAT_14cb8f5b8);
        uVar25 = local_128;
        lVar15 = uStack_120;
      }
      break;
    case 0x20:
      FUN_1415d3118();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8ee20,0);
      FUN_1415d3118();
      uVar25 = local_128;
      lVar15 = uStack_120;
      break;
    default:
      uVar25 = 0;
      lVar15 = 0;
      if (iVar24 == 0xd) {
        FUN_1415d334c();
        FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f198,0);
        FUN_1415d334c();
        uVar25 = local_128;
        lVar15 = uStack_120;
      }
    }
  }
  else if (iVar24 < 0x3c) {
    lVar15 = 0;
    switch(iVar24) {
    case 0x2f:
      FUN_1460ac324();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8ebd0,0);
      FUN_1460ac324();
      uVar25 = local_128;
      lVar15 = uStack_120;
      break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      break;
    case 0x34:
      FUN_1415d3466();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f2c0,0);
      FUN_1415d3466();
      uVar25 = local_128;
      lVar15 = uStack_120;
      break;
    case 0x35:
      FUN_1415d369a();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f760,0);
      FUN_1415d369a();
      uVar25 = local_128;
      lVar15 = uStack_120;
      break;
    case 0x36:
      goto switchD_143e75b6c_caseD_36;
    default:
      lVar15 = 0;
    }
  }
  else if ((iVar24 == 0x3c) || (iVar24 == 0x40)) {
    FUN_1460ac594();
    FUN_1448e935e(plVar20,&local_128,&DAT_14cb8f888,0);
    FUN_1460ac594();
    uVar25 = local_128;
    lVar15 = uStack_120;
  }
  else {
    uVar25 = 0;
    lVar15 = 0;
    if (iVar24 == 0x47) {
      FUN_1460aca74();
      FUN_1448e935e(plVar20,&local_128,&DAT_14cb8fad8,0);
      FUN_1460aca74();
      uVar25 = local_128;
      lVar15 = uStack_120;
    }
  }
  iVar24 = *(int *)(lVar31 + 8);
  lVar32 = 0;
  if (0x2e < iVar24) {
    if (iVar24 < 0x3c) {
      if (iVar24 - 0x35U < 2) {
        FUN_1415d369a();
        FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f760,0);
        FUN_1415d369a();
      }
      else if (iVar24 == 0x34) {
        FUN_1415d3466();
        FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f2c0,0);
        FUN_1415d3466();
      }
      else {
        if (iVar24 != 0x2f) goto switchD_143e75fbc_default;
        FUN_1460ac324();
        FUN_1448e935e(uVar13,&local_128,&DAT_14cb8ebd0,0);
        FUN_1460ac324();
      }
    }
    else if ((iVar24 == 0x3c) || (iVar24 == 0x40)) {
      FUN_1460ac594();
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f888,0);
      FUN_1460ac594();
    }
    else {
      if (iVar24 != 0x47) goto switchD_143e75fbc_default;
      FUN_1460aca74();
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8fad8,0);
      FUN_1460aca74();
    }
    goto LAB_143e7659a;
  }
  lVar32 = 0;
  if (iVar24 < 0x1d) {
    if (iVar24 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e7d8) && (FUN_144b3d300(&DAT_14cb8e7d8), DAT_14cb8e7d8 == -1))
      {
        FUN_14615aa4c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0612;
        local_188 = &LAB_1489c0616;
        local_190 = FUN_1489c061a;
        local_198 = FUN_1489c0642;
        local_1b0 = L"StandardPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e730,0,&DAT_14cb8e6c8,L"FRenoirStandardPS");
        _DAT_14cb8e730 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7843e);
        _Init_thread_footer(&DAT_14cb8e7d8);
      }
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8e730,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8e7d8) && (FUN_144b3d300(&DAT_14cb8e7d8), DAT_14cb8e7d8 == -1))
      {
        FUN_14615aa4c();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0612;
        local_188 = &LAB_1489c0616;
        local_190 = FUN_1489c061a;
        local_198 = FUN_1489c0642;
        local_1b0 = L"StandardPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8e730,0,&DAT_14cb8e6c8,L"FRenoirStandardPS");
        _DAT_14cb8e730 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e7843e);
        puVar21 = &DAT_14cb8e7d8;
        goto LAB_143e77fa9;
      }
    }
    else {
      if (iVar24 != 9) {
        if (iVar24 == 0xd) {
          FUN_1415d334c();
          FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f198,0);
          FUN_1415d334c();
          goto LAB_143e7659a;
        }
        goto switchD_143e75fbc_default;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8eff0) && (FUN_144b3d300(&DAT_14cb8eff0), DAT_14cb8eff0 == -1))
      {
        FUN_14615ae48();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0afa;
        local_188 = &LAB_1489c0afe;
        local_190 = FUN_1489c0b02;
        local_198 = FUN_1489c0b2a;
        local_1b0 = L"StencilPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8ef48,0,&DAT_14cb8eee0,L"FRenoirStencilPS");
        _DAT_14cb8ef48 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e78492);
        _Init_thread_footer(&DAT_14cb8eff0);
      }
      FUN_1448e935e(uVar13,&local_128,&DAT_14cb8ef48,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8eff0) && (FUN_144b3d300(&DAT_14cb8eff0), DAT_14cb8eff0 == -1))
      {
        FUN_14615ae48();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = &LAB_1489c0afa;
        local_188 = &LAB_1489c0afe;
        local_190 = FUN_1489c0b02;
        local_198 = FUN_1489c0b2a;
        local_1b0 = L"StencilPS";
        local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPS.usf";
        local_160 = 0;
        local_168 = 0x110;
        local_1a0 = 1;
        local_1a8 = 3;
        FUN_140db5666(&DAT_14cb8ef48,0,&DAT_14cb8eee0,L"FRenoirStencilPS");
        _DAT_14cb8ef48 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_143e78492);
        puVar21 = &DAT_14cb8eff0;
        goto LAB_143e77fa9;
      }
    }
    goto LAB_143e76526;
  }
  switch(iVar24) {
  case 0x1d:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8ea28) && (FUN_144b3d300(&DAT_14cb8ea28), DAT_14cb8ea28 == -1)) {
      FUN_14615acf4();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c0780;
      local_188 = &LAB_1489c0784;
      local_190 = FUN_1489c0788;
      local_198 = FUN_1489c07b0;
      local_1b0 = L"StandardRarePS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardRarePS.usf";
      local_160 = 0;
      local_168 = 0x110;
      local_1a0 = 1;
      local_1a8 = 3;
      FUN_140db5666(&DAT_14cb8e980,0,&DAT_14cb8e918,L"FRenoirStandardRarePS");
      _DAT_14cb8e980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78456);
      _Init_thread_footer(&DAT_14cb8ea28);
    }
    FUN_1448e935e(uVar13,&local_128,&DAT_14cb8e980,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8ea28) && (FUN_144b3d300(&DAT_14cb8ea28), DAT_14cb8ea28 == -1)) {
      FUN_14615acf4();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c0780;
      local_188 = &LAB_1489c0784;
      local_190 = FUN_1489c0788;
      local_198 = FUN_1489c07b0;
      local_1b0 = L"StandardRarePS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohStandardRarePS.usf";
      local_160 = 0;
      local_168 = 0x110;
      local_1a0 = 1;
      local_1a8 = 3;
      FUN_140db5666(&DAT_14cb8e980,0,&DAT_14cb8e918,L"FRenoirStandardRarePS");
      _DAT_14cb8e980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78456);
      puVar21 = &DAT_14cb8ea28;
LAB_143e77fa9:
      _Init_thread_footer(puVar21);
    }
    break;
  case 0x1e:
    FUN_1415d3232();
    FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f070,0);
    FUN_1415d3232();
    goto LAB_143e7659a;
  case 0x1f:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8f5b8) && (FUN_144b3d300(&DAT_14cb8f5b8), DAT_14cb8f5b8 == -1)) {
      FUN_14615b0f0();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c0e42;
      local_188 = &LAB_1489c0e46;
      local_190 = FUN_1489c0e4a;
      local_198 = FUN_1489c0e72;
      local_1b0 = L"ClearQuadPS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadPS.usf";
      local_160 = 0;
      local_168 = 0x110;
      local_1a0 = 1;
      local_1a8 = 3;
      FUN_140db5666(&DAT_14cb8f510,0,&DAT_14cb8f4a8,L"FRenoirClearQuadPS");
      _DAT_14cb8f510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784ce);
      _Init_thread_footer(&DAT_14cb8f5b8);
    }
    FUN_1448e935e(uVar13,&local_128,&DAT_14cb8f510,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8f5b8) && (FUN_144b3d300(&DAT_14cb8f5b8), DAT_14cb8f5b8 == -1)) {
      FUN_14615b0f0();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_1489c0e42;
      local_188 = &LAB_1489c0e46;
      local_190 = FUN_1489c0e4a;
      local_198 = FUN_1489c0e72;
      local_1b0 = L"ClearQuadPS";
      local_1b8 = L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadPS.usf";
      local_160 = 0;
      local_168 = 0x110;
      local_1a0 = 1;
      local_1a8 = 3;
      FUN_140db5666(&DAT_14cb8f510,0,&DAT_14cb8f4a8,L"FRenoirClearQuadPS");
      _DAT_14cb8f510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784ce);
      puVar21 = &DAT_14cb8f5b8;
      goto LAB_143e77fa9;
    }
    break;
  case 0x20:
    FUN_1415d3118();
    FUN_1448e935e(uVar13,&local_128,&DAT_14cb8ee20,0);
    FUN_1415d3118();
LAB_143e7659a:
    lVar32 = 0;
    if (local_128 != 0) goto LAB_143e765a2;
  default:
    goto switchD_143e75fbc_default;
  }
LAB_143e76526:
  if (local_128 == 0) {
    lVar32 = 0;
  }
  else {
LAB_143e765a2:
    lVar32 = *(longlong *)
              (*(longlong *)(*(longlong *)(uStack_120 + 8) + 0x50) +
              (longlong)*(int *)(local_128 + 0xd4) * 8);
    if (lVar32 == 0) {
      lVar32 = FUN_1400bafc2(*(longlong *)(uStack_120 + 8),(longlong)*(int *)(local_128 + 0xd4),1);
    }
  }
switchD_143e75fbc_default:
  iVar24 = *(int *)(lVar31 + 4);
  if (iVar24 < 0x35) {
    if ((iVar24 == 0xd) || (iVar24 == 0x2f)) {
LAB_143e76600:
      if (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc)) {
        lVar29 = param_1 + 0x3d0;
        if (*(longlong *)(param_1 + 0x3d8) != 0) {
          lVar29 = *(longlong *)(param_1 + 0x3d8);
        }
        iVar24 = *(int *)(lVar29 + (ulonglong)(~*(uint *)(param_1 + 0x3e0) & 1) * 4);
        if (iVar24 != -1) {
          do {
            piVar16 = (int *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar24 * 0x18);
            if (*piVar16 == 1) goto LAB_143e76781;
            iVar24 = piVar16[4];
          } while (iVar24 != -1);
        }
      }
      goto LAB_143e7677f;
    }
LAB_143e7672e:
    if (*(int *)(param_1 + 0x3a0) == *(int *)(param_1 + 0x3cc)) goto LAB_143e7677f;
    piVar16 = (int *)(param_1 + 0x3d0);
    if (*(int **)(param_1 + 0x3d8) != (int *)0x0) {
      piVar16 = *(int **)(param_1 + 0x3d8);
    }
    iVar24 = *piVar16;
    if (iVar24 == -1) goto LAB_143e7677f;
    do {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar24 * 0x18);
      if (*piVar16 == 0) break;
      iVar24 = piVar16[4];
      piVar16 = (int *)0x0;
    } while (iVar24 != -1);
  }
  else {
    if (iVar24 == 0x35) {
      if (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc)) {
        lVar29 = param_1 + 0x3d0;
        if (*(longlong *)(param_1 + 0x3d8) != 0) {
          lVar29 = *(longlong *)(param_1 + 0x3d8);
        }
        iVar24 = *(int *)(lVar29 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & 3) * 4);
        if (iVar24 != -1) {
          do {
            piVar16 = (int *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar24 * 0x18);
            if (*piVar16 == 3) break;
            iVar24 = piVar16[4];
            piVar16 = (int *)0x0;
          } while (iVar24 != -1);
          goto LAB_143e76781;
        }
      }
    }
    else {
      if (iVar24 != 0x47) {
        if (iVar24 == 0x40) goto LAB_143e76600;
        goto LAB_143e7672e;
      }
      if (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc)) {
        lVar29 = param_1 + 0x3d0;
        if (*(longlong *)(param_1 + 0x3d8) != 0) {
          lVar29 = *(longlong *)(param_1 + 0x3d8);
        }
        iVar24 = *(int *)(lVar29 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & 4) * 4);
        if (iVar24 != -1) {
          do {
            piVar16 = (int *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar24 * 0x18);
            if (*piVar16 == 4) break;
            iVar24 = piVar16[4];
            piVar16 = (int *)0x0;
          } while (iVar24 != -1);
          goto LAB_143e76781;
        }
      }
    }
LAB_143e7677f:
    piVar16 = (int *)0x0;
  }
LAB_143e76781:
  lVar29 = *(longlong *)(piVar16 + 2);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  uStack_8f = 0;
  uStack_8c = 0;
  uStack_87 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  FUN_144b0e33a(&DAT_14ca85100,&local_128);
  local_d0 = 0;
  local_f8 = local_148;
  uStack_f0 = *(undefined8 *)(param_1 + 0x160);
  local_e8 = local_150;
  local_128 = *(ulonglong *)(lVar29 + 0x10);
  uStack_120 = local_138;
  *(ulonglong *)(param_1 + 0x70) = local_140;
  *(longlong *)(param_1 + 0x78) = local_130;
  *(ulonglong *)(param_1 + 0x60) = uVar25;
  *(longlong *)(param_1 + 0x68) = lVar15;
  local_118 = lVar32;
  memcpy((void *)(param_1 + 0x80),&local_128,0xd8);
  *(undefined1 *)(param_1 + 0x15c) = *(undefined1 *)(lVar31 + 0x68);
  uVar12 = *(undefined4 *)(param_1 + 0x158);
  lVar31 = FUN_140028f18(&DAT_14ca85100,&local_128);
  if ((lVar31 != 0) && ((local_60 & 0x10000000) == 0)) {
    _DAT_14ca852a8 = (undefined4)local_108;
    uRam000000014ca852ac = local_108._4_4_;
    uRam000000014ca852b0 = (undefined4)uStack_100;
    uRam000000014ca852b4 = uStack_100._4_4_;
    DAT_14ca85298._0_4_ = (undefined4)local_118;
    DAT_14ca85298._4_4_ = local_118._4_4_;
    uRam000000014ca852a0 = (undefined4)uStack_110;
    uRam000000014ca852a4 = uStack_110._4_4_;
    _DAT_14ca85288 = (undefined4)local_128;
    uRam000000014ca8528c = local_128._4_4_;
    DAT_14ca85290._0_4_ = (undefined4)uStack_120;
    DAT_14ca85290._4_4_ = uStack_120._4_4_;
    puVar17 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar17 + 4;
    if (DAT_14ca85108 < puVar22) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar17 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar22 = puVar17 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar22;
    *DAT_14ca85130 = puVar17;
    DAT_14ca85130 = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_14a37d348;
    puVar17[2] = lVar31;
    *(undefined4 *)(puVar17 + 3) = uVar12;
    *(undefined1 *)((longlong)puVar17 + 0x1c) = 1;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x158);
  puVar17 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar22 = puVar17 + 3;
  if (DAT_14ca85108 < puVar22) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar17 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar17 + 3;
  }
  lVar15 = local_148;
  lVar31 = local_150;
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar22;
  *DAT_14ca85130 = puVar17;
  DAT_14ca85130 = puVar17 + 1;
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a2901c8;
  *(undefined4 *)(puVar17 + 2) = uVar12;
  *(undefined1 *)(param_1 + 0x248) = 1;
  *(undefined1 *)(param_1 + 0x260) = 1;
  *(undefined1 *)(param_1 + 0x278) = 1;
  if (local_150 != 0) {
    LOCK();
    puVar1 = (uint *)(local_150 + 8);
    uVar27 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar27 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_150 + 8);
      LOCK();
      uVar27 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar27 >> 0x1e & 1) == 0) {
        bVar6 = *(byte *)(local_150 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar31;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar6 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar20;
            LOCK();
            bVar34 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar34) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar34);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar34 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar18;
            if (bVar34) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar34);
        }
      }
    }
  }
  if (lVar15 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar15 + 8);
    uVar27 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar27 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar15 + 8);
      LOCK();
      uVar27 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar27 >> 0x1e & 1) == 0) {
        bVar6 = *(byte *)(lVar15 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar15;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar6 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar20;
            LOCK();
            bVar34 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar34) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar34);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar34 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar18;
            if (bVar34) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar34);
        }
      }
    }
  }
LAB_143e76a84:
  if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8) ||
     (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca80040)) {
    iVar24 = 0;
    do {
      FUN_1489c0042(*(undefined8 *)(param_1 + 0x60),iVar24,*(undefined8 *)(param_1 + 0x288));
      iVar24 = iVar24 + 1;
    } while (iVar24 != 5);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e783c4 FUN_143e783c4 body=110 status=ok
// SIG undefined FUN_143e783c4(void)

undefined8 FUN_143e783c4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x1a8) != *(int *)(lVar2 + 0x1d4)) {
    lVar3 = lVar2 + 0x1d8;
    if (*(longlong *)(lVar2 + 0x1e0) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x1e0);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x1e8) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1a0) + (longlong)(int)uVar4 * 0x18),
            *puVar1 != param_2) {
        uVar4 = puVar1[4];
        if (uVar4 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 != (uint *)0x0) {
        return *(undefined8 *)(puVar1 + 2);
      }
    }
  }
  return 0;
}



// FUNCTION 143e78516 FUN_143e78516 body=383 status=ok
// SIG undefined FUN_143e78516(void)

void FUN_143e78516(longlong param_1,void *param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"Coh_AuxTexture";
  local_40 = 0;
  uStack_38 = 0;
  bVar1 = true;
  if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) &&
     ((longlong)*(int *)(param_1 + 0x38) < 0x36)) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x10;
    bVar1 = *(int *)(&DAT_14b43b288 + lVar2) * *(int *)(&DAT_14b43b284 + lVar2) < 2;
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  if ((*(byte *)(param_1 + 0x30) & 0x80) != 0) {
    iVar4 = 0;
    if ((ulonglong)*(uint *)(param_1 + 0x38) < 0x36) {
      iVar4 = *(int *)(&DAT_14b43ba38 + (ulonglong)*(uint *)(param_1 + 0x38) * 4);
    }
    param_3 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) * iVar4;
    uStack_80 = (ulonglong)param_3;
    if (param_3 != 0) {
      FUN_1447403be(&local_88);
    }
    memset(local_88,0,(longlong)(int)param_3);
    param_2 = local_88;
  }
  if (!(bool)(bVar1 ^ 1U | param_2 == (void *)0x0)) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar3 = &PTR_FUN_14b43b5e0;
    puVar3[1] = param_2;
    *(uint *)(puVar3 + 2) = param_3;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
  }
  FUN_143e78696(param_1,&local_78);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e78696 FUN_143e78696 body=2141 status=ok
// SIG undefined FUN_143e78696(void)

void FUN_143e78696(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  uint local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  char local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined2 local_bc;
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  char local_60;
  char local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined2 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = (ulonglong)((*(uint *)(param_1 + 0x30) & 8) << 5);
  iVar4 = *(int *)(param_1 + 0x38);
  uVar13 = uVar6 + 0x10;
  if (iVar4 != 0x34) {
    uVar13 = uVar6;
  }
  local_5f = (char)*(int *)(param_1 + 0x2c) + (*(int *)(param_1 + 0x2c) == 0);
  cVar11 = (char)*(int *)(param_1 + 0x28) + (*(int *)(param_1 + 0x28) == 0);
  local_60 = cVar11;
  if (*(char *)(param_1 + 0x34) != '\x01') {
    if (iVar4 == 0) {
LAB_143e78a5c:
      local_5d = 0x25;
    }
    else {
      switch(iVar4) {
      case 1:
        local_5d = 10;
        break;
      case 2:
        local_5d = 1;
        break;
      case 3:
        local_5d = 0x1b;
        break;
      case 4:
        local_5d = 4;
        break;
      case 5:
        local_5d = 5;
        break;
      case 6:
        local_5d = 6;
        break;
      case 7:
        local_5d = 7;
        break;
      case 8:
        local_5d = 0x27;
        break;
      case 9:
        local_5d = 0x17;
        break;
      case 10:
        local_5d = 0x37;
        break;
      case 0xb:
        local_5d = 0x38;
        break;
      case 0xc:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
switchD_143e78c4b_caseD_c:
        local_5d = 0;
        break;
      case 0xd:
        local_5d = 0x2e;
        break;
      case 0xe:
        local_5d = 0x2f;
        break;
      case 0x17:
        local_5d = 0x32;
        break;
      case 0x1b:
        local_5d = 0x33;
        break;
      case 0x1e:
        local_5d = 0x34;
        break;
      case 0x22:
        local_5d = 0x35;
        break;
      case 0x24:
        local_5d = 0x36;
        break;
      default:
        if (iVar4 == 0x34) goto LAB_143e78a5c;
        if (iVar4 != 0x35) goto switchD_143e78c4b_caseD_c;
        local_5d = 2;
      }
    }
    local_6c = *(undefined8 *)(param_1 + 0x20);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_40 = 0;
    uStack_38 = 0;
    local_90 = uVar13 | 8;
    local_48 = *(longlong *)(param_1 + 0x18);
    local_5e = 0;
    local_5c = 0xff00;
    local_64 = 0x10001;
    local_88 = 1;
    local_70 = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_58 = FUN_1431edf91(local_90,CONCAT71((int7)((ulonglong)local_50 >> 8),local_48 != 0));
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_f0,&DAT_14ca85100,&local_90);
    puVar12 = (ulonglong *)(param_1 + 0x58);
    if (puVar12 != &local_f0) {
      uVar13 = *puVar12;
      *puVar12 = local_f0;
      local_f0 = 0;
      if (uVar13 == 0) goto LAB_143e78be0;
      LOCK();
      puVar1 = (uint *)(uVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(uVar13 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(uVar13 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar13;
          plVar9 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar10 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    uVar13 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_f0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_f0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_f0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar13;
          plVar9 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar10 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    goto LAB_143e78be0;
  }
  if (iVar4 == 0) {
LAB_143e786f3:
    local_5d = 0x25;
  }
  else {
    switch(iVar4) {
    case 1:
      local_5d = 10;
      break;
    case 2:
      local_5d = 1;
      break;
    case 3:
      local_5d = 0x1b;
      break;
    case 4:
      local_5d = 4;
      break;
    case 5:
      local_5d = 5;
      break;
    case 6:
      local_5d = 6;
      break;
    case 7:
      local_5d = 7;
      break;
    case 8:
      local_5d = 0x27;
      break;
    case 9:
      local_5d = 0x17;
      break;
    case 10:
      local_5d = 0x37;
      break;
    case 0xb:
      local_5d = 0x38;
      break;
    case 0xc:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
switchD_143e78c24_caseD_c:
      local_5d = 0;
      break;
    case 0xd:
      local_5d = 0x2e;
      break;
    case 0xe:
      local_5d = 0x2f;
      break;
    case 0x17:
      local_5d = 0x32;
      break;
    case 0x1b:
      local_5d = 0x33;
      break;
    case 0x1e:
      local_5d = 0x34;
      break;
    case 0x22:
      local_5d = 0x35;
      break;
    case 0x24:
      local_5d = 0x36;
      break;
    default:
      if (iVar4 == 0x34) goto LAB_143e786f3;
      if (iVar4 != 0x35) goto switchD_143e78c24_caseD_c;
      local_5d = 2;
    }
  }
  local_6c = *(undefined8 *)(param_1 + 0x20);
  local_50 = *(undefined8 *)(param_2 + 0x30);
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_84 = 0;
  uStack_7c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_90 = uVar13 | 0x4000009;
  local_48 = *(longlong *)(param_1 + 0x18);
  local_5e = 0;
  local_5c = 0xff00;
  local_64 = 0x10001;
  local_88 = 1;
  local_70 = 0;
  local_58 = 0x70;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_f0,&DAT_14ca85100);
  puVar12 = (ulonglong *)(param_1 + 0x58);
  if (puVar12 == &local_f0) {
LAB_143e7881b:
    uVar6 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_f0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_f0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_f0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar6;
          plVar9 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar10 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    uVar6 = *puVar12;
    *puVar12 = local_f0;
    local_f0 = 0;
    if (uVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(uVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(uVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(uVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar6;
          plVar9 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar10 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143e7881b;
    }
  }
  if ((*(uint *)(param_1 + 0x2c) < 2) || (*(char *)(param_1 + 0x70) != '\x06')) goto LAB_143e78be0;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 == 0) {
LAB_143e7889c:
    local_bd = 0x25;
  }
  else {
    switch(iVar4) {
    case 1:
      local_bd = 10;
      break;
    case 2:
      local_bd = 1;
      break;
    case 3:
      local_bd = 0x1b;
      break;
    case 4:
      local_bd = 4;
      break;
    case 5:
      local_bd = 5;
      break;
    case 6:
      local_bd = 6;
      break;
    case 7:
      local_bd = 7;
      break;
    case 8:
      local_bd = 0x27;
      break;
    case 9:
      local_bd = 0x17;
      break;
    case 10:
      local_bd = 0x37;
      break;
    case 0xb:
      local_bd = 0x38;
      break;
    case 0xc:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
switchD_143e78c70_caseD_c:
      local_bd = 0;
      break;
    case 0xd:
      local_bd = 0x2e;
      break;
    case 0xe:
      local_bd = 0x2f;
      break;
    case 0x17:
      local_bd = 0x32;
      break;
    case 0x1b:
      local_bd = 0x33;
      break;
    case 0x1e:
      local_bd = 0x34;
      break;
    case 0x22:
      local_bd = 0x35;
      break;
    case 0x24:
      local_bd = 0x36;
      break;
    default:
      if (iVar4 == 0x34) goto LAB_143e7889c;
      if (iVar4 != 0x35) goto switchD_143e78c70_caseD_c;
      local_bd = 2;
    }
  }
  local_cc = *(undefined8 *)(param_1 + 0x20);
  local_d4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_e4 = 0;
  uStack_dc = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_f0 = uVar13 | 0x400000a;
  local_bc = 0xff00;
  local_c4 = 0x10001;
  local_bf = 1;
  local_e8 = 1;
  local_d0 = 0;
  local_b8 = 0x70;
  local_b0 = L"Coh_ViewRTResolveMSAATexture";
  local_c0 = cVar11;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_f8,&DAT_14ca85100);
  plVar9 = (longlong *)(param_1 + 0x60);
  if (plVar9 == &local_f8) {
LAB_143e789bb:
    lVar5 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_f8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_f8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_f8 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar7 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar7;
              LOCK();
              bVar14 = plVar7 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar7 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_f8;
    local_f8 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar7 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar7;
              LOCK();
              bVar14 = plVar7 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar7 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143e789bb;
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x128) + 0x10);
  if (lVar5 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar5,*plVar9);
  }
LAB_143e78be0:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e78ef4 FUN_143e78ef4 body=442 status=ok
// SIG undefined FUN_143e78ef4(void)

void FUN_143e78ef4(longlong param_1,undefined4 *param_2,longlong param_3,longlong *param_4,
                  char param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
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
  char cVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x50) = param_2[0xc];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x40) = param_2[8];
  *(undefined4 *)(param_1 + 0x44) = uVar14;
  *(undefined4 *)(param_1 + 0x48) = uVar15;
  *(undefined4 *)(param_1 + 0x4c) = uVar16;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x38) = uVar12;
  *(undefined4 *)(param_1 + 0x3c) = uVar13;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  if (param_3 == 0) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    cVar17 = FUN_140432338(param_3);
    if (cVar17 != '\0') {
      local_48 = *(undefined8 *)(param_3 + 0x18);
      FUN_1400021e4(&local_48,&local_40);
      if ((longlong *)(param_1 + 0x78) == &local_40) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x78) = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 0x80) = local_38;
        *(undefined4 *)(param_1 + 0x84) = local_34;
      }
    }
    if (*(longlong *)(param_1 + 0x68) != param_3) {
      if ((*(longlong *)(param_1 + 0x68) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(param_3);
      *(longlong *)(param_1 + 0x68) = param_3;
    }
  }
  lVar4 = *param_4;
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x58) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar5;
          plVar20 = DAT_14ca843c0;
          plVar19 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar20;
              LOCK();
              bVar21 = plVar20 != DAT_14ca843c0;
              plVar19 = plVar18;
              if (bVar21) {
                plVar20 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar19;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar18 = (longlong)plVar19;
              LOCK();
              bVar21 = plVar19 != DAT_14ca843c8;
              plVar20 = plVar18;
              if (bVar21) {
                plVar19 = DAT_14ca843c8;
                plVar20 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar20;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  *(char *)(param_1 + 0x70) = param_5 + '\x01';
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e790b0 FUN_143e790b0 body=1425 status=ok
// SIG undefined FUN_143e790b0(void)

void FUN_143e790b0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
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
  undefined4 uVar15;
  ulonglong uVar16;
  char cVar17;
  int iVar18;
  DWORD DVar19;
  DWORD DVar20;
  undefined4 *puVar21;
  uint *puVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined ***pppuVar25;
  uint *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x50) = param_2[0xc];
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[9];
  uVar14 = param_2[10];
  uVar15 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x40) = param_2[8];
  *(undefined4 *)(param_1 + 0x44) = uVar13;
  *(undefined4 *)(param_1 + 0x48) = uVar14;
  *(undefined4 *)(param_1 + 0x4c) = uVar15;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  *(undefined4 *)(param_1 + 0x3c) = uVar12;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined1 *)(param_1 + 0x70) = 6;
  if (param_3 == 0) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    cVar17 = FUN_140432338(param_3);
    if (cVar17 != '\0') {
      local_70 = *(undefined8 *)(param_3 + 0x18);
      FUN_1400021e4(&local_70,&local_68);
      if ((undefined1 **)(param_1 + 0x78) == &local_68) {
        if (local_68 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 **)(param_1 + 0x78) = local_68;
        local_68 = (undefined1 *)0x0;
        *(undefined4 *)(param_1 + 0x80) = local_60;
        *(undefined4 *)(param_1 + 0x84) = local_5c;
      }
    }
    if (*(longlong *)(param_1 + 0x68) != param_3) {
      if ((*(longlong *)(param_1 + 0x68) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(param_3);
      *(longlong *)(param_1 + 0x68) = param_3;
    }
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar18 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar18 != 2) {
      if (iVar18 != 1) goto LAB_143e791d7;
      DVar19 = FUN_140ad26c0();
      DVar20 = GetCurrentThreadId();
      if (DVar19 == DVar20) goto LAB_143e791dc;
      goto LAB_143e7920d;
    }
  }
  else {
LAB_143e791d7:
    if (iVar18 != 0x10) {
LAB_143e7920d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar4 + 0xc60), iVar18 == 2))
        goto LAB_143e791dc;
        if (iVar18 == 1) {
          DVar19 = FUN_140ad26c0();
          DVar20 = GetCurrentThreadId();
          if (DVar19 == DVar20) goto LAB_143e791dc;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar22 = (uint *)*puVar2;
        if (puVar22 != (uint *)0x0) goto LAB_143e79366;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_143e79f2a);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar21 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar21 == (undefined4 *)0x0) {
            puVar21 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar21 = 0xffffffff;
          *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
          puVar21[0x12] = 0;
          *puVar2 = puVar21;
          FUN_140217a48(puVar2);
          puVar22 = (uint *)*puVar2;
LAB_143e79366:
          puVar28 = (undefined8 *)(*(longlong *)(puVar22 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar26 = (uint *)(puVar28 + 0x16);
          uVar24 = puVar22[0x12];
          if (puVar26 <= puVar22 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
            LOCK();
            uVar3 = *puVar22;
            *puVar22 = *puVar22 + uVar24 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar24) != 0xffffffff) break;
            puVar22 = (uint *)*puVar2;
            *puVar22 = 0xffffffff;
            *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
            puVar22[0x12] = 0;
            *puVar2 = puVar22;
            puVar28 = (undefined8 *)((longlong)puVar22 + 0x5fU & 0xfffffffffffffff8);
            puVar26 = (uint *)(puVar28 + 0x16);
            uVar24 = 0;
            if (puVar26 <= puVar22 + 0x4000) {
              uVar24 = 1;
              goto LAB_143e793e6;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_143e793e6:
        *(uint **)(puVar22 + 0x10) = puVar26;
        puVar22[0x12] = uVar24;
        iVar18 = 0;
        FUN_1447247dc(puVar28,0);
        *puVar28 = &PTR_FUN_14b43b878;
        puVar28[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar18 = 0;
          }
          else {
            uVar27 = 2;
          }
        }
        else {
          iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar27 = 5;
        }
        if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
        }
        puVar28[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar28[9] = puVar28;
        puVar28[10] = puVar28;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar16 = 1;
          if ((char)uVar27 != '\x06') {
            uVar16 = uVar27;
          }
          uVar27 = uVar16;
          uVar23 = 0;
        }
        else {
          if ((char)uVar27 == '\x06') {
            uVar27 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar23 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar28[0xf] = uVar23;
        puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar28 + 0x1c) = iVar18;
        if (puVar28 == (undefined8 *)0x0) {
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar28);
          LOCK();
          piVar1 = (int *)(puVar28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14b43b810;
        local_68 = &LAB_143e7a2f4;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"CreateViewRenderTargetTextureRHI",&DAT_14cb901b0);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar25 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar25 = &local_48;
          }
          (*(code *)(*pppuVar25)[2])();
        }
      }
      goto LAB_143e792a4;
    }
  }
LAB_143e791dc:
  if (param_1 != 0) {
    FUN_1418b541a(param_1);
  }
LAB_143e792a4:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e79648 FUN_143e79648 body=638 status=ok
// SIG undefined FUN_143e79648(void)

void FUN_143e79648(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  int local_84 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"Coh_VertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar9 = *(byte *)(param_1 + 0x18) + 0x4001;
  uVar6 = FUN_1414e3242(iVar9,0);
  local_84[1] = 0;
  local_84[0] = iVar4;
  local_84[2] = iVar9;
  if (iVar4 == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_78,iVar9,0);
  }
  local_a8 = uVar6;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_a0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,&DAT_14ca85100,local_84);
    *(undefined4 *)(local_90 + 0x18) = uVar6;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_a0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,&DAT_14ca85100,local_84);
    *(undefined4 *)(local_90 + 0x18) = uVar6;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 != &local_90) {
    lVar5 = *plVar10;
    *plVar10 = local_90;
    local_90 = 0;
    if (lVar5 == 0) goto LAB_143e79852;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_90;
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_90 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_90 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_143e79852:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e798c8 FUN_143e798c8 body=29 status=ok
// SIG undefined FUN_143e798c8(void)

undefined8 FUN_143e798c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e798e6 FUN_143e798e6 body=296 status=ok
// SIG undefined FUN_143e798e6(void)

/* WARNING: Removing unreachable block (ram,0x000143e799db) */

undefined8 FUN_143e798e6(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    FUN_140056680(local_28);
    cVar4 = FUN_144a38768(local_28,L".ttf",4,1);
    if (((cVar4 != '\0') || (cVar4 = FUN_144a38768(local_28,L".otf",4,1), cVar4 != '\0')) ||
       (cVar4 = FUN_144a38768(local_28,L".ttc",4,1), cVar4 != '\0')) {
      plVar2 = *(longlong **)(param_1 + 0x10);
      FUN_144a06ecc(&local_38,local_28);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(plVar2,iVar1);
      }
      lVar3 = *plVar2;
      lVar5 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar5) = 0;
      *(undefined8 *)(lVar3 + lVar5) = local_38;
      local_38 = 0;
      *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_30;
      *(undefined4 *)(lVar3 + 0xc + lVar5) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143e79a38 FUN_143e79a38 body=1241 status=ok
// SIG undefined FUN_143e79a38(void)

void FUN_143e79a38(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) goto LAB_143e79b9a;
  *(undefined8 *)(param_1 + 0x30) = 0;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143e79a91;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143e79a96;
      goto LAB_143e79af8;
    }
  }
  else {
LAB_143e79a91:
    if (iVar7 != 0x10) {
LAB_143e79af8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143e79a96;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143e79a96;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143e79c5c;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143e79f2a);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143e79c5c:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
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
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143e79cdc;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143e79cdc:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14b43b738;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = &LAB_1489c165e;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"UnininitializeRenderingLibrary",&DAT_14cb8fc24);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143e79b9a;
    }
  }
LAB_143e79a96:
  if (*(longlong *)(DAT_14cb8e590 + 0x40) != 0) {
    *(undefined8 *)(DAT_14cb8e590 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_143e79b9a:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e79f52 FUN_143e79f52 body=282 status=ok
// SIG undefined FUN_143e79f52(void)

undefined8 * FUN_143e79f52(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e79f2a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e7a06c FUN_143e7a06c body=97 status=ok
// SIG undefined FUN_143e7a06c(void)

void FUN_143e7a06c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = *(undefined8 **)(DAT_14cb8e590 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(DAT_14cb8e590 + 0x40) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e7a0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e7a0e0 FUN_143e7a0e0 body=12 status=ok
// SIG undefined FUN_143e7a0e0(void)

void FUN_143e7a0e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e7a0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e7a0ec FUN_143e7a0ec body=29 status=ok
// SIG undefined FUN_143e7a0ec(void)

undefined8 FUN_143e7a0ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e7a10a FUN_143e7a10a body=282 status=ok
// SIG undefined FUN_143e7a10a(void)

undefined8 * FUN_143e7a10a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e79f2a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e7a224 FUN_143e7a224 body=94 status=ok
// SIG undefined FUN_143e7a224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7a224(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143e713b0(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143e713b0(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e7a260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143e7a282 FUN_143e7a282 body=114 status=ok
// SIG undefined FUN_143e7a282(void)

void FUN_143e7a282(longlong *param_1,int param_2)

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



// FUNCTION 143e7a30c FUN_143e7a30c body=12 status=ok
// SIG undefined FUN_143e7a30c(void)

void FUN_143e7a30c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e7a315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e7a318 FUN_143e7a318 body=29 status=ok
// SIG undefined FUN_143e7a318(void)

undefined8 FUN_143e7a318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e7a336 FUN_143e7a336 body=282 status=ok
// SIG undefined FUN_143e7a336(void)

undefined8 * FUN_143e7a336(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e79f2a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e7a450 FUN_143e7a450 body=80 status=ok
// SIG undefined FUN_143e7a450(void)

ulonglong FUN_143e7a450(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1418b541a();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e7a496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143e7a4b8 FUN_143e7a4b8 body=12 status=ok
// SIG undefined FUN_143e7a4b8(void)

void FUN_143e7a4b8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e7a4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e7a4c4 FUN_143e7a4c4 body=29 status=ok
// SIG undefined FUN_143e7a4c4(void)

undefined8 FUN_143e7a4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e7a4e2 FUN_143e7a4e2 body=282 status=ok
// SIG undefined FUN_143e7a4e2(void)

undefined8 * FUN_143e7a4e2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e79f2a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e7a5fc FUN_143e7a5fc body=80 status=ok
// SIG undefined FUN_143e7a5fc(void)

ulonglong FUN_143e7a5fc(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1418b541a();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e7a642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143e7a66a FUN_143e7a66a body=29 status=ok
// SIG undefined FUN_143e7a66a(void)

undefined8 FUN_143e7a66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e7a687 FUN_143e7a687 body=812 status=ok
// SIG undefined FUN_143e7a687(void)

void FUN_143e7a687(void)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14b439ae0;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/CoherentRenderingPlugin",&PTR_FUN_14b439b00,1,0);
  local_30 = (undefined *)0x800000014b439b70;
  local_1c = 0x17;
  uVar1 = FUN_14577453c();
  local_28._0_5_ = CONCAT14(1,uVar1);
  FUN_146564686(&local_30);
  local_28 = FUN_144a8c244;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8e6b8,&local_30);
  local_28 = FUN_144a95740;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8e7e0,&local_30);
  local_28 = FUN_144a9585a;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8e908,&local_30);
  local_28 = FUN_144a95974;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8ea30,&local_30);
  local_28 = FUN_1415d2ee4;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8eb58,&local_30);
  local_28 = FUN_1460ac324;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8ec80,&local_30);
  local_28 = FUN_1415d2ffe;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8eda8,&local_30);
  local_28 = FUN_1415d3118;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8eed0,&local_30);
  local_28 = FUN_144a95a8e;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8eff8,&local_30);
  local_28 = FUN_1415d3232;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f120,&local_30);
  local_28 = FUN_1415d334c;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f248,&local_30);
  local_28 = FUN_1415d3466;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f370,&local_30);
  local_28 = FUN_144a95ba8;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f498,&local_30);
  local_28 = FUN_144a95cc2;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f5c0,&local_30);
  local_28 = FUN_1415d3580;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f6e8,&local_30);
  local_28 = FUN_1415d369a;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f810,&local_30);
  local_28 = FUN_1460ac594;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8f938,&local_30);
  local_28 = FUN_1460ac804;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8fa60,&local_30);
  local_28 = FUN_1460aca74;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb8fb88,&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7a9b4 FUN_143e7a9b4 body=659 status=ok
// SIG undefined FUN_143e7a9b4(void)

undefined8 *
FUN_143e7a9b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b43be30;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 0x27) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x26,iVar1,0);
    memcpy((void *)param_1[0x26],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x28] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar3 = *param_3;
  *(int *)(param_1 + 0x29) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x28,iVar1,0);
    FUN_140b8566a(param_1[0x28],uVar3,iVar1);
  }
  param_1[0x2a] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  param_1[0x31] = puVar4;
  param_1[0x30] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  param_1[0x33] = puVar4;
  param_1[0x32] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  param_1[0x35] = puVar4;
  param_1[0x34] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  param_1[0x37] = puVar4;
  param_1[0x36] = puVar4;
  param_1[0x38] = param_5;
  DAT_14cb901c0 = DAT_14cb901c0 + 1;
  *(int *)(param_1 + 0x39) = DAT_14cb901c0;
  return param_1;
}



// FUNCTION 143e7ac48 FUN_143e7ac48 body=477 status=ok
// SIG undefined FUN_143e7ac48(void)

void FUN_143e7ac48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b43be30;
  FUN_1489c23c6();
  while ((undefined8 *)param_1[0x37] != (undefined8 *)0x0) {
    param_1[0x37] = *(undefined8 *)param_1[0x37];
    FUN_1400020a8();
  }
  FUN_1489c248a(param_1 + 0x34);
  FUN_1489c24dc(param_1 + 0x32);
  FUN_1489c252e(param_1 + 0x30);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e7ae1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e7ae26 FUN_143e7ae26 body=406 status=ok
// SIG undefined FUN_143e7ae26(void)

void FUN_143e7ae26(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0xc] != '\0') {
LAB_143e7ae41:
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar3 = FUN_1489c2e00();
  if (*(char *)(*(longlong *)(lVar3 + 0x20) + 0xc0) == '\0') {
    lVar3 = FUN_141054386();
    cVar1 = FUN_14291a916(*(undefined8 *)(lVar3 + 0x20));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 6;
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
      FUN_140056680(local_28,L"Invalid Domain");
      FUN_1411f311e(uVar4,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_143e7ae41;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
  if ((longlong)(int)plVar5[1] != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*plVar5 + 8 + lVar3) != 0) && (*(longlong *)(*plVar5 + lVar3) != 0)) {
        uVar2 = 1;
        goto LAB_143e7af12;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)plVar5[1] * 0x10 != lVar3);
  }
  uVar2 = 0;
LAB_143e7af12:
  *(undefined1 *)(param_1 + 0x2c) = uVar2;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1);
  if ((longlong)(int)plVar5[1] != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*plVar5 + 8 + lVar3) != 0) && (*(longlong *)(*plVar5 + lVar3) != 0)) {
        uVar2 = 1;
        goto LAB_143e7af50;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)plVar5[1] * 0x10 != lVar3);
  }
  uVar2 = 0;
LAB_143e7af50:
  *(undefined1 *)((longlong)param_1 + 0x161) = uVar2;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1);
  if ((longlong)(int)plVar5[1] != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*plVar5 + 8 + lVar3) != 0) && (*(longlong *)(*plVar5 + lVar3) != 0)) {
        uVar2 = 1;
        goto LAB_143e7af8a;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)plVar5[1] * 0x10 != lVar3);
  }
  uVar2 = 0;
LAB_143e7af8a:
  *(undefined1 *)((longlong)param_1 + 0x162) = uVar2;
  FUN_1489c23c6(param_1);
  FUN_1489c2e00();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 143e7afce FUN_143e7afce body=380 status=ok
// SIG undefined FUN_143e7afce(void)

void FUN_143e7afce(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  size_t sVar1;
  char *_Dest;
  longlong lVar2;
  wchar_t *_Str;
  uint uVar3;
  undefined1 auStack_f8 [32];
  char local_d8 [128];
  char *local_58;
  char *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_3 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_3;
    }
    local_58 = (char *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (char *)0x0;
      local_48 = 0;
      lVar2 = 1;
    }
    else {
      sVar1 = wcslen(_Str);
      local_48 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
      uVar3 = local_48 + 1;
      local_50 = (char *)0x0;
      if (0x80 < uVar3) {
        FUN_1446efa72(&local_58,0,uVar3,1);
        local_50 = local_58;
      }
      if (local_50 == (char *)0x0) {
        local_50 = local_d8;
      }
      FUN_14475a98a(local_50,uVar3,_Str,(int)sVar1 + 1);
      lVar2 = (longlong)local_48 + 1;
    }
    _Dest = (char *)FUN_14001cc68(lVar2,0);
    strcpy(_Dest,local_50);
    _Dest[local_48] = '\0';
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(char **)(param_1 + 0x70) = _Dest;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7b14c FUN_143e7b14c body=3000 status=ok
// SIG undefined FUN_143e7b14c(void)

ulonglong FUN_143e7b14c(longlong *param_1,longlong param_2,int param_3,ushort *param_4,
                       ulonglong param_5)

{
  ushort uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  int local_180;
  longlong local_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 uStack_160;
  void *local_e8;
  char *local_e0;
  int local_d8;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar16 = 0;
  iVar18 = (int)param_5;
  uVar17 = uVar16;
  if (0x17 < param_3) {
    if (0x25 < param_3) {
      if (param_3 == 0x26) {
        uVar1 = *param_4;
        local_178 = 0;
        uStack_170 = 0;
        if (2 < param_5) {
          FUN_14682dc3e(&local_168,param_4 + 1,iVar18 + -2);
          FUN_1400020e8(&local_178,local_60,local_58);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        if ((byte)((char)param_1[8] - 3U) < 2) {
          param_1[0x25] = 0;
          if ((int)uStack_170 < 2) {
            FUN_14020fad6(&local_178,L"Peer did not specify a reason for initiating the closing");
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          *(undefined1 *)(param_1 + 8) = 5;
          if (param_1 + 9 != &local_178) {
            if (param_1[9] != 0) {
              FUN_1400020a8();
            }
            param_1[9] = local_178;
            local_178 = 0;
            *(int *)(param_1 + 10) = (int)uStack_170;
            *(undefined4 *)((longlong)param_1 + 0x54) = uStack_170._4_4_;
            uStack_170 = 0;
          }
          *(ushort *)(param_1 + 0xb) = uVar1 << 8 | uVar1 >> 8;
          *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        }
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        uVar17 = 1;
      }
      else if (param_3 == 0x3a) {
        lVar10 = FUN_1489c2e00();
        if (*(char *)(*(longlong *)(lVar10 + 0x20) + 0xc1) == '\0') {
          uVar17 = 1;
          if (iVar18 == 1) {
            local_188 = param_1[0x26];
            local_180 = (int)param_1[0x27] + -1;
            if ((int)param_1[0x27] == 0) {
              local_180 = 0;
            }
            FUN_141306ffc(&local_168);
            lVar10 = FUN_14158df5e();
            bVar6 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x40))
                              (*(longlong **)(lVar10 + 8),param_4,&local_168);
            if (local_168 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar17 = (ulonglong)(bVar6 ^ 1);
          }
        }
        else {
          FUN_144bafb60(param_4,0);
          uVar17 = 0;
        }
      }
      goto switchD_143e7b1a5_caseD_2;
    }
    if (param_3 == 0x18) {
      if ((int)param_1[0x2b] < 2) goto switchD_143e7b1a5_caseD_2;
      pwVar15 = (wchar_t *)param_1[0x2a];
      local_e8 = (void *)0x0;
      if (pwVar15 == (wchar_t *)0x0) {
        local_e0 = (char *)0x0;
        local_d8 = 0;
      }
      else {
        sVar9 = wcslen(pwVar15);
        FUN_1449b853c(&local_168,pwVar15,sVar9 & 0xffffffff,1);
      }
      pcVar2 = *(char **)param_4;
      strncpy(pcVar2,local_e0,(longlong)iVar18);
      pcVar2[(longlong)iVar18 - 1] = '\0';
      *(longlong *)param_4 = *(longlong *)param_4 + (longlong)local_d8;
      pvVar14 = local_e8;
      goto LAB_143e7b920;
    }
    uVar17 = 0;
    if (param_3 != 0x1e) goto switchD_143e7b1a5_caseD_2;
    cVar5 = (char)param_1[8];
    if (cVar5 == '\x04') {
      local_168 = (void *)0x0;
      uStack_160 = 0;
      bVar19 = (int)param_1[0xd] == 0x3f1;
      pwVar15 = L"Successfully closed connection to our peer";
      if (bVar19) {
        pwVar15 = L"Received text message exceeded memory limit";
      }
      FUN_14020fad6(&local_168,pwVar15);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined1 *)(param_1 + 8) = 5;
      if ((void **)(param_1 + 9) != &local_168) {
        if (param_1[9] != 0) {
          FUN_1400020a8();
        }
        param_1[9] = (longlong)local_168;
        local_168 = (void *)0x0;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_160._4_4_;
        uStack_160 = 0;
      }
      *(ushort *)(param_1 + 0xb) = (ushort)bVar19 * 9 + 1000;
      *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
LAB_143e7b826:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      if (local_168 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (cVar5 == '\x03') {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined1 *)(param_1 + 8) = 5;
      *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0xb) = 0x3ee;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    }
    else if (cVar5 == '\x02') {
      FUN_140056680(&local_168,L"Connection timed out");
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      *(undefined1 *)(param_1 + 8) = 6;
      if ((void **)(param_1 + 9) != &local_168) {
        if (param_1[9] != 0) {
          FUN_1400020a8();
        }
        param_1[9] = (longlong)local_168;
        local_168 = (void *)0x0;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_160._4_4_;
        uStack_160 = 0;
      }
      goto LAB_143e7b826;
    }
    param_1[0x25] = 0;
    uVar17 = uVar16;
    goto switchD_143e7b1a5_caseD_2;
  }
  uVar17 = 0;
  switch(param_3) {
  case 1:
    bVar19 = false;
    param_1[0x25] = 0;
    local_68 = 0;
    if (param_4 == (ushort *)0x0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      if (0 < iVar18) {
        bVar19 = *(char *)((longlong)param_4 + (ulonglong)(iVar18 - 1U)) == '\0';
        param_5 = param_5 & 0xffffffff;
        if (bVar19) {
          param_5 = (ulonglong)(iVar18 - 1U);
        }
      }
      FUN_1446e6fe8(&local_168,param_4,param_5 & 0xffffffff,bVar19);
    }
    FUN_14006620a(&local_178,local_60,local_58);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (*(byte *)(param_1 + 8) - 3 < 2) {
      *(undefined1 *)(param_1 + 8) = 5;
      *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0xb) = 0x3ee;
    }
    else if (*(byte *)(param_1 + 8) != 5) {
      *(undefined1 *)(param_1 + 8) = 6;
    }
    plVar11 = param_1 + 9;
    if (plVar11 != &local_178) {
      if (*plVar11 != 0) {
        FUN_1400020a8();
      }
      *plVar11 = local_178;
      local_178 = 0;
      *(int *)(param_1 + 10) = (int)uStack_170;
      *(undefined4 *)((longlong)param_1 + 0x54) = uStack_170._4_4_;
      uStack_170 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    break;
  default:
    goto switchD_143e7b1a5_caseD_2;
  case 3:
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined1 *)(param_1 + 8) = 3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    param_1[0x25] = param_2;
LAB_143e7b59e:
    lVar10 = *(longlong *)param_1[0x37];
    *(bool *)(param_1 + 0xf) = lVar10 == 0;
    uVar17 = uVar16;
    if (lVar10 != 0) {
      FUN_144bd0240(param_1[0x25]);
    }
    goto switchD_143e7b1a5_caseD_2;
  case 4:
    cVar5 = (char)param_1[8];
    uVar17 = uVar16;
    if (1 < (byte)(cVar5 - 3U)) goto switchD_143e7b1a5_caseD_2;
    param_1[0x25] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb901d8) && (FUN_144b3d300(&DAT_14cb901d8), DAT_14cb901d8 == -1)) {
      FUN_140056680(&DAT_14cb901c8,L"Successfully closed connection to our peer");
      atexit((_func_5014 *)&LAB_143e7bd05);
      _Init_thread_footer(&DAT_14cb901d8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb901f0) && (FUN_144b3d300(&DAT_14cb901f0), DAT_14cb901f0 == -1)) {
      FUN_140056680(&DAT_14cb901e0,L"Connection closed by peer");
      atexit((_func_5014 *)&LAB_143e7bd16);
      _Init_thread_footer(&DAT_14cb901f0);
    }
    local_168 = (void *)0x0;
    puVar12 = &DAT_14cb901e0;
    if (cVar5 == '\x04') {
      puVar12 = &DAT_14cb901c8;
    }
    iVar18 = *(int *)(puVar12 + 1);
    uStack_160 = CONCAT44(uStack_160._4_4_,iVar18);
    if (iVar18 == 0) {
      uStack_160 = 0;
    }
    else {
      pvVar14 = DAT_14cb901e0;
      if (cVar5 == '\x04') {
        pvVar14 = DAT_14cb901c8;
      }
      FUN_1446dd670(&local_168,iVar18,0);
      memcpy(local_168,pvVar14,(longlong)iVar18 * 2);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    *(undefined1 *)(param_1 + 8) = 5;
    if ((void **)(param_1 + 9) != &local_168) {
      if (param_1[9] != 0) {
        FUN_1400020a8();
      }
      param_1[9] = (longlong)local_168;
      local_168 = (void *)0x0;
      *(undefined4 *)(param_1 + 10) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)param_1 + 0x54) = uStack_160._4_4_;
      uStack_160 = 0;
    }
    *(undefined2 *)(param_1 + 0xb) = 1000;
    *(bool *)((longlong)param_1 + 0x5a) = cVar5 == '\x04';
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    pvVar14 = local_168;
LAB_143e7b920:
    uVar17 = uVar16;
    if (pvVar14 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto switchD_143e7b1a5_caseD_2;
  case 8:
    lVar10 = FUN_144bd4c40(param_2);
    iVar7 = FUN_144bd4c50(param_2);
    iVar8 = FUN_144bd4c70(param_2);
    if ((iVar8 == 0 & *(byte *)(param_1 + 0x2c)) == 1) {
      local_68 = 0;
      if (param_4 == (ushort *)0x0) {
        local_60 = 0;
        local_58 = 0;
      }
      else {
        if (iVar18 < 1) {
          bVar19 = false;
          uVar17 = param_5 & 0xffffffff;
        }
        else {
          uVar17 = (ulonglong)(iVar18 - 1);
          bVar19 = *(char *)((longlong)param_4 + uVar17) == '\0';
          if (!bVar19) {
            uVar17 = param_5 & 0xffffffff;
          }
        }
        FUN_1446e6fe8(&local_168,param_4,uVar17,bVar19);
      }
      iVar8 = (int)param_1[0x2e] + -1;
      if ((int)param_1[0x2e] == 0) {
        iVar8 = 0;
      }
      if ((ulonglong)param_1[0x38] < (longlong)iVar8 + param_5) {
        FUN_140002266(&local_178,L"Received text message exceeded memory limit of %llu bytes");
        (**(code **)(*param_1 + 0x10))(param_1,0x3f1,&local_178);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1400020e8(param_1 + 0x2d,local_60,local_58);
        if (lVar10 == 0 && iVar7 != 0) {
          plVar11 = (longlong *)FUN_14001cc68(0x10,0x10);
          *plVar11 = param_1[0x2d];
          param_1[0x2d] = 0;
          *(int *)(plVar11 + 1) = (int)param_1[0x2e];
          *(undefined4 *)((longlong)plVar11 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x174);
          param_1[0x2e] = 0;
          puVar12 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar12 = 0;
          puVar12[1] = plVar11;
          if (puVar12 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)param_1[0x34];
            param_1[0x34] = (longlong)puVar12;
            *puVar13 = puVar12;
          }
          *(undefined4 *)(param_1 + 0x2e) = 0;
          if (*(int *)((longlong)param_1 + 0x174) != 0) {
            FUN_1446f8c06(param_1 + 0x2d,0);
          }
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
LAB_143e7ba70:
      uVar17 = uVar16;
      if (*(char *)((longlong)param_1 + 0x161) == '\0') goto switchD_143e7b1a5_caseD_2;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x162) == '\x01' && iVar8 != 0) {
        puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar12 = 0;
        puVar12[1] = 0;
        *(bool *)(puVar12 + 2) = lVar10 == 0 && iVar7 != 0;
        *(int *)(puVar12 + 1) = iVar18;
        if (iVar18 != 0) {
          FUN_1447403be(puVar12,0);
          memcpy((void *)*puVar12,param_4,(longlong)iVar18);
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar13 = 0;
        puVar13[1] = puVar12;
        if (puVar13 != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)param_1[0x32];
          param_1[0x32] = (longlong)puVar13;
          *puVar12 = puVar13;
        }
        goto LAB_143e7ba70;
      }
      uVar17 = uVar16;
      if (*(char *)((longlong)param_1 + 0x161) != '\x01') goto switchD_143e7b1a5_caseD_2;
    }
    puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar12 = 0;
    puVar12[1] = 0;
    *(int *)(puVar12 + 2) = (int)lVar10;
    *(int *)(puVar12 + 1) = iVar18;
    if (iVar18 != 0) {
      FUN_1447403be(puVar12,0);
      memcpy((void *)*puVar12,param_4,(longlong)iVar18);
    }
    puVar13 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar13 = 0;
    puVar13[1] = puVar12;
    uVar17 = uVar16;
    if (puVar13 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)param_1[0x30];
      param_1[0x30] = (longlong)puVar13;
      *puVar12 = puVar13;
    }
    goto switchD_143e7b1a5_caseD_2;
  case 10:
  case 0xb:
    if ((char)param_1[8] == '\x03') {
      if (*(longlong *)param_1[0x37] != 0) {
        lVar10 = *(longlong *)(*(longlong *)param_1[0x37] + 8);
        cVar5 = FUN_1489c27d6(param_1,lVar10);
        if (*(char *)(lVar10 + 0x18) == '\0') {
          bVar19 = *(int *)(lVar10 + 0x10) + -0x10 <= *(int *)(lVar10 + 4);
        }
        else {
          bVar19 = false;
        }
        if ((bVar19) || (cVar5 != '\x01')) {
          lVar3 = *(longlong *)param_1[0x37];
          if (lVar3 != 0) {
            lVar10 = *(longlong *)(lVar3 + 8);
            lVar4 = param_1[0x37];
            param_1[0x37] = lVar3;
            *(undefined8 *)(lVar3 + 8) = 0;
            if (lVar4 != 0) {
              FUN_1400020a8();
            }
          }
          if (lVar10 != 0) {
            if (*(longlong *)(lVar10 + 8) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar10);
          }
        }
      }
      goto LAB_143e7b59e;
    }
    uVar17 = uVar16;
    if ((char)param_1[8] != '\x04') goto switchD_143e7b1a5_caseD_2;
    param_1[0x25] = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    lVar10 = param_1[0xd];
    pcVar2 = (char *)param_1[0xe];
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    sVar9 = strlen(pcVar2);
    FUN_144bd4be0(param_2,(int)lVar10,pcVar2,(longlong)(int)sVar9);
  }
  uVar17 = 0xffffffff;
switchD_143e7b1a5_caseD_2:
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7bd28 FUN_143e7bd28 body=1636 status=ok
// SIG undefined FUN_143e7bd28(void)

void FUN_143e7bd28(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *_Str;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined1 local_310;
  undefined1 local_308;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 *local_2d0;
  int local_2c8;
  undefined1 local_2c4;
  undefined1 local_2c0 [128];
  longlong local_240;
  char local_228;
  char local_220 [16];
  longlong local_210;
  undefined8 local_208;
  undefined8 local_1c4;
  undefined4 local_1bc;
  char *local_1a0;
  char *local_198;
  int local_190;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 local_138;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  iVar7 = (int)param_2[1];
  if (iVar7 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7 + 1);
  }
  local_2f8 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x34) <= iVar7) {
    FUN_1489c3eba(local_2f8);
    iVar7 = (int)param_2[1];
  }
  if (iVar7 != 0) {
    lVar11 = *param_2;
    lVar15 = 0;
    do {
      if (*(int *)(lVar11 + 8 + lVar15) == 0) {
        _Str = L"";
LAB_143e7bde0:
        local_1a0 = (char *)0x0;
        sVar9 = wcslen(_Str);
        local_190 = FUN_14475aa65(0,_Str,sVar9 & 0xffffffff);
        uVar14 = local_190 + 1;
        pcVar10 = (char *)0x0;
        if (0x80 < uVar14) {
          FUN_1446efa72(&local_1a0,0,uVar14,1);
          pcVar10 = local_1a0;
        }
        local_198 = pcVar10;
        if (pcVar10 == (char *)0x0) {
          local_198 = local_220;
        }
        FUN_14475a98a(local_198,uVar14,_Str,(int)sVar9 + 1);
      }
      else {
        _Str = *(wchar_t **)(lVar11 + lVar15);
        local_1a0 = (char *)0x0;
        if (_Str != (wchar_t *)0x0) goto LAB_143e7bde0;
        local_198 = (char *)0x0;
        local_190 = 0;
      }
      pcVar10 = (char *)FUN_14001cc68((longlong)(local_190 + 1),0);
      strcpy(pcVar10,local_198);
      iVar3 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
        FUN_1489c3f28(local_2f8,iVar3);
      }
      lVar4 = *local_2f8;
      lVar13 = (longlong)iVar3 * 0x38;
      *(char **)(lVar4 + lVar13) = pcVar10;
      *(code **)(lVar4 + 8 + lVar13) = FUN_1489c2e7c;
      *(undefined8 *)(lVar4 + 0x10 + lVar13) = 0;
      *(undefined8 *)(lVar4 + 0x18 + lVar13) = 0x10000;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar13);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar4 + 0x30 + lVar13) = 0;
      if (local_1a0 != (char *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar7 * 0x10 != lVar15);
  }
  iVar7 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar7 + 1U) {
    FUN_1489c3f28(local_2f8,iVar7);
  }
  plVar5 = local_2f8;
  lVar11 = *local_2f8;
  lVar15 = (longlong)iVar7 * 0x38;
  puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar11 + lVar15) = 0;
  ((undefined8 *)(lVar11 + lVar15))[1] = 0;
  *(undefined8 *)(lVar11 + 0x30 + lVar15) = 0;
  FUN_144bd5ec0(0x7df);
  memset(local_220,0,0x1c0);
  local_220[0] = -1;
  local_220[1] = -1;
  local_220[2] = -1;
  local_220[3] = -1;
  local_210 = *plVar5;
  local_1c4 = 0xffffffffffffffff;
  local_1bc = 0x10c0;
  local_2d4 = 0x8000;
  local_318 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"WebSockets.LibWebSockets",L"MaxHttpHeaderData",&local_2d4);
  local_144 = local_2d4;
  local_148 = local_2d4;
  local_2d8 = 0;
  local_318 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"WebSockets.LibWebSockets",L"PingPongInterval",&local_2d8);
  local_138 = (undefined2)local_2d8;
  lVar11 = FUN_141054386();
  local_228 = '\0';
  if (1 < *(int *)(lVar11 + 0xb0)) {
    local_2d0 = *(undefined8 **)(lVar11 + 0xa8);
    FUN_1489c2c0a(local_2c0);
  }
  local_2d0 = (undefined8 *)&DAT_149f27af2;
  local_2c8 = 3;
  local_2c4 = 0;
  uVar8 = FUN_14001a6c0(&local_2d0,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  lVar11 = FUN_1402c9134(&DAT_14c874628,uVar8,&local_2d0,1);
  plVar5 = *(longlong **)(lVar11 + 0x10);
  cVar6 = (**(code **)(*plVar5 + 8))(plVar5);
  uVar8 = 0x10c0;
  if (cVar6 != '\0') {
    local_2d0 = (undefined8 *)CONCAT44(local_2d0._4_4_,0x1010400);
    local_1a0 = (char *)(**(code **)(*plVar5 + 0x18))(plVar5);
    *(char **)(param_1 + 0x18) = local_1a0;
    uVar8 = 0xc0;
  }
  local_1bc = uVar8;
  local_208 = 0;
  lVar11 = FUN_144bd11e0();
  *(longlong *)(param_1 + 0x20) = lVar11;
  if (lVar11 != 0) {
    local_2dc = 0x20000;
    local_318 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"WebSockets.LibWebSockets",L"ThreadStackSize");
    local_308 = 0;
    local_310 = 0;
    local_318 = (undefined8 *)0xffffffffffffffff;
    lVar11 = FUN_14275bfaa(param_1 + 8,L"LibwebsocketsThread",0x20000,2);
    *(longlong *)(param_1 + 0xa0) = lVar11;
    if (lVar11 == 0) {
      FUN_144bd17e0(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      local_2d0 = (undefined8 *)0x0;
      local_2c8 = 0;
      FUN_1446efa72(&local_2d0,0,3,0x10);
      local_2c8 = 3;
      *local_2d0 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_2d0[2] = lVar15;
      *local_2d0 = &PTR_FUN_14b43c480;
      local_2d0[3] = param_1;
      local_2d0[4] = FUN_143e7c496;
      *(undefined4 *)(local_2d0 + 5) = 0;
      uVar12 = FUN_145d2af38();
      local_318 = (undefined8 *)((ulonglong)local_318 & 0xffffffff00000000);
      FUN_1405f67fc(uVar12,&local_2f0,&local_2d0,L"FLwsWebSocketsManager_GameThreadTick");
      *(undefined8 *)(param_1 + 0x90) = local_2f0;
      local_2f0 = 0;
      plVar5 = *(longlong **)(param_1 + 0x98);
      *(longlong **)(param_1 + 0x98) = local_2e8;
      local_2e8 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        if (local_2e8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2e8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2e8 + 0x10))();
          }
        }
      }
      if (local_2c8 != 0) {
        if (local_2d0 == (undefined8 *)0x0) goto LAB_143e7c147;
        (**(code **)*local_2d0)(local_2d0,0);
        FUN_1446efa72(&local_2d0,0,0,0x10);
        local_2c8 = 0;
      }
      if (local_2d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143e7c147:
  if ((local_228 == '\x01') && (local_240 != 0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7c38d FUN_143e7c38d body=263 status=ok
// SIG undefined FUN_143e7c38d(void)

void FUN_143e7c38d(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_168 [40];
  longlong local_140;
  int local_138;
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1 - 1U < 2) {
    local_30 = 0;
    if (param_2 == (char *)0x0) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      sVar3 = strlen(param_2);
      FUN_1446e6fe8(local_130,param_2,sVar3 & 0xffffffff,1);
    }
    FUN_140056680(&local_140,local_28);
    cVar1 = FUN_144a38768(&local_140,&DAT_149e01f72,1,1);
    if (cVar1 != '\0') {
      iVar2 = local_138 + -1;
      if (local_138 == 0) {
        iVar2 = 0;
      }
      *(undefined2 *)(local_140 + -2 + (longlong)iVar2 * 2) = 0x20;
    }
    if (local_140 != 0) {
      FUN_1400020a8();
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7c496 FUN_143e7c496 body=474 status=ok
// SIG undefined FUN_143e7c496(void)

undefined8 FUN_143e7c496(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong lStack_70;
  undefined2 local_68;
  undefined1 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      FUN_1489c2822(*(undefined8 *)(lVar5 + lVar7));
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar7);
  }
  lVar5 = **(longlong **)(param_1 + 0x78);
  if (lVar5 != 0) {
    do {
      plVar2 = *(longlong **)(lVar5 + 8);
      lVar7 = *(longlong *)(param_1 + 0x78);
      *(longlong *)(param_1 + 0x78) = lVar5;
      *(undefined8 *)(lVar5 + 8) = 0;
      if (lVar7 != 0) {
        FUN_1400020a8();
      }
      plVar8 = (longlong *)plVar2[2];
      if (plVar8 == (longlong *)0x0) {
LAB_143e7c529:
        plVar8 = (longlong *)0x0;
        local_88 = 0;
      }
      else {
        iVar4 = (int)plVar8[1];
        do {
          if (iVar4 == 0) goto LAB_143e7c529;
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar9 = iVar4 == iVar3;
          if (bVar9) {
            *(int *)(plVar8 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar9);
        local_88 = plVar2[1];
      }
      local_80 = plVar8;
      FUN_1489c347e(param_1 + 0x38,&local_88);
      local_78 = 0;
      lStack_70 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
      lVar5 = plVar2[8];
      *(undefined1 *)(plVar2 + 8) = 0;
      *(undefined1 *)(plVar2 + 0xc) = 0;
      if (&local_78 != plVar2 + 9) {
        local_78 = plVar2[9];
        lStack_70 = plVar2[10];
        plVar2[9] = 0;
        plVar2[10] = 0;
      }
      local_66 = *(undefined1 *)((longlong)plVar2 + 0x5a);
      local_68 = (undefined2)plVar2[0xb];
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
      if ((char)lVar5 == '\x06') {
        uVar6 = (**(code **)(*plVar2 + 0x40))();
        FUN_1411f311e(uVar6,&local_78);
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x48))(plVar2);
        FUN_1489c3dfa(uVar6,local_68,&local_78,local_66);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
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
      lVar5 = **(longlong **)(param_1 + 0x78);
    } while (lVar5 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143e7c672 FUN_143e7c672 body=654 status=ok
// SIG undefined FUN_143e7c672(void)

void FUN_143e7c672(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x98) + 8))) {
    FUN_145d2af38();
    local_48 = *(undefined8 *)(param_1 + 0x90);
    local_40 = *(longlong *)(param_1 + 0x98);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_48);
    plVar3 = *(longlong **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_144bd2050();
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    FUN_144bd17e0(lVar5);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 0x38;
    } while ((longlong)iVar2 * 0x38 - lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_1489c3eba(param_1 + 0x28,0);
  }
  while (lVar5 = **(longlong **)(param_1 + 0x68), lVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x68);
    *(longlong *)(param_1 + 0x68) = lVar5;
    *(undefined8 *)(lVar5 + 8) = 0;
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
  }
  while (lVar5 = **(longlong **)(param_1 + 0x78), lVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x78);
    *(longlong *)(param_1 + 0x78) = lVar5;
    *(undefined8 *)(lVar5 + 8) = 0;
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1489c416f(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1489c41b8(param_1 + 0x38);
  }
  local_38 = &DAT_149f27af2;
  local_30 = 3;
  local_2c = 0;
  uVar4 = FUN_14001a6c0(&local_38,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  lVar5 = FUN_1402c9134(&DAT_14c874628,uVar4,&local_38,1);
  plVar3 = *(longlong **)(lVar5 + 0x10);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7c902 FUN_143e7c902 body=3397 status=ok
// SIG undefined FUN_143e7c902(void)

void FUN_143e7c902(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  void *_Dst;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_408 [32];
  char **local_3e8;
  undefined4 local_3dc;
  undefined2 *local_3d8;
  longlong *local_3d0;
  char **local_3c8;
  undefined1 **local_3c0;
  undefined2 *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  wchar_t *local_398;
  undefined8 uStack_390;
  undefined2 *local_388;
  undefined8 uStack_380;
  int local_36c;
  char *local_368;
  char *local_360;
  char *local_358;
  wchar_t *local_350;
  undefined8 local_348;
  longlong local_2d0;
  undefined8 local_2c8;
  byte local_2b8;
  char local_2b0 [128];
  char *local_230;
  char *local_228;
  uint local_220;
  undefined2 *local_218;
  undefined8 uStack_210;
  int local_208;
  undefined4 local_204;
  undefined2 *local_200;
  longlong local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar16 = **(longlong **)(param_1 + 0x58);
  if (lVar16 == 0) {
LAB_143e7d4d6:
    iVar6 = *(int *)(param_1 + 0x40);
    if ((longlong)iVar6 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x38);
      lVar20 = 0;
      do {
        lVar15 = *(longlong *)(lVar16 + lVar20);
        if (*(char *)(lVar15 + 0x40) == '\x03') {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x18));
          if (*(int *)(lVar15 + 0x68) != 0) {
            *(undefined1 *)(lVar15 + 0x40) = 4;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar15 + 0x18));
          if (*(char *)(lVar15 + 0x40) == '\x04') {
            if (*(char *)(lVar15 + 0x78) == '\x01') {
              FUN_144bd0240(*(undefined8 *)(lVar15 + 0x128));
            }
          }
          else {
            bVar21 = **(longlong **)(lVar15 + 0x1b8) == 0;
            if ((!bVar21) && (*(char *)(lVar15 + 0x78) != '\0')) {
              FUN_144bd0240(*(undefined8 *)(lVar15 + 0x128));
            }
            *(bool *)(lVar15 + 0x78) = bVar21;
          }
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar6 * 8 != lVar20);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_144bd8170(*(longlong *)(param_1 + 0x10),0);
    }
    iVar6 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar6 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x70);
      lVar20 = 0;
      do {
        puVar14 = *(undefined2 **)(lVar16 + lVar20);
        local_218 = puVar14;
        FUN_1489c3148(param_1 + 0x38,&local_218);
        puVar11 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar11 = 0;
        puVar11[1] = puVar14;
        if (puVar11 != (undefined8 *)0x0) {
          puVar5 = *(undefined8 **)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar11;
          *puVar5 = puVar11;
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar6 * 8 != lVar20);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1489c41e8(param_1 + 0x70);
    }
    if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_3d0 = (longlong *)(param_1 + 0x38);
  local_3c0 = &local_78;
  local_3c8 = &local_230;
LAB_143e7c977:
  lVar20 = *(longlong *)(lVar16 + 8);
  lVar15 = *(longlong *)(param_1 + 0x58);
  *(longlong *)(param_1 + 0x58) = lVar16;
  *(undefined8 *)(lVar16 + 8) = 0;
  if (lVar15 != 0) {
    FUN_1400020a8();
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar20 + 0x18);
    local_3d8 = *(undefined2 **)(param_1 + 0x10);
    EnterCriticalSection(lpCriticalSection);
    *(undefined1 *)(lVar20 + 0x40) = 2;
    LeaveCriticalSection(lpCriticalSection);
    if (*(int *)(lVar20 + 0x138) == 0) {
      pwVar19 = L"";
LAB_143e7ca10:
      local_78 = (undefined1 *)0x0;
      sVar10 = wcslen(pwVar19);
      local_68 = FUN_14475aa65(0,pwVar19,sVar10 & 0xffffffff);
      uVar9 = local_68 + 1;
      puVar12 = (undefined1 *)0x0;
      if (0x80 < uVar9) {
        FUN_1446efa72(local_3c0,0,uVar9,1);
        puVar12 = local_78;
      }
      local_70 = puVar12;
      if (puVar12 == (undefined1 *)0x0) {
        local_70 = local_f8;
      }
      FUN_14475a98a(local_70,uVar9,pwVar19,(int)sVar10 + 1);
    }
    else {
      pwVar19 = *(wchar_t **)(lVar20 + 0x130);
      local_78 = (undefined1 *)0x0;
      if (pwVar19 != (wchar_t *)0x0) goto LAB_143e7ca10;
      local_70 = (undefined1 *)0x0;
      local_68 = 0;
    }
    local_3e8 = &local_360;
    iVar6 = FUN_144bd66e0(local_70,&local_358,&local_368,&local_36c);
    if (iVar6 == 0) {
      sVar10 = strlen(local_360);
      uVar9 = (uint)sVar10;
      iVar6 = uVar9 + 2;
      local_388 = (undefined2 *)0x0;
      uStack_380 = 0;
      if (-3 < (int)uVar9) {
        iVar6 = 0;
        uVar8 = 0;
        if (uVar9 != 0xfffffffe) {
          FUN_141701710(&local_388);
          iVar6 = (uint)uStack_380;
          uVar8 = uStack_380._4_4_;
        }
        uVar1 = iVar6 + 1;
        uStack_380._0_4_ = uVar1;
        if (uVar8 < uVar1) {
          FUN_144761492(&local_388,iVar6);
        }
        pcVar13 = local_360;
        uVar8 = (uint)uStack_380;
        *(undefined1 *)((longlong)local_388 + (longlong)iVar6) = 0x2f;
        lVar16 = (longlong)(int)(uint)uStack_380;
        uStack_380 = CONCAT44(uStack_380._4_4_,uVar9 + (uint)uStack_380);
        if (uStack_380._4_4_ - uVar8 < uVar9) {
          FUN_144761492(&local_388,uVar8);
        }
        if (uVar9 != 0) {
          memcpy((void *)(lVar16 + (longlong)local_388),pcVar13,(longlong)(int)uVar9);
        }
        uVar18 = uStack_380;
        lVar16 = (longlong)(int)(uint)uStack_380;
        uVar9 = (uint)uStack_380 + 1;
        uStack_380 = CONCAT44(uStack_380._4_4_,uVar9);
        if (uStack_380._4_4_ < uVar9) {
          FUN_144761492(&local_388,uVar18 & 0xffffffff);
        }
        pcVar13 = local_358;
        *(undefined1 *)((longlong)local_388 + lVar16) = 0;
        lVar16 = 0;
        do {
          bVar2 = local_358[lVar16];
          bVar3 = (&DAT_14b43c0c0)[lVar16];
          if (bVar2 == bVar3) {
            if (bVar2 == 0) {
              local_3dc = 1;
              goto LAB_143e7cda2;
            }
          }
          else {
            if (0x7f < (bVar3 | bVar2)) goto LAB_143e7cc99;
            bVar2 = (&DAT_149e05da0)[bVar2];
            bVar3 = (&DAT_149e05da0)[bVar3];
            if (bVar2 != bVar3) goto LAB_143e7cc99;
          }
          lVar16 = lVar16 + 1;
        } while( true );
      }
      goto LAB_143e7d63a;
    }
    FUN_140056680(&local_218);
    EnterCriticalSection(lpCriticalSection);
    *(undefined1 *)(lVar20 + 0x40) = 6;
    if ((undefined2 **)(lVar20 + 0x48) != &local_218) {
      if (*(longlong *)(lVar20 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(lVar20 + 0x48) = local_218;
      local_218 = (undefined2 *)0x0;
      *(int *)(lVar20 + 0x50) = (int)uStack_210;
      *(undefined4 *)(lVar20 + 0x54) = uStack_210._4_4_;
      uStack_210 = (char *)0x0;
    }
    LeaveCriticalSection(lpCriticalSection);
    puVar14 = local_218;
    goto LAB_143e7d235;
  }
  goto LAB_143e7d279;
LAB_143e7cc99:
  if (bVar2 != bVar3) {
    lVar16 = 0;
    do {
      bVar2 = local_358[lVar16];
      bVar3 = "wss+insecure"[lVar16];
      if (bVar2 == bVar3) {
        if (bVar2 == 0) goto LAB_143e7cd9a;
      }
      else {
        if (0x7f < (bVar3 | bVar2)) goto LAB_143e7ccee;
        bVar2 = (&DAT_149e05da0)[bVar2];
        bVar3 = (&DAT_149e05da0)[bVar3];
        if (bVar2 != bVar3) goto LAB_143e7ccee;
      }
      lVar16 = lVar16 + 1;
    } while( true );
  }
  local_3dc = 1;
  goto LAB_143e7cda2;
LAB_143e7ccee:
  if (bVar2 != bVar3) {
    lVar16 = 0;
    do {
      bVar2 = local_358[lVar16];
      bVar3 = (&DAT_14b43c0d1)[lVar16];
      if (bVar2 == bVar3) {
        if (bVar2 == 0) goto LAB_143e7d2dd;
      }
      else {
        if (0x7f < (bVar3 | bVar2)) goto LAB_143e7cd4d;
        bVar2 = (&DAT_149e05da0)[bVar2];
        bVar3 = (&DAT_149e05da0)[bVar3];
        if (bVar2 != bVar3) goto LAB_143e7cd4d;
      }
      lVar16 = lVar16 + 1;
    } while( true );
  }
LAB_143e7cd9a:
  local_3dc = 2;
LAB_143e7cda2:
  bVar3 = 1;
  bVar2 = 0;
LAB_143e7cda4:
  local_398 = (wchar_t *)0x0;
  uStack_390 = 0;
  lVar15 = 0xf;
  iVar7 = 0x10;
  lVar16 = 0x1000000000;
  iVar6 = local_36c;
  do {
    lVar16 = lVar16 + -0x100000000;
    *(undefined2 *)((longlong)&local_218 + lVar15 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
    uVar9 = iVar6 + 9;
    lVar15 = lVar15 + -1;
    iVar7 = iVar7 + -1;
    iVar6 = iVar6 / 10;
  } while (0x12 < uVar9);
  if (local_36c < 0) {
    iVar7 = (int)lVar15;
    lVar16 = (longlong)iVar7;
    *(undefined2 *)((longlong)&local_218 + lVar16 * 2) = 0x2d;
  }
  else {
    lVar16 = lVar16 >> 0x20;
  }
  FUN_1400020e8(&local_398,(longlong)&local_218 + lVar16 * 2,0x10 - iVar7);
  pwVar19 = L"";
  if ((int)uStack_390 != 0) {
    pwVar19 = local_398;
  }
  local_230 = (char *)0x0;
  if (pwVar19 == (wchar_t *)0x0) {
    local_228 = (char *)0x0;
    local_220 = 0;
  }
  else {
    sVar10 = wcslen(pwVar19);
    local_220 = FUN_14475aa65(0,pwVar19,sVar10 & 0xffffffff);
    uVar9 = local_220 + 1;
    pcVar13 = (char *)0x0;
    if (0x80 < uVar9) {
      FUN_1446efa72(local_3c8,0,uVar9,1);
      pcVar13 = local_230;
    }
    local_228 = pcVar13;
    if (pcVar13 == (char *)0x0) {
      local_228 = local_2b0;
    }
    FUN_14475a98a(local_228,uVar9,pwVar19,(int)sVar10 + 1);
  }
  pcVar13 = local_368;
  sVar10 = strlen(local_368);
  uVar9 = (uint)sVar10;
  iVar7 = uVar9 + 1;
  if ((bool)(bVar3 & local_36c == 0x1bb | bVar2 & local_36c == 0x50)) {
    local_3a8 = 0;
    uStack_3a0 = 0;
    if ((int)uVar9 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)uVar9 < 0) {
      iVar6 = 0;
      uVar18 = 0;
    }
    else {
      FUN_141701710(&local_3a8);
      uVar18 = uStack_3a0 & 0xffffffff;
      pcVar13 = local_368;
      iVar6 = uStack_3a0._4_4_;
    }
    iVar7 = (int)uVar18;
    uStack_3a0._0_4_ = iVar7 + uVar9;
    if ((uint)(iVar6 - iVar7) < uVar9) {
      FUN_144761492(&local_3a8,uVar18);
    }
    if (uVar9 != 0) {
      _Dst = (void *)(iVar7 + local_3a8);
      goto LAB_143e7d06e;
    }
  }
  else {
    iVar6 = iVar7 + local_220 + 1;
    local_3a8 = 0;
    uStack_3a0 = 0;
    if ((int)(local_220 + iVar7) < -1) {
LAB_143e7d63a:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)(local_220 + iVar7) < 0) {
      uVar8 = 0;
      iVar6 = 0;
    }
    else {
      FUN_141701710(&local_3a8);
      pcVar13 = local_368;
      uVar8 = uStack_3a0._4_4_;
      iVar6 = (uint)uStack_3a0;
    }
    iVar7 = iVar6 + uVar9;
    uStack_3a0._0_4_ = iVar7;
    if (uVar8 - iVar6 < uVar9) {
      FUN_144761492(&local_3a8,iVar6);
LAB_143e7cfe6:
      memcpy((void *)(iVar6 + local_3a8),pcVar13,(longlong)(int)uVar9);
      uVar8 = uStack_3a0._4_4_;
      iVar7 = (uint)uStack_3a0;
    }
    else if (uVar9 != 0) goto LAB_143e7cfe6;
    uStack_3a0._0_4_ = iVar7 + 1;
    if (uVar8 < (uint)uStack_3a0) {
      FUN_144761492(&local_3a8,iVar7);
    }
    uVar9 = local_220;
    pcVar13 = local_228;
    uVar8 = (uint)uStack_3a0;
    *(undefined1 *)(local_3a8 + iVar7) = 0x3a;
    lVar16 = (longlong)(int)(uint)uStack_3a0;
    iVar6 = local_220 + (uint)uStack_3a0;
    if (uStack_3a0._4_4_ - (uint)uStack_3a0 < local_220) {
      uStack_3a0._0_4_ = iVar6;
      FUN_144761492(&local_3a8,uVar8);
    }
    else {
      uStack_3a0._0_4_ = iVar6;
      if (local_220 == 0) goto LAB_143e7d073;
    }
    _Dst = (void *)(lVar16 + local_3a8);
LAB_143e7d06e:
    memcpy(_Dst,pcVar13,(longlong)(int)uVar9);
  }
LAB_143e7d073:
  iVar6 = (uint)uStack_3a0;
  lVar16 = (longlong)(int)(uint)uStack_3a0;
  uStack_3a0._0_4_ = (uint)uStack_3a0 + 1;
  if (uStack_3a0._4_4_ < (uint)uStack_3a0) {
    FUN_144761492(&local_3a8,iVar6);
  }
  *(undefined1 *)(local_3a8 + lVar16) = 0;
  local_2b8 = 0;
  iVar6 = *(int *)(lVar20 + 0x148);
  if ((longlong)iVar6 < 1) {
    local_1e8 = 0;
  }
  else {
    local_218 = (undefined2 *)0x0;
    uStack_210 = (char *)0x0;
    lVar16 = *(longlong *)(lVar20 + 0x140);
    iVar7 = 1;
    lVar15 = 0;
    do {
      if ((char)iVar7 == '\0') {
        FUN_1400020e8(&local_218,&DAT_149e06196,1);
      }
      iVar4 = *(int *)(lVar16 + 8 + lVar15);
      iVar7 = 0;
      iVar17 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar17 = iVar7;
      }
      FUN_1400020e8(&local_218,*(undefined8 *)(lVar16 + lVar15),iVar17);
      lVar15 = lVar15 + 0x10;
    } while ((longlong)iVar6 * 0x10 != lVar15);
    local_3b8 = &DAT_149dfb77a;
    if ((int)uStack_210 != 0) {
      local_3b8 = local_218;
    }
    FUN_1489c2c0a(&local_350,&local_3b8);
    if (local_218 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_1e8 = local_2c8;
    if ((local_2b8 & 1) == 0) {
      local_1e8 = 0;
    }
  }
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_218 = local_3d8;
  uStack_210 = local_368;
  local_208 = local_36c;
  local_204 = local_3dc;
  local_200 = local_388;
  local_1f8 = local_3a8;
  local_1f0 = local_368;
  local_1e0 = 0xffffffff;
  lStack_1d8 = lVar20;
  lVar16 = FUN_144bd2c30(&local_218);
  if (lVar16 == 0) {
    FUN_140056680(&local_3b8);
    EnterCriticalSection(lpCriticalSection);
    *(undefined1 *)(lVar20 + 0x40) = 6;
    if ((undefined2 **)(lVar20 + 0x48) != &local_3b8) {
      if (*(longlong *)(lVar20 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(lVar20 + 0x48) = local_3b8;
      local_3b8 = (undefined2 *)0x0;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)local_3b0;
      *(undefined4 *)(lVar20 + 0x54) = local_3b0._4_4_;
      local_3b0 = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    if (local_3b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_2b8 == 1) && (local_2d0 != 0)) {
    FUN_1400020a8();
  }
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  pwVar19 = local_398;
  if (local_230 != (char *)0x0) {
    FUN_1400020a8();
    pwVar19 = local_398;
  }
LAB_143e7d223:
  puVar14 = local_388;
  if (pwVar19 != (wchar_t *)0x0) {
    FUN_1400020a8();
    puVar14 = local_388;
  }
LAB_143e7d235:
  if (puVar14 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(lVar20 + 0x40) == '\x02') {
    iVar6 = *(int *)(param_1 + 0x40);
    uVar9 = iVar6 + 1;
    *(uint *)(param_1 + 0x40) = uVar9;
    if (*(uint *)(param_1 + 0x44) < uVar9) {
      FUN_1489c4218(local_3d0);
    }
    *(longlong *)(*local_3d0 + (longlong)iVar6 * 8) = lVar20;
  }
  else {
LAB_143e7d279:
    if ((longlong)*(int *)(param_1 + 0x78) != 0) {
      lVar16 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar16) == lVar20) goto LAB_143e7d2c8;
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(param_1 + 0x78) * 8 != lVar16);
    }
    puVar11 = (undefined8 *)FUN_14001cc68(0x10);
    *puVar11 = 0;
    puVar11[1] = lVar20;
    if (puVar11 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x60) = puVar11;
      *puVar5 = puVar11;
    }
  }
LAB_143e7d2c8:
  lVar16 = **(longlong **)(param_1 + 0x58);
  if (lVar16 == 0) goto LAB_143e7d4d6;
  goto LAB_143e7c977;
LAB_143e7cd4d:
  if (bVar2 != bVar3) {
    local_118 = 0;
    if (local_358 == (char *)0x0) {
      local_110 = 0;
      local_108 = 0;
    }
    else {
      sVar10 = strlen(local_358);
      FUN_1446e6fe8(&local_218,pcVar13,sVar10 & 0xffffffff,1);
    }
    FUN_140002266(&local_350,L"Bad protocol \'%s\'. Use either \'ws\', \'wss\', or \'wss+insecure\'"
                  ,local_110);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    EnterCriticalSection(lpCriticalSection);
    *(undefined1 *)(lVar20 + 0x40) = 6;
    if ((wchar_t **)(lVar20 + 0x48) != &local_350) {
      if (*(longlong *)(lVar20 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(wchar_t **)(lVar20 + 0x48) = local_350;
      local_350 = (wchar_t *)0x0;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)local_348;
      *(undefined4 *)(lVar20 + 0x54) = local_348._4_4_;
      local_348 = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    pwVar19 = local_350;
    goto LAB_143e7d223;
  }
LAB_143e7d2dd:
  bVar3 = 0;
  bVar2 = 1;
  local_3dc = 0;
  goto LAB_143e7cda4;
}



// FUNCTION 143e7d649 FUN_143e7d649 body=147 status=ok
// SIG undefined FUN_143e7d649(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d649(void)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "UnixSocketPath";
  local_20 = 0xe;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  _DAT_14cb901b8 = (ulonglong)uVar1;
  local_28 = (char *)0x800000014b43c430;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146564cac(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7d6e0 FUN_143e7d6e0 body=55 status=ok
// SIG undefined FUN_143e7d6e0(void)

void FUN_143e7d6e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90250 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90250 = FUN_14171c317(FUN_146564ee0,uVar1,L"ECohtmlAtlasPackingHeuristic");
  }
  return;
}



// FUNCTION 143e7d717 FUN_143e7d717 body=55 status=ok
// SIG undefined FUN_143e7d717(void)

void FUN_143e7d717(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb902c8 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb902c8 = FUN_14171c317(FUN_14656509c,uVar1,L"ECohtmlComponentMeshInit");
  }
  return;
}



// FUNCTION 143e7d74e FUN_143e7d74e body=55 status=ok
// SIG undefined FUN_143e7d74e(void)

void FUN_143e7d74e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90530 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90530 = FUN_14171c317(FUN_146565864,uVar1,L"ECohtmlTickGroup");
  }
  return;
}



// FUNCTION 143e7d785 FUN_143e7d785 body=55 status=ok
// SIG undefined FUN_143e7d785(void)

void FUN_143e7d785(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb905a0 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb905a0 = FUN_14171c317(FUN_146565ddc,uVar1,L"ECohtmlKeys");
  }
  return;
}



// FUNCTION 143e7d7bc FUN_143e7d7bc body=55 status=ok
// SIG undefined FUN_143e7d7bc(void)

void FUN_143e7d7bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb905b8 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb905b8 = FUN_14171c317(FUN_146565e0d,uVar1,L"ECohtmlFocusChange");
  }
  return;
}



// FUNCTION 143e7d83a FUN_143e7d83a body=612 status=ok
// SIG undefined FUN_143e7d83a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d83a(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b43c930,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b43d940;
  local_58 = 2;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b43d9b0,2,&PTR_FUN_14b43d960);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b43df60,1,&PTR_FUN_14b43df30);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b4405a0;
  local_58 = 0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b4405c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b441520,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b441c70,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b4426d0,1,0);
  FUN_1446f470e(&DAT_14cb904f8,L"CalculateCohtmlPadding",1);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b4433f0,1,&PTR_FUN_14b4433c0);
  FUN_14098d3d2(FUN_143e7d74e,L"/Script/CohtmlPlugin",L"ECohtmlTickGroup",&DAT_14cb90528);
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cb90540);
  if (cVar1 == '\0') {
    _DAT_14cb90540 = 0;
    uRam000000014cb90548 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b444350,2,&PTR_FUN_14b444320);
  ppuStack_50 = &PTR_FUN_14b446310;
  local_48 = 2;
  local_58 = 0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b446350,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7daa0 FUN_143e7daa0 body=55 status=ok
// SIG undefined FUN_143e7daa0(void)

void FUN_143e7daa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb906e8 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb906e8 = FUN_14171c317(FUN_14656659d,uVar1,L"ECohtmlSettingsSeverity");
  }
  return;
}



// FUNCTION 143e7dad7 FUN_143e7dad7 body=55 status=ok
// SIG undefined FUN_143e7dad7(void)

void FUN_143e7dad7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90700 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90700 = FUN_14171c317(FUN_1465665cc,uVar1,L"ECohtmlMSAA");
  }
  return;
}



// FUNCTION 143e7db0e FUN_143e7db0e body=55 status=ok
// SIG undefined FUN_143e7db0e(void)

void FUN_143e7db0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90718 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90718 = FUN_14171c317(FUN_1465665fb,uVar1,L"ECohtmlImageFormat");
  }
  return;
}



// FUNCTION 143e7db45 FUN_143e7db45 body=55 status=ok
// SIG undefined FUN_143e7db45(void)

void FUN_143e7db45(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90730 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90730 = FUN_14171c317(FUN_14656662a,uVar1,L"ECohtmlLinearSpaceRenderingPipeline");
  }
  return;
}



// FUNCTION 143e7db7c FUN_143e7db7c body=55 status=ok
// SIG undefined FUN_143e7db7c(void)

void FUN_143e7db7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90748 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90748 = FUN_14171c317(FUN_146566659,uVar1,L"ECohtmlInputWidgetLineTraceMode");
  }
  return;
}



// FUNCTION 143e7dbb3 FUN_143e7dbb3 body=55 status=ok
// SIG undefined FUN_143e7dbb3(void)

void FUN_143e7dbb3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90760 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90760 = FUN_14171c317(FUN_146566688,uVar1,L"ECohtmlInputWidgetRaycastQuality");
  }
  return;
}



// FUNCTION 143e7dbea FUN_143e7dbea body=55 status=ok
// SIG undefined FUN_143e7dbea(void)

void FUN_143e7dbea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb907d8 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb907d8 = FUN_14171c317(FUN_1465668a2,uVar1,L"ECohStatsTextureType");
  }
  return;
}



// FUNCTION 143e7dc21 FUN_143e7dc21 body=55 status=ok
// SIG undefined FUN_143e7dc21(void)

void FUN_143e7dc21(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb907f0 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb907f0 = FUN_14171c317(FUN_1465668d1,uVar1,L"ECohStatsTextureDomain");
  }
  return;
}



// FUNCTION 143e7dc58 FUN_143e7dc58 body=55 status=ok
// SIG undefined FUN_143e7dc58(void)

void FUN_143e7dc58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90808 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90808 = FUN_14171c317(FUN_146566900,uVar1,L"ECohStatsBufferType");
  }
  return;
}



// FUNCTION 143e7dc8f FUN_143e7dc8f body=55 status=ok
// SIG undefined FUN_143e7dc8f(void)

void FUN_143e7dc8f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90820 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90820 = FUN_14171c317(FUN_14656692f,uVar1,L"ECohStatsCBDomain");
  }
  return;
}



// FUNCTION 143e7dcc6 FUN_143e7dcc6 body=55 status=ok
// SIG undefined FUN_143e7dcc6(void)

void FUN_143e7dcc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90838 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90838 = FUN_14171c317(FUN_14656695e,uVar1,L"ECohStatsVBDomain");
  }
  return;
}



// FUNCTION 143e7dcfd FUN_143e7dcfd body=55 status=ok
// SIG undefined FUN_143e7dcfd(void)

void FUN_143e7dcfd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90850 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90850 = FUN_14171c317(FUN_14656698d,uVar1,L"ECohStatsIBDomain");
  }
  return;
}



// FUNCTION 143e7ddea FUN_143e7ddea body=557 status=ok
// SIG undefined FUN_143e7ddea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7ddea(void)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b448060,1,0);
  ppuStack_50 = &PTR_FUN_14b44a060;
  local_48 = 6;
  local_58 = 3;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44a1a0,1,&PTR_FUN_14b44a120);
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b44a540 + lVar2),L"/Script/CohtmlPlugin",
                  *(undefined8 *)(&UNK_14b44a548 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_14b44a550 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xd0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44acd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44b060,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/CohtmlPlugin",0,0,&PTR_FUN_14b44b230);
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cb908a8);
  if (cVar1 == '\0') {
    _DAT_14cb908a8 = 0;
    uRam000000014cb908b0 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44d580,2,&PTR_FUN_14b44d530);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/CohtmlPlugin",0,0,&PTR_FUN_14b44d8e0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44df00,1,&PTR_FUN_14b44ded0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/CohtmlPlugin",&PTR_FUN_14b44ed00,1,&PTR_FUN_14b44ec60);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7e018 FUN_143e7e018 body=55 status=ok
// SIG undefined FUN_143e7e018(void)

void FUN_143e7e018(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90b50 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90b50 = FUN_14171c317(FUN_146567915,uVar1,L"ECohtmlGamepadBehaviourOnFocusLost");
  }
  return;
}



// FUNCTION 143e7e04f FUN_143e7e04f body=55 status=ok
// SIG undefined FUN_143e7e04f(void)

void FUN_143e7e04f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90b68 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90b68 = FUN_14171c317(FUN_146567944,uVar1,L"ECohtmlInputPropagationBehaviour");
  }
  return;
}



// FUNCTION 143e7e120 FUN_143e7e120 body=58 status=ok
// SIG undefined FUN_143e7e120(void)

undefined8 FUN_143e7e120(undefined8 param_1,LPVOID param_2,SIZE_T param_3,int param_4)

{
  BOOL BVar1;
  undefined4 extraout_var;
  DWORD dwFreeType;
  
  if (param_4 == 4) {
    dwFreeType = 0x4000;
  }
  else {
    if (param_4 != 8) {
      return 0;
    }
    param_3 = 0;
    dwFreeType = 0x8000;
  }
  BVar1 = VirtualFree(param_2,param_3,dwFreeType);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 143e7e15a FUN_143e7e15a body=703 status=ok
// SIG undefined FUN_143e7e15a(void)

void FUN_143e7e15a(longlong param_1,uint param_2,uint param_3,longlong param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined1 local_b8 [16];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar9 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
    }
    uVar6 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar6 * 0x28);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            iVar2 = *(int *)(*(longlong *)(puVar1 + 4) + 0x400);
            iVar12 = param_5 * param_3;
            iVar3 = iVar12 * 2;
            if ((iVar2 == 0) &&
               (lVar9 = *(longlong *)(puVar1 + 2),
               cVar5 = (**(code **)(*(longlong *)(lVar9 + 0x2a8) + 0xa8))(lVar9 + 0x2a8),
               cVar5 != '\0')) {
              *(undefined1 *)(puVar1 + 7) = 1;
              plVar7 = *(longlong **)(puVar1 + 2);
              uVar8 = 1;
LAB_143e7e2d3:
              FUN_14342de58(plVar7,uVar8);
            }
            else if (((char)puVar1[7] == '\x01') && ((float)puVar1[6] <= (float)(iVar2 + iVar3))) {
              *(undefined1 *)(puVar1 + 7) = 0;
              cVar5 = (**(code **)(*(longlong *)(*(longlong *)(puVar1 + 2) + 0x2a8) + 0xa8))
                                (*(longlong *)(puVar1 + 2) + 0x2a8);
              plVar7 = *(longlong **)(puVar1 + 2);
              if (cVar5 != '\0') {
                uVar8 = 0;
                goto LAB_143e7e2d3;
              }
              (**(code **)(*plVar7 + 0x5e8))(plVar7,0);
            }
            local_b8 = ZEXT816(0);
            if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar3);
            }
            if (iVar12 != 0) {
              FUN_144893a1c(local_b8,iVar3);
            }
            if (0 < (int)param_3) {
              local_c0 = (ulonglong)param_3;
              uVar11 = 0;
              do {
                if (0 < (int)param_5) {
                  uVar10 = 0;
                  do {
                    auVar13 = blendps(ZEXT416((uint)(*(float *)(*(longlong *)(param_4 + uVar10 * 8)
                                                               + uVar11 * 4) * 32767.0 + 0.5)),
                                      ZEXT816(0),0xe);
                    unaff_XMM10 = roundps(unaff_XMM10,auVar13,1);
                    if (32767.0 <= unaff_XMM10._0_4_) {
                      unaff_XMM10._0_4_ = 0x46fffe00;
                    }
                    if (unaff_XMM10._0_4_ <= -32767.0) {
                      unaff_XMM10._0_4_ = 0xc6fffe00;
                    }
                    uVar4 = local_b8._8_4_;
                    lVar9 = (longlong)(int)local_b8._8_4_;
                    uVar6 = local_b8._8_4_ + 1;
                    local_b8._8_4_ = uVar6;
                    if ((uint)local_b8._12_4_ < uVar6) {
                      FUN_1447403be(local_b8,uVar4);
                    }
                    *(char *)(local_b8._0_8_ + lVar9) = (char)(int)unaff_XMM10._0_4_;
                    uVar4 = local_b8._8_4_;
                    lVar9 = (longlong)(int)local_b8._8_4_;
                    uVar6 = local_b8._8_4_ + 1;
                    local_b8._8_4_ = uVar6;
                    if ((uint)local_b8._12_4_ < uVar6) {
                      FUN_1447403be(local_b8,uVar4);
                    }
                    *(char *)(local_b8._0_8_ + lVar9) = (char)((uint)(int)unaff_XMM10._0_4_ >> 8);
                    uVar10 = uVar10 + 1;
                  } while (param_5 != uVar10);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 != local_c0);
            }
            FUN_147d41a9c(*(undefined8 *)(puVar1 + 4),local_b8._0_8_,local_b8._8_4_);
            if (local_b8._0_8_ != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        uVar6 = puVar1[8];
      } while (uVar6 != 0xffffffff);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7e41c FUN_143e7e41c body=505 status=ok
// SIG undefined FUN_143e7e41c(void)

void FUN_143e7e41c(longlong param_1,longlong *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  longlong *plVar8;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 2);
  iVar1 = *(int *)(param_1 + 0x1d0);
  *(uint *)(param_1 + 0x1d0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1d4) < iVar1 + 1U) {
    FUN_1489d425c((longlong *)(param_1 + 0x1c8),iVar1);
  }
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  *(undefined8 *)(lVar5 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined8 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = uVar4;
  if ((((*(longlong *)(param_3 + 2) == 0) || (param_3[1] == 0)) ||
      (uVar2 = *param_3, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e7e5cc;
  plVar8 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != param_3[1])) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))) goto LAB_143e7e5cc;
  lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(param_3 + 2),1);
  if (lVar5 == 0) goto LAB_143e7e5cc;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  puVar6 = cohtml::IEventHandler::operator_new(0x18);
  *puVar6 = &PTR_FUN_14b452ea0;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  if ((int)param_2[1] == 0) {
    _Str = L"";
LAB_143e7e582:
    local_58 = 0;
    sVar7 = wcslen(_Str);
    FUN_1449b853c(local_d8,_Str,sVar7 & 0xffffffff,1);
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_58 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_143e7e582;
    local_50 = 0;
    local_48 = 0;
  }
  (**(code **)(*plVar8 + 0x1a0))(plVar8,local_50,puVar6);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143e7e5cc:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7e616 FUN_143e7e616 body=738 status=ok
// SIG undefined FUN_143e7e616(void)

void FUN_143e7e616(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60 [2];
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == 0) {
    FUN_140056680(&local_40,L"Unknown");
  }
  else {
    bVar1 = *(byte *)(param_4 + 8);
    lVar4 = FUN_14786402d();
    if ((longlong)*(int *)(lVar4 + 0x48) == 0) {
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0;
      lVar7 = 0;
      do {
        if (*(ulonglong *)(*(longlong *)(lVar4 + 0x40) + 8 + lVar7) == (ulonglong)bVar1) {
          local_50[0] = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar7);
          break;
        }
        lVar7 = lVar7 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x48) * 0x10 != lVar7);
    }
    FUN_1400021e4(local_50,&local_40);
  }
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(local_50,L"Ticking in %s",puVar6);
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_80 = local_60;
    local_60[0] = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1489c8acb;
    local_90 = &LAB_146027b0e;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000006;
    local_b0 = 8;
    local_b8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar2 = DAT_14cb907b8;
  lVar4 = DAT_14cb907b8[0x22];
  if (lVar4 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar4 = plVar2[0x22];
  }
  if ((*(char *)(lVar4 + 0x73) == '\x01') && (FUN_1489cc00a(local_60), local_60[0] != (code *)0x0))
  {
    FUN_1400020a8();
  }
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_60[0] = (code *)CONCAT44(local_60[0]._4_4_,param_2);
    uVar5 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,local_60);
    if ((DAT_14c761388 != 0) &&
       ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) {
      uVar5 = FUN_14119d0a4(lVar4);
      FUN_140e65914(uVar5,param_1,*(undefined4 *)(lVar4 + 0x6f4));
    }
  }
  cVar3 = FUN_1404d5a16(param_1[0x44]);
  if (cVar3 != '\0') {
    FUN_1448c6f34(param_1);
  }
  lVar4 = FUN_141545d8e(param_1[0x44]);
  if ((lVar4 != 0) && (param_1[0x35] == 0)) {
    param_1[0x35] = lVar4;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7e90a FUN_143e7e90a body=2000 status=ok
// SIG undefined FUN_143e7e90a(void)

ulonglong FUN_143e7e90a(longlong *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  undefined7 uVar13;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  ulonglong uStack_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = CONCAT71((int7)(local_48 >> 8),1);
  if (*(char *)((longlong)param_1 + 0x251) != '\0') goto LAB_143e7ecc3;
  if ((char)param_1[0x4a] != '\0') {
    uVar9 = 0;
    goto LAB_143e7ecc3;
  }
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uVar9 = (**(code **)(*param_1 + 0x490))(param_1);
  if ((char)uVar9 != '\0') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    if (param_1 == (longlong *)0x0) {
      uVar14 = 0;
      uVar9 = 0;
    }
    else {
      uVar14 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      uVar9 = (ulonglong)*(uint *)(lVar20 + 0x10);
      if (*(uint *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar18 = DAT_14c964868 + 1;
        bVar3 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar3) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar18);
        }
        uVar9 = 0;
        LOCK();
        uVar2 = *(uint *)(lVar20 + 0x10);
        if (uVar2 == 0) {
          *(uint *)(lVar20 + 0x10) = uVar18;
        }
        else {
          uVar9 = (ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          uVar9 = (ulonglong)uVar18;
        }
      }
    }
    pvVar4 = local_98;
    local_a8 = (void *)0x0;
    lVar20 = (longlong)(int)uStack_90;
    local_a0 = (int)uStack_90;
    if (lVar20 == 0) {
      local_9c = 0;
      local_c0 = (ulonglong)uVar14 | uVar9 << 0x20;
      uStack_b0 = 0;
LAB_143e7ea00:
      local_b8 = (void *)0x0;
      uStack_b0 = uStack_b0 & 0xffffffff;
    }
    else {
      FUN_1489d52ee(&local_a8,uStack_90 & 0xffffffff);
      memcpy(local_a8,pvVar4,lVar20 << 3);
      pvVar4 = local_a8;
      lVar20 = (longlong)local_a0;
      local_c0 = (ulonglong)uVar14 | uVar9 << 0x20;
      local_b8 = (void *)0x0;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,local_a0);
      if (lVar20 == 0) goto LAB_143e7ea00;
      FUN_1489d52ee(&local_b8,local_a0);
      memcpy(local_b8,pvVar4,lVar20 << 3);
    }
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar20 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_143e7ea2f;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143e7ea38;
        goto LAB_143e7eb81;
      }
LAB_143e7ea38:
      uVar9 = (ulonglong)local_c0._4_4_;
      if (((((local_c0._4_4_ != 0) && (-1 < (int)(uint)local_c0)) &&
           ((int)(uint)local_c0 < DAT_14c9647dc)) &&
          ((puVar16 = (undefined8 *)
                      ((ulonglong)(((uint)local_c0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_c0 >> 0x10) * 8)),
           puVar16 != (undefined8 *)0x0 && (*(uint *)(puVar16 + 2) == local_c0._4_4_)))) &&
         (uVar9 = (ulonglong)*(uint *)(puVar16 + 1), (*(uint *)(puVar16 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
          uVar12 = *puVar16;
        }
        else {
          uVar12 = 0;
        }
        uVar9 = FUN_1489cc248(uVar12,&local_b8);
      }
    }
    else {
LAB_143e7ea2f:
      if (iVar6 == 0x10) goto LAB_143e7ea38;
LAB_143e7eb81:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar20 + 0xc60), iVar6 == 2))
        goto LAB_143e7ea38;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143e7ea38;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar16 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar11 = (uint *)*puVar16;
        if (puVar11 != (uint *)0x0) goto LAB_143e7ed93;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143e8d541);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar16 = puVar10;
          FUN_140217a48(puVar16);
          puVar11 = (uint *)*puVar16;
LAB_143e7ed93:
          puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x18);
          uVar14 = puVar11[0x12];
          if (puVar17 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar18 = *puVar11;
            *puVar11 = *puVar11 + uVar14 + 1;
            UNLOCK();
            if ((uVar18 ^ uVar14) != 0xffffffff) break;
            puVar11 = (uint *)*puVar16;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar16 = puVar11;
            puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x18);
            uVar14 = 0;
            if (puVar17 <= puVar11 + 0x4000) {
              uVar14 = 1;
              goto LAB_143e7ee13;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143e7ee13:
        *(uint **)(puVar11 + 0x10) = puVar17;
        puVar11[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14b453028;
        puVar19[0x15] = local_c0;
        puVar19[0x16] = 0;
        puVar19[0x16] = local_b8;
        local_b8 = (void *)0x0;
        *(undefined4 *)(puVar19 + 0x17) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar19 + 0xbc) = uStack_b0._4_4_;
        uStack_b0 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar9 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          }
          else {
            uVar9 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar9 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar5 = 1;
          if ((char)uVar9 != '\x06') {
            uVar5 = uVar9;
          }
          uVar9 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar9 == '\x06') {
            uVar9 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar19[0xf] = uVar12;
        puVar19[0x10] = uVar9 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar6;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          uVar9 = FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          uVar9 = FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar9 = (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_c8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b452fe0;
        local_60 = local_c0;
        local_58 = local_b8;
        uStack_50 = uStack_b0;
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        local_88[0] = &LAB_143e8d95c;
        uVar9 = FUN_14005a792(&DAT_14ca9a440,L"CohtmlLoadMeshData",&DAT_14cb90ca0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          uVar9 = (*(code *)(*pppuVar15)[2])();
        }
      }
    }
    if (local_b8 != (void *)0x0) {
      uVar9 = FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      uVar9 = FUN_1400020a8();
    }
    if (param_2 == '\x01') {
      uVar13 = (undefined7)(uVar9 >> 8);
      uVar9 = CONCAT71(uVar13,~*(byte *)((longlong)param_1 + 0x9c));
      if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
        uVar9 = CONCAT71(uVar13,*(byte *)((longlong)param_1 + 0x9d));
        if ((*(byte *)((longlong)param_1 + 0x9d) & 1) != 0) {
          if ((param_1[0x16] != 0) || (uVar9 = FUN_1448abda6(param_1), uVar9 != 0))
          goto LAB_143e7ecae;
          uVar9 = (ulonglong)*(byte *)((longlong)param_1 + 0x9d);
        }
        *(byte *)((longlong)param_1 + 0x9d) = (byte)uVar9 | 1;
        FUN_1401057d4(param_1);
        uVar9 = FUN_14010586c(&DAT_14cad0140,param_1);
      }
    }
  }
LAB_143e7ecae:
  if (local_98 != (void *)0x0) {
    uVar9 = FUN_1400020a8();
  }
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(undefined1 *)((longlong)param_1 + 0x251));
LAB_143e7ecc3:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar9 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e7f0db FUN_143e7f0db body=2287 status=ok
// SIG undefined FUN_143e7f0db(void)

uint * FUN_143e7f0db(uint *param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  void *_Src;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 local_f0;
  longlong local_e8;
  int local_dc;
  uint *local_d8;
  ulonglong local_d0;
  int local_c4;
  uint *local_c0;
  longlong local_b8;
  longlong *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar15 = *(longlong *)(param_2 + 0x660);
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_b0 = *(longlong **)(lVar15 + 0xe0);
  local_d0 = (ulonglong)*(uint *)(local_b0 + 1);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_c0 = param_1;
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar7 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar7 = *(uint *)(lVar15 + 0x10);
      bVar21 = uVar7 == 0;
      if (bVar21) {
        *(uint *)(lVar15 + 0x10) = uVar8;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar7 = uVar8;
      }
    }
  }
  puVar16 = local_c0;
  local_c0[1] = uVar7;
  if ((int)local_d0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_d0);
  }
  puVar12 = local_c0 + 2;
  if ((int)local_c0[5] < (int)local_d0) {
    FUN_1489d98de();
  }
  if (local_d0 != 0) {
    iVar14 = 0;
    local_d8 = puVar12;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_e8 = *(longlong *)(*local_b0 + (longlong)iVar14 * 8);
      lVar15 = *(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c);
      local_c4 = iVar14;
      if (lVar15 == DAT_14ca838f8 || lVar15 == DAT_14ca81498) {
        if ((((*(longlong **)(local_e8 + 0xd0) != (longlong *)0x0) &&
             (*(longlong *)(local_e8 + 0xe0) != 0)) &&
            (cVar6 = (**(code **)(**(longlong **)(local_e8 + 0xd0) + 0x58))(), cVar6 != '\0')) &&
           (cVar6 = (**(code **)(**(longlong **)(local_e8 + 0xe0) + 0x58))(), cVar6 != '\0')) {
          lVar15 = *(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c);
          goto LAB_143e7f2b2;
        }
      }
      else {
LAB_143e7f2b2:
        lVar17 = local_e8;
        cVar6 = DAT_14ca85169;
        if ((lVar15 == DAT_14ca81498) || (lVar15 == DAT_14ca838f8)) {
          FUN_147cbdcf4(local_e8 + 0x198,&local_a8);
        }
        else {
          lVar15 = (longlong)*(int *)(local_e8 + 0x38);
          iVar14 = 0;
          if (0 < lVar15) {
            lVar17 = local_e8 + 0x10;
            if (*(longlong *)(local_e8 + 0x30) != 0) {
              lVar17 = *(longlong *)(local_e8 + 0x30);
            }
            lVar5 = lVar15 * 0x1c;
            lVar15 = 0;
            iVar14 = 0;
            do {
              iVar14 = iVar14 + *(int *)(lVar17 + 8 + lVar15);
              lVar15 = lVar15 + 0x1c;
            } while (lVar5 != lVar15);
          }
          cVar1 = *(char *)(local_e8 + 0x1d4);
          iVar20 = 6;
          if (cVar1 != '\0') {
            iVar20 = 0xc;
          }
          uVar4 = *(undefined8 *)(local_e8 + 0x1a8);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,CONCAT71((int7)((ulonglong)lVar15 >> 8),1));
          }
          local_f8 = iVar20 * iVar14;
          local_f0 = 0;
          _Src = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar4,0)
          ;
          if (cVar6 == '\0') {
            FUN_14002049c(&DAT_14ca85100,0);
          }
          uVar7 = iVar14 * 3;
          iVar20 = (int)uStack_a0;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + uVar7);
          if ((uint)(uStack_a0._4_4_ - iVar20) < uVar7) {
            FUN_1447808da();
          }
          if (cVar1 == '\0') {
            if (iVar14 != 0) {
              uVar9 = 0;
              do {
                *(uint *)((longlong)local_a8 + uVar9 * 4) =
                     (uint)*(ushort *)((longlong)_Src + uVar9 * 2);
                uVar9 = uVar9 + 1;
              } while (uVar7 != uVar9);
            }
          }
          else {
            memcpy(local_a8,_Src,(longlong)uStack_a0._4_4_ << 2);
          }
          uVar4 = *(undefined8 *)(local_e8 + 0x1a8);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,1);
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
            FUN_14002049c(&DAT_14ca85100,0);
            lVar17 = local_e8;
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
            lVar17 = local_e8;
          }
        }
        cVar1 = DAT_14ca85169;
        uVar7 = *(uint *)(lVar17 + 0x10c);
        cVar6 = *(char *)(lVar17 + 0x110);
        local_dc = *(int *)(lVar17 + 0x108) << (cVar6 + 2U & 0x1f);
        if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81498) ||
           (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8)) {
          local_b8 = *(longlong *)(lVar17 + 0xf8);
        }
        else {
          uVar4 = *(undefined8 *)(lVar17 + 200);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,1);
          }
          local_f8 = local_dc * uVar7;
          local_f0 = 0;
          local_b8 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar4,0);
          if (cVar1 == '\0') {
            FUN_14002049c(&DAT_14ca85100,0);
          }
        }
        iVar14 = (int)uStack_90;
        uVar9 = uStack_90 & 0xffffffff;
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar7);
        if ((uint)(uStack_90._4_4_ - iVar14) < uVar7) {
          FUN_1489d3b88();
LAB_143e7f55a:
          uVar8 = *(uint *)(local_e8 + 0x108);
          uVar10 = 0;
          uVar9 = 0;
          do {
            if ((ulonglong)uVar8 != 0) {
              lVar15 = (longlong)(int)uVar9 * 0x40;
              lVar17 = uVar10 + local_b8;
              uVar18 = 0;
              do {
                if (cVar6 == '\0') {
                  uVar2 = *(ushort *)(lVar17 + 2 + uVar18 * 4);
                  uVar11 = (uint)uVar2 << 0xd;
                  if ((uVar11 & 0xf800000) == 0xf800000) {
                    fVar19 = (float)(uVar11 | 0x70000000);
                  }
                  else if ((uVar11 & 0xf800000) == 0) {
                    fVar19 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar19 = (float)((uVar11 & 0xfffe000) + 0x38000000);
                  }
                  uVar3 = *(ushort *)(lVar17 + uVar18 * 4);
                  uVar11 = (uint)uVar3 << 0xd;
                  if ((uVar11 & 0xf800000) == 0xf800000) {
                    fVar13 = (float)(uVar11 | 0x70000000);
                  }
                  else if ((uVar11 & 0xf800000) == 0) {
                    fVar13 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar13 = (float)((uVar11 & 0xfffe000) + 0x38000000);
                  }
                  *(ulonglong *)(local_98 + lVar15 + uVar18 * 8) =
                       CONCAT44((uint)fVar19 | (int)(short)uVar2 & 0x80000000U,
                                (int)(short)uVar3 & 0x80000000U | (uint)fVar13);
                }
                else {
                  *(undefined8 *)(local_98 + lVar15 + uVar18 * 8) =
                       *(undefined8 *)(lVar17 + uVar18 * 8);
                }
                uVar18 = uVar18 + 1;
              } while (uVar8 != uVar18);
            }
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
            uVar10 = (ulonglong)(uint)((int)uVar10 + local_dc);
          } while (uVar11 != uVar7);
        }
        else if (uVar7 != 0) goto LAB_143e7f55a;
        puVar12 = local_d8;
        if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) != DAT_14ca81498) &&
           (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) != DAT_14ca838f8)) {
          uVar4 = *(undefined8 *)(local_e8 + 200);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,CONCAT71((int7)(uVar9 >> 8),1));
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
          }
        }
        cVar6 = DAT_14ca85169;
        uVar7 = *(uint *)(local_e8 + 0x10c);
        iVar14 = *(int *)(local_e8 + 0x148);
        if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81498) ||
           (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8)) {
          lVar15 = *(longlong *)(local_e8 + 0x140);
        }
        else {
          uVar4 = *(undefined8 *)(local_e8 + 0x128);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,1);
          }
          local_f8 = iVar14 * uVar7;
          local_f0 = 0;
          lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar4,0);
          puVar12 = local_d8;
          if (cVar6 == '\0') {
            FUN_14002049c(&DAT_14ca85100,0);
            puVar12 = local_d8;
          }
        }
        iVar20 = (int)uStack_80;
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + uVar7);
        if ((uint)(uStack_80._4_4_ - iVar20) < uVar7) {
          FUN_1403e3958();
LAB_143e7f7e6:
          uVar8 = 0;
          uVar11 = 0;
          do {
            uVar9 = (ulonglong)uVar8;
            fVar19 = *(float *)(lVar15 + 8 + uVar9);
            fVar13 = *(float *)(lVar15 + 4 + uVar9);
            lVar17 = (longlong)(int)uVar11;
            *(double *)(local_88 + lVar17 * 0x18) = (double)*(float *)(lVar15 + uVar9);
            *(double *)(local_88 + 8 + lVar17 * 0x18) = (double)fVar13;
            *(double *)(local_88 + 0x10 + lVar17 * 0x18) = (double)fVar19;
            uVar11 = uVar11 + 1;
            uVar8 = uVar8 + iVar14;
          } while (uVar7 != uVar11);
        }
        else if (uVar7 != 0) goto LAB_143e7f7e6;
        puVar16 = local_c0;
        if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) != DAT_14ca81498) &&
           (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) != DAT_14ca838f8)) {
          uVar4 = *(undefined8 *)(local_e8 + 0x128);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,1);
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar4);
          }
        }
      }
      uVar7 = puVar16[4];
      puVar16[4] = uVar7 + 1;
      if (puVar16[5] < uVar7 + 1) {
        FUN_1489d9a36(puVar12,uVar7);
      }
      FUN_1489d994e((longlong)(int)uVar7 * 0x30 + *(longlong *)puVar12,&local_a8);
      FUN_1489d3064(&local_a8);
      iVar14 = local_c4 + 1;
    } while (iVar14 != (int)local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar16;
}



// FUNCTION 143e7f9cb FUN_143e7f9cb body=538 status=ok
// SIG undefined FUN_143e7f9cb(void)

void FUN_143e7f9cb(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1402160b8(&local_38);
  lVar9 = local_38;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14021300e(&local_48,0x7b2,1,1);
  FUN_140002266(&local_38,L"CohtmlCaptureFrame-%lld.rend",(lVar9 - (longlong)local_48) / 10000);
  puVar4 = (undefined8 *)FUN_14047ac8c();
  iVar8 = *(int *)(puVar4 + 1);
  lVar9 = (longlong)iVar8;
  local_58 = (undefined2 *)0x0;
  _Src = (void *)*puVar4;
  local_50 = CONCAT44(local_50._4_4_,iVar8);
  FUN_1446dd670(&local_58,(uint)(lVar9 == 0) + iVar8 + 7,0);
  if (lVar9 != 0) {
    memcpy(local_58,_Src,lVar9 * 2);
  }
  FUN_1401aebe8(&local_58,L"Cohtml",6);
  iVar8 = local_30 + -1;
  if (local_30 == 0) {
    iVar8 = 0;
  }
  iVar1 = (int)local_50;
  iVar3 = iVar8 + 1 + (uint)((int)local_50 == 0);
  local_48 = local_58;
  local_58 = (undefined2 *)0x0;
  local_40 = (int)local_50;
  iVar2 = local_50._4_4_;
  local_3c = local_50._4_4_;
  local_50 = 0;
  iVar6 = iVar3 + iVar1;
  if (iVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar3);
  }
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar2 < iVar6) {
    FUN_1446f8c06(&local_48);
  }
  FUN_1401aebe8(&local_48,local_38,iVar8);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)FUN_14054d1d4();
  puVar7 = local_48;
  if (local_40 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,puVar7,0);
  if (plVar5 == (longlong *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  else {
    (**(code **)(*plVar5 + 0x170))(plVar5,param_2[1],param_2[2]);
    (**(code **)*param_2)(param_2);
    (**(code **)*plVar5)(plVar5,1);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e7fbe8 FUN_143e7fbe8 body=82 status=ok
// SIG undefined FUN_143e7fbe8(void)

void FUN_143e7fbe8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
      FUN_1489ccb73(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 143e7fc3a FUN_143e7fc3a body=87 status=ok
// SIG undefined FUN_143e7fc3a(void)

void FUN_143e7fc3a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
      FUN_1410c3ebe(*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8),param_2,param_3,
                    *(undefined8 *)(param_3 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 143e7fc92 FUN_143e7fc92 body=103 status=ok
// SIG undefined FUN_143e7fc92(void)

void FUN_143e7fc92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
      uVar3 = FUN_1401e1b6a(plVar1,param_2,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000143e7fcee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x238))(plVar1,param_2,uVar3,*(code **)(*plVar1 + 0x238));
      return;
    }
  }
  return;
}



// FUNCTION 143e7fcfa FUN_143e7fcfa body=103 status=ok
// SIG undefined FUN_143e7fcfa(void)

void FUN_143e7fcfa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
      uVar3 = FUN_1401e1b6a(plVar1,param_2,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000143e7fd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x240))(plVar1,param_2,uVar3,*(code **)(*plVar1 + 0x240));
      return;
    }
  }
  return;
}



// FUNCTION 143e7fd62 FUN_143e7fd62 body=70 status=ok
// SIG undefined FUN_143e7fd62(void)

void FUN_143e7fd62(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143e7fd9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x220) + 8) + 0x228))();
      return;
    }
  }
  return;
}



// FUNCTION 143e7fda8 FUN_143e7fda8 body=1760 status=ok
// SIG undefined FUN_143e7fda8(void)

void FUN_143e7fda8(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_2e8 [32];
  undefined2 *local_2c8;
  undefined4 local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 *local_280;
  int local_278;
  longlong local_270;
  longlong *local_268;
  undefined2 local_260 [2];
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_238;
  undefined1 local_230 [24];
  byte local_218;
  undefined4 local_1a8;
  byte local_1a4;
  undefined1 local_198 [8];
  undefined1 local_190 [288];
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  lVar4 = DAT_14c98e618;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar12 = *(longlong *)(param_1 + 0x3f0);
  if (lVar12 == 0) goto LAB_143e8002d;
  if (param_2 == '\0') {
    cVar6 = FUN_1489d081a(param_1);
    if (cVar6 != '\0') {
      plVar11 = *(longlong **)(lVar4 + 0x3b8);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        lVar12 = 0;
      }
      else {
        iVar7 = (int)plVar11[1];
        lVar12 = 0;
        do {
          if (iVar7 == 0) {
            plVar11 = (longlong *)0x0;
            goto LAB_143e8015c;
          }
          LOCK();
          iVar5 = (int)plVar11[1];
          bVar13 = iVar7 == iVar5;
          if (bVar13) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar13);
        lVar12 = *(longlong *)(lVar4 + 0x3b0);
      }
LAB_143e8015c:
      local_198[0] = DAT_14c96b238;
      local_70 = (undefined1 *)0x0;
      local_68 = 0x400000000;
      local_60 = 0;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_48 = 0;
      uStack_40 = 0;
      if (lVar12 != 0) {
        local_298 = lVar12;
        if (plVar11 == (longlong *)0x0) {
          local_290 = (longlong *)0x0;
          cVar6 = FUN_1407c4cd2(lVar4,&local_298,local_198);
          uVar8 = DAT_14cb0d2b0;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          local_290 = plVar11;
          cVar6 = FUN_1407c4cd2(lVar4,&local_298,local_198);
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          uVar8 = DAT_14cb0d2b0;
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            uVar8 = DAT_14cb0d2b0;
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              uVar8 = DAT_14cb0d2b0;
            }
          }
        }
        DAT_14cb0d2b0 = uVar8;
        if (cVar6 != '\0') {
          FUN_1447210f0(param_1);
          lVar10 = FUN_147d80080(uVar8);
          *(undefined1 *)(lVar10 + 0x669) = 0;
          local_258 = CONCAT71(local_258._1_7_,1);
          local_238 = 0;
          local_250 = (longlong *)0x0;
          uStack_248 = 0;
          memset(local_230,0,0x88);
          local_1a8 = 0x20702;
          local_1a4 = 0;
          local_2b8 = lVar12;
          local_2a8 = lVar12;
          if (plVar11 == (longlong *)0x0) {
            local_2a0 = (longlong *)0x0;
            FUN_140592b68(&local_258,&local_2a8,0,0);
            local_2b0 = (longlong *)0x0;
            FUN_140592ae6(&local_258);
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            local_2a0 = plVar11;
            FUN_140592b68(&local_258,&local_2a8,0,0);
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            local_2b0 = plVar11;
            FUN_140592ae6(&local_258);
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          local_1a4 = local_1a4 | 0x40;
          local_2c0 = 0;
          local_2c8 = (undefined2 *)0x0;
          FUN_1402c1d72(lVar4,local_198,&local_258,0);
          FUN_14493db24(&local_258);
        }
      }
      FUN_1447fa2ac(local_48,uStack_40 & 0xffffffff);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      puVar9 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar9 = local_190;
      }
      FUN_1447157bd(puVar9,local_68 & 0xffffffff);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    goto LAB_143e8002d;
  }
  local_198[0] = DAT_14c96b238;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  local_60 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  plVar11 = *(longlong **)(param_1 + 0x3f8);
  local_270 = lVar12;
  if (plVar11 == (longlong *)0x0) {
    local_268 = (longlong *)0x0;
    cVar6 = FUN_1407c4cd2(DAT_14c98e618,&local_270,local_198);
    if (cVar6 == '\0') goto LAB_143e7fe8f;
LAB_143e8007f:
    FUN_1469aa534(lVar4);
    local_258 = *(undefined8 *)(param_1 + 0x3f0);
    plVar11 = *(longlong **)(param_1 + 0x3f8);
    local_250 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      FUN_145cd1400(lVar4,&local_258,2);
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      FUN_145cd1400(lVar4,&local_258,2);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_268 = plVar11;
    cVar6 = FUN_1407c4cd2(lVar4,&local_270,local_198);
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (cVar6 != '\0') goto LAB_143e8007f;
LAB_143e7fe8f:
    local_280 = (undefined8 *)0x0;
    local_278 = 0;
    FUN_1446efa72(&local_280,0,3,0x10);
    local_278 = 3;
    *local_280 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_280[2] = lVar10;
    *local_280 = &PTR_FUN_14b453850;
    local_280[3] = lVar4;
    local_280[4] = param_1;
    local_288 = 0;
    uVar8 = FUN_1401b4c98(param_1);
    local_258 = 0;
    local_250 = (longlong *)((ulonglong)local_250._4_4_ << 0x20);
    FUN_14487d8d8(&local_258,&local_280);
    local_218 = 1;
    local_2c8 = local_260;
    local_260[0] = 0;
    local_25c = 0xbf800000;
    FUN_1406f4044(uVar8,&local_288,&local_258,0x3d072b02);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_218])(&local_258);
    if (local_278 == 0) {
LAB_143e7ffb1:
      if (local_280 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_280 != (undefined8 *)0x0) {
      (**(code **)*local_280)(local_280,0);
      FUN_1446efa72(&local_280,0,0,0x10);
      local_278 = 0;
      goto LAB_143e7ffb1;
    }
  }
  FUN_1447fa2ac(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar11 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  puVar9 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar9 = local_190;
  }
  FUN_1447157bd(puVar9,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e8002d:
  if ((local_38 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8048a FUN_143e8048a body=1716 status=ok
// SIG undefined FUN_143e8048a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8048a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  void *_Src_00;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if ((plVar1 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar1 + 0x1d0))(), cVar7 == '\0'))
  goto LAB_143e8090e;
  local_38[0] = 0;
  local_38[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_48 = FUN_1446ddbd2();
    local_40 = FUN_140dafe7a;
    local_50 = 0;
    local_58 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar4 = *(code **)(*plVar1 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar1 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar4)(plVar1), cVar7 == '\0')) {
          _Src = (longlong *)(lVar6 + *(int *)((longlong)plVar1 + 0x44));
          if (_Src != local_38) {
            if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar1 + 0x100))(plVar1,local_38,_Src,(int)plVar1[6]);
            }
            else {
              memcpy(local_38,_Src,
                     (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,lVar6,local_38);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_38,lVar6,1);
      }
      else {
        (*pcVar4)(plVar1,local_38,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_38);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_38);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,local_38);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_48 = FUN_1446ddbd2();
    local_40 = FUN_1403a682c;
    local_50 = 0;
    local_58 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar4 = *(code **)(*plVar1 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar1 + 0x88);
        if ((pcVar4 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar4)(), cVar7 == '\0')) {
          _Src_00 = (void *)(lVar6 + *(int *)((longlong)plVar1 + 0x44));
          if (_Src_00 != (void *)0x0) {
            if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar1 + 0x100))(plVar1,0,_Src_00,(int)plVar1[6]);
            }
            else {
              memcpy((void *)0x0,_Src_00,
                     (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,lVar6,0);
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,0,lVar6,1);
      }
      else {
        (*pcVar4)(plVar1,0,lVar6);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,0);
    }
  }
  lVar6 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar9 = *(undefined **)(lVar6 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar10 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c952a08 && bVar10) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar10 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c952a08) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar10) goto LAB_143e808af;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) {
LAB_143e808af:
      cVar7 = FUN_1402ca054(*(undefined8 *)(lVar6 + 0x20),L"CallFunc_Array_Get_Item",0x17);
      if ((cVar7 == '\0') &&
         (cVar7 = FUN_1402ca054(*(undefined8 *)(lVar6 + 0x20),L"CallFunc_Map_Find_Value",0x17),
         cVar7 == '\0')) {
        FUN_1410c3ebe(*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8),local_38,uVar3,
                      *(undefined8 *)(lVar6 + 0x70));
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_143e8090e:
  if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e80b3f FUN_143e80b3f body=78 status=ok
// SIG undefined FUN_143e80b3f(void)

undefined8 FUN_143e80b3f(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_1402ca054(*(undefined8 *)(param_1 + 0x20),L"CallFunc_Array_Get_Item",0x17);
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = FUN_1402ca054(*(undefined8 *)(param_1 + 0x20),L"CallFunc_Map_Find_Value",0x17);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143e80b8e FUN_143e80b8e body=984 status=ok
// SIG undefined FUN_143e80b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e80b8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  undefined *puVar10;
  bool bVar11;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*plVar1 + 0x1d0))();
  if (cVar6 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    uVar9 = FUN_1446ddbd2();
    uVar12 = 0;
    in_stack_ffffffffffffffb8 = 0;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar9,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          _Src = (void *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
          if (_Src != (void *)0x0) {
            if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar1 + 0x100))(plVar1,0,_Src,(int)plVar1[6]);
            }
            else {
              memcpy((void *)0x0,_Src,
                     (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,0);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        FUN_1400746b0(plVar1,0,lVar5,1,in_stack_ffffffffffffffb8 & 0xffffffff00000000,
                      CONCAT44(uVar12,(int)plVar1[6]));
      }
      else {
        (*pcVar3)(plVar1,0,lVar5);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar9,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar9,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar9,param_2,0);
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    puVar10 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      uVar8 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar8,FUN_1403a682c);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952a08 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952a08) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_143e80dd3;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e80dd3;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
    uVar8 = FUN_1401e1b6a(plVar1,uVar9,*(undefined8 *)(lVar5 + 0x70));
    (**(code **)(*plVar1 + 0x238))(plVar1,uVar9,uVar8);
  }
LAB_143e80dd3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 143e80f66 FUN_143e80f66 body=984 status=ok
// SIG undefined FUN_143e80f66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e80f66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  undefined *puVar10;
  bool bVar11;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*plVar1 + 0x1d0))();
  if (cVar6 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    uVar9 = FUN_1446ddbd2();
    uVar12 = 0;
    in_stack_ffffffffffffffb8 = 0;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar9,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          _Src = (void *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
          if (_Src != (void *)0x0) {
            if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar1 + 0x100))(plVar1,0,_Src,(int)plVar1[6]);
            }
            else {
              memcpy((void *)0x0,_Src,
                     (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,0);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        FUN_1400746b0(plVar1,0,lVar5,1,in_stack_ffffffffffffffb8 & 0xffffffff00000000,
                      CONCAT44(uVar12,(int)plVar1[6]));
      }
      else {
        (*pcVar3)(plVar1,0,lVar5);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar9,param_2,0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar9,param_2,0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar9,param_2,0);
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    puVar10 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      uVar8 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar8,FUN_1403a682c);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952a08 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952a08) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (!bVar11) goto LAB_143e811ab;
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e811ab;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
    uVar8 = FUN_1401e1b6a(plVar1,uVar9,*(undefined8 *)(lVar5 + 0x70));
    (**(code **)(*plVar1 + 0x240))(plVar1,uVar9,uVar8);
  }
LAB_143e811ab:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 143e8133e FUN_143e8133e body=10 status=ok
// SIG undefined FUN_143e8133e(void)

void FUN_143e8133e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x1d0))();
    if (cVar2 != '\0') {
      FUN_1489ccb73(param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 143e81348 FUN_143e81348 body=69 status=ok
// SIG undefined FUN_143e81348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e81348(void)

{
  _DAT_14cb90ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8138a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb90ba8,1);
  return;
}



// FUNCTION 143e8138e FUN_143e8138e body=2345 status=ok
// SIG undefined FUN_143e8138e(void)

void FUN_143e8138e(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong local_d0 [2];
  undefined8 local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_143e84324(param_2);
  if (lVar4 != 0) {
    uVar14 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar11 = *(int *)(lVar4 + 0x10);
    if (iVar11 == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar11 = *(int *)(lVar4 + 0x10);
      bVar16 = iVar11 == 0;
      if (bVar16) {
        *(int *)(lVar4 + 0x10) = iVar9;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar11 = iVar9;
      }
      if (iVar11 == 0) goto LAB_143e81434;
    }
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x10) == iVar11 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
        FUN_140056680(local_58,L"View ID");
        FUN_1467acf64(local_58,local_78,0xf);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(local_58,L"UI Type");
        FUN_1467acf64(local_58,local_88,0x14);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140056680(local_98,L"Name");
        if (((((int)uVar14 < DAT_14c9647dc) &&
             (plVar13 = (longlong *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == iVar11)) &&
           ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
          lVar4 = *plVar13;
        }
        else {
          lVar4 = 0;
        }
        if (0 < *(int *)(lVar4 + 0x3d0)) {
          lVar8 = 0;
          do {
            iVar9 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar8 * 8);
            uVar14 = 0;
            iVar11 = 0;
            if (iVar9 != 0) {
              uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar8 * 8);
              uVar14 = 0;
              if ((-1 < (int)uVar2) && (uVar14 = 0, (int)uVar2 < DAT_14c9647dc)) {
                uVar14 = 0;
                plVar13 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((plVar13 != (longlong *)0x0) &&
                   ((uVar14 = 0, (int)plVar13[2] == iVar9 &&
                    (uVar14 = 0, (*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
                  lVar6 = *plVar13;
                  uVar14 = 0;
                  if (lVar6 != 0) {
                    lVar5 = FUN_14587e2f4();
                    uVar14 = 0;
                    iVar11 = 0;
                    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                       (uVar14 = 0,
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                      uVar14 = *(uint *)(lVar6 + 0xc);
                      if ((int)uVar14 < DAT_14c9647dc) {
                        lVar6 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                      }
                      else {
                        lVar6 = 0;
                      }
                      iVar11 = *(int *)(lVar6 + 0x10);
                      if (*(int *)(lVar6 + 0x10) == 0) {
                        LOCK();
                        iVar11 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar9 = DAT_14c964868 + 1;
                        bVar16 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar11;
                        if (bVar16) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar9);
                        }
                        LOCK();
                        iVar11 = *(int *)(lVar6 + 0x10);
                        bVar16 = iVar11 == 0;
                        if (bVar16) {
                          *(int *)(lVar6 + 0x10) = iVar9;
                          iVar11 = 0;
                        }
                        UNLOCK();
                        if (bVar16) {
                          iVar11 = iVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar9 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar8 * 8);
            uVar15 = 0;
            if (((((iVar9 == 0) ||
                  (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar8 * 8), (int)uVar2 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar2)) ||
                ((plVar13 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar13 == (longlong *)0x0 || ((int)plVar13[2] != iVar9)))) ||
               (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar6 = *plVar13, lVar6 == 0)))) {
LAB_143e8161b:
              iVar9 = 0;
            }
            else {
              lVar5 = FUN_141419e42();
              if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38))
              goto LAB_143e8161b;
              iVar9 = 0;
              if (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
                uVar2 = *(uint *)(lVar6 + 0xc);
                uVar15 = (ulonglong)uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar9 = *(int *)(lVar6 + 0x10);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar12 = DAT_14c964868 + 1;
                  bVar16 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar16) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar12);
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar6 + 0x10);
                  bVar16 = iVar9 == 0;
                  if (bVar16) {
                    *(int *)(lVar6 + 0x10) = iVar12;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  if (bVar16) {
                    iVar9 = iVar12;
                  }
                }
              }
            }
            if (((iVar11 == 0) || ((int)uVar14 < 0)) || (DAT_14c9647dc <= (int)uVar14)) {
LAB_143e816b4:
              if (((iVar9 != 0) && (uVar14 = (uint)uVar15, -1 < (int)uVar14)) &&
                 ((int)uVar14 < DAT_14c9647dc)) {
                uVar15 = uVar15 >> 0x10;
                uVar2 = uVar14 & 0xffff;
                lVar6 = (ulonglong)(uVar2 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar15 * 8);
                if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == iVar9)) &&
                   ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
                  lVar6 = FUN_141419e42();
                  local_58[0] = *(longlong *)(lVar6 + 0x18);
                  FUN_1400021e4(local_58,local_a8);
                  if (((((int)uVar14 < DAT_14c9647dc) &&
                       (plVar13 = (longlong *)
                                  ((ulonglong)(uVar2 * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + uVar15 * 8)),
                       plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == iVar9)) &&
                     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
                    lVar6 = *plVar13;
                  }
                  else {
                    lVar6 = 0;
                  }
                  local_c0 = *(undefined8 *)(lVar6 + 0x18);
                  FUN_1400021e4(&local_c0,local_b8);
                  FUN_1467acf64(local_a8,local_d0,0x14);
                  if ((((int)uVar14 < DAT_14c9647dc) &&
                      (plVar13 = (longlong *)
                                 ((ulonglong)(uVar2 * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + uVar15 * 8)),
                      plVar13 != (longlong *)0x0)) &&
                     (((int)plVar13[2] == iVar9 && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
                    lVar6 = *plVar13;
                  }
                  else {
                    lVar6 = 0;
                  }
                  if (*(longlong *)(lVar6 + 0x168) == 0) {
                    puVar7 = (undefined8 *)(lVar6 + 0x178);
                  }
                  else {
                    puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x168) + 0x238) + 8)
                    ;
                  }
                  plVar13 = (longlong *)*puVar7;
                  goto LAB_143e81aff;
                }
              }
            }
            else {
              uVar10 = (ulonglong)(uVar14 >> 0x10);
              uVar2 = uVar14 & 0xffff;
              plVar13 = (longlong *)
                        ((ulonglong)(uVar2 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8));
              if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar11)) ||
                 ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143e816b4;
              if (((*(uint *)(plVar13 + 1) & 0x10200000) == 0) && (lVar6 = *plVar13, lVar6 != 0)) {
                lVar5 = FUN_145b81e40();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_143e819ef;
                uVar1 = *(uint *)(lVar6 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar9 = *(int *)(lVar6 + 0x10);
                if (iVar9 == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  local_d4 = DAT_14c964868 + 1;
                  bVar16 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar16) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,local_d4);
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar6 + 0x10);
                  bVar16 = iVar9 == 0;
                  if (bVar16) {
                    *(int *)(lVar6 + 0x10) = local_d4;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  if (bVar16) {
                    iVar9 = local_d4;
                  }
                  if (iVar9 == 0) goto LAB_143e819ef;
                }
                if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
                    (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                    lVar6 == 0)) ||
                   ((*(int *)(lVar6 + 0x10) != iVar9 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))
                   ) goto LAB_143e819ef;
                lVar6 = FUN_145b81e40();
                local_58[0] = *(longlong *)(lVar6 + 0x18);
                plVar13 = local_58;
              }
              else {
LAB_143e819ef:
                if ((((int)uVar14 < DAT_14c9647dc) &&
                    ((plVar13 = (longlong *)
                                ((ulonglong)(uVar2 * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + uVar10 * 8)),
                     plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar11)))) &&
                   ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
                  lVar6 = *plVar13;
                }
                else {
                  lVar6 = 0;
                }
                local_68[0] = *(longlong *)(lVar6 + 0x18);
                plVar13 = local_68;
              }
              FUN_1400021e4(plVar13,local_a8);
              if (((((int)uVar14 < DAT_14c9647dc) &&
                   (plVar13 = (longlong *)
                              ((ulonglong)(uVar2 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8)
                              ), plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == iVar11)) &&
                 ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
                lVar6 = *plVar13;
              }
              else {
                lVar6 = 0;
              }
              local_c0 = *(undefined8 *)(lVar6 + 0x18);
              FUN_1400021e4(&local_c0,local_b8);
              FUN_1467acf64(local_a8,local_d0,0x14);
              if ((((int)uVar14 < DAT_14c9647dc) &&
                  (plVar13 = (longlong *)
                             ((ulonglong)(uVar2 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8))
                  , plVar13 != (longlong *)0x0)) &&
                 (((int)plVar13[2] == iVar11 && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
                lVar6 = *plVar13;
              }
              else {
                lVar6 = 0;
              }
              plVar13 = *(longlong **)(*(longlong *)(lVar6 + 0x220) + 8);
LAB_143e81aff:
              if (plVar13 != (longlong *)0x0) {
                uVar3 = (**(code **)(*plVar13 + 0x38))();
                FUN_1448f870c(local_68,uVar3);
                FUN_1467acf64(local_68,local_58,0xf);
                if (local_68[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_58[0] != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_d0[0] != 0) {
                FUN_1400020a8();
              }
              if (local_b8[0] != 0) {
                FUN_1400020a8();
              }
              if (local_a8[0] != 0) {
                FUN_1400020a8();
              }
            }
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < *(int *)(lVar4 + 0x3d0));
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143e81434:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e81cb8 FUN_143e81cb8 body=1282 status=ok
// SIG undefined FUN_143e81cb8(void)

void FUN_143e81cb8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *_Str;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  int local_44;
  
  if (DAT_14cb90da0 != (longlong *)0x0 && DAT_14cb90da8 != 0) {
    (**(code **)(*DAT_14cb90da0 + 0x60))();
  }
  lVar4 = FUN_143e84324(param_3);
  if (lVar4 != 0) {
    if ((int)param_2[1] < 1) {
      local_44 = -1;
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      local_44 = _wtoi(_Str);
    }
    if (0 < *(int *)(lVar4 + 0x3d0)) {
      lVar10 = 0;
      do {
        iVar13 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar10 * 8);
        uVar11 = 0;
        iVar3 = 0;
        if (iVar13 != 0) {
          uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar10 * 8);
          uVar11 = 0;
          if ((-1 < (int)uVar2) && (uVar11 = 0, (int)uVar2 < DAT_14c9647dc)) {
            uVar11 = 0;
            plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar7 != (longlong *)0x0) &&
               ((uVar11 = 0, (int)plVar7[2] == iVar13 &&
                (uVar11 = 0, (*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
              lVar9 = *plVar7;
              uVar11 = 0;
              if (lVar9 != 0) {
                lVar5 = FUN_14587e2f4();
                uVar11 = 0;
                iVar3 = 0;
                if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                   (uVar11 = 0,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                  uVar11 = *(uint *)(lVar9 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar3 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar13 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar14) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar13);
                    }
                    LOCK();
                    iVar3 = *(int *)(lVar9 + 0x10);
                    bVar14 = iVar3 == 0;
                    if (bVar14) {
                      *(int *)(lVar9 + 0x10) = iVar13;
                      iVar3 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      iVar3 = iVar13;
                    }
                  }
                }
              }
            }
          }
        }
        iVar13 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar10 * 8);
        uVar12 = 0;
        if ((((iVar13 == 0) ||
             (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar10 * 8), (int)uVar2 < 0)) ||
            (DAT_14c9647dc <= (int)uVar2)) ||
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar13)) ||
            (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar9 = *plVar7, lVar9 == 0)))))) {
LAB_143e81e25:
          iVar13 = 0;
        }
        else {
          lVar5 = FUN_141419e42();
          if (*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38))
          goto LAB_143e81e25;
          iVar13 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
            uVar2 = *(uint *)(lVar9 + 0xc);
            uVar12 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar13 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar13 = *(int *)(lVar9 + 0x10);
              bVar14 = iVar13 == 0;
              if (bVar14) {
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar13 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar13 = iVar8;
              }
            }
          }
        }
        if (((iVar3 == 0) || ((int)uVar11 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar11 ||
            (((plVar7 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
              plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar3)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
          if (((iVar13 != 0) && (uVar11 = (uint)uVar12, -1 < (int)uVar11)) &&
             ((int)uVar11 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (uVar12 >> 0x10) * 8));
            if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar13)) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar9 = *plVar7;
              }
              else {
                lVar9 = 0;
              }
              lVar5 = *(longlong *)(lVar9 + 0x168);
              plVar7 = *(longlong **)(lVar9 + 0x170);
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar6 = plVar7 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
              if (lVar5 != 0) {
                if (((((int)uVar11 < DAT_14c9647dc) &&
                     (plVar7 = (longlong *)
                               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (uVar12 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == iVar13)) &&
                   ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
                  lVar9 = *plVar7;
                }
                else {
                  lVar9 = 0;
                }
                lVar5 = *(longlong *)(lVar9 + 0x168);
                plVar7 = *(longlong **)(lVar9 + 0x170);
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                }
                lVar9 = *(longlong *)(lVar5 + 0x238);
                plVar6 = *(longlong **)(lVar9 + 8);
                if (plVar6 != (longlong *)0x0 && lVar9 != 0) {
                  if (local_44 != -1) {
                    iVar3 = (**(code **)(*plVar6 + 0x38))();
                    if (iVar3 != local_44) goto LAB_143e81ff9;
                    plVar6 = *(longlong **)(lVar9 + 8);
                  }
                  (**(code **)(*plVar6 + 0x18))();
                }
LAB_143e81ff9:
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar7 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
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
              }
            }
          }
        }
        else {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar7;
          }
          else {
            lVar9 = 0;
          }
          lVar9 = *(longlong *)(lVar9 + 0x220);
          plVar7 = *(longlong **)(lVar9 + 8);
          if (plVar7 != (longlong *)0x0 && lVar9 != 0) {
            if (local_44 != -1) {
              iVar3 = (**(code **)(*plVar7 + 0x38))();
              if (iVar3 != local_44) goto LAB_143e82069;
              plVar7 = *(longlong **)(lVar9 + 8);
            }
            (**(code **)(*plVar7 + 0x18))();
          }
        }
LAB_143e82069:
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(lVar4 + 0x3d0));
    }
  }
  return;
}



// FUNCTION 143e821ba FUN_143e821ba body=1565 status=ok
// SIG undefined FUN_143e821ba(void)

void FUN_143e821ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int **ppiVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  wchar_t *_Str;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  int **local_80;
  int local_78;
  int *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_55;
  int local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar9 = *(int *)(param_2 + 1);
  if (iVar9 != 0) {
    local_80 = (int **)0x0;
    uVar8 = *param_2;
    local_78 = iVar9;
    FUN_140b856de(&local_80,iVar9,0);
    FUN_140b8566a(local_80,uVar8,iVar9);
    local_98[0] = 0;
    local_98[1] = 0;
    if (*(int *)(param_2 + 1) == 1) {
      iVar9 = *(int *)(local_80 + 1) + -1;
      if (*(int *)(local_80 + 1) == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(local_98,*local_80,iVar9);
      FUN_1400b22c2(&local_70,&DAT_14b451b86);
      ppiVar4 = local_80;
      if (local_80 == &local_70) {
        if (local_70 != (int *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*local_80 != (int *)0x0) {
          FUN_1400020a8();
        }
        *ppiVar4 = local_70;
        local_70 = (int *)0x0;
        *(undefined4 *)(ppiVar4 + 1) = (undefined4)local_68;
        *(undefined4 *)((longlong)ppiVar4 + 0xc) = local_68._4_4_;
      }
    }
    else if (1 < *(int *)(param_2 + 1)) {
      iVar9 = *(int *)(local_80 + 3) + -1;
      if (*(int *)(local_80 + 3) == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(local_98,local_80[2],iVar9);
    }
    _Str = L"";
    FUN_1448097c4(local_98,&DAT_149e01f5a,&DAT_149dfb77a,1);
    local_50 = local_98;
    lVar5 = FUN_143e84324(param_3);
    if (lVar5 != 0) {
      local_54 = -1;
      if (0 < local_78) {
        if (*(int *)(local_80 + 1) != 0) {
          _Str = (wchar_t *)*local_80;
        }
        local_54 = _wtoi(_Str);
      }
      local_60 = &local_55;
      local_55 = 0;
      local_70 = &local_54;
      local_68 = &local_50;
      if (0 < *(int *)(lVar5 + 0x3d0)) {
        lVar12 = 0;
        do {
          iVar15 = *(int *)(*(longlong *)(lVar5 + 0x3c8) + 4 + lVar12 * 8);
          uVar13 = 0;
          iVar9 = 0;
          if (iVar15 != 0) {
            uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x3c8) + lVar12 * 8);
            uVar13 = 0;
            if ((-1 < (int)uVar3) && (uVar13 = 0, (int)uVar3 < DAT_14c9647dc)) {
              uVar13 = 0;
              plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar7 != (longlong *)0x0) &&
                 ((uVar13 = 0, (int)plVar7[2] == iVar15 &&
                  (uVar13 = 0, (*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
                lVar11 = *plVar7;
                uVar13 = 0;
                if (lVar11 != 0) {
                  lVar6 = FUN_14587e2f4();
                  uVar13 = 0;
                  iVar9 = 0;
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                     (uVar13 = 0,
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                    uVar13 = *(uint *)(lVar11 + 0xc);
                    if ((int)uVar13 < DAT_14c9647dc) {
                      lVar11 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
                    }
                    else {
                      lVar11 = 0;
                    }
                    iVar9 = *(int *)(lVar11 + 0x10);
                    if (*(int *)(lVar11 + 0x10) == 0) {
                      LOCK();
                      iVar9 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar15 = DAT_14c964868 + 1;
                      bVar16 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar9;
                      if (bVar16) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar15);
                      }
                      LOCK();
                      iVar9 = *(int *)(lVar11 + 0x10);
                      bVar16 = iVar9 == 0;
                      if (bVar16) {
                        *(int *)(lVar11 + 0x10) = iVar15;
                        iVar9 = 0;
                      }
                      UNLOCK();
                      if (bVar16) {
                        iVar9 = iVar15;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar15 = *(int *)(*(longlong *)(lVar5 + 0x3c8) + 4 + lVar12 * 8);
          uVar14 = 0;
          if ((((iVar15 == 0) ||
               (uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x3c8) + lVar12 * 8), (int)uVar3 < 0)) ||
              (DAT_14c9647dc <= (int)uVar3)) ||
             (((plVar7 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar15)) ||
              (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar11 = *plVar7, lVar11 == 0)))))) {
LAB_143e82443:
            iVar15 = 0;
          }
          else {
            lVar6 = FUN_141419e42();
            if (*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38))
            goto LAB_143e82443;
            iVar15 = 0;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30) {
              uVar3 = *(uint *)(lVar11 + 0xc);
              uVar14 = (ulonglong)uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar11 = 0;
              }
              iVar15 = *(int *)(lVar11 + 0x10);
              if (*(int *)(lVar11 + 0x10) == 0) {
                LOCK();
                iVar15 = DAT_14c964868 + 1;
                UNLOCK();
                iVar10 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar15;
                if (bVar16) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar10);
                }
                LOCK();
                iVar15 = *(int *)(lVar11 + 0x10);
                bVar16 = iVar15 == 0;
                if (bVar16) {
                  *(int *)(lVar11 + 0x10) = iVar10;
                  iVar15 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar15 = iVar10;
                }
              }
            }
          }
          if (((iVar9 == 0) || ((int)uVar13 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar13 ||
              (((plVar7 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar9)) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
            if (((iVar15 != 0) && (uVar13 = (uint)uVar14, -1 < (int)uVar13)) &&
               ((int)uVar13 < DAT_14c9647dc)) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (uVar14 >> 0x10) * 8));
              if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar15)) &&
                 ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                  lVar11 = *plVar7;
                }
                else {
                  lVar11 = 0;
                }
                lVar6 = *(longlong *)(lVar11 + 0x168);
                plVar7 = *(longlong **)(lVar11 + 0x170);
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
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
                if (lVar6 != 0) {
                  if (((((int)uVar13 < DAT_14c9647dc) &&
                       (plVar7 = (longlong *)
                                 ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (uVar14 >> 0x10) * 8)),
                       plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == iVar15)) &&
                     ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
                    lVar11 = *plVar7;
                  }
                  else {
                    lVar11 = 0;
                  }
                  lVar6 = *(longlong *)(lVar11 + 0x168);
                  plVar7 = *(longlong **)(lVar11 + 0x170);
                  if (plVar7 == (longlong *)0x0) {
                    uVar8 = *(undefined8 *)(lVar6 + 0x238);
                    goto LAB_143e8262e;
                  }
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                  FUN_143e8dbdc(&local_70,*(undefined8 *)(lVar6 + 0x238));
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
              }
            }
          }
          else {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar11 = *plVar7;
            }
            else {
              lVar11 = 0;
            }
            uVar8 = *(undefined8 *)(lVar11 + 0x220);
LAB_143e8262e:
            FUN_143e8dbdc(&local_70,uVar8);
          }
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < *(int *)(lVar5 + 0x3d0));
      }
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_80,local_78);
    if (local_80 != (int **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e827d8 FUN_143e827d8 body=1470 status=ok
// SIG undefined FUN_143e827d8(void)

void FUN_143e827d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *_Str;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1;
  lVar6 = FUN_143e84324(param_3);
  if (lVar6 != 0) {
    if ((int)param_2[1] < 1) {
      local_5c = -1;
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      local_5c = _wtoi(_Str);
    }
    if (0 < *(int *)(lVar6 + 0x3d0)) {
      local_58 = local_58 + 0x10;
      lVar13 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x3c8) + 4 + lVar13 * 8);
        uVar5 = 0;
        iVar4 = 0;
        if (iVar3 != 0) {
          uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x3c8) + lVar13 * 8);
          uVar5 = 0;
          if ((-1 < (int)uVar2) && (uVar5 = 0, (int)uVar2 < DAT_14c9647dc)) {
            uVar5 = 0;
            plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar10 != (longlong *)0x0) &&
               ((uVar5 = 0, (int)plVar10[2] == iVar3 &&
                (uVar5 = 0, (*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
              lVar8 = *plVar10;
              uVar5 = 0;
              if (lVar8 != 0) {
                lVar7 = FUN_14587e2f4();
                uVar5 = 0;
                iVar4 = 0;
                if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (uVar5 = 0,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                  uVar5 = *(uint *)(lVar8 + 0xc);
                  if ((int)uVar5 < DAT_14c9647dc) {
                    lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                  }
                  else {
                    lVar8 = 0;
                  }
                  iVar4 = *(int *)(lVar8 + 0x10);
                  if (*(int *)(lVar8 + 0x10) == 0) {
                    LOCK();
                    iVar4 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar3 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar4;
                    if (bVar14) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar3);
                    }
                    LOCK();
                    iVar4 = *(int *)(lVar8 + 0x10);
                    bVar14 = iVar4 == 0;
                    if (bVar14) {
                      *(int *)(lVar8 + 0x10) = iVar3;
                      iVar4 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      iVar4 = iVar3;
                    }
                  }
                }
              }
            }
          }
        }
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x3c8) + 4 + lVar13 * 8);
        uVar12 = 0;
        if ((((iVar3 == 0) ||
             (uVar2 = *(uint *)(*(longlong *)(lVar6 + 0x3c8) + lVar13 * 8), (int)uVar2 < 0)) ||
            (DAT_14c9647dc <= (int)uVar2)) ||
           (((plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar3)) ||
            (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar8 = *plVar10, lVar8 == 0)))))) {
LAB_143e82941:
          iVar3 = 0;
        }
        else {
          lVar7 = FUN_141419e42();
          if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38))
          goto LAB_143e82941;
          iVar3 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
            uVar2 = *(uint *)(lVar8 + 0xc);
            uVar12 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar3 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar3 = *(int *)(lVar8 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar8 + 0x10) = iVar11;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar11;
              }
            }
          }
        }
        iVar11 = local_5c;
        if (((iVar4 == 0) || ((int)uVar5 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar5 ||
            (((plVar10 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
              plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar4)) ||
             ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))))) {
          if (((iVar3 != 0) && (uVar5 = (uint)uVar12, -1 < (int)uVar5)) &&
             ((int)uVar5 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (uVar12 >> 0x10) * 8));
            if (((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == iVar3)) &&
               ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                lVar8 = *plVar10;
              }
              else {
                lVar8 = 0;
              }
              lVar7 = *(longlong *)(lVar8 + 0x168);
              plVar10 = *(longlong **)(lVar8 + 0x170);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
                LOCK();
                plVar9 = plVar10 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              iVar4 = local_5c;
              if (lVar7 != 0) {
                if (((((int)uVar5 < DAT_14c9647dc) &&
                     (plVar10 = (longlong *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (uVar12 >> 0x10) * 8)),
                     plVar10 != (longlong *)0x0)) && ((int)plVar10[2] == iVar3)) &&
                   ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
                  lVar8 = *plVar10;
                }
                else {
                  lVar8 = 0;
                }
                lVar7 = *(longlong *)(lVar8 + 0x168);
                plVar10 = *(longlong **)(lVar8 + 0x170);
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                  UNLOCK();
                }
                lVar8 = *(longlong *)(lVar7 + 0x238);
                plVar9 = *(longlong **)(lVar8 + 8);
                if (plVar9 != (longlong *)0x0 && lVar8 != 0) {
                  if (local_5c != -1) {
                    iVar3 = (**(code **)(*plVar9 + 0x38))();
                    if (iVar3 != iVar4) goto LAB_143e82b0c;
                    plVar9 = *(longlong **)(lVar8 + 8);
                  }
                  uVar5 = ((uint)((ulonglong)plVar9 >> 0x14) & 0xffff ^
                          (uint)((ulonglong)plVar9 >> 4)) * -0x7a143595;
                  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
                  local_50 = plVar9;
                  lVar8 = FUN_1489d5710(local_58,uVar5 >> 0x10 ^ uVar5,&local_50);
                  *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) ^ 1;
                  (**(code **)(*local_50 + 0xa8))();
                }
LAB_143e82b0c:
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plVar10 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*plVar10)(plVar10);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar10;
          }
          else {
            lVar8 = 0;
          }
          lVar8 = *(longlong *)(lVar8 + 0x220);
          plVar10 = *(longlong **)(lVar8 + 8);
          if (plVar10 != (longlong *)0x0 && lVar8 != 0) {
            if (local_5c != -1) {
              iVar4 = (**(code **)(*plVar10 + 0x38))();
              if (iVar4 != iVar11) goto LAB_143e82b7c;
              plVar10 = *(longlong **)(lVar8 + 8);
            }
            uVar5 = ((uint)((ulonglong)plVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar10 >> 4))
                    * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            local_50 = plVar10;
            lVar8 = FUN_1489d5710(local_58,uVar5 >> 0x10 ^ uVar5,&local_50);
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) ^ 1;
            (**(code **)(*local_50 + 0xa8))();
          }
        }
LAB_143e82b7c:
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < *(int *)(lVar6 + 0x3d0));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e82d98 FUN_143e82d98 body=1639 status=ok
// SIG undefined FUN_143e82d98(void)

void FUN_143e82d98(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *_Str;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_98 [40];
  int *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined1 local_55;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_2[1] == 0) {
    iVar13 = *(int *)(param_1 + 0x38);
    if (iVar13 == 0) {
      uVar18 = 1;
      uVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
    }
    else {
      puVar17 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0x20);
      }
      uVar9 = *puVar17;
      if (uVar9 == 0) {
        iVar14 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar14 = iVar13 + -1;
        }
        uVar16 = 0;
        uVar18 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar18 = uVar16;
        }
        iVar15 = 0;
        do {
          if (uVar18 == uVar16) goto LAB_143e82e50;
          iVar15 = iVar15 + 0x20;
          uVar9 = puVar17[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar16 = 0;
        iVar15 = 0;
      }
      uVar18 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar18 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar14 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar14) {
        iVar14 = iVar13;
      }
    }
    if (iVar14 != iVar13) {
      uVar9 = 0xffffffff;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar14 * 0x18) = 0;
        uVar9 = ~(uint)uVar18 & uVar9;
        puVar17 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar17 = (uint *)(param_1 + 0x20);
        }
        iVar4 = *(int *)(param_1 + 0x38);
        iVar14 = (int)uVar16;
        lVar5 = (longlong)iVar14;
        uVar10 = puVar17[lVar5] & uVar9;
        if (uVar10 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar14) {
            iVar12 = iVar14;
          }
          if (iVar14 < iVar11) {
            lVar20 = 0;
            do {
              uVar10 = puVar17[lVar5 + lVar20 + 1];
              if (uVar10 != 0) {
                uVar16 = (ulonglong)(iVar14 + (int)lVar20 + 1);
                uVar9 = 0xffffffff;
                goto LAB_143e82f22;
              }
              iVar15 = iVar15 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar12 - lVar5 != lVar20);
            uVar9 = 0xffffffff;
            lVar5 = (longlong)iVar12;
          }
          uVar16 = lVar5 + 1U & 0xffffffff;
          iVar14 = iVar4;
        }
        else {
LAB_143e82f22:
          uVar18 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar18 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar14 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar14) {
            iVar14 = iVar4;
          }
        }
      } while (iVar14 != iVar13);
    }
LAB_143e82e50:
    *(undefined1 *)(param_1 + 8) = 0;
  }
  local_50 = param_1;
  lVar5 = FUN_143e84324(param_3);
  if (lVar5 != 0) {
    local_54 = -1;
    if (0 < (int)param_2[1]) {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      local_54 = _wtoi(_Str);
    }
    local_60 = &local_55;
    local_55 = 0;
    local_70 = &local_54;
    local_68 = &local_50;
    if (0 < *(int *)(lVar5 + 0x3d0)) {
      lVar20 = 0;
      do {
        iVar14 = *(int *)(*(longlong *)(lVar5 + 0x3c8) + 4 + lVar20 * 8);
        uVar9 = 0;
        iVar13 = 0;
        if (iVar14 != 0) {
          uVar10 = *(uint *)(*(longlong *)(lVar5 + 0x3c8) + lVar20 * 8);
          uVar9 = 0;
          if ((-1 < (int)uVar10) && (uVar9 = 0, (int)uVar10 < DAT_14c9647dc)) {
            uVar9 = 0;
            plVar7 = (longlong *)
                     ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
            if ((plVar7 != (longlong *)0x0) &&
               ((uVar9 = 0, (int)plVar7[2] == iVar14 &&
                (uVar9 = 0, (*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
              lVar19 = *plVar7;
              uVar9 = 0;
              if (lVar19 != 0) {
                lVar6 = FUN_14587e2f4();
                uVar9 = 0;
                iVar13 = 0;
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
                   (uVar9 = 0,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  uVar9 = *(uint *)(lVar19 + 0xc);
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar19 = 0;
                  }
                  iVar13 = *(int *)(lVar19 + 0x10);
                  if (*(int *)(lVar19 + 0x10) == 0) {
                    LOCK();
                    iVar13 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar14 = DAT_14c964868 + 1;
                    bVar21 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar13;
                    if (bVar21) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar14);
                    }
                    LOCK();
                    iVar13 = *(int *)(lVar19 + 0x10);
                    bVar21 = iVar13 == 0;
                    if (bVar21) {
                      *(int *)(lVar19 + 0x10) = iVar14;
                      iVar13 = 0;
                    }
                    UNLOCK();
                    if (bVar21) {
                      iVar13 = iVar14;
                    }
                  }
                }
              }
            }
          }
        }
        iVar14 = *(int *)(*(longlong *)(lVar5 + 0x3c8) + 4 + lVar20 * 8);
        uVar16 = 0;
        if ((((iVar14 == 0) ||
             (uVar10 = *(uint *)(*(longlong *)(lVar5 + 0x3c8) + lVar20 * 8), (int)uVar10 < 0)) ||
            (DAT_14c9647dc <= (int)uVar10)) ||
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
             plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar14)) ||
            (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar19 = *plVar7, lVar19 == 0)))))) {
LAB_143e8308c:
          iVar14 = 0;
        }
        else {
          lVar6 = FUN_141419e42();
          if (*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38))
          goto LAB_143e8308c;
          iVar14 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30) {
            uVar10 = *(uint *)(lVar19 + 0xc);
            uVar16 = (ulonglong)uVar10;
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar14 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar14 = DAT_14c964868 + 1;
              UNLOCK();
              iVar15 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar14;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar15);
              }
              LOCK();
              iVar14 = *(int *)(lVar19 + 0x10);
              bVar21 = iVar14 == 0;
              if (bVar21) {
                *(int *)(lVar19 + 0x10) = iVar15;
                iVar14 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar14 = iVar15;
              }
            }
          }
        }
        if (((iVar13 == 0) || ((int)uVar9 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar9 ||
            (((plVar7 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
              plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar13)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
          if (((iVar14 != 0) && (uVar9 = (uint)uVar16, -1 < (int)uVar9)) &&
             ((int)uVar9 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (uVar16 >> 0x10) * 8));
            if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar14)) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar19 = *plVar7;
              }
              else {
                lVar19 = 0;
              }
              lVar6 = *(longlong *)(lVar19 + 0x168);
              plVar7 = *(longlong **)(lVar19 + 0x170);
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar2 = plVar7 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar7 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              if (lVar6 != 0) {
                if (((((int)uVar9 < DAT_14c9647dc) &&
                     (plVar7 = (longlong *)
                               ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (uVar16 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == iVar14)) &&
                   ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
                  lVar19 = *plVar7;
                }
                else {
                  lVar19 = 0;
                }
                lVar6 = *(longlong *)(lVar19 + 0x168);
                plVar7 = *(longlong **)(lVar19 + 0x170);
                if (plVar7 == (longlong *)0x0) {
                  uVar8 = *(undefined8 *)(lVar6 + 0x238);
                  goto LAB_143e83277;
                }
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                FUN_143e8dd6c(&local_70,*(undefined8 *)(lVar6 + 0x238));
                LOCK();
                plVar2 = plVar7 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar7 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
            }
          }
        }
        else {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar19 = *plVar7;
          }
          else {
            lVar19 = 0;
          }
          uVar8 = *(undefined8 *)(lVar19 + 0x220);
LAB_143e83277:
          FUN_143e8dd6c(&local_70,uVar8);
        }
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < *(int *)(lVar5 + 0x3d0));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e83400 FUN_143e83400 body=1338 status=ok
// SIG undefined FUN_143e83400(void)

void FUN_143e83400(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = 0;
  if (((*(int *)(param_2 + 1) == 1) && (cVar9 = FUN_14680fbec(*param_2,&local_8c), cVar9 == '\0'))
     || (lVar13 = FUN_143e84324(param_3), uVar7 = local_8c, lVar13 == 0)) goto LAB_143e8358d;
  lVar5 = *(longlong *)(lVar13 + 0x3a0);
  plVar6 = *(longlong **)(lVar13 + 0x3a8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar16 = *(undefined8 *)(lVar5 + 8);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar13 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143e83489;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143e8348e;
      goto LAB_143e834cf;
    }
LAB_143e8348e:
    FUN_140e423cc(uVar16,uVar7);
  }
  else {
LAB_143e83489:
    if (iVar10 == 0x10) goto LAB_143e8348e;
LAB_143e834cf:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar13 + 0xc60), iVar10 == 2))
      goto LAB_143e8348e;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143e8348e;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar15 = (uint *)*puVar3;
      if (puVar15 != (uint *)0x0) goto LAB_143e83659;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar3 = puVar14;
        FUN_140217a48(puVar3);
        puVar15 = (uint *)*puVar3;
LAB_143e83659:
        puVar21 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar21 + 0x17);
        uVar17 = puVar15[0x12];
        if (puVar19 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar4 = *puVar15;
          *puVar15 = *puVar15 + uVar17 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar17) != 0xffffffff) break;
          puVar15 = (uint *)*puVar3;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          puVar21 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x17);
          uVar17 = 0;
          if (puVar19 <= puVar15 + 0x4000) {
            uVar17 = 1;
            goto LAB_143e836d9;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_143e836d9:
      *(uint **)(puVar15 + 0x10) = puVar19;
      puVar15[0x12] = uVar17;
      iVar10 = 0;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14b453170;
      puVar21[0x15] = uVar16;
      *(undefined4 *)(puVar21 + 0x16) = uVar7;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar17 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
          uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
          iVar10 = 0;
        }
        else {
          uVar20 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar20 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar8 = 1;
        if ((char)uVar20 != '\x06') {
          uVar8 = uVar20;
        }
        uVar20 = uVar8;
        uVar16 = 0;
      }
      else {
        if ((char)uVar20 == '\x06') {
          uVar20 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar16 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar21[0xf] = uVar16;
      puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar10;
      if (puVar21 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar2 = (int *)(puVar21 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14b453120;
      local_58 = uVar7;
      local_88[0] = &LAB_143e8df98;
      local_60 = uVar16;
      FUN_14005a792(&DAT_14ca9a440,L"SetLODBiasForSamplers",&DAT_14cb90ca4);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar18 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar18 = &local_68;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
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
LAB_143e8358d:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8393c FUN_143e8393c body=1247 status=ok
// SIG undefined FUN_143e8393c(void)

void FUN_143e8393c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *_Str;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  int *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_51;
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_143e84324(param_3);
  if (lVar4 != 0) {
    local_50 = -1;
    if (0 < (int)param_2[1]) {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      local_50 = _wtoi(_Str);
    }
    local_60 = &local_51;
    local_51 = 0;
    local_70 = &local_50;
    local_68 = &local_49;
    if (0 < *(int *)(lVar4 + 0x3d0)) {
      lVar11 = 0;
      do {
        iVar14 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar11 * 8);
        uVar12 = 0;
        iVar8 = 0;
        if (iVar14 != 0) {
          uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar11 * 8);
          uVar12 = 0;
          if ((-1 < (int)uVar3) && (uVar12 = 0, (int)uVar3 < DAT_14c9647dc)) {
            uVar12 = 0;
            plVar6 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar6 != (longlong *)0x0) &&
               ((uVar12 = 0, (int)plVar6[2] == iVar14 &&
                (uVar12 = 0, (*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
              lVar10 = *plVar6;
              uVar12 = 0;
              if (lVar10 != 0) {
                lVar5 = FUN_14587e2f4();
                uVar12 = 0;
                iVar8 = 0;
                if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (uVar12 = 0,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                  uVar12 = *(uint *)(lVar10 + 0xc);
                  if ((int)uVar12 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  iVar8 = *(int *)(lVar10 + 0x10);
                  if (*(int *)(lVar10 + 0x10) == 0) {
                    LOCK();
                    iVar8 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar14 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar8;
                    if (bVar15) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar14);
                    }
                    LOCK();
                    iVar8 = *(int *)(lVar10 + 0x10);
                    bVar15 = iVar8 == 0;
                    if (bVar15) {
                      *(int *)(lVar10 + 0x10) = iVar14;
                      iVar8 = 0;
                    }
                    UNLOCK();
                    if (bVar15) {
                      iVar8 = iVar14;
                    }
                  }
                }
              }
            }
          }
        }
        iVar14 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar11 * 8);
        uVar13 = 0;
        if ((((iVar14 == 0) ||
             (uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar11 * 8), (int)uVar3 < 0)) ||
            (DAT_14c9647dc <= (int)uVar3)) ||
           (((plVar6 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar14)) ||
            (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar10 = *plVar6, lVar10 == 0)))))) {
LAB_143e83ab3:
          iVar14 = 0;
        }
        else {
          lVar5 = FUN_141419e42();
          if (*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38))
          goto LAB_143e83ab3;
          iVar14 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
            uVar3 = *(uint *)(lVar10 + 0xc);
            uVar13 = (ulonglong)uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar14 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar14 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar14;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar14 = *(int *)(lVar10 + 0x10);
              bVar15 = iVar14 == 0;
              if (bVar15) {
                *(int *)(lVar10 + 0x10) = iVar9;
                iVar14 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar14 = iVar9;
              }
            }
          }
        }
        if (((iVar8 == 0) || ((int)uVar12 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar12 ||
            (((plVar6 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
              plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar8)) ||
             ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))))) {
          if (((iVar14 != 0) && (uVar12 = (uint)uVar13, -1 < (int)uVar12)) &&
             ((int)uVar12 < DAT_14c9647dc)) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (uVar13 >> 0x10) * 8));
            if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar14)) &&
               ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                lVar10 = *plVar6;
              }
              else {
                lVar10 = 0;
              }
              lVar5 = *(longlong *)(lVar10 + 0x168);
              plVar6 = *(longlong **)(lVar10 + 0x170);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
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
              if (lVar5 != 0) {
                if (((((int)uVar12 < DAT_14c9647dc) &&
                     (plVar6 = (longlong *)
                               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (uVar13 >> 0x10) * 8)),
                     plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == iVar14)) &&
                   ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
                  lVar10 = *plVar6;
                }
                else {
                  lVar10 = 0;
                }
                lVar5 = *(longlong *)(lVar10 + 0x168);
                plVar6 = *(longlong **)(lVar10 + 0x170);
                if (plVar6 == (longlong *)0x0) {
                  uVar7 = *(undefined8 *)(lVar5 + 0x238);
                  goto LAB_143e83c9e;
                }
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                FUN_143e8e334(&local_70,*(undefined8 *)(lVar5 + 0x238));
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
            }
          }
        }
        else {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar6;
          }
          else {
            lVar10 = 0;
          }
          uVar7 = *(undefined8 *)(lVar10 + 0x220);
LAB_143e83c9e:
          FUN_143e8e334(&local_70,uVar7);
        }
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(lVar4 + 0x3d0));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e83e1c FUN_143e83e1c body=1288 status=ok
// SIG undefined FUN_143e83e1c(void)

void FUN_143e83e1c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *_Str;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  int local_4c;
  
  *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) ^ 1;
  lVar4 = FUN_143e84324(param_3);
  if (lVar4 != 0) {
    if ((int)param_2[1] < 1) {
      local_4c = -1;
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      local_4c = _wtoi(_Str);
    }
    if (0 < *(int *)(lVar4 + 0x3d0)) {
      lVar13 = 0;
      do {
        iVar11 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar13 * 8);
        uVar9 = 0;
        iVar3 = 0;
        if (iVar11 != 0) {
          uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar13 * 8);
          uVar9 = 0;
          if ((-1 < (int)uVar2) && (uVar9 = 0, (int)uVar2 < DAT_14c9647dc)) {
            uVar9 = 0;
            plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar7 != (longlong *)0x0) &&
               ((uVar9 = 0, (int)plVar7[2] == iVar11 &&
                (uVar9 = 0, (*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
              lVar12 = *plVar7;
              uVar9 = 0;
              if (lVar12 != 0) {
                lVar5 = FUN_14587e2f4();
                uVar9 = 0;
                iVar3 = 0;
                if (*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) {
                  uVar9 = 0;
                  if (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
                    uVar9 = *(uint *)(lVar12 + 0xc);
                    if ((int)uVar9 < DAT_14c9647dc) {
                      lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                    }
                    else {
                      lVar12 = 0;
                    }
                    iVar3 = *(int *)(lVar12 + 0x10);
                    if (*(int *)(lVar12 + 0x10) == 0) {
                      LOCK();
                      iVar3 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar11 = DAT_14c964868 + 1;
                      bVar14 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar3;
                      if (bVar14) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar11);
                      }
                      LOCK();
                      iVar3 = *(int *)(lVar12 + 0x10);
                      bVar14 = iVar3 == 0;
                      if (bVar14) {
                        *(int *)(lVar12 + 0x10) = iVar11;
                        iVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar14) {
                        iVar3 = iVar11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar11 = *(int *)(*(longlong *)(lVar4 + 0x3c8) + 4 + lVar13 * 8);
        uVar10 = 0;
        if ((((iVar11 == 0) ||
             (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x3c8) + lVar13 * 8), (int)uVar2 < 0)) ||
            (DAT_14c9647dc <= (int)uVar2)) ||
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar11)) ||
            (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar12 = *plVar7, lVar12 == 0)))))) {
LAB_143e83f77:
          iVar11 = 0;
        }
        else {
          lVar5 = FUN_141419e42();
          if (*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38))
          goto LAB_143e83f77;
          iVar11 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
            uVar2 = *(uint *)(lVar12 + 0xc);
            uVar10 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar11 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar11 = *(int *)(lVar12 + 0x10);
              bVar14 = iVar11 == 0;
              if (bVar14) {
                *(int *)(lVar12 + 0x10) = iVar8;
                iVar11 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar11 = iVar8;
              }
            }
          }
        }
        if (((iVar3 == 0) || ((int)uVar9 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar9 ||
            (((plVar7 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
              plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar3)) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
          if (((iVar11 != 0) && (uVar9 = (uint)uVar10, -1 < (int)uVar9)) &&
             ((int)uVar9 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (uVar10 >> 0x10) * 8));
            if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar11)) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar12 = *plVar7;
              }
              else {
                lVar12 = 0;
              }
              lVar5 = *(longlong *)(lVar12 + 0x168);
              plVar7 = *(longlong **)(lVar12 + 0x170);
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar6 = plVar7 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
              if (lVar5 != 0) {
                if (((((int)uVar9 < DAT_14c9647dc) &&
                     (plVar7 = (longlong *)
                               ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (uVar10 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == iVar11)) &&
                   ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
                  lVar12 = *plVar7;
                }
                else {
                  lVar12 = 0;
                }
                lVar5 = *(longlong *)(lVar12 + 0x168);
                plVar7 = *(longlong **)(lVar12 + 0x170);
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                }
                lVar12 = *(longlong *)(lVar5 + 0x238);
                plVar6 = *(longlong **)(lVar12 + 8);
                if (plVar6 != (longlong *)0x0 && lVar12 != 0) {
                  if (local_4c != -1) {
                    iVar3 = (**(code **)(*plVar6 + 0x38))();
                    if (iVar3 != local_4c) goto LAB_143e84154;
                    plVar6 = *(longlong **)(lVar12 + 8);
                  }
                  (**(code **)(*plVar6 + 0xb8))(plVar6,*(undefined1 *)(param_1 + 0xf0));
                }
LAB_143e84154:
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar7 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
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
              }
            }
          }
        }
        else {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar12 = *plVar7;
          }
          else {
            lVar12 = 0;
          }
          lVar12 = *(longlong *)(lVar12 + 0x220);
          plVar7 = *(longlong **)(lVar12 + 8);
          if (plVar7 != (longlong *)0x0 && lVar12 != 0) {
            if (local_4c != -1) {
              iVar3 = (**(code **)(*plVar7 + 0x38))();
              if (iVar3 != local_4c) goto LAB_143e841d6;
              plVar7 = *(longlong **)(lVar12 + 8);
            }
            (**(code **)(*plVar7 + 0xb8))(plVar7,*(undefined1 *)(param_1 + 0xf0));
          }
        }
LAB_143e841d6:
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < *(int *)(lVar4 + 0x3d0));
    }
  }
  return;
}



// FUNCTION 143e84324 FUN_143e84324 body=160 status=ok
// SIG undefined FUN_143e84324(void)

undefined8 FUN_143e84324(undefined8 param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  undefined8 local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = FUN_1403b9a74();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  FUN_145c246c2(local_80,param_1,&local_88,5);
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if (local_5c != '\0') {
    local_50 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e843c5 FUN_143e843c5 body=695 status=ok
// SIG undefined FUN_143e843c5(void)

void FUN_143e843c5(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  switch(*param_2) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x000143e8440a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x128))
              (param_3,*(undefined4 *)
                        (*(longlong *)(param_1 + 0x28) + (longlong)(int)param_2[1] * 4));
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000143e84494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0xe8))
              (param_3,*(undefined4 *)
                        (*(longlong *)(param_1 + 0x48) + (longlong)(int)param_2[1] * 4));
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x000143e84450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x140))
              (param_3,*(undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)(int)param_2[1]));
    return;
  case 3:
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)param_2[1] * 0x10) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)(int)param_2[1] * 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x000143e84586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0xd0))(param_3,puVar4);
    return;
  case 4:
    FUN_1401e1be1(param_3,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x78) + 8 + (longlong)(int)param_2[1] * 0x18),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)param_2[1] * 0x18))
    ;
    return;
  case 5:
    break;
  case 6:
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)(int)param_2[1] * 0x18);
    if (uVar2 < 6) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)param_2[1] * 0x18);
      switch(uVar2) {
      case 0:
        plVar3 = (longlong *)*plVar3;
        (**(code **)(*param_3 + 0x160))(param_3,(longlong)(int)plVar3[1]);
        if (0 < (int)plVar3[1]) {
          lVar6 = 0;
          do {
            (**(code **)(*param_3 + 0x128))(param_3,*(undefined4 *)(*plVar3 + lVar6 * 4));
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)plVar3[1]);
        }
        break;
      case 1:
        plVar3 = (longlong *)*plVar3;
        (**(code **)(*param_3 + 0x160))(param_3,(longlong)(int)plVar3[1]);
        if (0 < (int)plVar3[1]) {
          lVar6 = 0;
          do {
            (**(code **)(*param_3 + 0xe8))(param_3,*(undefined4 *)(*plVar3 + lVar6 * 4));
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)plVar3[1]);
        }
        break;
      case 2:
        plVar3 = (longlong *)*plVar3;
        (**(code **)(*param_3 + 0x160))(param_3,(longlong)(int)plVar3[1]);
        if (0 < (int)plVar3[1]) {
          lVar6 = 0;
          do {
            (**(code **)(*param_3 + 0x140))(param_3,*(undefined1 *)(*plVar3 + lVar6));
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)plVar3[1]);
        }
        break;
      case 3:
        FUN_1489cd9c7(param_3,*plVar3);
        return;
      case 4:
        FUN_1489cd94f(param_3,*plVar3,plVar3[2]);
        return;
      case 5:
        FUN_1489cd8f1(param_3,*plVar3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000143e84604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x168))(param_3);
      return;
    }
  default:
    return;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + (longlong)(int)param_2[1] * 8);
  if ((((iVar1 != 0) &&
       (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)param_2[1] * 8),
       -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == iVar1)) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar3;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar3;
    }
    else {
      lVar5 = 0;
    }
    FUN_1489dc917(param_3,lVar5,*(undefined8 *)(lVar6 + 0x10));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143e844f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xb8))(param_3);
  return;
}



// FUNCTION 143e8467c FUN_143e8467c body=69 status=ok
// SIG undefined FUN_143e8467c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8467c(void)

{
  _DAT_14cb90bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e846be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb90be0,1);
  return;
}



// FUNCTION 143e846c1 FUN_143e846c1 body=69 status=ok
// SIG undefined FUN_143e846c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e846c1(void)

{
  _DAT_14cb90bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e84703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb90bf8,1);
  return;
}



// FUNCTION 143e84706 FUN_143e84706 body=696 status=ok
// SIG undefined FUN_143e84706(void)

void FUN_143e84706(uint *param_1,uint *param_2,longlong *param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  uVar3 = 0;
  if ((uint *)param_3[0x29] != (uint *)0x0) {
    uVar3 = *(uint *)param_3[0x29];
  }
  *param_1 = uVar3;
  if (param_3[0x29] != 0) {
    uVar7 = *(uint *)(param_3[0x29] + 4);
  }
  param_1[1] = uVar7;
  if (param_4 == (uint *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    uVar6 = *(uint *)(param_3 + 0x28);
    param_1[4] = uVar6;
    uVar8 = (ulonglong)param_3[0x28] >> 0x20;
    param_1[5] = (uint)((ulonglong)param_3[0x28] >> 0x20);
    if (uVar8 == 0 && uVar6 == 0) {
      param_1[4] = uVar3;
      param_1[5] = uVar7;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar3;
    }
    while ((*(int *)param_3[0x29] < (int)uVar6 && (((int *)param_3[0x29])[1] < (int)(uint)uVar8))) {
      uVar6 = uVar6 >> 1;
      param_1[4] = uVar6;
      uVar7 = (uint)uVar8 >> 1;
      param_1[5] = uVar7;
      uVar8 = (ulonglong)uVar7;
    }
  }
  else {
    param_1[2] = *param_4;
    param_1[3] = param_4[1];
    param_1[4] = param_4[2];
    param_1[5] = param_4[3];
  }
  uVar7 = 0;
  uVar6 = 0;
  if (param_3 != (longlong *)0x0) {
    bVar1 = *(byte *)(param_3[0x29] + 0xc);
    if (bVar1 == 0x38) {
      uVar6 = 0xb;
    }
    else if (bVar1 < 0x12) {
      switch(bVar1) {
      case 1:
        uVar6 = 2;
        break;
      case 2:
switchD_143e84889_caseD_2:
        uVar6 = 0x34;
        if ((*(byte *)((longlong)param_3 + 0xfe) & 1) == 0) {
          uVar6 = 0;
        }
        break;
      default:
switchD_143e84889_caseD_3:
        uVar6 = 0x36;
        break;
      case 5:
        uVar6 = 5;
        break;
      case 6:
        uVar6 = 6;
        break;
      case 7:
        uVar6 = 7;
        break;
      case 10:
        uVar6 = 1;
      }
    }
    else if (bVar1 < 0x1b) {
      if (bVar1 == 0x12) {
        uVar6 = 0;
      }
      else {
        if (bVar1 != 0x17) goto switchD_143e84889_caseD_3;
        uVar6 = 9;
      }
    }
    else {
      uVar6 = 3;
      if (bVar1 != 0x1b) {
        switch(bVar1) {
        case 0x25:
          goto switchD_143e84889_caseD_2;
        default:
          goto switchD_143e84889_caseD_3;
        case 0x27:
          uVar6 = 8;
          break;
        case 0x2e:
          uVar6 = 0xd;
          break;
        case 0x2f:
          uVar6 = 0xe;
          break;
        case 0x32:
          uVar6 = 0x17;
          break;
        case 0x33:
          uVar6 = 0x1b;
          break;
        case 0x34:
          uVar6 = 0x1e;
          break;
        case 0x35:
          uVar6 = 0x22;
          break;
        case 0x36:
          uVar6 = 0x24;
          break;
        case 0x37:
          uVar6 = 10;
        }
      }
    }
  }
  param_1[10] = uVar6;
  param_1[9] = 0;
  *(longlong **)(param_1 + 0xc) = param_3;
  *param_2 = uVar3;
  param_2[1] = param_1[1];
  param_2[8] = param_1[2];
  param_2[9] = param_1[3];
  param_2[10] = param_1[4];
  param_2[0xb] = param_1[5];
  param_2[6] = param_1[10];
  param_2[0xc] = param_1[9];
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  lVar5 = param_3[0x29];
  if (lVar5 == 0) goto LAB_143e84857;
  if (*(code **)(*param_3 + 0x330) == (code *)&LAB_14014d366) {
    if (((*(byte *)((longlong)param_3 + 0xfe) & 4) != 0) &&
       (lVar4 = *(longlong *)(lVar5 + 0x28), lVar4 != 0)) {
LAB_143e848ae:
      uVar7 = *(uint *)(lVar4 + 4);
      goto LAB_143e84857;
    }
  }
  else {
    cVar2 = (**(code **)(*param_3 + 0x330))(param_3);
    lVar5 = param_3[0x29];
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(lVar5 + 0x28);
      goto LAB_143e848ae;
    }
  }
  uVar7 = *(uint *)(lVar5 + 0x20);
LAB_143e84857:
  param_2[2] = uVar7;
  param_2[3] = 1;
  return;
}



// FUNCTION 143e849c2 FUN_143e849c2 body=1411 status=ok
// SIG undefined FUN_143e849c2(void)

void FUN_143e849c2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *_Src;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar13 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    iVar15 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar13 = *(longlong *)(param_1 + 8);
      do {
        lVar14 = lVar13 + (longlong)iVar15 * 0x20;
        if (*(uint *)(lVar13 + (longlong)iVar15 * 0x20) == param_2) {
          plVar19 = (longlong *)(lVar14 + 8);
          if (plVar19 != (longlong *)0x0 && lVar14 != 0) {
            lVar13 = *plVar19;
            if (lVar13 != 0) {
              if (*(longlong *)(lVar13 + 0x30) != 0) {
                FUN_140886972();
                lVar13 = *plVar19;
              }
              (**(code **)(**(longlong **)(lVar13 + 0x20) + 0x40))(*(longlong **)(lVar13 + 0x20),0);
            }
            FUN_1409be93a((longlong *)(param_1 + 8),param_2);
          }
          break;
        }
        iVar15 = *(int *)(lVar14 + 0x18);
      } while (iVar15 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar13 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar13 = *(longlong *)(param_1 + 0xe8);
    }
    iVar15 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar13 = *(longlong *)(param_1 + 0xa8);
      do {
        lVar14 = lVar13 + (longlong)iVar15 * 0x88;
        if (*(uint *)(lVar13 + (longlong)iVar15 * 0x88) == param_2) {
          if ((undefined4 *)(lVar14 + 8) != (undefined4 *)0x0 && lVar14 != 0) {
            if (*(longlong *)(lVar14 + 0x30) != 0) {
              FUN_140432338(*(longlong *)(lVar14 + 0x30));
            }
            (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x40))(*(longlong **)(lVar14 + 0x78),0);
            if ((DAT_14c86a9f8 == '\x01') &&
               (iVar15 = *(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60), iVar15 != 2)) {
              if (iVar15 == 1) {
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                if (DVar11 == DVar12) goto LAB_143e84d59;
              }
              iVar15 = *(int *)(param_1 + 0x100);
              *(uint *)(param_1 + 0x100) = iVar15 + 1U;
              if (*(uint *)(param_1 + 0x104) < iVar15 + 1U) {
                FUN_1489d6046((longlong *)(param_1 + 0xf8),iVar15);
              }
              lVar4 = *(longlong *)(param_1 + 0xf8);
              lVar16 = (longlong)iVar15 * 0x70;
              lVar13 = lVar4 + lVar16;
              uVar6 = *(undefined4 *)(lVar14 + 0xc);
              uVar7 = *(undefined4 *)(lVar14 + 0x10);
              uVar8 = *(undefined4 *)(lVar14 + 0x14);
              puVar3 = (undefined4 *)(lVar4 + lVar16);
              *puVar3 = *(undefined4 *)(lVar14 + 8);
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              *(undefined8 *)(lVar4 + 0x10 + lVar16) = 0;
              iVar15 = *(int *)(lVar14 + 0x20);
              _Src = *(void **)(lVar14 + 0x18);
              *(int *)(lVar4 + 0x18 + lVar16) = iVar15;
              if ((longlong)iVar15 == 0) {
                *(undefined4 *)(lVar13 + 0x1c) = 0;
              }
              else {
                puVar17 = (undefined8 *)(lVar16 + lVar4 + 0x10);
                FUN_1446dd670(puVar17,iVar15,0);
                memcpy((void *)*puVar17,_Src,(longlong)iVar15 * 2);
              }
              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar14 + 0x28);
              *(undefined8 *)(lVar13 + 0x28) = 0;
              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar14 + 0x30);
              *(undefined8 *)(lVar14 + 0x30) = 0;
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(lVar14 + 0x38);
              *(undefined8 *)(lVar14 + 0x38) = 0;
              *(undefined4 *)(lVar13 + 0x48) = *(undefined4 *)(lVar14 + 0x50);
              uVar9 = *(undefined8 *)(lVar14 + 0x48);
              *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar14 + 0x40);
              *(undefined8 *)(lVar13 + 0x40) = uVar9;
              *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(lVar14 + 0x58);
              *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(lVar14 + 0x60);
              *(undefined8 *)(lVar14 + 0x58) = 0;
              *(undefined8 *)(lVar14 + 0x60) = 0;
              *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar14 + 0x68);
              *(undefined8 *)(lVar13 + 0x68) = *(undefined8 *)(lVar14 + 0x70);
              *(undefined8 *)(lVar14 + 0x68) = 0;
              *(undefined8 *)(lVar14 + 0x70) = 0;
            }
LAB_143e84d59:
            FUN_1489d60d6((longlong *)(param_1 + 0xa8),param_2);
          }
          break;
        }
        iVar15 = *(int *)(lVar14 + 0x80);
      } while (iVar15 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    lVar13 = param_1 + 400;
    if (*(longlong *)(param_1 + 0x198) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x198);
    }
    iVar15 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x1a0) - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar13 = *(longlong *)(param_1 + 0x158);
      do {
        lVar14 = lVar13 + (longlong)iVar15 * 0x20;
        if (*(uint *)(lVar13 + (longlong)iVar15 * 0x20) == param_2) {
          plVar19 = (longlong *)(lVar14 + 8);
          if (plVar19 != (longlong *)0x0 && lVar14 != 0) {
            if (*plVar19 != 0) {
              plVar18 = *(longlong **)(*plVar19 + 0x30);
              if (plVar18 != (longlong *)0x0) {
                (**(code **)(*plVar18 + 0x118))();
                lpCriticalSection =
                     (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(*plVar19 + 0x30) + 0xf0))();
                EnterCriticalSection(lpCriticalSection);
                p_Var5 = lpCriticalSection[1].DebugInfo;
                if (p_Var5 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 &&
                    lpCriticalSection[1].LockCount != 0) {
                  (*(code *)**(undefined8 **)p_Var5)(p_Var5,0);
                  FUN_1446efa72(lpCriticalSection + 1,0,0,0x10);
                  lpCriticalSection[1].LockCount = 0;
                }
                if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                lVar13 = *plVar19;
                *(undefined8 *)(lVar13 + 0x30) = 0;
                plVar18 = *(longlong **)(lVar13 + 0x38);
                if (plVar18 != (longlong *)0x0) {
                  *(undefined8 *)(lVar13 + 0x38) = 0;
                  LOCK();
                  plVar1 = plVar18 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar18 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
              }
              plVar19 = *(longlong **)(*plVar19 + 0x20);
              if (plVar19 != (longlong *)0x0) {
                (**(code **)(*plVar19 + 0x40))(plVar19,0);
              }
            }
            FUN_1489d796a((longlong *)(param_1 + 0x158),param_2);
            goto LAB_143e84e4d;
          }
          break;
        }
        iVar15 = *(int *)(lVar14 + 0x18);
      } while (iVar15 != -1);
    }
  }
  plVar19 = *(longlong **)(param_1 + 0x1b0);
  if (plVar19 != (longlong *)0x0) {
    do {
      if (*plVar19 == 0) {
        for (plVar18 = *(longlong **)(param_1 + 0x1b0); plVar18 != (longlong *)0x0;
            plVar18 = (longlong *)plVar18[2]) {
          if (*plVar18 == 0) goto LAB_143e84be1;
        }
        plVar18 = (longlong *)0x0;
LAB_143e84be1:
        FUN_1489cf1f0(param_1 + 0x1a8,plVar18);
      }
      else {
        uVar10 = (**(code **)(**(longlong **)(*plVar19 + 0x28) + 8))();
        if (uVar10 == param_2) {
          (**(code **)(**(longlong **)(*plVar19 + 0x20) + 0x40))(*(longlong **)(*plVar19 + 0x20),0);
          plVar18 = *(longlong **)(param_1 + 0x1b0);
          if (plVar18 == (longlong *)0x0) goto LAB_143e84c17;
          goto LAB_143e84c09;
        }
      }
      plVar19 = (longlong *)plVar19[2];
    } while (plVar19 != (longlong *)0x0);
  }
  goto LAB_143e84e4d;
  while (plVar18 = (longlong *)plVar18[2], plVar18 != (longlong *)0x0) {
LAB_143e84c09:
    if (*plVar18 == *plVar19) goto LAB_143e84c19;
  }
LAB_143e84c17:
  plVar18 = (longlong *)0x0;
LAB_143e84c19:
  FUN_1489cf1f0(param_1 + 0x1a8,plVar18);
LAB_143e84e4d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  lVar13 = *(longlong *)(param_1 + 0x208);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0x70));
  if (*(int *)(lVar13 + 0x28) != *(int *)(lVar13 + 0x54)) {
    lVar14 = lVar13 + 0x58;
    if (*(longlong *)(lVar13 + 0x60) != 0) {
      lVar14 = *(longlong *)(lVar13 + 0x60);
    }
    iVar15 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar13 + 0x68) - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar14 = *(longlong *)(lVar13 + 0x20);
      do {
        lVar4 = lVar14 + (longlong)iVar15 * 0x20;
        if (*(uint *)(lVar14 + (longlong)iVar15 * 0x20) == param_2) {
          if ((longlong *)(lVar4 + 8) != (longlong *)0x0 && lVar4 != 0) {
            plVar19 = *(longlong **)(*(longlong *)(lVar4 + 8) + 0x10);
            (**(code **)(*plVar19 + 0x40))(plVar19,0);
            FUN_1489da406((longlong *)(lVar13 + 0x20),param_2);
          }
          break;
        }
        iVar15 = *(int *)(lVar4 + 0x18);
      } while (iVar15 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143e84ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0x70));
  return;
}



// FUNCTION 143e84f46 FUN_143e84f46 body=62 status=ok
// SIG undefined FUN_143e84f46(void)

void FUN_143e84f46(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (DAT_14cb913f8 == '\x01') {
    iVar1 = FUN_144afa592(1);
    if (iVar1 != 0) {
      FUN_140596bca();
      FUN_1489c1360();
      return;
    }
  }
  else if (param_3 != 0) {
    FUN_14058be5a(param_3);
    return;
  }
  return;
}



// FUNCTION 143e84f84 FUN_143e84f84 body=3924 status=ok
// SIG undefined FUN_143e84f84(void)

ulonglong FUN_143e84f84(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined ***pppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *puVar24;
  code *pcVar25;
  ulonglong uVar26;
  longlong unaff_RSI;
  undefined8 *puVar27;
  longlong lVar28;
  bool bVar29;
  double dVar30;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90 [2];
  undefined8 *local_80;
  code *local_78;
  int local_70;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_143e852cc:
    lVar13 = *param_3;
    uVar23 = 1;
  }
  else {
    if (DAT_14cb0b430 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = (code *)&LAB_145892f94;
      local_b8 = &LAB_147d6dbf3;
      local_c0 = &LAB_1464081e0;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000001;
      local_e0 = 8;
      local_e8 = (code **)CONCAT44(local_e8._4_4_,0x138);
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    unaff_RSI = param_2;
    if (((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) !=
         DAT_14cb0b430 + 0x30)) || ((*(uint *)(plVar6 + 1) >> 0x1e & 1) != 0)) goto LAB_143e852cc;
    lVar13 = FUN_1447b4020(plVar6);
    if ((lVar13 == 0) || (lVar13 = FUN_1447b4020(plVar6), *(int *)(lVar13 + 8) == -1)) {
LAB_143e8544b:
      uVar26 = 0;
      goto LAB_143e852dd;
    }
    if ((DAT_14cb0a468 < 1) && ((int)plVar6[0x17] != -1)) {
      if (DAT_14cb907b8 == (longlong *)0x0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1489c8acb;
        local_c0 = &LAB_146027b0e;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000006;
        local_e0 = 8;
        local_e8 = (code **)CONCAT44(local_e8._4_4_,0x128);
        FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
      }
      plVar19 = DAT_14cb907b8;
      lVar13 = DAT_14cb907b8[0x22];
      if (lVar13 == 0) {
        (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
        lVar13 = plVar19[0x22];
      }
      if (*(char *)(lVar13 + 0x74) == '\x01') {
        if (0 < DAT_14cb0a468) goto LAB_143e8544b;
        uVar5 = *(undefined1 *)((longlong)plVar6 + 0xf2);
        *(undefined1 *)((longlong)plVar6 + 0xf2) = 2;
        (**(code **)(*plVar6 + 0x2a0))(plVar6);
        *(byte *)((longlong)plVar6 + 0xbc) = *(byte *)((longlong)plVar6 + 0xbc) & 0xdf;
        plVar6[8] = (longlong)(DAT_14c866ff8 + 2.0);
        FUN_147d5ed04(plVar6,1,0);
        *(undefined1 *)((longlong)plVar6 + 0xf2) = uVar5;
      }
      else {
        uVar26 = plVar6[0x18];
        if ((((uVar26 & 1) != 0) &&
            ((int)((uint)(uVar26 >> 0x28) & 0xff) <
             (int)(((uint)(uVar26 >> 0x18) & 0xff) - (int)plVar6[9]))) ||
           ((cVar8 = FUN_1402bfec4(plVar6,0), cVar8 != '\0' ||
            ((*(byte *)((longlong)plVar6 + 0xbc) & 4) != 0)))) {
          dVar3 = *(double *)(param_2 + 0x20);
          if ((dVar3 != 0.0) || (dVar30 = DAT_14c866ff8, NAN(dVar3))) {
            if ((0.0 < dVar3) && (30.0 < DAT_14c866ff8 - dVar3)) {
              dVar30 = -1.0;
              goto LAB_143e853fa;
            }
          }
          else {
LAB_143e853fa:
            *(double *)(param_2 + 0x20) = dVar30;
          }
          (**(code **)(*plVar6 + 0x2a0))(plVar6);
          *(byte *)((longlong)plVar6 + 0xbc) = *(byte *)((longlong)plVar6 + 0xbc) & 0xdf;
          plVar6[8] = (longlong)(DAT_14c866ff8 + 30.0);
          goto LAB_143e8544b;
        }
      }
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    if (lVar13 == 0) goto LAB_143e8544b;
    if (DAT_14cb0b430 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = (code *)&LAB_145892f94;
      local_b8 = &LAB_147d6dbf3;
      local_c0 = &LAB_1464081e0;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000001;
      local_e0 = 8;
      local_e8 = (code **)CONCAT44(local_e8._4_4_,0x138);
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    if ((((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30)) ||
        ((*(uint *)(lVar13 + 8) >> 0x1e & 1) != 0)) ||
       (cVar8 = FUN_1417f3ca2(lVar13), cVar8 != '\0')) goto LAB_143e8544b;
    lVar13 = *(longlong *)(lVar13 + 0x128);
    if (*(int *)(lVar13 + 8) == -1) {
      *(undefined1 *)(lVar13 + 0x18) = 1;
      uVar26 = 0;
      FUN_140308182(lVar13,0);
      goto LAB_143e852dd;
    }
    lVar28 = *(longlong *)(lVar13 + 0x10);
    if (lVar28 == 0) {
      lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar28 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar9 != 2) {
          if (iVar9 != 1) goto LAB_143e8548d;
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143e85496;
          goto LAB_143e855f7;
        }
      }
      else {
LAB_143e8548d:
        if (iVar9 != 0x10) {
LAB_143e855f7:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar28 + 0xc60), iVar9 == 2))
            goto LAB_143e85496;
            if (iVar9 == 1) {
              DVar11 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              if (DVar11 == DVar12) goto LAB_143e85496;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar16 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar18 = (uint *)*puVar16;
            if (puVar18 != (uint *)0x0) goto LAB_143e85741;
            while( true ) {
              uVar20 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar20 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar20 | 1;
                __tlregdtor(&LAB_143e8d541);
              }
              lVar28 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar17 = *(undefined4 **)(lVar28 + 0x310);
              *(undefined8 *)(lVar28 + 0x310) = 0;
              if (puVar17 == (undefined4 *)0x0) {
                puVar17 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar17 = 0xffffffff;
              *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar16 = puVar17;
              FUN_140217a48(puVar16);
              puVar18 = (uint *)*puVar16;
LAB_143e85741:
              puVar27 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar24 = (uint *)(puVar27 + 0x16);
              uVar20 = puVar18[0x12];
              if (puVar24 <= puVar18 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
                LOCK();
                uVar2 = *puVar18;
                *puVar18 = *puVar18 + uVar20 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar20) != 0xffffffff) break;
                puVar18 = (uint *)*puVar16;
                *puVar18 = 0xffffffff;
                *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
                puVar18[0x12] = 0;
                *puVar16 = puVar18;
                puVar27 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
                puVar24 = (uint *)(puVar27 + 0x16);
                uVar20 = 0;
                if (puVar24 <= puVar18 + 0x4000) {
                  uVar20 = 1;
                  goto LAB_143e857c1;
                }
              }
            }
            uVar20 = uVar20 + 1;
LAB_143e857c1:
            *(uint **)(puVar18 + 0x10) = puVar24;
            puVar18[0x12] = uVar20;
            iVar9 = 0;
            FUN_1447247dc(puVar27,0);
            *puVar27 = &PTR_FUN_14b4532f8;
            puVar27[0x15] = lVar13;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar20 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
                uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
                iVar9 = 0;
              }
              else {
                uVar26 = 2;
              }
            }
            else {
              iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                      *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar26 = 5;
            }
            if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
            }
            puVar27[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar27[9] = puVar27;
            puVar27[10] = puVar27;
            lVar13 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar13 == 0) {
              uVar7 = 1;
              if ((char)uVar26 != '\x06') {
                uVar7 = uVar26;
              }
              uVar26 = uVar7;
              uVar23 = 0;
            }
            else {
              if ((char)uVar26 == '\x06') {
                uVar26 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
              }
              uVar23 = *(undefined8 *)(lVar13 + 0x30);
            }
            puVar27[0xf] = uVar23;
            puVar27[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar27 + 0x1c) = iVar9;
            if (puVar27 == (undefined8 *)0x0) {
              local_78 = (code *)CONCAT71(local_78._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
              UNLOCK();
              local_78 = (code *)CONCAT71(local_78._1_7_,1);
              FUN_1447439e4(puVar27);
              LOCK();
              piVar1 = (int *)(puVar27 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar27)(puVar27,1);
              }
            }
          }
          else {
            local_e8 = &local_78;
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14b4532b0;
            local_78 = (code *)&LAB_143e8e570;
            local_50 = lVar13;
            FUN_14005a792(&DAT_14ca9a440,L"UpdateTextureRHI",&DAT_14cb90cac);
            if (local_78 != (code *)0x0) {
              pppuVar21 = local_68;
              if (local_68 == (undefined ***)0x0) {
                pppuVar21 = &local_58;
              }
              (*(code *)(*pppuVar21)[2])();
            }
          }
          goto LAB_143e8544b;
        }
      }
LAB_143e85496:
      FUN_1447fd100(lVar13,&DAT_14ca85100);
      goto LAB_143e8544b;
    }
    lVar13 = 0;
    if (*(char *)(lVar28 + 0x52) == '\0') {
      lVar13 = lVar28;
    }
    plVar6 = (longlong *)(param_2 + 0x30);
    lVar28 = *(longlong *)(param_2 + 0x30);
    if (lVar28 != lVar13) {
      *plVar6 = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      if (lVar28 != 0) {
        LOCK();
        puVar18 = (uint *)(lVar28 + 8);
        uVar20 = *puVar18;
        *puVar18 = *puVar18 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar18 = (uint *)(lVar28 + 8);
          LOCK();
          uVar20 = *puVar18;
          *puVar18 = *puVar18 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar28 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = lVar28;
            plVar19 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar19;
                LOCK();
                bVar29 = plVar19 != DAT_14ca843c0;
                plVar15 = plVar14;
                if (bVar29) {
                  plVar19 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar14 = (longlong)plVar15;
                LOCK();
                bVar29 = plVar15 != DAT_14ca843c8;
                plVar19 = plVar14;
                if (bVar29) {
                  plVar15 = DAT_14ca843c8;
                  plVar19 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar19;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
      lVar28 = *plVar6;
    }
    if ((lVar28 == 0) ||
       ((*(uint *)(lVar28 + 8) & 0x3fffffff) == 0 ||
        ((byte)(*(uint *)(lVar28 + 8) >> 0x1e) & 1) != 0)) goto LAB_143e8544b;
    iVar9 = *(int *)(param_2 + 0x38);
    if (iVar9 == 0) {
      lVar28 = *(longlong *)(param_2 + 0x28);
      if (lVar28 == 0) {
LAB_143e85ccc:
        lVar28 = 0;
      }
      else {
        if (DAT_14cb0b4f0 == 0) {
          local_b0 = &local_78;
          local_78 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = (code *)&LAB_14580b774;
          local_b8 = &LAB_147d6e27b;
          local_c0 = &LAB_140307be8;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000000;
          local_e0 = 8;
          local_e8 = (code **)CONCAT44(local_e8._4_4_,0x158);
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cb0b4f0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) != DAT_14cb0b4f0 + 0x30))
        goto LAB_143e85ccc;
      }
      uVar23 = *(undefined8 *)(param_2 + 0x50);
      uVar22 = *(undefined8 *)(param_2 + 0x60);
      lVar13 = 0;
LAB_143e851a6:
      FUN_143e84706(uVar23,uVar22,lVar28,lVar13);
    }
    else if (iVar9 == 2) {
      lVar13 = *(longlong *)(param_2 + 0x28);
      if (lVar13 == 0) {
LAB_143e85ed1:
        lVar13 = 0;
      }
      else {
        if (DAT_14cb0b9a0 == 0) {
          local_b0 = &local_78;
          local_78 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = (code *)&LAB_146408884;
          local_b8 = &LAB_147d719e1;
          local_c0 = &LAB_140fb41fe;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000000;
          local_e0 = 8;
          local_e8 = (code **)CONCAT44(local_e8._4_4_,0x168);
          FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
        }
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) != DAT_14cb0b9a0 + 0x30))
        goto LAB_143e85ed1;
      }
      FUN_145c6aac8(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x60),lVar13);
    }
    else if (iVar9 == 1) {
      lVar13 = param_2 + 0x3c;
      lVar28 = *(longlong *)(param_2 + 0x28);
      if (lVar28 == 0) {
LAB_143e85ebb:
        lVar28 = 0;
      }
      else {
        if (DAT_14cb0b4f0 == 0) {
          local_b0 = &local_78;
          local_78 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = (code *)&LAB_14580b774;
          local_b8 = &LAB_147d6e27b;
          local_c0 = &LAB_140307be8;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000000;
          local_e0 = 8;
          local_e8 = (code **)CONCAT44(local_e8._4_4_,0x158);
          FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        }
        if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cb0b4f0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) != DAT_14cb0b4f0 + 0x30))
        goto LAB_143e85ebb;
      }
      uVar23 = *(undefined8 *)(param_2 + 0x50);
      uVar22 = *(undefined8 *)(param_2 + 0x60);
      goto LAB_143e851a6;
    }
    puVar16 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    *puVar16 = 0;
    puVar16[1] = 0;
    *(undefined4 *)(puVar16 + 2) = 0;
    puVar16[3] = 0;
    puVar16[4] = 0;
    *(undefined4 *)(puVar16 + 5) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 1;
    *(undefined2 *)((longlong)puVar16 + 0x34) = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x4c) = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x61) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x69) = 0;
    FUN_140056680(puVar16 + 0xf,L"Dummy Texture");
    *(undefined1 *)(puVar16 + 0x11) = 0;
    puVar16[4] = &DAT_100000001;
    iVar9 = *(int *)(param_2 + 0x38);
    lVar13 = *(longlong *)(param_2 + 0x28);
    local_80 = puVar16;
    if (lVar13 == 0) {
LAB_143e85cc4:
      lVar13 = 0;
    }
    else {
      if (DAT_14cb0b430 == 0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = (code *)&LAB_145892f94;
        local_b8 = &LAB_147d6dbf3;
        local_c0 = &LAB_1464081e0;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000001;
        local_e0 = 8;
        local_e8 = (code **)CONCAT44(local_e8._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      }
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30))
      goto LAB_143e85cc4;
    }
    local_e8 = (code **)CONCAT71(local_e8._1_7_,iVar9 == 1);
    FUN_143e78ef4(puVar16,*(undefined8 *)(param_2 + 0x60),lVar13,plVar6);
    *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0x38) = puVar16;
    if (*(int *)(param_2 + 0x38) == 2) {
      FUN_14475cc44(param_2,&local_78);
      pcVar25 = local_78;
      if (local_70 == 0) {
        pcVar25 = (code *)&DAT_149dfb77a;
      }
      FUN_140056680(local_90,pcVar25);
      uVar10 = FUN_145ca1d64(local_90);
      *(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x18) = uVar10;
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14656486a(puVar16,&local_78,*(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x18));
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140596b32(&local_80);
    puVar16 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      FUN_14058c1a6(local_80);
      FUN_1400020a8(puVar16);
    }
    (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x50));
    lVar13 = *param_3;
    uVar23 = 0;
  }
  (**(code **)(lVar13 + 0x40))(param_3,uVar23);
  uVar26 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_143e852dd:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar26 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e85eda FUN_143e85eda body=2189 status=ok
// SIG undefined FUN_143e85eda(void)

void FUN_143e85eda(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  HANDLE pvVar4;
  undefined8 *puVar5;
  void *_Src;
  longlong *plVar6;
  char cVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_128;
  longlong *local_120;
  LPCRITICAL_SECTION local_110;
  int local_104;
  uint *local_100;
  LPCRITICAL_SECTION local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 **local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  undefined8 *local_98;
  int local_90;
  undefined8 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = (LPCRITICAL_SECTION)(param_1 + 0x11);
  EnterCriticalSection(local_110);
  FUN_141525a7e(param_1[0x20],(int)param_1[0x21]);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_1489d6134(param_1 + 0x20);
  }
  if ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4)) {
    iVar17 = (int)param_1[0x1b];
    if (iVar17 == 0) {
      uVar21 = 1;
      uVar22 = 0;
      iVar19 = 0;
      iVar16 = 0;
    }
    else {
      puVar12 = (uint *)param_1[0x1a];
      if ((uint *)param_1[0x1a] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x18);
      }
      uVar18 = *puVar12;
      if (uVar18 == 0) {
        iVar16 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar16 = iVar17 + -1;
        }
        uVar22 = 0;
        uVar21 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar21 = uVar22;
        }
        iVar19 = 0;
        do {
          if (uVar21 == uVar22) goto LAB_143e860db;
          iVar19 = iVar19 + 0x20;
          uVar18 = puVar12[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar22 = 0;
        iVar19 = 0;
      }
      uVar21 = (ulonglong)(-uVar18 & uVar18);
      uVar23 = uVar21 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar16 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar16) {
        iVar16 = iVar17;
      }
    }
    if (iVar16 < iVar17) {
      uVar18 = 0xffffffff;
      do {
        lVar14 = (longlong)iVar16 * 0x88 + param_1[0x16];
        cVar7 = (**(code **)(*param_1 + 0xa8))(param_1,lVar14 + 8,*(undefined8 *)(lVar14 + 0x78));
        if (cVar7 != '\0') {
          FUN_140c2075c(param_1 + 0x16,iVar16);
        }
        uVar18 = uVar18 & ~(uint)uVar21;
        puVar12 = (uint *)param_1[0x1a];
        if ((uint *)param_1[0x1a] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x18);
        }
        iVar17 = (int)param_1[0x1b];
        iVar16 = (int)uVar22;
        lVar14 = (longlong)iVar16;
        uVar9 = puVar12[lVar14] & uVar18;
        if (uVar9 == 0) {
          iVar10 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar10 = iVar17 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar16) {
            iVar11 = iVar16;
          }
          if (iVar10 <= iVar16) break;
          lVar15 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar9 = puVar12[lVar14 + lVar15 + 1];
            if (uVar9 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar11 - lVar14 == lVar15) goto LAB_143e860db;
          }
          uVar22 = (ulonglong)(iVar16 + (int)lVar15 + 1);
          uVar18 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar9 & uVar9);
        uVar23 = uVar21 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar16 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar17);
    }
  }
LAB_143e860db:
  LeaveCriticalSection(local_110);
  local_f8 = (LPCRITICAL_SECTION)(param_1 + 0xc);
  EnterCriticalSection(local_f8);
  puVar12 = (uint *)(param_1 + 4);
  uVar18 = *(uint *)(param_1 + 7);
  uVar21 = (ulonglong)uVar18;
  if (uVar18 == 0) {
    uVar23 = 1;
    uVar22 = 0;
    iVar17 = 0;
    uVar9 = 0;
  }
  else {
    puVar8 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar8 = puVar12;
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar17 = uVar18 + 0x1e;
      if (-1 < (int)(uVar18 - 1)) {
        iVar17 = uVar18 - 1;
      }
      uVar22 = 0;
      uVar23 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar23 = uVar22;
      }
      iVar17 = 0;
      do {
        if (uVar23 == uVar22) goto LAB_143e86184;
        iVar17 = iVar17 + 0x20;
        uVar9 = puVar8[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar22 = 0;
      iVar17 = 0;
    }
    uVar23 = (ulonglong)(-uVar9 & uVar9);
    uVar3 = uVar23 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar9 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar18 <= (int)uVar9) {
      uVar9 = uVar18;
    }
  }
  if (uVar9 != uVar18) {
    uVar20 = 0xffffffff;
    local_100 = puVar12;
    local_f0 = uVar21;
    do {
      lVar14 = param_1[2];
      lVar24 = (longlong)(int)uVar9 * 0x20;
      lVar15 = *(longlong *)(lVar14 + 8 + lVar24);
      if (*(longlong *)(lVar15 + 0x30) == 0) {
        local_110 = (LPCRITICAL_SECTION)(lVar14 + lVar24);
        uVar13 = *(undefined4 *)(lVar14 + lVar24);
        pvVar4 = local_110->OwningThread;
        if (pvVar4 != (HANDLE)0x0) {
          LOCK();
          *(int *)((longlong)pvVar4 + 8) = *(int *)((longlong)pvVar4 + 8) + 1;
          UNLOCK();
        }
        local_d8 = (undefined8 *)0x0;
        local_d0 = 0;
        local_104 = iVar17;
        FUN_1446efa72(&local_d8,0,4,0x10);
        local_d0 = 4;
        *local_d8 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar24 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar24 == 0) {
          LOCK();
          UNLOCK();
          lVar24 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_d8[2] = lVar24;
        *local_d8 = &PTR_FUN_14b453370;
        local_d8[3] = param_1;
        *(undefined4 *)(local_d8 + 4) = uVar13;
        local_d8[5] = lVar15;
        local_d8[6] = pvVar4;
        lVar14 = FUN_14050fd64();
        puVar5 = *(undefined8 **)&local_110->LockCount;
        local_88 = (undefined8 *)0x0;
        iStack_80 = 0;
        FUN_14009d848(&local_88,&local_d8);
        local_98 = local_88;
        local_90 = iStack_80;
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_88 = (undefined8 *)*puVar5;
        iStack_80 = *(int *)(puVar5 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
        local_78 = (void *)0x0;
        local_70 = *(int *)(puVar5 + 3);
        lVar15 = (longlong)local_70;
        _Src = (void *)puVar5[2];
        if (lVar15 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar15 * 2);
        }
        puVar12 = local_100;
        local_c8 = &local_88;
        local_c0 = local_68;
        FUN_140a1e2b2(&local_b8,&local_c8);
        local_120 = local_a8;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0xfa;
        FUN_140421d62(lVar14 + 0x1e8,&local_e8,&local_b8,&local_98);
        FUN_140861e20(local_b8,local_b0);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_90 == 0) {
LAB_143e864c9:
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_98 != (undefined8 *)0x0) {
          (**(code **)*local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
          goto LAB_143e864c9;
        }
        plVar1 = local_e0;
        iVar17 = local_104;
        lVar14 = *(longlong *)&local_110->LockCount;
        if ((undefined8 *)(lVar14 + 0x30) == &local_e8) {
LAB_143e86565:
          plVar1 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_e0 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        else {
          *(undefined8 *)(lVar14 + 0x30) = local_e8;
          local_e8 = 0;
          plVar6 = *(longlong **)(lVar14 + 0x38);
          if (local_e0 == plVar6) goto LAB_143e86565;
          local_e0 = (longlong *)0x0;
          *(longlong **)(lVar14 + 0x38) = plVar1;
          if (plVar6 != (longlong *)0x0) {
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
            goto LAB_143e86565;
          }
        }
        uVar21 = local_f0;
        if (local_d0 == 0) {
LAB_143e865e5:
          if (local_d8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_d8 != (undefined8 *)0x0) {
          (**(code **)*local_d8)(local_d8,0);
          FUN_1446efa72(&local_d8,0,0,0x10);
          local_d0 = 0;
          goto LAB_143e865e5;
        }
        uVar18 = *(uint *)(param_1 + 7);
      }
      uVar20 = uVar20 & ~(uint)uVar23;
      puVar8 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar8 = puVar12;
      }
      iVar16 = (int)uVar22;
      lVar14 = (longlong)iVar16;
      uVar9 = puVar8[lVar14] & uVar20;
      if (uVar9 == 0) {
        iVar19 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar19 = uVar18 - 1;
        }
        iVar19 = iVar19 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar10 = iVar19;
        if (iVar19 < iVar16) {
          iVar10 = iVar16;
        }
        if (iVar16 < iVar19) {
          lVar15 = 0;
          do {
            uVar9 = puVar8[lVar14 + lVar15 + 1];
            if (uVar9 != 0) {
              uVar22 = (ulonglong)(iVar16 + (int)lVar15 + 1);
              uVar20 = 0xffffffff;
              goto LAB_143e8666e;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar20 = 0xffffffff;
          lVar14 = (longlong)iVar10;
        }
        uVar22 = lVar14 + 1U & 0xffffffff;
        uVar9 = uVar18;
      }
      else {
LAB_143e8666e:
        uVar23 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar23 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar9 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 <= (int)uVar9) {
          uVar9 = uVar18;
        }
      }
    } while (uVar9 != (uint)uVar21);
  }
LAB_143e86184:
  LeaveCriticalSection(local_f8);
  FUN_143e86768(param_1 + 0x2c);
  lVar14 = param_1[0x42];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0x88));
  lVar15 = *(longlong *)(lVar14 + 0x78);
  iVar17 = *(int *)(lVar14 + 0x80);
  uVar13 = 0;
  if ((longlong)iVar17 != 0) {
    lVar24 = 0;
    do {
      FUN_1489d31a8(lVar14,*(undefined4 *)(lVar15 + 0x10 + lVar24),
                    *(undefined4 *)(lVar15 + 0x14 + lVar24));
      lVar24 = lVar24 + 0x18;
    } while ((longlong)iVar17 * 0x18 != lVar24);
    uVar13 = *(undefined4 *)(lVar14 + 0x80);
    lVar15 = *(longlong *)(lVar14 + 0x78);
  }
  iVar17 = *(int *)(lVar14 + 0x84);
  FUN_141525aa6(lVar15,uVar13);
  *(undefined4 *)(lVar14 + 0x80) = 0;
  if ((iVar17 < 0) && (*(int *)(lVar14 + 0x84) != 0)) {
    FUN_1489da594(lVar14 + 0x78);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar14 + 0x88));
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e86768 FUN_143e86768 body=534 status=ok
// SIG undefined FUN_143e86768(void)

void FUN_143e86768(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_90 = &local_70;
    local_70 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_14081d0ea;
    local_98 = &LAB_1489c8acb;
    local_a0 = &LAB_146027b0e;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000006;
    local_c0 = 8;
    local_c8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar6 = DAT_14cb907b8;
  lVar5 = DAT_14cb907b8[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar5 = plVar6[0x22];
  }
  if (*(char *)(lVar5 + 0xb0) != '\x01') goto LAB_143e867f9;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_143e8693c;
      }
LAB_143e867f9:
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
      plVar6 = *(longlong **)(param_1 + 0x60);
      if (plVar6 != (longlong *)0x0) {
        do {
          if (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) break;
          lVar5 = *plVar6;
          if (lVar5 != 0) {
            cVar2 = FUN_1489cda40(param_1,lVar5,*(undefined8 *)(lVar5 + 0x28),
                                  *(undefined8 *)(lVar5 + 0x20));
            if (cVar2 == '\0') {
              (**(code **)(**(longlong **)(*plVar6 + 0x20) + 0x40))
                        (*(longlong **)(*plVar6 + 0x20),1);
            }
          }
          FUN_1489cf1f0(param_1 + 0x50,plVar6);
          plVar6 = *(longlong **)(param_1 + 0x60);
        } while (plVar6 != (longlong *)0x0);
      }
      if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143e86883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_143e8693c:
  local_58 = 0;
  local_48 = &PTR_LAB_14b4535c0;
  local_68 = &LAB_143e8f3ba;
  local_40 = param_1;
  FUN_1407461b0(0xff);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 143e86992 FUN_143e86992 body=2613 status=ok
// SIG undefined FUN_143e86992(void)

void FUN_143e86992(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  uint *puVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_1d8 [40];
  uint *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  uint *local_198;
  longlong local_190;
  ulonglong local_188;
  longlong local_180;
  longlong *local_178;
  LPCRITICAL_SECTION local_170;
  longlong local_168;
  undefined **local_160;
  double local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  double local_120;
  double local_118;
  undefined4 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((((DAT_14cb90e00 == 0) || (DAT_14cb90e08 == 0)) || (*(int *)(DAT_14cb90e08 + 8) < 1)) ||
     ((*(longlong *)(*(longlong *)(param_1 + 0x220) + 8) == 0 ||
      (lVar23 = *(longlong *)(param_1 + 0x280), lVar23 == 0)))) goto LAB_143e86f76;
  lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x140);
  if (((lVar24 != 0) &&
      ((lVar24 = *(longlong *)(lVar24 + 0x68), lVar24 != 0 && (*(char *)(param_1 + 0x288) == '\0')))
      ) && (*(char *)(param_1 + 0x1df) == '\0')) {
    local_160 = (undefined **)0x14b451fc6;
    local_158 = (double)CONCAT35(local_158._5_3_,0xc);
    uVar9 = FUN_14001a6c0(&local_160,1);
    FUN_14016d8b0(lVar23,uVar9,lVar24);
    *(undefined1 *)(param_1 + 0x288) = 1;
  }
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x28) + 0xa0))
                 (*(longlong *)(param_1 + 0x1e8) + 0x28);
  EnterCriticalSection(lpCriticalSection);
  local_190 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x168);
  if (local_190 == 0) {
LAB_143e86ad3:
    local_190 = 0;
  }
  else {
    lVar23 = FUN_145b12c34();
    if ((*(int *)(*(longlong *)(local_190 + 0x10) + 0x38) < *(int *)(lVar23 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_190 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar23 + 0x38) * 8) != lVar23 + 0x30)) goto LAB_143e86ad3;
  }
  plVar14 = (longlong *)
            (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x28) + 0xa8))
                      (*(longlong *)(param_1 + 0x1e8) + 0x28);
  uVar21 = *(uint *)(plVar14 + 5);
  local_180 = param_2;
  local_170 = lpCriticalSection;
  local_168 = param_1;
  if (uVar21 == 0) {
    uVar27 = 1;
    uVar26 = 0;
    uVar15 = 0;
    iVar22 = 0;
  }
  else {
    puVar16 = (uint *)plVar14[4];
    if ((uint *)plVar14[4] == (uint *)0x0) {
      puVar16 = (uint *)(plVar14 + 2);
    }
    uVar10 = *puVar16;
    if (uVar10 == 0) {
      iVar22 = uVar21 + 0x1e;
      if (-1 < (int)(uVar21 - 1)) {
        iVar22 = uVar21 - 1;
      }
      uVar26 = 0;
      uVar15 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar15 = uVar26;
      }
      iVar22 = 0;
      do {
        if (uVar15 == uVar26) goto LAB_143e86b90;
        iVar22 = iVar22 + 0x20;
        uVar10 = puVar16[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar26 = 0;
      iVar22 = 0;
    }
    uVar27 = (ulonglong)(-uVar10 & uVar10);
    uVar15 = uVar27 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar10 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar21 <= (int)uVar10) {
      uVar10 = uVar21;
    }
    uVar15 = (ulonglong)uVar10;
  }
  if ((uint)uVar15 != uVar21) {
    local_178 = (longlong *)(local_190 + 0x158);
    uVar10 = 0xffffffff;
    local_1a0 = (ulonglong)uVar21;
    local_1b0 = (uint *)(plVar14 + 2);
    local_1a8 = plVar14;
    local_188 = (ulonglong)uVar21;
    do {
      plVar14 = local_178;
      local_198 = (uint *)CONCAT44(local_198._4_4_,uVar10);
      lVar23 = *local_1a8;
      lVar24 = (longlong)(int)uVar15 * 0xf0;
      iVar13 = *(int *)(lVar23 + lVar24 + 0x20);
      iVar20 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar20 = 0;
      }
      if (0 < iVar20) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
        } while (iVar20 != iVar13);
      }
      iVar13 = FUN_1489d79e4(local_178);
      if (iVar13 != -1) {
        if ((*plVar14 + (longlong)iVar13 * 0x68 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar23 = lVar23 + lVar24;
          lVar24 = *plVar14 + (longlong)iVar13 * 0x68;
          *(undefined4 *)(lVar24 + 0x38) = *(undefined4 *)(lVar23 + 0xc0);
          *(undefined4 *)(lVar24 + 0x3c) = *(undefined4 *)(lVar23 + 0xc4);
          *(undefined4 *)(lVar24 + 0x40) = *(undefined4 *)(lVar23 + 200);
          *(undefined8 *)(lVar24 + 0x44) = *(undefined8 *)(lVar23 + 0xcc);
          *(undefined8 *)(lVar24 + 0x4c) = *(undefined8 *)(lVar23 + 0x68);
          *(undefined8 *)(lVar24 + 0x54) = *(undefined8 *)(lVar23 + 0x70);
          local_1a0 = (ulonglong)*(uint *)(local_1a8 + 5);
        }
      }
      uVar10 = (uint)local_198 & ~(uint)uVar27;
      puVar16 = (uint *)local_1a8[4];
      if ((uint *)local_1a8[4] == (uint *)0x0) {
        puVar16 = local_1b0;
      }
      iVar20 = (int)uVar26;
      lVar23 = (longlong)iVar20;
      uVar21 = puVar16[lVar23] & uVar10;
      iVar13 = (int)local_1a0;
      if (uVar21 == 0) {
        iVar11 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar11 = iVar13 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar20) {
          iVar12 = iVar20;
        }
        if (iVar20 < iVar11) {
          lVar24 = 0;
          do {
            uVar21 = puVar16[lVar23 + lVar24 + 1];
            if (uVar21 != 0) {
              uVar26 = (ulonglong)(iVar20 + (int)lVar24 + 1);
              uVar10 = 0xffffffff;
              goto LAB_143e86e06;
            }
            iVar22 = iVar22 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar12 - lVar23 != lVar24);
          uVar10 = 0xffffffff;
          iVar20 = iVar12;
        }
        uVar15 = local_1a0 & 0xffffffff;
        uVar26 = (ulonglong)(iVar20 + 1);
      }
      else {
LAB_143e86e06:
        uVar27 = (ulonglong)(-uVar21 & uVar21);
        uVar15 = uVar27 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar21 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        uVar15 = (ulonglong)uVar21;
        if (iVar13 <= (int)uVar21) {
          uVar15 = local_1a0 & 0xffffffff;
        }
      }
    } while ((int)uVar15 != (int)local_188);
  }
LAB_143e86b90:
  uVar21 = *(uint *)(local_190 + 0x180);
  if (uVar21 == 0) {
    uVar15 = 1;
    uVar27 = 0;
    iVar22 = 0;
    uVar10 = 0;
  }
  else {
    puVar16 = *(uint **)(local_190 + 0x178);
    if (*(uint **)(local_190 + 0x178) == (uint *)0x0) {
      puVar16 = (uint *)(local_190 + 0x168);
    }
    uVar10 = *puVar16;
    if (uVar10 == 0) {
      iVar22 = uVar21 + 0x1e;
      if (-1 < (int)(uVar21 - 1)) {
        iVar22 = uVar21 - 1;
      }
      uVar27 = 0;
      uVar15 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar15 = uVar27;
      }
      iVar22 = 0;
      do {
        if (uVar15 == uVar27) goto LAB_143e86e6e;
        iVar22 = iVar22 + 0x20;
        uVar10 = puVar16[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar27 = 0;
      iVar22 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar26 = uVar15 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar10 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar21 <= (int)uVar10) {
      uVar10 = uVar21;
    }
  }
  if (uVar10 != uVar21) {
    local_1b0 = (uint *)(local_190 + 0x1a8);
    uVar25 = 0xffffffff;
    local_1a8 = (longlong *)(ulonglong)uVar21;
    local_198 = (uint *)(local_190 + 0x168);
    do {
      puVar16 = local_1b0;
      local_1a0 = CONCAT44(local_1a0._4_4_,uVar25);
      puVar1 = (undefined8 *)(*(longlong *)(local_190 + 0x158) + (longlong)(int)uVar10 * 0x68);
      iVar13 = *(int *)(*(longlong *)(local_190 + 0x158) + 8 + (longlong)(int)uVar10 * 0x68);
      iVar20 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar20 = 0;
      }
      uVar26 = 0;
      if (0 < iVar20) {
        puVar18 = &DAT_149dfb77a;
        if (iVar13 != 0) {
          puVar18 = (undefined2 *)*puVar1;
        }
        lVar23 = 0;
        uVar26 = 0;
        do {
          uVar21 = ((uint)(0x19 < (ushort)puVar18[lVar23] - 0x61) * 0x20 +
                   (uint)(ushort)puVar18[lVar23]) - 0x20;
          uVar10 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar21) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar10 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
          lVar23 = lVar23 + 1;
        } while (iVar20 != (int)lVar23);
      }
      iVar13 = FUN_146855b16(local_1b0,uVar26,puVar1);
      puVar7 = local_198;
      if ((iVar13 == -1) ||
         (lVar23 = (longlong)iVar13 * 0x20 + *(longlong *)puVar16, pcVar19 = (char *)(lVar23 + 0x10)
         , pcVar19 == (char *)0x0 || lVar23 == 0)) {
        lVar23 = puVar1[2];
joined_r0x000143e870cc:
        if ((((lVar23 != 0) && (plVar14 = (longlong *)puVar1[3], plVar14 != (longlong *)0x0)) &&
            (plVar14[0x49] != 0)) && (cVar8 = FUN_140432338(plVar14), cVar8 != '\0')) {
          fVar2 = *(float *)(puVar1 + 7);
          fVar3 = *(float *)((longlong)puVar1 + 0x3c);
          fVar4 = *(float *)(puVar1 + 9);
          fVar5 = *(float *)((longlong)puVar1 + 0x44);
          local_e0 = (**(code **)(*plVar14 + 0x2f0))(plVar14);
          dVar6 = (double)(fVar3 + 0.0);
          local_158 = (double)(fVar2 + 0.0);
          uStack_150 = SUB81(dVar6,0);
          uStack_14f = (undefined7)((ulonglong)dVar6 >> 8);
          local_138 = 0;
          uStack_148 = 0;
          uStack_140 = 0;
          local_130 = &DAT_3f8000003f800000;
          puStack_128 = &DAT_3f8000003f800000;
          local_160 = &PTR_FUN_14aaeb770;
          local_110 = 0x3f800000;
          local_e8 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_c0 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
          uStack_b8 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
          uStack_144 = 9;
          local_f0 = (double)*(float *)(puVar1 + 10);
          local_f8 = (double)*(float *)((longlong)puVar1 + 0x4c);
          dStack_100 = (double)*(float *)(puVar1 + 0xb);
          local_108 = (double)*(float *)((longlong)puVar1 + 0x54);
          lVar23 = *(longlong *)(local_180 + 0x2e0);
          local_120 = (double)fVar5;
          local_118 = (double)fVar4;
          FUN_1405054c0(&local_160,lVar23);
          if (*(int *)(lVar23 + 0xac) == 1) {
            FUN_14376e4da(lVar23,0);
          }
        }
      }
      else if (*pcVar19 == '\x01') {
        lVar23 = puVar1[2];
        goto joined_r0x000143e870cc;
      }
      uVar25 = (uint)local_1a0 & ~(uint)uVar15;
      puVar16 = *(uint **)(local_190 + 0x178);
      if (*(uint **)(local_190 + 0x178) == (uint *)0x0) {
        puVar16 = puVar7;
      }
      uVar21 = *(uint *)(local_190 + 0x180);
      iVar13 = (int)uVar27;
      lVar23 = (longlong)iVar13;
      uVar10 = puVar16[lVar23] & uVar25;
      if (uVar10 == 0) {
        iVar20 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar20 = uVar21 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar11 = iVar20;
        if (iVar20 < iVar13) {
          iVar11 = iVar13;
        }
        if (iVar13 < iVar20) {
          lVar24 = 0;
          do {
            uVar10 = puVar16[lVar23 + lVar24 + 1];
            if (uVar10 != 0) {
              uVar27 = (ulonglong)(iVar13 + (int)lVar24 + 1);
              uVar25 = 0xffffffff;
              goto LAB_143e87310;
            }
            iVar22 = iVar22 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar11 - lVar23 != lVar24);
          uVar25 = 0xffffffff;
          iVar13 = iVar11;
        }
        uVar27 = (ulonglong)(iVar13 + 1);
        uVar10 = uVar21;
      }
      else {
LAB_143e87310:
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar26 = uVar15 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar10 = (iVar22 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar21 <= (int)uVar10) {
          uVar10 = uVar21;
        }
      }
    } while (uVar10 != (uint)local_1a8);
  }
LAB_143e86e6e:
  if (local_170 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_170);
  }
  lVar24 = local_168;
  lVar23 = local_180;
  if (((*(longlong *)(local_168 + 0x1a8) != 0) && (lVar17 = FUN_1447b4020(), lVar17 != 0)) &&
     (*(char *)(lVar24 + 0x1df) == '\0')) {
    iVar22 = *(int *)(*(longlong *)(lVar24 + 0x1a8) + 0x144);
    iVar13 = *(int *)(*(longlong *)(lVar24 + 0x1a8) + 0x140);
    local_e0 = (**(code **)(**(longlong **)(lVar24 + 0x280) + 0x2f0))();
    local_138 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    local_158 = 0.0;
    uStack_150 = 0;
    uStack_14f = 0;
    local_130 = &DAT_3f8000003f800000;
    puStack_128 = &DAT_3f8000003f800000;
    local_160 = &PTR_FUN_14aaeb770;
    local_110 = 0x3f800000;
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_f8 = 1.0;
    local_e8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    uStack_b8 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    uStack_144 = 9;
    local_f0 = 1.0;
    lVar23 = *(longlong *)(lVar23 + 0x2e0);
    local_120 = (double)iVar13;
    local_118 = (double)iVar22;
    FUN_1405054c0(&local_160,lVar23);
    if (*(int *)(lVar23 + 0xac) == 1) {
      FUN_14376e4da(lVar23,0);
    }
  }
LAB_143e86f76:
  if ((local_b0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e873c8 FUN_143e873c8 body=437 status=ok
// SIG undefined FUN_143e873c8(void)

void FUN_143e873c8(longlong param_1,longlong *param_2,undefined1 param_3,byte param_4,
                  undefined1 param_5,byte param_6,byte param_7,undefined1 param_8)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  int iVar6;
  
  plVar1 = (longlong *)(param_1 + 0x4f0);
  iVar6 = *(int *)(param_1 + 0x4f8);
  iVar4 = (int)param_2[1];
  if (iVar6 == iVar4) {
    if (1 < iVar6) {
      lVar5 = 0;
      while( true ) {
        uVar2 = *(ushort *)(*plVar1 + lVar5);
        uVar3 = *(ushort *)(*param_2 + lVar5);
        if (uVar2 != uVar3) break;
        if (uVar2 == 0) goto LAB_143e874d2;
LAB_143e87438:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar2) < 0x80) {
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3]) goto LAB_143e87438;
        iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
      }
      else {
        iVar6 = (uint)uVar2 - (uint)uVar3;
      }
      if (iVar6 != 0) goto LAB_143e87478;
    }
  }
  else if (iVar6 + iVar4 != 1) {
LAB_143e87478:
    if (plVar1 != param_2) {
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0x4f8) = iVar4;
      if (*(int *)(param_1 + 0x4fc) == 0 && iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x4fc) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar4);
        if (iVar4 != 0) {
          memcpy((void *)*plVar1,_Src,(longlong)iVar4 * 2);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)(param_1 + 0x501);
  }
LAB_143e874d2:
  plVar1 = *(longlong **)(param_1 + 0x480);
  *(byte *)((longlong)plVar1 + 0x1b2) = param_4;
  *(byte *)(plVar1[0x15] + 0x38) = param_4 * '\x04' + '\x01';
  (**(code **)((ulonglong)(param_4 ^ 1) * 0x10 + 0x438 + *plVar1))(plVar1,plVar1[0x15]);
  lVar5 = *(longlong *)(param_1 + 0x480);
  *(undefined1 *)(lVar5 + 0x1dc) = param_3;
  *(byte *)(lVar5 + 0x1dd) = param_6 | param_7;
  *(undefined1 *)(lVar5 + 0x1de) = param_5;
  *(byte *)(lVar5 + 0x1df) = param_7;
  *(undefined1 *)(lVar5 + 0x1e0) = param_8;
  *(undefined1 *)(lVar5 + 0x1a0) = param_3;
  *(byte *)(lVar5 + 0x1b3) = param_6 | param_7;
  *(undefined1 *)(lVar5 + 0x1b1) = param_5;
  *(byte *)(lVar5 + 0x1b4) = param_7;
  *(undefined1 *)(lVar5 + 0x1b5) = param_8;
  return;
}



// FUNCTION 143e8757d FUN_143e8757d body=878 status=ok
// SIG undefined FUN_143e8757d(void)

longlong * FUN_143e8757d(undefined1 param_1,int param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *param_4;
  if (DAT_14cb0b9a0 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = (code *)&LAB_146408884;
    local_68 = &LAB_147d719e1;
    local_70 = &LAB_140fb41fe;
    local_78 = L"Engine";
    uStack_80 = 0;
    local_88 = CONCAT44(local_88._4_4_,0x10000000);
    local_90 = 8;
    local_98 = CONCAT44(local_98._4_4_,0x168);
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140af9fb2(&local_48,DAT_14c951640,DAT_14cb0b9a0,uVar2);
  if (DAT_14cb0b9a0 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = (code *)&LAB_146408884;
    local_68 = &LAB_147d719e1;
    local_70 = &LAB_140fb41fe;
    local_78 = L"Engine";
    uStack_80 = 0;
    local_88 = CONCAT44(local_88._4_4_,0x10000000);
    local_90 = 8;
    local_98 = CONCAT44(local_98._4_4_,0x168);
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_90 = local_90 & 0xffffff00;
  local_98 = 0;
  plVar5 = (longlong *)FUN_146567b9a(DAT_14c951640,DAT_14cb0b9a0,local_48,0x40);
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1489c8acb;
    local_70 = &LAB_146027b0e;
    local_78 = L"Engine";
    uStack_80 = 0;
    local_88 = CONCAT44(local_88._4_4_,0x10000006);
    local_90 = 8;
    local_98 = CONCAT44(local_98._4_4_,0x128);
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar3 = DAT_14cb907b8;
  plVar7 = (longlong *)DAT_14cb907b8[0x22];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    plVar7 = (longlong *)plVar3[0x22];
  }
  bVar4 = (**(code **)(*plVar7 + 0x2a0))(plVar7);
  cVar1 = *(char *)((longlong)plVar7 + 0x76);
  bVar6 = 6;
  if (cVar1 != '\x02') {
    bVar6 = cVar1 == '\x01' | 2;
  }
  *(byte *)((longlong)plVar5 + 0x15b) = bVar6;
  *(byte *)(plVar5 + 0x2c) = (cVar1 == '\x02') << 3 | 2;
  plVar5[0x29] = 0;
  plVar5[0x2a] = 0;
  *(undefined1 *)((longlong)plVar5 + 0xf1) = param_1;
  *(byte *)((longlong)plVar5 + 0xfe) = *(byte *)((longlong)plVar5 + 0xfe) & 0xfe | bVar4;
  *(byte *)((longlong)plVar5 + 0x15a) = *(byte *)((longlong)plVar5 + 0x15a) & 0xfc | bVar4 ^ 1 | 2;
  if (param_3 != 0 && param_2 != 0) {
    *(int *)(plVar5 + 0x28) = param_2;
    *(int *)((longlong)plVar5 + 0x144) = param_3;
  }
  (**(code **)(*plVar5 + 0x318))(plVar5);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e878ec FUN_143e878ec body=599 status=ok
// SIG undefined FUN_143e878ec(void)

void FUN_143e878ec(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1489cb7c8();
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) goto LAB_143e87a68;
  *(undefined1 *)(param_1 + 0x288) = 0;
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 == 0) {
    lVar3 = FUN_140007850(param_1 + 600);
    if (lVar3 != 0) {
      lVar4 = FUN_140a1dfd8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        *(longlong *)(param_1 + 0x278) = lVar3;
        goto LAB_143e87996;
      }
    }
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  else {
LAB_143e87996:
    uVar5 = FUN_14090ceee(lVar3,param_1,0);
    *(undefined8 *)(param_1 + 0x280) = uVar5;
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_c0 = &local_98;
      local_98 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1489c8acb;
      local_d0 = &LAB_146027b0e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000006;
      local_f0 = 8;
      local_f8 = (code **)CONCAT44(local_f8._4_4_,0x128);
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar2 = DAT_14cb907b8;
    plVar6 = (longlong *)DAT_14cb907b8[0x22];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
      plVar6 = (longlong *)plVar2[0x22];
    }
    uVar7 = (**(code **)(*plVar6 + 0x2a8))(plVar6,1);
    FUN_1446f470e(&local_a0,L"GammaCorrectionExponent",1);
    local_40 = local_a0;
    local_38 = 2;
    local_34 = 0xffffffff;
    local_f8 = &local_98;
    local_98 = (code *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_140042bb4(uVar5,&local_40,uVar7,0);
  }
  FUN_1489cf3a2(param_1);
LAB_143e87a68:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e87b44 FUN_143e87b44 body=472 status=ok
// SIG undefined FUN_143e87b44(void)

void FUN_143e87b44(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar9 = *(int *)(param_2 + 0x10) + -1;
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar9 = 0;
  }
  if (0 < iVar9) {
    iVar10 = 0;
    do {
      iVar10 = iVar10 + 1;
    } while (iVar9 != iVar10);
  }
  iVar9 = FUN_1489d79e4((longlong *)(param_1 + 0x130));
  lVar5 = DAT_14cb913f0;
  if (iVar9 != -1) {
    lVar11 = (longlong)iVar9 * 0x68 + *(longlong *)(param_1 + 0x130);
    plVar7 = (longlong *)(lVar11 + 0x10);
    if (((plVar7 != (longlong *)0x0 && lVar11 != 0) &&
        (*(int *)(lVar11 + 0x20) != *(int *)(param_2 + 0x20))) && (DAT_14cb913f0 != 0)) {
      if (*plVar7 != 0) {
        *plVar7 = 0;
      }
      uVar3 = *(undefined8 *)(lVar11 + 0x18);
      lVar4 = *(longlong *)(lVar5 + 0x3a0);
      plVar7 = *(longlong **)(lVar5 + 0x3a8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      uVar8 = FUN_143e9adf0(param_1,param_2,*(undefined8 *)(lVar4 + 8),param_3);
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
      local_58 = "UIHUDTexture";
      local_50 = 0xc;
      local_4c = 0;
      uVar6 = FUN_14001a6c0(&local_58,1);
      FUN_14016d8b0(uVar3,uVar6,uVar8);
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_2 + 0x20);
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
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e87d1e FUN_143e87d1e body=209 status=ok
// SIG undefined FUN_143e87d1e(void)

void FUN_143e87d1e(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  
  if (param_2 == 0) {
    uVar1 = FUN_1447210f0(param_1);
    lVar2 = FUN_1414fb874(uVar1,0);
    lVar2 = *(longlong *)(lVar2 + 0x440);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = FUN_145a85b7e();
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30) {
      return;
    }
    param_2 = *(longlong *)(lVar2 + 0x480);
  }
  FUN_1489cffe4(param_1,param_3,param_4,param_5,param_6);
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FUN_1489e3a3e(*(longlong *)(param_1 + 0x3f0),param_2);
  }
  FUN_143e7fda8(param_1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff);
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x3f0) + 0x31d) = param_8;
  }
  return;
}



// FUNCTION 143e87def FUN_143e87def body=1870 status=ok
// SIG undefined FUN_143e87def(void)

char FUN_143e87def(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  cVar2 = '\0';
  if ((((((DAT_14c966e98 != lVar1) && (cVar2 = '\x01', DAT_14c966fa0 != lVar1)) &&
        (cVar2 = '\x02', DAT_14c966fb8 != lVar1)) &&
       (((cVar2 = '\x03', DAT_14c964d40 != lVar1 && (cVar2 = '\x04', DAT_14c964d58 != lVar1)) &&
        ((cVar2 = '\x05', DAT_14c966f40 != lVar1 &&
         ((cVar2 = '\x06', DAT_14c964d70 != lVar1 && (cVar2 = '\a', DAT_14c964d88 != lVar1))))))))
      && (((((cVar2 = '\b', DAT_14c964da0 != lVar1 &&
             ((((cVar2 = '\t', DAT_14c964db8 != lVar1 && (cVar2 = '\n', DAT_14c964dd0 != lVar1)) &&
               (cVar2 = '\v', DAT_14c964de8 != lVar1)) &&
              ((cVar2 = '\f', DAT_14c964e00 != lVar1 && (cVar2 = '\r', DAT_14c964e18 != lVar1))))))
            && ((cVar2 = '\x0e', DAT_14c964e30 != lVar1 &&
                ((cVar2 = '\x0f', DAT_14c964e48 != lVar1 && (cVar2 = '\x10', DAT_14c964e60 != lVar1)
                 ))))) &&
           ((cVar2 = '\x11', DAT_14c964e78 != lVar1 &&
            ((((cVar2 = '\x12', DAT_14c964e90 != lVar1 && (cVar2 = '\x13', DAT_14c964ea8 != lVar1))
              && (cVar2 = '\x14', DAT_14c964ec0 != lVar1)) &&
             (((cVar2 = '\x15', DAT_14c966f58 != lVar1 && (cVar2 = '\x16', DAT_14c964ed8 != lVar1))
              && ((((cVar2 = '\x17', DAT_14c964ef0 != lVar1 &&
                    ((cVar2 = '\x18', DAT_14c964f08 != lVar1 &&
                     (cVar2 = '\x19', DAT_14c964f20 != lVar1)))) &&
                   (cVar2 = '\x1a', DAT_14c964f38 != lVar1)) &&
                  ((((cVar2 = '\x1b', DAT_14c964f50 != lVar1 &&
                     (cVar2 = '\x1c', DAT_14c964f68 != lVar1)) &&
                    (cVar2 = '\x1d', DAT_14c964f80 != lVar1)) &&
                   (((cVar2 = '\x1e', DAT_14c964f98 != lVar1 &&
                     (cVar2 = '\x1f', DAT_14c964fb0 != lVar1)) &&
                    ((cVar2 = ' ', DAT_14c966f88 != lVar1 &&
                     ((cVar2 = '!', DAT_14c964fc8 != lVar1 && (cVar2 = '\"', DAT_14c966ec8 != lVar1)
                      ))))))))))))))))) &&
          ((cVar2 = '#', DAT_14c966ef8 != lVar1 &&
           (((((((cVar2 = '$', DAT_14c964fe0 != lVar1 && (cVar2 = '%', DAT_14c964ff8 != lVar1)) &&
                (cVar2 = '&', DAT_14c965010 != lVar1)) &&
               ((cVar2 = '\'', DAT_14c965028 != lVar1 && (cVar2 = '(', DAT_14c965040 != lVar1)))) &&
              (cVar2 = ')', DAT_14c965058 != lVar1)) &&
             ((cVar2 = '*', DAT_14c965070 != lVar1 && (cVar2 = '+', DAT_14c965088 != lVar1)))) &&
            ((cVar2 = ',', DAT_14c9650a0 != lVar1 &&
             (((cVar2 = '-', DAT_14c9650b8 != lVar1 && (cVar2 = '.', DAT_14c9650d0 != lVar1)) &&
              (cVar2 = '/', DAT_14c9650e8 != lVar1)))))))))))) &&
     ((((cVar2 = '0', DAT_14c965100 != lVar1 && (cVar2 = '1', DAT_14c965118 != lVar1)) &&
       (cVar2 = '2', DAT_14c965130 != lVar1)) &&
      ((((((cVar2 = '3', DAT_14c965148 != lVar1 && (cVar2 = '4', DAT_14c965160 != lVar1)) &&
          ((cVar2 = '5', DAT_14c966ee0 != lVar1 &&
           (((cVar2 = '6', DAT_14c966fd0 != lVar1 && (cVar2 = '7', DAT_14c966eb0 != lVar1)) &&
            (cVar2 = '8', DAT_14c966f28 != lVar1)))))) &&
         ((cVar2 = '9', DAT_14c966f10 != lVar1 && (cVar2 = ':', DAT_14c965178 != lVar1)))) &&
        ((cVar2 = ';', DAT_14c965190 != lVar1 &&
         (((cVar2 = '<', DAT_14c9651a8 != lVar1 && (cVar2 = '=', DAT_14c9651c0 != lVar1)) &&
          ((cVar2 = '>', DAT_14c9651d8 != lVar1 &&
           ((((cVar2 = '?', DAT_14c9651f0 != lVar1 && (cVar2 = '@', DAT_14c965208 != lVar1)) &&
             (cVar2 = 'A', DAT_14c965220 != lVar1)) &&
            ((cVar2 = 'B', DAT_14c965238 != lVar1 && (cVar2 = 'C', DAT_14c965250 != lVar1)))))))))))
        ) && (((cVar2 = 'D', DAT_14c965268 != lVar1 &&
               ((((cVar2 = 'E', DAT_14c965280 != lVar1 && (cVar2 = 'F', DAT_14c965298 != lVar1)) &&
                 ((cVar2 = 'G', DAT_14c9652b0 != lVar1 &&
                  (((cVar2 = 'H', DAT_14c9652c8 != lVar1 && (cVar2 = 'I', DAT_14c9652e0 != lVar1))
                   && (cVar2 = 'J', DAT_14c966f70 != lVar1)))))) &&
                ((((cVar2 = 'K', DAT_14c9652f8 != lVar1 && (cVar2 = 'L', DAT_14c965310 != lVar1)) &&
                  (cVar2 = 'M', DAT_14c965328 != lVar1)) &&
                 ((cVar2 = 'N', DAT_14c965340 != lVar1 && (cVar2 = 'O', DAT_14c965358 != lVar1))))))
               )) && ((((cVar2 = 'P', DAT_14c965370 != lVar1 &&
                        (((cVar2 = 'Q', DAT_14c965388 != lVar1 &&
                          (cVar2 = 'R', DAT_14c9653a0 != lVar1)) &&
                         (cVar2 = 'S', DAT_14c9653b8 != lVar1)))) &&
                       (((cVar2 = 'T', DAT_14c9653d0 != lVar1 &&
                         (cVar2 = 'U', DAT_14c9653e8 != lVar1)) &&
                        ((cVar2 = 'V', DAT_14c965400 != lVar1 &&
                         (((((cVar2 = 'W', DAT_14c965418 != lVar1 &&
                             (cVar2 = 'X', DAT_14c965430 != lVar1)) &&
                            ((cVar2 = 'Y', DAT_14c965448 != lVar1 &&
                             ((((cVar2 = 'Z', DAT_14c965460 != lVar1 &&
                                (cVar2 = '[', DAT_14c965478 != lVar1)) &&
                               (cVar2 = '\\', DAT_14c965490 != lVar1)) &&
                              ((cVar2 = ']', DAT_14c9654a8 != lVar1 &&
                               (cVar2 = '^', DAT_14c9654c0 != lVar1)))))))) &&
                           (cVar2 = '_', DAT_14c9654d8 != lVar1)) &&
                          ((cVar2 = '`', DAT_14c9654f0 != lVar1 &&
                           (cVar2 = 'a', DAT_14c965508 != lVar1)))))))))) &&
                      (((cVar2 = 'b', DAT_14c965520 != lVar1 &&
                        (((cVar2 = 'c', DAT_14c965550 != lVar1 &&
                          (cVar2 = 'd', DAT_14c965568 != lVar1)) &&
                         (cVar2 = 'e', DAT_14c965580 != lVar1)))) &&
                       (((cVar2 = 'f', DAT_14c965598 != lVar1 &&
                         (cVar2 = 'g', DAT_14c9655c8 != lVar1)) &&
                        (cVar2 = 'h', DAT_14c9655e0 != lVar1)))))))))))))) {
    cVar2 = (DAT_14c965628 != lVar1) + 'i';
  }
  return cVar2;
}



// FUNCTION 143e8853d FUN_143e8853d body=144 status=ok
// SIG undefined FUN_143e8853d(void)

undefined1 * FUN_143e8853d(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0xe8))(param_2,param_3,0,&local_21);
  *param_1 = local_21;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e885ce FUN_143e885ce body=3521 status=ok
// SIG undefined FUN_143e885ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_143e885ce(char *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                    char *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_488 [32];
  undefined ***local_468;
  undefined ***local_460;
  double *local_458;
  float *local_450;
  double *local_448;
  longlong **local_440;
  longlong *local_438;
  int local_42c;
  char *local_428;
  longlong *local_420;
  longlong local_418;
  longlong *local_410;
  float local_404;
  float local_400;
  undefined1 local_3fc [4];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined **local_3d8;
  int local_3d0;
  undefined1 local_3cc;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b8;
  undefined8 uStack_3b0;
  undefined **local_3a8;
  double dStack_3a0;
  double local_398;
  undefined **local_388;
  double dStack_380;
  double local_378;
  undefined **local_368;
  double dStack_360;
  double local_358;
  longlong *local_350;
  undefined1 local_348 [16];
  double local_338;
  undefined **local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined4 local_30c;
  undefined2 local_308;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2c0;
  undefined8 local_2b8;
  byte local_2ac;
  undefined **local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  ulonglong local_f0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_358 = DAT_14c8464f0;
  local_368 = DAT_14c8464e0;
  dStack_360 = DAT_14c8464e8;
  local_378 = DAT_14c8464f0;
  local_388 = DAT_14c8464e0;
  dStack_380 = DAT_14c8464e8;
  local_398 = DAT_14c8464f0;
  local_3a8 = DAT_14c8464e0;
  dStack_3a0 = DAT_14c8464e8;
  if (*(char *)(param_4 + 0x2a0) == '\x01') {
    FUN_14031f39e(&local_330,*(undefined8 *)(*(longlong *)(param_2[3] + 0x78) + 0xf8),
                  *(undefined8 *)(*param_2 + 0x218),*(longlong *)(param_2[3] + 0x78) + 0xb8);
    local_2ac = local_2ac | 2;
    FUN_14031f528(&local_2a8,&local_330);
    local_2a8 = &PTR_FUN_14a2b3168;
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    plVar22 = (longlong *)param_2[3];
    local_468 = *(undefined ****)(plVar22[0xf] + 0xf8);
    local_458 = (double *)CONCAT44(local_458._4_4_,0xffffffff);
    local_460 = (undefined ***)0x0;
    lVar12 = (**(code **)(*plVar22 + 0x2d0))(plVar22,&local_2a8,&local_330,local_348);
    if (lVar12 == 0) {
      (*(code *)*param_6)(param_1,param_6[1]);
      FUN_14005d108(&local_2a8);
      goto LAB_143e89307;
    }
    local_460 = &local_388;
    local_468 = &local_368;
    FUN_147cf0946(param_3,param_4 + 0x288,lVar12 + 0xa30,lVar12 + 0x930);
    FUN_14005d108(&local_2a8);
  }
  local_398 = local_378 * 8796093022208.0 + local_358;
  dStack_3a0 = dStack_380 * 8796093022208.0 + dStack_360;
  local_3a8 = (undefined **)((double)local_388 * 8796093022208.0 + (double)local_368);
  local_3b8 = (undefined8 *)0x0;
  uStack_3b0 = 0;
  local_30c = 0;
  local_308 = 0x101;
  local_2e0 = 0;
  local_2d8 = 0x800000000;
  local_2c0 = 0;
  local_2b8 = 0x400000000;
  local_314 = 0;
  local_310 = 0;
  local_318 = 1;
  local_330 = (undefined **)0x0;
  uStack_328 = 0;
  local_320 = 0x100000000000101;
  if (*param_5 == '\x01') {
    local_448 = &local_3f8;
    local_3f8._0_5_ = (uint5)(uint)(1 << (param_5[4] & 0x1fU));
    local_468 = &local_2a8;
    local_348._8_8_ = dStack_360;
    local_348._0_8_ = local_368;
    local_338 = local_358;
    local_440 = &local_3c8;
    local_450 = (float *)&DAT_14cad0f10;
    local_458 = (double *)&local_330;
    local_460 = (undefined ***)CONCAT44(local_460._4_4_,DAT_14cad0ec4);
    local_2a8 = local_3a8;
    dStack_2a0 = dStack_3a0;
    local_298 = local_398;
    FUN_1401e2596(*param_2,&local_3b8,&local_3d8);
    cVar11 = 0 < (int)uStack_3b0;
LAB_143e88a4e:
    if ((cVar11 != '\0') && (0 < (int)uStack_3b0)) {
      lVar12 = 0;
      local_428 = param_1;
      do {
        puVar10 = local_3b8;
        local_418 = lVar12;
        memcpy(&local_2a8,local_3b8 + lVar12 * 0x20,0xb8);
        local_1f0 = puVar10[lVar12 * 0x20 + 0x17];
        uStack_1e8 = puVar10[lVar12 * 0x20 + 0x18];
        local_1e0 = (puVar10 + lVar12 * 0x20 + 0x18)[1];
        local_1d8 = *(undefined4 *)(puVar10 + lVar12 * 0x20 + 0x1a);
        local_1d4 = *(undefined1 *)((longlong)puVar10 + lVar12 * 0x100 + 0xd4);
        local_1b0 = puVar10[lVar12 * 0x20 + 0x1f];
        local_1d0 = puVar10[lVar12 * 0x20 + 0x1b];
        uStack_1c8 = (puVar10 + lVar12 * 0x20 + 0x1b)[1];
        local_1c0 = *(undefined1 (*) [16])(puVar10 + lVar12 * 0x20 + 0x1d);
        lVar12 = FUN_14485cccc(&local_1f0);
        if (lVar12 == 0) {
          (*(code *)*param_6)(param_1,param_6[1]);
          goto LAB_143e892b8;
        }
        local_3c8 = (longlong *)0x0;
        uStack_3c0 = 0;
        uVar13 = FUN_14485cccc(&local_1f0);
        FUN_1489d1694(uVar13);
        if ((longlong)(int)uStack_3c0 == 0) {
          (*(code *)*param_6)(param_1);
          bVar9 = false;
        }
        else {
          local_410 = local_3c8 + (int)uStack_3c0;
          plVar22 = local_3c8;
          do {
            plVar20 = (longlong *)*plVar22;
            if (((*(char *)((longlong)plVar20 + 0x1b1) == '\x01') &&
                (local_438 = plVar20, local_420 = plVar22,
                cVar11 = (**(code **)(*plVar20 + 0x488))(), param_1 = local_428, plVar22 = local_420
                , cVar11 != '\0')) && (*(longlong *)(local_438[0x44] + 8) != 0)) {
              iVar21 = (int)local_438[0x38];
              if (iVar21 == 0) {
                (*(code *)*param_7)(local_428);
                bVar9 = false;
                goto LAB_143e89219;
              }
              iVar18 = 0;
              plVar20 = local_438;
              local_42c = iVar21;
              do {
                lVar12 = plVar20[0x37];
                uVar1 = *(ulonglong *)(lVar12 + (longlong)iVar18 * 0x18);
                if (((uVar1 >> 0x20 != 0) && (uVar24 = (uint)uVar1, -1 < (int)uVar24)) &&
                   ((int)uVar24 < DAT_14c9647dc)) {
                  uVar19 = (ulonglong)((uint)(uVar1 >> 0x10) & 0x7fff);
                  plVar14 = (longlong *)
                            ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + uVar19 * 8));
                  if (((plVar14 != (longlong *)0x0) &&
                      (iVar23 = (int)(uVar1 >> 0x20), (int)plVar14[2] == iVar23)) &&
                     ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
                    if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                      lVar16 = *plVar14;
                    }
                    else {
                      lVar16 = 0;
                    }
                    lVar16 = *(longlong *)(lVar16 + 0x660);
                    if ((DAT_14c950c29 == '\x01') && (lVar16 != 0)) {
                      FUN_1456cec3c();
                      plVar22 = local_420;
                      plVar20 = local_438;
                    }
                    iVar21 = local_42c;
                    if (*(int *)(param_5 + 8) == 1) {
                      iVar15 = *(int *)(*(longlong *)(lVar16 + 0xe0) + 8) / 2;
                    }
                    else {
                      iVar15 = 0;
                      if (*(int *)(param_5 + 8) == 0) {
                        iVar15 = *(int *)(*(longlong *)(lVar16 + 0xe0) + 8) + -1;
                      }
                    }
                    lVar12 = *(longlong *)(lVar12 + (longlong)iVar18 * 0x18 + 8);
                    lVar16 = (longlong)iVar15 * 0x30;
                    local_3d0 = *(int *)(lVar12 + 8 + lVar16);
                    local_3d8 = *(undefined ***)(lVar12 + lVar16);
                    local_3cc = 1;
                    if ((local_3d0 != 0 && *(int *)(lVar12 + 0x18 + lVar16) != 0) &&
                       (*(int *)(lVar12 + lVar16 + 0x28) != 0)) {
                      if (((int)uVar24 < DAT_14c9647dc) &&
                         (((plVar22 = (longlong *)
                                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + uVar19 * 8)),
                           plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar23)) &&
                          ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))) {
                        lVar17 = *plVar22;
                      }
                      else {
                        lVar17 = 0;
                      }
                      dVar5 = (double)local_368 - *(double *)(lVar17 + 0x260);
                      dVar6 = dStack_360 - *(double *)(lVar17 + 0x268);
                      dVar4 = local_358 - *(double *)(lVar17 + 0x270);
                      dVar8 = *(double *)(lVar17 + 0x240);
                      dVar36 = -dVar8;
                      dVar37 = -*(double *)(lVar17 + 0x248);
                      dVar38 = *(double *)(lVar17 + 0x250) * -1.0;
                      dVar39 = *(double *)(lVar17 + 600) * 1.0;
                      dVar40 = dVar6 * dVar36 - dVar37 * dVar5;
                      dVar3 = dVar4 * dVar37 - dVar38 * dVar6;
                      dVar35 = dVar5 * dVar38 - dVar4 * dVar36;
                      dVar3 = dVar3 + dVar3;
                      dVar35 = dVar35 + dVar35;
                      dVar40 = dVar40 + dVar40;
                      auVar32 = *(undefined1 (*) [16])(lVar17 + 0x280);
                      auVar26 = divpd(_DAT_149934d80,auVar32);
                      dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._0_8_)) &
                                      auVar26._0_8_);
                      dStack_3f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._8_8_))
                                           & auVar26._8_8_);
                      dVar6 = (dVar8 * dVar40 + dVar38 * dVar3 + dVar39 * dVar35 + dVar6) *
                              dStack_3f0;
                      local_348._8_4_ = SUB84(dVar6,0);
                      local_348._0_8_ =
                           ((dVar40 * dVar37 - dVar35 * dVar38) + dVar39 * dVar3 + dVar5) * dVar2;
                      local_348._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                      local_3e8 = (double)(-(ulonglong)
                                            (9.99999993922529e-09 < ABS(*(double *)(lVar17 + 0x290))
                                            ) & (ulonglong)(1.0 / *(double *)(lVar17 + 0x290)));
                      local_338 = (dVar40 * dVar39 + dVar4 + (dVar35 * dVar36 - dVar3 * dVar37)) *
                                  local_3e8;
                      dVar40 = dStack_380 * dVar36 - dVar37 * (double)local_388;
                      dVar3 = local_378 * dVar37 - dVar38 * dStack_380;
                      dVar35 = (double)local_388 * dVar38 - dVar36 * local_378;
                      dVar3 = dVar3 + dVar3;
                      dVar35 = dVar35 + dVar35;
                      dVar40 = dVar40 + dVar40;
                      local_3f8 = ((dVar40 * dVar37 - dVar35 * dVar38) +
                                  dVar39 * dVar3 + (double)local_388) * dVar2;
                      dStack_3f0 = (dVar8 * dVar40 + dVar38 * dVar3 + dVar39 * dVar35 + dStack_380)
                                   * dStack_3f0;
                      local_3e8 = (dVar40 * dVar39 + local_378 + (dVar35 * dVar36 - dVar3 * dVar37))
                                  * local_3e8;
                      local_450 = &local_404;
                      local_458 = (double *)local_3fc;
                      local_460 = (undefined ***)
                                  CONCAT44(local_460._4_4_,*(undefined4 *)(param_5 + 0xc));
                      local_468 = &local_3d8;
                      cVar11 = FUN_1489d0e08(local_348,&local_3f8,lVar12 + 0x10 + lVar16,
                                             lVar12 + 0x20 + lVar16);
                      param_1 = local_428;
                      plVar22 = local_420;
                      plVar20 = local_438;
                      if (cVar11 != '\0') {
                        iVar23 = *(int *)(param_5 + 0x10);
                        if (iVar23 == 2) {
                          auVar32._0_8_ = FUN_1447c7e44();
                          auVar32._8_8_ = extraout_XMM0_Qb_02;
                          auVar26._4_12_ = auVar32._4_12_;
                          auVar26._0_4_ = (float)auVar32._0_8_ + 2.0;
                          fVar25 = (float)FUN_1447c7e44(auVar26._0_8_);
                          local_404 = (float)(~-(uint)(1.0 < fVar25) & (uint)fVar25 |
                                             (uint)(1.0 - fVar25) & -(uint)(1.0 < fVar25));
                          auVar33._0_8_ = FUN_1447c7e44();
                          auVar33._8_8_ = extraout_XMM0_Qb_03;
                          auVar34._4_12_ = auVar33._4_12_;
                          auVar34._0_4_ = (float)auVar33._0_8_ + 2.0;
                          local_400 = (float)FUN_1447c7e44(auVar34._0_8_);
                          param_1 = local_428;
                          if (1.0 < local_400) {
                            local_400 = 1.0 - local_400;
                          }
                        }
                        else {
                          if (iVar23 == 1) {
                            auVar31 = ZEXT416((uint)local_400);
                            if (1.0 <= local_404) {
                              local_404 = 1.0;
                            }
                            if (local_404 <= 0.0) {
                              local_404 = 0.0;
                            }
                            if (1.0 <= local_400) {
                              auVar31._4_12_ = ZEXT812(0);
                              auVar31._0_4_ = 0x3f800000;
                            }
                            if (auVar31._0_4_ <= 0.0) {
                              auVar7._12_4_ = 0;
                              auVar7._0_12_ = auVar31._4_12_;
                              auVar31 = auVar7 << 0x20;
                            }
                          }
                          else {
                            if (iVar23 != 0) goto LAB_143e890dd;
                            auVar27._0_8_ = FUN_1447c7e44();
                            auVar27._8_8_ = extraout_XMM0_Qb;
                            auVar28._4_12_ = auVar27._4_12_;
                            auVar28._0_4_ = (float)auVar27._0_8_ + 1.0;
                            local_404 = (float)FUN_1447c7e44(auVar28._0_8_);
                            auVar29._0_8_ = FUN_1447c7e44();
                            auVar29._8_8_ = extraout_XMM0_Qb_00;
                            auVar30._4_12_ = auVar29._4_12_;
                            auVar30._0_4_ = (float)auVar29._0_8_ + 1.0;
                            auVar31._0_8_ = FUN_1447c7e44(auVar30._0_8_);
                            auVar31._8_8_ = extraout_XMM0_Qb_01;
                          }
                          local_400 = auVar31._0_4_;
                        }
LAB_143e890dd:
                        local_350 = local_438;
                        (*(code *)*param_8)(param_1,param_8[1],&local_350,&local_404);
                        if (*param_1 != '\0') {
                          bVar9 = false;
                          goto LAB_143e89219;
                        }
                        FUN_14493db24(param_1);
                        plVar22 = local_420;
                        plVar20 = local_438;
                      }
                    }
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar21 != iVar18);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != local_410);
          bVar9 = true;
          param_1 = local_428;
        }
LAB_143e89219:
        if (local_3c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar9) goto LAB_143e892b8;
        lVar12 = local_418 + 1;
      } while (lVar12 < (int)uStack_3b0);
    }
  }
  else if (*param_5 == '\0') {
    uStack_3b0 = 1;
    FUN_144a3a3ee(&local_3b8);
    puVar10 = local_3b8;
    *local_3b8 = 0x3f80000000000000;
    memset(local_3b8 + 1,0,0x9c);
    *(undefined4 *)((longlong)puVar10 + 0xa4) = 0xffffffff;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    *(undefined4 *)(puVar10 + 0x1a) = 0xffffffff;
    *(undefined1 *)((longlong)puVar10 + 0xd4) = 0;
    puVar10[0x1b] = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    local_468 = &local_2a8;
    local_2a8._0_5_ = (uint5)(uint)(1 << (param_5[4] & 0x1fU));
    local_460 = &local_330;
    cVar11 = FUN_140526294(*param_2,local_3b8,&local_368,&local_3a8);
    goto LAB_143e88a4e;
  }
  *param_1 = '\0';
  param_1[0x20] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  memset(param_1 + 0x28,0,0x88);
  param_1[0xb0] = '\x02';
  param_1[0xb1] = '\a';
  param_1[0xb2] = '\x02';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
LAB_143e892b8:
  if (local_2c0 != 0) {
    FUN_1400020a8();
  }
  if (local_2e0 != 0) {
    FUN_1400020a8();
  }
  if (local_3b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e89307:
  if ((local_f0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143e89390 FUN_143e89390 body=1940 status=ok
// SIG undefined FUN_143e89390(void)

void FUN_143e89390(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  bool bVar10;
  
  lVar8 = *(longlong *)(param_2 + 0x78);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
    atexit(FUN_142816fad);
    _Init_thread_footer(&DAT_14c952210);
  }
  puVar3 = *(undefined8 **)(lVar8 + 8);
  if (DAT_14c9521c8 == 0) {
    bVar10 = puVar3 != (undefined8 *)0x0;
    if (puVar3 != &DAT_14c9521c0 && bVar10) {
      do {
        puVar3 = (undefined8 *)puVar3[6];
        bVar10 = puVar3 != (undefined8 *)0x0;
        if (puVar3 == &DAT_14c9521c0) break;
      } while (puVar3 != (undefined8 *)0x0);
    }
    if (!bVar10) goto LAB_143e8941d;
LAB_143e893e0:
    uVar9 = 0;
  }
  else {
    if ((puVar3[3] & DAT_14c9521c8) != 0) goto LAB_143e893e0;
LAB_143e8941d:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar5 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar5,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    puVar3 = *(undefined8 **)(lVar8 + 8);
    if (DAT_14c951cd8 == 0) {
      bVar10 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar10) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar10 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (bVar10) goto LAB_143e89458;
LAB_143e89498:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                      FUN_1408a629c);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
      puVar3 = *(undefined8 **)(lVar8 + 8);
      if (DAT_14c952380 == 0) {
        bVar10 = puVar3 != (undefined8 *)0x0;
        if (puVar3 != &DAT_14c952378 && bVar10) {
          do {
            puVar3 = (undefined8 *)puVar3[6];
            bVar10 = puVar3 != (undefined8 *)0x0;
            if (puVar3 == &DAT_14c952378) break;
          } while (puVar3 != (undefined8 *)0x0);
        }
        if (bVar10) goto LAB_143e894d3;
      }
      else if ((puVar3[3] & DAT_14c952380) != 0) {
LAB_143e894d3:
        uVar9 = 1;
        goto LAB_143e89559;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        uVar5 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,uVar5,FUN_140dafe7a);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      puVar4 = *(undefined **)(lVar8 + 8);
      if (DAT_14c963e40 == 0) {
        bVar10 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c963e38 && bVar10) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar10 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c963e38) break;
          } while (puVar4 != (undefined *)0x0);
        }
        if (bVar10) goto LAB_143e89553;
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c963e40) != 0) {
LAB_143e89553:
        uVar9 = 3;
        goto LAB_143e89559;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
        uVar5 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar5,FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer();
      }
      puVar4 = *(undefined **)(lVar8 + 8);
      if (DAT_14c952a10 == 0) {
        bVar10 = puVar4 != (undefined *)0x0;
        puVar7 = puVar4;
        if (puVar4 != &DAT_14c952a08 && bVar10) {
          do {
            puVar7 = *(undefined **)(puVar7 + 0x30);
            bVar10 = puVar7 != (undefined *)0x0;
            if (puVar7 == &DAT_14c952a08) break;
          } while (puVar7 != (undefined *)0x0);
        }
        if (!bVar10) {
LAB_143e896ea:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
            FUN_1446f4b16();
            FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0,0x4018001,0,&DAT_14c951c78,
                          FUN_1403a5f94);
            atexit(FUN_1428170e8);
            _Init_thread_footer(&DAT_14c952478);
          }
          puVar4 = *(undefined **)(lVar8 + 8);
          if (DAT_14c952430 == 0) {
            bVar10 = puVar4 != (undefined *)0x0;
            if (puVar4 != &DAT_14c952428 && bVar10) {
              do {
                puVar4 = *(undefined **)(puVar4 + 0x30);
                bVar10 = puVar4 != (undefined *)0x0;
                if (puVar4 == &DAT_14c952428) break;
              } while (puVar4 != (undefined *)0x0);
            }
            if (!bVar10) {
              return;
            }
          }
          else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952430) == 0) {
            return;
          }
          uVar9 = 5;
          goto LAB_143e89559;
        }
      }
      else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) == 0) goto LAB_143e896ea;
      if (lVar8 == 0) {
        lVar6 = 0;
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
          uVar5 = FUN_1446ddbd2();
          FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar5,FUN_1403a682c)
          ;
          atexit(FUN_142818c9e);
          _Init_thread_footer();
        }
        if (DAT_14c952a10 == 0) {
          bVar10 = puVar4 != (undefined *)0x0;
          if (puVar4 != &DAT_14c952a08 && bVar10) {
            do {
              puVar4 = *(undefined **)(puVar4 + 0x30);
              bVar10 = puVar4 != (undefined *)0x0;
              if (puVar4 == &DAT_14c952a08) break;
            } while (puVar4 != (undefined *)0x0);
          }
        }
        else {
          bVar10 = (*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) != 0;
        }
        lVar6 = 0;
        if (bVar10) {
          lVar6 = lVar8;
        }
      }
      uVar5 = *(undefined8 *)(lVar6 + 0x70);
      uVar9 = 4;
      goto LAB_143e8955c;
    }
    if ((puVar3[3] & DAT_14c951cd8) == 0) goto LAB_143e89498;
LAB_143e89458:
    uVar9 = 2;
  }
LAB_143e89559:
  uVar5 = 0;
LAB_143e8955c:
  iVar1 = *(int *)(param_1 + 0x90);
  lVar8 = (longlong)iVar1;
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1489d96a0(param_1 + 0x88,iVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar6 + lVar8 * 0x18) = param_3;
  *(undefined4 *)(lVar6 + 8 + lVar8 * 0x18) = uVar9;
  *(undefined8 *)(lVar6 + 0x10 + lVar8 * 0x18) = uVar5;
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 6;
  return;
}



// FUNCTION 143e89b24 FUN_143e89b24 body=1039 status=ok
// SIG undefined FUN_143e89b24(void)

void FUN_143e89b24(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  char cVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  wchar_t *_Str;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined1 auStack_148 [40];
  wchar_t *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_10c [4];
  longlong *local_108;
  undefined4 local_100;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  longlong *local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)(param_2 + 1);
  puVar11 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  if (param_4 < iVar10) {
    iVar10 = param_4;
  }
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  FUN_14006620a(&local_e8,puVar6,iVar10);
  uVar8 = *(int *)(param_2 + 1) - 1;
  if (*(int *)(param_2 + 1) == 0) {
    uVar8 = 0;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  uVar9 = param_4 + 1U;
  if ((int)uVar8 <= (int)(param_4 + 1U)) {
    uVar9 = uVar8;
  }
  if ((int)uVar9 < 1) {
    uVar9 = 0;
  }
  FUN_14006620a(&local_f8,puVar11 + uVar9,uVar8 - uVar9);
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
  local_108 = DAT_14c844840;
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
  local_100 = 0;
  local_d8 = local_f8;
  local_d0 = local_f0 + -1;
  if (local_f0 == 0) {
    local_d0 = 0;
  }
  FUN_1446e940c(&local_120,&local_d8);
  local_d8 = local_e8;
  local_d0 = local_e0 + -1;
  if (local_e0 == 0) {
    local_d0 = 0;
  }
  FUN_1446e940c(local_10c,&local_d8);
  cVar3 = FUN_140008c02(local_10c,&local_120,&local_108,0);
  if (cVar3 == '\0') goto LAB_143e89dfc;
  plVar5 = local_108;
  if (*(code **)(*local_108 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_108 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar2 = *(code **)(*local_108 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = local_108 + 3;
    if (local_108[5] != 0) {
      plVar5 = (longlong *)(local_108[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = local_108 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(local_108);
  }
  local_120 = (wchar_t *)0x0;
  local_118 = (int)plVar5[1];
  lVar7 = (longlong)local_118;
  _Src = (void *)*plVar5;
  if (lVar7 == 0) {
    local_114 = 0;
LAB_143e89d58:
    _Str = L"";
LAB_143e89d6e:
    local_58 = (longlong *)0x0;
    sVar4 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar4 & 0xffffffff);
    uVar8 = local_48 + 1;
    plVar5 = (longlong *)0x0;
    if (0x80 < uVar8) {
      FUN_1446efa72(&local_58,0,uVar8,1);
      plVar5 = local_58;
    }
    local_50 = &local_d8;
    if (plVar5 != (longlong *)0x0) {
      local_50 = plVar5;
    }
    FUN_14475a98a(local_50,uVar8,_Str,(int)sVar4 + 1);
  }
  else {
    FUN_1446dd670(&local_120,local_118,0);
    memcpy(local_120,_Src,lVar7 * 2);
    if (local_118 == 0) goto LAB_143e89d58;
    local_58 = (longlong *)0x0;
    _Str = local_120;
    if (local_120 != (wchar_t *)0x0) goto LAB_143e89d6e;
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  (**(code **)*param_3)(param_3,local_50,local_48);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143e89dfc:
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e89f34 FUN_143e89f34 body=487 status=ok
// SIG undefined FUN_143e89f34(void)

void FUN_143e89f34(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  void *local_58;
  int local_50;
  code *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb0d2b0 != 0) {
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_70 = &local_48;
      local_48 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1489c8acb;
      local_80 = &LAB_146027b0e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000006;
      local_a0 = 8;
      local_a8 = 0x128;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar1 = DAT_14cb907b8;
    lVar5 = DAT_14cb907b8[0x22];
    if (lVar5 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
      lVar5 = plVar1[0x22];
    }
    if (*(char *)(lVar5 + 0x72) != '\x01') goto LAB_143e8a057;
  }
  FUN_1489bf82c(param_1 + 8,&local_48,param_2,param_3);
  pcVar2 = local_48;
  lVar5 = (longlong)local_40;
  if (lVar5 == 0) {
    local_40 = 0;
  }
  else {
    lVar4 = 0;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(pcVar2 + lVar4 + 8);
      lVar3 = (longlong)local_50;
      _Src = *(void **)(pcVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar3 * 2);
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar5 * 0x10 != lVar4);
  }
  FUN_1447a1747(local_48,local_40);
  if (local_48 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143e8a057:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8a11c FUN_143e8a11c body=314 status=ok
// SIG undefined FUN_143e8a11c(void)

void FUN_143e8a11c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_168 [40];
  longlong local_140 [2];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  if (param_3 == (char *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar1 = strlen(param_3);
    FUN_1446e6fe8(local_130,param_3,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_140,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb90c28) {
    FUN_144b3d300(&DAT_14cb90c28);
    if (DAT_14cb90c28 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_14054d46e(&DAT_14c846b20,L"SuppressCoherentErrors");
      _Init_thread_footer(&DAT_14cb90c28);
    }
  }
  if (local_140[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8a257 FUN_143e8a257 body=284 status=ok
// SIG undefined FUN_143e8a257(void)

void FUN_143e8a257(undefined8 *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  FUN_14006620a(&local_30,puVar5,*(int *)(param_1 + 1) - 2U < 0x7fffffff);
  puVar5 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar5 = local_30;
  }
  lVar3 = 0;
  do {
    uVar2 = puVar5[lVar3];
    bVar1 = *(byte *)((longlong)L"/Disabled" + lVar3);
    iVar6 = (uint)uVar2 - (uint)bVar1;
    if (iVar6 == 0) {
      iVar6 = 0;
      if (uVar2 == 0) goto LAB_143e8a2fc;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_143e8a2fc;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) {
        iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_143e8a2fc:
        if (local_30 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 == 0) {
          iVar6 = *(int *)(param_1 + 1);
          iVar4 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar4 = 0;
          }
          if (0 < iVar4) {
            iVar7 = iVar6 - (uint)(0 < iVar4);
            if (iVar7 != 0) {
              memmove((void *)*param_1,(void *)((longlong)*param_1 + 2),(longlong)iVar7 * 2);
              iVar6 = *(int *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = iVar6 - (uint)(0 < iVar4);
            FUN_1449649ae(param_1);
          }
          FUN_143e8a257(param_1);
        }
        if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    lVar3 = lVar3 + 1;
  } while( true );
}



// FUNCTION 143e8a374 FUN_143e8a374 body=91 status=ok
// SIG undefined FUN_143e8a374(void)

void FUN_143e8a374(void)

{
  if (DAT_14cb90cc8 != 0) {
    if (DAT_14cb90cc0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90cc0)(DAT_14cb90cc0,0);
    FUN_1446efa72(&DAT_14cb90cc0,0,0,0x10);
    DAT_14cb90cc8 = 0;
  }
  if (DAT_14cb90cc0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a3cf FUN_143e8a3cf body=91 status=ok
// SIG undefined FUN_143e8a3cf(void)

void FUN_143e8a3cf(void)

{
  if (DAT_14cb90d88 != 0) {
    if (DAT_14cb90d80 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d80)(DAT_14cb90d80,0);
    FUN_1446efa72(&DAT_14cb90d80,0,0,0x10);
    DAT_14cb90d88 = 0;
  }
  if (DAT_14cb90d80 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a42a FUN_143e8a42a body=91 status=ok
// SIG undefined FUN_143e8a42a(void)

void FUN_143e8a42a(void)

{
  if (DAT_14cb90cd8 != 0) {
    if (DAT_14cb90cd0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90cd0)(DAT_14cb90cd0,0);
    FUN_1446efa72(&DAT_14cb90cd0,0,0,0x10);
    DAT_14cb90cd8 = 0;
  }
  if (DAT_14cb90cd0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a485 FUN_143e8a485 body=91 status=ok
// SIG undefined FUN_143e8a485(void)

void FUN_143e8a485(void)

{
  if (DAT_14cb90ce8 != 0) {
    if (DAT_14cb90ce0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90ce0)(DAT_14cb90ce0,0);
    FUN_1446efa72(&DAT_14cb90ce0,0,0,0x10);
    DAT_14cb90ce8 = 0;
  }
  if (DAT_14cb90ce0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a4e0 FUN_143e8a4e0 body=91 status=ok
// SIG undefined FUN_143e8a4e0(void)

void FUN_143e8a4e0(void)

{
  if (DAT_14cb90cb8 != 0) {
    if (DAT_14cb90cb0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90cb0)(DAT_14cb90cb0,0);
    FUN_1446efa72(&DAT_14cb90cb0,0,0,0x10);
    DAT_14cb90cb8 = 0;
  }
  if (DAT_14cb90cb0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a53b FUN_143e8a53b body=91 status=ok
// SIG undefined FUN_143e8a53b(void)

void FUN_143e8a53b(void)

{
  if (DAT_14cb90d28 != 0) {
    if (DAT_14cb90d20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d20)(DAT_14cb90d20,0);
    FUN_1446efa72(&DAT_14cb90d20,0,0,0x10);
    DAT_14cb90d28 = 0;
  }
  if (DAT_14cb90d20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a596 FUN_143e8a596 body=91 status=ok
// SIG undefined FUN_143e8a596(void)

void FUN_143e8a596(void)

{
  if (DAT_14cb90cf8 != 0) {
    if (DAT_14cb90cf0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90cf0)(DAT_14cb90cf0,0);
    FUN_1446efa72(&DAT_14cb90cf0,0,0,0x10);
    DAT_14cb90cf8 = 0;
  }
  if (DAT_14cb90cf0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a5f1 FUN_143e8a5f1 body=91 status=ok
// SIG undefined FUN_143e8a5f1(void)

void FUN_143e8a5f1(void)

{
  if (DAT_14cb90c58 != 0) {
    if (DAT_14cb90c50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90c50)(DAT_14cb90c50,0);
    FUN_1446efa72(&DAT_14cb90c50,0,0,0x10);
    DAT_14cb90c58 = 0;
  }
  if (DAT_14cb90c50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a64c FUN_143e8a64c body=91 status=ok
// SIG undefined FUN_143e8a64c(void)

void FUN_143e8a64c(void)

{
  if (DAT_14cb90d78 != 0) {
    if (DAT_14cb90d70 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d70)(DAT_14cb90d70,0);
    FUN_1446efa72(&DAT_14cb90d70,0,0,0x10);
    DAT_14cb90d78 = 0;
  }
  if (DAT_14cb90d70 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a6a7 FUN_143e8a6a7 body=91 status=ok
// SIG undefined FUN_143e8a6a7(void)

void FUN_143e8a6a7(void)

{
  if (DAT_14cb90d08 != 0) {
    if (DAT_14cb90d00 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d00)(DAT_14cb90d00,0);
    FUN_1446efa72(&DAT_14cb90d00,0,0,0x10);
    DAT_14cb90d08 = 0;
  }
  if (DAT_14cb90d00 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a702 FUN_143e8a702 body=91 status=ok
// SIG undefined FUN_143e8a702(void)

void FUN_143e8a702(void)

{
  if (DAT_14cb90c10 != 0) {
    if (DAT_14cb90c08 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90c08)(DAT_14cb90c08,0);
    FUN_1446efa72(&DAT_14cb90c08,0,0,0x10);
    DAT_14cb90c10 = 0;
  }
  if (DAT_14cb90c08 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a75d FUN_143e8a75d body=91 status=ok
// SIG undefined FUN_143e8a75d(void)

void FUN_143e8a75d(void)

{
  if (DAT_14cb90d18 != 0) {
    if (DAT_14cb90d10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d10)(DAT_14cb90d10,0);
    FUN_1446efa72(&DAT_14cb90d10,0,0,0x10);
    DAT_14cb90d18 = 0;
  }
  if (DAT_14cb90d10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a7b8 FUN_143e8a7b8 body=91 status=ok
// SIG undefined FUN_143e8a7b8(void)

void FUN_143e8a7b8(void)

{
  if (DAT_14cb90d58 != 0) {
    if (DAT_14cb90d50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d50)(DAT_14cb90d50,0);
    FUN_1446efa72(&DAT_14cb90d50,0,0,0x10);
    DAT_14cb90d58 = 0;
  }
  if (DAT_14cb90d50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a813 FUN_143e8a813 body=91 status=ok
// SIG undefined FUN_143e8a813(void)

void FUN_143e8a813(void)

{
  if (DAT_14cb90d68 != 0) {
    if (DAT_14cb90d60 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d60)(DAT_14cb90d60,0);
    FUN_1446efa72(&DAT_14cb90d60,0,0,0x10);
    DAT_14cb90d68 = 0;
  }
  if (DAT_14cb90d60 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a86e FUN_143e8a86e body=91 status=ok
// SIG undefined FUN_143e8a86e(void)

void FUN_143e8a86e(void)

{
  if (DAT_14cb90c38 != 0) {
    if (DAT_14cb90c30 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90c30)(DAT_14cb90c30,0);
    FUN_1446efa72(&DAT_14cb90c30,0,0,0x10);
    DAT_14cb90c38 = 0;
  }
  if (DAT_14cb90c30 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a8c9 FUN_143e8a8c9 body=91 status=ok
// SIG undefined FUN_143e8a8c9(void)

void FUN_143e8a8c9(void)

{
  if (DAT_14cb90c20 != 0) {
    if (DAT_14cb90c18 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90c18)(DAT_14cb90c18,0);
    FUN_1446efa72(&DAT_14cb90c18,0,0,0x10);
    DAT_14cb90c20 = 0;
  }
  if (DAT_14cb90c18 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a924 FUN_143e8a924 body=91 status=ok
// SIG undefined FUN_143e8a924(void)

void FUN_143e8a924(void)

{
  if (DAT_14cb90d38 != 0) {
    if (DAT_14cb90d30 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d30)(DAT_14cb90d30,0);
    FUN_1446efa72(&DAT_14cb90d30,0,0,0x10);
    DAT_14cb90d38 = 0;
  }
  if (DAT_14cb90d30 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a97f FUN_143e8a97f body=91 status=ok
// SIG undefined FUN_143e8a97f(void)

void FUN_143e8a97f(void)

{
  if (DAT_14cb90c68 != 0) {
    if (DAT_14cb90c60 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90c60)(DAT_14cb90c60,0);
    FUN_1446efa72(&DAT_14cb90c60,0,0,0x10);
    DAT_14cb90c68 = 0;
  }
  if (DAT_14cb90c60 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8a9df FUN_143e8a9df body=91 status=ok
// SIG undefined FUN_143e8a9df(void)

void FUN_143e8a9df(void)

{
  if (DAT_14cb90d48 != 0) {
    if (DAT_14cb90d40 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d40)(DAT_14cb90d40,0);
    FUN_1446efa72(&DAT_14cb90d40,0,0,0x10);
    DAT_14cb90d48 = 0;
  }
  if (DAT_14cb90d40 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8aa3a FUN_143e8aa3a body=91 status=ok
// SIG undefined FUN_143e8aa3a(void)

void FUN_143e8aa3a(void)

{
  if (DAT_14cb90da8 != 0) {
    if (DAT_14cb90da0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90da0)(DAT_14cb90da0,0);
    FUN_1446efa72(&DAT_14cb90da0,0,0,0x10);
    DAT_14cb90da8 = 0;
  }
  if (DAT_14cb90da0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8aa95 FUN_143e8aa95 body=91 status=ok
// SIG undefined FUN_143e8aa95(void)

void FUN_143e8aa95(void)

{
  if (DAT_14cb90d98 != 0) {
    if (DAT_14cb90d90 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb90d90)(DAT_14cb90d90,0);
    FUN_1446efa72(&DAT_14cb90d90,0,0,0x10);
    DAT_14cb90d98 = 0;
  }
  if (DAT_14cb90d90 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e8ab02 FUN_143e8ab02 body=428 status=ok
// SIG undefined FUN_143e8ab02(void)

undefined8 *
FUN_143e8ab02(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  code *pcStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14b452260;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  param_1[4] = 0;
  param_1[6] = 0;
  local_a8 = (undefined1 *)*param_5;
  if (local_a8 == (undefined1 *)0x0) {
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b453ac0;
    pcStack_80 = FUN_143e8acaf;
    local_a8 = &LAB_1489d9f70;
  }
  else {
    local_98 = (undefined ***)0x0;
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)*plVar5)();
  }
  local_68 = param_1[4];
  uStack_60 = param_1[5];
  local_58 = (undefined ***)param_1[6];
  uStack_50 = param_1[7];
  local_48 = (undefined **)param_1[8];
  uStack_40 = param_1[9];
  local_38 = param_1[10];
  uStack_30 = param_1[0xb];
  uVar3 = local_38;
  uVar4 = uStack_30;
  uVar2 = uStack_50;
  uVar1 = uStack_60;
  param_1[10] = CONCAT44(uStack_74,local_78);
  param_1[0xb] = CONCAT44(uStack_6c,uStack_70);
  param_1[8] = local_88;
  param_1[9] = pcStack_80;
  param_1[6] = local_98;
  param_1[7] = CONCAT44(uStack_8c,uStack_90);
  param_1[4] = local_a8;
  param_1[5] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  pcStack_80 = (code *)uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_a8 = (undefined1 *)local_68;
  local_98 = local_58;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_68 != 0) {
    pppuVar6 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar6 = &local_88;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8acaf FUN_143e8acaf body=1396 status=ok
// SIG undefined FUN_143e8acaf(void)

void FUN_143e8acaf(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_28;
  
  lVar4 = DAT_14cb90c48;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar12 = *(longlong *)(DAT_14cb90c48 + 0x140);
  if (lVar12 == 0) {
    FUN_143e8c464(DAT_14cb90c48);
    lVar12 = *(longlong *)(lVar4 + 0x140);
  }
  if (param_2 == 1) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar6 = (uint *)*puVar2;
    if (puVar6 != (uint *)0x0) goto LAB_143e8af85;
    while( true ) {
      uVar9 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar9 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar9 | 1;
        __tlregdtor(&LAB_143e8d541);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar2 = puVar5;
      FUN_140217a48(puVar2);
      puVar6 = (uint *)*puVar2;
LAB_143e8af85:
      puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar10 = (uint *)(puVar11 + 0x22);
      uVar9 = puVar6[0x12];
      if (puVar10 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar3 = *puVar6;
        *puVar6 = *puVar6 + uVar9 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar9) != 0xffffffff) break;
        puVar6 = (uint *)*puVar2;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        puVar11 = (undefined8 *)((longlong)puVar6 + 0x67U & 0xfffffffffffffff0);
        puVar10 = (uint *)(puVar11 + 0x22);
        uVar9 = 0;
        if (puVar10 <= puVar6 + 0x4000) {
          uVar9 = 1;
          goto LAB_143e8b005;
        }
      }
    }
    uVar9 = uVar9 + 1;
LAB_143e8b005:
    *(uint **)(puVar6 + 0x10) = puVar10;
    puVar6[0x12] = uVar9;
    FUN_1447247dc(puVar11,0);
    *puVar11 = &PTR_FUN_14b452b60;
    local_78 = local_68;
    local_68[0] = 0;
    local_58 = 0;
    FUN_143e8ab02(puVar11 + 0x16,lVar12,param_3,1);
    puVar11[0x16] = &PTR_FUN_14b452b70;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar12 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar12 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar12 + 0x30);
    }
    puVar11[0xf] = uVar7;
    uVar8 = 0xc000000000000000;
  }
  else {
    if (param_2 != 0) goto LAB_143e8acfb;
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar6 = (uint *)*puVar2;
    if (puVar6 != (uint *)0x0) goto LAB_143e8adbc;
    while( true ) {
      uVar9 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar9 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar9 | 1;
        __tlregdtor(&LAB_143e8d541);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar2 = puVar5;
      FUN_140217a48(puVar2);
      puVar6 = (uint *)*puVar2;
LAB_143e8adbc:
      puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar10 = (uint *)(puVar11 + 0x22);
      uVar9 = puVar6[0x12];
      if (puVar10 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar3 = *puVar6;
        *puVar6 = *puVar6 + uVar9 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar9) != 0xffffffff) break;
        puVar6 = (uint *)*puVar2;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        puVar11 = (undefined8 *)((longlong)puVar6 + 0x67U & 0xfffffffffffffff0);
        puVar10 = (uint *)(puVar11 + 0x22);
        uVar9 = 0;
        if (puVar10 <= puVar6 + 0x4000) {
          uVar9 = 1;
          goto LAB_143e8ae3c;
        }
      }
    }
    uVar9 = uVar9 + 1;
LAB_143e8ae3c:
    *(uint **)(puVar6 + 0x10) = puVar10;
    puVar6[0x12] = uVar9;
    FUN_1447247dc(puVar11,0);
    *puVar11 = &PTR_FUN_14b452b20;
    local_78 = local_68;
    local_68[0] = 0;
    local_58 = 0;
    FUN_143e8ab02(puVar11 + 0x16,lVar12,param_3,0);
    puVar11[0x16] = &PTR_FUN_14b452b30;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar12 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar12 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar12 + 0x30);
    }
    puVar11[0xf] = uVar7;
    uVar8 = 0xd800000000000000;
  }
  puVar11[0x10] = uVar8 | 0x527800b400;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  if (puVar11 == (undefined8 *)0x0) {
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    local_68[0] = CONCAT71(local_68[0]._1_7_,1);
    FUN_1447439e4(puVar11);
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
LAB_143e8acfb:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8b224 FUN_143e8b224 body=23 status=ok
// SIG undefined FUN_143e8b224(void)

int FUN_143e8b224(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_14cb90c98);
  return (int)pvVar1 + -1;
}



// FUNCTION 143e8b23c FUN_143e8b23c body=23 status=ok
// SIG undefined FUN_143e8b23c(void)

int FUN_143e8b23c(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_14cb90c9c);
  return (int)pvVar1 + -1;
}



// FUNCTION 143e8b276 FUN_143e8b276 body=4095 status=ok
// SIG undefined FUN_143e8b276(void)

/* WARNING: Removing unreachable block (ram,0x000143e8bca0) */
/* WARNING: Removing unreachable block (ram,0x000143e8bb80) */
/* WARNING: Removing unreachable block (ram,0x000143e8ba60) */
/* WARNING: Removing unreachable block (ram,0x000143e8baf0) */
/* WARNING: Removing unreachable block (ram,0x000143e8bc10) */
/* WARNING: Removing unreachable block (ram,0x000143e8bd30) */

void FUN_143e8b276(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined2 *local_130;
  int local_128;
  undefined2 *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  undefined4 local_104;
  undefined2 *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined2 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  int iStack_7c;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cb90c48 = param_1;
  local_138 = param_1;
  FUN_14020fad6(&local_58,L"Win64");
  FUN_140056680(&local_68,L"Release");
  iVar7 = (int)uStack_50;
  FUN_140056680(&local_f0);
  iVar2 = (int)local_e8;
  iVar5 = (uint)((int)local_e8 == 0) + iVar7 + (uint)(iVar7 == 0);
  local_88 = local_f0;
  local_f0 = (undefined2 *)0x0;
  local_80 = (int)local_e8;
  iVar7 = local_e8._4_4_;
  iStack_7c = local_e8._4_4_;
  local_e8 = 0;
  iVar12 = iVar5 + iVar2;
  if (iVar2 <= iVar12) {
    if (-1 < iVar12) {
      if ((iVar7 < iVar12) && (FUN_1446f8c06(&local_88), local_f0 != (undefined2 *)0x0)) {
        FUN_1400020a8();
      }
      iVar2 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar2 = 0;
      }
      FUN_1401aebe8(&local_88,local_58,iVar2);
      iVar3 = iStack_7c;
      iVar7 = local_80;
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      iVar5 = iVar2 + 1 + (uint)(local_80 == 0);
      local_f0 = local_88;
      local_88 = (undefined2 *)0x0;
      local_e8 = CONCAT44(iStack_7c,local_80);
      local_80 = 0;
      iStack_7c = 0;
      iVar12 = iVar5 + iVar7;
      if (iVar12 < iVar7) goto LAB_143e8c26e;
      if (-1 < iVar12) {
        if (iVar3 < iVar12) {
          FUN_1446f8c06(&local_f0);
        }
        FUN_1401aebe8(&local_f0,local_68,iVar2);
        FUN_143e8c277(&local_78,&local_f0);
        if (local_f0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar7 = (int)uStack_50;
        FUN_140056680(&local_f0);
        iVar2 = (int)local_e8;
        iVar5 = (uint)((int)local_e8 == 0) + iVar7 + (uint)(iVar7 == 0);
        local_98 = local_f0;
        local_f0 = (undefined2 *)0x0;
        iVar7 = local_e8._4_4_;
        local_90 = local_e8;
        local_e8 = 0;
        iVar12 = iVar5 + iVar2;
        if (iVar12 < iVar2) goto LAB_143e8c26e;
        if (-1 < iVar12) {
          if ((iVar7 < iVar12) && (FUN_1446f8c06(&local_98), local_f0 != (undefined2 *)0x0)) {
            FUN_1400020a8();
          }
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          FUN_1401aebe8(&local_98,local_58,iVar2);
          iVar2 = local_60 + -1;
          if (local_60 == 0) {
            iVar2 = 0;
          }
          iVar7 = (int)local_90;
          iVar5 = iVar2 + 1 + (uint)((int)local_90 == 0);
          local_f0 = local_98;
          local_98 = (undefined2 *)0x0;
          iVar3 = local_90._4_4_;
          local_e8 = local_90;
          local_90 = 0;
          iVar12 = iVar5 + iVar7;
          if (iVar12 < iVar7) goto LAB_143e8c26e;
          if (-1 < iVar12) {
            if (iVar3 < iVar12) {
              FUN_1446f8c06(&local_f0);
            }
            FUN_1401aebe8(&local_f0,local_68,iVar2);
            FUN_143e8c369(&local_88,&local_f0);
            if (local_f0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            iVar7 = (int)uStack_50;
            FUN_140056680(&local_f0);
            iVar2 = (int)local_e8;
            iVar5 = (uint)((int)local_e8 == 0) + iVar7 + (uint)(iVar7 == 0);
            local_a8 = local_f0;
            local_f0 = (undefined2 *)0x0;
            iVar7 = local_e8._4_4_;
            local_a0 = local_e8;
            local_e8 = 0;
            iVar12 = iVar5 + iVar2;
            if (iVar12 < iVar2) goto LAB_143e8c26e;
            if (-1 < iVar12) {
              if ((iVar7 < iVar12) && (FUN_1446f8c06(&local_a8), local_f0 != (undefined2 *)0x0)) {
                FUN_1400020a8();
              }
              iVar2 = (int)uStack_50 + -1;
              if ((int)uStack_50 == 0) {
                iVar2 = 0;
              }
              FUN_1401aebe8(&local_a8,local_58,iVar2);
              iVar2 = local_60 + -1;
              if (local_60 == 0) {
                iVar2 = 0;
              }
              iVar7 = (int)local_a0;
              iVar5 = iVar2 + 1 + (uint)((int)local_a0 == 0);
              local_f0 = local_a8;
              local_a8 = (undefined2 *)0x0;
              iVar3 = local_a0._4_4_;
              local_e8 = local_a0;
              local_a0 = 0;
              iVar12 = iVar5 + iVar7;
              if (iVar12 < iVar7) goto LAB_143e8c26e;
              if (-1 < iVar12) {
                if (iVar3 < iVar12) {
                  FUN_1446f8c06(&local_f0);
                }
                FUN_1401aebe8(&local_f0,local_68,iVar2);
                FUN_143e8c277(&local_98,&local_f0);
                if (local_f0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_a8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar7 = (int)uStack_50;
                FUN_140056680(&local_f0);
                iVar2 = (int)local_e8;
                iVar5 = (uint)((int)local_e8 == 0) + iVar7 + (uint)(iVar7 == 0);
                local_b8 = local_f0;
                local_f0 = (undefined2 *)0x0;
                iVar7 = local_e8._4_4_;
                local_b0 = local_e8;
                local_e8 = 0;
                iVar12 = iVar5 + iVar2;
                if (iVar12 < iVar2) goto LAB_143e8c26e;
                if (-1 < iVar12) {
                  if ((iVar7 < iVar12) && (FUN_1446f8c06(&local_b8), local_f0 != (undefined2 *)0x0))
                  {
                    FUN_1400020a8();
                  }
                  iVar2 = (int)uStack_50 + -1;
                  if ((int)uStack_50 == 0) {
                    iVar2 = 0;
                  }
                  FUN_1401aebe8(&local_b8,local_58,iVar2);
                  iVar2 = local_60 + -1;
                  if (local_60 == 0) {
                    iVar2 = 0;
                  }
                  iVar7 = (int)local_b0;
                  iVar5 = iVar2 + 1 + (uint)((int)local_b0 == 0);
                  local_f0 = local_b8;
                  local_b8 = (undefined2 *)0x0;
                  iVar3 = local_b0._4_4_;
                  local_e8 = local_b0;
                  local_b0 = 0;
                  iVar12 = iVar5 + iVar7;
                  if (iVar12 < iVar7) goto LAB_143e8c26e;
                  if (-1 < iVar12) {
                    if (iVar3 < iVar12) {
                      FUN_1446f8c06(&local_f0);
                    }
                    FUN_1401aebe8(&local_f0,local_68,iVar2);
                    FUN_143e8c369(&local_a8,&local_f0);
                    if (local_f0 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_b8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    puVar11 = local_98;
                    lVar13 = (longlong)(int)local_90;
                    local_c8 = (undefined2 *)0x0;
                    local_c0 = (int)local_90;
                    FUN_1446dd670(&local_c8,(int)local_90 + (uint)(lVar13 == 0) + 0x1e,0);
                    if (lVar13 != 0) {
                      memcpy(local_c8,puVar11,lVar13 * 2);
                    }
                    FUN_1401aebe8(&local_c8,L"RenoirCore.WindowsDesktop.dll",0x1d);
                    plVar8 = (longlong *)FUN_14054d1d4();
                    puVar11 = local_c8;
                    if (local_c0 == 0) {
                      puVar11 = &DAT_149dfb77a;
                    }
                    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar11);
                    if (cVar4 == '\0') {
                      lVar13 = 0;
                    }
                    else {
                      puVar11 = local_c8;
                      if (local_c0 == 0) {
                        puVar11 = &DAT_149dfb77a;
                      }
                      lVar13 = FUN_14155261e(puVar11);
                    }
                    if (local_c8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    puVar11 = local_a8;
                    if (lVar13 == 0) {
                      lVar13 = (longlong)(int)local_a0;
                      local_d8 = (undefined2 *)0x0;
                      local_d0 = (int)local_a0;
                      FUN_1446dd670(&local_d8,(int)local_a0 + (uint)(lVar13 == 0) + 0x1e,0);
                      if (lVar13 != 0) {
                        memcpy(local_d8,puVar11,lVar13 * 2);
                      }
                      FUN_1401aebe8(&local_d8,L"RenoirCore.WindowsDesktop.dll",0x1d);
                      plVar8 = (longlong *)FUN_14054d1d4();
                      puVar11 = local_d8;
                      if (local_d0 == 0) {
                        puVar11 = &DAT_149dfb77a;
                      }
                      cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar11);
                      if (cVar4 != '\0') {
                        puVar11 = local_d8;
                        if (local_d0 == 0) {
                          puVar11 = &DAT_149dfb77a;
                        }
                        FUN_14155261e(puVar11);
                      }
                      if (local_d8 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    plVar8 = (longlong *)(local_138 + 0x170);
                    if (*(int *)(local_138 + 0x178) == 0) {
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                      local_e8 = 0;
                      local_f0 = (undefined2 *)0x0;
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                      local_e8 = 0;
                      local_f0 = (undefined2 *)0x0;
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                      local_e8 = 0;
                      local_f0 = (undefined2 *)0x0;
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                      local_e8 = 0;
                      local_f0 = (undefined2 *)0x0;
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                      local_e8 = 0;
                      local_f0 = (undefined2 *)0x0;
                      FUN_140056680(&local_f0);
                      local_e0 = 0;
                      lVar13 = (longlong)*(int *)(local_138 + 0x178);
                      uVar6 = *(int *)(local_138 + 0x178) + 1;
                      *(uint *)(local_138 + 0x178) = uVar6;
                      if (*(uint *)(local_138 + 0x17c) < uVar6) {
                        FUN_1465680d4(plVar8);
                      }
                      lVar14 = *plVar8;
                      *(undefined8 *)(lVar14 + lVar13 * 0x18) = 0;
                      *(undefined2 **)(lVar14 + lVar13 * 0x18) = local_f0;
                      local_f0 = (undefined2 *)0x0;
                      *(int *)(lVar14 + 8 + lVar13 * 0x18) = (int)local_e8;
                      *(int *)(lVar14 + 0xc + lVar13 * 0x18) = local_e8._4_4_;
                      local_e8 = 0;
                      *(undefined8 *)(lVar14 + 0x10 + lVar13 * 0x18) = local_e0;
                    }
                    puVar11 = &DAT_149dfb77a;
                    if (local_70 != 0) {
                      puVar11 = local_78;
                    }
                    FUN_1458f4f8e(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if (local_80 != 0) {
                      puVar11 = local_88;
                    }
                    FUN_1458f4f8e(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if ((int)local_90 != 0) {
                      puVar11 = local_98;
                    }
                    FUN_1458f4f8e(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if ((int)local_a0 != 0) {
                      puVar11 = local_a8;
                    }
                    FUN_1458f4f8e(puVar11);
                    if (0 < *(int *)(local_138 + 0x178)) {
                      lVar13 = 0x10;
                      lVar14 = 0;
                      do {
                        iVar2 = local_70;
                        puVar11 = local_78;
                        lVar1 = *plVar8;
                        if (*(longlong *)(lVar1 + lVar13) == 0) {
                          iVar7 = *(int *)(lVar1 + -8 + lVar13);
                          iVar5 = iVar7 + -1;
                          if (iVar7 == 0) {
                            iVar5 = 0;
                          }
                          lVar15 = (longlong)local_70;
                          iVar7 = iVar5 + 1 + (uint)(lVar15 == 0);
                          local_100 = (undefined2 *)0x0;
                          local_f8 = local_70;
                          if (iVar7 == 0 && local_70 == 0) {
                            local_f4 = 0;
                          }
                          else {
                            iVar12 = iVar7 + local_70;
                            if (iVar7 < 0) goto LAB_143e8c267;
                            FUN_1446dd670(&local_100,iVar12,0);
                            if (iVar2 != 0) {
                              memcpy(local_100,puVar11,lVar15 * 2);
                            }
                          }
                          FUN_1401aebe8(&local_100,*(undefined8 *)(lVar1 + -0x10 + lVar13),iVar5);
                          plVar9 = (longlong *)FUN_14054d1d4();
                          puVar11 = &DAT_149dfb77a;
                          if (local_f8 != 0) {
                            puVar11 = local_100;
                          }
                          cVar4 = (**(code **)(*plVar9 + 0x48))(plVar9,puVar11);
                          if (cVar4 == '\0') {
                            lVar15 = 0;
                          }
                          else {
                            puVar11 = &DAT_149dfb77a;
                            if (local_f8 != 0) {
                              puVar11 = local_100;
                            }
                            lVar15 = FUN_14155261e(puVar11);
                          }
                          if (local_100 != (undefined2 *)0x0) {
                            FUN_1400020a8();
                          }
                          iVar2 = local_80;
                          puVar11 = local_88;
                          *(longlong *)(lVar1 + lVar13) = lVar15;
                          if (lVar15 == 0) {
                            iVar7 = *(int *)(lVar1 + -8 + lVar13);
                            iVar5 = iVar7 + -1;
                            if (iVar7 == 0) {
                              iVar5 = 0;
                            }
                            lVar15 = (longlong)local_80;
                            iVar7 = iVar5 + 1 + (uint)(lVar15 == 0);
                            local_110 = (undefined2 *)0x0;
                            local_108 = local_80;
                            if (iVar7 == 0 && local_80 == 0) {
                              local_104 = 0;
                            }
                            else {
                              iVar12 = iVar7 + local_80;
                              if (iVar7 < 0) goto LAB_143e8c267;
                              FUN_1446dd670(&local_110,iVar12,0);
                              if (iVar2 != 0) {
                                memcpy(local_110,puVar11,lVar15 * 2);
                              }
                            }
                            FUN_1401aebe8(&local_110,*(undefined8 *)(lVar1 + -0x10 + lVar13),iVar5);
                            plVar9 = (longlong *)FUN_14054d1d4();
                            puVar11 = &DAT_149dfb77a;
                            if (local_108 != 0) {
                              puVar11 = local_110;
                            }
                            cVar4 = (**(code **)(*plVar9 + 0x48))(plVar9,puVar11);
                            if (cVar4 == '\0') {
                              uVar10 = 0;
                            }
                            else {
                              puVar11 = &DAT_149dfb77a;
                              if (local_108 != 0) {
                                puVar11 = local_110;
                              }
                              uVar10 = FUN_14155261e(puVar11);
                            }
                            if (local_110 != (undefined2 *)0x0) {
                              FUN_1400020a8();
                            }
                            *(undefined8 *)(lVar1 + lVar13) = uVar10;
                          }
                        }
                        lVar14 = lVar14 + 1;
                        lVar13 = lVar13 + 0x18;
                      } while (lVar14 < *(int *)(local_138 + 0x178));
                    }
                    puVar11 = local_78;
                    lVar13 = (longlong)local_70;
                    local_120 = (undefined2 *)0x0;
                    local_118 = local_70;
                    FUN_1446dd670(&local_120,local_70 + (uint)(lVar13 == 0) + 0x1a,0);
                    if (lVar13 != 0) {
                      memcpy(local_120,puVar11,lVar13 * 2);
                    }
                    FUN_1401aebe8(&local_120,L"cohtml.WindowsDesktop.dll",0x19);
                    plVar8 = (longlong *)FUN_14054d1d4();
                    puVar11 = local_120;
                    if (local_118 == 0) {
                      puVar11 = &DAT_149dfb77a;
                    }
                    cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar11);
                    if (cVar4 == '\0') {
                      lVar13 = 0;
                    }
                    else {
                      puVar11 = local_120;
                      if (local_118 == 0) {
                        puVar11 = &DAT_149dfb77a;
                      }
                      lVar13 = FUN_14155261e(puVar11);
                    }
                    if (local_120 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    puVar11 = local_88;
                    *(longlong *)(local_138 + 0x168) = lVar13;
                    if (lVar13 == 0) {
                      lVar13 = (longlong)local_80;
                      local_130 = (undefined2 *)0x0;
                      local_128 = local_80;
                      FUN_1446dd670(&local_130,local_80 + (uint)(lVar13 == 0) + 0x1a,0);
                      if (lVar13 != 0) {
                        memcpy(local_130,puVar11,lVar13 * 2);
                      }
                      FUN_1401aebe8(&local_130,L"cohtml.WindowsDesktop.dll",0x19);
                      plVar8 = (longlong *)FUN_14054d1d4();
                      puVar11 = local_130;
                      if (local_128 == 0) {
                        puVar11 = &DAT_149dfb77a;
                      }
                      cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar11);
                      if (cVar4 == '\0') {
                        uVar10 = 0;
                      }
                      else {
                        puVar11 = local_130;
                        if (local_128 == 0) {
                          puVar11 = &DAT_149dfb77a;
                        }
                        uVar10 = FUN_14155261e(puVar11);
                      }
                      if (local_130 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      *(undefined8 *)(local_138 + 0x168) = uVar10;
                    }
                    puVar11 = &DAT_149dfb77a;
                    if ((int)local_a0 != 0) {
                      puVar11 = local_a8;
                    }
                    FUN_145be8130(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if ((int)local_90 != 0) {
                      puVar11 = local_98;
                    }
                    FUN_145be8130(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if (local_80 != 0) {
                      puVar11 = local_88;
                    }
                    FUN_145be8130(puVar11);
                    puVar11 = &DAT_149dfb77a;
                    if (local_70 != 0) {
                      puVar11 = local_78;
                    }
                    FUN_145be8130(puVar11);
                    if (local_a8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_98 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_88 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_78 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_68 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_58 != 0) {
                      FUN_1400020a8();
                    }
                    if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0();
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_143e8c267:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
LAB_143e8c26e:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4((longlong)iVar5);
}



// FUNCTION 143e8c277 FUN_143e8c277 body=240 status=ok
// SIG undefined FUN_143e8c277(void)

undefined8 FUN_143e8c277(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ef8e44(&local_48);
  iVar2 = local_3c;
  iVar1 = local_40;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  iVar3 = iVar5 + 1 + (uint)(local_40 == 0);
  local_38 = local_48;
  local_48 = 0;
  local_30 = local_40;
  local_2c = local_3c;
  local_40 = 0;
  local_3c = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar3);
  }
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar2 < iVar4) {
    FUN_1446f8c06(&local_38);
  }
  FUN_1401aebe8(&local_38,*param_2,iVar5);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1401aea18(param_1,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8c369 FUN_143e8c369 body=248 status=ok
// SIG undefined FUN_143e8c369(void)

undefined8 FUN_143e8c369(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d6ac5a();
  FUN_140056680(&local_48);
  iVar2 = local_3c;
  iVar1 = local_40;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  iVar3 = iVar5 + 1 + (uint)(local_40 == 0);
  local_38 = local_48;
  local_48 = 0;
  local_30 = local_40;
  local_2c = local_3c;
  local_40 = 0;
  local_3c = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar3);
  }
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar2 < iVar4) {
    FUN_1446f8c06(&local_38);
  }
  FUN_1401aebe8(&local_38,*param_2,iVar5);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1401aea18(param_1,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8c464 FUN_143e8c464 body=1568 status=ok
// SIG undefined FUN_143e8c464(void)

void FUN_143e8c464(longlong param_1)

{
  IAllocator *pIVar1;
  ILogHandler *pIVar2;
  IPerformanceHandler *pIVar3;
  IVirtualAllocator *pIVar4;
  IFileSystemWriter *pIVar5;
  wchar_t *_Str;
  Library *pLVar6;
  char cVar7;
  undefined4 uVar8;
  IAllocator *this;
  ILogHandler *this_00;
  IPerformanceHandler *this_01;
  IVirtualAllocator *this_02;
  IFileSystemWriter *this_03;
  IFileSystemWriter *pIVar9;
  size_t sVar10;
  Library *pLVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  code **ppcVar16;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  char *local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined4 local_160;
  undefined1 local_15c;
  code **local_e8;
  code **local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  IFileSystemWriter *pIStack_a0;
  undefined1 *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  this = (IAllocator *)FUN_14001cc68(8,0x10);
  cohtml::IAllocator::IAllocator(this);
  *(undefined ***)this = &PTR_LAB_14b452290;
  pIVar1 = *(IAllocator **)(param_1 + 0x120);
  if ((pIVar1 != this) && (*(IAllocator **)(param_1 + 0x120) = this, pIVar1 != (IAllocator *)0x0)) {
    (**(code **)(*(longlong *)pIVar1 + 0x38))(pIVar1,1);
  }
  this_00 = (ILogHandler *)FUN_14001cc68(0x48,0x10);
  cohtml::Logging::ILogHandler::ILogHandler(this_00);
  *(undefined ***)this_00 = &PTR_FUN_14b452ba0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x18) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(this_00 + 0x20),4000);
  pIVar2 = *(ILogHandler **)(param_1 + 0x128);
  if ((pIVar2 != this_00) &&
     (*(ILogHandler **)(param_1 + 0x128) = this_00, pIVar2 != (ILogHandler *)0x0)) {
    (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
  }
  this_01 = (IPerformanceHandler *)FUN_14001cc68(0x48,0x10);
  cohtml::Profile::IPerformanceHandler::IPerformanceHandler(this_01);
  *(undefined ***)this_01 = &PTR_FUN_14b452bb0;
  *(undefined8 *)(this_01 + 8) = 0;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined4 *)(this_01 + 0x18) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this_01 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(this_01 + 0x20),4000);
  pIVar3 = *(IPerformanceHandler **)(param_1 + 0x130);
  if ((pIVar3 != this_01) &&
     (*(IPerformanceHandler **)(param_1 + 0x130) = this_01, pIVar3 != (IPerformanceHandler *)0x0)) {
    (*(code *)**(undefined8 **)pIVar3)(pIVar3,1);
  }
  this_02 = (IVirtualAllocator *)FUN_14001cc68(8,0x10);
  cohtml::IVirtualAllocator::IVirtualAllocator(this_02);
  *(undefined ***)this_02 = &PTR_FUN_14b452bc0;
  pIVar4 = *(IVirtualAllocator **)(param_1 + 0x148);
  if ((pIVar4 != this_02) &&
     (*(IVirtualAllocator **)(param_1 + 0x148) = this_02, pIVar4 != (IVirtualAllocator *)0x0)) {
    (*(code *)**(undefined8 **)pIVar4)(pIVar4,1);
  }
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_190 = &local_168;
    local_168 = FUN_1449e2820;
    local_180 = FUN_14081d0ea;
    local_188 = FUN_14081d0ea;
    local_198 = &LAB_1489c8acb;
    local_1a0 = &LAB_146027b0e;
    local_1a8 = L"Engine";
    local_1b0 = 0;
    local_1b8 = 0x10000006;
    local_1c0 = 8;
    local_1c8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar12 = DAT_14cb907b8;
  lVar15 = DAT_14cb907b8[0x22];
  if (lVar15 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar15 = plVar12[0x22];
  }
  local_a8 = 0;
  pIStack_a0 = (IFileSystemWriter *)0x0;
  local_90 = 0x101;
  local_8e = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_58 = "Droid Sans";
  local_b8 = *(undefined8 *)(param_1 + 0x128);
  local_b0 = *(undefined8 *)(param_1 + 0x130);
  local_c0 = (uint)*(byte *)(lVar15 + 0x71);
  local_d0 = *(undefined8 *)(param_1 + 0x120);
  local_c8 = *(undefined8 *)(param_1 + 0x148);
  local_70 = FUN_143e8acaf;
  local_68 = 0;
  local_98 = &DAT_149e02088;
  local_168 = (code *)0x14b454200;
  local_160 = 0xc;
  local_15c = 0;
  uVar8 = FUN_14001a6c0(&local_168,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1402c9134(&DAT_14c874628,uVar8,&local_168,1);
  if ((DAT_14cb90c50 == (longlong *)0x0 || DAT_14cb90c58 == 0) ||
     (cVar7 = (**(code **)(*DAT_14cb90c50 + 0x30))(), cVar7 == '\0')) {
    this_03 = (IFileSystemWriter *)FUN_14001cc68(8,0x10);
    cohtml::IFileSystemWriter::IFileSystemWriter(this_03);
    *(undefined ***)this_03 = &PTR_FUN_14b452bf0;
    pIVar5 = *(IFileSystemWriter **)(param_1 + 0x158);
    pIVar9 = pIVar5;
    if ((pIVar5 != this_03) &&
       (*(IFileSystemWriter **)(param_1 + 0x158) = this_03, pIVar9 = this_03,
       pIVar5 != (IFileSystemWriter *)0x0)) {
      (*(code *)**(undefined8 **)pIVar5)(pIVar5,1);
      pIVar9 = *(IFileSystemWriter **)(param_1 + 0x158);
    }
  }
  else {
    plVar12 = DAT_14cb90c50;
    if (DAT_14cb90c58 == 0) {
      plVar12 = (longlong *)0x0;
    }
    pIVar9 = (IFileSystemWriter *)(**(code **)(*plVar12 + 0x58))();
  }
  pIStack_a0 = pIVar9;
  local_80 = (**(code **)(*DAT_14c82b500 + 0x30))();
  local_178 = (char *)0x0;
  uStack_170 = 0;
  if (1 < *(int *)(lVar15 + 0xa8)) {
    _Str = *(wchar_t **)(lVar15 + 0xa0);
    local_e8 = (code **)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_e0 = (code **)0x0;
      local_d8 = 0;
      iVar13 = 1;
    }
    else {
      sVar10 = wcslen(_Str);
      local_d8 = FUN_14475aa65(0,_Str,sVar10 & 0xffffffff);
      uVar14 = local_d8 + 1;
      ppcVar16 = (code **)0x0;
      if (0x80 < uVar14) {
        FUN_1446efa72(&local_e8,0,uVar14,1);
        ppcVar16 = local_e8;
      }
      local_e0 = &local_168;
      if (ppcVar16 != (code **)0x0) {
        local_e0 = ppcVar16;
      }
      FUN_14475a98a(local_e0,uVar14,_Str,(int)sVar10 + 1);
      iVar13 = local_d8 + 1;
    }
    FUN_1410fe350(&local_178,iVar13,1);
    memcpy(local_178,local_e0,(longlong)local_d8);
    local_178[(int)uStack_170 + -1] = '\0';
    local_58 = local_178;
    if (local_e8 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  local_90 = CONCAT11(local_90._1_1_,1);
  pLVar11 = cohtml::Library::InitializeWithRenderingLibrary
                      ("AAEAAENDbewB3XJvunqAdbCh7tlF3nHP0Wb+iFtbWOvuwtznkv4AcIo2diiSk5JEKDL2NVE9lljjv8iQl5rS+i9s+2d2rAKO3W9GY3eGgF2Z9fjmU6LT/KeauufV8lYOog5P3FYo9XsEDzDnNsZfmsyCZfhwszEFCDHCNxsuousiIc2ojuyV0M1WxW9uFGdsuEgy/Sggsq1Eg07T+XdQ64cOXw1VKLDXgEdFnL6eqATd/7U0UUhPsopyYIX2ZDTrxBYQHuv5t6Vpw8lHWzr1ZQsJsLtkNcyDDQYoGmzS9KXAIKpm5Fox4HHUkduWTS8Q/tfMMKo4QvWOvpUyAM1w6DVTZ3+B6khrPHFGzoDj8bL3fzaMJra5h3CrI29wKnyJStpeMpaRFDOcm5ip6RTkP/QwLxfzRQRPjIK3VWR1oVpSXxZY1Cu/16z7W5T6OTNyMmZzNI4bEJmIaSzV5oosIjnRYGCBzEQWnx6PiIiNuamNz8tNBYGjsChBQlROQJqE+oWK78kfeQHO5tVq6XPTVH1AjpQ1pO0HB92l4xGtqtFTUs5q/4K9eCLQiX51XbFeue8N9DTITjtvmDzJYxql0FQ="
                       ,(LibraryParamsWithExternalRenderingLibrary *)&local_d0,
                       *(IRenderingLibrary **)(param_1 + 0x138));
  pLVar6 = *(Library **)(param_1 + 0x140);
  if ((pLVar6 != pLVar11) && (*(Library **)(param_1 + 0x140) = pLVar11, pLVar6 != (Library *)0x0)) {
    (**(code **)(*(longlong *)pLVar6 + 0x18))(pLVar6,0);
  }
  if (local_178 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8ca86 FUN_143e8ca86 body=758 status=ok
// SIG undefined FUN_143e8ca86(void)

void FUN_143e8ca86(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  HMODULE hLibModule;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = "CohtmlPlugin";
  local_38 = 0xc;
  local_34 = 0;
  uVar4 = FUN_14001a6c0(&local_40,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  lVar6 = FUN_1402c9134(&DAT_14c874628,uVar4,&local_40,1);
  FUN_1447cd2ec(lVar6 + 8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_40 = "CoherentRenderingPlugin";
  local_38 = 0x17;
  local_34 = 0;
  uVar4 = FUN_14001a6c0(&local_40,1);
  FUN_14156ce54(&DAT_14c874628,uVar4,1,1);
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
    plVar1 = *(longlong **)(param_1 + 0x140);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
  }
  FUN_145ed7426();
  plVar1 = DAT_14cb90e30;
  if (DAT_14cb90e30 != (longlong *)0x0) {
    DAT_14cb90e30 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    (**(code **)(*plVar1 + 0x38))(plVar1,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x130);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x150);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x158);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar5 = *(int *)(param_1 + 0x178);
  if (0 < iVar5) {
    lVar7 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x170);
      hLibModule = *(HMODULE *)(lVar3 + lVar7);
      if (hLibModule != (HMODULE)0x0) {
        FreeLibrary(hLibModule);
        *(undefined8 *)(lVar3 + lVar7) = 0;
        iVar5 = *(int *)(param_1 + 0x178);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar6 < iVar5);
  }
  if (*(HMODULE *)(param_1 + 0x168) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x168));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8cd7e FUN_143e8cd7e body=1360 status=ok
// SIG undefined FUN_143e8cd7e(void)

void FUN_143e8cd7e(longlong param_1,uint param_2,undefined2 **param_3,ulonglong param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined2 **ppuVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  wchar_t *_Str;
  bool bVar18;
  undefined1 auStack_168 [39];
  byte local_141;
  longlong **local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [8];
  longlong local_100 [2];
  undefined2 *local_f0;
  undefined8 local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  undefined2 **local_60;
  undefined2 **local_58;
  int local_50;
  ulonglong local_48;
  
  uVar10 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140056680(&local_e0);
  _Str = L"";
  puVar3 = local_e0;
  if ((int)local_d8 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  lVar8 = 0;
  while( true ) {
    uVar12 = *(ushort *)((longlong)puVar3 + lVar8);
    uVar13 = (ulonglong)uVar12;
    uVar14 = *(ushort *)((longlong)L"Debug" + lVar8);
    if (uVar12 != uVar14) break;
    if (uVar12 == 0) goto LAB_143e8cea0;
LAB_143e8ce04:
    lVar8 = lVar8 + 2;
  }
  if ((uVar14 | uVar12) < 0x80) {
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar16 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar16]) goto LAB_143e8ce04;
  }
  if (uVar12 != uVar14) {
    FUN_140056680(&local_f0,L"Release");
    puVar3 = local_f0;
    if ((int)local_e8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    lVar8 = 0;
    goto LAB_143e8ce5c;
  }
LAB_143e8cea0:
  bVar18 = false;
  goto LAB_143e8cea2;
LAB_143e8ce5c:
  uVar12 = *(ushort *)((longlong)puVar3 + lVar8);
  uVar11 = (uint)uVar12;
  uVar14 = *(ushort *)((longlong)L"Development" + lVar8);
  uVar15 = (uint)uVar14;
  if (uVar12 != uVar14) {
    if ((uVar14 | uVar12) < 0x80) {
      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar12];
      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_143e8ce74;
    }
    iVar6 = uVar11 - uVar15;
    goto LAB_143e8d282;
  }
  if (uVar12 == 0) goto LAB_143e8d280;
LAB_143e8ce74:
  lVar8 = lVar8 + 2;
  goto LAB_143e8ce5c;
LAB_143e8d280:
  iVar6 = 0;
LAB_143e8d282:
  bVar18 = iVar6 != 0;
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e8cea2:
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar18) || (plVar17 = *(longlong **)(param_1 + 0x140), plVar17 == (longlong *)0x0))
  goto LAB_143e8d245;
  local_141 = (byte)param_2;
  if (*(int *)(param_3 + 1) < 2) {
    FUN_1402160b8(local_108);
    FUN_14047ad2e(local_108,local_100,L"%Y%m%d_%H%M%S");
    puVar4 = (undefined8 *)FUN_14047ac8c();
    iVar6 = *(int *)(puVar4 + 1);
    lVar8 = (longlong)iVar6;
    local_138 = (void *)0x0;
    _Src = (void *)*puVar4;
    local_130 = CONCAT44(local_130._4_4_,iVar6);
    FUN_1446dd670(&local_138,(uint)(lVar8 == 0) + iVar6 + 7,0);
    if (lVar8 != 0) {
      memcpy(local_138,_Src,lVar8 * 2);
    }
    FUN_1401aebe8(&local_138,L"Cohtml",6);
    iVar6 = (int)local_130;
    iVar2 = ((int)local_130 == 0) + 10;
    local_128 = local_138;
    local_138 = (void *)0x0;
    iVar1 = local_130._4_4_;
    local_120 = local_130;
    local_130 = 0;
    iVar7 = iVar2 + iVar6;
    if (iVar7 < iVar6) {
LAB_143e8d2c1:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    uVar10 = (ulonglong)local_141;
    if (iVar7 < 0) {
LAB_143e8d2c8:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar1 < iVar7) {
      FUN_1446f8c06(&local_128);
    }
    FUN_1401aebe8(&local_128,L"profiling",9);
    iVar6 = (int)local_120;
    iVar2 = ((int)local_120 == 0) + 6;
    local_118 = local_128;
    local_128 = (void *)0x0;
    local_110 = (int)local_120;
    iVar1 = local_120._4_4_;
    local_10c = local_120._4_4_;
    local_120 = 0;
    iVar7 = iVar2 + iVar6;
    if (iVar7 < iVar6) goto LAB_143e8d2c1;
    if (iVar7 < 0) goto LAB_143e8d2c8;
    if (iVar1 < iVar7) {
      FUN_1446f8c06(&local_118);
    }
    FUN_1401aebe8(&local_118,L"trace",5);
    FUN_1401c7f3e(&local_f0,&local_118,local_100);
    iVar6 = (int)local_e8;
    iVar2 = ((int)local_e8 == 0) + 5;
    local_e0 = local_f0;
    local_f0 = (undefined2 *)0x0;
    iVar1 = local_e8._4_4_;
    local_d8 = local_e8;
    local_e8 = 0;
    iVar7 = iVar2 + iVar6;
    if (iVar7 < iVar6) goto LAB_143e8d2c1;
    if (iVar7 < 0) goto LAB_143e8d2c8;
    if (iVar1 < iVar7) {
      FUN_1446f8c06(&local_e0);
    }
    FUN_1400020e8(&local_e0,L".json",5);
    if (&local_e0 == param_3) {
      if (local_e0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_3 = local_e0;
      local_e0 = (undefined2 *)0x0;
      *(int *)(param_3 + 1) = (int)local_d8;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_d8._4_4_;
      local_d8 = 0;
    }
    if (local_f0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_100[0] != 0) {
      FUN_1400020a8();
    }
    plVar17 = *(longlong **)(param_1 + 0x140);
    if (*(int *)(param_3 + 1) != 0) goto LAB_143e8d16a;
LAB_143e8d1c1:
    local_140 = (longlong **)&local_60;
    local_60 = (undefined2 **)0x0;
    sVar5 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
    uVar11 = local_50 + 1;
    ppuVar9 = (undefined2 **)0x0;
    if (0x80 < uVar11) {
      FUN_1446efa72(local_140,0,uVar11,1);
      ppuVar9 = local_60;
    }
    local_58 = &local_e0;
    if (ppuVar9 != (undefined2 **)0x0) {
      local_58 = ppuVar9;
    }
    FUN_14475a98a(local_58,uVar11,_Str,(int)sVar5 + 1);
    uVar10 = CONCAT71((int7)(param_4 >> 8),local_141) & 0xffffffff;
  }
  else {
LAB_143e8d16a:
    _Str = *param_3;
    local_60 = (undefined2 **)0x0;
    if (_Str != (wchar_t *)0x0) goto LAB_143e8d1c1;
    local_58 = (undefined2 **)0x0;
    local_50 = 0;
  }
  (**(code **)(*plVar17 + 0x30))(plVar17,uVar10,local_58,param_4 & 0xffffffff);
  if (local_60 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
LAB_143e8d245:
  if (*param_3 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8d2d0 FUN_143e8d2d0 body=265 status=ok
// SIG undefined FUN_143e8d2d0(void)

void FUN_143e8d2d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,void **param_6,undefined8 param_7)

{
  void *_Src;
  char cVar1;
  char cVar2;
  void *_Dst;
  size_t _Size;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  void **local_68;
  undefined8 *local_60;
  undefined8 local_50;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_48;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_60 = &local_50;
  local_50 = 0;
  cVar1 = FUN_140ba7c02(param_7,param_3,param_4,param_2);
  cVar2 = FUN_1489d30aa(param_1,param_5);
  if (cVar1 == '\0') {
    if (cVar2 != '\0') goto LAB_143e8d395;
    uVar3 = 1;
  }
  else {
    if (cVar2 != '\0') goto LAB_143e8d395;
    local_68 = param_6;
    FUN_140ba9b16(local_50,(longlong)(int)uStack_40,param_3,param_2);
    _Src = local_48;
    _Size = (size_t)(int)uStack_40;
    _Dst = (void *)(**(code **)((longlong)*param_6 + 8))(param_6,_Size);
    memcpy(_Dst,_Src,_Size);
    uVar3 = 0;
  }
  FUN_1489d3126(param_1,param_5,uVar3);
LAB_143e8d395:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8d3fa FUN_143e8d3fa body=308 status=ok
// SIG undefined FUN_143e8d3fa(void)

undefined8 FUN_143e8d3fa(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *_Str;
  undefined1 auStack_188 [44];
  uint local_15c;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  sVar1 = strlen(param_2);
  local_15c = 0;
  cohtml::Library::DecodeURLString(param_2,(uint)sVar1,(char *)0x0,&local_15c);
  _Str = (char *)FUN_14001cc68(local_15c + (local_15c == 0),0x10);
  cohtml::Library::DecodeURLString(param_2,(uint)sVar1,_Str,&local_15c);
  local_58 = 0;
  if (_Str == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar1 = strlen(_Str);
    FUN_1446e6fe8(local_158,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_142746682(param_1,local_50,local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (_Str != (char *)0x0) {
    FUN_1400020a8(_Str);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8d568 FUN_143e8d568 body=282 status=ok
// SIG undefined FUN_143e8d568(void)

undefined8 * FUN_143e8d568(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8d682 FUN_143e8d682 body=282 status=ok
// SIG undefined FUN_143e8d682(void)

undefined8 * FUN_143e8d682(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8d79c FUN_143e8d79c body=347 status=ok
// SIG undefined FUN_143e8d79c(void)

ISyncStreamWriter * FUN_143e8d79c(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ISyncStreamWriter *this;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_28);
  FUN_140c540b4(&local_28,&DAT_149e065c6,1,1);
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1457bae9a(&local_28,&local_38);
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,puVar4,1);
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar1 = (longlong *)*plVar2;
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar1;
  }
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar3 = (**(code **)(*plVar1 + 0x100))(plVar1,puVar4,0,0);
  this = (ISyncStreamWriter *)FUN_14001cc68(0x10,0x10);
  cohtml::ISyncStreamWriter::ISyncStreamWriter(this);
  *(undefined ***)this = &PTR_FUN_14b452c00;
  *(undefined8 *)(this + 8) = uVar3;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return this;
}



// FUNCTION 143e8d93e FUN_143e8d93e body=29 status=ok
// SIG undefined FUN_143e8d93e(void)

undefined8 FUN_143e8d93e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8d9c8 FUN_143e8d9c8 body=12 status=ok
// SIG undefined FUN_143e8d9c8(void)

void FUN_143e8d9c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8d9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8d9d4 FUN_143e8d9d4 body=57 status=ok
// SIG undefined FUN_143e8d9d4(void)

undefined8 * FUN_143e8d9d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b452fe0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8da0e FUN_143e8da0e body=282 status=ok
// SIG undefined FUN_143e8da0e(void)

undefined8 * FUN_143e8da0e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8db28 FUN_143e8db28 body=180 status=ok
// SIG undefined FUN_143e8db28(void)

void FUN_143e8db28(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) &&
        (*(int *)(puVar4 + 2) == *(int *)((longlong)param_1 + 0xac))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1489cc248(uVar3,param_1 + 0x16);
    }
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8dbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e8dbdc FUN_143e8dbdc body=398 status=ok
// SIG undefined FUN_143e8dbdc(void)

void FUN_143e8dbdc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 == (longlong *)0x0 || param_2 == 0) goto LAB_143e8dd1f;
  if (*(int *)*param_1 != -1) {
    iVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (iVar1 != *(int *)*param_1) goto LAB_143e8dd1f;
    plVar4 = *(longlong **)(param_2 + 8);
  }
  if ((int)(*(longlong **)param_1[1])[1] == 0) {
    _Str = L"";
LAB_143e8dc82:
    local_58 = (undefined1 *)0x0;
    sVar2 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
    uVar3 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar3) {
      FUN_1446efa72(&local_58,0,uVar3,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar3,_Str,(int)sVar2 + 1);
  }
  else {
    _Str = (wchar_t *)**(longlong **)param_1[1];
    local_58 = (undefined1 *)0x0;
    if (_Str != (wchar_t *)0x0) goto LAB_143e8dc82;
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,local_50);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)param_1[2] = 1;
LAB_143e8dd1f:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e8dd6c FUN_143e8dd6c body=554 status=ok
// SIG undefined FUN_143e8dd6c(void)

void FUN_143e8dd6c(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_2 + 8);
  if (plVar8 != (longlong *)0x0 && param_2 != 0) {
    if (*(int *)*param_1 != -1) {
      iVar5 = (**(code **)(*plVar8 + 0x38))();
      if (iVar5 != *(int *)*param_1) goto LAB_143e8ddb6;
      plVar8 = *(longlong **)(param_2 + 8);
    }
    lVar3 = *(longlong *)param_1[1];
    uVar7 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_40 = plVar8;
    pbVar6 = (byte *)FUN_1489d5710(lVar3 + 0x10,uVar7 >> 0x10 ^ uVar7);
    bVar2 = *pbVar6;
    *pbVar6 = bVar2 ^ 1;
    uVar4 = 1;
    if (bVar2 == 1) {
      iVar5 = *(int *)(lVar3 + 0x38);
      if (iVar5 == 0) {
        uVar17 = 1;
        uVar9 = 0;
        iVar13 = 0;
        iVar11 = 0;
      }
      else {
        puVar14 = *(uint **)(lVar3 + 0x30);
        if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
          puVar14 = (uint *)(lVar3 + 0x20);
        }
        uVar7 = *puVar14;
        if (uVar7 == 0) {
          iVar11 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar11 = iVar5 + -1;
          }
          uVar9 = 0;
          uVar17 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar17 = uVar9;
          }
          iVar13 = 0;
          do {
            if (uVar17 == uVar9) goto LAB_143e8df7c;
            iVar13 = iVar13 + 0x20;
            uVar7 = puVar14[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar9 = 0;
          iVar13 = 0;
        }
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar11) {
          iVar11 = iVar5;
        }
      }
      if (iVar11 != iVar5) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        uVar7 = 0xffffffff;
        do {
          if (*(char *)(*(longlong *)(lVar3 + 0x10) + 8 + (longlong)iVar11 * 0x18) != '\0')
          goto LAB_143e8df81;
          uVar7 = uVar7 & ~(uint)uVar17;
          puVar14 = *(uint **)(lVar3 + 0x30);
          if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
            puVar14 = (uint *)(lVar3 + 0x20);
          }
          iVar11 = (int)uVar9;
          lVar18 = (longlong)iVar11;
          uVar12 = puVar14[lVar18] & uVar7;
          if (uVar12 == 0) {
            iVar16 = iVar15;
            if (iVar15 < iVar11) {
              iVar16 = iVar11;
            }
            if (iVar15 <= iVar11) break;
            lVar10 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar12 = puVar14[lVar18 + lVar10 + 1];
              if (uVar12 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar16 - lVar18 == lVar10) goto LAB_143e8df7c;
            }
            uVar9 = (ulonglong)(iVar11 + (int)lVar10 + 1);
            uVar7 = 0xffffffff;
          }
          uVar17 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar17 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar11 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar5);
      }
LAB_143e8df7c:
      uVar4 = 0;
    }
    *(undefined1 *)(lVar3 + 8) = uVar4;
LAB_143e8df81:
    *(undefined1 *)param_1[2] = 1;
  }
LAB_143e8ddb6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8dfb2 FUN_143e8dfb2 body=12 status=ok
// SIG undefined FUN_143e8dfb2(void)

void FUN_143e8dfb2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8dfbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8dfbe FUN_143e8dfbe body=29 status=ok
// SIG undefined FUN_143e8dfbe(void)

undefined8 FUN_143e8dfbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8dfdc FUN_143e8dfdc body=282 status=ok
// SIG undefined FUN_143e8dfdc(void)

undefined8 * FUN_143e8dfdc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8e0f6 FUN_143e8e0f6 body=111 status=ok
// SIG undefined FUN_143e8e0f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8e0f6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140e423cc(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140e423cc(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8e13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143e8e180 FUN_143e8e180 body=12 status=ok
// SIG undefined FUN_143e8e180(void)

void FUN_143e8e180(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8e189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8e18c FUN_143e8e18c body=29 status=ok
// SIG undefined FUN_143e8e18c(void)

undefined8 FUN_143e8e18c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8e1aa FUN_143e8e1aa body=282 status=ok
// SIG undefined FUN_143e8e1aa(void)

undefined8 * FUN_143e8e1aa(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8e2c4 FUN_143e8e2c4 body=111 status=ok
// SIG undefined FUN_143e8e2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8e2c4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140e423cc(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140e423cc(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8e308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143e8e334 FUN_143e8e334 body=311 status=ok
// SIG undefined FUN_143e8e334(void)

void FUN_143e8e334(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 == (longlong *)0x0 || param_2 == 0) goto LAB_143e8e44b;
  if (*(int *)*param_1 == -1) {
LAB_143e8e390:
    local_30 = 0;
    (**(code **)(*plVar2 + 0x178))(plVar2,1,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x178))
              (*(longlong **)(param_2 + 8),2,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x178))
              (*(longlong **)(param_2 + 8),4,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x180))
              (*(longlong **)(param_2 + 8),4,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x180))
              (*(longlong **)(param_2 + 8),8,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x180))
              (*(longlong **)(param_2 + 8),0x10,local_2c,&local_30);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x180))
              (*(longlong **)(param_2 + 8),0x200,local_2c,&local_30);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x38))();
    if (iVar1 != *(int *)*param_1) goto LAB_143e8e44b;
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) goto LAB_143e8e390;
  }
  *(undefined1 *)param_1[2] = 1;
LAB_143e8e44b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8e46c FUN_143e8e46c body=259 status=ok
// SIG undefined FUN_143e8e46c(void)

void FUN_143e8e46c(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "CohtmlPlugin";
  local_20 = 0xc;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,&local_28,1);
  FUN_1400b22c2(&local_28,&DAT_149e02088);
  (**(code **)(*plVar2 + 0x40))(plVar2,0,&local_28,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8e58a FUN_143e8e58a body=12 status=ok
// SIG undefined FUN_143e8e58a(void)

void FUN_143e8e58a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e8e593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e8e596 FUN_143e8e596 body=29 status=ok
// SIG undefined FUN_143e8e596(void)

undefined8 FUN_143e8e596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8e5b4 FUN_143e8e5b4 body=282 status=ok
// SIG undefined FUN_143e8e5b4(void)

undefined8 * FUN_143e8e5b4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143e8d541);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143e8e6ce FUN_143e8e6ce body=108 status=ok
// SIG undefined FUN_143e8e6ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8e6ce(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1447fd100(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1447fd100(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8e711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143e8e760 FUN_143e8e760 body=29 status=ok
// SIG undefined FUN_143e8e760(void)

undefined8 FUN_143e8e760(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e8e77e FUN_143e8e77e body=83 status=ok
// SIG undefined FUN_143e8e77e(void)

undefined8 * FUN_143e8e77e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b453370;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 143e8e7e6 FUN_143e8e7e6 body=124 status=ok
// SIG undefined FUN_143e8e7e6(void)

void FUN_143e8e7e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e8e862 FUN_143e8e862 body=124 status=ok
// SIG undefined FUN_143e8e862(void)

void FUN_143e8e862(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e8e8de FUN_143e8e8de body=162 status=ok
// SIG undefined FUN_143e8e8de(void)

void FUN_143e8e8de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453370;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e8e980 FUN_143e8e980 body=98 status=ok
// SIG undefined FUN_143e8e980(void)

void FUN_143e8e980(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(longlong *)(param_1 + 0x30);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined4 *)(param_1 + 0x20),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8e9e4 FUN_143e8e9e4 body=100 status=ok
// SIG undefined FUN_143e8e9e4(void)

undefined8 FUN_143e8e9e4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(longlong *)(param_1 + 0x30);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined4 *)(param_1 + 0x20),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e8ea4a FUN_143e8ea4a body=83 status=ok
// SIG undefined FUN_143e8ea4a(void)

undefined8 * FUN_143e8ea4a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b453550;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 143e8eab2 FUN_143e8eab2 body=124 status=ok
// SIG undefined FUN_143e8eab2(void)

void FUN_143e8eab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e8eb2e FUN_143e8eb2e body=124 status=ok
// SIG undefined FUN_143e8eb2e(void)

void FUN_143e8eb2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e8ebaa FUN_143e8ebaa body=162 status=ok
// SIG undefined FUN_143e8ebaa(void)

void FUN_143e8ebaa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e8ec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e8ec4c FUN_143e8ec4c body=159 status=ok
// SIG undefined FUN_143e8ec4c(void)

void FUN_143e8ec4c(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_4;
  FUN_143e8ed98(param_1 + 0x18,param_2,param_3,&local_19);
  plVar3 = *(longlong **)(param_2 + 8);
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
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


