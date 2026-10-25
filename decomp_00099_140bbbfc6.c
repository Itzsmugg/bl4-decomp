// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140bbbfc6 FUN_140bbbfc6 body=84 status=ok
// SIG undefined FUN_140bbbfc6(void)

void FUN_140bbbfc6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1402e44f4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140bbc003;
    }
  }
  lVar2 = 0;
LAB_140bbc003:
                    /* WARNING: Could not recover jumptable at 0x000140bbc017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc48))(param_1,lVar2);
  return;
}



// FUNCTION 140bbc028 FUN_140bbc028 body=31 status=ok
// SIG undefined FUN_140bbc028(void)

undefined8 FUN_140bbc028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bbc048 FUN_140bbc048 body=62 status=ok
// SIG undefined FUN_140bbc048(void)

void FUN_140bbc048(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bbc088 FUN_140bbc088 body=418 status=ok
// SIG undefined FUN_140bbc088(void)

/* WARNING: Removing unreachable block (ram,0x000140bbc1df) */
/* WARNING: Removing unreachable block (ram,0x000140bbc1e9) */
/* WARNING: Removing unreachable block (ram,0x000140bbc1fb) */

ulonglong FUN_140bbc088(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  local_40 = 0;
  uStack_3b = 0;
  local_38 = 0;
  local_34 = 0;
  local_60 = *param_5;
  plStack_58 = (longlong *)param_5[1];
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  local_50 = param_5[2];
  lVar5 = param_5[3];
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_5[3];
    }
  }
  uStack_48 = (undefined5)lVar5;
  uStack_43 = (undefined3)((ulonglong)lVar5 >> 0x28);
  lVar5 = param_5[4];
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_5[4];
    }
  }
  local_40 = (undefined5)lVar5;
  uStack_3b = (undefined3)((ulonglong)lVar5 >> 0x28);
  local_34 = *(undefined1 *)((longlong)param_5 + 0x2c);
  local_38 = *(undefined4 *)(param_5 + 5);
  uVar4 = FUN_14477b072(param_1,DAT_14cacc4e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_78);
  plVar3 = plStack_58;
  uVar6 = CONCAT71((int7)((ulonglong)param_5 >> 8),local_30);
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140bbc22b FUN_140bbc22b body=187 status=ok
// SIG undefined FUN_140bbc22b(void)

void FUN_140bbc22b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bbc2e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1c4540;
  puVar1[0x19] = &PTR_FUN_14a1c4a18;
  puVar1[0x1a] = &PTR_FUN_14a1c4a30;
  puVar1[0x1b] = &PTR_FUN_14a1c4a70;
  puVar1[0x1c] = &PTR_FUN_14a1c4ab0;
  puVar1[0xb1] = &PTR_FUN_14a1c4ad0;
  puVar1[0xbb] = 0;
  *(undefined4 *)(puVar1 + 0xbc) = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb5] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5ec) = 0;
  puVar1[0xbf] = 0;
  *(undefined4 *)(puVar1 + 0xc0) = 0;
  return;
}



// FUNCTION 140bbc2e6 FUN_140bbc2e6 body=1157 status=ok
// SIG undefined FUN_140bbc2e6(void)

undefined8 * FUN_140bbc2e6(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined4 local_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined4 local_78;
  uint local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140307e00();
  *param_1 = &PTR_FUN_14aa88280;
  param_1[0x19] = &PTR_FUN_14aa88758;
  param_1[0x1a] = &PTR_FUN_14aa88770;
  param_1[0x1b] = &PTR_FUN_14aa887b0;
  param_1[0x1c] = &PTR_FUN_14aa887f0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xf0 | 8;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff80000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = DAT_14c761520;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = DAT_14c761524;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  plVar1 = param_1 + 0x49;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x90] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  memset(param_1 + 0x92,0,0x90);
  *(undefined1 *)((longlong)param_1 + 0x524) = 1;
  param_1[0xa5] = 0xbf8000003f800000;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  local_80 = 0;
  local_78 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0x80;
  uStack_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_a8 = 0;
  if (plVar1 != local_b8) {
    *(undefined4 *)(param_1 + 0x4a) = 0;
    if (*(int *)((longlong)param_1 + 0x254) != 0) {
      FUN_1446dd670(plVar1,0);
    }
  }
  *(undefined4 *)(param_1 + 0x4b) = local_a8;
  FUN_140308010(param_1 + 0x4c,&local_a0);
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_98 >> 0x20;
  uStack_98 = uStack_98 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_14472eb64(&local_a0,0);
  }
  uStack_70 = 0xffffffff;
  local_6c = 0;
  local_78 = 0;
  if (0x80 < local_74) {
    local_74 = 0x80;
    FUN_1446efbd8(local_90,0);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14030806e(plVar1,L"r.SkeletalMesh.MinLodQualityLevel",L"ViewDistanceQuality");
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbc76c FUN_140bbc76c body=114 status=ok
// SIG undefined FUN_140bbc76c(void)

void FUN_140bbc76c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x910) != '\x01') {
    iVar1 = *(int *)(param_1 + 0x818);
    *(uint *)(param_1 + 0x818) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x81c) < iVar1 + 1U) {
      FUN_145781758(param_1 + 0x10,iVar1);
    }
    lVar2 = param_1 + 0x10;
    if (*(longlong *)(param_1 + 0x810) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x810);
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
    return;
  }
  FUN_140bbc7de(param_1,param_2);
  return;
}



// FUNCTION 140bbc7de FUN_140bbc7de body=620 status=ok
// SIG undefined FUN_140bbc7de(void)

void FUN_140bbc7de(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined1 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  int iVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_2 + 4);
  plVar1 = (longlong *)(param_1 + 0x820);
  local_70 = lVar2;
  local_68 = param_2;
  if (*(int *)(param_1 + 0x868) != 0) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar9 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x858;
    if (*(longlong *)(param_1 + 0x860) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x860);
    }
    iVar7 = *(int *)(lVar5 + (longlong)
                             (int)(*(int *)(param_1 + 0x868) - 1U &
                                  ((uint)lVar2 << 0x10 | uVar9) + (int)((ulonglong)lVar2 >> 0x20) +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    while (iVar8 = iVar7, iVar8 != -1) {
      lVar5 = *plVar1;
      iVar7 = *(int *)(lVar5 + 0x10 + (longlong)iVar8 * 0x18);
      if (*(longlong *)(lVar5 + (longlong)iVar8 * 0x18) == lVar2) {
        do {
          lVar6 = (longlong)iVar8;
          puVar4 = *(undefined1 **)(lVar5 + 8 + lVar6 * 0x18);
          if (puVar4 == local_68) {
            FUN_1400021e4(&local_70,&local_60);
            plVar10 = (longlong *)&DAT_149dfb77a;
            if ((int)local_58 != 0) {
              plVar10 = local_60;
            }
            FUN_140033559(".\\Runtime/Core/Private/Logging/LogSuppressionInterface.cpp",0x1c3,
                          L"Log suppression category %s was somehow declared twice with the same data."
                          ,plVar10);
            if (local_60 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            puVar4 = *(undefined1 **)(*plVar1 + 8 + lVar6 * 0x18);
          }
          if (puVar4[3] != local_68[3]) {
            FUN_1400021e4(&local_70,&local_60);
            plVar10 = (longlong *)&DAT_149dfb77a;
            if ((int)local_58 != 0) {
              plVar10 = local_60;
            }
            FUN_140033559(".\\Runtime/Core/Private/Logging/LogSuppressionInterface.cpp",0x1c8,
                          L"Log suppression category %s is defined multiple times with different compile time verbosity."
                          ,plVar10);
            if (local_60 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            puVar4 = *(undefined1 **)(*plVar1 + 8 + lVar6 * 0x18);
          }
          *local_68 = *puVar4;
          local_68[1] = *(undefined1 *)(*(longlong *)(*plVar1 + 8 + lVar6 * 0x18) + 1);
          local_68[2] = *(undefined1 *)(*(longlong *)(*plVar1 + 8 + lVar6 * 0x18) + 2);
          do {
            iVar8 = iVar7;
            if (iVar8 == -1) {
              local_58 = &local_68;
              local_60 = &local_70;
              FUN_140bbca4c(plVar1,local_4c);
              goto LAB_140bbc953;
            }
            lVar5 = *plVar1;
            iVar7 = *(int *)(lVar5 + 0x10 + (longlong)iVar8 * 0x18);
          } while (*(longlong *)(lVar5 + (longlong)iVar8 * 0x18) != lVar2);
        } while( true );
      }
    }
  }
  local_60 = &local_70;
  local_58 = &local_68;
  FUN_140bbca4c(plVar1,local_4c);
  FUN_140bbcc10(param_1,local_68,local_70);
LAB_140bbc953:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bbca4c FUN_140bbca4c body=452 status=ok
// SIG undefined FUN_140bbca4c(void)

int * FUN_140bbca4c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_14482b872(param_1,iVar10);
    }
    lVar14 = (longlong)iVar10;
    iVar11 = FUN_144a54ea4(param_1 + 2,1);
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    iVar7 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    bVar6 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar14 = (longlong)iVar10;
    iVar11 = *(int *)(*param_1 + 4 + lVar14 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  iVar11 = 1;
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar7 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + lVar14 * 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 8 + lVar14 * 0x18) = *puVar3;
  *(undefined4 *)(lVar2 + 0x10 + lVar14 * 0x18) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar9 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar11 <= (int)param_1[9])) {
    uVar12 = (uint)((ulonglong)uVar4 >> 0x10);
    uVar13 = (uint)uVar4 & 0xffff;
    lVar2 = lVar2 + lVar14 * 0x18;
    uVar12 = (int)param_1[9] - 1U &
             (uVar13 >> 4) +
             ((uint)uVar4 << 0x10 | uVar13) + (int)((ulonglong)uVar4 >> 0x20) +
             (uVar12 << 0x13 | uVar12 & 0xffff);
    *(uint *)(lVar2 + 0x14) = uVar12;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_141706964(param_1);
  }
  *param_2 = iVar10;
  return param_2;
}



// FUNCTION 140bbcc10 FUN_140bbcc10 body=608 status=ok
// SIG undefined FUN_140bbcc10(void)

void FUN_140bbcc10(longlong param_1,byte *param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined1 auStack_68 [47];
  byte local_39;
  longlong local_38;
  longlong *local_30;
  byte *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_3;
  if (*(int *)(param_1 + 0x878) != *(int *)(param_1 + 0x8a4)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x8a8;
    if (*(longlong *)(param_1 + 0x8b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8b0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x8b8) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x870) + (longlong)iVar7 * 0x14);
        if (*plVar1 == param_3) {
          if ((plVar1 != (longlong *)0x0) && ((byte *)(plVar1 + 1) != (byte *)0x0)) {
            bVar4 = *(byte *)(plVar1 + 1);
            goto LAB_140bbcdd1;
          }
          break;
        }
        iVar7 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845cc8) {
    FUN_144b3d300(&DAT_14c845cc8);
    if (DAT_14c845cc8 == -1) {
      FUN_1446f470e(&DAT_14c845cc0,L"BootGlobal",1);
      _Init_thread_footer(&DAT_14c845cc8);
    }
  }
  if (*(int *)(param_1 + 0x878) != *(int *)(param_1 + 0x8a4)) {
    uVar3 = (uint)((ulonglong)DAT_14c845cc0 >> 0x10);
    uVar6 = (uint)DAT_14c845cc0 & 0xffff;
    lVar5 = param_1 + 0x8a8;
    if (*(longlong *)(param_1 + 0x8b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8b0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x8b8) - 1U &
                             (int)((ulonglong)DAT_14c845cc0 >> 0x20) +
                             ((uint)DAT_14c845cc0 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
LAB_140bbcd4a:
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x870) + (longlong)iVar7 * 0x14);
      if (*plVar1 != DAT_14c845cc0) goto code_r0x000140bbcd5e;
      if ((byte *)(plVar1 + 1) != (byte *)0x0 && plVar1 != (longlong *)0x0) {
        bVar4 = *(byte *)(plVar1 + 1);
LAB_140bbcdd1:
        param_2[2] = bVar4;
        bVar8 = *param_2;
        bVar2 = bVar4 & 0xf;
        if (param_2[3] < (bVar4 & 0xf)) {
          bVar2 = param_2[3];
        }
        *param_2 = bVar2;
        param_2[1] = bVar4 >> 7;
        if (bVar8 == bVar2) goto LAB_140bbcd69;
        FUN_140bbd2e0(&DAT_14c86aa30,param_2 + 4);
      }
    }
  }
LAB_140bbcd66:
  bVar8 = *param_2;
LAB_140bbcd69:
  if (bVar8 != 0) {
    local_28 = &local_39;
    local_30 = &local_38;
    local_39 = bVar8;
    FUN_140bbce72(param_1 + 0x8c0,local_1c,&local_30,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140bbcd5e:
  iVar7 = *(int *)((longlong)plVar1 + 0xc);
  if (iVar7 == -1) goto LAB_140bbcd66;
  goto LAB_140bbcd4a;
}



// FUNCTION 140bbce72 FUN_140bbce72 body=356 status=ok
// SIG undefined FUN_140bbce72(void)

undefined4 *
FUN_140bbce72(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140bbd0fe(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140bbcfd8(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140bbd39c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbcfd8 FUN_140bbcfd8 body=156 status=ok
// SIG undefined FUN_140bbcfd8(void)

void FUN_140bbcfd8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_140bbd074(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_140bbd063;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_140bbd063:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140bbd074 FUN_140bbd074 body=138 status=ok
// SIG undefined FUN_140bbd074(void)

void FUN_140bbd074(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140bbd0fe FUN_140bbd0fe body=482 status=ok
// SIG undefined FUN_140bbd0fe(void)

int * FUN_140bbd0fe(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140171ad2(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140bbd2e0 FUN_140bbd2e0 body=187 status=ok
// SIG undefined FUN_140bbd2e0(void)

void FUN_140bbd2e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140bbd383;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140bbd383:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140bbd39c FUN_140bbd39c body=679 status=ok
// SIG undefined FUN_140bbd39c(void)

void FUN_140bbd39c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140bbd411;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140bbd411:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140bbd644 FUN_140bbd644 body=40 status=ok
// SIG undefined FUN_140bbd644(void)

undefined8 FUN_140bbd644(undefined8 param_1,int param_2)

{
  FUN_140bbd66c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bbd66c FUN_140bbd66c body=148 status=ok
// SIG undefined FUN_140bbd66c(void)

void FUN_140bbd66c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3bcd10;
  param_1[5] = &PTR_FUN_14a3bd710;
  param_1[6] = &PTR_LAB_14a3bd750;
  param_1[0x55] = &PTR_FUN_14a3bd7a0;
  param_1[0x56] = &PTR_FUN_14a3bd820;
  param_1[0x57] = &PTR_FUN_14a3bd830;
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140bbd700 FUN_140bbd700 body=5078 status=ok
// SIG undefined FUN_140bbd700(void)

void FUN_140bbd700(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  ushort *puVar18;
  ulonglong *puVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined2 ***local_1c0;
  code *local_1b8;
  code *local_1b0;
  longlong local_1a0;
  int local_194;
  longlong local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  uint *local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  undefined2 local_12a;
  ushort **local_128;
  longlong local_120;
  int local_118;
  undefined4 local_110;
  int iStack_10c;
  ushort local_108 [2];
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  ushort *local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar4 = FUN_14009d2a0();
  uVar1 = *(undefined2 *)(lVar4 + 0x4a);
  uVar25 = param_1 + 0x1c0;
  uVar26 = *(ulonglong *)(param_1 + 0x28);
  local_1a0 = param_1;
  lVar4 = FUN_14009d2a0();
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = 0x10000000000;
  FUN_1406abdee(&local_f8,uVar25);
  local_194 = CONCAT22(local_194._2_2_,uVar1);
  local_110 = CONCAT22(uVar1,*(undefined2 *)(lVar4 + 0x11c));
  lVar28 = 0;
  local_178 = lVar4;
  do {
    uVar22 = local_d8;
    uVar3 = *(ushort *)((longlong)local_108 + lVar28 + -8);
    iVar8 = uVar3 + 1;
    iVar17 = iVar8 - (int)local_d8;
    if (iVar17 != 0 && (int)local_d8 <= iVar8) {
      if ((int)local_d8 == 0) {
LAB_140bbd7f9:
        if (local_d8._4_4_ <= (int)(uint)uVar3) {
          local_d8 = CONCAT44(0x100,(int)local_d8);
          FUN_14497ddce(&local_f8,uVar22 & 0xffffffff);
          iVar8 = (int)local_d8 + iVar17;
        }
        iVar24 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar24 = iVar8;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar8);
        if (iVar8 % 0x20 != 0) {
          bVar7 = -(char)(iVar8 % 0x20);
          *(uint *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) << (bVar7 & 0x1f))
               >> (bVar7 & 0x1f);
        }
      }
      else {
        iVar24 = (int)local_d8 + 0x1e;
        if (-1 < (int)local_d8 + -1) {
          iVar24 = (int)local_d8 + -1;
        }
        if (iVar24 >> 5 != (uint)(uVar3 >> 5)) goto LAB_140bbd7f9;
        local_d8 = CONCAT44(local_d8._4_4_,iVar8);
      }
      FUN_1447c45ca(&local_f8,uVar22 & 0xffffffff,iVar17,0);
    }
    lVar4 = local_1a0;
    puVar20 = (uint *)((longlong)&local_f8 + (ulonglong)(uVar3 >> 5) * 4);
    *puVar20 = *puVar20 | 1 << ((byte)uVar3 & 0x1f);
    lVar28 = lVar28 + 2;
  } while (lVar28 != 4);
  lVar28 = uVar26 + 0x28;
  cVar2 = *(char *)(uVar26 + 0x298);
  if (cVar2 == '\0') {
    *(int *)(uVar26 + 0x28c) = *(int *)(uVar26 + 0x28c) + 1;
  }
  else {
    LOCK();
    *(int *)(uVar26 + 0x28c) = *(int *)(uVar26 + 0x28c) + 1;
    UNLOCK();
  }
  local_168 = local_1a0 + 0x48;
  local_128 = &local_f8;
  local_120 = lVar28;
  iVar8 = FUN_1403b8464(&local_128,0);
  local_118 = iVar8;
  if (iVar8 != *(int *)(uVar26 + 0x38)) {
    lVar21 = lVar4 + 0x98;
    local_188 = lVar4 + 0x170;
    local_148 = CONCAT44(local_148._4_4_,*(int *)(uVar26 + 0x38));
    local_150 = local_120;
    local_140 = uVar25;
    do {
      if (cVar2 == '\0') {
        local_160 = *(longlong *)(*(longlong *)(local_150 + 0x60) + (longlong)iVar8 * 8);
        *(undefined4 *)(local_160 + 0x14) = 0;
      }
      else {
        local_160 = 0;
      }
      lVar4 = *(longlong *)(*(longlong *)(local_150 + 0x60) + (longlong)iVar8 * 8);
      local_180 = (longlong *)(ulonglong)*(ushort *)(lVar4 + 0xe);
      local_118 = iVar8;
      if (local_180 != (longlong *)0x0) {
        local_158 = *(longlong **)(lVar4 + 0x18);
        plVar15 = (longlong *)0x0;
        local_170 = (uint *)CONCAT71(local_170._1_7_,cVar2);
        local_190 = lVar28;
        do {
          local_12a = *(undefined2 *)((longlong)local_158 + (longlong)plVar15 * 2);
          uVar23 = FUN_140bbf578(local_168);
          if ((short)uVar23 != -1) {
            uVar27 = uVar23 & 0xffff;
            FUN_14086b58e(lVar21,uVar23,&local_12a);
            FUN_140bbeb1c(local_168,&local_12a);
            iVar17 = uVar27 + 1;
            iVar24 = *(int *)(local_1a0 + 0x188);
            iVar9 = iVar17 - iVar24;
            if (0 < iVar9) {
              if (iVar24 == 0) {
LAB_140bbe479:
                lVar4 = local_1a0;
                local_138 = lVar21;
                if (*(int *)(local_1a0 + 0x18c) <= (int)uVar27) {
                  if (uVar27 < 0x80) {
                    iVar10 = 0x80;
                    iVar17 = iVar24;
                  }
                  else {
                    uVar23 = uVar27 + 0x20 >> 5;
                    if (*(int *)(local_1a0 + 0x18c) + 0x1fU < 0xa0) {
                      uVar11 = 4;
                      if (4 < uVar23) {
                        uVar11 = uVar23;
                      }
                    }
                    else {
                      uVar11 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
                    }
                    uVar25 = FUN_144a3809e(uVar11 << 2,0);
                    iVar17 = (int)(uVar25 >> 2);
                    iVar10 = -0x20;
                    if ((int)uVar23 <= iVar17) {
                      iVar10 = iVar17 << 5;
                    }
                    iVar17 = *(int *)(local_1a0 + 0x188);
                  }
                  lVar4 = local_1a0;
                  *(int *)(local_1a0 + 0x18c) = iVar10;
                  FUN_1446efbd8(local_188,iVar17);
                  iVar17 = *(int *)(lVar4 + 0x188) + iVar9;
                }
                iVar10 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar10 = iVar17;
                }
                *(int *)(lVar4 + 0x188) = iVar17;
                lVar21 = local_138;
                if (iVar17 % 0x20 != 0) {
                  lVar4 = *(longlong *)(local_1a0 + 0x180);
                  if (*(longlong *)(local_1a0 + 0x180) == 0) {
                    lVar4 = local_188;
                  }
                  bVar7 = -(char)(iVar17 % 0x20);
                  *(uint *)(lVar4 + (longlong)(iVar10 >> 5) * 4) =
                       (uint)(*(int *)(lVar4 + (longlong)(iVar10 >> 5) * 4) << (bVar7 & 0x1f)) >>
                       (bVar7 & 0x1f);
                }
              }
              else {
                iVar10 = iVar24 + 0x1e;
                if (-1 < iVar24 + -1) {
                  iVar10 = iVar24 + -1;
                }
                if (uVar27 >> 5 != iVar10 >> 5) goto LAB_140bbe479;
                *(int *)(local_1a0 + 0x188) = iVar17;
              }
              FUN_1447c6044(local_188,iVar24,iVar9,0);
            }
            lVar4 = *(longlong *)(local_1a0 + 0x180);
            if (*(longlong *)(local_1a0 + 0x180) == 0) {
              lVar4 = local_188;
            }
            puVar20 = (uint *)(lVar4 + (ulonglong)(uVar27 >> 5) * 4);
            *puVar20 = *puVar20 | 1 << ((byte)uVar27 & 0x1f);
          }
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          lVar28 = local_190;
          cVar2 = (char)local_170;
        } while (local_180 != plVar15);
      }
      if (local_160 != 0) {
        *(undefined4 *)(local_160 + 0x14) = 1;
      }
      iVar8 = FUN_1403b8464(&local_128,iVar8 + 1);
      uVar25 = local_140;
      local_118 = iVar8;
    } while (iVar8 != (int)local_148);
  }
  if (local_128 != (ushort **)0x0) {
    if (*(char *)(local_120 + 0x270) == '\0') {
      *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
      UNLOCK();
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_108[0] = (ushort)local_194;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  FUN_1403b8af8(&local_f8,uVar25);
  uVar25 = local_d8;
  uVar3 = local_108[0];
  local_78 = 0x10000000000;
  local_50 = 0x10000000000;
  iVar8 = local_108[0] + 1;
  iVar17 = iVar8 - (int)local_d8;
  if (iVar17 != 0 && (int)local_d8 <= iVar8) {
    if ((int)local_d8 == 0) {
LAB_140bbd996:
      if (local_d8._4_4_ <= (int)(uint)local_108[0]) {
        local_d8 = CONCAT44(0x100,(int)local_d8);
        FUN_14497ddce(&local_f8,uVar25 & 0xffffffff);
        iVar8 = (int)local_d8 + iVar17;
      }
      iVar24 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar24 = iVar8;
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar8);
      if (iVar8 % 0x20 != 0) {
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) << (bVar7 & 0x1f))
             >> (bVar7 & 0x1f);
      }
    }
    else {
      iVar24 = (int)local_d8 + 0x1e;
      if (-1 < (int)local_d8 + -1) {
        iVar24 = (int)local_d8 + -1;
      }
      if (iVar24 >> 5 != (uint)(local_108[0] >> 5)) goto LAB_140bbd996;
      local_d8 = CONCAT44(local_d8._4_4_,iVar8);
    }
    FUN_1447c45ca(&local_f8,uVar25 & 0xffffffff,iVar17,0);
  }
  puVar20 = (uint *)((longlong)&local_f8 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar20 = *puVar20 | 1 << ((byte)uVar3 & 0x1f);
  uVar25 = local_d8;
  uVar3 = *(ushort *)(local_178 + 0x11a);
  iVar8 = uVar3 + 1;
  iVar17 = iVar8 - (int)local_d8;
  if (iVar17 == 0 || iVar8 < (int)local_d8) goto LAB_140bbda90;
  if ((int)local_d8 == 0) {
LAB_140bbda41:
    if (local_d8._4_4_ <= (int)(uint)uVar3) {
      local_d8 = CONCAT44(0x100,(int)local_d8);
      FUN_14497ddce(&local_f8,uVar25 & 0xffffffff);
      iVar8 = (int)local_d8 + iVar17;
    }
    iVar24 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar24 = iVar8;
    }
    local_d8 = CONCAT44(local_d8._4_4_,iVar8);
    if (iVar8 % 0x20 != 0) {
      bVar7 = -(char)(iVar8 % 0x20);
      *(uint *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_f8 + (longlong)(iVar24 >> 5) * 4) << (bVar7 & 0x1f)) >>
           (bVar7 & 0x1f);
    }
  }
  else {
    iVar24 = (int)local_d8 + 0x1e;
    if (-1 < (int)local_d8 + -1) {
      iVar24 = (int)local_d8 + -1;
    }
    if (iVar24 >> 5 != (uint)(uVar3 >> 5)) goto LAB_140bbda41;
    local_d8 = CONCAT44(local_d8._4_4_,iVar8);
  }
  FUN_1447c45ca(&local_f8,uVar25 & 0xffffffff,iVar17,0);
LAB_140bbda90:
  lVar4 = local_1a0;
  puVar20 = (uint *)((longlong)&local_f8 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar20 = *puVar20 | 1 << ((byte)uVar3 & 0x1f);
  if (local_108[0] != 0xffff) {
    cVar2 = *(char *)(uVar26 + 0x298);
    if (cVar2 == '\0') {
      *(int *)(uVar26 + 0x28c) = *(int *)(uVar26 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(uVar26 + 0x28c) = *(int *)(uVar26 + 0x28c) + 1;
      UNLOCK();
    }
    local_128 = &local_f8;
    local_120 = lVar28;
    local_118 = FUN_1403b8464(&local_128,0);
    if (local_118 != *(int *)(uVar26 + 0x38)) {
      local_178 = CONCAT71(local_178._1_7_,cVar2);
      local_194 = *(int *)(uVar26 + 0x38);
      do {
        lVar28 = local_120;
        lVar21 = (longlong)local_118;
        lVar4 = *(longlong *)(*(longlong *)(local_120 + 0x60) + lVar21 * 8);
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar4 + 0x14) = 0;
          local_188 = lVar4;
        }
        else {
          local_188 = 0;
        }
        if (*(ushort *)(lVar4 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar4 + 0x28);
          lVar12 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar15 + 0x1e) == local_108[0]) goto LAB_140bbdb62;
            plVar15 = plVar15 + 4;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_140bbdb62:
        local_180 = (longlong *)CONCAT44(local_180._4_4_,*(int *)(lVar4 + 0x14));
        if (*(int *)(lVar4 + 0x14) == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        lVar4 = *plVar15;
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x60) + lVar21 * 8);
        uVar25 = (ulonglong)*(ushort *)(lVar28 + 0xe);
        lVar21 = *(longlong *)(lVar28 + 0x18);
        lVar12 = FUN_14009d2a0();
        if (*(ushort *)(lVar28 + 0xc) == 0) {
          uVar26 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar28 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar28 + 0xc) << 5;
          do {
            if (*(short *)(lVar5 + 0x1e) == *(short *)(lVar12 + 0x11a)) goto LAB_140bbdbc3;
            lVar5 = lVar5 + 0x20;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
          lVar5 = 0;
LAB_140bbdbc3:
          uVar26 = CONCAT71((int7)(uVar26 >> 8),lVar5 != 0);
        }
        lVar12 = FUN_14009d2a0();
        if (*(ushort *)(lVar28 + 0xc) != 0) {
          lVar5 = *(longlong *)(lVar28 + 0x28);
          lVar28 = (ulonglong)*(ushort *)(lVar28 + 0xc) << 5;
          do {
            if (*(short *)(lVar5 + 0x1e) == *(short *)(lVar12 + 0x10a)) {
              if (lVar5 != 0) {
                if (uVar25 != 0) {
                  uVar22 = 0;
                  do {
                    lVar28 = *(longlong *)(lVar4 + uVar22 * 8);
                    _local_110 = 0;
                    if (lVar28 != 0) {
                      uVar23 = *(uint *)(lVar28 + 0xc);
                      if ((int)uVar23 < DAT_14c9647dc) {
                        lVar28 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                      }
                      else {
                        lVar28 = 0;
                      }
                      iVar8 = *(int *)(lVar28 + 0x10);
                      if (*(int *)(lVar28 + 0x10) == 0) {
                        LOCK();
                        iVar8 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar17 = DAT_14c964868 + 1;
                        bVar29 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar8;
                        if (bVar29) {
                          local_190 = CONCAT44(local_190._4_4_,iVar17);
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar17);
                          iVar17 = (int)local_190;
                        }
                        LOCK();
                        iVar8 = *(int *)(lVar28 + 0x10);
                        bVar29 = iVar8 == 0;
                        if (bVar29) {
                          *(int *)(lVar28 + 0x10) = iVar17;
                          iVar8 = 0;
                        }
                        UNLOCK();
                        if (bVar29) {
                          iVar8 = iVar17;
                        }
                      }
                      _local_110 = CONCAT44(iVar8,uVar23);
                    }
                    uVar3 = FUN_140bbedae(local_168,*(undefined2 *)(lVar21 + uVar22 * 2),&local_110,
                                          uVar26 & 0xffffffff);
                    *(undefined1 *)
                     (*(longlong *)(local_1a0 + 0x138) + 0xc + (ulonglong)uVar3 * 0x10) = 1;
                    uVar22 = uVar22 + 1;
                  } while (uVar25 != uVar22);
                }
                goto LAB_140bbdc84;
              }
              break;
            }
            lVar5 = lVar5 + 0x20;
            lVar28 = lVar28 + -0x20;
          } while (lVar28 != 0);
        }
        if (uVar25 != 0) {
          uVar22 = 0;
          do {
            lVar28 = *(longlong *)(lVar4 + uVar22 * 8);
            _local_110 = 0;
            if (lVar28 != 0) {
              uVar23 = *(uint *)(lVar28 + 0xc);
              if ((int)uVar23 < DAT_14c9647dc) {
                lVar28 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
              }
              else {
                lVar28 = 0;
              }
              iVar8 = *(int *)(lVar28 + 0x10);
              if (*(int *)(lVar28 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                iVar17 = DAT_14c964868 + 1;
                bVar29 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar29) {
                  local_190 = CONCAT44(local_190._4_4_,iVar17);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar17);
                  iVar17 = (int)local_190;
                }
                LOCK();
                iVar8 = *(int *)(lVar28 + 0x10);
                bVar29 = iVar8 == 0;
                if (bVar29) {
                  *(int *)(lVar28 + 0x10) = iVar17;
                  iVar8 = 0;
                }
                UNLOCK();
                if (bVar29) {
                  iVar8 = iVar17;
                }
              }
              _local_110 = CONCAT44(iVar8,uVar23);
            }
            FUN_140bbedae(local_168,*(undefined2 *)(lVar21 + uVar22 * 2),&local_110,
                          uVar26 & 0xffffffff);
            uVar22 = uVar22 + 1;
          } while (uVar25 != uVar22);
        }
LAB_140bbdc84:
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
          UNLOCK();
          if ((int)local_180 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar15 + 1));
          }
        }
        cVar2 = (char)local_178;
        if (local_188 != 0) {
          *(undefined4 *)(local_188 + 0x14) = 1;
        }
        local_118 = FUN_1403b8464(&local_128,local_118 + 1);
        lVar4 = local_1a0;
      } while (local_118 != local_194);
    }
    if (local_128 != (ushort **)0x0) {
      if (*(char *)(local_120 + 0x270) == '\0') {
        *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar20 = (uint *)(lVar4 + 0x170);
  if (*(int *)(lVar4 + 0x188) != 0) {
    local_178 = *(longlong *)(lVar4 + 0x28);
    local_f8 = (ushort *)0x0;
    local_ec = 8;
    lVar28 = FUN_14009d2a0();
    local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar28 + 0x10a));
    uVar23 = *(uint *)(lVar4 + 0x188);
    if (uVar23 == 0) {
      uVar26 = 1;
      uVar27 = 0;
      iVar8 = 0;
      uVar25 = 0;
    }
    else {
      puVar14 = *(uint **)(lVar4 + 0x180);
      if (*(uint **)(lVar4 + 0x180) == (uint *)0x0) {
        puVar14 = puVar20;
      }
      uVar27 = *puVar14;
      if (uVar27 == 0) {
        iVar8 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar8 = uVar23 - 1;
        }
        uVar25 = 0;
        uVar26 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar26 = uVar25;
        }
        iVar8 = 0;
        do {
          if (uVar26 == uVar25) goto LAB_140bbe9ae;
          iVar8 = iVar8 + 0x20;
          uVar27 = puVar14[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar27 == 0);
      }
      else {
        iVar8 = 0;
        uVar25 = 0;
      }
      uVar26 = (ulonglong)(-uVar27 & uVar27);
      uVar22 = uVar26 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar27 = (iVar8 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if ((int)uVar23 <= (int)uVar27) {
        uVar27 = uVar23;
      }
    }
    if ((int)uVar27 < (int)uVar23) {
      local_180 = (longlong *)(lVar4 + 0x98);
      local_190 = lVar4 + 0xd0;
      local_150 = local_178 + 0xd0;
      local_158 = (longlong *)(lVar4 + 0x138);
      local_148 = local_178 + 0x28;
      local_160 = lVar4 + 400;
      uVar23 = 0xffffffff;
      local_170 = puVar20;
      do {
        local_188 = CONCAT44(local_188._4_4_,uVar23);
        local_f0 = 0;
        local_194 = iVar8;
        if ((int)local_ec < 0) {
          FUN_1475b398e(local_108,0);
        }
        uVar23 = uVar27 & 0xffff;
        if (*(int *)(lVar4 + 0xe0) != 0) {
          lVar28 = *(longlong *)(lVar4 + 0xd8);
          if (*(longlong *)(lVar4 + 0xd8) == 0) {
            lVar28 = local_190;
          }
          iVar8 = *(int *)(lVar28 + (ulonglong)(*(int *)(lVar4 + 0xe0) - 1U & uVar23) * 4);
          do {
            iVar17 = iVar8;
            if (iVar17 == -1) goto LAB_140bbdfb0;
            lVar28 = *local_180;
            iVar8 = *(int *)(lVar28 + 4 + (longlong)iVar17 * 0xc);
          } while (*(short *)(lVar28 + (longlong)iVar17 * 0xc) != (short)uVar27);
          do {
            uVar11 = local_f0;
            puVar18 = (ushort *)(lVar28 + (longlong)iVar17 * 0xc + 2);
            uVar3 = *puVar18;
            if ((uVar3 == 0xffff) ||
               (*(uint *)(local_178 + 0xe8) == (uint)uVar3 ||
                (int)*(uint *)(local_178 + 0xe8) < (int)(uint)uVar3)) {
LAB_140bbe925:
              FUN_140bbeb1c(local_168,puVar18);
              FUN_14086b624(local_180,iVar17);
            }
            else {
              lVar28 = *(longlong *)(local_178 + 0xe0);
              if (*(longlong *)(local_178 + 0xe0) == 0) {
                lVar28 = local_150;
              }
              if ((*(uint *)(lVar28 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
              goto LAB_140bbe925;
              lVar28 = (longlong)(int)local_f0;
              local_f0 = local_f0 + 1;
              if (local_ec < local_f0) {
                FUN_1475b3a76(local_108,uVar11);
              }
              puVar6 = local_f8;
              if (local_f8 == (ushort *)0x0) {
                puVar6 = local_108;
              }
              puVar6[lVar28] = *puVar18;
            }
            do {
              iVar17 = iVar8;
              if (iVar17 == -1) goto LAB_140bbdfb0;
              lVar28 = *local_180;
              iVar8 = *(int *)(lVar28 + 4 + (longlong)iVar17 * 0xc);
            } while (*(short *)(lVar28 + (longlong)iVar17 * 0xc) != (short)uVar27);
          } while( true );
        }
LAB_140bbdfb0:
        lVar28 = (longlong)(int)local_f0;
        puVar20 = local_170;
        if (lVar28 < 1) goto LAB_140bbe105;
        puVar19 = (ulonglong *)((ulonglong)(uVar23 << 4) + *local_158);
        puVar18 = local_f8;
        if (local_f8 == (ushort *)0x0) {
          puVar18 = local_108;
        }
        lVar21 = 0;
        do {
          cVar2 = FUN_140bbead8(local_148,*(undefined2 *)((longlong)puVar18 + lVar21),
                                local_140 & 0xffff);
          puVar20 = local_170;
          lVar4 = local_1a0;
          if (cVar2 != '\0') break;
          bVar29 = lVar28 * 2 + -2 != lVar21;
          lVar21 = lVar21 + 2;
        } while (bVar29);
        *(char *)((longlong)puVar19 + 0xc) = cVar2;
        if ((int)uVar23 < *(int *)(local_1a0 + 0x1a8)) {
          lVar28 = *(longlong *)(local_1a0 + 0x1a0);
          if (*(longlong *)(local_1a0 + 0x1a0) == 0) {
            lVar28 = local_160;
          }
          if ((*(uint *)(lVar28 + (ulonglong)(uVar23 >> 5) * 4) >> (uVar27 & 0x1f) & 1) == 0)
          goto LAB_140bbe1d0;
          uVar22 = *puVar19;
          if (((uVar22 >> 0x20 != 0) &&
              (((uVar27 = (uint)uVar22, -1 < (int)uVar27 && ((int)uVar27 < DAT_14c9647dc)) &&
               (plVar15 = (longlong *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0xd & 0x3fff8))),
               plVar15 != (longlong *)0x0)))) &&
             ((((int)plVar15[2] == (int)(uVar22 >> 0x20) &&
               ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
              (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))) {
            if (DAT_14cac7648 == 0) {
              local_128 = (ushort **)FUN_144a7958c;
              local_1b0 = FUN_14081d0ea;
              local_1b8 = FUN_143242436;
              local_1c0 = &local_128;
              local_1c8 = &LAB_14789ef1f;
              local_1d0 = &LAB_1417b008f;
              local_1d8 = L"Engine";
              local_1e0 = 0x8000000000;
              local_1e8 = 0x10000004;
              local_1f0 = 0x10;
              local_1f8 = 0x2b0;
              FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
            }
            if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cac7648 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
                != DAT_14cac7648 + 0x30)) goto LAB_140bbe105;
            *(uint *)(puVar19 + 1) = (uint)*(byte *)((longlong)plVar15 + 0x1fb);
LAB_140bbe0e5:
            (**(code **)(*plVar15 + 0x588))(plVar15,2);
          }
        }
        else {
LAB_140bbe1d0:
          uVar22 = *puVar19;
          if (((((uVar22 >> 0x20 != 0) && (uVar27 = (uint)uVar22, -1 < (int)uVar27)) &&
               ((int)uVar27 < DAT_14c9647dc)) &&
              ((puVar16 = (undefined8 *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0xd & 0x3fff8))),
               puVar16 != (undefined8 *)0x0 && (*(int *)(puVar16 + 2) == (int)(uVar22 >> 0x20)))))
             && (((*(uint *)(puVar16 + 1) & 0x10200000) == 0 &&
                 (plVar15 = (longlong *)*puVar16, plVar15 != (longlong *)0x0)))) {
            if (DAT_14cac7648 == 0) {
              local_128 = (ushort **)FUN_144a7958c;
              local_1b0 = FUN_14081d0ea;
              local_1b8 = FUN_143242436;
              local_1c0 = &local_128;
              local_1c8 = &LAB_14789ef1f;
              local_1d0 = &LAB_1417b008f;
              local_1d8 = L"Engine";
              local_1e0 = 0x8000000000;
              local_1e8 = 0x10000004;
              local_1f0 = 0x10;
              local_1f8 = 0x2b0;
              FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
            }
            if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
                == DAT_14cac7648 + 0x30)) goto LAB_140bbe0e5;
          }
        }
LAB_140bbe105:
        if (local_f0 == 0) {
          FUN_140bbebf2(lVar4 + 0xe8,(ulonglong)(uVar23 << 4) + *(longlong *)(lVar4 + 0x138));
          FUN_140bbeb80(local_158,uVar23);
        }
        uVar23 = (uint)local_188 & ~(uint)uVar26;
        puVar14 = *(uint **)(lVar4 + 0x180);
        if (*(uint **)(lVar4 + 0x180) == (uint *)0x0) {
          puVar14 = puVar20;
        }
        iVar17 = *(int *)(lVar4 + 0x188);
        iVar24 = (int)uVar25;
        lVar28 = (longlong)iVar24;
        uVar27 = puVar14[lVar28] & uVar23;
        iVar8 = local_194;
        if (uVar27 == 0) {
          iVar9 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar9 = iVar17 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar24) {
            iVar10 = iVar24;
          }
          if (iVar9 <= iVar24) break;
          lVar21 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar27 = puVar14[lVar28 + lVar21 + 1];
            if (uVar27 != 0) break;
            lVar21 = lVar21 + 1;
            if (iVar10 - lVar28 == lVar21) goto LAB_140bbe99d;
          }
          uVar25 = (ulonglong)(iVar24 + (int)lVar21 + 1);
          uVar23 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar27 & uVar27);
        uVar22 = uVar26 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar27 = (iVar8 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      } while ((int)uVar27 < iVar17);
LAB_140bbe99d:
      if (local_f8 != (ushort *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140bbe9ae:
  *(undefined4 *)(lVar4 + 0x188) = 0;
  if (0x80 < *(uint *)(lVar4 + 0x18c)) {
    *(undefined4 *)(lVar4 + 0x18c) = 0x80;
    FUN_1446efbd8(puVar20,0);
  }
  *(undefined4 *)(lVar4 + 0x1a8) = 0;
  if (0x80 < *(uint *)(lVar4 + 0x1ac)) {
    *(undefined4 *)(lVar4 + 0x1ac) = 0x80;
    FUN_1446efbd8(lVar4 + 400,0);
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbead8 FUN_140bbead8 body=68 status=ok
// SIG undefined FUN_140bbead8(void)

undefined4 FUN_140bbead8(longlong param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_2 * 8);
  if (((uVar1 == 0xffff) || (param_3 == 0xffff)) ||
     (lVar4 = (ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 8),
     *(int *)(lVar4 + 0x20) <= (int)(uint)param_3)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(param_3 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (param_3 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 140bbeb1c FUN_140bbeb1c body=100 status=ok
// SIG undefined FUN_140bbeb1c(void)

undefined8 FUN_140bbeb1c(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_14086b4ac();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140bbeb80 FUN_140bbeb80 body=114 status=ok
// SIG undefined FUN_140bbeb80(void)

void FUN_140bbeb80(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 140bbebf2 FUN_140bbebf2 body=244 status=ok
// SIG undefined FUN_140bbebf2(void)

void FUN_140bbebf2(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[1];
    uVar4 = uVar1 >> 0xd ^ *param_2 - uVar1;
    uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar1) - uVar4;
    uVar7 = uVar6 >> 0xd ^ (uVar1 - uVar4) - uVar6;
    uVar9 = uVar7 >> 0xc ^ (uVar4 - uVar6) - uVar7;
    uVar4 = uVar9 << 0x10 ^ (uVar6 - uVar7) - uVar9;
    uVar6 = uVar4 >> 5 ^ (uVar7 - uVar9) - uVar4;
    uVar7 = uVar6 >> 3 ^ (uVar9 - uVar4) - uVar6;
    uVar4 = uVar7 << 10 ^ (uVar4 - uVar6) - uVar7;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar4 >> 0xf ^ uVar6 - (uVar7 + uVar4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)iVar2;
        if ((*(int *)(lVar3 + lVar8 * 0x14) == *param_2) &&
           (*(uint *)(lVar3 + 4 + lVar8 * 0x14) == uVar1)) {
          FUN_140bbece6();
          return;
        }
        iVar2 = *(int *)(lVar3 + lVar8 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140bbece6 FUN_140bbece6 body=85 status=ok
// SIG undefined FUN_140bbece6(void)

void FUN_140bbece6(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_140bbed3c();
  return;
}



// FUNCTION 140bbed3c FUN_140bbed3c body=114 status=ok
// SIG undefined FUN_140bbed3c(void)

void FUN_140bbed3c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 140bbedae FUN_140bbedae body=1992 status=ok
// SIG undefined FUN_140bbedae(void)

uint FUN_140bbedae(longlong param_1,ushort param_2,ushort *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_98 [37];
  char local_73;
  ushort local_72;
  longlong *local_70;
  ushort local_64;
  ushort local_62;
  ushort *local_60;
  ushort *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_73 = param_4;
  local_64 = param_2;
  uVar6 = FUN_140bbf578();
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar20 = *(uint *)(param_3 + 2);
    uVar13 = uVar20 >> 0xd ^ *(int *)param_3 - uVar20;
    uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar20) - uVar13;
    uVar17 = uVar16 >> 0xd ^ (uVar20 - uVar13) - uVar16;
    uVar18 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
    uVar13 = uVar18 << 0x10 ^ (uVar16 - uVar17) - uVar18;
    uVar16 = uVar13 >> 5 ^ (uVar17 - uVar18) - uVar13;
    uVar17 = uVar16 >> 3 ^ (uVar18 - uVar13) - uVar16;
    uVar13 = uVar17 << 10 ^ (uVar13 - uVar16) - uVar17;
    lVar9 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xe0);
    }
    iVar15 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0xe8) - 1U &
                              (uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13))) * 4);
    if (iVar15 != -1) {
      do {
        piVar2 = (int *)(*plVar1 + (longlong)iVar15 * 0x14);
        if ((*piVar2 == *(int *)param_3) &&
           (*(uint *)(*plVar1 + 4 + (longlong)iVar15 * 0x14) == uVar20)) {
          if ((piVar2 != (int *)0x0) &&
             (((ushort *)(piVar2 + 2) != (ushort *)0x0 &&
              (uVar5 = *(ushort *)(piVar2 + 2), uVar5 != 0xffff)))) goto LAB_140bbf090;
          break;
        }
        iVar15 = piVar2[3];
      } while (iVar15 != -1);
    }
  }
  uVar4 = *(undefined8 *)param_3;
  local_72 = (ushort)uVar6;
  local_70 = plVar1;
  if (*(int *)(param_1 + 0x124) == 0) {
    uVar6 = *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = uVar6 + 1;
    if (*(uint *)(param_1 + 0xfc) == uVar6) {
      FUN_144869a3c(param_1 + 0xf0,uVar6);
    }
    iVar15 = *(int *)(param_1 + 0x118);
    if (iVar15 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar7 = iVar15 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    lVar12 = param_1 + 0x100;
    iVar14 = iVar15 + 1;
    iVar19 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar19 = iVar15;
    }
    if (iVar19 >> 5 == iVar7) {
      *(int *)(param_1 + 0x118) = iVar14;
    }
    else {
      if (*(int *)(param_1 + 0x11c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar7 = iVar15;
        }
        else {
          uVar20 = iVar15 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x11c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar20) {
              uVar13 = uVar20;
            }
          }
          else {
            uVar13 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar13 << 2,0);
          iVar7 = (int)(uVar10 >> 2);
          iVar14 = -0x20;
          if ((int)uVar20 <= iVar7) {
            iVar14 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x118);
        }
        *(int *)(param_1 + 0x11c) = iVar14;
        FUN_1446efbd8(lVar12,iVar7);
        iVar14 = *(int *)(param_1 + 0x118) + 1;
      }
      iVar7 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar7 = iVar14;
      }
      *(int *)(param_1 + 0x118) = iVar14;
      if (iVar14 % 0x20 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar9 = lVar12;
        }
        bVar11 = -(char)(iVar14 % 0x20);
        *(uint *)(lVar9 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar9 + (longlong)(iVar7 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)(int)uVar6;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x110);
    }
    bVar11 = (byte)iVar15 & 0x1f;
    puVar3 = (uint *)(lVar12 + (longlong)(iVar19 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x120);
    lVar9 = (longlong)(int)uVar6;
    iVar15 = *(int *)(*(longlong *)(param_1 + 0xf0) + 4 + lVar9 * 0x10);
    *(int *)(param_1 + 0x120) = iVar15;
    iVar7 = *(int *)(param_1 + 0x124) + -1;
    *(int *)(param_1 + 0x124) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar15 * 0x10) = 0xffffffff;
    }
  }
  uVar20 = 1 << ((byte)uVar6 & 0x1f);
  lVar12 = param_1 + 0x100;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x110);
  }
  uVar13 = uVar6 + 0x1f;
  if (-1 < (int)uVar6) {
    uVar13 = uVar6;
  }
  puVar3 = (uint *)(lVar12 + (longlong)((int)uVar13 >> 5) * 4);
  *puVar3 = *puVar3 | uVar20;
  lVar12 = *(longlong *)(param_1 + 0xf0);
  lVar9 = lVar9 * 0x10;
  *(undefined8 *)(lVar12 + lVar9) = uVar4;
  *(undefined4 *)(lVar12 + 8 + lVar9) = 0;
  *(undefined1 *)(lVar12 + 0xc + lVar9) = 0;
  local_62 = (ushort)uVar6;
  lVar9 = param_1 + 0x148;
  uVar13 = uVar6 & 0xffff;
  iVar15 = uVar13 + 1;
  iVar7 = *(int *)(param_1 + 0x160);
  iVar14 = iVar15 - iVar7;
  if (0 < iVar14) {
    if (iVar7 == 0) {
LAB_140bbf213:
      if (*(int *)(param_1 + 0x164) <= (int)uVar13) {
        if (uVar13 < 0x80) {
          iVar19 = 0x80;
          iVar15 = iVar7;
        }
        else {
          uVar13 = uVar13 + 0x20 >> 5;
          if (*(int *)(param_1 + 0x164) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar13) {
              uVar16 = uVar13;
            }
          }
          else {
            uVar16 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar16 << 2,0);
          iVar15 = (int)(uVar10 >> 2);
          iVar19 = -0x20;
          if ((int)uVar13 <= iVar15) {
            iVar19 = iVar15 << 5;
          }
          iVar15 = *(int *)(param_1 + 0x160);
        }
        *(int *)(param_1 + 0x164) = iVar19;
        FUN_1446efbd8(lVar9,iVar15);
        iVar15 = *(int *)(param_1 + 0x160) + iVar14;
      }
      iVar19 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar19 = iVar15;
      }
      *(int *)(param_1 + 0x160) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x158);
        if (*(longlong *)(param_1 + 0x158) == 0) {
          lVar12 = lVar9;
        }
        bVar11 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar19 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    else {
      iVar19 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar19 = iVar7 + -1;
      }
      if (uVar13 >> 5 != iVar19 >> 5) goto LAB_140bbf213;
      *(int *)(param_1 + 0x160) = iVar15;
    }
    FUN_1447c6044(lVar9,iVar7,iVar14,0);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x158);
  }
  puVar3 = (uint *)(lVar9 + (ulonglong)(uVar6 >> 3 & 0x1ffc));
  *puVar3 = *puVar3 | uVar20;
  local_58 = &local_62;
  local_60 = param_3;
  FUN_140bbfc70(local_70,local_4c);
  uVar6 = (uint)local_72;
  uVar5 = local_62;
LAB_140bbf090:
  local_62 = uVar5;
  if ((ushort)uVar6 == uVar5) {
    if (local_73 != '\0') {
      lVar9 = param_1 + 0x128;
      iVar15 = ((uint)uVar5 - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar15) {
        uVar8 = FUN_144a54ea4(lVar9,iVar15);
        FUN_1447c6044(lVar9,uVar8,iVar15,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x138);
      }
      puVar3 = (uint *)(lVar9 + (ulonglong)(uVar5 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar5 & 0x1f);
    }
    goto LAB_140bbf173;
  }
  if ((ushort)uVar6 != 0xffff) {
    uVar20 = uVar6 & 0xffff;
    lVar9 = param_1 + 0x128;
    iVar15 = (uVar20 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar15) {
      uVar8 = FUN_144a54ea4(lVar9,iVar15);
      FUN_1447c6044(lVar9,uVar8,iVar15,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x138);
    }
    puVar3 = (uint *)(lVar9 + (ulonglong)(uVar20 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar20 & 0x1f);
    FUN_14086b58e(param_1 + 0x50,uVar6,&local_64);
    FUN_140bbeb1c(param_1,&local_64);
  }
  lVar9 = param_1 + 0x128;
  iVar7 = uVar5 + 1;
  iVar15 = *(int *)(param_1 + 0x140);
  iVar14 = iVar7 - iVar15;
  if (0 < iVar14) {
    if (iVar15 == 0) {
LAB_140bbf1c1:
      if (*(int *)(param_1 + 0x144) <= (int)(uint)uVar5) {
        if (uVar5 < 0x80) {
          iVar19 = 0x80;
          iVar7 = iVar15;
        }
        else {
          uVar6 = uVar5 + 0x20 >> 5;
          if (*(int *)(param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar6) {
              uVar20 = uVar6;
            }
          }
          else {
            uVar20 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar20 << 2,0);
          iVar7 = (int)(uVar10 >> 2);
          iVar19 = -0x20;
          if ((int)uVar6 <= iVar7) {
            iVar19 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x140);
        }
        *(int *)(param_1 + 0x144) = iVar19;
        FUN_1446efbd8(lVar9,iVar7);
        iVar7 = *(int *)(param_1 + 0x140) + iVar14;
      }
      iVar19 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar19 = iVar7;
      }
      *(int *)(param_1 + 0x140) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar12 = lVar9;
        }
        bVar11 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar19 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    else {
      iVar19 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar19 = iVar15 + -1;
      }
      if ((uint)(uVar5 >> 5) != iVar19 >> 5) goto LAB_140bbf1c1;
      *(int *)(param_1 + 0x140) = iVar7;
    }
    FUN_1447c6044(lVar9,iVar15,iVar14,0);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x138);
  }
  puVar3 = (uint *)(lVar9 + (ulonglong)(uVar5 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar5 & 0x1f);
  local_60 = &local_64;
  local_58 = &local_62;
  FUN_140bbf6f4(param_1,local_4c,&local_60,0);
  local_60 = &local_62;
  local_58 = &local_64;
  FUN_140bbf5de(param_1 + 0x50,local_4c,&local_60,0);
  uVar6 = (uint)local_62;
LAB_140bbf173:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140bbf578 FUN_140bbf578 body=101 status=ok
// SIG undefined FUN_140bbf578(void)

ushort FUN_140bbf578(longlong *param_1,ushort param_2)

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
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 == (ushort *)0x0) {
            return 0xffff;
          }
          if (puVar1 + 1 == (ushort *)0x0) {
            return 0xffff;
          }
          return puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 140bbf5de FUN_140bbf5de body=277 status=ok
// SIG undefined FUN_140bbf5de(void)

undefined4 *
FUN_140bbf5de(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  ushort *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bbfa94(param_1,local_40);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_38 = uVar1;
  local_38[1] = *puVar2;
  local_38[2] = 0xffff;
  local_38[3] = 0xffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
    *(uint *)(local_38 + 4) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 2) =
         *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_140bc0290(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbf6f4 FUN_140bbf6f4 body=300 status=ok
// SIG undefined FUN_140bbf6f4(void)

undefined4 *
FUN_140bbf6f4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140bbf8b8(param_1,local_50);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_48 = uVar1;
  local_48[1] = *puVar2;
  local_48[2] = 0xffff;
  local_48[3] = 0xffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_140bbf822(param_1,uVar1,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_48 + 4) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140bc001c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbf822 FUN_140bbf822 body=149 status=ok
// SIG undefined FUN_140bbf822(void)

void FUN_140bbf822(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar4 * 0xc);
        if (*psVar1 == *param_3) {
          *(undefined4 *)psVar1 = *(undefined4 *)param_3;
          FUN_14086b508(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(psVar1 + 2);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140bbf88e;
    }
  }
  uVar2 = 0;
LAB_140bbf88e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140bbf8b8 FUN_140bbf8b8 body=476 status=ok
// SIG undefined FUN_140bbf8b8(void)

int * FUN_140bbf8b8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447cc1b4(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 140bbfa94 FUN_140bbfa94 body=476 status=ok
// SIG undefined FUN_140bbfa94(void)

int * FUN_140bbfa94(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447cc1b4(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xc);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xc) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 140bbfc70 FUN_140bbfc70 body=939 status=ok
// SIG undefined FUN_140bbfc70(void)

int * FUN_140bbfc70(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_140171ad2(param_1,iVar15);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar6 = iVar12 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar10 = iVar12 + 1;
    iVar14 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    if (iVar14 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar6 = iVar12;
        }
        else {
          uVar17 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar17) {
              uVar16 = uVar17;
            }
          }
          else {
            uVar16 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar16 << 2,0);
          iVar6 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar17 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar8,iVar6);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar6 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar8;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar7 = (longlong)iVar15;
    iVar12 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar12;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x14) = 0xffffffff;
    }
  }
  iVar12 = 1;
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar6 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar6 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  puVar2 = (undefined8 *)(*param_1 + lVar7 * 0x14);
  puVar4 = (undefined2 *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *puVar2 = uVar5;
  *(undefined2 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0xffffffff;
  uVar16 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar17 = uVar16 >> 0xd ^ (int)uVar5 - uVar16;
  uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
  uVar19 = uVar18 >> 0xd ^ (uVar16 - uVar17) - uVar18;
  uVar17 = uVar19 >> 0xc ^ (uVar17 - uVar18) - uVar19;
  uVar20 = uVar17 << 0x10 ^ (uVar18 - uVar19) - uVar17;
  uVar18 = uVar20 >> 5 ^ (uVar19 - uVar17) - uVar20;
  uVar19 = uVar18 >> 3 ^ (uVar17 - uVar20) - uVar18;
  uVar17 = uVar19 << 10 ^ (uVar20 - uVar18) - uVar19;
  uVar17 = uVar17 >> 0xf ^ uVar18 - (uVar19 + uVar17);
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar18) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar6 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar6 * 0x14);
        if ((*piVar3 == (int)uVar5) && (*(uint *)(*param_1 + 4 + (longlong)iVar6 * 0x14) == uVar16))
        {
          uVar5 = *puVar2;
          piVar3[2] = *(int *)(puVar2 + 1);
          *(undefined8 *)piVar3 = uVar5;
          FUN_140bbed3c(param_1,iVar15);
          goto LAB_140bbfecd;
        }
        iVar6 = piVar3[3];
      } while (iVar6 != -1);
    }
  }
  if (3 < uVar18) {
    uVar11 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar7 & 0x1f);
  }
  iVar6 = iVar15;
  if (((int)uVar18 < 1) || (iVar12 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)(puVar2 + 2) = uVar17;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140bc0504(param_1);
  }
LAB_140bbfecd:
  *param_2 = iVar6;
  return param_2;
}



// FUNCTION 140bc001c FUN_140bc001c body=627 status=ok
// SIG undefined FUN_140bc001c(void)

void FUN_140bc001c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140bc007e;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_140bc007e:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar15) {
      iVar15 = iVar3;
    }
  }
  if (iVar15 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar15;
      uVar4 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar8 + lVar14 * 0xc);
      *(uint *)(lVar8 + 8 + lVar14 * 0xc) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 4 + lVar14 * 0xc) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar15;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar15 = (int)uVar5;
      lVar8 = (longlong)iVar15;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar10 <= iVar15) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar14 + 1];
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar15 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar3);
  }
  return;
}



// FUNCTION 140bc0290 FUN_140bc0290 body=627 status=ok
// SIG undefined FUN_140bc0290(void)

void FUN_140bc0290(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140bc02f2;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_140bc02f2:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar15) {
      iVar15 = iVar3;
    }
  }
  if (iVar15 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar15;
      uVar4 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar8 + lVar14 * 0xc);
      *(uint *)(lVar8 + 8 + lVar14 * 0xc) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 4 + lVar14 * 0xc) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar15;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar15 = (int)uVar5;
      lVar8 = (longlong)iVar15;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar10 <= iVar15) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar14 + 1];
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar15 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar15 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar3);
  }
  return;
}



// FUNCTION 140bc0504 FUN_140bc0504 body=784 status=ok
// SIG undefined FUN_140bc0504(void)

void FUN_140bc0504(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140bc056a;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar9 != uVar2);
LAB_140bc056a:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar17 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(uint *)(lVar8 + 4 + lVar14 * 0x14);
      uVar15 = uVar2 >> 0xd ^ *(int *)(lVar8 + lVar14 * 0x14) - uVar2;
      uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
      uVar2 = uVar6 >> 0xd ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 0xc ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar2) - uVar15;
      uVar2 = uVar6 >> 5 ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 3 ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar2) - uVar15;
      uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar2 - (uVar15 + uVar6)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar8 + 0x10 + lVar14 * 0x14) = iVar16;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0xc + lVar14 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar8 = (longlong)iVar7;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar17 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
  return;
}



// FUNCTION 140bc0814 FUN_140bc0814 body=55 status=ok
// SIG undefined FUN_140bc0814(void)

void FUN_140bc0814(longlong *param_1)

{
  FUN_140bc084c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bc084c FUN_140bc084c body=123 status=ok
// SIG undefined FUN_140bc084c(void)

void FUN_140bc084c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140bc08c8 FUN_140bc08c8 body=73 status=ok
// SIG undefined FUN_140bc08c8(void)

void FUN_140bc08c8(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bc0920 FUN_140bc0920 body=31 status=ok
// SIG undefined FUN_140bc0920(void)

undefined8 FUN_140bc0920(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bc0940 FUN_140bc0940 body=197 status=ok
// SIG undefined FUN_140bc0940(void)

undefined4
FUN_140bc0940(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [20];
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_140bc0a16(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  (**(code **)(*param_1 + 8))(param_1,local_58);
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_140bc0a16(param_3,param_2,local_44,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc0a16 FUN_140bc0a16 body=391 status=ok
// SIG undefined FUN_140bc0a16(void)

undefined8
FUN_140bc0a16(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_5 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_144a8232a(param_1);
    local_48 = (undefined2 *)*puVar2;
    FUN_1400021e4(&local_48,&local_38);
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar4);
    puVar3 = local_38;
  }
  else {
    iVar4 = *param_1;
    if (iVar4 == 0) {
      FUN_1400020e8(param_2,&DAT_149e192d0,2);
      goto LAB_140bc0af0;
    }
    puVar3 = *(undefined2 **)(param_1 + 1);
    puVar1 = puVar3;
    if ((puVar3 == DAT_14c948034) && (puVar1 = DAT_14c948034, iVar4 != DAT_14c948030)) {
      FUN_14011791e(&local_38,iVar4,(ulonglong)puVar3 >> 0x20);
      *(undefined2 **)(param_1 + 1) = local_38;
      puVar1 = local_38;
    }
    local_38 = puVar1;
    FUN_1400021e4(&local_38,&local_48);
    FUN_144832102(&local_48,0);
    puVar1 = local_48;
    bVar5 = (int)uStack_40 != 0;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    puVar3 = &DAT_149dfb77a;
    if (bVar5) {
      puVar3 = puVar1;
    }
    FUN_140002266(&local_38,L"\"%s\"",puVar3);
    iVar4 = local_30 + -1;
    if (local_30 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar3 = local_48;
    if (puVar1 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar1);
      puVar3 = local_48;
    }
  }
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140bc0af0:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140bc0bac FUN_140bc0bac body=40 status=ok
// SIG undefined FUN_140bc0bac(void)

undefined8 FUN_140bc0bac(undefined8 param_1,int param_2)

{
  FUN_140c09192();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bc0bd4 FUN_140bc0bd4 body=59 status=ok
// SIG undefined FUN_140bc0bd4(void)

void FUN_140bc0bd4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x2d8))();
  FUN_140bc0c12(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140bc0c12 FUN_140bc0c12 body=423 status=ok
// SIG undefined FUN_140bc0c12(void)

/* WARNING: Removing unreachable block (ram,0x000140bc0d6e) */
/* WARNING: Removing unreachable block (ram,0x000140bc0d78) */
/* WARNING: Removing unreachable block (ram,0x000140bc0d8a) */

ulonglong FUN_140bc0c12(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                       undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 local_48;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_37 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  local_48 = 0;
  uStack_43 = 0;
  local_40 = 0;
  local_3c = 0;
  local_68 = *param_4;
  plStack_60 = (longlong *)param_4[1];
  if (plStack_60 == (longlong *)0x0) {
    plStack_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    unaff_RBX = 0;
  }
  local_58 = param_4[2];
  lVar5 = param_4[3];
  local_78 = param_2;
  local_70 = param_3;
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_4[3];
    }
  }
  uStack_50 = (undefined5)lVar5;
  uStack_4b = (undefined3)((ulonglong)lVar5 >> 0x28);
  lVar5 = param_4[4];
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_4[4];
    }
  }
  local_48 = (undefined5)lVar5;
  uStack_43 = (undefined3)((ulonglong)lVar5 >> 0x28);
  local_40 = *(undefined4 *)(param_4 + 5);
  local_3c = *(undefined1 *)((longlong)param_4 + 0x2c);
  local_38 = param_5;
  uVar4 = FUN_14477b072(param_1,DAT_14cacc4f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_78);
  plVar3 = plStack_60;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_37);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140bc0dba FUN_140bc0dba body=38 status=ok
// SIG undefined FUN_140bc0dba(void)

undefined8 * FUN_140bc0dba(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144b45d30(0,param_2,0x20);
  return param_2;
}



// FUNCTION 140bc0de0 FUN_140bc0de0 body=108 status=ok
// SIG undefined FUN_140bc0de0(void)

void FUN_140bc0de0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14013fde2();
  FUN_14013fe7a(param_1 + 0x130);
  FUN_140bc0e4c(param_1 + -0xd0);
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x140), lVar4 != 0)) {
    *(undefined8 *)(lVar3 + 0x140) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 140bc0e4c FUN_140bc0e4c body=492 status=ok
// SIG undefined FUN_140bc0e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bc0e4c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar13 = 0;
  bVar14 = true;
  do {
    bVar12 = bVar14;
    lVar13 = lVar13 * 0x10;
    lVar4 = *(longlong *)(param_1 + 0x18 + lVar13);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x20 + lVar13) != 0)) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar13 = lVar13 + param_1 + 0x18;
      local_48 = *(longlong *)(lVar13 + 8);
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_50 = lVar4;
      if (DAT_14cae1ae8 != -1) {
        FUN_140bc103a(&local_50);
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
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar4;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar11;
                LOCK();
                bVar14 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar14) {
                  plVar11 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar14);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar14 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar9;
                if (bVar14) {
                  plVar10 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar14);
            }
          }
        }
      }
      if (local_50 != 0) {
        LOCK();
        puVar1 = (uint *)(local_50 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      FUN_14013ffd6(lVar13);
    }
    lVar13 = 1;
    bVar14 = false;
  } while (bVar12);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar5 = DAT_14c846258;
  *(undefined8 *)(param_1 + 0x40) = _DAT_14c846250;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = _DAT_14c846268;
  *(undefined8 *)(param_1 + 0x50) = _DAT_14c846260;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar5 = _DAT_14c846278;
  *(undefined8 *)(param_1 + 0x60) = _DAT_14c846270;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  uVar5 = CONCAT44(DAT_14c84628c,DAT_14c846288);
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(DAT_14c846284,DAT_14c846280);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = DAT_14c846258;
  *(undefined8 *)(param_1 + 0x80) = _DAT_14c846250;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  uVar5 = _DAT_14c846268;
  *(undefined8 *)(param_1 + 0x90) = _DAT_14c846260;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = _DAT_14c846278;
  *(undefined8 *)(param_1 + 0xa0) = _DAT_14c846270;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  uVar8 = DAT_14c84628c;
  uVar7 = DAT_14c846288;
  uVar6 = DAT_14c846284;
  *(undefined4 *)(param_1 + 0xb0) = DAT_14c846280;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  *(undefined4 *)(param_1 + 0xbc) = uVar8;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc103a FUN_140bc103a body=459 status=ok
// SIG undefined FUN_140bc103a(void)

void FUN_140bc103a(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  uVar7 = DAT_14c7590b0;
  uVar3 = *(uint *)(*param_1 + 0x20);
  uVar13 = 0;
  uVar12 = 0x12;
  do {
    uVar11 = uVar13 + uVar12 >> 1;
    uVar8 = uVar11;
    if (uVar3 <= (uint)(&DAT_14a913650)[uVar11 - 1]) {
      uVar8 = uVar13;
      uVar12 = uVar11;
    }
    uVar13 = uVar8;
  } while (1 < uVar12 - uVar13);
  uVar12 = DAT_14c7590b0 % 3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae1628);
  lVar15 = (ulonglong)uVar13 * 0x10 + (ulonglong)uVar12 * 0x120;
  plVar14 = (longlong *)(&DAT_14cae1618 + lVar15 + 0x158);
  iVar4 = *(int *)(&DAT_14cae1618 + lVar15 + 0x160);
  *(uint *)(&DAT_14cae1618 + lVar15 + 0x160) = iVar4 + 1U;
  if (*(uint *)(&DAT_14cae1618 + lVar15 + 0x164) < iVar4 + 1U) {
    FUN_14016f968(plVar14,iVar4);
  }
  plVar14 = (longlong *)(*plVar14 + (longlong)iVar4 * 0x18);
  *plVar14 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar15 = CONCAT44(uVar7,uVar3);
  plVar14[1] = lVar6;
  if (lVar6 == 0) {
    plVar14[2] = lVar15;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae1628);
  }
  else {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    plVar14[2] = lVar15;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae1628);
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar6 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar14 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar14;
            LOCK();
            bVar16 = plVar14 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar16) {
              plVar14 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar16 = plVar10 != DAT_14ca843c8;
            plVar14 = plVar9;
            if (bVar16) {
              plVar10 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140bc121a FUN_140bc121a body=388 status=ok
// SIG undefined FUN_140bc121a(void)

void FUN_140bc121a(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if (*param_3 == '\x01') {
      lVar1 = *(longlong *)(param_1 + 0x70);
      uVar3 = FUN_140bc13b4(param_3,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
      FUN_140119b6e(uVar3,*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
    if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      FUN_1407d9273(param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88,&DAT_14c951f48);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1407d9273(param_2,&local_58);
  if ((int)uStack_50 < 1) {
    if (*param_3 != '\x01') goto LAB_140bc12b4;
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar3 = FUN_140bc13b4(param_3,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
    FUN_1400fca8a(uVar3,*(undefined8 *)(lVar1 + 0xe8));
    cVar2 = '\0';
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar3 = FUN_140bc13b4(param_3,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
    local_60 = uStack_50;
    local_68 = local_58;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140bc14b8(uVar3,*(undefined8 *)(lVar1 + 0xe8));
    cVar2 = '\x01';
  }
  *param_3 = cVar2;
LAB_140bc12b4:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 140bc13b4 FUN_140bc13b4 body=260 status=ok
// SIG undefined FUN_140bc13b4(void)

longlong FUN_140bc13b4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (DAT_14c963de0 != DAT_14c963e0c) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    puVar5 = &DAT_14c963e10;
    if (DAT_14c963e18 != (undefined *)0x0) {
      puVar5 = DAT_14c963e18;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c963e20 - 1U &
                              ((uVar2 >> 2) +
                               (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 +
                               (uVar3 & 0xffff) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) +
                               ((uVar3 & 0xffff) >> 4) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x20;
        lVar1 = DAT_14c963dd8 + lVar6;
        if ((*(longlong *)(DAT_14c963dd8 + lVar6) == param_2) &&
           (*(longlong *)(DAT_14c963dd8 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x18);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
        return param_1 - *(longlong *)(lVar1 + 0x10);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140bc14b8 FUN_140bc14b8 body=536 status=ok
// SIG undefined FUN_140bc14b8(void)

void FUN_140bc14b8(ulonglong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 == DAT_14c963dbc) {
    FUN_140f9708a(&DAT_14c9647b8,&PTR_PTR_14c75ecc8);
  }
  uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_38 = param_1;
  uVar4 = FUN_140a2903e(uVar3 >> 0x10 ^ uVar3);
  uVar3 = (uint)((ulonglong)param_2 >> 0x10);
  uVar7 = (uint)param_2 & 0xffff;
  plVar5 = (longlong *)
           FUN_140a294e4(uVar4,((uint)param_2 << 0x10 | uVar7) + (int)((ulonglong)param_2 >> 0x20) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4),&local_30);
  if (*plVar5 != 0) goto LAB_140bc15dc;
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149eae1a0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) goto LAB_140bc15dc;
    plVar5[1] = 0;
LAB_140bc166b:
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
    if (plVar6 == (longlong *)0x0) goto LAB_140bc15dc;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)plVar5[1];
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar5[1] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_140bc166b;
    }
  }
  LOCK();
  plVar8 = plVar6 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_140bc15dc:
  FUN_140bc16e2(*plVar5,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc16e2 FUN_140bc16e2 body=65 status=ok
// SIG undefined FUN_140bc16e2(void)

longlong * FUN_140bc16e2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar3 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = lVar2;
  *(int *)(param_1 + 1) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  return param_1;
}



// FUNCTION 140bc1724 FUN_140bc1724 body=72 status=ok
// SIG undefined FUN_140bc1724(void)

void FUN_140bc1724(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140bc176c(param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 140bc176c FUN_140bc176c body=464 status=ok
// SIG undefined FUN_140bc176c(void)

void FUN_140bc176c(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x01') {
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x100))();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x100))();
  }
  iVar1 = *(int *)(param_1 + 0x94);
  FUN_140a83712(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_147c86c8e(param_1 + 0x88);
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  FUN_140a83712(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    FUN_147c86c8e(param_1 + 0x98);
    return;
  }
  return;
}



// FUNCTION 140bc194a FUN_140bc194a body=113 status=ok
// SIG undefined FUN_140bc194a(void)

undefined8 * FUN_140bc194a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b094bd0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a18e3d0;
  plVar3 = (longlong *)param_1[7];
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



// FUNCTION 140bc19bc FUN_140bc19bc body=988 status=ok
// SIG undefined FUN_140bc19bc(void)

void FUN_140bc19bc(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0xa8);
  if (plVar1 == (longlong *)0x0) {
LAB_140bc1d43:
    plVar2 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb94538);
    if (plVar1 == (longlong *)0x0) goto LAB_140bc1d43;
    if (DAT_14cb94538 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb94538);
    if (plVar1 == plVar2) goto LAB_140bc1d43;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0xa8);
  if (plVar1 == (longlong *)0x0) goto LAB_140bc1db7;
  uVar3 = FUN_140bc1dde();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
  if (plVar1 == (longlong *)0x0) goto LAB_140bc1db7;
  uVar3 = FUN_140bc1dde();
  plVar4 = (longlong *)FUN_144718840(plVar1,uVar3);
  if (((plVar1 == plVar4) || (plVar2 == (longlong *)0x0)) || (plVar4 == (longlong *)0x0))
  goto LAB_140bc1db7;
  lVar5 = *(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0x110));
  if (lVar5 == 0) {
LAB_140bc1d4a:
    lVar5 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = (code *)&LAB_140f21842;
      local_68 = L"Game";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140bc1d4a;
  }
  uVar3 = (**(code **)(*plVar2 + 0x18))();
  if (param_2 == '\0') {
    FUN_140bc1ec4(uVar3,DAT_14cbc6200,0xff,0);
    (**(code **)(*plVar4 + 0x58))(plVar4,DAT_14cbc6200);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  else {
    local_80 = local_80 & 0xffffff00;
    local_88 = local_88 & 0xffffff00;
    FUN_140d78b8a(uVar3,DAT_14cbc6200,0xff,1);
    (**(code **)(*plVar4 + 0x50))(plVar4,DAT_14cbc6200);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_140bc1db7:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc1dde FUN_140bc1dde body=228 status=ok
// SIG undefined FUN_140bc1dde(void)

longlong FUN_140bc1dde(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6b718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148774471;
    local_40 = FUN_14652c86b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"Melee",&DAT_14cb6b718,&DAT_148774470);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc1ec4 FUN_140bc1ec4 body=353 status=ok
// SIG undefined FUN_140bc1ec4(void)

void FUN_140bc1ec4(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  byte *pbVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar6 = (byte *)(param_1 + 0xb0);
  lVar4 = 0;
  bVar5 = 0;
  local_58 = param_1;
  do {
    if ((param_3 >> ((uint)lVar4 & 0x1f) & 1) != 0) {
      bVar1 = *pbVar6;
      local_50 = param_2;
      FUN_1400bc8c2(pbVar6,&local_50);
      if (bVar1 == 1) {
        bVar1 = *pbVar6 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      bVar5 = bVar5 | bVar1;
    }
    lVar4 = lVar4 + 1;
    pbVar6 = pbVar6 + 0x28;
  } while (lVar4 != 4);
  if ((bVar5 & 1) != 0) {
    FUN_140bc21b8(local_58,param_3);
  }
  if ((param_4 != '\0') && (plVar7 = *(longlong **)(local_58 + 0x150), plVar7 != (longlong *)0x0)) {
    if ((char)plVar7[0x2f] == '\x03') {
      if (plVar7[0x78] == 0) goto LAB_140bc1f45;
      cVar2 = (**(code **)(*plVar7 + 0x700))(plVar7);
      plVar7 = *(longlong **)(local_58 + 0x150);
      if (cVar2 == '\0') goto LAB_140bc1fff;
      if ((plVar7 == (longlong *)0x0) || ((char)plVar7[0x2f] == '\x03')) goto LAB_140bc1f45;
    }
    cVar2 = (**(code **)(*plVar7 + 0x700))(plVar7);
    if (cVar2 != '\0') {
      plVar7 = *(longlong **)(local_58 + 0x150);
LAB_140bc1fff:
      uVar3 = FUN_141262f1a();
      FUN_144718840(plVar7,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
  }
LAB_140bc1f45:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc2046 FUN_140bc2046 body=369 status=ok
// SIG undefined FUN_140bc2046(void)

void FUN_140bc2046(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar8 = (char *)(param_1 + 0x6358);
  lVar7 = 0;
  local_50 = param_2;
  do {
    uVar6 = 1 << ((byte)lVar7 & 0x1f);
    if ((param_3 >> ((uint)lVar7 & 0x1f) & 1) != 0) {
      FUN_1400bc8c2(pcVar8 + 0x148,&local_50);
      if (pcVar8[0x148] == '\0') {
        *(uint *)(param_1 + 0x6498) = *(uint *)(param_1 + 0x6498) & ~uVar6;
      }
      if (((param_4 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) &&
         (FUN_1400bc8c2(pcVar8,&local_50), *pcVar8 == '\0')) {
        *(uint *)(param_1 + 0x6350) = *(uint *)(param_1 + 0x6350) & ~uVar6;
        uVar1 = *(ulonglong *)(param_1 + 0x28);
        if (uVar1 < 0xffffffff00000000) {
          plVar5 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar5 = (longlong *)0x0;
          }
          (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x35);
        }
        else {
          uVar6 = (uint)uVar1;
          if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
            puVar3 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar3 = DAT_14c998080;
            }
            if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
              lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
              lVar4 = *(longlong *)(lVar2 + 0x18);
              if (*(longlong *)(lVar2 + 0x18) == 0) {
                lVar4 = lVar2 + 8;
              }
              *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x200000;
              *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
    pcVar8 = pcVar8 + 0x28;
  } while (lVar7 != 8);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc21b8 FUN_140bc21b8 body=1122 status=ok
// SIG undefined FUN_140bc21b8(void)

void FUN_140bc21b8(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x700))(), cVar4 != '\0')) {
    if (((param_2 & 4) != 0) &&
       ((*(char *)(param_1 + 0x100) == '\0' && (0 < *(int *)(param_1 + 0xa8))))) {
      lVar9 = 0x20;
      lVar10 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar9);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
LAB_140bc226c:
          if ((*(longlong *)(lVar1 + 0xd60) == DAT_14cb95128) &&
             (cVar4 = FUN_1406f1180(lVar1), cVar4 != '\0')) {
            FUN_140e3bfea(lVar1,*(undefined1 *)(lVar1 + 0xbd8),1);
          }
        }
        else if (lVar1 != 0) goto LAB_140bc226c;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x170;
      } while (lVar10 < *(int *)(param_1 + 0xa8));
    }
    if ((((param_2 & 8) != 0) && (*(char *)(param_1 + 0x128) == '\x01')) &&
       (0 < *(int *)(param_1 + 0xa8))) {
      lVar9 = 0x20;
      lVar10 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar9);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
LAB_140bc25da:
          if ((*(longlong *)(lVar1 + 0xd60) == DAT_14cb95128) &&
             (cVar4 = FUN_140cc6652(lVar1), cVar4 != '\0')) {
            FUN_148a1fce0(lVar1,0,0);
          }
        }
        else if (lVar1 != 0) goto LAB_140bc25da;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x170;
      } while (lVar10 < *(int *)(param_1 + 0xa8));
    }
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0xb0) == '\0')) &&
       (0 < *(int *)(param_1 + 0xa8))) {
      lVar9 = 0;
      uVar7 = 0;
      uVar8 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + lVar9);
        if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
          FUN_1456cec3c(lVar10);
LAB_140bc2311:
          if ((*(longlong *)(lVar10 + 0xd60) == DAT_14cb95128) &&
             (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x58 + lVar9) == 0)) {
            uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x60 + lVar9);
            if (uVar2 != 0) {
              uVar3 = 0;
              if (uVar2 != 0) {
                for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              if (uVar3 < 8) {
                if ((uVar8 >> (uVar3 & 0x3f) & 1) == 0) {
                  uVar8 = uVar8 | 1L << ((byte)uVar3 & 0x3f);
                  FUN_140dc8f42(param_1);
                }
                goto LAB_140bc2348;
              }
            }
            FUN_140e2f7ec(param_1,uVar7 & 0xffffffff);
          }
        }
        else if (lVar10 != 0) goto LAB_140bc2311;
LAB_140bc2348:
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x170;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0xa8));
    }
    plVar5 = *(longlong **)(param_1 + 0x150);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb6fd70 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_1487a9cc9;
        local_70 = FUN_1465433f8;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb6fd70);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb6fd70 == 0) {
          local_60 = &local_40;
          local_40 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_1487a9cc9;
          local_70 = FUN_1465433f8;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb6fd70);
        if (((((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6), cVar4 != '\0')) &&
            ((cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6), (param_2 & 2) != 0 && (cVar4 == '\0')))
            ) && (*(char *)(param_1 + 0xd8) == '\0')) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc2636 FUN_140bc2636 body=482 status=ok
// SIG undefined FUN_140bc2636(void)

void FUN_140bc2636(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  code *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [624];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_298 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_2a8 = FUN_1446ddbd2();
      local_2a0 = FUN_1468d96f0;
      local_2b0 = 0;
      local_2b8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_298);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_298);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_298);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_298 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_298);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140bc281a(&local_290,local_298);
  FUN_140bc29bc(param_3,&local_290);
  local_290 = 0;
  FUN_14076ba36(local_288);
  if ((local_18 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc281a FUN_140bc281a body=418 status=ok
// SIG undefined FUN_140bc281a(void)

longlong * FUN_140bc281a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = -0x100000000;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x200000000;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x20;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x200000000;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x20;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x200000000;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x20;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x30);
    if (*(char *)(lVar1 + 0x330) == '\0') {
      FUN_140e5e628(lVar1);
    }
    FUN_14054d6dc(param_1 + 1,lVar1 + 200);
  }
  return param_1;
}



// FUNCTION 140bc29bc FUN_140bc29bc body=272 status=ok
// SIG undefined FUN_140bc29bc(void)

void FUN_140bc29bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_140bc2b28(param_1 + 1,param_2 + 1);
  FUN_140bc2b28(param_1 + 0xb,param_2 + 0xb);
  FUN_140bc2be4(param_1 + 0x15,param_2 + 0x15);
  FUN_140bc2b86(param_1 + 0x17,param_2 + 0x17);
  FUN_14031eb60(param_1 + 0x21,param_2 + 0x21);
  if ((int)param_1[0x26] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,(int)param_1[0x26] + -1,1);
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  *(int *)(param_1 + 0x26) = (int)param_2[0x26];
  *(undefined4 *)(param_2 + 0x26) = 0;
  FUN_140bc2acc(param_1 + 0x27,param_2 + 0x27);
  FUN_140bc2acc(param_1 + 0x34,param_2 + 0x34);
  FUN_140bc2acc(param_1 + 0x41,param_2 + 0x41);
  param_1[0x4e] = param_2[0x4e];
  return;
}



// FUNCTION 140bc2acc FUN_140bc2acc body=91 status=ok
// SIG undefined FUN_140bc2acc(void)

longlong FUN_140bc2acc(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14389b5d6(param_1);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  return param_1;
}



// FUNCTION 140bc2b28 FUN_140bc2b28 body=93 status=ok
// SIG undefined FUN_140bc2b28(void)

longlong FUN_140bc2b28(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140bc2c5e(param_1);
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



// FUNCTION 140bc2b86 FUN_140bc2b86 body=93 status=ok
// SIG undefined FUN_140bc2b86(void)

longlong FUN_140bc2b86(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140bc2f1c(param_1);
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



// FUNCTION 140bc2be4 FUN_140bc2be4 body=122 status=ok
// SIG undefined FUN_140bc2be4(void)

longlong * FUN_140bc2be4(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = 0;
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
  }
  return param_1;
}



// FUNCTION 140bc2c5e FUN_140bc2c5e body=701 status=ok
// SIG undefined FUN_140bc2c5e(void)

longlong * FUN_140bc2c5e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 2);
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar20 = 0;
      uVar19 = 1;
      iVar15 = 0;
      iVar13 = 0;
    }
    else {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      uVar18 = *puVar7;
      if (uVar18 == 0) {
        iVar15 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar15 = iVar2 + -1;
        }
        uVar20 = 0;
        uVar11 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar11 = uVar20;
        }
        iVar15 = 0;
        do {
          if (uVar11 == uVar20) goto LAB_140bc2e33;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar7[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar20 = 0;
        iVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar18 & uVar18);
      uVar11 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar13 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar13) {
        iVar13 = iVar2;
      }
    }
    if (iVar13 != iVar2) {
      uVar18 = 0xffffffff;
      do {
        lVar16 = *param_1 + (longlong)iVar13 * 0x48;
        lVar17 = *param_1 + (longlong)iVar13 * 0x48;
        puVar14 = (undefined8 *)(lVar17 + 0x10);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar17 + 0x30) * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar10 = puVar14;
          if (0x18 < *(ushort *)(lVar16 + 0x28)) {
            puVar10 = (undefined8 *)*puVar14;
          }
          (*pcVar4)(puVar10);
        }
        if (0x18 < *(ushort *)(lVar16 + 0x28)) {
          FUN_1400020a8(*puVar14);
        }
        uVar18 = uVar18 & ~(uint)uVar19;
        puVar7 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar7 = puVar1;
        }
        iVar3 = (int)param_1[5];
        iVar13 = (int)uVar20;
        lVar16 = (longlong)iVar13;
        uVar12 = puVar7[lVar16] & uVar18;
        if (uVar12 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar13) {
            iVar9 = iVar13;
          }
          if (iVar13 < iVar8) {
            lVar17 = 0;
            do {
              uVar12 = puVar7[lVar16 + lVar17 + 1];
              if (uVar12 != 0) {
                uVar20 = (ulonglong)(iVar13 + (int)lVar17 + 1);
                uVar18 = 0xffffffff;
                goto LAB_140bc2d69;
              }
              iVar15 = iVar15 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar9 - lVar16 != lVar17);
            uVar18 = 0xffffffff;
            iVar13 = iVar9;
          }
          uVar20 = (ulonglong)(iVar13 + 1);
          iVar13 = iVar3;
        }
        else {
LAB_140bc2d69:
          uVar19 = (ulonglong)(-uVar12 & uVar12);
          uVar11 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar13 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar13) {
            iVar13 = iVar3;
          }
        }
      } while (iVar13 != iVar2);
    }
LAB_140bc2e33:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar16 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *puVar1 = *(uint *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar16;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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



// FUNCTION 140bc2f1c FUN_140bc2f1c body=667 status=ok
// SIG undefined FUN_140bc2f1c(void)

longlong * FUN_140bc2f1c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 2);
    iVar3 = (int)param_1[5];
    if (iVar3 == 0) {
      uVar20 = 0;
      uVar18 = 1;
      iVar8 = 0;
      iVar15 = 0;
    }
    else {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar19 = *puVar9;
      if (uVar19 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar20 = 0;
        uVar18 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar18 = uVar20;
        }
        iVar15 = 0;
        do {
          if (uVar18 == uVar20) goto LAB_140bc30ae;
          iVar15 = iVar15 + 0x20;
          uVar19 = puVar9[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar20 = 0;
        iVar15 = 0;
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      uVar19 = 0xffffffff;
      do {
        lVar16 = *param_1 + (longlong)iVar8 * 0x38;
        puVar14 = (undefined8 *)(lVar16 + 8);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar16 + 0x28) * 0x120));
        if (pcVar5 != (code *)0x0) {
          puVar12 = puVar14;
          if (0x18 < *(ushort *)(lVar16 + 0x20)) {
            puVar12 = (undefined8 *)*puVar14;
          }
          (*pcVar5)(puVar12);
        }
        if (0x18 < *(ushort *)(lVar16 + 0x20)) {
          FUN_1400020a8(*puVar14);
        }
        uVar19 = uVar19 & ~(uint)uVar18;
        puVar9 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar4 = (int)param_1[5];
        iVar8 = (int)uVar20;
        lVar16 = (longlong)iVar8;
        uVar13 = puVar9[lVar16] & uVar19;
        if (uVar13 == 0) {
          iVar10 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar10 = iVar4 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar8 < iVar10) {
            lVar17 = 0;
            do {
              uVar13 = puVar9[lVar16 + lVar17 + 1];
              if (uVar13 != 0) {
                uVar20 = (ulonglong)(iVar8 + (int)lVar17 + 1);
                uVar19 = 0xffffffff;
                goto LAB_140bc307f;
              }
              iVar15 = iVar15 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar11 - lVar16 != lVar17);
            uVar19 = 0xffffffff;
            iVar8 = iVar11;
          }
          uVar20 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_140bc307f:
          uVar18 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar18 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
        }
      } while (iVar8 != iVar3);
    }
LAB_140bc30ae:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar16 = param_2[3];
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *puVar1 = *(uint *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      *(int *)(param_1 + 3) = (int)lVar16;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
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



// FUNCTION 140bc31b8 FUN_140bc31b8 body=227 status=ok
// SIG undefined FUN_140bc31b8(void)

undefined8 FUN_140bc31b8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140880c0c();
  if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x98) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x50))();
    plVar1 = *(longlong **)(param_1 + 0xd0);
    if ((char)plVar1[8] == '\x01') {
      local_20 = plVar1[7];
    }
    else {
      (**(code **)(*plVar1 + 0x2e8))(plVar1,&local_20);
    }
    FUN_140bc32b6(uVar2,&local_20);
    lVar3 = FUN_140bc3368(*(undefined8 *)(param_1 + 0x38));
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0xd8) = lVar3;
    FUN_140bc37de(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x98),
                  *(longlong *)(param_1 + 0xd0) + 0xa0);
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc32b6 FUN_140bc32b6 body=178 status=ok
// SIG undefined FUN_140bc32b6(void)

void FUN_140bc32b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    iVar2 = 1;
    lVar5 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5) == *param_2) {
        if (iVar2 == 0) {
          return;
        }
        lVar3 = (lVar3 >> 0x20) * 0x10;
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + lVar3) != 0) {
          FUN_140b4f29a();
          iVar1 = *(int *)(param_1 + 0x30);
        }
        iVar2 = iVar1 - iVar2;
        if (iVar2 != 0) {
          iVar4 = 1;
          if (iVar2 < 1) {
            iVar4 = iVar2;
          }
          memmove((void *)(lVar3 + *(longlong *)(param_1 + 0x28)),
                  (void *)((longlong)(iVar1 - iVar4) * 0x10 + *(longlong *)(param_1 + 0x28)),
                  (longlong)iVar4 << 4);
          iVar1 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar1 + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar2 = iVar2 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar5);
  }
  return;
}



// FUNCTION 140bc3368 FUN_140bc3368 body=336 status=ok
// SIG undefined FUN_140bc3368(void)

longlong * FUN_140bc3368(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_140bc34ba(&local_38,uVar5);
  if (local_30 == (longlong *)0x0) {
LAB_140bc3437:
    bVar8 = true;
    plVar7 = (longlong *)0x0;
LAB_140bc343c:
    local_40 = 0;
    local_48 = 0;
    plVar6 = (longlong *)FUN_140bc39f2(DAT_14c951640,0,0x40,0);
    (**(code **)(*plVar6 + 0x310))(plVar6,param_1);
    if (bVar8) goto LAB_140bc3414;
  }
  else {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_140bc3437;
    if (local_38 == 0) {
      bVar8 = false;
      goto LAB_140bc343c;
    }
    plVar6 = (longlong *)FUN_140bc35f2(local_38,param_1);
  }
  LOCK();
  plVar2 = plVar7 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_140bc3414:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 140bc34ba FUN_140bc34ba body=310 status=ok
// SIG undefined FUN_140bc34ba(void)

longlong * FUN_140bc34ba(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb8aae0;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc35f2 FUN_140bc35f2 body=354 status=ok
// SIG undefined FUN_140bc35f2(void)

longlong * FUN_140bc35f2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  lVar1 = DAT_14cb8a688;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  if (*(char *)(lVar1 + uVar6) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x40);
    if ((longlong)iVar2 != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + -8 + (longlong)iVar2 * 8);
      if ((DAT_14c950c29 == '\x01') && (plVar5 != (longlong *)0x0)) {
        FUN_14689c22e(plVar5);
        iVar2 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar2 + -1;
      FUN_140bc3754(param_1 + 0x38);
      goto LAB_140bc3682;
    }
  }
  plVar5 = (longlong *)FUN_140bc39f2(DAT_14c951640,0,0x40,0,0,0);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_145781a2e((longlong *)(param_1 + 0x48),iVar2);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
LAB_140bc3682:
  (**(code **)(*plVar5 + 0x310))(plVar5,param_2);
  return plVar5;
}



// FUNCTION 140bc3754 FUN_140bc3754 body=137 status=ok
// SIG undefined FUN_140bc3754(void)

void FUN_140bc3754(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140bc37de FUN_140bc37de body=493 status=ok
// SIG undefined FUN_140bc37de(void)

void FUN_140bc37de(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0x888) != 0)) &&
      (*(longlong *)(param_1 + 0x890) != 0)) && (*(longlong *)(param_1 + 0x898) != 0)) {
    cVar6 = FUN_1405246fa(param_1);
    if (cVar6 == '\0') {
      FUN_140a224c4(param_1,param_2,param_3);
      if ((*(byte *)(param_3 + 3) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,4,0x10);
    puVar5 = local_40;
    local_38 = 4;
    *local_40 = &PTR_LAB_14b425990;
    local_40[1] = param_2;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(local_40 + 2) = *param_3;
    *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
    *(undefined4 *)(local_40 + 3) = uVar3;
    *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_40[4] = lVar7;
    *local_40 = &PTR_FUN_14b425920;
    local_40[5] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_40 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x2c) = iVar8;
    puVar5[6] = &LAB_14895ae44;
    *(undefined4 *)(puVar5 + 7) = 0;
    FUN_14621550a(param_1,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc39f2 FUN_140bc39f2 body=248 status=ok
// SIG undefined FUN_140bc39f2(void)

undefined8
FUN_140bc39f2(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140bc3aec();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc3aec FUN_140bc3aec body=228 status=ok
// SIG undefined FUN_140bc3aec(void)

longlong FUN_140bc3aec(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb63528 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464eb498;
    local_38 = &LAB_1486f1b1d;
    local_40 = &LAB_141856c2c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x8a0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequencePlayer",&DAT_14cb63528,&DAT_1486f1b1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc3bde FUN_140bc3bde body=330 status=ok
// SIG undefined FUN_140bc3bde(void)

undefined8 FUN_140bc3bde(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_2 + 8))(param_2);
    if (cVar5 != '\0') {
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
      if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 3) == 1)) {
        puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
        pbVar3 = (byte *)*puVar6;
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(pbVar3 + 8);
        }
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        local_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        FUN_1446ddda2(&local_48,uVar7,0);
        FUN_1404e49fa(param_1,&local_48);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,1,0);
    uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1446dcc2e(uVar7,&local_48);
    plVar4 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_14709213c(uVar7,DAT_14cb7de20,param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc3d32 FUN_140bc3d32 body=199 status=ok
// SIG undefined FUN_140bc3d32(void)

undefined8 * FUN_140bc3d32(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_14007ca06();
  FUN_140834366(param_1,uVar2);
  *param_1 = &PTR_FUN_14ac5c480;
  param_1[0x72] = &PTR_FUN_14ac5cac0;
  param_1[0x73] = 0;
  FUN_1405bab3a(param_1,0);
  uVar2 = DAT_14cb241e0;
  uVar3 = FUN_1407fc1c8();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x73] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(lVar4);
    lVar4 = param_1[0x73];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 140bc3dfa FUN_140bc3dfa body=463 status=ok
// SIG undefined FUN_140bc3dfa(void)

undefined4 FUN_140bc3dfa(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  undefined2 local_c8 [64];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    if (param_2 >> 0x20 == 0) {
      local_e8 = (wchar_t *)0x0;
      uStack_e0 = 0;
      lVar5 = 0xf;
      lVar2 = 0x1000000000;
      iVar4 = 0x10;
      uVar7 = param_2 & 0xffffffff;
      do {
        lVar2 = lVar2 + -0x100000000;
        iVar6 = (int)uVar7;
        uVar7 = (ulonglong)(uint)(iVar6 / 10);
        local_c8[lVar5] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
        lVar5 = lVar5 + -1;
        iVar4 = iVar4 + -1;
      } while (0x12 < iVar6 + 9U);
      if ((int)param_2 < 0) {
        iVar4 = (int)lVar5;
        lVar2 = (longlong)iVar4;
        local_c8[lVar2] = 0x2d;
      }
      else {
        lVar2 = lVar2 >> 0x20;
      }
      FUN_1400020e8(&local_e8,local_c8 + lVar2,0x10 - iVar4);
    }
    else {
      local_d0 = param_2;
      FUN_14709d0a8(&local_d0,&local_e8);
    }
    _Str = local_e8;
    if ((int)uStack_e0 == 0) {
      _Str = L"";
    }
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(local_c8,_Str,sVar3 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140bc3fca FUN_140bc3fca body=514 status=ok
// SIG undefined FUN_140bc3fca(void)

void FUN_140bc3fca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      uVar4 = uStack_50;
      lVar6 = *(longlong *)(lVar2 + lVar7);
      if (*(char *)(lVar6 + 0x1c) != '\b') {
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      lVar8 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_14004e612(&local_58,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar8 * 8) = lVar6;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  lVar3 = param_2[3];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_2[2];
    lVar7 = 0;
    do {
      uVar4 = uStack_60;
      lVar6 = *(longlong *)(lVar2 + lVar7);
      if (*(char *)(lVar6 + 0x1c) != '\v') {
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      lVar8 = (longlong)(int)uStack_60;
      uVar5 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
      if (uStack_60._4_4_ < uVar5) {
        FUN_140bc4538(&local_68,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_68 + lVar8 * 8) = lVar6;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_144756766(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_140836c88(param_2,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x1c);
  FUN_14018429c(param_2[2],(int)param_2[3]);
  *(undefined4 *)(param_2 + 3) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0x1c) != 0)) {
    FUN_140626096(param_2 + 2,0);
  }
  local_78 = param_2 + 10;
  FUN_140bc41ce(param_1,&local_58,&local_68,param_2 + 4);
  FUN_14018429c(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef3f6(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc41ce FUN_140bc41ce body=873 status=ok
// SIG undefined FUN_140bc41ce(void)

void FUN_140bc41ce(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401841e8();
  FUN_144750a86(param_1,local_58,0,0);
  lVar5 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar4 = (longlong *)FUN_145a62958();
    lVar5 = plVar4[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar5 = plVar4[0x22];
    }
  }
  cVar3 = *(char *)(lVar5 + 0x75);
  if (*(char *)(param_1 + 0x31) != '\0') {
    cVar3 = *(char *)(param_1 + 0x31);
  }
  if (cVar3 != '\x03') {
    if (0 < *(int *)(param_1 + 0x70)) {
      lVar6 = 0;
      lVar7 = 0;
      lVar5 = 0;
      do {
        if (lVar5 < (int)param_2[1]) {
          lVar2 = *(longlong *)(*param_2 + lVar7);
          if ((0 < *(int *)(lVar2 + 0x38)) && (0 < *(int *)(lVar2 + 0x28))) {
            lVar2 = *(longlong *)(param_1 + 0x68);
            FUN_140ab29fc(lVar2 + lVar6,*param_2 + lVar7,0);
            if ((DAT_14c992ef0 != 0) &&
               ((lVar2 = *(longlong *)(lVar2 + 0xf0 + lVar6), DAT_14c75f080 < *(int *)(lVar2 + 0x38)
                && (FUN_146d84d72(lVar2,local_68), local_68[0] != 0)))) {
              FUN_1400020a8();
            }
          }
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + 0x100;
      } while (lVar5 < *(int *)(param_1 + 0x70));
    }
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    FUN_1402ef3f6(*param_2);
    *(undefined4 *)(param_2 + 1) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140049c78(param_2);
    }
  }
  if ((undefined8 *)(param_1 + 0xf8) != param_3) {
    FUN_14018429c(*(undefined8 *)(param_1 + 0xf8));
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xf8) = *param_3;
    *param_3 = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  if ((undefined8 *)(param_1 + 0x108) != param_4) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x108) = *param_4;
    *param_4 = 0;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x118) = param_4[2];
    param_4[2] = 0;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_4 + 3);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)((longlong)param_4 + 0x1c);
    param_4[3] = 0;
  }
  if ((undefined8 *)(param_1 + 0x128) != param_4 + 4) {
    FUN_1400d7bbd(*(undefined8 *)(param_1 + 0x128));
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x128) = param_4[4];
    param_4[4] = 0;
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_4 + 5);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)((longlong)param_4 + 0x2c);
    param_4[5] = 0;
  }
  if ((undefined8 *)(param_1 + 0x138) != param_5) {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x138) = *param_5;
    *param_5 = 0;
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_5 + 1);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)((longlong)param_5 + 0xc);
    param_5[1] = 0;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xf8);
    lVar6 = 0;
    do {
      *(undefined1 *)(*(longlong *)(lVar5 + lVar6) + 0x19) = 0;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((*(byte *)(param_1 + 0xb8) & 0x20) == 0) {
    FUN_1400d7c38(param_1 + 0xd8);
  }
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc4538 FUN_140bc4538 body=353 status=ok
// SIG undefined FUN_140bc4538(void)

void FUN_140bc4538(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bc45bd;
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
LAB_140bc45bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140bc469a FUN_140bc469a body=44 status=ok
// SIG undefined FUN_140bc469a(void)

undefined8 * FUN_140bc469a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140bc46c6(*param_3,param_1 + 0x20,0,0);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140bc46c6 FUN_140bc46c6 body=237 status=ok
// SIG undefined FUN_140bc46c6(void)

void FUN_140bc46c6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (longlong *)0x0;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_c8;
    (**(code **)(*param_1 + 0x28))(param_1,param_4);
  }
  uVar1 = FUN_140bc47b4(param_1[1]);
  FUN_140bc495f(param_2,uVar1,param_4,param_3);
  if (local_68 != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar2 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar2 = local_88;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc47b4 FUN_140bc47b4 body=84 status=ok
// SIG undefined FUN_140bc47b4(void)

undefined8 FUN_140bc47b4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x000140bc47fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)*plVar3 + 0x2b0))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140bc4808 FUN_140bc4808 body=342 status=ok
// SIG undefined FUN_140bc4808(void)

void FUN_140bc4808(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined ***pppuVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *(undefined8 *)(param_2 + 6) = uVar1;
  lVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  iVar10 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (lVar2 != 0) {
    uVar11 = *(undefined4 *)(lVar2 + 0x90);
    uVar8 = *(undefined4 *)(lVar2 + 0x94);
    uVar4 = *(undefined4 *)(lVar2 + 0x98);
  }
  *param_2 = uVar11;
  param_2[1] = uVar8;
  param_2[2] = uVar4;
  lVar2 = (**(code **)(*param_1 + 0x68))(param_1);
  iVar5 = 0;
  iVar9 = 0;
  if (lVar2 != 0) {
    piVar3 = *(int **)(*(longlong *)(lVar2 + 0x40) + 8);
    piVar6 = &DAT_14c9485f0;
    if (piVar3 != (int *)0x0) {
      piVar6 = piVar3;
    }
    piVar3 = (int *)&DAT_14c948618;
    if (((*piVar6 != 0) && (iVar10 = piVar6[1], iVar10 != 0)) && (*piVar6 != DAT_14c948000)) {
      if ((iVar10 < 2) && (piVar6[9] < 1)) {
        piVar6 = piVar6 + 2;
      }
      else {
        piVar6 = *(int **)(piVar6 + 6);
      }
      if (0 < iVar10) {
        piVar3 = piVar6;
      }
    }
    iVar9 = *piVar3;
    iVar5 = piVar3[1];
    iVar10 = piVar3[2];
  }
  param_2[3] = iVar9;
  param_2[4] = iVar5;
  param_2[5] = iVar10;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b41cc80;
  local_68[0] = FUN_143dfbf7c;
  local_40 = param_1;
  FUN_140ace890(param_2 + 0x18,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar7 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar7 = &local_48;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc495f FUN_140bc495f body=2027 status=ok
// SIG undefined FUN_140bc495f(void)

void FUN_140bc495f(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  ushort local_c0;
  byte local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == 0) goto LAB_140bc4b17;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_110 = *param_1;
  local_108 = *(undefined4 *)(param_1 + 1);
  FUN_1447715ec(&local_100,param_1 + 2);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x44);
LAB_140bc49d6:
    local_138 = local_138 & 0xffffff00;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    FUN_144976b9c(&local_138,uVar5);
  }
  else {
    switch(*(char *)(param_1 + 8)) {
    case '\x01':
      plVar8 = (longlong *)FUN_14039ffc6(param_2);
      if (plVar8 != (longlong *)0x0) {
        local_a0 = *(undefined4 *)(param_3 + 1);
        local_a8 = (uint)*param_3;
        uStack_a4 = (undefined4)((ulonglong)*param_3 >> 0x20);
        (**(code **)(*plVar8 + 0x78))(plVar8,&local_d8);
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          local_120 = (uint)*(undefined8 *)((longlong)param_1 + 0x44);
          uStack_11c = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x44) >> 0x20);
          FUN_1401533ba(&local_a8,&local_120,1);
          lVar6 = FUN_140ca9be8(CONCAT44(uStack_d4,local_d8),&local_a8);
          if (lVar6 != 0) {
            plVar8 = (longlong *)(lVar6 + 0x10);
            if (*(char *)(lVar6 + 0x30) == '\x1d') {
              local_138 = local_138 & 0xffffff00;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0;
              FUN_144976b9c(&local_138,*plVar8);
            }
            else {
              if (*(char *)(lVar6 + 0x30) == '\x1f') {
                puVar9 = (undefined8 *)*plVar8;
                local_88[0] = 0;
                local_98 = (longlong *)0x0;
                uStack_90 = 0;
                local_80 = 0;
                uStack_78 = 0;
                local_a8 = (uint)*puVar9;
                uStack_a4 = (undefined4)((ulonglong)*puVar9 >> 0x20);
                local_a0 = *(undefined4 *)(puVar9 + 1);
                FUN_1447715ec(&local_98,puVar9 + 2);
                uVar5 = FUN_14479d2ce(param_2 + 0x60);
                FUN_140d847e0(param_3,&local_a8,uVar5);
                local_120 = local_120 & 0xffffff00;
                uStack_11c = 0;
                uStack_118 = 0;
                uStack_114 = 0;
                FUN_14039fc7b(&local_a8,&local_120,param_2,0);
                local_138 = local_120;
                uStack_134 = uStack_11c;
                uStack_130 = uStack_118;
                uStack_12c = uStack_114;
                goto LAB_140bc5138;
              }
              FUN_140f7e23a(&local_138,plVar8);
            }
LAB_140bc4cad:
            plVar8 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar8 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
            goto LAB_140bc49f2;
          }
        }
LAB_140bc5077:
        plVar8 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
      break;
    case '\x02':
      uVar5 = param_1[10];
      goto LAB_140bc49d6;
    case '\x03':
      uVar5 = FUN_14883b0b8(param_1 + 8);
      uVar7 = FUN_14479d2ce(param_2 + 0x60);
      local_a8 = local_a8 & 0xffffff00;
      local_80 = (ulonglong)local_80._4_4_ << 0x20;
      FUN_1456bb102(&local_a8,uVar7);
      puVar11 = &local_d8;
      FUN_1447c3578(uVar5,puVar11,&local_a8);
      FUN_140f7e23a(&local_138,puVar11);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_c0) {
          puVar11 = (uint *)CONCAT44(uStack_d4,local_d8);
        }
        (*pcVar2)(puVar11);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(CONCAT44(uStack_d4,local_d8));
      }
      FUN_144a5ac3a(&local_a8);
      goto LAB_140bc49f2;
    case '\x04':
      plVar8 = (longlong *)FUN_14039ffc6(param_2);
      if (plVar8 != (longlong *)0x0) {
        local_a0 = *(undefined4 *)(param_3 + 1);
        local_a8 = (uint)*param_3;
        uStack_a4 = (undefined4)((ulonglong)*param_3 >> 0x20);
        (**(code **)(*plVar8 + 0x78))(plVar8,&local_d8);
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          local_120 = (uint)*(undefined8 *)((longlong)param_1 + 0x44);
          uStack_11c = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x44) >> 0x20);
          FUN_1401533ba(&local_a8,&local_120,1);
          lVar6 = FUN_140ca9be8(CONCAT44(uStack_d4,local_d8),&local_a8);
          if ((lVar6 != 0) && (*(char *)(lVar6 + 0x30) == '\x1f')) {
            puVar9 = *(undefined8 **)(lVar6 + 0x10);
            local_98 = (longlong *)0x0;
            uStack_90 = 0;
            local_88[0] = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_a8 = (uint)*puVar9;
            uStack_a4 = (undefined4)((ulonglong)*puVar9 >> 0x20);
            local_a0 = *(undefined4 *)(puVar9 + 1);
            FUN_1447715ec(&local_98,puVar9 + 2);
            uVar5 = FUN_14479d2ce(param_2 + 0x60);
            FUN_140d847e0(param_3,&local_a8,uVar5);
            FUN_140b126e4(&local_a8,&local_120);
            FUN_141881c76(&local_138,&local_120);
            if (CONCAT44(uStack_11c,local_120) != 0) {
              FUN_1400020a8();
            }
LAB_140bc5138:
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            goto LAB_140bc4cad;
          }
        }
        goto LAB_140bc5077;
      }
    }
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
  }
LAB_140bc49f2:
  cVar3 = *(char *)(param_1 + 7);
  if (*(int *)(param_2 + 100) == 0) {
LAB_140bc4b6f:
    uVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x60);
    uVar5 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_2 + 100) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_140bc4b6f;
      uVar5 = *puVar9;
    }
  }
  FUN_140d847e0(param_3,&local_110,uVar5);
  local_d8 = local_138;
  uStack_d4 = uStack_134;
  uStack_d0 = uStack_130;
  uStack_cc = uStack_12c;
  if (cVar3 == '\0') goto LAB_140bc4a6f;
  local_a8 = local_a8 & 0xffffff00;
  uStack_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  uVar5 = 0;
  FUN_14039fc7b(&local_110,&local_a8,param_2,0);
  switch(cVar3) {
  case '\x01':
    uVar5 = 4;
    break;
  case '\x02':
    uVar5 = 5;
    break;
  case '\x03':
    uVar5 = 1;
    break;
  case '\x04':
    uVar5 = 2;
    break;
  case '\x05':
    if ((local_138 & 0xff) == 3) {
      bVar12 = CONCAT44(uStack_130,uStack_134) == 0;
LAB_140bc4dcb:
      uVar4 = (uint)!bVar12;
    }
    else {
      uVar4 = uStack_12c;
      if (((local_138 & 0xff) != 2) && (uVar4 = 0, (char)local_138 == '\x01')) {
        bVar12 = uStack_12c == 0;
        goto LAB_140bc4dcb;
      }
    }
    if ((local_a8 & 0xff) == 3) {
      bVar12 = CONCAT44(local_a0,uStack_a4) == 0;
LAB_140bc4e42:
      uStack_cc = (uint)!bVar12;
    }
    else {
      uStack_cc = local_9c;
      if (((local_a8 & 0xff) != 2) && (uStack_cc = 0, (char)local_a8 == '\x01')) {
        bVar12 = local_9c == 0;
        goto LAB_140bc4e42;
      }
    }
    if ((int)uStack_cc < (int)uVar4) {
      uStack_cc = uVar4;
    }
    local_d8 = CONCAT31(local_d8._1_3_,2);
    uStack_d4 = 0;
    uStack_d0 = 0;
    goto LAB_140bc4a6f;
  case '\x06':
    if ((local_138 & 0xff) == 3) {
      bVar12 = CONCAT44(uStack_130,uStack_134) == 0;
LAB_140bc4e05:
      uStack_cc = (uint)!bVar12;
    }
    else {
      uStack_cc = uStack_12c;
      if (((local_138 & 0xff) != 2) && (uStack_cc = 0, (char)local_138 == '\x01')) {
        bVar12 = uStack_12c == 0;
        goto LAB_140bc4e05;
      }
    }
    if ((local_a8 & 0xff) == 3) {
      bVar12 = CONCAT44(local_a0,uStack_a4) == 0;
LAB_140bc4e7e:
      uVar4 = (uint)!bVar12;
    }
    else {
      uVar4 = local_9c;
      if (((local_a8 & 0xff) != 2) && (uVar4 = 0, (char)local_a8 == '\x01')) {
        bVar12 = local_9c == 0;
        goto LAB_140bc4e7e;
      }
    }
    if ((int)uVar4 < (int)uStack_cc) {
      uStack_cc = uVar4;
    }
    local_d8 = CONCAT31(local_d8._1_3_,2);
    uStack_d4 = 0;
    uStack_d0 = 0;
    goto LAB_140bc4a6f;
  }
  FUN_140321208(&local_d8,uVar5,&local_a8,&local_138);
LAB_140bc4a6f:
  if (*(int *)(param_2 + 100) == 0) {
LAB_140bc4b77:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x60);
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_2 + 100) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_140bc4b77;
      plVar8 = (longlong *)*puVar9;
    }
  }
  pcVar2 = (code *)param_3[0xc];
  if (pcVar2 == (code *)0x0) {
LAB_140bc4b7e:
    local_a8 = 0;
    uStack_a4 = 0;
    local_98 = (longlong *)0x0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = param_4;
    if ((plVar8 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar8 + 0x2b0))(plVar8), lVar6 != 0))
    {
      FUN_140bc53f1(&local_110,&local_d8,lVar6,&local_a8);
    }
    if (CONCAT44(uStack_a4,local_a8) != 0) {
      plVar8 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar8 = (longlong *)local_88;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    local_a8 = (uint)param_4;
    uStack_a4 = (undefined4)((ulonglong)param_4 >> 0x20);
    plVar10 = param_3 + 0x10;
    if ((longlong *)param_3[0xe] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[0xe];
    }
    uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
    cVar3 = (*pcVar2)(uVar5,&local_110,&local_d8,&local_a8);
    if (cVar3 == '\0') goto LAB_140bc4b7e;
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_140bc4b17:
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc514c FUN_140bc514c body=69 status=ok
// SIG undefined FUN_140bc514c(void)

undefined8 * FUN_140bc514c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140bc5192(param_1,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_140bc52d2(lVar1);
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 140bc5192 FUN_140bc5192 body=223 status=ok
// SIG undefined FUN_140bc5192(void)

undefined8 FUN_140bc5192(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar3 = uVar5 >> 0xd ^ uVar3 - uVar5;
    uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar3) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
    uVar3 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar3 >> 5 ^ (uVar8 - uVar5) - uVar3;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar3) - uVar7;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar7) - uVar5;
    uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar5 + uVar3);
  }
  iVar2 = FUN_140bc5272((longlong *)(param_1 + 0x1d0),uVar3);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    uVar4 = 0;
    if ((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
       (puVar6 = (undefined8 *)(lVar1 + (longlong)iVar2 * 0x20 + 0x10), puVar6 != (undefined8 *)0x0)
       ) {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}



// FUNCTION 140bc5272 FUN_140bc5272 body=95 status=ok
// SIG undefined FUN_140bc5272(void)

int FUN_140bc5272(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140bc52d2 FUN_140bc52d2 body=287 status=ok
// SIG undefined FUN_140bc52d2(void)

longlong FUN_140bc52d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = param_1 + 0x98;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    return lVar3;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b400500;
  *(undefined1 *)(plVar4 + 2) = 1;
  plVar4[3] = param_1;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0xa0);
    if (plVar5 == (longlong *)0x0) {
      return lVar3;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x98) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0xa0);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_140bc535a;
    }
    *(longlong **)(param_1 + 0xa0) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_140bc535a;
  }
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
  if (plVar4 == (longlong *)0x0) {
    return lVar3;
  }
LAB_140bc535a:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return lVar3;
}



// FUNCTION 140bc53f1 FUN_140bc53f1 body=878 status=ok
// SIG undefined FUN_140bc53f1(void)

undefined8 FUN_140bc53f1(undefined1 *param_1,char *param_2,longlong param_3,undefined8 *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60;
  undefined1 local_49;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) goto switchD_140bc54e1_caseD_b;
  if (param_4 == (undefined8 *)0x0) {
    local_48 = CONCAT44(local_48._4_4_,0xffffffff);
    iVar3 = -1;
    lVar8 = 0;
  }
  else {
    pcVar1 = (code *)*param_4;
    lVar8 = param_4[8];
    if (pcVar1 != (code *)0x0) {
      plVar5 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_4[2];
      }
      local_48 = lVar8;
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar2 = (*pcVar1)(uVar4,param_1,param_2,&local_48);
      uVar4 = 1;
      if (cVar2 != '\0') goto LAB_140bc546d;
    }
    local_48 = CONCAT44(local_48._4_4_,0xffffffff);
    iVar3 = -1;
    if (param_4[9] != 0) {
      iVar3 = FUN_140985360(param_3);
      local_48 = CONCAT44(local_48._4_4_,iVar3);
    }
  }
  switch(*param_1) {
  case 1:
    plVar5 = (longlong *)FUN_1401499e8(param_3);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0xb0))(plVar5,param_1,param_2,param_4);
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    plVar5 = (longlong *)FUN_1403a0020(param_3);
    goto LAB_140bc54eb;
  case 6:
    if (iVar3 < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_48 = (ulonglong)local_48._4_4_ << 0x20;
      }
      else {
        uVar4 = FUN_14479d2ce(param_3 + 0x50);
        iVar3 = FUN_1409844f4(uVar4);
        local_48 = CONCAT44(local_48._4_4_,iVar3);
        if (iVar3 < 0) break;
      }
    }
    plVar5 = (longlong *)FUN_140d17acc(param_3,&local_48);
    if (plVar5 != (longlong *)0x0) {
      local_49 = 0xff;
      if ((param_4 == (undefined8 *)0x0) || (*(char *)((longlong)param_4 + 0x59) != '\x01')) {
        cVar2 = *param_2;
        if (cVar2 == '\x02') {
          uVar6 = *(uint *)(param_2 + 0xc);
        }
        else {
          uVar6 = 0;
          if (cVar2 == '\x01') {
            bVar9 = *(int *)(param_2 + 0xc) == 0;
          }
          else {
            if (cVar2 != '\x03') goto LAB_140bc55f5;
            bVar9 = *(longlong *)(param_2 + 4) == 0;
          }
          uVar6 = (uint)!bVar9;
        }
LAB_140bc55f5:
        (**(code **)(*plVar5 + 0x58))(plVar5,param_1,(longlong)(int)uVar6);
      }
      else {
        cVar2 = *param_2;
        if (cVar2 == '\x03') {
          bVar9 = *(longlong *)(param_2 + 4) == 0;
LAB_140bc5729:
          uVar6 = (uint)!bVar9;
        }
        else if (cVar2 == '\x02') {
          uVar6 = *(uint *)(param_2 + 0xc);
        }
        else {
          uVar6 = 0;
          if (cVar2 == '\x01') {
            bVar9 = *(int *)(param_2 + 0xc) == 0;
            goto LAB_140bc5729;
          }
        }
        (**(code **)(*plVar5 + 0x40))(plVar5,param_1,&local_49,(longlong)(int)uVar6);
      }
    }
    break;
  case 7:
    if (iVar3 < 0) {
      plVar5 = *(longlong **)(param_3 + 0x160);
    }
    else {
      plVar5 = (longlong *)FUN_143d2992a(param_3,&local_48);
    }
    if (plVar5 != (longlong *)0x0) {
      if (*param_2 == '\x01') {
        uVar10 = *(int *)(param_2 + 0xc) != 0;
      }
      else {
        uVar10 = FUN_140321d1a(param_2);
      }
      local_68 = lVar8;
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar10,0);
    }
    break;
  case 8:
    if (iVar3 < 0) {
      if (*(char *)(param_3 + 0x68) == '\x01') {
        local_48 = (ulonglong)local_48._4_4_ << 0x20;
      }
      else {
        uVar4 = FUN_14479d2ce(param_3 + 0x50);
        iVar3 = FUN_1409844f4(uVar4);
        local_48 = CONCAT44(local_48._4_4_,iVar3);
        if (iVar3 < 0) break;
      }
    }
    plVar5 = (longlong *)FUN_141068ae8(param_3,&local_48);
    goto LAB_140bc5572;
  case 9:
    plVar5 = (longlong *)FUN_145781ab4(param_3);
LAB_140bc54eb:
    if (plVar5 != (longlong *)0x0) {
      local_68 = lVar8;
      (**(code **)(*plVar5 + 0x30))(plVar5,param_1,param_2,0);
    }
    break;
  case 10:
    plVar5 = (longlong *)FUN_14039ffc6(param_3);
    if (plVar5 != (longlong *)0x0) {
      lVar7 = *plVar5;
      local_60 = 0;
LAB_140bc563c:
      local_68 = lVar8;
      (**(code **)(lVar7 + 0x48))(plVar5,param_1,param_2,0);
    }
    break;
  case 0xd:
    plVar5 = (longlong *)FUN_14883d45c(param_3);
    goto LAB_140bc5572;
  case 0xe:
    plVar5 = (longlong *)FUN_145b08bca(param_3);
LAB_140bc5572:
    if (plVar5 != (longlong *)0x0) {
      local_68 = lVar8;
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1,param_2,0);
    }
    break;
  case 0xf:
    if ((*(longlong *)(param_1 + 4) != 0) &&
       (plVar5 = (longlong *)FUN_14883d3b2(param_3), plVar5 != (longlong *)0x0)) {
      lVar7 = *plVar5;
      goto LAB_140bc563c;
    }
  }
switchD_140bc54e1_caseD_b:
  uVar4 = 0;
LAB_140bc546d:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc5760 FUN_140bc5760 body=179 status=ok
// SIG undefined FUN_140bc5760(void)

void FUN_140bc5760(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined8 uStack_46;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  local_98[0] = 0;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  uStack_48 = 0;
  uStack_46 = 0;
  FUN_140bfcdda(param_1,param_2,param_3,local_98);
  if (local_98[0] != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc5834 FUN_140bc5834 body=376 status=ok
// SIG undefined FUN_140bc5834(void)

void FUN_140bc5834(longlong *param_1,longlong param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar1 = *param_3;
  if (cVar1 == '\x03') {
    uVar3 = *(undefined8 *)(param_3 + 4);
  }
  else if (cVar1 == '\x02') {
    iVar2 = *(int *)(param_3 + 0xc);
    uVar3 = DAT_14cb7c570;
    if ((iVar2 != 1) && (uVar3 = DAT_14cb7c578, iVar2 != 0)) {
      memset(local_128,0,0x100);
      FUN_1407bf796(local_128,0x100,&DAT_149dfc0ac,iVar2);
      FUN_1446ddc76(&local_130,local_128,1);
      uVar3 = local_130;
    }
  }
  else if (cVar1 == '\x01') {
    puVar4 = &DAT_14cb7c580;
    if (*(int *)(param_3 + 0xc) != 0) {
      puVar4 = &DAT_14cb7c588;
    }
    uVar3 = *puVar4;
  }
  else {
    local_130 = 0;
    uVar3 = local_130;
  }
  local_130 = uVar3;
  if ((((*(int *)(param_2 + 0x10) == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0)) ||
      (*(int *)(param_2 + 0x10) == DAT_14c948000)) || ((iVar2 == 1 || (iVar2 < 2)))) {
    local_138 = DAT_14c948620;
    local_140 = DAT_14c948618;
  }
  else {
    local_138 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
    local_140 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
  }
  local_148 = 0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_140,local_130,0);
  if ((local_28 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc59ae FUN_140bc59ae body=210 status=ok
// SIG undefined FUN_140bc59ae(void)

void FUN_140bc59ae(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_3;
  if (*(char *)(param_1 + 0x2b) == '\0') {
    iVar1 = FUN_1410babec(param_1);
    if (iVar1 == 3) goto LAB_140bc5a62;
  }
  if (DAT_14cb8dc18 == '\0') {
    local_2c = 0xffffffff;
    local_68 = (undefined8 *)&local_2d;
    local_2d = 0;
    local_40 = *param_2;
    local_38 = *(undefined4 *)(param_2 + 1);
    lVar2 = FUN_140bc60a2(param_1 + 0x68,param_1 + 0x30);
    if (lVar2 != 0) {
      local_58 = &stack0x00000028;
      local_68 = &local_28;
      local_50 = 0;
      local_60 = param_4;
      FUN_140bc5a82(param_1,param_2,lVar2,local_2c);
    }
  }
LAB_140bc5a62:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc5a82 FUN_140bc5a82 body=1336 status=ok
// SIG undefined FUN_140bc5a82(void)

void FUN_140bc5a82(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                  longlong *param_5,byte param_6,undefined8 *param_7,float *param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  int local_a0;
  uint local_9c;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_3 + 0xc);
  lVar21 = *param_5;
  *(longlong *)(param_3 + 0xc) = lVar21;
  if (param_8 == (float *)0x0) {
    fVar22 = 0.0;
    if ((((*(int *)(param_1 + 0xc) != 0) && (uVar17 = *(uint *)(param_1 + 8), -1 < (int)uVar17)) &&
        ((int)uVar17 < DAT_14c9647dc)) &&
       (((plVar14 = (longlong *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
         plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0xc))) &&
        ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
        lVar19 = *plVar14;
      }
      else {
        lVar19 = 0;
      }
      if (((*(longlong *)(lVar19 + 0x30) != 0) &&
          (lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x30) + 0x360), lVar19 != 0)) &&
         (plVar14 = *(longlong **)(lVar19 + 0x178), plVar14 != (longlong *)0x0)) {
        dVar3 = (double)(**(code **)(*plVar14 + 0x640))();
        fVar22 = (float)dVar3;
      }
    }
  }
  else {
    fVar22 = *param_8;
  }
  *(float *)(param_3 + 0x14) = fVar22;
  if ((lVar21 == lVar2 & (param_6 ^ 1)) == 0) {
    *(undefined8 *)(param_3 + 0x28) = *param_7;
    local_70 = CONCAT44(local_70._4_4_,param_4);
    FUN_141733646(param_1 + 0xb8);
    if (((((*(int *)(param_1 + 0xc) != 0) && (uVar17 = *(uint *)(param_1 + 8), -1 < (int)uVar17)) &&
         ((int)uVar17 < DAT_14c9647dc)) &&
        ((puVar15 = (undefined8 *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
         puVar15 != (undefined8 *)0x0 && (*(int *)(puVar15 + 2) == *(int *)(param_1 + 0xc))))) &&
       ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
        uVar12 = *puVar15;
      }
      else {
        uVar12 = 0;
      }
      FUN_1405f658a(uVar12);
    }
  }
  if ((lVar21 == lVar2) || (*(char *)(param_1 + 0x29) != '\x01')) goto LAB_140bc5d29;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  lVar2 = *param_5;
  local_88 = *(undefined4 *)(param_2 + 1);
  local_90 = *param_2;
  iVar5 = FUN_1410babec(param_1);
  if (iVar5 == 3) goto LAB_140bc5d29;
  plVar14 = (longlong *)0x0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_140bc5cb7:
    lVar21 = 0;
  }
  else {
    uVar17 = *(uint *)(param_1 + 8);
    lVar21 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((plVar7 != (longlong *)0x0) &&
         (((int)plVar7[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0))
         )) {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar21 = *plVar7;
        }
        else {
          lVar21 = 0;
        }
        if (*(longlong *)(lVar21 + 0x30) != 0) {
          lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x30) + 0x360);
          goto LAB_140bc5cb9;
        }
      }
      goto LAB_140bc5cb7;
    }
  }
LAB_140bc5cb9:
  plVar7 = (longlong *)
           (0x70006050000U >> ((byte)(*(int *)(param_1 + 0x18) << 3) & 0x3f) & 0xffffffff);
  if (5 < (byte)*(int *)(param_1 + 0x18)) {
    plVar7 = plVar14;
  }
  local_78 = local_88;
  local_80 = local_90;
  if (lVar21 != 0) {
    plVar14 = *(longlong **)(lVar21 + 0x38);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else if (*(code **)(*plVar14 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      if (plVar14[0x1e] != 0) goto LAB_140bc5d29;
    }
    else {
      cVar4 = (**(code **)(*plVar14 + 0x3c0))(plVar14);
      if (cVar4 == '\0') goto LAB_140bc5d29;
    }
  }
  iVar5 = DAT_14cb7c230;
  if (DAT_14cb7c230 != 0) {
    puVar8 = DAT_14cb7c228;
    if (DAT_14cb7c228 == (uint *)0x0) {
      puVar8 = &DAT_14cb7c218;
    }
    uVar17 = *puVar8;
    if (uVar17 == 0) {
      iVar18 = DAT_14cb7c230 + 0x1e;
      if (-1 < DAT_14cb7c230 + -1) {
        iVar18 = DAT_14cb7c230 + -1;
      }
      uVar20 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar20;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar20) goto LAB_140bc5d29;
        iVar18 = iVar18 + 0x20;
        uVar17 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar20 = 0;
      iVar18 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar11 = uVar16 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar6 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar6 < DAT_14cb7c230) {
      uVar17 = 0xffffffff;
      do {
        lVar21 = (longlong)iVar6 * 0x20 + DAT_14cb7c208;
        local_a0 = iVar18;
        local_9c = uVar17;
        local_98 = uVar20;
        cVar4 = FUN_1405f6df2(lVar21,plVar14);
        if ((cVar4 != '\0') && (iVar18 = *(int *)(lVar21 + 0x10), (longlong)iVar18 != 0)) {
          lVar21 = *(longlong *)(lVar21 + 8);
          lVar19 = 0;
          do {
            iVar6 = *(int *)(lVar21 + 4 + lVar19);
            if ((((iVar6 != 0) && (uVar17 = *(uint *)(lVar21 + lVar19), -1 < (int)uVar17)) &&
                ((int)uVar17 < DAT_14c9647dc)) &&
               (((puVar15 = (undefined8 *)
                            ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                 puVar15 != (undefined8 *)0x0 && (*(int *)(puVar15 + 2) == iVar6)) &&
                ((*(uint *)(puVar15 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar15 + 1) & 0x10200000) == 0) {
                uVar12 = *puVar15;
              }
              else {
                uVar12 = 0;
              }
              local_68 = local_78;
              local_70 = local_80;
              local_a8 = SUB81(plVar7,0);
              FUN_14654cbe4(uVar12,&local_70,lVar2,uVar1);
            }
            lVar19 = lVar19 + 8;
          } while ((longlong)iVar18 * 8 != lVar19);
        }
        uVar17 = local_9c & ~(uint)uVar16;
        puVar8 = DAT_14cb7c228;
        if (DAT_14cb7c228 == (uint *)0x0) {
          puVar8 = &DAT_14cb7c218;
        }
        iVar6 = (int)local_98;
        lVar21 = (longlong)iVar6;
        uVar13 = puVar8[lVar21] & uVar17;
        uVar20 = local_98;
        iVar18 = local_a0;
        if (uVar13 == 0) {
          iVar9 = DAT_14cb7c230 + 0x1e;
          if (-1 < DAT_14cb7c230 + -1) {
            iVar9 = DAT_14cb7c230 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar18 = local_a0 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar19 = 0;
            do {
              uVar13 = puVar8[lVar21 + lVar19 + 1];
              if (uVar13 != 0) {
                uVar17 = 0xffffffff;
                uVar20 = (ulonglong)(iVar6 + (int)lVar19 + 1);
                goto LAB_140bc5f62;
              }
              iVar18 = iVar18 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar10 - lVar21 != lVar19);
            uVar17 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar20 = (ulonglong)(iVar6 + 1);
          iVar6 = DAT_14cb7c230;
        }
        else {
LAB_140bc5f62:
          uVar16 = (ulonglong)(-uVar13 & uVar13);
          uVar11 = uVar16 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar6 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (DAT_14cb7c230 <= iVar6) {
            iVar6 = DAT_14cb7c230;
          }
        }
      } while (iVar6 != iVar5);
    }
  }
LAB_140bc5d29:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc5fbc FUN_140bc5fbc body=229 status=ok
// SIG undefined FUN_140bc5fbc(void)

undefined8 * FUN_140bc5fbc(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (1 < (int)*(uint *)(param_1 + 0x14)) {
    lVar2 = 0xc;
    uVar3 = 0;
    do {
      if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x10) == DAT_14c948000)) {
LAB_140bc608f:
        local_40 = DAT_14c948620;
        local_48 = DAT_14c948618;
      }
      else {
        if ((1 < (int)uVar1) || (lVar4 = param_1 + 0x18, 0 < *(int *)(param_1 + 0x34))) {
          lVar4 = *(longlong *)(param_1 + 0x28);
        }
        if ((int)uVar1 == 1) goto LAB_140bc608f;
        local_40 = *(undefined4 *)(lVar4 + 8 + lVar2);
        local_48 = *(undefined8 *)(lVar4 + lVar2);
      }
      FUN_144928d62(param_2,uVar3 & 0xffffffff,&local_48);
      uVar1 = (ulonglong)*(int *)(param_1 + 0x14);
      lVar2 = lVar2 + 0xc;
      lVar4 = uVar3 + 2;
      uVar3 = uVar3 + 1;
    } while (lVar4 < (longlong)uVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc60a2 FUN_140bc60a2 body=1531 status=ok
// SIG undefined FUN_140bc60a2(void)

longlong FUN_140bc60a2(longlong *param_1,longlong *param_2,undefined8 *param_3,int *param_4,
                      undefined1 *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = -1;
  *param_5 = 0;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  lVar10 = FUN_1403a01cf(param_1);
  if (lVar10 != 0) goto LAB_140bc6102;
  uVar18 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  uVar19 = *(undefined4 *)(param_3 + 1);
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    uVar12 = *(uint *)(param_2 + 1);
    uVar14 = (ulonglong)uVar12;
    *(uint *)(param_2 + 1) = uVar12 + 1;
    if (*(uint *)((longlong)param_2 + 0xc) == uVar12) {
      FUN_140044672(param_2,uVar12);
    }
    iVar17 = (int)param_2[5];
    if (iVar17 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar7 = iVar17 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar15 = param_2 + 2;
    iVar8 = iVar17 + 1;
    iVar13 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar13 = iVar17;
    }
    if (iVar13 >> 5 == iVar7) {
      *(int *)(param_2 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_2 + 0x2c) <= iVar17) {
        local_78 = CONCAT44(local_78._4_4_,uVar18);
        local_70 = uVar14;
        local_64 = uVar19;
        if (iVar17 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar7 = iVar17;
        }
        else {
          uVar12 = iVar17 + 0x20U >> 5;
          local_60 = (ulonglong)uVar12;
          if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar12) {
              uVar9 = uVar12;
            }
          }
          else {
            uVar9 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar9 << 2,0);
          iVar7 = (int)(uVar14 >> 2);
          iVar8 = -0x20;
          if ((int)local_60 <= iVar7) {
            iVar8 = iVar7 << 5;
          }
          iVar7 = (int)param_2[5];
        }
        *(int *)((longlong)param_2 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar15,iVar7);
        iVar8 = (int)param_2[5] + 1;
        uVar14 = local_70;
        uVar18 = (int)local_78;
        uVar19 = local_64;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_2 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar16 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar16 = plVar15;
        }
        bVar11 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar7 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar10 = (longlong)(int)uVar14;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_2[4];
    }
    bVar11 = (byte)iVar17 & 0x1f;
    puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    uVar14 = (ulonglong)*(uint *)(param_2 + 6);
    lVar10 = (longlong)(int)*(uint *)(param_2 + 6);
    iVar17 = *(int *)(*param_2 + 4 + lVar10 * 0x30);
    *(int *)(param_2 + 6) = iVar17;
    iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
    *(int *)((longlong)param_2 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_2 + (longlong)iVar17 * 0x30) = 0xffffffff;
    }
  }
  iVar17 = (int)uVar14;
  plVar15 = param_2 + 2;
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_2[4];
  }
  iVar7 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar7 = iVar17;
  }
  puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar14 & 0x1f);
  lVar5 = *param_2;
  lVar10 = lVar10 * 0x30;
  *(undefined4 *)(lVar5 + lVar10) = uVar18;
  *(undefined4 *)(lVar5 + 4 + lVar10) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar10) = uVar19;
  *(undefined8 *)(lVar5 + 0xc + lVar10) = 0;
  *(undefined4 *)(lVar5 + 0x14 + lVar10) = 0xbf800000;
  puVar2 = (undefined8 *)(lVar5 + 0x18 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar10) = 0;
  *param_4 = iVar17;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1403951a8(param_1,iVar17);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar13 = iVar7 + 1;
    iVar20 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar20 = iVar7;
    }
    if (iVar20 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        local_70 = uVar14;
        if (iVar7 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar8 = iVar7;
        }
        else {
          uVar12 = iVar7 + 0x20U >> 5;
          local_78 = (ulonglong)uVar12;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar12) {
              uVar9 = uVar12;
            }
          }
          else {
            uVar9 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar9 << 2,0);
          iVar8 = (int)(uVar14 >> 2);
          iVar13 = -0x20;
          if ((int)local_78 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar15,iVar8);
        iVar13 = (int)param_1[5] + 1;
        uVar14 = local_70;
      }
      iVar8 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar15;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar7 & 0x1f;
    puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar20 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar10 = (longlong)iVar17;
    iVar7 = *(int *)(*param_1 + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar7 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar7 = iVar17;
  }
  puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar17 & 0x1f);
  puVar3 = (uint *)(*param_1 + lVar10 * 0x18);
  uVar12 = *(uint *)(param_3 + 1);
  puVar3[2] = uVar12;
  *(undefined8 *)puVar3 = *param_3;
  puVar3[3] = (uint)uVar14;
  puVar3[4] = 0xffffffff;
  if (uVar12 == 0) {
    uVar12 = *puVar3;
  }
  else {
    uVar12 = FUN_144a78877(*puVar3,uVar12);
  }
  iVar7 = 1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar9 = 1;
LAB_140bc635b:
    if (((int)uVar9 < 1) || (iVar7 <= (int)param_1[9])) {
      uVar12 = (int)param_1[9] - 1U & uVar12;
      puVar3[5] = uVar12;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      puVar3[4] = *(uint *)((longlong)plVar15 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
           iVar17;
    }
    else {
      *(int *)(param_1 + 9) = iVar7;
      FUN_140bc6df0(param_1);
    }
  }
  else {
    iVar8 = FUN_1403a0274(param_1,uVar12,puVar3);
    if (iVar8 == -1) {
      uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (3 < uVar9) {
        uVar14 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar10 & 0x1f);
      }
      goto LAB_140bc635b;
    }
    uVar12 = puVar3[1];
    uVar9 = puVar3[2];
    uVar6 = puVar3[3];
    puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x18);
    *puVar1 = *puVar3;
    puVar1[1] = uVar12;
    puVar1[2] = uVar9;
    puVar1[3] = uVar6;
    FUN_14107eca2(param_1,iVar17);
  }
  *param_5 = 1;
  lVar10 = (longlong)*param_4 * 0x30 + *param_2;
  FUN_140bc669e(0,0);
LAB_140bc6102:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 140bc669e FUN_140bc669e body=96 status=ok
// SIG undefined FUN_140bc669e(void)

void FUN_140bc669e(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_140bc66ba:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_140bc66ba;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 140bc66fe FUN_140bc66fe body=555 status=ok
// SIG undefined FUN_140bc66fe(void)

void FUN_140bc66fe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  code **local_48;
  code *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb10130 == 0) {
    local_70 = &local_40;
    local_40 = FUN_140754f84;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147da9a76;
    local_80 = FUN_1409f3105;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar2 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_70 = &local_40;
    local_40 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1468c5283;
    local_80 = FUN_142809da0;
    local_88 = L"Engine";
    local_90 = 0x400000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  if ((*(longlong *)(lVar4 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b8) != 0)) {
    local_30 = &local_21;
    local_21 = 0;
    local_40 = (code *)*param_2;
    local_48 = &local_40;
    local_38 = param_2[1];
    local_50 = FUN_1437a2fb0;
    FUN_140bc6ada();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc692a FUN_140bc692a body=430 status=ok
// SIG undefined FUN_140bc692a(void)

undefined8 FUN_140bc692a(undefined8 param_1,longlong param_2)

{
  void *_Src;
  uint uVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_898 [32];
  void *local_878;
  uint local_870;
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = &local_48;
  lVar6 = (longlong)*(int *)(param_2 + 4);
  lVar5 = param_2 + 8;
  if (1 < lVar6) {
    lVar5 = *(longlong *)(param_2 + 0x18);
  }
  if (0 < *(int *)(param_2 + 0x24)) {
    lVar5 = *(longlong *)(param_2 + 0x18);
  }
  local_860 = local_868;
  if (lVar6 != 0) {
    lVar6 = lVar6 * 0xc;
    bVar3 = true;
    do {
      if (!bVar3) {
        if (local_858 <= local_860 + 1) {
          FUN_140213274(&local_868,1);
        }
        *local_860 = 0x5f;
        local_860 = local_860 + 1;
      }
      FUN_1408226d0(lVar5,&local_878,0);
      uVar1 = local_870;
      _Src = local_878;
      iVar4 = local_870 - 1;
      if (local_870 == 0) {
        iVar4 = 0;
      }
      lVar7 = (longlong)iVar4;
      if (local_858 <= local_860 + lVar7) {
        FUN_140213274(&local_868,lVar7);
      }
      puVar2 = local_860;
      if (1 < uVar1) {
        memcpy(local_860,_Src,lVar7 * 2);
        local_860 = puVar2 + lVar7;
      }
      if (local_878 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0xc;
      bVar3 = false;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  *local_860 = 0;
  FUN_140056680(param_1,local_868);
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_48 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140bc6ada FUN_140bc6ada body=780 status=ok
// SIG undefined FUN_140bc6ada(void)

void FUN_140bc6ada(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  plVar6 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))();
  iVar14 = (int)plVar6[5];
  if (iVar14 == 0) {
    uVar15 = 1;
    uVar18 = 0;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)plVar6[4];
    if ((uint *)plVar6[4] == (uint *)0x0) {
      puVar7 = (uint *)(plVar6 + 2);
    }
    uVar19 = *puVar7;
    if (uVar19 == 0) {
      iVar9 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar9 = iVar14 + -1;
      }
      uVar18 = 0;
      uVar15 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar15 = uVar18;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar18) goto LAB_140bc6c6a;
        iVar13 = iVar13 + 0x20;
        uVar19 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar18 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar19 & uVar19);
    uVar2 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar9) {
      iVar9 = iVar14;
    }
  }
  if (iVar9 != iVar14) {
    uVar19 = 0xffffffff;
    iVar5 = iVar14;
    do {
      plVar8 = *(longlong **)(*plVar6 + (longlong)iVar9 * 0x10);
      if (plVar8 != (longlong *)0x0) {
        local_90 = plVar8;
        cVar4 = (*(code *)*param_2)(param_2[1],&local_90);
        if (cVar4 == '\0') goto LAB_140bc6c7b;
        iVar5 = (int)plVar6[5];
      }
      uVar19 = uVar19 & ~(uint)uVar15;
      puVar7 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar6 + 2);
      }
      iVar9 = (int)uVar18;
      lVar16 = (longlong)iVar9;
      uVar10 = puVar7[lVar16] & uVar19;
      if (uVar10 == 0) {
        iVar11 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar11 = iVar5 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar17 = 0;
          do {
            uVar10 = puVar7[lVar16 + lVar17 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar9 + (int)lVar17 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140bc6c40;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar12 - lVar16 != lVar17);
          uVar19 = 0xffffffff;
          iVar9 = iVar12;
        }
        uVar18 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar5;
      }
      else {
LAB_140bc6c40:
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar15 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while (iVar9 != iVar14);
  }
LAB_140bc6c6a:
  if ((longlong)*(int *)(local_98 + 0x4f8) != 0) {
    puVar20 = *(undefined8 **)(local_98 + 0x4f0);
    puVar1 = puVar20 + *(int *)(local_98 + 0x4f8);
    do {
      plVar8 = (longlong *)FUN_14379ccad(*puVar20);
      plVar6 = plVar8 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar6;
      if ((int)plVar8[5] == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar14 = (int)plVar8[5];
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar3 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar9 = local_78._4_4_;
      local_90 = plVar8;
      if ((local_78._4_4_ != iVar14) || (local_78 = uVar3, uStack_60 != plVar6)) {
        do {
          local_78 = uVar3;
          lVar16 = *(longlong *)(*local_90 + (longlong)iVar9 * 0x10);
          if ((lVar16 != 0) &&
             (local_68 = lVar16, cVar4 = (*(code *)*param_2)(param_2[1],&local_68), cVar4 == '\0'))
          goto LAB_140bc6c7b;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar9 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar8 ||
                 ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar6 || local_78._4_4_ != iVar14));
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar1);
  }
LAB_140bc6c7b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc6df0 FUN_140bc6df0 body=602 status=ok
// SIG undefined FUN_140bc6df0(void)

void FUN_140bc6df0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar12 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar14 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (piVar2[2] == 0) {
          iVar5 = *piVar2;
        }
        else {
          local_74 = iVar11;
          iVar5 = FUN_144a78877(*piVar2,piVar2[2]);
          iVar11 = local_74;
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[5] = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        piVar2[4] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar12 = uVar12 & ~(uint)uVar13;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar5 = (int)plVar1[3];
        lVar10 = (longlong)iVar14;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar12;
        if (uVar4 == 0) {
          iVar7 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar7 = iVar5 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar14) {
            iVar3 = iVar14;
          }
          if (iVar7 <= iVar14) break;
          lVar9 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_140bc6fdf;
          }
          iVar14 = iVar14 + (int)lVar9 + 1;
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar5);
    }
  }
LAB_140bc6fdf:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc704c FUN_140bc704c body=519 status=ok
// SIG undefined FUN_140bc704c(void)

void FUN_140bc704c(longlong param_1,longlong param_2,char *param_3,byte param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == '\x01') {
    iVar2 = *(int *)(param_3 + 0xc);
    if ((((*(int *)(param_2 + 0x10) == 0) || (iVar3 = *(int *)(param_2 + 0x14), iVar3 == 0)) ||
        (*(int *)(param_2 + 0x10) == DAT_14c948000)) || ((iVar3 == 1 || (iVar3 < 2)))) {
      local_38 = DAT_14c948620;
      uVar5 = DAT_14c948618;
    }
    else {
      local_38 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x14);
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
    }
    local_40._0_4_ = (uint)uVar5;
    if (local_38 != 0) {
      uVar4 = local_38 >> 0xd ^ (uint)local_40 - local_38;
      uVar7 = uVar4 << 8 ^ (-0x61c88647 - local_38) - uVar4;
      uVar10 = uVar7 >> 0xd ^ (local_38 - uVar4) - uVar7;
      uVar9 = uVar10 >> 0xc ^ (uVar4 - uVar7) - uVar10;
      uVar4 = uVar9 << 0x10 ^ (uVar7 - uVar10) - uVar9;
      uVar10 = uVar4 >> 5 ^ (uVar10 - uVar9) - uVar4;
      uVar7 = uVar10 >> 3 ^ (uVar9 - uVar4) - uVar10;
      uVar4 = uVar7 << 10 ^ (uVar4 - uVar10) - uVar7;
      local_40._0_4_ = uVar4 >> 0xf ^ uVar10 - (uVar7 + uVar4);
    }
    uVar4 = (uint)local_40;
    local_40 = uVar5;
    lVar6 = FUN_14113056a(param_1 + 8,uVar4,&local_40);
    cVar1 = *(char *)(lVar6 + 0x60);
    *(bool *)(lVar6 + 0x60) = iVar2 != 0;
    if (((bool)cVar1 == (iVar2 != 0) & (param_4 ^ 1)) == 0) {
      FUN_140f8d6d8(param_1 + 0x58,&local_40,param_2,0);
      if (param_5 != 0) {
        FUN_14884a47c(lVar6 + 0x10,&local_40,&param_5,0);
      }
      if (((*(int *)(param_1 + 0xac) != 0) && (uVar4 = *(uint *)(param_1 + 0xa8), -1 < (int)uVar4))
         && ((int)uVar4 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xac))) &&
           ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar5 = *puVar8;
          }
          else {
            uVar5 = 0;
          }
          FUN_1405f658a(uVar5);
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



// FUNCTION 140bc7254 FUN_140bc7254 body=761 status=ok
// SIG undefined FUN_140bc7254(void)

longlong FUN_140bc7254(longlong param_1,int *param_2,char param_3,float *param_4,byte param_5,
                      char param_6,char *param_7,byte *param_8,undefined8 param_9)

{
  uint uVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_a8 [39];
  char local_81;
  float *local_80;
  longlong local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_60;
  ulonglong local_5c;
  int local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar7 = *param_2;
  if (((iVar7 == 0) || (param_2[1] == 0)) || (iVar7 == DAT_14c948000)) {
    puVar8 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    iVar7 = (int)DAT_14c948618;
  }
  else {
    puVar8 = &DAT_14c948028;
  }
  local_5c = *puVar8;
  lVar9 = param_1 + 0x10;
  uVar13 = local_5c >> 0x20;
  local_81 = param_3;
  local_80 = param_4;
  local_78 = param_1;
  local_60 = iVar7;
  local_54 = iVar7;
  local_50 = local_5c;
  if (uVar13 == 0) {
    iVar5 = FUN_140bc7976(lVar9,iVar7,&local_54);
    *param_7 = iVar5 == -1;
    *param_8 = 0;
  }
  else {
    uVar6 = FUN_144a78877(iVar7,uVar13);
    iVar5 = FUN_140bc7976(lVar9,uVar6,&local_54);
    *param_7 = iVar5 == -1;
    *param_8 = 0;
    iVar7 = FUN_144a78877(iVar7,uVar13);
  }
  lVar9 = FUN_140bc754e(lVar9,iVar7,&local_60);
  if (*param_7 == '\x01') {
    FUN_1447715ec(lVar9,param_2);
  }
  lVar14 = local_78;
  if ((byte)(*(byte *)(lVar9 + 0x30) ^ 1 | param_5) == 1) {
    if (param_5 != 0) {
      *(undefined1 *)(lVar9 + 0x30) = 1;
    }
    if (*param_7 == '\0') {
      *param_8 = *(char *)(lVar9 + 0x28) != local_81;
    }
    *(char *)(lVar9 + 0x28) = local_81;
    if ((*param_7 == '\0') && (*param_8 != 1)) {
      bVar3 = 0;
    }
    else {
      if (local_80 == (float *)0x0) {
        fVar15 = 0.0;
        if (((*(int *)(local_78 + 0xc) != 0) && (uVar1 = *(uint *)(local_78 + 8), -1 < (int)uVar1))
           && ((int)uVar1 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar12 != (longlong *)0x0) && ((int)plVar12[2] == *(int *)(local_78 + 0xc))) &&
             ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
              lVar11 = *plVar12;
            }
            else {
              lVar11 = 0;
            }
            if (((*(longlong *)(lVar11 + 0x30) != 0) &&
                (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360), lVar11 != 0)) &&
               (plVar12 = *(longlong **)(lVar11 + 0x178), plVar12 != (longlong *)0x0)) {
              dVar2 = (double)(**(code **)(*plVar12 + 0x640))();
              fVar15 = (float)dVar2;
            }
          }
        }
      }
      else {
        fVar15 = *local_80;
      }
      *(float *)(lVar9 + 0x2c) = fVar15;
      bVar3 = *param_8;
    }
    if (((bVar3 & 1) != 0) || (param_6 != '\0')) {
      *(undefined8 *)(lVar9 + 0x48) = param_9;
      local_70 = *param_2;
      if ((local_70 == 0) || ((param_2[1] == 0 || (local_70 == DAT_14c948000)))) {
        uStack_68 = DAT_14c948620;
        local_70 = (int)DAT_14c948618;
        uStack_6c = DAT_14c948618._4_4_;
      }
      else {
        uStack_6c = (undefined4)DAT_14c948028;
        uStack_68 = (undefined4)((ulonglong)DAT_14c948028 >> 0x20);
      }
      FUN_1410d2738(lVar14 + 0x78,&local_70);
      lVar14 = lVar14 + 8;
      cVar4 = FUN_144729dda(lVar14);
      if (cVar4 != '\0') {
        uVar10 = FUN_14479d2ce(lVar14);
        FUN_1405f658a(uVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc754e FUN_140bc754e body=1062 status=ok
// SIG undefined FUN_140bc754e(void)

longlong FUN_140bc754e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  void *_Src;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_140bc7976();
  if (iVar4 != -1) {
    if (*param_1 + (longlong)iVar4 * 0x68 != 0) {
      lVar6 = (longlong)iVar4 * 0x68 + *param_1;
      goto LAB_140bc77b6;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar4) {
      FUN_1406a7630(param_1,iVar4);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar5 = iVar15 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar10 = iVar15 + 1;
    iVar13 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar13 = iVar15;
    }
    if (iVar13 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar15;
        }
        else {
          uVar14 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar14) {
              uVar9 = uVar14;
            }
          }
          else {
            uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar9 << 2,0);
          iVar5 = (int)(uVar7 >> 2);
          iVar10 = -0x20;
          if ((int)uVar14 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar11,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar11;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar4;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar4 = (int)param_1[6];
    lVar6 = (longlong)iVar4;
    iVar15 = *(int *)(*param_1 + 4 + lVar6 * 0x68);
    *(int *)(param_1 + 6) = iVar15;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x68) = 0xffffffff;
    }
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar15 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar15 = iVar4;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
  lVar3 = *param_1;
  local_78 = 0;
  local_68 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0xbf80000000000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x68);
  *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_3 + 1);
  puVar2[-2] = *param_3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_1404e49fa(puVar2,&local_98);
  puVar2[5] = uStack_70;
  *(undefined1 *)(puVar2 + 6) = (undefined1)local_68;
  puVar2[7] = local_60;
  local_60 = 0;
  *(undefined4 *)(puVar2 + 8) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_58._4_4_;
  uStack_58 = 0;
  puVar2[9] = local_50;
  FUN_14103c380(0,0);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = (void *)(lVar3 + lVar6 * 0x68);
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)((longlong)_Src + 0x60) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar15 = 1;
  if (uVar14 == 1) {
LAB_140bc7752:
    if (((int)uVar14 < 1) || (iVar15 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)_Src + 100) = param_2;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x60) =
           *(undefined4 *)
            ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           iVar4;
    }
    else {
      *(int *)(param_1 + 9) = iVar15;
      FUN_140bc79d6(param_1);
    }
  }
  else {
    iVar5 = FUN_140bc7976(param_1,param_2,_Src);
    if (iVar5 == -1) {
      if (3 < uVar14) {
        uVar7 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar6 & 0x1f);
      }
      goto LAB_140bc7752;
    }
    lVar6 = *param_1;
    FUN_148834d4c(lVar6 + (longlong)iVar5 * 0x68 + 0x10);
    memmove((void *)(lVar6 + (longlong)iVar5 * 0x68),_Src,0x60);
    FUN_141080892(param_1,iVar4);
  }
  lVar6 = *param_1 + (longlong)iVar4 * 0x68;
LAB_140bc77b6:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar6 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc7976 FUN_140bc7976 body=95 status=ok
// SIG undefined FUN_140bc7976(void)

int FUN_140bc7976(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x68;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140bc79d6 FUN_140bc79d6 body=606 status=ok
// SIG undefined FUN_140bc79d6(void)

void FUN_140bc79d6(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_78 = plVar13;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    plVar13 = local_78;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x68);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x68);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[0x19] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[0x18] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_140bc7bcf;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_140bc7bcf:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc7c36 FUN_140bc7c36 body=717 status=ok
// SIG undefined FUN_140bc7c36(void)

void FUN_140bc7c36(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined ***local_100;
  code *local_f8;
  code *local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined **local_a8;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined1 local_88;
  uint local_80;
  undefined1 *local_78;
  undefined1 local_70;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined1 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(int *)(param_3 + 0x10) < 0) && (*(longlong *)(param_1 + 0xb08) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_140bc7f26();
  if (DAT_14c951858 == 0) {
    local_100 = &local_a8;
    local_a8 = (undefined **)FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_14081d0ea;
    local_108 = &LAB_1468c5283;
    local_110 = FUN_142809da0;
    local_118 = L"Engine";
    local_120 = 0x400000000;
    local_128 = 0x10000000;
    local_130 = 8;
    local_138 = CONCAT44(local_138._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
  }
  lVar5 = *(longlong *)(param_1 + -0x108);
  iVar10 = 0;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (lVar6 = lVar5,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         != lVar4 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
  }
  piVar2 = *(int **)(param_3 + 8);
  iVar7 = 0;
  iVar9 = 0;
  iVar8 = 0;
  if (piVar2 != (int *)0x0) {
    iVar10 = *piVar2;
    iVar7 = piVar2[1];
    iVar9 = piVar2[2];
    iVar8 = piVar2[3];
  }
  uVar1 = *(undefined2 *)(lVar3 + 0x62);
  local_ac = *(undefined4 *)(lVar6 + 0x110);
  local_bc = *(undefined4 *)(lVar6 + 0x100);
  uStack_b8 = *(undefined4 *)(lVar6 + 0x104);
  uStack_b4 = *(undefined4 *)(lVar6 + 0x108);
  uStack_b0 = *(undefined4 *)(lVar6 + 0x10c);
  local_e0 = param_1 + -0x128;
  local_d8 = param_4;
  local_d0 = param_2;
  local_c8 = param_3;
  lVar4 = FUN_140bc800c();
  if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    local_80 = 0;
  }
  else {
    local_80 = (uint)(*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30) << 0x10;
  }
  local_80 = *(ushort *)(lVar3 + 0x66) | local_80;
  local_88 = 1;
  local_9c = local_bc;
  uStack_98 = uStack_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  local_8c = local_ac;
  local_70 = 1;
  local_78 = &LAB_140aa1c3a;
  local_68 = (uint)CONCAT12(((iVar7 != 0 || iVar10 != 0) || iVar9 != 0) || iVar8 != 0,
                            *(undefined2 *)(lVar3 + 100));
  local_54 = 1;
  local_50 = 0;
  local_a8 = &PTR_FUN_14a4c6e20;
  local_138 = local_d8;
  local_a0 = uVar1;
  local_64 = iVar10;
  local_60 = iVar7;
  local_5c = iVar9;
  local_58 = iVar8;
  FUN_140bc80f2(local_e0,&local_a8,local_d0,local_c8);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc7f26 FUN_140bc7f26 body=228 status=ok
// SIG undefined FUN_140bc7f26(void)

longlong FUN_140bc7f26(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab66b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1476c08cb;
    local_40 = FUN_14634d638;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePropertyTrack",&DAT_14cab66b8,
                  &DAT_1476c08ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab66b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc800c FUN_140bc800c body=228 status=ok
// SIG undefined FUN_140bc800c(void)

longlong FUN_140bc800c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6320 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476a2899;
    local_40 = FUN_140aeca6d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScene3DTransformTrack",&DAT_14cab6320,
                  &DAT_1476a2898);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6320;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc80f2 FUN_140bc80f2 body=4274 status=ok
// SIG undefined FUN_140bc80f2(void)

void FUN_140bc80f2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  code *pcVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  char cVar19;
  int iVar20;
  char cVar21;
  byte bVar22;
  longlong lVar23;
  ushort *puVar24;
  byte bVar25;
  bool bVar26;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  code *local_3b0;
  undefined1 *local_3a8;
  undefined8 *local_3a0;
  code *local_398;
  code *local_390;
  char local_37d;
  undefined2 local_37c;
  char local_37a;
  undefined1 local_379;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  undefined2 local_35a;
  uint local_358;
  uint local_354;
  longlong local_350;
  longlong local_348;
  uint local_33c;
  uint local_338;
  uint local_334;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_328;
  uint local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char local_a0;
  undefined7 uStack_9f;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char local_6c;
  undefined2 local_68;
  undefined1 local_60;
  char local_51 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  lVar12 = FUN_14009d2a0();
  lVar13 = FUN_14038fb82();
  lVar14 = FUN_140bc7f26();
  if (DAT_14c951858 == 0) {
    local_3a0 = &local_c0;
    local_c0 = (undefined **)FUN_1449e2820;
    local_390 = FUN_14081d0ea;
    local_398 = FUN_14081d0ea;
    local_3a8 = &LAB_1468c5283;
    local_3b0 = FUN_142809da0;
    local_3b8 = L"Engine";
    local_3c0 = 0x400000000;
    local_3c8 = 0x10000000;
    local_3d0 = 8;
    local_3d8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar18 = *(longlong *)(param_1 + 0x20);
  if (lVar18 == 0) {
    lVar23 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
         (lVar23 = lVar18,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) {
        lVar23 = 0;
      }
    } while ((lVar23 == 0) && (lVar18 = *(longlong *)(lVar18 + 0x20), lVar18 != 0));
  }
  lVar14 = FUN_140bc800c();
  if (*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) {
    bVar26 = false;
  }
  else {
    bVar26 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30;
  }
  lVar14 = FUN_140bc91a6();
  lVar18 = 0x6c;
  if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
      == lVar14 + 0x30)) {
    lVar18 = 0x78;
  }
  lVar14 = 0x84;
  if (!bVar26) {
    lVar14 = lVar18;
  }
  uVar4 = *(uint *)(param_1 + 0x138);
  if ((uVar4 & 1) == 0) {
    local_51[0] = '\0';
  }
  else {
    local_51[0] = '\x01';
    if (*(int *)(param_1 + 0x1a0) == 0) {
      local_51[0] = *(char *)(param_1 + 0x1c0);
    }
  }
  uVar3 = *(undefined2 *)(lVar13 + lVar14);
  if ((uVar4 & 2) == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
    if (*(int *)(param_1 + 0x2b8) == 0) {
      cVar9 = *(char *)(param_1 + 0x2d8);
    }
  }
  local_51[1] = cVar9;
  if ((uVar4 & 4) == 0) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
    if (*(int *)(param_1 + 0x3d0) == 0) {
      cVar21 = *(char *)(param_1 + 0x3f0);
    }
  }
  local_51[2] = cVar21;
  if ((uVar4 & 8) == 0) {
    local_374 = 0;
  }
  else if (*(int *)(param_1 + 0x4e8) == 0) {
    local_374 = (uint)*(byte *)(param_1 + 0x508);
  }
  else {
    local_374 = 1;
  }
  local_51[3] = (char)local_374;
  if ((uVar4 & 0x10) == 0) {
    local_370 = 0;
  }
  else if (*(int *)(param_1 + 0x600) == 0) {
    local_370 = (uint)*(byte *)(param_1 + 0x620);
  }
  else {
    local_370 = 1;
  }
  local_51[4] = (char)local_370;
  if ((uVar4 & 0x20) == 0) {
    local_378 = 0;
  }
  else if (*(int *)(param_1 + 0x718) == 0) {
    local_378 = (uint)*(byte *)(param_1 + 0x738);
  }
  else {
    local_378 = 1;
  }
  local_51[5] = (char)local_378;
  if ((uVar4 & 0x40) == 0) {
    local_364 = 0;
  }
  else if (*(int *)(param_1 + 0x830) == 0) {
    local_364 = (uint)*(byte *)(param_1 + 0x850);
  }
  else {
    local_364 = 1;
  }
  local_51[6] = (char)local_364;
  if ((char)uVar4 < '\0') {
    if (*(int *)(param_1 + 0x948) == 0) {
      local_360 = (uint)*(byte *)(param_1 + 0x968);
    }
    else {
      local_360 = 1;
    }
  }
  else {
    local_360 = 0;
  }
  local_51[7] = (char)local_360;
  if ((uVar4 >> 8 & 1) == 0) {
    local_368 = 0;
  }
  else if (*(int *)(param_1 + 0xa60) == 0) {
    local_368 = (uint)*(byte *)(param_1 + 0xa80);
  }
  else {
    local_368 = 1;
  }
  local_51[8] = (char)local_368;
  lVar14 = 0;
  do {
    if (local_51[lVar14] == '\x01') {
      puVar24 = (ushort *)(lVar12 + 0x9a);
      puVar6 = (ushort *)(lVar12 + 0x98);
      puVar7 = (ushort *)(lVar12 + 0x96);
      if (*(char *)(param_1 + 0xc38) != '\0') {
        puVar24 = (ushort *)(lVar13 + 0xd0);
        puVar6 = (ushort *)(lVar13 + 0xce);
        puVar7 = (ushort *)(lVar13 + 0xcc);
      }
      local_324 = (uint)*puVar24;
      local_328 = (uint)*puVar6;
      local_348 = CONCAT44(local_348._4_4_,(uint)*puVar7);
      uVar16 = *(int *)(param_4 + 0x10) - DAT_14cab4ce0;
      local_37c = uVar3;
      if ((((int)uVar16 < 0) || (DAT_14cab4cd8 <= (int)uVar16)) ||
         (pcVar5 = *(code **)(DAT_14cab4cd0 + (ulonglong)uVar16 * 8), pcVar5 == (code *)0x0)) {
        if (local_51[0] == '\0') {
          local_36c = 0;
        }
        else {
          FUN_1446f470e(&local_2d0,L"Location.X",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            local_36c = 0;
          }
          else {
            local_36c = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2d0);
          }
          local_36c = local_36c ^ 1;
        }
        cVar2 = *(char *)(param_2 + 0x20);
        if (cVar2 == '\x01') {
          local_29c = *(undefined4 *)(param_2 + 0x1c);
          local_2ac = *(undefined4 *)(param_2 + 0xc);
          uStack_2a8 = *(undefined4 *)(param_2 + 0x10);
          uStack_2a4 = *(undefined4 *)(param_2 + 0x14);
          uStack_2a0 = *(undefined4 *)(param_2 + 0x18);
        }
        cVar19 = *(char *)(param_2 + 0x54);
        if (cVar19 == '\x01') {
          local_2c8 = *(undefined4 *)(param_2 + 0x44);
          uStack_2c4 = *(undefined4 *)(param_2 + 0x48);
          uStack_2c0 = *(undefined4 *)(param_2 + 0x4c);
          uStack_2bc = *(undefined4 *)(param_2 + 0x50);
        }
        local_350 = CONCAT44(local_350._4_4_,(uint)*(ushort *)(lVar12 + 0x90));
        local_379 = *(undefined1 *)(param_2 + 0x58);
        local_35a = *(undefined2 *)(param_2 + 8);
        local_330 = *(undefined4 *)(param_2 + 0x28);
        local_37a = *(char *)(param_2 + 0x38);
        local_320 = *(undefined8 *)(param_2 + 0x30);
        local_32c = *(undefined4 *)(param_2 + 0x40);
        local_37d = cVar19;
        if (cVar9 == '\0') {
          local_354 = 0;
        }
        else {
          FUN_1446f470e(&local_2d8,L"Location.Y",1);
          cVar19 = local_37d;
          local_354 = 0x10000;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar25 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2d8);
            local_354 = (uint)(bVar25 ^ 1) << 0x10;
          }
        }
        if (cVar2 != '\0') {
          local_26c = local_29c;
          local_27c = local_2ac;
          uStack_278 = uStack_2a8;
          uStack_274 = uStack_2a4;
          uStack_270 = uStack_2a0;
        }
        if (cVar19 != '\0') {
          local_298 = local_2c8;
          uStack_294 = uStack_2c4;
          uStack_290 = uStack_2c0;
          uStack_28c = uStack_2bc;
        }
        local_334 = (uint)*(ushort *)(lVar12 + 0x92);
        if (cVar21 == '\0') {
          local_358 = 0;
        }
        else {
          FUN_1446f470e(&local_2e0,L"Location.Z",1);
          local_358 = 0x10000;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar25 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2e0);
            local_358 = (uint)(bVar25 ^ 1) << 0x10;
          }
        }
        if (cVar2 != '\0') {
          local_23c = local_26c;
          local_24c = local_27c;
          uStack_248 = uStack_278;
          uStack_244 = uStack_274;
          uStack_240 = uStack_270;
        }
        if (cVar19 != '\0') {
          local_268 = local_298;
          uStack_264 = uStack_294;
          uStack_260 = uStack_290;
          uStack_25c = uStack_28c;
        }
        local_338 = (uint)*(ushort *)(lVar12 + 0x94);
        if ((char)local_374 == '\0') {
          uVar16 = 0;
        }
        else {
          FUN_1446f470e(&local_2e8,L"Rotation.X",1);
          uVar16 = 0x10000;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar25 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2e8);
            uVar16 = (uint)(bVar25 ^ 1) << 0x10;
          }
        }
        if (cVar2 != '\0') {
          local_20c = local_23c;
          local_21c = local_24c;
          uStack_218 = uStack_248;
          uStack_214 = uStack_244;
          uStack_210 = uStack_240;
        }
        cVar9 = (char)local_378;
        if (cVar19 != '\0') {
          local_238 = local_268;
          uStack_234 = uStack_264;
          uStack_230 = uStack_260;
          uStack_22c = uStack_25c;
        }
        local_374 = uVar16;
        if ((char)local_370 == '\0') {
          uVar16 = 0;
        }
        else {
          FUN_1446f470e(&local_2f0,L"Rotation.Y",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            bVar25 = 0;
          }
          else {
            bVar25 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2f0);
          }
          cVar9 = (char)local_378;
          uVar16 = (uint)(bVar25 ^ 1);
        }
        if (cVar2 != '\0') {
          local_1dc = local_20c;
          local_1ec = local_21c;
          uStack_1e8 = uStack_218;
          uStack_1e4 = uStack_214;
          uStack_1e0 = uStack_210;
        }
        if (cVar19 != '\0') {
          local_208 = local_238;
          uStack_204 = uStack_234;
          uStack_200 = uStack_230;
          uStack_1fc = uStack_22c;
        }
        if (cVar9 == '\0') {
          local_370 = 0;
        }
        else {
          FUN_1446f470e(&local_2f8,L"Rotation.Z",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            local_370 = 0;
          }
          else {
            local_370 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_2f8);
          }
          local_370 = local_370 ^ 1;
        }
        if (cVar2 != '\0') {
          local_1ac = local_1dc;
          local_1bc = local_1ec;
          uStack_1b8 = uStack_1e8;
          uStack_1b4 = uStack_1e4;
          uStack_1b0 = uStack_1e0;
        }
        if (cVar19 != '\0') {
          local_1d8 = local_208;
          uStack_1d4 = uStack_204;
          uStack_1d0 = uStack_200;
          uStack_1cc = uStack_1fc;
        }
        if ((char)local_364 == '\0') {
          bVar25 = 0;
        }
        else {
          FUN_1446f470e(&local_300,L"Scale.X",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            bVar25 = 0;
          }
          else {
            bVar25 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_300);
          }
          bVar25 = bVar25 ^ 1;
        }
        if (cVar2 != '\0') {
          local_17c = local_1ac;
          local_18c = local_1bc;
          uStack_188 = uStack_1b8;
          uStack_184 = uStack_1b4;
          uStack_180 = uStack_1b0;
        }
        if (cVar19 != '\0') {
          local_1a8 = local_1d8;
          uStack_1a4 = uStack_1d4;
          uStack_1a0 = uStack_1d0;
          uStack_19c = uStack_1cc;
        }
        local_364 = (uint)*(ushort *)(lVar12 + 0x9c);
        if ((char)local_360 == '\0') {
          bVar22 = 0;
        }
        else {
          FUN_1446f470e(&local_308,L"Scale.Y",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            bVar22 = 0;
          }
          else {
            bVar22 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_308);
          }
          bVar22 = bVar22 ^ 1;
        }
        if (cVar2 != '\0') {
          local_14c = local_17c;
          local_15c = local_18c;
          uStack_158 = uStack_188;
          uStack_154 = uStack_184;
          uStack_150 = uStack_180;
        }
        if (cVar19 != '\0') {
          local_178 = local_1a8;
          uStack_174 = uStack_1a4;
          uStack_170 = uStack_1a0;
          uStack_16c = uStack_19c;
        }
        local_360 = (uint)*(ushort *)(lVar12 + 0x9e);
        if ((char)local_368 == '\0') {
          uVar10 = 0;
        }
        else {
          FUN_1446f470e(&local_310,L"Scale.Z",1);
          uVar10 = 0x10000;
          if (*(longlong *)(param_1 + 0xc28) != 0) {
            bVar8 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_310);
            uVar10 = (uint)(bVar8 ^ 1) << 0x10;
          }
        }
        if (cVar2 != '\0') {
          local_11c = local_14c;
          local_12c = local_15c;
          uStack_128 = uStack_158;
          uStack_124 = uStack_154;
          uStack_120 = uStack_150;
        }
        if (cVar19 != '\0') {
          local_148 = local_178;
          uStack_144 = uStack_174;
          uStack_140 = uStack_170;
          uStack_13c = uStack_16c;
        }
        local_33c = (uint)*(ushort *)(lVar12 + 0xa0);
        uVar11 = 0;
        local_378 = uVar10;
        if (((uVar4 >> 9 & 1) != 0) &&
           ((*(int *)(param_1 + 0xb78) != 0 || (uVar11 = 0, *(char *)(param_1 + 0xb94) == '\x01'))))
        {
          FUN_1446f470e(&local_318,L"Weight",1);
          if (*(longlong *)(param_1 + 0xc28) == 0) {
            uVar11 = 0x10000;
            cVar19 = local_37d;
          }
          else {
            bVar8 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),local_318);
            uVar11 = (uint)(bVar8 ^ 1) << 0x10;
            cVar19 = local_37d;
          }
        }
        uVar10 = local_36c;
        uVar4 = local_370;
        if (cVar2 != '\0') {
          local_ec = local_11c;
          local_fc = local_12c;
          uStack_f8 = uStack_128;
          uStack_f4 = uStack_124;
          uStack_f0 = uStack_120;
        }
        if (cVar19 != '\0') {
          local_118 = local_148;
          uStack_114 = uStack_144;
          uStack_110 = uStack_140;
          uStack_10c = uStack_13c;
        }
        if (cVar2 != '\0') {
          local_c4 = local_ec;
          local_d4 = local_fc;
          uStack_d0 = uStack_f8;
          uStack_cc = uStack_f4;
          uStack_c8 = uStack_f0;
        }
        if (cVar19 != '\0') {
          local_e8 = local_118;
          uStack_e4 = uStack_114;
          uStack_e0 = uStack_110;
          uStack_dc = uStack_10c;
        }
        local_36c = (uint)*(ushort *)(lVar12 + 0xb6);
        local_368 = uVar11;
        puVar15 = (undefined8 *)FUN_14001cc68(0x158,8);
        *puVar15 = &PTR_FUN_14a4c6ea0;
        *(undefined2 *)(puVar15 + 1) = local_35a;
        *(char *)(puVar15 + 4) = cVar2;
        if (cVar2 != '\0') {
          *(undefined4 *)((longlong)puVar15 + 0x1c) = local_c4;
          *(undefined4 *)((longlong)puVar15 + 0xc) = local_d4;
          *(undefined4 *)(puVar15 + 2) = uStack_d0;
          *(undefined4 *)((longlong)puVar15 + 0x14) = uStack_cc;
          *(undefined4 *)(puVar15 + 3) = uStack_c8;
        }
        *(undefined4 *)(puVar15 + 5) = local_330;
        *(char *)(puVar15 + 7) = local_37a;
        if (local_37a != '\0') {
          puVar15[6] = local_320;
        }
        iVar20 = (uVar10 & 0xff) * 0x10000 + (int)local_350;
        local_354 = local_354 | local_334;
        local_358 = local_358 | local_338;
        local_350 = param_1 + 0x140;
        local_374 = local_374 | (uint)local_348;
        local_348 = param_1 + 600;
        local_378 = local_378 | local_33c;
        local_368 = local_368 | local_36c;
        *(undefined4 *)(puVar15 + 8) = local_32c;
        *(char *)((longlong)puVar15 + 0x54) = local_37d;
        if (local_37d != '\0') {
          *(undefined4 *)((longlong)puVar15 + 0x44) = local_e8;
          *(undefined4 *)(puVar15 + 9) = uStack_e4;
          *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_e0;
          *(undefined4 *)(puVar15 + 10) = uStack_dc;
        }
        *(int *)(puVar15 + 0xb) = iVar20;
        *(undefined1 *)(puVar15 + 0xd) = 1;
        puVar15[0xc] = local_350;
        *(uint *)(puVar15 + 0xe) = local_354;
        *(undefined1 *)(puVar15 + 0x10) = 1;
        puVar15[0xf] = local_348;
        *(uint *)(puVar15 + 0x11) = local_358;
        *(undefined1 *)(puVar15 + 0x13) = 1;
        puVar15[0x12] = param_1 + 0x370;
        *(uint *)(puVar15 + 0x14) = local_374;
        *(undefined1 *)(puVar15 + 0x16) = 1;
        puVar15[0x15] = param_1 + 0x488;
        *(uint *)(puVar15 + 0x17) = uVar16 * 0x10000 + local_328;
        *(undefined1 *)(puVar15 + 0x19) = 1;
        puVar15[0x18] = param_1 + 0x5a0;
        *(uint *)(puVar15 + 0x1a) = (uVar4 & 0xff) * 0x10000 + local_324;
        *(undefined1 *)(puVar15 + 0x1c) = 1;
        puVar15[0x1b] = param_1 + 0x6b8;
        *(uint *)(puVar15 + 0x1d) = (uint)bVar25 * 0x10000 + local_364;
        *(undefined1 *)(puVar15 + 0x1f) = 1;
        puVar15[0x1e] = param_1 + 2000;
        *(uint *)(puVar15 + 0x20) = (uint)bVar22 * 0x10000 + local_360;
        *(undefined1 *)(puVar15 + 0x22) = 1;
        puVar15[0x21] = param_1 + 0x8e8;
        *(uint *)(puVar15 + 0x23) = local_378;
        *(undefined1 *)(puVar15 + 0x25) = 1;
        puVar15[0x24] = param_1 + 0xa00;
        *(uint *)(puVar15 + 0x26) = local_368;
        *(undefined1 *)(puVar15 + 0x28) = 1;
        puVar15[0x27] = param_1 + 0xb18;
        *(undefined2 *)(puVar15 + 0x29) = local_37c;
        *(undefined1 *)(puVar15 + 0x2a) = local_379;
        *puVar15 = &PTR_FUN_14a4c6e80;
        iVar20 = *(int *)(param_5 + 0x50);
        *(uint *)(param_5 + 0x50) = iVar20 + 1U;
        if (*(uint *)(param_5 + 0x54) < iVar20 + 1U) {
          FUN_140561fb4(param_5,iVar20);
        }
        lVar12 = *(longlong *)(param_5 + 0x48);
        if (*(longlong *)(param_5 + 0x48) == 0) {
          lVar12 = param_5;
        }
        puVar1 = (undefined8 *)(lVar12 + (longlong)iVar20 * 0x48);
        *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
        FUN_14055f024(puVar1);
        *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
        *puVar1 = puVar15;
        *(undefined4 *)(puVar1 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(puVar1 + 2) = uStack_b8;
        *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_b4;
        puVar1[3] = CONCAT44(uStack_ac,local_b0);
        puVar1[4] = CONCAT44(uStack_a4,uStack_a8);
        puVar1[5] = CONCAT71(uStack_9f,local_a0);
        puVar1[6] = CONCAT44(uStack_94,uStack_98);
        puVar1[7] = local_90;
      }
      else {
        if ((*(longlong *)(param_1 + 0xc28) == 0) ||
           (cVar9 = FUN_14753313a(*(longlong *)(param_1 + 0xc28),pcVar5), cVar9 == '\0')) break;
        iVar20 = *(int *)(param_4 + 0x10) - DAT_14cab4ce0;
        if (iVar20 == 9) {
          if ((uVar4 >> 9 & 1) == 0) break;
          local_60 = *(undefined1 *)(param_2 + 0x58);
          uStack_b8._0_2_ = *(undefined2 *)(param_2 + 8);
          local_a0 = *(char *)(param_2 + 0x20);
          if (local_a0 == '\x01') {
            uStack_a4 = *(undefined4 *)(param_2 + 0x1c);
            uStack_b4 = *(undefined4 *)(param_2 + 0xc);
            local_b0 = *(undefined4 *)(param_2 + 0x10);
            uStack_ac = *(undefined4 *)(param_2 + 0x14);
            uStack_a8 = *(undefined4 *)(param_2 + 0x18);
          }
          uStack_98 = *(undefined4 *)(param_2 + 0x28);
          local_88 = *(char *)(param_2 + 0x38);
          if (local_88 == '\x01') {
            local_90 = *(undefined8 *)(param_2 + 0x30);
          }
          local_80 = *(undefined4 *)(param_2 + 0x40);
          local_6c = *(char *)(param_2 + 0x54);
          if (local_6c == '\x01') {
            local_7c = *(undefined4 *)(param_2 + 0x44);
            uStack_78 = *(undefined4 *)(param_2 + 0x48);
            uStack_74 = *(undefined4 *)(param_2 + 0x4c);
            uStack_70 = *(undefined4 *)(param_2 + 0x50);
          }
          local_68 = local_37c;
          local_c0 = &PTR_FUN_14a4c6e40;
          FUN_14764654c(param_5,&local_c0);
          uStack_b8 = CONCAT22(uStack_b8._2_2_,*(undefined2 *)(lVar12 + 0xe4));
          uVar17 = *(undefined8 *)(param_1 + 0xc28);
        }
        else {
          if (local_51[iVar20] != '\x01') break;
          local_60 = *(undefined1 *)(param_2 + 0x58);
          uStack_b8._0_2_ = *(undefined2 *)(param_2 + 8);
          local_a0 = *(char *)(param_2 + 0x20);
          if (local_a0 == '\x01') {
            uStack_a4 = *(undefined4 *)(param_2 + 0x1c);
            uStack_b4 = *(undefined4 *)(param_2 + 0xc);
            local_b0 = *(undefined4 *)(param_2 + 0x10);
            uStack_ac = *(undefined4 *)(param_2 + 0x14);
            uStack_a8 = *(undefined4 *)(param_2 + 0x18);
          }
          uStack_98 = *(undefined4 *)(param_2 + 0x28);
          local_88 = *(char *)(param_2 + 0x38);
          if (local_88 == '\x01') {
            local_90 = *(undefined8 *)(param_2 + 0x30);
          }
          local_80 = *(undefined4 *)(param_2 + 0x40);
          local_6c = *(char *)(param_2 + 0x54);
          if (local_6c == '\x01') {
            local_7c = *(undefined4 *)(param_2 + 0x44);
            uStack_78 = *(undefined4 *)(param_2 + 0x48);
            uStack_74 = *(undefined4 *)(param_2 + 0x4c);
            uStack_70 = *(undefined4 *)(param_2 + 0x50);
          }
          local_68 = local_37c;
          local_c0 = &PTR_FUN_14a4c6e40;
          FUN_14764654c(param_5,&local_c0);
          uStack_b8 = CONCAT22(uStack_b8._2_2_,*(undefined2 *)(lVar12 + 0xbc + (longlong)iVar20 * 2)
                              );
          uVar17 = *(undefined8 *)(param_1 + 0xc28);
        }
        local_c0 = (undefined **)pcVar5;
        FUN_147533240(uVar17,&local_c0,param_4,param_5);
      }
      break;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 9);
  if ((local_48 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc91a6 FUN_140bc91a6 body=228 status=ok
// SIG undefined FUN_140bc91a6(void)

longlong FUN_140bc91a6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476be245;
    local_40 = FUN_14634d0c6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneEulerTransformTrack",&DAT_14cab6538,
                  &DAT_1476be244);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc928c FUN_140bc928c body=94 status=ok
// SIG undefined FUN_140bc928c(void)

undefined8 FUN_140bc928c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined2 *)(param_2 + -0x20) = *(undefined2 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140bc92ea(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140bc92ea FUN_140bc92ea body=88 status=ok
// SIG undefined FUN_140bc92ea(void)

undefined8 * FUN_140bc92ea(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470bf8d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140bc9342 FUN_140bc9342 body=338 status=ok
// SIG undefined FUN_140bc9342(void)

void FUN_140bc9342(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8);
      bVar4 = *(byte *)(lVar3 + 0x10);
      if (bVar4 == 1) {
        uVar6 = FUN_140bc9494();
      }
      else if (bVar4 < 0x10) {
        if (bVar4 == 8) {
          uVar6 = FUN_14578225e();
        }
        else if (bVar4 == 2) {
          uVar6 = FUN_1466c8798();
        }
        else {
          if (bVar4 != 4) goto LAB_140bc948a;
          uVar6 = FUN_1466c8990();
        }
      }
      else if (bVar4 < 0x40) {
        if (bVar4 == 0x10) {
          uVar6 = FUN_1466c8c4e();
        }
        else if (bVar4 == 0x20) {
          uVar6 = FUN_1466c8ce4();
        }
        else {
LAB_140bc948a:
          uVar6 = FUN_1466c83de();
        }
      }
      else if (bVar4 == 0x40) {
        uVar6 = FUN_1466c8eda();
      }
      else {
        if (bVar4 != 0x80) goto LAB_140bc948a;
        uVar6 = FUN_1466c9008();
      }
      lVar7 = *param_2;
      if (*(code **)(lVar7 + 0x38) == (code *)&LAB_144809cfe) {
        uVar9 = 0;
      }
      else {
        bVar4 = (**(code **)(lVar7 + 0x38))(param_2);
        uVar9 = (uint)bVar4 * 2;
        lVar7 = *param_2;
      }
      if (*(code **)(lVar7 + 0x48) == (code *)&LAB_144809d02) {
        uVar5 = 0;
      }
      else {
        bVar4 = (**(code **)(lVar7 + 0x48))(param_2);
        uVar5 = (uint)bVar4;
      }
      (*(code *)(&PTR_FUN_149eb1110)[uVar5 | uVar9])(param_2,uVar6,lVar3,param_1);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000140bc93f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return;
}



// FUNCTION 140bc9494 FUN_140bc9494 body=57 status=ok
// SIG undefined FUN_140bc9494(void)

void FUN_140bc9494(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc065a0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc065a0 = FUN_140002ddd(FUN_1466c8738,uVar1,L"RigBoneElement");
  }
  return;
}



// FUNCTION 140bc94ce FUN_140bc94ce body=97 status=ok
// SIG undefined FUN_140bc94ce(void)

void FUN_140bc94ce(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_140bc9530(&local_28);
  *(undefined4 *)(param_1 + 0xd8) = local_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bc9530 FUN_140bc9530 body=196 status=ok
// SIG undefined FUN_140bc9530(void)

uint * FUN_140bc9530(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_14058c734();
    lVar4 = FUN_144718840(lVar4,uVar3);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            *(uint *)(lVar4 + 0x10) = uVar5;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar6) {
            uVar2 = uVar5;
          }
        }
      }
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 140bc95f4 FUN_140bc95f4 body=36 status=ok
// SIG undefined FUN_140bc95f4(void)

void FUN_140bc95f4(longlong *param_1)

{
  switchD_143c3d4dc::caseD_1d();
                    /* WARNING: Could not recover jumptable at 0x000140bc9615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1,0);
  return;
}



// FUNCTION 140bc9618 FUN_140bc9618 body=27 status=ok
// SIG undefined FUN_140bc9618(void)

void FUN_140bc9618(longlong param_1)

{
  FUN_140bc9634();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 140bc9634 FUN_140bc9634 body=88 status=ok
// SIG undefined FUN_140bc9634(void)

void FUN_140bc9634(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_1405e2bf2();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000140bc9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2a0))(*(longlong **)(param_1 + 0x30),param_2)
      ;
      return;
    }
  }
  return;
}



// FUNCTION 140bc968c FUN_140bc968c body=27 status=ok
// SIG undefined FUN_140bc968c(void)

void FUN_140bc968c(longlong param_1)

{
  FUN_140bc9634();
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 140bc96a8 FUN_140bc96a8 body=80 status=ok
// SIG undefined FUN_140bc96a8(void)

void FUN_140bc96a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x318) = 0;
  plVar3 = *(longlong **)(param_1 + 800);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 800) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140bc96f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bc96f8 FUN_140bc96f8 body=27 status=ok
// SIG undefined FUN_140bc96f8(void)

void FUN_140bc96f8(longlong param_1)

{
  FUN_140bc9634();
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 140bc9714 FUN_140bc9714 body=80 status=ok
// SIG undefined FUN_140bc9714(void)

void FUN_140bc9714(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x178) = 0;
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140bc9760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bc9764 FUN_140bc9764 body=80 status=ok
// SIG undefined FUN_140bc9764(void)

void FUN_140bc9764(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x790) = 0;
  plVar3 = *(longlong **)(param_1 + 0x798);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x798) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140bc97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bc97ba FUN_140bc97ba body=57 status=ok
// SIG undefined FUN_140bc97ba(void)

void FUN_140bc97ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac58 =
         FUN_140002ddd(FUN_1464cc9b5,uVar1,L"GbxBrainAspectSettings_IsSpawnCostAvailable");
  }
  return;
}



// FUNCTION 140bc97f4 FUN_140bc97f4 body=119 status=ok
// SIG undefined FUN_140bc97f4(void)

void FUN_140bc97f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a648ae0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140bc986c FUN_140bc986c body=262 status=ok
// SIG undefined FUN_140bc986c(void)

undefined8 FUN_140bc986c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
    param_2[9] = DAT_14c8464f0;
    param_2[10] = 0x3f800000;
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_2 + 100) = 0;
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x3ff00000;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0x3ff00000;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x5c) = 0x3ff00000;
    puVar4[0xc] = 0x3ff0000000000000;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0x3f800000;
    *(undefined2 *)(puVar4 + 0xf) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x7c) = 0;
    param_2[0xf] = puVar4;
    param_2[0xe] = puVar4;
    *(undefined4 *)(param_2 + 0x10) = 10;
                    /* WARNING: Could not recover jumptable at 0x000140bc995c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x440))(param_1,param_2,param_3);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140bc9972 FUN_140bc9972 body=73 status=ok
// SIG undefined FUN_140bc9972(void)

undefined8 FUN_140bc9972(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_3 != 0 && param_2 != 0) && (cVar2 = FUN_141908cfc(param_1), cVar2 != '\0')) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar3 = 0x20;
    if (iVar1 < 0x20) {
      iVar3 = iVar1;
    }
    *(int *)(param_2 + 0x80) = iVar3;
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 140bc99bc FUN_140bc99bc body=292 status=ok
// SIG undefined FUN_140bc99bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bc99bc(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if ((char)param_2[0x18] == '\x01') {
    FUN_140204f88(param_1,param_2);
    return;
  }
  lVar3 = FUN_144837462(param_1,param_3);
  if (lVar3 != 0) {
    LOCK();
    _DAT_14cb88c88 = _DAT_14cb88c88 + 1;
    UNLOCK();
    puVar4 = (undefined8 *)FUN_140bc9ae0(DAT_14cb88c80);
    LOCK();
    _DAT_14cb88c88 = _DAT_14cb88c88 + 1;
    UNLOCK();
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c)) {
          lVar1 = *(longlong *)(puVar4[2] + 0x30);
          uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar6 = (uint)lVar1 & 0xffff;
          lVar5 = *(longlong *)(lVar3 + 0x58);
          if (*(longlong *)(lVar3 + 0x58) == 0) {
            lVar5 = lVar3 + 0x50;
          }
          iVar7 = *(int *)(lVar5 + (ulonglong)
                                   (*(int *)(lVar3 + 0x60) - 1U &
                                   (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              lVar5 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar7 * 0x38;
              if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar7 * 0x38) == lVar1) {
                if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
                  (**(code **)(*param_2 + 8))(param_2,lVar5 + 0x10,0);
                }
                break;
              }
              iVar7 = *(int *)(lVar5 + 0x30);
            } while (iVar7 != -1);
          }
        }
        puVar4 = (undefined8 *)FUN_140bc9ae0(*puVar4);
      } while (puVar4 != (undefined8 *)0x0);
    }
    LOCK();
    UNLOCK();
    LOCK();
    _DAT_14cb88c88 = _DAT_14cb88c88 + -2;
    UNLOCK();
  }
  return;
}



// FUNCTION 140bc9ae0 FUN_140bc9ae0 body=132 status=ok
// SIG undefined FUN_140bc9ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140bc9ae0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140bc9b55:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_140bc9b55;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140bc9b64 FUN_140bc9b64 body=95 status=ok
// SIG undefined FUN_140bc9b64(void)

undefined8 * FUN_140bc9b64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a91f520;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc9bc3(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bc9bc3 FUN_140bc9bc3 body=42 status=ok
// SIG undefined FUN_140bc9bc3(void)

void FUN_140bc9bc3(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_1400d0e42(param_1);
      param_1 = param_1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bc9bee FUN_140bc9bee body=140 status=ok
// SIG undefined FUN_140bc9bee(void)

void FUN_140bc9bee(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined2 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
      ((*(short *)(param_1 + 0x28) < 0 || (*(longlong *)(param_1 + 0x30) != 0)))) &&
     (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0xa8))) {
    local_c = 0;
    local_10 = 0;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0x89);
    if (*(char *)(param_1 + 0x51) == '\x01') {
      *(undefined1 *)((longlong)&local_10 + (ulonglong)bVar1) = 1;
    }
    FUN_140bc9c7c(param_2,bVar1,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bc9c7c FUN_140bc9c7c body=1925 status=ok
// SIG undefined FUN_140bc9c7c(void)

void FUN_140bc9c7c(longlong *param_1,byte param_2,undefined4 *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  code **ppcVar7;
  longlong *unaff_RBX;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  char local_12e;
  byte local_12d;
  int local_12c;
  code *local_128;
  byte local_11f;
  undefined4 local_11e;
  undefined2 local_11a;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  code **local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_1 != (longlong *)0x0) {
    local_11f = param_2;
    local_11e = *param_3;
    local_11a = *(undefined2 *)(param_3 + 1);
    local_12d = param_2;
    if (DAT_14cac6e60 == 0) {
      local_150 = &local_118;
      local_118 = FUN_144a7958c;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b47bc4;
      local_158 = &LAB_1478989f1;
      local_160 = &LAB_146391124;
      local_168 = L"Engine";
      local_170 = 0x10000000000;
      local_178 = 0x10000005;
      local_180 = 0x10;
      local_188 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    lVar6 = param_1[2];
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      iVar10 = 1 << (local_12d & 0x1f);
      if ((byte)iVar10 < 0x40) {
        *(byte *)((longlong)param_1 + 0x2ea) = (byte)iVar10;
      }
      if (DAT_14cad2858 == 0) {
        local_150 = &local_118;
        local_118 = FUN_144a7958c;
        local_140 = FUN_14081d0ea;
        local_148 = (code *)&LAB_146395584;
        local_158 = &LAB_147a0ba80;
        local_160 = &LAB_14575ccce;
        local_168 = L"Engine";
        local_170 = 0x40000000000;
        local_178 = 0x10000004;
        local_180 = 0x10;
        local_188 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        lVar6 = param_1[2];
      }
      local_12e = param_4;
      if ((*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          != DAT_14cad2858 + 0x30)) {
        lVar6 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
        if (lVar6 != 0) {
          local_108 = *(undefined4 *)(lVar6 + 0x78);
          uStack_104 = *(undefined4 *)(lVar6 + 0x7c);
          uStack_100 = *(undefined4 *)(lVar6 + 0x80);
          uStack_fc = *(undefined4 *)(lVar6 + 0x84);
          local_118 = *(code **)(lVar6 + 0x68);
          uStack_110 = *(undefined4 *)(lVar6 + 0x70);
          uStack_10c = *(undefined4 *)(lVar6 + 0x74);
          local_f8 = (void *)0x0;
          iVar2 = *(int *)(lVar6 + 0x90);
          pvVar4 = *(void **)(lVar6 + 0x88);
          local_f0 = iVar2;
          if ((longlong)iVar2 == 0) {
            local_ec = 0;
          }
          else {
            FUN_1447ce8be(&local_f8,iVar2,0);
            memcpy(local_f8,pvVar4,(longlong)iVar2 * 0xc);
          }
          lVar8 = 1;
          do {
            FUN_1402b9dcc(&local_118,(int)lVar8 + 0x19,((&local_11f)[lVar8] != 1) * '\x02');
            lVar8 = lVar8 + 1;
          } while (lVar8 != 7);
          FUN_1406902ca(lVar6,&local_118);
          FUN_1417e5370(lVar6,iVar10);
          if (local_f8 != (void *)0x0) {
            FUN_1400020a8();
          }
          unaff_RBX = (longlong *)0x0;
          param_4 = local_12e;
        }
      }
      else {
        local_108 = (int)param_1[0x91];
        uStack_104 = *(undefined4 *)((longlong)param_1 + 0x48c);
        uStack_100 = (int)param_1[0x92];
        uStack_fc = *(undefined4 *)((longlong)param_1 + 0x494);
        local_118 = (code *)param_1[0x8f];
        uStack_110 = (int)param_1[0x90];
        uStack_10c = *(undefined4 *)((longlong)param_1 + 0x484);
        local_f8 = (void *)0x0;
        iVar2 = (int)param_1[0x94];
        pvVar4 = (void *)param_1[0x93];
        local_f0 = iVar2;
        if ((longlong)iVar2 == 0) {
          local_ec = 0;
        }
        else {
          FUN_1447ce8be(&local_f8,iVar2,0);
          memcpy(local_f8,pvVar4,(longlong)iVar2 * 0xc);
        }
        lVar6 = 1;
        do {
          FUN_1402b9dcc(&local_118,(int)lVar6 + 0x19,((&local_11f)[lVar6] != 1) * '\x02');
          lVar6 = lVar6 + 1;
        } while (lVar6 != 7);
        FUN_1406902ca(param_1 + 0x82,&local_118);
        local_12c = iVar10;
        FUN_1417e5370(param_1 + 0x82,iVar10);
        if (local_f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        unaff_RBX = (longlong *)0x0;
        param_4 = local_12e;
        if ((longlong)(int)param_1[0x1af] != 0) {
          unaff_RBX = (longlong *)param_1[0x1ae];
          plVar1 = unaff_RBX + (int)param_1[0x1af];
          do {
            lVar6 = *unaff_RBX;
            if (lVar6 != 0) {
              local_108 = *(undefined4 *)(lVar6 + 0x78);
              uStack_104 = *(undefined4 *)(lVar6 + 0x7c);
              uStack_100 = *(undefined4 *)(lVar6 + 0x80);
              uStack_fc = *(undefined4 *)(lVar6 + 0x84);
              local_118 = *(code **)(lVar6 + 0x68);
              uStack_110 = *(undefined4 *)(lVar6 + 0x70);
              uStack_10c = *(undefined4 *)(lVar6 + 0x74);
              local_f8 = (void *)0x0;
              iVar10 = *(int *)(lVar6 + 0x90);
              pvVar4 = *(void **)(lVar6 + 0x88);
              local_f0 = iVar10;
              if ((longlong)iVar10 == 0) {
                local_ec = 0;
              }
              else {
                FUN_1447ce8be(&local_f8,iVar10,0);
                memcpy(local_f8,pvVar4,(longlong)iVar10 * 0xc);
              }
              lVar8 = 1;
              do {
                FUN_1402b9dcc(&local_118,(int)lVar8 + 0x19);
                lVar8 = lVar8 + 1;
              } while (lVar8 != 7);
              FUN_1406902ca(lVar6,&local_118);
              FUN_1417e5370(lVar6,local_12c);
              param_4 = local_12e;
              if (local_f8 != (void *)0x0) {
                FUN_1400020a8();
                param_4 = local_12e;
              }
            }
            unaff_RBX = unaff_RBX + 1;
          } while (unaff_RBX != plVar1);
        }
      }
    }
    if ((param_4 != '\0') && (uVar11 = *(uint *)(param_1 + 0x28), 0 < (int)uVar11)) {
      local_58 = (code **)0x0;
      local_4c = 0x18;
      local_50 = uVar11;
      if (0x18 < uVar11) {
        FUN_14024d3e4(&local_118,0);
      }
      ppcVar7 = local_58;
      if (local_58 == (code **)0x0) {
        ppcVar7 = &local_118;
      }
      FUN_144738dca(ppcVar7,param_1[0x27],uVar11);
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_12d);
      if (0 < (int)local_50) {
        lVar6 = param_1[0x15];
        do {
          ppcVar7 = local_58;
          if (local_58 == (code **)0x0) {
            ppcVar7 = &local_118;
          }
          pcVar5 = ppcVar7[(ulonglong)local_50 - 1];
          uVar11 = local_50 - 1;
          local_50 = uVar11;
          if ((pcVar5 != (code *)0x0) && (*(longlong *)(pcVar5 + 0xa8) == lVar6)) {
            uVar3 = *(uint *)(pcVar5 + 0x140);
            if (uVar3 != 0) {
              local_50 = uVar3 + uVar11;
              if (local_4c - uVar11 < uVar3) {
                FUN_14024d3e4(&local_118,uVar11);
              }
              ppcVar7 = local_58;
              if (local_58 == (code **)0x0) {
                ppcVar7 = &local_118;
              }
              FUN_144738dca(ppcVar7 + uVar11,*(undefined8 *)(pcVar5 + 0x138),uVar3);
            }
            if (DAT_14cac6e60 == 0) {
              local_128 = FUN_144a7958c;
              local_140 = FUN_14081d0ea;
              local_148 = FUN_142b47bc4;
              local_150 = &local_128;
              local_158 = &LAB_1478989f1;
              local_160 = &LAB_146391124;
              local_168 = L"Engine";
              local_170 = 0x10000000000;
              local_178 = 0x10000005;
              local_180 = 0x10;
              local_188 = 0x620;
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(pcVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pcVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
              FUN_140bc9c7c(pcVar5,uVar9 & 0xffffffff,param_3,0);
            }
          }
        } while (0 < (int)local_50);
      }
      if (local_58 != (code **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bca402 FUN_140bca402 body=125 status=ok
// SIG undefined FUN_140bca402(void)

void FUN_140bca402(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
    FUN_144a62104(param_1,*(undefined8 *)(*param_2 + 0x6a0),*(undefined8 *)(*param_2 + 0x140));
    return;
  }
  return;
}



// FUNCTION 140bca480 FUN_140bca480 body=41 status=ok
// SIG undefined FUN_140bca480(void)

void FUN_140bca480(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140bca7a6();
  return;
}



// FUNCTION 140bca4aa FUN_140bca4aa body=389 status=ok
// SIG undefined FUN_140bca4aa(void)

ulonglong FUN_140bca4aa(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0xc)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0xaaa) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140bca55a;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0xffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,4);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140bca55a:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0xc;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0xc,4);
    }
  }
  return uVar6;
}



// FUNCTION 140bca630 FUN_140bca630 body=373 status=ok
// SIG undefined FUN_140bca630(void)

void FUN_140bca630(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bca6bb;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140bca6bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140bca7a6 FUN_140bca7a6 body=337 status=ok
// SIG undefined FUN_140bca7a6(void)

void FUN_140bca7a6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140bca813;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140bca813:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 140bca8f8 FUN_140bca8f8 body=332 status=ok
// SIG undefined FUN_140bca8f8(void)

void FUN_140bca8f8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140bca966;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140bca966:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 140bcaa4a FUN_140bcaa4a body=519 status=ok
// SIG undefined FUN_140bcaa4a(void)

longlong FUN_140bcaa4a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  puVar9 = (undefined8 *)(param_2 + 0x20);
  puVar10 = (undefined8 *)(param_1 + 0x20);
  for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((*(longlong *)(param_1 + 0x88) != *(longlong *)(param_2 + 0x88)) ||
     (*(int *)(param_1 + 0x90) != *(int *)(param_2 + 0x90))) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (param_1 != param_2) {
    lVar8 = param_2 + 0xa0;
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar8 = *(longlong *)(param_2 + 0xd0);
    }
    FUN_1400709d4(param_1 + 0xa0,lVar8,*(undefined4 *)(param_2 + 0xd8),
                  *(undefined4 *)(param_1 + 0xdc));
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  if ((*(longlong *)(param_1 + 0xf8) != *(longlong *)(param_2 + 0xf8)) ||
     (*(int *)(param_1 + 0x100) != *(int *)(param_2 + 0x100))) {
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x110);
  uVar2 = *(undefined4 *)(param_2 + 0x114);
  uVar3 = *(undefined4 *)(param_2 + 0x118);
  uVar4 = *(undefined4 *)(param_2 + 0x11c);
  uVar5 = *(undefined4 *)(param_2 + 0x124);
  uVar6 = *(undefined4 *)(param_2 + 0x128);
  uVar7 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  *(undefined4 *)(param_1 + 0x128) = uVar6;
  *(undefined4 *)(param_1 + 300) = uVar7;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  if ((*(longlong *)(param_1 + 0x130) != *(longlong *)(param_2 + 0x130)) ||
     (*(int *)(param_1 + 0x138) != *(int *)(param_2 + 0x138))) {
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  puVar9 = (undefined8 *)(param_2 + 0x148);
  puVar10 = (undefined8 *)(param_1 + 0x148);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  (**(code **)(*(longlong *)(param_1 + 400) + 0x20))(param_1 + 400,0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  FUN_1406022fe(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_1403e0f94(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 140bcac51 FUN_140bcac51 body=135 status=ok
// SIG undefined FUN_140bcac51(void)

int * FUN_140bcac51(longlong param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  piVar3 = *(int **)(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x78);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 << 5;
    piVar2 = piVar3;
    do {
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) {
        if (piVar2 != (int *)0x0) {
          return piVar2;
        }
        break;
      }
      piVar2 = piVar2 + 8;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_140bcacd8((undefined8 *)(param_1 + 0x70),iVar1);
    piVar3 = *(int **)(param_1 + 0x70);
  }
  piVar3[lVar4 * 8 + 2] = param_2[2];
  *(undefined8 *)(piVar3 + lVar4 * 8) = *(undefined8 *)param_2;
  piVar2 = piVar3 + lVar4 * 8 + 4;
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  return piVar3 + lVar4 * 8;
}



// FUNCTION 140bcacd8 FUN_140bcacd8 body=255 status=ok
// SIG undefined FUN_140bcacd8(void)

void FUN_140bcacd8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140bcadd8 FUN_140bcadd8 body=40 status=ok
// SIG undefined FUN_140bcadd8(void)

undefined8 FUN_140bcadd8(undefined8 param_1,int param_2)

{
  FUN_140bcae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bcae00 FUN_140bcae00 body=77 status=ok
// SIG undefined FUN_140bcae00(void)

void FUN_140bcae00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2bb360;
  param_1[6] = &PTR_FUN_14b2bb650;
  FUN_140bcae4d(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 140bcae4d FUN_140bcae4d body=321 status=ok
// SIG undefined FUN_140bcae4d(void)

void FUN_140bcae4d(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)(param_1 + 200);
    do {
      plVar1 = puVar5 + 8;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 0xc) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + 0xb)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + 0xb)) {
        FUN_1400020a8(*plVar1);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 4) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar3 = puVar5;
        if (0x18 < *(ushort *)(puVar5 + 3)) {
          puVar3 = (undefined8 *)*puVar5;
        }
        (*pcVar2)(puVar3);
      }
      if (0x18 < *(ushort *)(puVar5 + 3)) {
        FUN_1400020a8(*puVar5);
      }
      FUN_14079c534(puVar5[-0x12],*(undefined4 *)(puVar5 + -0x11));
      if (puVar5[-0x12] != 0) {
        FUN_1400020a8();
      }
      plVar1 = puVar5 + -0x18;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + -0x14) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + -0x15)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + -0x15)) {
        FUN_1400020a8(*plVar1);
      }
      puVar5 = puVar5 + 0x32;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bcaf8e FUN_140bcaf8e body=44 status=ok
// SIG undefined FUN_140bcaf8e(void)

void FUN_140bcaf8e(longlong *param_1)

{
  FUN_140bcafba(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140bcafba FUN_140bcafba body=118 status=ok
// SIG undefined FUN_140bcafba(void)

void FUN_140bcafba(int *param_1,int param_2)

{
  code *pcVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((char)param_1[0x18] == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    if ((((((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) || param_1[3] != 0) &&
         (pcVar1 = (code *)**(undefined8 **)(param_1 + 4), pcVar1 != FUN_1400791ec)) &&
        (pcVar1 != FUN_14477b052)) && (pcVar1 != FUN_1400791cc)) {
      (*pcVar1)(param_1 + 4,0);
    }
    param_1 = param_1 + 0x1c;
  }
  return;
}



// FUNCTION 140bcb030 FUN_140bcb030 body=76 status=ok
// SIG undefined FUN_140bcb030(void)

double FUN_140bcb030(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined4 param_6)

{
  double dVar1;
  
  dVar1 = (double)FUN_140bcb07c(param_3,param_4,param_5,param_6);
  return dVar1 * (param_2 - param_1) + param_1;
}



// FUNCTION 140bcb07c FUN_140bcb07c body=1055 status=ok
// SIG undefined FUN_140bcb07c(void)

double FUN_140bcb07c(double param_1,undefined1 param_2,double param_3,int param_4)

{
  float fVar1;
  float fVar2;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  
  auVar3._4_12_ = in_XMM1._4_12_;
  switch(param_2) {
  case 1:
    fVar2 = (float)param_1;
    if (fVar2 <= 0.0 || param_4 < 2) {
      return 0.0;
    }
    if (1.0 <= fVar2) {
      return 1.0;
    }
    auVar3._0_4_ = fVar2 * (float)param_4;
    auVar3 = roundps(auVar3,ZEXT416((uint)auVar3._0_4_),1);
    fVar1 = auVar3._0_4_ / ((float)param_4 + -1.0);
    break;
  case 2:
    fVar1 = cosf((float)param_1 * 1.5707964);
    fVar1 = 1.0 - fVar1;
    break;
  case 3:
    fVar2 = sinf((float)param_1 * 1.5707964);
    goto LAB_140bcb1dd;
  case 4:
    fVar2 = (float)param_1;
    if (0.5 <= fVar2) {
      fVar1 = sinf((fVar2 + fVar2 + -1.0) * 1.5707964);
      fVar1 = fVar1 + 0.0;
LAB_140bcb3a2:
      fVar1 = fVar1 * 0.5 + 0.5;
    }
    else {
      fVar2 = cosf((fVar2 + fVar2) * 1.5707964);
      fVar2 = 1.0 - fVar2;
LAB_140bcb1c2:
      fVar1 = (fVar2 + 0.0) * 0.5;
    }
    break;
  case 5:
    fVar2 = powf((float)param_1,(float)param_3);
    goto LAB_140bcb1dd;
  case 6:
    fVar2 = powf(1.0 - (float)param_1,(float)param_3);
    return (double)(1.0 - fVar2);
  case 7:
    fVar2 = (float)param_1;
    if (0.5 <= fVar2) {
      fVar2 = powf(1.0 - (fVar2 + fVar2 + -1.0),(float)param_3);
      fVar2 = 1.0 - fVar2;
      goto LAB_140bcb374;
    }
    fVar2 = powf(fVar2 + fVar2,(float)param_3);
    fVar2 = fVar2 + 0.0;
LAB_140bcb0d4:
    fVar2 = fVar2 * 0.5;
    goto LAB_140bcb0dc;
  case 8:
    fVar2 = (float)param_1;
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      return 0.0;
    }
    fVar2 = (float)exp2f((fVar2 + -1.0) * 10.0);
    goto LAB_140bcb1dd;
  case 9:
    fVar2 = (float)param_1;
    if ((fVar2 == 1.0) && (!NAN(fVar2))) {
      return 1.0;
    }
    fVar2 = (float)exp2f(fVar2 * -10.0);
    return (double)(1.0 - fVar2);
  case 10:
    fVar2 = (float)param_1;
    if (0.5 <= fVar2) {
      fVar2 = fVar2 + fVar2 + -1.0;
      fVar1 = 1.0;
      if ((fVar2 != 1.0) || (NAN(fVar2))) {
        fVar1 = (float)exp2f(fVar2 * -10.0);
        fVar1 = 1.0 - fVar1;
      }
      goto LAB_140bcb3a2;
    }
    fVar2 = fVar2 + fVar2;
    fVar1 = 0.0;
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      fVar2 = (float)exp2f((fVar2 + -1.0) * 10.0);
      goto LAB_140bcb1c2;
    }
    break;
  case 0xb:
    fVar2 = 1.0 - (float)param_1 * (float)param_1;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    return 0.0 - (double)(fVar2 + -1.0);
  case 0xc:
    fVar2 = 1.0 - ((float)param_1 + -1.0) * ((float)param_1 + -1.0);
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
LAB_140bcb1dd:
    param_1 = (double)fVar2;
    goto LAB_140bcb0e3;
  case 0xd:
    fVar2 = (float)param_1;
    if (fVar2 < 0.5) {
      fVar2 = 1.0 - (fVar2 + fVar2) * (fVar2 + fVar2);
      if (fVar2 < 0.0) {
        fVar2 = sqrtf(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      fVar2 = 0.0 - (fVar2 + -1.0);
      goto LAB_140bcb0d4;
    }
    fVar2 = fVar2 + fVar2 + -1.0 + -1.0;
    fVar2 = 1.0 - fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar2 + 0.0;
LAB_140bcb374:
    fVar2 = fVar2 * 0.5 + 0.5;
LAB_140bcb0dc:
    param_1 = (double)fVar2;
    goto LAB_140bcb0e3;
  default:
    goto switchD_140bcb0a8_default;
  }
  param_1 = (double)fVar1;
LAB_140bcb0e3:
  param_1 = param_1 + 0.0;
switchD_140bcb0a8_default:
  return param_1;
}



// FUNCTION 140bcb49c FUN_140bcb49c body=1074 status=ok
// SIG undefined FUN_140bcb49c(void)

void FUN_140bcb49c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = FUN_1447210f0();
  if ((lVar6 == 0) || (lVar6 = FUN_140115352(lVar6), lVar6 == 0)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(lVar6 + 0x48);
  }
  local_78 = 0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x3a8);
    plVar1 = plVar11 + *(int *)(param_1 + 0x3b0);
    do {
      lVar6 = *plVar11;
      if (((lVar6 != 0) &&
          ((*(longlong *)(lVar6 + 0x48) == 0 ||
           (((*(uint *)(lVar6 + 8) & 0x10) == 0 &&
            (*(longlong *)(lVar6 + 0x48) == *(longlong *)(lVar6 + 0x20))))))) &&
         (*(char *)(lVar6 + 0x38) == '\0')) {
        if (plVar14 != (longlong *)0x0) {
          if (DAT_14cb5cdc8 == 0) {
            local_68 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_1427b09ee;
            local_a0 = &local_68;
            local_a8 = &LAB_148692775;
            local_b0 = FUN_1464d923a;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10004001;
            local_d0 = 8;
            local_d8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
          }
          lVar12 = FUN_144718840(lVar6,DAT_14cb5cdc8);
          if (lVar12 != 0) {
            uVar5 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar4 = *(int *)(lVar13 + 0x10);
            if (iVar4 == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar15) {
                local_7c = iVar10;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
                iVar10 = local_7c;
              }
              LOCK();
              iVar4 = *(int *)(lVar13 + 0x10);
              bVar15 = iVar4 == 0;
              if (bVar15) {
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar4 = iVar10;
              }
              if (iVar4 == 0) goto LAB_140bcb5e1;
            }
            if (((((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
                 (lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                 lVar13 != 0)) &&
                ((*(int *)(lVar13 + 0x10) == iVar4 && ((*(uint *)(lVar13 + 8) & 0x10200000) == 0))))
               && ((longlong)(int)plVar14[1] != 0)) {
              lVar13 = *plVar14;
              lVar9 = (longlong)(int)plVar14[1] * 0x118;
              do {
                if (*(longlong *)(lVar13 + 0x18) == lVar12) {
                  if (lVar13 != 0) goto LAB_140bcb53d;
                  break;
                }
                lVar13 = lVar13 + 0x118;
                lVar9 = lVar9 + -0x118;
              } while (lVar9 != 0);
            }
          }
        }
LAB_140bcb5e1:
        plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28);
        if (((plVar7 != (longlong *)0x0) &&
            (((int)plVar7[0xd] == 0 || (lVar12 = FUN_14494f566(plVar7 + 0x13), lVar12 == 0)))) &&
           (((int)plVar7[0x1b] == 0 || (lVar12 = FUN_14494f566(plVar7 + 0x21), lVar12 == 0)))) {
          lVar12 = FUN_14494f566(plVar7 + 0x13);
          if ((lVar12 == 0) || (fVar17 = 0.0, (int)plVar7[0xd] == 0)) {
            lVar12 = (**(code **)(*plVar7 + 0x180))(plVar7);
            if (lVar12 == 0) {
              dVar16 = 0.0;
            }
            else {
              dVar16 = *(double *)(lVar12 + 0x6e8);
            }
            fVar17 = (float)(dVar16 - (double)plVar7[0x2e]);
          }
          lVar12 = FUN_140316ff8();
          uVar3 = uStack_70;
          if (*(float *)(lVar12 + 0x714) <= fVar17) {
            lVar12 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_140bcbfe4(&local_78,uVar3 & 0xffffffff);
            }
            *(longlong *)(local_78 + lVar12 * 8) = lVar6;
          }
        }
      }
LAB_140bcb53d:
      lVar6 = local_78;
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    lVar12 = (longlong)(int)uStack_70;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        lVar2 = *(longlong *)(lVar6 + lVar13);
        lVar9 = lVar2 + 0x28;
        lVar8 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar9);
        if (lVar8 != 0) {
          FUN_140316e34(lVar8,1);
        }
        if (lVar2 == 0) {
          lVar9 = 0;
        }
        FUN_140bcb8d0(param_1,lVar9);
        lVar13 = lVar13 + 8;
      } while (lVar12 * 8 != lVar13);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bcb8d0 FUN_140bcb8d0 body=708 status=ok
// SIG undefined FUN_140bcb8d0(void)

ulonglong FUN_140bcb8d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  byte bVar18;
  undefined1 auStack_98 [38];
  byte local_72;
  byte local_71;
  longlong local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  uVar7 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = uVar7;
  if (param_2 != (longlong *)0x0) {
    lVar8 = (**(code **)(*param_2 + 8))(param_2);
    uVar7 = 0;
    if (lVar8 != 0) {
      local_70 = lVar8;
      uVar7 = FUN_140317d24();
      piVar1 = (int *)(uVar7 + 0x38);
      if ((*piVar1 <= *(int *)(*(longlong *)(local_70 + 0x10) + 0x38)) &&
         (uVar7 = uVar7 + 0x30,
         *(ulonglong *)
          (*(longlong *)(*(longlong *)(local_70 + 0x10) + 0x30) + (longlong)*piVar1 * 8) == uVar7))
      {
        lVar8 = (**(code **)(*(longlong *)(local_70 + 0x28) + 0x10))(local_70 + 0x28);
        if (lVar8 != 0) {
          local_58 = lVar8;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar8);
          }
          local_50 = &local_58;
          FUN_140bcbb96(param_1 + 0x3b8);
          FUN_144757f48(lVar8,0x40000000);
          uVar3 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          do {
            uVar3 = *(uint *)(lVar8 + 8);
            if ((uVar3 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar17 = uVar3 == *(uint *)(lVar8 + 8);
            if (bVar17) {
              *(uint *)(lVar8 + 8) = uVar3 | 0x200000;
            }
            UNLOCK();
          } while (!bVar17);
        }
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_70);
        }
        iVar4 = *(int *)(param_1 + 0x3b0);
        lVar10 = (longlong)iVar4;
        lVar8 = local_70;
        if (lVar10 != 0) {
          plVar5 = *(longlong **)(param_1 + 0x3a8);
          local_60 = param_1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
          }
          bVar18 = *plVar5 == local_70;
          iVar11 = 0;
          lVar8 = local_70;
          iVar14 = 0;
          do {
            bVar12 = bVar18 ^ 1;
            iVar6 = iVar14 + 1;
            if (iVar14 + 1 < iVar4) {
              iVar6 = iVar4;
            }
            bVar17 = (bool)(bVar18 & 1);
            iVar15 = iVar14;
            lVar9 = (longlong)iVar14;
            do {
              lVar9 = lVar9 + 1;
              iVar16 = iVar6;
              bVar13 = bVar18;
              if (lVar10 <= lVar9) break;
              if (DAT_14c950c29 == '\x01') {
                local_72 = bVar18;
                local_71 = bVar12;
                local_64 = iVar11;
                FUN_1456cec3c();
                lVar8 = local_70;
                iVar11 = local_64;
                bVar18 = local_72;
                bVar12 = local_71;
              }
              iVar15 = iVar15 + 1;
              iVar16 = iVar15;
              bVar13 = bVar18;
            } while (bVar17 == (plVar5[lVar9] == lVar8));
            bVar18 = bVar12;
            if ((bVar13 & 1) == 0) {
              if (iVar11 != iVar14) {
                memmove(plVar5 + iVar11,plVar5 + iVar14,(longlong)(iVar16 - iVar14) << 3);
                lVar8 = local_70;
              }
              iVar11 = iVar11 + (iVar16 - iVar14);
            }
            iVar14 = iVar16;
          } while (lVar9 < lVar10);
          *(int *)(local_60 + 0x3b0) = iVar11;
        }
        FUN_140bcbd0c();
        FUN_144757f48(lVar8,0x40000000);
        uVar3 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar8 + 8);
          uVar7 = (ulonglong)uVar3;
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar8 + 8);
          if (uVar3 == uVar2) {
            *(uint *)(lVar8 + 8) = uVar3 | 0x200000;
          }
          else {
            uVar7 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140bcbb96 FUN_140bcbb96 body=374 status=ok
// SIG undefined FUN_140bcbb96(void)

void FUN_140bcbb96(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar11 = (longlong)(int)uVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    uVar5 = 0;
    bVar6 = *plVar2 == lVar3;
    uVar8 = 0;
    do {
      uVar7 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar7 = uVar1;
      }
      uVar9 = uVar8;
      uVar4 = (ulonglong)uVar8;
      do {
        uVar4 = uVar4 + 1;
        uVar10 = uVar7;
        if (lVar11 <= (longlong)uVar4) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar9;
      } while (bVar6 == (plVar2[uVar4] == lVar3));
      if (bVar6 == false) {
        if (uVar5 != uVar8) {
          memmove(plVar2 + (int)uVar5,plVar2 + uVar8,(longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar5 = uVar5 + (uVar10 - uVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      uVar8 = uVar10;
    } while ((longlong)uVar4 < lVar11);
    *(uint *)(param_1 + 1) = uVar5;
  }
  return;
}



// FUNCTION 140bcbd0c FUN_140bcbd0c body=393 status=ok
// SIG undefined FUN_140bcbd0c(void)

void FUN_140bcbd0c(longlong param_1)

{
  longlong *plVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x58);
    FUN_140bcbf1e(local_48);
    FUN_1409ca370(plVar1,param_1);
    iVar5 = *(int *)(lVar3 + 0x60);
    if (0 < iVar5) {
      lVar6 = 0;
      bVar7 = false;
      do {
        while( true ) {
          lVar4 = *plVar1;
          _Dst = (uint *)(lVar4 + lVar6 * 0x10);
          if (((((*(longlong *)(lVar4 + 8 + lVar6 * 0x10) != 0) && (_Dst[1] != 0)) &&
               (uVar2 = *_Dst, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (plVar9 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0)))) &&
             ((*(uint *)(plVar9 + 2) == _Dst[1] &&
              (((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0 && (*plVar9 != 0)))))) break;
          iVar8 = ~(uint)lVar6 + iVar5;
          if (iVar8 != 0) {
            if (0 < iVar8) {
              iVar8 = 1;
            }
            memmove(_Dst,(void *)(lVar4 + (longlong)(iVar5 - iVar8) * 0x10),(longlong)iVar8 << 4);
            iVar5 = *(int *)(lVar3 + 0x60);
          }
          iVar5 = iVar5 + -1;
          *(int *)(lVar3 + 0x60) = iVar5;
          bVar7 = true;
          if (iVar5 <= lVar6) goto LAB_140bcbe89;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
      if (bVar7) {
LAB_140bcbe89:
        FUN_1400bbcfc(plVar1);
      }
    }
    FUN_140bcbe96(*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140b3e76a(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bcbe96 FUN_140bcbe96 body=135 status=ok
// SIG undefined FUN_140bcbe96(void)

void FUN_140bcbe96(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_140319860(param_1,1);
    local_28 = 0;
    uStack_20 = 0;
    cVar1 = FUN_14493c216(&local_28,0);
    if (cVar1 == '\0') {
      uStack_20 = 0;
    }
    *(undefined8 *)(param_1 + 0x178) = local_28;
    *(undefined8 *)(param_1 + 0x180) = uStack_20;
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bcbf1e FUN_140bcbf1e body=196 status=ok
// SIG undefined FUN_140bcbf1e(void)

undefined8 * FUN_140bcbf1e(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fbb0) {
    FUN_144b3d300(&DAT_14cb7fbb0);
    if (DAT_14cb7fbb0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"Finished",9);
      builtin_wcsncpy(local_48 + 8,L"erDialog",8);
      builtin_wcsncpy(local_48,L"OnProvid",8);
      FUN_1446f470e(&DAT_14cb7fba8,local_48,1);
      _Init_thread_footer(&DAT_14cb7fbb0);
    }
  }
  *param_1 = DAT_14cb7fba8;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bcbfe4 FUN_140bcbfe4 body=353 status=ok
// SIG undefined FUN_140bcbfe4(void)

void FUN_140bcbfe4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bcc069;
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
LAB_140bcc069:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140bcc146 FUN_140bcc146 body=779 status=ok
// SIG undefined FUN_140bcc146(void)

ulonglong FUN_140bcc146(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_140bcc452();
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar4 != '\0') goto LAB_140bcc185;
  if ((*(char *)(param_1 + 0x250) == '\x01') && (lVar6 = *(longlong *)(param_1 + 0x30), lVar6 != 0))
  {
    if (DAT_14cbbd498 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140940982;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146572ba2;
      local_78 = &LAB_148ca13ba;
      local_80 = &LAB_140e51436;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      plVar8 = (longlong *)(*(longlong *)(lVar6 + 0xf18) + 0xae0);
      if (*(longlong *)(lVar6 + 0xf18) == 0) {
        plVar8 = (longlong *)(lVar6 + 0xf20);
      }
      lVar10 = *plVar8;
      if (lVar10 == 0) {
        if (((((double)plVar8[2] == 0.0) && (!NAN((double)plVar8[2]))) && ((double)plVar8[3] == 0.0)
            ) && (!NAN((double)plVar8[3]))) {
          if (((double)plVar8[4] == 0.0) && (!NAN((double)plVar8[4]))) {
            lVar6 = (**(code **)(*(longlong *)(lVar6 + 0xdf0) + 0x50))(lVar6 + 0xdf0);
            if ((lVar6 == 0) &&
               (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0),
               plVar8 != (longlong *)0x0)) {
              uVar7 = FUN_144a78ab8();
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
              if (plVar8 != (longlong *)0x0) {
                uVar7 = FUN_144a78ab8();
                plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
                if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
                  uVar7 = (**(code **)(*plVar9 + 0x30))(plVar9);
                  lVar6 = FUN_1408a1fe2(uVar7);
                  if (lVar6 != 0) {
                    lVar10 = FUN_14492b4b4(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
                    if (lVar10 != 0) {
                      iVar5 = FUN_14486116a(lVar10,lVar6);
                      if (iVar5 == 0) goto LAB_140bcc183;
                    }
                    FUN_14485c47a(param_2,lVar6);
                    param_2[3] = DAT_14c8464f0;
                    uVar3 = DAT_14c8464e8._4_4_;
                    uVar2 = (undefined4)DAT_14c8464e8;
                    uVar1 = DAT_14c8464e0._4_4_;
                    *(undefined4 *)(param_2 + 1) = (undefined4)DAT_14c8464e0;
                    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
                    *(undefined4 *)(param_2 + 2) = uVar2;
                    *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
                    param_2[4] = 0;
                    goto LAB_140bcc185;
                  }
                }
              }
            }
            goto LAB_140bcc183;
          }
        }
      }
      else if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar10);
      }
      local_50 = (code *)0x0;
      FUN_14485c47a(&local_50,lVar10);
      *param_2 = local_50;
      if (*plVar8 == 0) {
        FUN_148d052e2(plVar8,&local_50);
        param_2[3] = local_40;
        param_2[1] = local_50;
        param_2[2] = uStack_48;
        param_2[7] = plVar8[7];
        uVar1 = *(undefined4 *)((longlong)plVar8 + 0x2c);
        lVar6 = plVar8[6];
        uVar2 = *(undefined4 *)((longlong)plVar8 + 0x34);
        *(int *)(param_2 + 5) = (int)plVar8[5];
        *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
        *(int *)(param_2 + 6) = (int)lVar6;
        *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
      }
      goto LAB_140bcc185;
    }
  }
LAB_140bcc183:
  uVar11 = 0;
LAB_140bcc185:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bcc452 FUN_140bcc452 body=329 status=ok
// SIG undefined FUN_140bcc452(void)

ulonglong FUN_140bcc452(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((char)param_1[0x4a] == '\x01') && (lVar3 = param_1[6], *(longlong *)(lVar3 + 0xb28) != 0))
     && (plVar10 = *(longlong **)(lVar3 + 0xb30), plVar10 != (longlong *)0x0)) {
    uVar8 = (undefined7)((ulonglong)param_2 >> 8);
    cVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,CONCAT71(uVar8,*(undefined1 *)(lVar3 + 0xbe3)));
    if (cVar5 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_148a19d84(&local_38,uVar7);
      if (local_30 != (longlong *)0x0) {
        iVar6 = (int)local_30[1];
        do {
          if (iVar6 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_30[1];
          bVar11 = iVar6 == iVar4;
          if (bVar11) {
            *(int *)(local_30 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
          plVar10 = local_30;
        } while (!bVar11);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
        if (plVar10 != (longlong *)0x0) {
          if ((local_38 != 0) &&
             (cVar5 = FUN_148a24726(local_38,*(undefined8 *)(param_1[6] + 0x1b0),
                                    *(undefined1 *)(lVar3 + 0xbe3),param_2), cVar5 != '\0')) {
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            uVar9 = CONCAT71(uVar8,1);
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            goto LAB_140bcc475;
          }
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
  uVar9 = 0;
LAB_140bcc475:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140bcc5aa FUN_140bcc5aa body=205 status=ok
// SIG undefined FUN_140bcc5aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bcc5aa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b744b30;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bcc678 FUN_140bcc678 body=558 status=ok
// SIG undefined FUN_140bcc678(void)

void FUN_140bcc678(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar7 = 0;
    iVar12 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x20);
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar7 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar7 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar16) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar11[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar13 & uVar13);
    uVar3 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
  }
  if (iVar7 != iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)iVar7 * 0xc0);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18 + (longlong)iVar7 * 0xc0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      iVar7 = *(int *)(lVar14 + 0x30);
      if (iVar7 != 0) {
        puVar11 = (uint *)(lVar14 + 0x2c);
        uVar10 = *puVar11;
        if ((((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) &&
            (lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar14 != 0))
           && ((*(int *)(lVar14 + 0x10) == iVar7 && ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))) {
          FUN_140bcc8a6(param_2,puVar11,0,0);
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
      uVar13 = uVar13 & ~(uint)uVar17;
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x20);
      }
      iVar5 = *(int *)(param_1 + 0x38);
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar10 = puVar11[lVar14] & uVar13;
      if (uVar10 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar7) {
          iVar9 = iVar7;
        }
        if (iVar7 < iVar8) {
          lVar15 = 0;
          do {
            uVar10 = puVar11[lVar14 + lVar15 + 1];
            if (uVar10 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar15 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140bcc809;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar14 != lVar15);
          uVar13 = 0xffffffff;
          iVar7 = iVar9;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar5;
      }
      else {
LAB_140bcc809:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar7) {
          iVar7 = iVar5;
        }
      }
    } while (iVar7 != iVar4);
  }
  return;
}



// FUNCTION 140bcc8a6 FUN_140bcc8a6 body=147 status=ok
// SIG undefined FUN_140bcc8a6(void)

void FUN_140bcc8a6(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = FUN_1409ca440(param_2);
  (**(code **)(*param_1 + 0x88))(param_1,&local_38,param_3,param_4);
  if (local_38 == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(local_38 + 0xc);
    uVar1 = FUN_145782296(&DAT_14c9647b8);
  }
  param_2[1] = uVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bcc93a FUN_140bcc93a body=120 status=ok
// SIG undefined FUN_140bcc93a(void)

undefined * FUN_140bcc93a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c979c50) {
    FUN_144b3d300(&DAT_14c979c50);
    if (DAT_14c979c50 == -1) {
      FUN_14581716c(&DAT_14c975270);
      DAT_14c979c40 = &DAT_14c975270;
      atexit(FUN_142877412);
      _Init_thread_footer(&DAT_14c979c50);
    }
  }
  return DAT_14c979c40;
}



// FUNCTION 140bcc9b2 FUN_140bcc9b2 body=40 status=ok
// SIG undefined FUN_140bcc9b2(void)

undefined8 FUN_140bcc9b2(undefined8 param_1,int param_2)

{
  FUN_140bcc9da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bcc9da FUN_140bcc9da body=98 status=ok
// SIG undefined FUN_140bcc9da(void)

void FUN_140bcc9da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b097160;
  param_1[5] = &PTR_FUN_14b0977d0;
  param_1[6] = &PTR_LAB_14b097810;
  plVar3 = (longlong *)param_1[0x7b];
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
  FUN_140bcca3c(param_1);
  return;
}



// FUNCTION 140bcca3c FUN_140bcca3c body=138 status=ok
// SIG undefined FUN_140bcca3c(void)

void FUN_140bcca3c(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac31a10;
  param_1[5] = &PTR_LAB_14ac32080;
  param_1[6] = &PTR_LAB_14ac320c0;
  plVar1 = param_1 + 0x6c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x70) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x6f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x6f)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140bccac6(param_1);
  return;
}



// FUNCTION 140bccac6 FUN_140bccac6 body=194 status=ok
// SIG undefined FUN_140bccac6(void)

void FUN_140bccac6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac52d70;
  param_1[5] = &PTR_FUN_14ac53390;
  param_1[6] = &PTR_LAB_14ac533d0;
  plVar3 = (longlong *)param_1[0x67];
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
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 140bccb88 FUN_140bccb88 body=40 status=ok
// SIG undefined FUN_140bccb88(void)

undefined8 FUN_140bccb88(undefined8 param_1,int param_2)

{
  FUN_140bccbb0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bccbb0 FUN_140bccbb0 body=186 status=ok
// SIG undefined FUN_140bccbb0(void)

void FUN_140bccbb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b11bfd0;
  if (*(char *)(param_1 + 0x31) == '\x01') {
    FUN_140bcbe96(param_1);
  }
  FUN_140bccc6a(param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffffffffffff;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140bccc6a FUN_140bccc6a body=75 status=ok
// SIG undefined FUN_140bccc6a(void)

void FUN_140bccc6a(longlong param_1,int param_2)

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



// FUNCTION 140bcccb6 FUN_140bcccb6 body=129 status=ok
// SIG undefined FUN_140bcccb6(void)

undefined8
FUN_140bcccb6(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_141464f2e(lVar1,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140bccd38 FUN_140bccd38 body=154 status=ok
// SIG undefined FUN_140bccd38(void)

undefined8 FUN_140bccd38(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar6 != 0) && (*(uint *)(lVar6 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar6 + 4)) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar6 + 2) * 8);
        } while (-1 < *(short *)(lVar6 + 4));
        if (lVar6 == 0) {
          return 0;
        }
      }
      puVar3 = *(uint **)(lVar6 + 0x10);
      if ((puVar3 != (uint *)0x0) && (puVar3[1] != 0)) {
        uVar2 = *puVar3;
        uVar4 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (puVar5 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(uint *)(puVar5 + 2) != puVar3[1]) {
            return 0;
          }
          if ((*(uint *)(puVar5 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar4 = *puVar5;
        }
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140bccdd2 FUN_140bccdd2 body=52 status=ok
// SIG undefined FUN_140bccdd2(void)

void FUN_140bccdd2(longlong param_1)

{
  char cVar1;
  
  FUN_140bcce06();
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    do {
      cVar1 = FUN_140b8e10e(param_1);
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 140bcce06 FUN_140bcce06 body=200 status=ok
// SIG undefined FUN_140bcce06(void)

void FUN_140bcce06(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    if ((DAT_14c761388 != 0) &&
       ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140bcced0(param_1);
  return;
}



// FUNCTION 140bcced0 FUN_140bcced0 body=832 status=ok
// SIG undefined FUN_140bcced0(void)

void FUN_140bcced0(longlong *param_1)

{
  uint *_Dst;
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = param_1[0x16];
  if (((lVar9 != 0) || (lVar9 = FUN_1448abda6(param_1), lVar9 != 0)) &&
     ((*(byte *)(lVar9 + 0x155) & 0x20) == 0)) {
    fVar1 = *(float *)(lVar9 + 0x930);
    local_60 = (undefined1 *)0x0;
    local_58 = 0x1000000000;
    *(undefined1 *)(param_1 + 0xf8) = 0;
    iVar6 = (int)param_1[0xf7];
    if (0 < iVar6) {
      uVar8 = 0;
      do {
        lVar9 = param_1[0xf6];
        _Dst = (uint *)(lVar9 + (longlong)(int)uVar8 * 0x10);
        iVar10 = *(int *)(lVar9 + 4 + (longlong)(int)uVar8 * 0x10);
        if (((((iVar10 == 0) || (uVar4 = *_Dst, (int)uVar4 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar4 ||
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar12 == (longlong *)0x0 || ((int)plVar12[2] != iVar10)))))) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar13 = *plVar12, lVar13 == 0)) {
          if ((char)_Dst[3] == '\x01') {
            *(undefined1 *)(_Dst + 3) = 0;
            iVar6 = (int)param_1[0xf7];
          }
          iVar10 = ~uVar8 + iVar6;
          if (iVar10 != 0) {
            iVar11 = 1;
            if (iVar10 < 1) {
              iVar11 = iVar10;
            }
            memmove(_Dst,(void *)(lVar9 + (longlong)(iVar6 - iVar11) * 0x10),(longlong)iVar11 << 4);
            iVar6 = (int)param_1[0xf7];
          }
          iVar6 = iVar6 + -1;
          *(int *)(param_1 + 0xf7) = iVar6;
        }
        else {
          if ((char)_Dst[3] == '\x01') {
            if ((float)_Dst[2] <= fVar1) {
              *(undefined1 *)(_Dst + 3) = 0;
              iVar6 = (int)param_1[0xf7];
              goto LAB_140bcd017;
            }
          }
          else {
            if (3.4028235e+38 <= fVar1) {
LAB_140bcd017:
              iVar10 = ~uVar8 + iVar6;
              if (iVar10 != 0) {
                iVar11 = 1;
                if (iVar10 < 1) {
                  iVar11 = iVar10;
                }
                memmove(_Dst,(void *)(lVar9 + (longlong)(iVar6 - iVar11) * 0x10),
                        (longlong)iVar11 << 4);
                iVar6 = (int)param_1[0xf7];
              }
              uVar2 = local_58;
              *(int *)(param_1 + 0xf7) = iVar6 + -1;
              lVar9 = (longlong)(int)local_58;
              uVar4 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,uVar4);
              if (local_58._4_4_ < uVar4) {
                FUN_147e216c0(local_e0,uVar2 & 0xffffffff);
              }
              puVar7 = local_60;
              if (local_60 == (undefined1 *)0x0) {
                puVar7 = local_e0;
              }
              *(longlong *)(puVar7 + lVar9 * 8) = lVar13;
              iVar6 = (int)param_1[0xf7];
              goto LAB_140bccffe;
            }
            *(undefined1 *)(param_1 + 0xf8) = 1;
          }
          uVar8 = uVar8 + 1;
        }
LAB_140bccffe:
      } while ((int)uVar8 < iVar6);
      lVar9 = (longlong)(int)local_58;
      if (lVar9 != 0) {
        puVar7 = local_e0;
        if (local_60 != (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        lVar13 = 0;
        do {
          if (*(longlong *)(puVar7 + lVar13) != 0) {
            (**(code **)(*param_1 + 0xa40))(param_1);
          }
          lVar13 = lVar13 + 8;
        } while (lVar9 * 8 != lVar13);
        (**(code **)(*param_1 + 0xa30))(param_1);
        iVar6 = (int)param_1[0xf7];
      }
    }
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0xf8) = 0;
      uVar5 = (**(code **)(*param_1 + 0xa58))(param_1);
      cVar3 = (**(code **)(*param_1 + 0x3b8))(param_1);
      if ((char)uVar5 != cVar3) {
        (**(code **)(*param_1 + 0x3b0))(param_1,uVar5);
      }
      FUN_1447f69b6(param_1 + 0xca);
    }
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bcd212 FUN_140bcd212 body=25 status=ok
// SIG undefined FUN_140bcd212(void)

undefined8 FUN_140bcd212(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140bcd22c FUN_140bcd22c body=27299 status=ok
// SIG undefined FUN_140bcd22c(void)

/* WARNING: Removing unreachable block (ram,0x000140bd313b) */
/* WARNING: Removing unreachable block (ram,0x000140bd3142) */
/* WARNING: Removing unreachable block (ram,0x000140bd3151) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bcd22c(longlong param_1,undefined4 param_2)

{
  double *pdVar1;
  byte bVar2;
  bool bVar3;
  double dVar4;
  void *_X;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *puVar13;
  uint *puVar14;
  longlong **pplVar15;
  code *pcVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *******pppppppuVar21;
  undefined1 *puVar22;
  code *pcVar23;
  code **ppcVar24;
  PSRWLOCK SRWLock;
  code *pcVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int *piVar32;
  longlong lVar33;
  longlong *plVar34;
  uint uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  int iVar38;
  longlong lVar39;
  code **ppcVar40;
  code **ppcVar41;
  ulonglong uVar42;
  byte bVar43;
  int iVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  code *extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auStack_738 [32];
  undefined8 local_718;
  undefined4 local_710;
  undefined8 **local_708;
  undefined8 local_700;
  undefined2 *local_6f8;
  undefined1 *local_6f0;
  undefined1 *local_6e8;
  code **local_6e0;
  undefined1 *local_6d8;
  code *local_6d0;
  uint *local_6c8;
  undefined8 local_6c0;
  code *local_6b8;
  code *pcStack_6b0;
  code *local_6a8;
  code *local_6a0;
  code **local_698;
  longlong *local_690;
  undefined1 local_688 [16];
  code **local_678;
  code *pcStack_670;
  code *local_668;
  longlong local_650;
  PSRWLOCK local_648;
  void *local_638;
  void *pvStack_630;
  double local_628;
  double dStack_620;
  code *local_618;
  undefined1 local_60a;
  undefined1 local_609;
  code *local_608;
  undefined8 uStack_600;
  code *local_5f8;
  code **local_5f0;
  undefined8 *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined1 *local_5d8;
  code *local_5c8 [2];
  undefined8 local_5b8;
  undefined **local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  undefined1 local_588 [12];
  uint uStack_57c;
  code *local_578;
  undefined1 *local_570;
  undefined8 *local_568;
  undefined8 *local_560;
  undefined1 *local_558;
  longlong local_4e8;
  code *local_448;
  undefined8 uStack_440;
  code *local_438;
  code *pcStack_430;
  undefined8 local_428;
  uint uStack_420;
  uint uStack_41c;
  int iStack_418;
  int iStack_414;
  longlong *plStack_410;
  longlong **pplStack_408;
  code *pcStack_400;
  char local_3f8;
  undefined1 uStack_3f7;
  undefined6 uStack_3f6;
  code *pcStack_3f0;
  byte local_3e8;
  undefined1 local_3e7;
  undefined1 uStack_3e6;
  undefined2 local_3e5;
  undefined3 uStack_3e3;
  code *local_3e0;
  undefined3 uStack_3d8;
  undefined4 uStack_3d5;
  undefined4 uStack_3d1;
  undefined4 uStack_3cd;
  undefined4 uStack_3c9;
  undefined1 local_3c0 [8];
  undefined8 *******local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  ushort local_3a0;
  byte local_398;
  char local_390;
  undefined2 local_388;
  code *local_380;
  undefined4 local_378;
  longlong local_368 [12];
  code *local_308;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_738;
  if ((((((((*(int *)(param_1 + 0xc) == 0) || (uVar9 = *(uint *)(param_1 + 8), (int)uVar9 < 0)) ||
          (DAT_14c9647dc <= (int)uVar9)) ||
         ((plVar26 = (longlong *)
                     ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
          plVar26 == (longlong *)0x0 || ((int)plVar26[2] != *(int *)(param_1 + 0xc))))) ||
        ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) || (lVar36 = *plVar26, lVar36 == 0)) ||
      (((*(longlong *)(lVar36 + 0x30) != 0 &&
        (lVar27 = *(longlong *)(*(longlong *)(lVar36 + 0x30) + 0x2b0), lVar27 != 0)) &&
       ((*(longlong *)(lVar27 + 0x588) != 0 &&
        (*(double *)(lVar36 + 0x708) <= *(double *)(lVar36 + 0x6d0))))))) ||
     (((*(byte *)(lVar36 + 0x154) & 0x40) != 0 && (iVar10 = FUN_14490d72a(lVar36), iVar10 == 3))))
  goto LAB_140bcd3b0;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar27 = 0;
    do {
      lVar28 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar27);
      if (*(longlong *)(lVar28 + 0x360) == lVar36) {
        if ((lVar28 != 0) && ((*(byte *)(lVar28 + 0x278) & 1) != 0)) goto LAB_140bcd3b0;
        break;
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar27);
  }
  if ((*(char *)(lVar36 + 0x152) == '\x03') && (*(char *)(lVar36 + 0x155) < '\0'))
  goto LAB_140bcd3b0;
  local_650 = param_1 + 0x5a8;
  if ((*(longlong *)(param_1 + 0x5a8) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x5a8) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,local_650,0xff);
  }
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar9 = *(uint *)(param_1 + 8), (int)uVar9 < 0)) ||
      (DAT_14c9647dc <= (int)uVar9)) ||
     (((plVar26 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar26 == (longlong *)0x0 || ((int)plVar26[2] != *(int *)(param_1 + 0xc))) ||
      (((*(uint *)(plVar26 + 1) & 0x10200000) != 0 ||
       ((lVar36 = *plVar26, lVar36 == 0 || ((*(byte *)(lVar36 + 0x155) & 4) != 0)))))))) {
    *(undefined4 *)(param_1 + 0x5a4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(lVar36 + 0x6f4);
    *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(lVar36 + 0x930);
  }
  local_6b8 = (code *)(param_1 + 0x390);
  iVar10 = *(int *)(param_1 + 0x398);
  lVar36 = (longlong)iVar10;
  if (lVar36 != 0) {
    plVar26 = *(longlong **)local_6b8;
    if (*plVar26 == 0) {
      bVar47 = true;
    }
    else {
      bVar47 = *(char *)(*plVar26 + 0x1c) == '\x02';
    }
    local_6c8 = (uint *)(plVar26 + 2);
    iVar18 = 0;
    iVar19 = 0;
LAB_140bcd55a:
    do {
      if (iVar19 + 1 < iVar10) {
        lVar28 = (longlong)iVar19;
        lVar27 = lVar28 + 2;
        puVar14 = local_6c8 + lVar28 * 4;
        bVar3 = true;
        lVar39 = -1;
        do {
          iVar38 = (int)lVar39;
          if (*(longlong *)puVar14 == 0) {
            if (!bVar47) {
              iVar44 = iVar19 - iVar38;
              iVar38 = -iVar38;
              goto LAB_140bcd5fa;
            }
          }
          else if ((bool)(*(char *)(*(longlong *)puVar14 + 0x1c) == '\x02' ^ bVar47)) {
            iVar44 = iVar19 - iVar38;
            break;
          }
          bVar3 = lVar27 < lVar36;
          lVar39 = lVar39 + -1;
          lVar27 = lVar27 + 1;
          puVar14 = puVar14 + 4;
          iVar44 = iVar10;
        } while (lVar28 - lVar36 != lVar39);
      }
      else {
        bVar3 = false;
        iVar44 = iVar19 + 1;
      }
      iVar38 = iVar44 - iVar19;
      if (bVar47) {
        FUN_140d4abe5(plVar26 + (longlong)iVar19 * 2,iVar38);
        bVar47 = false;
        iVar19 = iVar44;
        if (!bVar3) break;
        goto LAB_140bcd55a;
      }
LAB_140bcd5fa:
      if (iVar18 != iVar19) {
        memmove(plVar26 + (longlong)iVar18 * 2,plVar26 + (longlong)iVar19 * 2,(longlong)iVar38 << 4)
        ;
      }
      iVar18 = iVar18 + iVar38;
      bVar47 = true;
      iVar19 = iVar44;
    } while (bVar3);
    *(int *)(param_1 + 0x398) = iVar18;
  }
  iVar10 = DAT_14cb1ccf0;
  plVar26 = DAT_14cb1cce8;
  lVar36 = (longlong)DAT_14cb1ccf0;
  iVar19 = DAT_14cb1ccf0;
  if (lVar36 != 0) {
    if (*DAT_14cb1cce8 == 0) {
      bVar47 = true;
    }
    else {
      bVar47 = *(char *)(*DAT_14cb1cce8 + 0x1c) != '\x01';
    }
    local_6c8 = (uint *)(DAT_14cb1cce8 + 2);
    iVar19 = 0;
    iVar18 = 0;
LAB_140bcd673:
    do {
      if (iVar18 + 1 < iVar10) {
        lVar28 = (longlong)iVar18;
        lVar27 = lVar28 + 2;
        puVar14 = local_6c8 + lVar28 * 4;
        bVar3 = true;
        lVar39 = -1;
        do {
          iVar38 = (int)lVar39;
          if (*(longlong *)puVar14 == 0) {
            if (!bVar47) {
              iVar44 = iVar18 - iVar38;
              iVar38 = -iVar38;
              goto LAB_140bcd713;
            }
          }
          else if ((bool)(*(char *)(*(longlong *)puVar14 + 0x1c) != '\x01' ^ bVar47)) {
            iVar44 = iVar18 - iVar38;
            break;
          }
          bVar3 = lVar27 < lVar36;
          lVar39 = lVar39 + -1;
          lVar27 = lVar27 + 1;
          puVar14 = puVar14 + 4;
          iVar44 = iVar10;
        } while (lVar28 - lVar36 != lVar39);
      }
      else {
        bVar3 = false;
        iVar44 = iVar18 + 1;
      }
      iVar38 = iVar44 - iVar18;
      if (bVar47) {
        FUN_140d4abe5(plVar26 + (longlong)iVar18 * 2,iVar38);
        bVar47 = false;
        iVar18 = iVar44;
        if (!bVar3) break;
        goto LAB_140bcd673;
      }
LAB_140bcd713:
      if (iVar19 != iVar18) {
        memmove(plVar26 + (longlong)iVar19 * 2,plVar26 + (longlong)iVar18 * 2,(longlong)iVar38 << 4)
        ;
      }
      iVar19 = iVar19 + iVar38;
      bVar47 = true;
      iVar18 = iVar44;
    } while (bVar3);
  }
  DAT_14cb1ccf0 = iVar19;
  if (DAT_14c872bd8 == '\0') {
    local_6c8 = (uint *)(param_1 + 0x378);
    lVar36 = *(longlong *)local_6c8;
    if (*(char *)(lVar36 + 0x593) == '\0') {
      if (*(char *)(lVar36 + 0x500) == '\x01') {
        uVar7 = FUN_1438132c0(lVar36 + 0x4d8,lVar36 + 0x4c8);
        *(undefined1 *)(lVar36 + 0x500) = uVar7;
      }
      if ((*(int *)(lVar36 + 0x4e0) != 0) &&
         (iVar10 = *(int *)(lVar36 + 0x4d0), (longlong)iVar10 != 0)) {
        local_6c0 = (longlong *)(lVar36 + 0x4c8);
        lVar27 = *(longlong *)(lVar36 + 0x4c8);
        lVar28 = 0;
        bVar47 = false;
        do {
          puVar14 = *(uint **)(lVar27 + lVar28);
          if (puVar14[2] == 3) {
            bVar47 = true;
            if (*(char *)(*(longlong *)(puVar14 + 0xe) + 0x1c) == '\x02') {
              FUN_147e4510a(puVar14);
            }
          }
          else if ((puVar14[2] == 2) && (puVar14[10] == 0)) {
            lVar39 = *(longlong *)(puVar14 + 0xe);
            if ((lVar39 == 0) || (*(char *)(lVar39 + 0x1c) == '\x02')) {
              bVar47 = true;
              if (DAT_14cb1ccf0 + *(int *)(param_1 + 0x398) < *(int *)(param_1 + 0x3a4)) {
                local_588[8] = 1;
                local_588._0_8_ = 0xffffff00000001;
                if ((puVar14[1] == 0) || (uVar9 = *puVar14, (int)uVar9 < 0)) {
LAB_140bcd9e2:
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  if ((int)uVar9 < DAT_14c9647dc) {
                    puVar30 = (undefined8 *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                    if (((puVar30 == (undefined8 *)0x0) || (*(uint *)(puVar30 + 2) != puVar14[1]))
                       || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bcd9e2;
                    uVar29 = *puVar30;
                  }
                }
                FUN_147e474e0(&local_448,uVar29,local_588);
                if (local_448 == (code *)0x0) {
                  FUN_147e4510a(puVar14);
                }
                else {
                  puVar14[2] = 3;
                  if (uStack_440 != (code **)0x0) {
                    LOCK();
                    *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
                    UNLOCK();
                  }
                  plVar26 = *(longlong **)(puVar14 + 0x10);
                  *(code **)(puVar14 + 0xe) = local_448;
                  *(code ***)(puVar14 + 0x10) = uStack_440;
                  if (plVar26 != (longlong *)0x0) {
                    LOCK();
                    plVar34 = plVar26 + 1;
                    *(int *)plVar34 = (int)*plVar34 + -1;
                    UNLOCK();
                    if ((int)*plVar34 == 0) {
                      (**(code **)*plVar26)(plVar26);
                      LOCK();
                      piVar32 = (int *)((longlong)plVar26 + 0xc);
                      *piVar32 = *piVar32 + -1;
                      UNLOCK();
                      if (*piVar32 == 0) {
                        (**(code **)(*plVar26 + 0x10))(plVar26);
                      }
                    }
                  }
                  pcVar23 = local_448;
                  FUN_140e6de08(local_448);
                  iVar19 = *(int *)(param_1 + 0x398);
                  uVar9 = iVar19 + 1;
                  *(uint *)(param_1 + 0x398) = uVar9;
                  if (*(uint *)(param_1 + 0x39c) < uVar9) {
                    FUN_146421db6(local_6b8);
                  }
                  lVar39 = *(longlong *)local_6b8;
                  lVar33 = (longlong)iVar19 * 0x10;
                  *(code **)(lVar39 + lVar33) = pcVar23;
                  *(code ***)(lVar39 + 8 + lVar33) = uStack_440;
                  if (uStack_440 == (code **)0x0) goto LAB_140bcd99e;
                  LOCK();
                  *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
                  UNLOCK();
                }
                ppcVar24 = uStack_440;
                if (uStack_440 != (code **)0x0) {
                  LOCK();
                  ppcVar41 = uStack_440 + 1;
                  *(uint *)ppcVar41 = *(uint *)ppcVar41 - 1;
                  UNLOCK();
                  if (*(uint *)ppcVar41 == 0) {
                    (**(code **)*uStack_440)(uStack_440);
                    LOCK();
                    pcVar23 = (code *)((longlong)ppcVar24 + 0xc);
                    *(uint *)pcVar23 = *(uint *)pcVar23 - 1;
                    UNLOCK();
                    if (*(uint *)pcVar23 == 0) {
                      (**(code **)(*ppcVar24 + 0x10))(ppcVar24);
                    }
                  }
                }
              }
            }
            else {
              LOCK();
              *(undefined4 *)(lVar39 + 0x18) = 1;
              UNLOCK();
              bVar47 = true;
            }
          }
LAB_140bcd99e:
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar10 * 8 != lVar28);
        if (bVar47) {
          *(undefined1 *)(lVar36 + 0x500) = 1;
          uVar7 = FUN_1438132c0(lVar36 + 0x4d8,local_6c0);
          *(undefined1 *)(lVar36 + 0x500) = uVar7;
        }
      }
    }
    lVar36 = *(longlong *)local_6c8;
    if (*(char *)(lVar36 + 0x593) == '\0') {
      if (*(char *)(lVar36 + 0x590) == '\x01') {
        uVar7 = FUN_143813961(lVar36 + 0x568,lVar36 + 0x558);
        *(undefined1 *)(lVar36 + 0x590) = uVar7;
      }
      if ((*(int *)(lVar36 + 0x570) != 0) &&
         (iVar10 = *(int *)(lVar36 + 0x560), (longlong)iVar10 != 0)) {
        local_6c0 = (longlong *)(lVar36 + 0x558);
        lVar27 = *(longlong *)(lVar36 + 0x558);
        lVar28 = 0;
        bVar47 = false;
        do {
          puVar14 = *(uint **)(lVar27 + lVar28);
          if (puVar14[2] == 3) {
            bVar47 = true;
            if (*(char *)(*(longlong *)(puVar14 + 0xe) + 0x1c) == '\x02') {
              FUN_147e45162(puVar14);
            }
          }
          else if ((puVar14[2] == 2) && (puVar14[10] == 0)) {
            if ((*(longlong *)(puVar14 + 0xe) == 0) ||
               (*(char *)(*(longlong *)(puVar14 + 0xe) + 0x1c) == '\x02')) {
              bVar47 = true;
              if (DAT_14cb1ccf0 + *(int *)(param_1 + 0x398) < *(int *)(param_1 + 0x3a4)) {
                local_588[8] = 1;
                local_588._0_8_ = 0xffffff00000001;
                if ((puVar14[1] == 0) || (uVar9 = *puVar14, (int)uVar9 < 0)) {
LAB_140bcdc92:
                  uVar29 = 0;
                }
                else {
                  uVar29 = 0;
                  if ((int)uVar9 < DAT_14c9647dc) {
                    puVar30 = (undefined8 *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                    if (((puVar30 == (undefined8 *)0x0) || (*(uint *)(puVar30 + 2) != puVar14[1]))
                       || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bcdc92;
                    uVar29 = *puVar30;
                  }
                }
                FUN_147e475ba(&local_448,uVar29,local_588);
                if (local_448 == (code *)0x0) {
                  FUN_147e45162(puVar14);
                }
                else {
                  puVar14[2] = 3;
                  if (uStack_440 != (code **)0x0) {
                    LOCK();
                    *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
                    UNLOCK();
                  }
                  plVar26 = *(longlong **)(puVar14 + 0x10);
                  *(code **)(puVar14 + 0xe) = local_448;
                  *(code ***)(puVar14 + 0x10) = uStack_440;
                  if (plVar26 != (longlong *)0x0) {
                    LOCK();
                    plVar34 = plVar26 + 1;
                    *(int *)plVar34 = (int)*plVar34 + -1;
                    UNLOCK();
                    if ((int)*plVar34 == 0) {
                      (**(code **)*plVar26)(plVar26);
                      LOCK();
                      piVar32 = (int *)((longlong)plVar26 + 0xc);
                      *piVar32 = *piVar32 + -1;
                      UNLOCK();
                      if (*piVar32 == 0) {
                        (**(code **)(*plVar26 + 0x10))(plVar26);
                      }
                    }
                  }
                  pcVar23 = local_448;
                  FUN_140e6de08(local_448);
                  iVar19 = *(int *)(param_1 + 0x398);
                  uVar9 = iVar19 + 1;
                  *(uint *)(param_1 + 0x398) = uVar9;
                  if (*(uint *)(param_1 + 0x39c) < uVar9) {
                    FUN_146421db6(local_6b8);
                  }
                  lVar39 = *(longlong *)local_6b8;
                  lVar33 = (longlong)iVar19 * 0x10;
                  *(code **)(lVar39 + lVar33) = pcVar23;
                  *(code ***)(lVar39 + 8 + lVar33) = uStack_440;
                  if (uStack_440 == (code **)0x0) goto LAB_140bcdc4e;
                  LOCK();
                  *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
                  UNLOCK();
                }
                ppcVar24 = uStack_440;
                if (uStack_440 != (code **)0x0) {
                  LOCK();
                  ppcVar41 = uStack_440 + 1;
                  *(uint *)ppcVar41 = *(uint *)ppcVar41 - 1;
                  UNLOCK();
                  if (*(uint *)ppcVar41 == 0) {
                    (**(code **)*uStack_440)(uStack_440);
                    LOCK();
                    pcVar23 = (code *)((longlong)ppcVar24 + 0xc);
                    *(uint *)pcVar23 = *(uint *)pcVar23 - 1;
                    UNLOCK();
                    if (*(uint *)pcVar23 == 0) {
                      (**(code **)(*ppcVar24 + 0x10))(ppcVar24);
                    }
                  }
                }
              }
            }
            else {
              puVar14[2] = 3;
              bVar47 = true;
            }
          }
LAB_140bcdc4e:
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar10 * 8 != lVar28);
        if (bVar47) {
          *(undefined1 *)(lVar36 + 0x590) = 1;
          uVar7 = FUN_143813961(lVar36 + 0x568,local_6c0);
          *(undefined1 *)(lVar36 + 0x590) = uVar7;
        }
      }
    }
    iVar10 = DAT_14cb1ccf0 + *(int *)(param_1 + 0x398);
    plVar26 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x3a4);
    if (iVar10 < (int)*(uint *)(param_1 + 0x3a4)) {
      _local_588 = ZEXT816(0);
      lVar36 = *(longlong *)local_6c8;
      if (*(char *)(lVar36 + 0x591) == '\0') {
        if (*(char *)(lVar36 + 0x500) == '\x01') {
          plVar26 = (longlong *)(lVar36 + 0x4d8);
          uVar7 = FUN_1438132c0(plVar26,lVar36 + 0x4c8);
          *(undefined1 *)(lVar36 + 0x500) = uVar7;
        }
        if ((*(int *)(lVar36 + 0x4d8) != 0) &&
           (iVar10 = *(int *)(lVar36 + 0x4d0), (longlong)iVar10 != 0)) {
          local_690 = (longlong *)(lVar36 + 0x4d8);
          local_6a0 = (code *)(lVar36 + 0x4c8);
          lVar27 = *(longlong *)(lVar36 + 0x4c8);
          lVar28 = 0;
          local_6c0 = (longlong *)0x0;
          do {
            iVar19 = DAT_14c9647dc;
            puVar14 = *(uint **)(lVar27 + lVar28);
            uVar9 = puVar14[2];
            if (((uVar9 == 8) || (uVar9 == 4)) && (puVar14[10] == 0)) {
              uVar12 = puVar14[1];
              local_6c0 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
              plVar26 = local_6c0;
              if (uVar12 != 0) {
                uVar35 = *puVar14;
                plVar26 = (longlong *)(ulonglong)uVar35;
                if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
                  lVar39 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
                  if ((lVar39 != 0) &&
                     ((*(uint *)(lVar39 + 0x10) == uVar12 &&
                      ((*(uint *)(lVar39 + 8) & 0x10200000) == 0)))) {
                    if (uVar9 == 8) {
                      puVar14[0xc] = 1;
LAB_140bcdf37:
                      uVar9 = (uint)plVar26;
                      if ((int)uVar9 < 0) goto LAB_140bcdfd0;
                      plVar34 = (longlong *)0x0;
                      if ((int)uVar9 < iVar19) {
                        plVar26 = (longlong *)(ulonglong)(uVar9 >> 0x10);
                        puVar30 = (undefined8 *)
                                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (longlong)plVar26 * 8));
                        if (((puVar30 == (undefined8 *)0x0) || (*(uint *)(puVar30 + 2) != uVar12))
                           || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bcdfd0;
                        plVar34 = (longlong *)*puVar30;
                      }
                    }
                    else {
                      if (uVar9 != 4) goto LAB_140bcdf37;
                      puVar14[2] = 5;
                      puVar14[0xc] = 1;
                      if (((((int)uVar35 < DAT_14c9647dc) &&
                           (plVar26 = (longlong *)
                                      ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)
                                      ), plVar26 != (longlong *)0x0)) &&
                          (*(uint *)(plVar26 + 2) == uVar12)) &&
                         ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) {
                        plVar26 = (longlong *)*plVar26;
                      }
                      else {
                        plVar26 = (longlong *)0x0;
                      }
                      FUN_140b03ca2(plVar26,&local_448);
                      *(double *)(puVar14 + 0x14) = ((double)local_448 + (double)pcStack_430) * 0.5;
                      *(double *)(puVar14 + 0x16) = ((double)uStack_440 + (double)local_428) * 0.5;
                      dVar52 = (double)CONCAT44(uStack_41c,uStack_420) - (double)local_438;
                      dVar4 = (double)pcStack_430 - (double)local_448;
                      if ((double)pcStack_430 - (double)local_448 <=
                          (double)local_428 - (double)uStack_440) {
                        dVar4 = (double)local_428 - (double)uStack_440;
                      }
                      if (dVar4 <= dVar52) {
                        dVar4 = dVar52;
                      }
                      *(double *)(puVar14 + 0x18) =
                           ((double)local_438 + (double)CONCAT44(uStack_41c,uStack_420)) * 0.5;
                      puVar14[0x1a] = (uint)(float)(dVar4 * 0.5);
                      uVar12 = puVar14[1];
                      if (uVar12 != 0) {
                        plVar26 = (longlong *)(ulonglong)*puVar14;
                        iVar19 = DAT_14c9647dc;
                        goto LAB_140bcdf37;
                      }
LAB_140bcdfd0:
                      plVar34 = (longlong *)0x0;
                    }
                    uVar11 = local_588._8_4_;
                    lVar39 = (longlong)(int)local_588._8_4_;
                    uVar9 = local_588._8_4_ + 1;
                    local_588._8_4_ = uVar9;
                    if (uStack_57c < uVar9) {
                      plVar26 = (longlong *)local_588;
                      FUN_141806032(plVar26,uVar11);
                    }
                    uVar29 = local_588._0_8_;
                    *(undefined8 *)(local_588._0_8_ + lVar39 * 8) = 0;
                    if (plVar34 != (longlong *)0x0) {
                      plVar26 = plVar34;
                      FUN_1401924dc(plVar34);
                      *(longlong **)(uVar29 + lVar39 * 8) = plVar34;
                    }
                  }
                }
              }
            }
            lVar28 = lVar28 + 8;
          } while ((longlong)iVar10 * 8 != lVar28);
          if (((ulonglong)local_6c0 & 1) != 0) {
            *(undefined1 *)(lVar36 + 0x500) = 1;
            uVar7 = FUN_1438132c0(local_690,local_6a0);
            *(undefined1 *)(lVar36 + 0x500) = uVar7;
          }
        }
      }
      if (0 < (int)local_588._8_4_) {
        iVar10 = *(int *)(*(longlong *)local_6c8 + 0xc);
        if (iVar10 == 0) {
LAB_140bd3364:
          uVar29 = 0;
        }
        else {
          uVar9 = *(uint *)(*(longlong *)local_6c8 + 8);
          uVar29 = 0;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(int *)(puVar30 + 2) != iVar10 || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0))))
            goto LAB_140bd3364;
            uVar29 = *puVar30;
          }
        }
        FUN_140df2a80(&local_448,uVar29,local_588);
        pcVar23 = local_448;
        if (local_448 != (code *)0x0) {
          FUN_140e6de08(local_448);
          iVar10 = *(int *)(param_1 + 0x398);
          *(uint *)(param_1 + 0x398) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x39c) < iVar10 + 1U) {
            FUN_146421db6(local_6b8,iVar10);
          }
          lVar36 = *(longlong *)local_6b8;
          *(code **)(lVar36 + (longlong)iVar10 * 0x10) = pcVar23;
          *(code ***)(lVar36 + 8 + (longlong)iVar10 * 0x10) = uStack_440;
          if (uStack_440 != (code **)0x0) {
            LOCK();
            *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
            UNLOCK();
          }
        }
        ppcVar24 = uStack_440;
        if (uStack_440 != (code **)0x0) {
          LOCK();
          ppcVar41 = uStack_440 + 1;
          *(uint *)ppcVar41 = *(uint *)ppcVar41 - 1;
          UNLOCK();
          if (*(uint *)ppcVar41 == 0) {
            (**(code **)*uStack_440)(uStack_440);
            LOCK();
            pcVar23 = (code *)((longlong)ppcVar24 + 0xc);
            *(uint *)pcVar23 = *(uint *)pcVar23 - 1;
            UNLOCK();
            if (*(uint *)pcVar23 == 0) {
              (**(code **)(*ppcVar24 + 0x10))(ppcVar24);
            }
          }
        }
      }
      FUN_140b25cd9(local_588._0_8_,local_588._8_4_);
      if (local_588._0_8_ != 0) {
        FUN_1400020a8();
      }
      plVar26 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x3a4);
      iVar10 = DAT_14cb1ccf0 + *(int *)(param_1 + 0x398);
    }
    if (iVar10 < (int)plVar26) {
      _local_588 = ZEXT816(0);
      lVar36 = *(longlong *)local_6c8;
      if (*(char *)(lVar36 + 0x591) == '\0') {
        if (*(char *)(lVar36 + 0x590) == '\x01') {
          plVar26 = (longlong *)(lVar36 + 0x568);
          uVar7 = FUN_143813961(plVar26,lVar36 + 0x558);
          *(undefined1 *)(lVar36 + 0x590) = uVar7;
        }
        if ((*(int *)(lVar36 + 0x568) != 0) &&
           (iVar10 = *(int *)(lVar36 + 0x560), (longlong)iVar10 != 0)) {
          local_690 = (longlong *)(lVar36 + 0x568);
          local_6a0 = (code *)(lVar36 + 0x558);
          lVar27 = *(longlong *)(lVar36 + 0x558);
          lVar28 = 0;
          local_6c0 = (longlong *)0x0;
          do {
            iVar19 = DAT_14c9647dc;
            puVar14 = *(uint **)(lVar27 + lVar28);
            uVar9 = puVar14[2];
            if (((uVar9 == 8) || (uVar9 == 4)) && (puVar14[10] == 0)) {
              uVar12 = puVar14[1];
              local_6c0 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
              plVar26 = local_6c0;
              if (uVar12 != 0) {
                uVar35 = *puVar14;
                plVar26 = (longlong *)(ulonglong)uVar35;
                if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
                  lVar39 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
                  if ((lVar39 != 0) &&
                     ((*(uint *)(lVar39 + 0x10) == uVar12 &&
                      ((*(uint *)(lVar39 + 8) & 0x10200000) == 0)))) {
                    if (uVar9 == 8) {
                      puVar14[0xc] = 1;
LAB_140bce3ab:
                      uVar9 = (uint)plVar26;
                      if ((int)uVar9 < 0) goto LAB_140bce444;
                      plVar34 = (longlong *)0x0;
                      if ((int)uVar9 < iVar19) {
                        plVar26 = (longlong *)(ulonglong)(uVar9 >> 0x10);
                        puVar30 = (undefined8 *)
                                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (longlong)plVar26 * 8));
                        if (((puVar30 == (undefined8 *)0x0) || (*(uint *)(puVar30 + 2) != uVar12))
                           || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bce444;
                        plVar34 = (longlong *)*puVar30;
                      }
                    }
                    else {
                      if (uVar9 != 4) goto LAB_140bce3ab;
                      puVar14[2] = 5;
                      puVar14[0xc] = 1;
                      if (((((int)uVar35 < DAT_14c9647dc) &&
                           (plVar26 = (longlong *)
                                      ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)
                                      ), plVar26 != (longlong *)0x0)) &&
                          (*(uint *)(plVar26 + 2) == uVar12)) &&
                         ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) {
                        plVar26 = (longlong *)*plVar26;
                      }
                      else {
                        plVar26 = (longlong *)0x0;
                      }
                      FUN_140b03ca2(plVar26,&local_448);
                      *(double *)(puVar14 + 0x14) = ((double)local_448 + (double)pcStack_430) * 0.5;
                      *(double *)(puVar14 + 0x16) = ((double)uStack_440 + (double)local_428) * 0.5;
                      dVar52 = (double)CONCAT44(uStack_41c,uStack_420) - (double)local_438;
                      dVar4 = (double)pcStack_430 - (double)local_448;
                      if ((double)pcStack_430 - (double)local_448 <=
                          (double)local_428 - (double)uStack_440) {
                        dVar4 = (double)local_428 - (double)uStack_440;
                      }
                      if (dVar4 <= dVar52) {
                        dVar4 = dVar52;
                      }
                      *(double *)(puVar14 + 0x18) =
                           ((double)local_438 + (double)CONCAT44(uStack_41c,uStack_420)) * 0.5;
                      puVar14[0x1a] = (uint)(float)(dVar4 * 0.5);
                      uVar12 = puVar14[1];
                      if (uVar12 != 0) {
                        plVar26 = (longlong *)(ulonglong)*puVar14;
                        iVar19 = DAT_14c9647dc;
                        goto LAB_140bce3ab;
                      }
LAB_140bce444:
                      plVar34 = (longlong *)0x0;
                    }
                    uVar11 = local_588._8_4_;
                    lVar39 = (longlong)(int)local_588._8_4_;
                    uVar9 = local_588._8_4_ + 1;
                    local_588._8_4_ = uVar9;
                    if (uStack_57c < uVar9) {
                      plVar26 = (longlong *)local_588;
                      FUN_141806194(plVar26,uVar11);
                    }
                    uVar29 = local_588._0_8_;
                    *(undefined8 *)(local_588._0_8_ + lVar39 * 8) = 0;
                    if (plVar34 != (longlong *)0x0) {
                      plVar26 = plVar34;
                      FUN_1401924dc(plVar34);
                      *(longlong **)(uVar29 + lVar39 * 8) = plVar34;
                    }
                  }
                }
              }
            }
            lVar28 = lVar28 + 8;
          } while ((longlong)iVar10 * 8 != lVar28);
          if (((ulonglong)local_6c0 & 1) != 0) {
            *(undefined1 *)(lVar36 + 0x590) = 1;
            uVar7 = FUN_143813961(local_690,local_6a0);
            *(undefined1 *)(lVar36 + 0x590) = uVar7;
          }
        }
      }
      if (0 < (int)local_588._8_4_) {
        iVar10 = *(int *)(*(longlong *)local_6c8 + 0xc);
        if (iVar10 == 0) {
LAB_140bd336b:
          uVar29 = 0;
        }
        else {
          uVar9 = *(uint *)(*(longlong *)local_6c8 + 8);
          uVar29 = 0;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(int *)(puVar30 + 2) != iVar10 || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0))))
            goto LAB_140bd336b;
            uVar29 = *puVar30;
          }
        }
        FUN_1410408d6(&local_448,uVar29,local_588);
        pcVar23 = local_448;
        if (local_448 != (code *)0x0) {
          FUN_140e6de08(local_448);
          iVar10 = *(int *)(param_1 + 0x398);
          *(uint *)(param_1 + 0x398) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x39c) < iVar10 + 1U) {
            FUN_146421db6(local_6b8,iVar10);
          }
          lVar36 = *(longlong *)local_6b8;
          *(code **)(lVar36 + (longlong)iVar10 * 0x10) = pcVar23;
          *(code ***)(lVar36 + 8 + (longlong)iVar10 * 0x10) = uStack_440;
          if (uStack_440 != (code **)0x0) {
            LOCK();
            *(uint *)(uStack_440 + 1) = *(uint *)(uStack_440 + 1) + 1;
            UNLOCK();
          }
        }
        ppcVar24 = uStack_440;
        if (uStack_440 != (code **)0x0) {
          LOCK();
          ppcVar41 = uStack_440 + 1;
          *(uint *)ppcVar41 = *(uint *)ppcVar41 - 1;
          UNLOCK();
          if (*(uint *)ppcVar41 == 0) {
            (**(code **)*uStack_440)(uStack_440);
            LOCK();
            pcVar23 = (code *)((longlong)ppcVar24 + 0xc);
            *(uint *)pcVar23 = *(uint *)pcVar23 - 1;
            UNLOCK();
            if (*(uint *)pcVar23 == 0) {
              (**(code **)(*ppcVar24 + 0x10))(ppcVar24);
            }
          }
        }
      }
      FUN_140de17f6(local_588._0_8_,local_588._8_4_);
      if (local_588._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
    if (*(int *)(param_1 + 0x3a0) != 1) {
      if (*(int *)(param_1 + 0x3a0) == 2) {
        FUN_147e3fddc(local_6c8);
      }
      else {
        cVar8 = FUN_1407c0ae2();
        if ((cVar8 == '\0') && (DAT_14c872bf0 == '\0')) {
          iVar10 = *(int *)(*(longlong *)local_6c8 + 0xc);
          if ((((iVar10 != 0) &&
               ((((uVar9 = *(uint *)(*(longlong *)local_6c8 + 8), -1 < (int)uVar9 &&
                  ((int)uVar9 < DAT_14c9647dc)) &&
                 (plVar26 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar26 != (longlong *)0x0)) &&
                (((int)plVar26[2] == iVar10 && ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))))) &&
              (*plVar26 != 0)) && (*(char *)(*plVar26 + 0x152) == '\x02')) {
            FUN_144a86a6e();
          }
        }
      }
    }
  }
  FUN_14381142a(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x280) != 0) {
    lVar36 = FUN_14477bcf0();
    local_628 = (double)CONCAT44(local_628._4_4_,*(undefined4 *)(lVar36 + 0xdc));
    local_648 = (PSRWLOCK)(param_1 + 0x2e8);
    AcquireSRWLockExclusive(local_648);
    iVar10 = *(int *)(param_1 + 0x280);
    if (iVar10 != 0) {
      local_6c8 = (uint *)(param_1 + 0x200);
      local_690 = (longlong *)(param_1 + 0x278);
      local_688._0_8_ = param_1 + 0x228;
      local_6a8 = (code *)(param_1 + 0x260);
      local_698 = (code **)(param_1 + 0x218);
      local_678 = (code **)((ulonglong)local_678 & 0xffffffff00000000);
      do {
        uVar42 = *(ulonglong *)(*(longlong *)(param_1 + 0x278) + -0xc + (longlong)iVar10 * 0xc);
        bVar17 = *(byte *)(*(longlong *)(param_1 + 0x278) + -4 + (longlong)iVar10 * 0xc);
        *(int *)(param_1 + 0x280) = iVar10 + -1;
        FUN_1418066e2(local_690);
        if (((uVar42 >> 0x20 != 0) && (iVar10 = (int)uVar42, -1 < iVar10)) &&
           (iVar10 < DAT_14c9647dc)) {
          uVar46 = (ulonglong)((uint)(uVar42 >> 0x10) & 0x7fff);
          local_6c0 = (longlong *)((uVar42 & 0xffff) * 3);
          plVar26 = (longlong *)
                    ((ulonglong)(uint)((int)local_6c0 * 8) +
                    *(longlong *)(DAT_14c9647c8 + uVar46 * 8));
          if (((plVar26 != (longlong *)0x0) &&
              (iVar19 = (int)(uVar42 >> 0x20), (int)plVar26[2] == iVar19)) &&
             ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) {
              local_6b8 = (code *)*plVar26;
            }
            else {
              local_6b8 = (code *)0x0;
            }
            if ((bVar17 & 1) == 0) {
              if (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x25c)) {
                uVar9 = ((uint)((ulonglong)local_6b8 >> 0x14) & 0xffff ^
                        (uint)((ulonglong)local_6b8 >> 4)) * -0x7a143595;
                uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                pcVar23 = *(code **)(param_1 + 0x268);
                if (*(code **)(param_1 + 0x268) == (code *)0x0) {
                  pcVar23 = local_6a8;
                }
                iVar10 = *(int *)(pcVar23 +
                                 (ulonglong)
                                 (*(int *)(param_1 + 0x270) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
                if (iVar10 != -1) {
                  do {
                    puVar30 = (undefined8 *)(*(longlong *)local_688._0_8_ + (longlong)iVar10 * 0x18)
                    ;
                    if ((code *)*puVar30 == local_6b8) {
                      if ((int *)(puVar30 + 1) != (int *)0x0 && puVar30 != (undefined8 *)0x0) {
                        iVar10 = *(int *)(puVar30 + 1);
                        lVar36 = (longlong)iVar10;
                        if ((longlong)*(int *)(param_1 + 0x210) != 0) {
                          plVar26 = *(longlong **)(param_1 + 0x208);
                          plVar34 = plVar26 + (longlong)*(int *)(param_1 + 0x210) * 2;
                          bVar47 = false;
LAB_140bced32:
                          do {
                            if ((longlong)(int)plVar26[1] != 0) {
                              lVar27 = 0;
                              do {
                                if (*(int *)(*plVar26 + 0x48 + lVar27) == iVar10) {
                                  *(undefined4 *)(*plVar26 + 0x48 + lVar27) = 0xffffffff;
                                  plVar26 = plVar26 + 2;
                                  bVar47 = true;
                                  if (plVar26 == plVar34) goto LAB_140bcf070;
                                  goto LAB_140bced32;
                                }
                                lVar27 = lVar27 + 0x50;
                              } while ((longlong)(int)plVar26[1] * 0x50 != lVar27);
                            }
                            plVar26 = plVar26 + 2;
                          } while (plVar26 != plVar34);
                          if (bVar47) {
LAB_140bcf070:
                            FUN_141807228(*(longlong *)local_6c8 + 0x3b8,
                                          *local_698 + (lVar36 * 0xc + 2) * 8,
                                          *(undefined4 *)(*local_698 + (lVar36 * 0xc + 0xb) * 8));
                          }
                        }
                        pcVar23 = *local_698;
                        *(undefined8 *)(pcVar23 + lVar36 * 0x60) = 0;
                        *(undefined8 *)(pcVar23 + (lVar36 * 0xc + 1) * 8) = 0xffffffffffffffff;
                        *(undefined8 *)(pcVar23 + (lVar36 * 0xc + 5) * 8) = 0;
                        *(undefined8 *)(pcVar23 + (lVar36 * 0xc + 5) * 8 + 8) = 0;
                        *(undefined8 *)(pcVar23 + (lVar36 * 0xc + 7) * 8) = 0;
                        iVar10 = *(int *)(pcVar23 + lVar36 * 0x60 + 0x4c);
                        *(undefined4 *)(pcVar23 + (lVar36 * 0xc + 9) * 8) = 0;
                        if (iVar10 != 0) {
                          FUN_1446dd670(pcVar23 + (lVar36 * 0xc + 8) * 8,0);
                        }
                        *(undefined4 *)(pcVar23 + (lVar36 * 0xc + 10) * 8) = 0;
                        *(undefined4 *)(pcVar23 + (lVar36 * 0xc + 0xb) * 8) = 0xbf800000;
                        pcVar23[lVar36 * 0x60 + 0x5c] = (code)0x0;
                        FUN_1408a44f6(local_688._0_8_,local_6b8);
                      }
                      break;
                    }
                    iVar10 = *(int *)(puVar30 + 2);
                  } while (iVar10 != -1);
                }
              }
            }
            else {
              if (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x25c)) {
                uVar9 = ((uint)((ulonglong)local_6b8 >> 0x14) & 0xffff ^
                        (uint)((ulonglong)local_6b8 >> 4)) * -0x7a143595;
                uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                pcVar23 = *(code **)(param_1 + 0x268);
                if (*(code **)(param_1 + 0x268) == (code *)0x0) {
                  pcVar23 = local_6a8;
                }
                iVar18 = *(int *)(pcVar23 +
                                 (ulonglong)
                                 (*(int *)(param_1 + 0x270) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
                if (iVar18 != -1) {
                  do {
                    if (*(code **)(*(longlong *)local_688._0_8_ + (longlong)iVar18 * 0x18) ==
                        local_6b8) goto LAB_140bce758;
                    iVar18 = *(int *)(*(longlong *)local_688._0_8_ + (longlong)iVar18 * 0x18 + 0x10)
                    ;
                  } while (iVar18 != -1);
                }
              }
              if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) {
                lVar36 = *plVar26;
              }
              else {
                lVar36 = 0;
              }
              dVar4 = *(double *)(lVar36 + 0x260);
              dVar52 = *(double *)(lVar36 + 0x268);
              dVar50 = *(double *)(lVar36 + 0x270);
              if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) {
                lVar36 = *plVar26;
              }
              else {
                lVar36 = 0;
              }
              FUN_1437feef8(lVar36,&local_448);
              ppcVar24 = local_428;
              dVar56 = (double)CONCAT44(uStack_41c,uStack_420);
              dVar55 = (dVar50 + (double)CONCAT44(iStack_414,iStack_418)) * 0.5;
              dVar49 = (dVar52 + dVar56) * 0.5;
              dVar50 = (dVar4 + (double)local_428) * 0.5;
              uVar9 = *(uint *)(param_1 + 0x220);
              lVar36 = (longlong)(int)uVar9;
              if (0 < lVar36) {
                pcVar23 = *local_698;
                uVar12 = 0;
                lVar27 = 0;
                do {
                  if (pcVar23[lVar27 + 0x5c] == (code)0x0) {
                    *(double *)(pcVar23 + lVar27 + 0x10) = dVar50;
                    *(double *)(pcVar23 + lVar27 + 0x18) = dVar49;
                    *(double *)(pcVar23 + lVar27 + 0x20) = dVar55;
                    if (((iVar10 < DAT_14c9647dc) &&
                        (plVar26 = (longlong *)
                                   ((ulonglong)(uint)((int)local_6c0 * 8) +
                                   *(longlong *)(DAT_14c9647c8 + uVar46 * 8)),
                        plVar26 != (longlong *)0x0)) &&
                       (((int)plVar26[2] == iVar19 && ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))
                       ) {
                      lVar36 = *plVar26;
                    }
                    else {
                      lVar36 = 0;
                    }
                    local_6a0 = *local_698;
                    *(undefined8 *)(local_6a0 + lVar27 + 0x28) = *(undefined8 *)(lVar36 + 0x6e0);
                    uVar29 = *(undefined8 *)(lVar36 + 0x6f0);
                    *(undefined8 *)(local_6a0 + lVar27 + 0x30) = *(undefined8 *)(lVar36 + 0x6e8);
                    *(undefined8 *)(local_6a0 + lVar27 + 0x38) = uVar29;
                    if (local_6a0 + lVar27 + 0x40 != (code *)(lVar36 + 0x6f8)) {
                      iVar18 = *(int *)(lVar36 + 0x700);
                      local_668 = *(code **)(lVar36 + 0x6f8);
                      *(int *)(local_6a0 + lVar27 + 0x48) = iVar18;
                      if (iVar18 == 0 && *(int *)(local_6a0 + lVar27 + 0x4c) == 0) {
                        *(undefined4 *)(local_6a0 + lVar27 + 0x4c) = 0;
                      }
                      else {
                        FUN_1446dd670(local_6a0 + lVar27 + 0x40,iVar18);
                        if (iVar18 != 0) {
                          memcpy(*(void **)(local_6a0 + lVar27 + 0x40),local_668,
                                 (longlong)iVar18 * 2);
                        }
                      }
                    }
                    *(undefined4 *)(local_6a0 + lVar27 + 0x50) = *(undefined4 *)(lVar36 + 0x708);
                    *(ulonglong *)(*local_698 + lVar27) = uVar42;
                    if (((iVar10 < DAT_14c9647dc) &&
                        (puVar30 = (undefined8 *)
                                   ((ulonglong)(uint)((int)local_6c0 * 8) +
                                   *(longlong *)(DAT_14c9647c8 + uVar46 * 8)),
                        puVar30 != (undefined8 *)0x0)) &&
                       ((*(int *)(puVar30 + 2) == iVar19 &&
                        ((*(uint *)(puVar30 + 1) & 0x10200000) == 0)))) {
                      uVar29 = *puVar30;
                    }
                    else {
                      uVar29 = 0;
                    }
                    uVar11 = FUN_141805280(uVar29,0);
                    *(undefined4 *)(*local_698 + lVar27 + 8) = uVar11;
                    if ((((iVar10 < DAT_14c9647dc) &&
                         (puVar30 = (undefined8 *)
                                    ((ulonglong)(uint)((int)local_6c0 << 3) +
                                    *(longlong *)(DAT_14c9647c8 + uVar46 * 8)),
                         puVar30 != (undefined8 *)0x0)) && (*(int *)(puVar30 + 2) == iVar19)) &&
                       ((*(uint *)(puVar30 + 1) & 0x10200000) == 0)) {
                      uVar29 = *puVar30;
                    }
                    else {
                      uVar29 = 0;
                    }
                    uVar11 = FUN_141805280(uVar29,1);
                    *(undefined4 *)(*local_698 + lVar27 + 0xc) = uVar11;
                    dVar4 = (double)ppcVar24 - dVar4;
                    *(float *)(*local_698 + lVar27 + 0x58) =
                         (float)(SQRT((dVar56 - dVar52) * (dVar56 - dVar52) + dVar4 * dVar4) * 0.5);
                    pcVar23 = *local_698 + lVar27;
                    goto LAB_140bceea6;
                  }
                  lVar27 = lVar27 + 0x60;
                  uVar12 = uVar12 + 1;
                } while (lVar36 * 0x60 != lVar27);
              }
              *(uint *)(param_1 + 0x220) = uVar9 + 1;
              if (*(uint *)(param_1 + 0x224) < uVar9 + 1) {
                FUN_146421ec0(local_698,uVar9);
              }
              local_668 = *local_698;
              *(undefined8 *)(local_668 + lVar36 * 0x60) = 0;
              *(undefined8 *)(local_668 + lVar36 * 0x60 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(local_668 + (lVar36 * 0xc + 5) * 8) = 0;
              *(undefined8 *)(local_668 + (lVar36 * 0xc + 5) * 8 + 8) = 0;
              *(undefined8 *)(local_668 + (lVar36 * 0xc + 7) * 8) = 0;
              *(undefined8 *)(local_668 + (lVar36 * 0xc + 7) * 8 + 8) = 0;
              *(undefined8 *)(local_668 + lVar36 * 0x60 + 0x44) = 0;
              *(undefined8 *)(local_668 + lVar36 * 0x60 + 0x44 + 8) = 0;
              *(undefined4 *)(local_668 + (lVar36 * 0xc + 0xb) * 8) = 0xbf800000;
              local_668[lVar36 * 0x60 + 0x5c] = (code)0x0;
              *(double *)(local_668 + (lVar36 * 0xc + 2) * 8) = dVar50;
              *(double *)(local_668 + (lVar36 * 0xc + 3) * 8) = dVar49;
              *(double *)(local_668 + (lVar36 * 0xc + 4) * 8) = dVar55;
              if (((iVar10 < DAT_14c9647dc) &&
                  (plVar26 = (longlong *)
                             ((ulonglong)(uint)((int)local_6c0 * 8) +
                             *(longlong *)(DAT_14c9647c8 + uVar46 * 8)), plVar26 != (longlong *)0x0)
                  ) && (((int)plVar26[2] == iVar19 && ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))
                 ) {
                lVar27 = *plVar26;
              }
              else {
                lVar27 = 0;
              }
              local_6a0 = local_668 + lVar36 * 0x60;
              pcVar23 = local_668 + (lVar36 * 0xc + 8) * 8;
              *(ulonglong *)(local_6a0 + 0x28) = *(ulonglong *)(lVar27 + 0x6e0);
              uVar45 = *(ulonglong *)(lVar27 + 0x6f0);
              *(ulonglong *)(local_6a0 + 0x30) = *(ulonglong *)(lVar27 + 0x6e8);
              *(ulonglong *)(local_6a0 + 0x38) = uVar45;
              if (pcVar23 != (code *)(lVar27 + 0x6f8)) {
                iVar18 = *(int *)(lVar27 + 0x700);
                local_638 = *(void **)(lVar27 + 0x6f8);
                *(int *)(local_6a0 + 0x48) = iVar18;
                if ((longlong)iVar18 == 0) {
                  *(int *)(local_6a0 + 0x4c) = 0;
                }
                else {
                  local_618 = pcVar23;
                  FUN_1446dd670(pcVar23,iVar18,0);
                  memcpy(*(void **)local_618,local_638,(longlong)iVar18 * 2);
                }
              }
              *(int *)(local_6a0 + 0x50) = *(int *)(lVar27 + 0x708);
              *(ulonglong *)local_6a0 = uVar42;
              if (((iVar10 < DAT_14c9647dc) &&
                  (puVar30 = (undefined8 *)
                             ((ulonglong)(uint)((int)local_6c0 * 8) +
                             *(longlong *)(DAT_14c9647c8 + uVar46 * 8)),
                  puVar30 != (undefined8 *)0x0)) &&
                 ((*(int *)(puVar30 + 2) == iVar19 && ((*(uint *)(puVar30 + 1) & 0x10200000) == 0)))
                 ) {
                uVar29 = *puVar30;
              }
              else {
                uVar29 = 0;
              }
              iVar18 = FUN_141805280(uVar29,0);
              *(int *)(local_6a0 + 8) = iVar18;
              if ((((iVar10 < DAT_14c9647dc) &&
                   (puVar30 = (undefined8 *)
                              ((ulonglong)(uint)((int)local_6c0 << 3) +
                              *(longlong *)(DAT_14c9647c8 + uVar46 * 8)),
                   puVar30 != (undefined8 *)0x0)) && (*(int *)(puVar30 + 2) == iVar19)) &&
                 ((*(uint *)(puVar30 + 1) & 0x10200000) == 0)) {
                uVar29 = *puVar30;
              }
              else {
                uVar29 = 0;
              }
              pcVar23 = local_668 + lVar36 * 0x60;
              iVar10 = FUN_141805280(uVar29,1);
              *(int *)(local_6a0 + 0xc) = iVar10;
              dVar4 = (double)ppcVar24 - dVar4;
              *(float *)(local_6a0 + 0x58) =
                   (float)(SQRT((dVar56 - dVar52) * (dVar56 - dVar52) + dVar4 * dVar4) * 0.5);
              uVar12 = uVar9;
LAB_140bceea6:
              pcVar23[0x5c] = (code)0x1;
              uVar29 = local_688._0_8_;
              FUN_141806782(local_688._0_8_,&local_448);
              ppcVar24 = uStack_440;
              *uStack_440 = local_6b8;
              *(uint *)(uStack_440 + 1) = uVar12;
              *(uint *)(uStack_440 + 2) = 0xffffffff;
              local_588._0_4_ = local_448._0_4_;
              uVar9 = ((uint)((ulonglong)local_6b8 >> 0x14) & 0xffff ^
                      (uint)((ulonglong)local_6b8 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              uVar9 = uVar9 >> 0x10 ^ uVar9;
              local_718 = 0;
              cVar8 = FUN_143804666(uVar29,uVar9);
              if (cVar8 == '\0') {
                uVar35 = *(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c);
                if (uVar35 < 4) {
                  iVar10 = 1;
                }
                else {
                  uVar42 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
                  lVar36 = 0x3f;
                  if (uVar42 != 0) {
                    for (; uVar42 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                    }
                  }
                  iVar10 = 1 << ((byte)lVar36 & 0x1f);
                }
                if (((int)uVar35 < 1) || (iVar10 <= *(int *)(param_1 + 0x270))) {
                  uVar9 = *(int *)(param_1 + 0x270) - 1U & uVar9;
                  *(uint *)((longlong)ppcVar24 + 0x14) = uVar9;
                  pcVar23 = *(code **)(param_1 + 0x268);
                  if (*(code **)(param_1 + 0x268) == (code *)0x0) {
                    pcVar23 = local_6a8;
                  }
                  *(uint *)(ppcVar24 + 2) =
                       *(uint *)(pcVar23 +
                                ((longlong)*(int *)(param_1 + 0x270) - 1U & (longlong)(int)uVar9) *
                                4);
                  pcVar23 = *(code **)(param_1 + 0x268);
                  if (*(code **)(param_1 + 0x268) == (code *)0x0) {
                    pcVar23 = local_6a8;
                  }
                  *(undefined4 *)
                   (pcVar23 + ((longlong)*(int *)(param_1 + 0x270) - 1U & (longlong)(int)uVar9) * 4)
                       = local_588._0_4_;
                }
                else {
                  *(int *)(param_1 + 0x270) = iVar10;
                  FUN_141806958(local_688._0_8_);
                }
              }
              if (0 < *(int *)(param_1 + 0x210)) {
                iVar10 = 0;
                bVar17 = 0;
                do {
                  bVar43 = FUN_144a1442a(local_6c8,iVar10);
                  bVar17 = bVar17 | bVar43;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)(param_1 + 0x210));
                if ((bVar17 & 1) != 0) {
                  FUN_141807228(*(longlong *)local_6c8 + 0x3b8,
                                *local_698 + ((longlong)(int)uVar12 * 0xc + 2) * 8,
                                *(undefined4 *)
                                 (*local_698 + ((longlong)(int)uVar12 * 0xc + 0xb) * 8));
                }
              }
              iVar10 = (int)local_678 + 1;
              local_678 = (code **)CONCAT44(local_678._4_4_,iVar10);
              if (local_628._0_4_ <= iVar10 && 0 < local_628._0_4_) break;
            }
          }
        }
LAB_140bce758:
        iVar10 = *(int *)(param_1 + 0x280);
      } while (iVar10 != 0);
    }
    ReleaseSRWLockExclusive(local_648);
  }
  if (0.0 < *(float *)(param_1 + 0x5a4)) {
    local_698 = (code **)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) < 0) {
      FUN_147e45766(local_698);
    }
    auVar6 = _DAT_1499387d0;
    local_6a0 = (code *)(param_1 + 0x78);
    iVar10 = *(int *)(param_1 + 0x90);
    if (iVar10 == 0) {
      uVar45 = 1;
      uVar42 = 0;
      local_6c0 = (longlong *)((ulonglong)local_6c0 & 0xffffffff00000000);
      iVar19 = 0;
    }
    else {
      pcVar23 = *(code **)(param_1 + 0x88);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        pcVar23 = local_6a0;
      }
      uVar9 = *(uint *)pcVar23;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        uVar42 = 0;
        uVar46 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar46 = uVar42;
        }
        local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
        do {
          if (uVar46 == uVar42) goto LAB_140bd1047;
          local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
          uVar9 = *(uint *)(pcVar23 + uVar42 * 4 + 4);
          uVar42 = uVar42 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar42 = 0;
        local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
      }
      uVar45 = (ulonglong)(-uVar9 & uVar9);
      uVar46 = uVar45 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 < iVar10) {
      local_690 = (longlong *)(param_1 + 0x68);
      local_6a8 = (code *)(param_1 + 0xa0);
      local_6c8 = (uint *)CONCAT44(local_6c8._4_4_,0xffffffff);
      dVar4 = (double)DAT_1499387d0;
      dVar52 = DAT_1499387d0._8_8_;
      do {
        lVar36 = *local_690;
        lVar27 = (longlong)iVar19 * 0xf8;
        ppcVar24 = *(code ***)(lVar36 + 0xe0 + lVar27);
        if ((((ppcVar24 == (code **)0x0) ||
             ((lVar28 = *(longlong *)(lVar36 + 0xe8 + lVar27), lVar28 != 0 &&
              (*(int *)(lVar28 + 8) == 1)))) || (*(float *)(ppcVar24 + 0x43) <= 0.0)) ||
           ((*(float *)((longlong)ppcVar24 + 0x21c) <= 0.0 || (*(int *)(ppcVar24 + 0x44) == -1)))) {
LAB_140bcfec5:
          pcVar23 = (code *)*(longlong *)(param_1 + 0xa8);
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            pcVar23 = local_6a8;
          }
          lVar36 = *(longlong *)(param_1 + 0x68);
          lVar28 = (longlong)*(int *)(lVar36 + 0xf4 + lVar27);
          iVar10 = *(int *)((longlong)pcVar23 + lVar28 * 4);
          if (iVar10 == iVar19) {
            piVar32 = (int *)((longlong)pcVar23 + lVar28 * 4);
          }
          else {
            do {
              piVar32 = (int *)((longlong)iVar10 * 0xf8 + lVar36 + 0xf0);
              iVar10 = *piVar32;
            } while (iVar10 != iVar19);
          }
          *piVar32 = *(int *)(lVar36 + lVar27 + 0xf0);
          lVar36 = *local_690;
          plVar26 = *(longlong **)(lVar36 + 0xe8 + lVar27);
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            plVar34 = plVar26 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar32 = (int *)((longlong)plVar26 + 0xc);
              *piVar32 = *piVar32 + -1;
              UNLOCK();
              if (*piVar32 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
          }
          lVar36 = lVar36 + lVar27;
          plVar26 = *(longlong **)(lVar36 + 0xd8);
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            piVar32 = (int *)((longlong)plVar26 + 0xc);
            *piVar32 = *piVar32 + -1;
            UNLOCK();
            if (*piVar32 == 0) {
              (**(code **)(*plVar26 + 0x10))();
            }
          }
          plVar26 = (longlong *)(lVar36 + 0x78);
          pcVar23 = *(code **)((longlong)&DAT_14c9a85d0 +
                              (ulonglong)((uint)*(byte *)(lVar36 + 0x98) * 0x120));
          if (pcVar23 != (code *)0x0) {
            plVar34 = plVar26;
            if (0x18 < *(ushort *)(lVar36 + 0x90)) {
              plVar34 = (longlong *)*plVar26;
            }
            (*pcVar23)(plVar34);
          }
          if (0x18 < *(ushort *)(lVar36 + 0x90)) {
            FUN_1400020a8(*plVar26);
          }
          FUN_143803fd4(local_690,iVar19);
        }
        else {
          local_6b8 = (code *)(lVar36 + lVar27 + 0xe0);
          if (*(char *)(ppcVar24 + 0x2b) != '\x02') {
            if (*(char *)(ppcVar24 + 0x2b) == '\0') {
              iVar10 = *(int *)((longlong)ppcVar24 + 0x17c);
              if (iVar10 != 0) {
                uVar9 = *(uint *)(ppcVar24 + 0x2f);
                goto LAB_140bcf492;
              }
            }
            else {
              pcVar23 = ppcVar24[0x2c];
              if (((((-(double)DAT_14cb1c860 < (double)pcVar23) &&
                    ((double)pcVar23 < (double)DAT_14cb1c860)) &&
                   (-(double)DAT_14cb1c868 < (double)ppcVar24[0x2d])) &&
                  ((((double)ppcVar24[0x2d] < (double)DAT_14cb1c868 &&
                    (-(double)DAT_14cb1c870 < (double)ppcVar24[0x2e])) &&
                   (((double)ppcVar24[0x2e] < (double)DAT_14cb1c870 &&
                    ((iVar10 = _finite((double)pcVar23), iVar10 != 0 &&
                     (iVar10 = _finite((double)ppcVar24[0x2d]), iVar10 != 0)))))))) &&
                 (iVar10 = _finite((double)ppcVar24[0x2e]), iVar10 != 0)) {
                ppcVar24 = *(code ***)local_6b8;
                goto LAB_140bcf4db;
              }
            }
            goto LAB_140bcfec5;
          }
          iVar10 = *(int *)((longlong)ppcVar24 + 0x184);
          if (iVar10 == 0) goto LAB_140bcfec5;
          uVar9 = *(uint *)(ppcVar24 + 0x30);
LAB_140bcf492:
          if (((((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) ||
              (lVar36 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar36 == 0))
             || ((*(int *)(lVar36 + 0x10) != iVar10 || ((*(uint *)(lVar36 + 8) & 0x10200000) != 0)))
             ) goto LAB_140bcfec5;
LAB_140bcf4db:
          if ((*(char *)((longlong)ppcVar24 + 0x151) == '\0') && (1 < *(byte *)(ppcVar24 + 0x2a))) {
            if ((ppcVar24[0x58] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x58] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 0x5a)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x55] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x56] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x57] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_678 = uStack_440;
              pcStack_670 = local_438;
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x52] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x53] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x54] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
            if ((ppcVar24[0x4f] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x4f] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 0x51)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x4c] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x4d] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x4e] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_678 = uStack_440;
              pcStack_670 = local_438;
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x49] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x4a] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x4b] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
            if ((ppcVar24[0x62] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x62] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 100)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x5f] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x60] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x61] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_678 = uStack_440;
              pcStack_670 = local_438;
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x5c] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x5d] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x5e] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
            if ((ppcVar24[0x7b] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x7b] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 0x7d)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x78] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x79] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x7a] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_678 = uStack_440;
              pcStack_670 = local_438;
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x75] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x76] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x77] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
            if ((ppcVar24[0x72] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x72] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 0x74)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x6f] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x70] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x71] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_678 = uStack_440;
              pcStack_670 = local_438;
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x6c] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x6d] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x6e] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
            if ((ppcVar24[0x85] != (code *)0x0) &&
               (FUN_147e49f8e(*(undefined8 *)(ppcVar24[0x85] + 0x598),&local_448,
                              *(undefined4 *)(ppcVar24 + 0x87)), (local_3e8 & 1) != 0)) {
              dVar55 = (double)ppcVar24[0x82] * (double)pplStack_408;
              dVar49 = (double)ppcVar24[0x83] * (double)pcStack_400;
              dVar50 = (double)ppcVar24[0x84] *
                       (double)CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8));
              local_688._8_4_ = SUB84((double)pcStack_3f0 * 0.0,0);
              local_688._0_8_ = dVar50;
              local_688._12_4_ = (int)((ulonglong)((double)pcStack_3f0 * 0.0) >> 0x20);
              local_6b8 = pcStack_430;
              pcStack_6b0 = pcStack_430;
              local_678 = uStack_440;
              pcStack_670 = local_438;
              dVar56 = dVar49 * (double)local_448 - dVar55 * (double)uStack_440;
              dVar57 = dVar50 * (double)uStack_440 - dVar49 * (double)local_438;
              dVar48 = dVar55 * (double)local_438 - (double)local_448 * dVar50;
              dVar57 = dVar57 + dVar57;
              dVar48 = dVar48 + dVar48;
              dVar56 = dVar56 + dVar56;
              ppcVar24[0x7f] =
                   (code *)((dVar56 * (double)uStack_440 - dVar48 * (double)local_438) +
                            (double)pcStack_430 * dVar57 + dVar55 + (double)local_428);
              ppcVar24[0x80] =
                   (code *)(((double)local_438 * dVar57 - (double)local_448 * dVar56) +
                            (double)pcStack_430 * dVar48 + dVar49 +
                           (double)CONCAT44(uStack_41c,uStack_420));
              ppcVar24[0x81] =
                   (code *)(dVar56 * (double)pcStack_430 + dVar50 +
                            (dVar48 * (double)local_448 - dVar57 * (double)uStack_440) +
                           (double)CONCAT44(iStack_414,iStack_418));
            }
          }
          else {
            FUN_1437fe5b8(ppcVar24 + 0x47);
            if (*(char *)(ppcVar24 + 0x2a) == '\0') {
              bVar17 = 1;
            }
            else {
              pcVar23 = ppcVar24[0x75];
              bVar17 = 3;
              if ((((((-(double)DAT_14cb1c860 < (double)pcVar23) &&
                     ((double)pcVar23 < (double)DAT_14cb1c860)) &&
                    (pcVar25 = ppcVar24[0x76], -(double)DAT_14cb1c868 < (double)pcVar25)) &&
                   (((double)pcVar25 < (double)DAT_14cb1c868 &&
                    (pcVar16 = ppcVar24[0x77], -(double)DAT_14cb1c870 < (double)pcVar16)))) &&
                  ((double)pcVar16 < (double)DAT_14cb1c870)) &&
                 (((iVar10 = _finite((double)pcVar23), iVar10 != 0 &&
                   (iVar10 = _finite((double)pcVar25), iVar10 != 0)) &&
                  ((iVar10 = _finite((double)pcVar16), iVar10 != 0 &&
                   (*(int *)(ppcVar24 + 0x8c) != -1)))))) {
                if (*(int *)(ppcVar24 + 0x6b) - 1U < 2) {
                  if ((*(int *)(ppcVar24 + 0x6a) != -1) &&
                     (*(int *)((longlong)ppcVar24 + 0x354) != -1)) {
LAB_140bcf7d6:
                    pcVar23 = ppcVar24[0x6c];
                    if (((-(double)DAT_14cb1c860 < (double)pcVar23) &&
                        ((((double)pcVar23 < (double)DAT_14cb1c860 &&
                          (-(double)DAT_14cb1c868 < (double)ppcVar24[0x6d])) &&
                         ((double)ppcVar24[0x6d] < (double)DAT_14cb1c868)))) &&
                       ((((-(double)DAT_14cb1c870 < (double)ppcVar24[0x6e] &&
                          ((double)ppcVar24[0x6e] < (double)DAT_14cb1c870)) &&
                         (iVar10 = _finite((double)pcVar23), iVar10 != 0)) &&
                        (iVar10 = _finite((double)ppcVar24[0x6d]), iVar10 != 0)))) {
                      iVar10 = _finite((double)ppcVar24[0x6e]);
                      bVar17 = iVar10 == 0 | 2;
                    }
                  }
                }
                else if (*(int *)(ppcVar24 + 0x6b) == 3) goto LAB_140bcf7d6;
              }
            }
            *(byte *)(ppcVar24 + 0x2a) = bVar17;
            local_438 = DAT_14cb1c870;
            local_448 = DAT_14cb1c860;
            uStack_440 = DAT_14cb1c868;
            memset(&pplStack_408,0,0x110);
            pcVar23 = DAT_14cb1c860;
            pcStack_430 = DAT_14cb1c860;
            local_428 = DAT_14cb1c868;
            ppcVar41 = local_428;
            uStack_420 = (uint)DAT_14cb1c870;
            uStack_41c = (uint)((ulonglong)DAT_14cb1c870 >> 0x20);
            iStack_418 = 0;
            iStack_414 = 0;
            plStack_410 = (longlong *)0x0;
            pplStack_408 = (longlong **)CONCAT44(pplStack_408._4_4_,0xffffffff);
            local_3f8 = '\0';
            pcStack_400 = (code *)0x0;
            uStack_3f7 = 1;
            local_3e8 = 0;
            pcStack_3f0 = (code *)0x0;
            local_3e7 = 1;
            local_3e5 = 0x101;
            uStack_3d1._1_3_ = SUB83(DAT_14c8464f0,0);
            uStack_3cd = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x18);
            uStack_3c9._0_1_ = (undefined1)((ulonglong)DAT_14c8464f0 >> 0x38);
            local_3e0 = DAT_14c8464e0;
            uStack_3d8 = (undefined3)DAT_14c8464e8;
            uStack_3d5 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x18);
            uStack_3d1._0_1_ = (undefined1)((ulonglong)DAT_14c8464e8 >> 0x38);
            local_3b8 = DAT_14c8464f8;
            uStack_3b0 = DAT_14c846500;
            local_3a8 = DAT_14c846508;
            local_3a0 = 0x18;
            local_398 = 5;
            local_390 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
            local_388 = CONCAT11(1,(undefined1)local_388);
            plVar26 = &DAT_14c846480;
            plVar34 = local_368;
            for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
              *plVar34 = *plVar26;
              plVar26 = plVar26 + 1;
              plVar34 = plVar34 + 1;
            }
            local_428._0_4_ = SUB84(DAT_14cb1c868,0);
            local_428._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
            *(undefined4 *)(ppcVar24 + 4) = (undefined4)local_428;
            *(undefined4 *)((longlong)ppcVar24 + 0x24) = local_428._4_4_;
            *(uint *)(ppcVar24 + 5) = uStack_420;
            *(uint *)((longlong)ppcVar24 + 0x2c) = uStack_41c;
            ppcVar24[2] = local_438;
            ppcVar24[3] = pcVar23;
            *ppcVar24 = local_448;
            ppcVar24[1] = (code *)uStack_440;
            local_428 = ppcVar41;
            if (&local_448 != ppcVar24) {
              ppcVar24[6] = (code *)0x0;
              iStack_418 = 0;
              iStack_414 = 0;
              pcVar23 = ppcVar24[7];
              if (pcVar23 != (code *)0x0) {
                plStack_410 = (longlong *)0x0;
                ppcVar24[7] = (code *)0x0;
                LOCK();
                pcVar25 = pcVar23 + 8;
                *(int *)pcVar25 = *(int *)pcVar25 + -1;
                UNLOCK();
                if (*(int *)pcVar25 == 0) {
                  (*(code *)**(undefined8 **)pcVar23)(pcVar23);
                  LOCK();
                  pcVar25 = pcVar23 + 0xc;
                  *(int *)pcVar25 = *(int *)pcVar25 + -1;
                  UNLOCK();
                  if (*(int *)pcVar25 == 0) {
                    (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23);
                  }
                }
              }
            }
            *(undefined4 *)(ppcVar24 + 8) = pplStack_408._0_4_;
            ppcVar24[9] = pcStack_400;
            *(ushort *)(ppcVar24 + 10) = CONCAT11(uStack_3f7,local_3f8);
            ppcVar24[0xb] = pcStack_3f0;
            ppcVar24[0xc] =
                 (code *)CONCAT35(uStack_3e3,
                                  CONCAT23(local_3e5,
                                           CONCAT12(uStack_3e6,CONCAT11(local_3e7,local_3e8))));
            ppcVar24[0xd] = local_3e0;
            ppcVar24[0xe] = (code *)CONCAT17((undefined1)uStack_3d1,CONCAT43(uStack_3d5,uStack_3d8))
            ;
            *(undefined4 *)((longlong)ppcVar24 + 0x73) = uStack_3d5;
            *(undefined4 *)((longlong)ppcVar24 + 0x77) = uStack_3d1;
            *(undefined4 *)((longlong)ppcVar24 + 0x7b) = uStack_3cd;
            *(undefined4 *)((longlong)ppcVar24 + 0x7f) = uStack_3c9;
            FUN_1403719a4(ppcVar24 + 0x11,local_3c0);
            *(undefined2 *)(ppcVar24 + 0x18) = local_388;
            pcVar23 = local_380;
            if (DAT_14c950c29 == '\x01') {
              if (local_380 == (code *)0x0) {
                pcVar23 = (code *)0x0;
              }
              else {
                FUN_1456cec3c();
                pcVar23 = local_380;
              }
            }
            ppcVar24[0x19] = pcVar23;
            *(undefined4 *)(ppcVar24 + 0x1a) = local_378;
            ppcVar41 = ppcVar24 + 0x1c;
            plVar26 = local_368;
            ppcVar40 = ppcVar41;
            for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
              *ppcVar40 = (code *)*plVar26;
              plVar26 = plVar26 + 1;
              ppcVar40 = ppcVar40 + 1;
            }
            ppcVar24[0x28] = local_308;
            pcVar23 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_398 * 0x120));
            if (pcVar23 != (code *)0x0) {
              pppppppuVar21 = &local_3b8;
              if (0x18 < local_3a0) {
                pppppppuVar21 = local_3b8;
              }
              (*pcVar23)(pppppppuVar21);
            }
            if (0x18 < local_3a0) {
              FUN_1400020a8(local_3b8);
            }
            plVar26 = plStack_410;
            if (plStack_410 != (longlong *)0x0) {
              LOCK();
              plVar34 = plStack_410 + 1;
              *(int *)plVar34 = (int)*plVar34 + -1;
              UNLOCK();
              if ((int)*plVar34 == 0) {
                (**(code **)*plStack_410)(plStack_410);
                LOCK();
                piVar32 = (int *)((longlong)plVar26 + 0xc);
                *piVar32 = *piVar32 + -1;
                UNLOCK();
                if (*piVar32 == 0) {
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                }
              }
            }
            *(undefined1 *)(ppcVar24 + 10) = *(undefined1 *)((longlong)ppcVar24 + 0x151);
            FUN_144955a78(ppcVar24 + 0xb,ppcVar24 + 0x33);
            pcVar23 = DAT_14cb1c860;
            iVar10 = DAT_14c9647dc;
            lVar36 = DAT_14c9647c8;
            cVar8 = *(char *)(ppcVar24 + 0x2b);
            if (cVar8 == '\x02') {
              if ((*(int *)((longlong)ppcVar24 + 0x184) == 0) ||
                 (uVar9 = *(uint *)(ppcVar24 + 0x30), (int)uVar9 < 0)) {
LAB_140bd0121:
                lVar36 = 0;
              }
              else {
                lVar36 = 0;
                if ((int)uVar9 < DAT_14c9647dc) {
                  plVar26 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                  if (((plVar26 == (longlong *)0x0) ||
                      ((int)plVar26[2] != *(int *)((longlong)ppcVar24 + 0x184))) ||
                     ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) goto LAB_140bd0121;
                  lVar36 = *plVar26;
                }
              }
              if (*(longlong *)(lVar36 + 0xa8) == 0) {
                *(undefined4 *)(ppcVar24 + 0x28) = 0;
                iVar10 = 0;
              }
              else {
                uVar9 = *(uint *)(*(longlong *)(lVar36 + 0xa8) + 0xc);
                *(uint *)(ppcVar24 + 0x28) = uVar9;
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar27 = 0;
                }
                iVar10 = *(int *)(lVar27 + 0x10);
                if (*(int *)(lVar27 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar19 = DAT_14c964868 + 1;
                  bVar47 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar47) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar19);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar27 + 0x10);
                  bVar47 = iVar10 == 0;
                  if (bVar47) {
                    *(int *)(lVar27 + 0x10) = iVar19;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar47) {
                    iVar10 = iVar19;
                  }
                }
              }
              *(int *)((longlong)ppcVar24 + 0x144) = iVar10;
              pcVar23 = DAT_14cb1c860;
              local_438 = *(code **)(lVar36 + 0x170);
              local_448 = *(code **)(lVar36 + 0x160);
              uStack_440 = *(code ***)(lVar36 + 0x168);
              uStack_420 = (uint)DAT_14cb1c870;
              uStack_41c = (uint)((ulonglong)DAT_14cb1c870 >> 0x20);
              pcStack_430 = DAT_14cb1c860;
              local_428 = DAT_14cb1c868;
              ppcVar40 = local_428;
              local_428._0_4_ = SUB84(DAT_14cb1c868,0);
              local_428._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
              ppcVar24[2] = local_438;
              ppcVar24[3] = pcVar23;
              *(undefined4 *)(ppcVar24 + 4) = (undefined4)local_428;
              *(undefined4 *)((longlong)ppcVar24 + 0x24) = local_428._4_4_;
              *(uint *)(ppcVar24 + 5) = uStack_420;
              *(uint *)((longlong)ppcVar24 + 0x2c) = uStack_41c;
              *ppcVar24 = local_448;
              ppcVar24[1] = (code *)uStack_440;
              ppcVar24[6] = (code *)0x0;
              pcVar23 = ppcVar24[7];
              local_428 = ppcVar40;
              if (pcVar23 != (code *)0x0) {
                ppcVar24[7] = (code *)0x0;
                LOCK();
                pcVar25 = pcVar23 + 8;
                *(int *)pcVar25 = *(int *)pcVar25 + -1;
                UNLOCK();
                if (*(int *)pcVar25 == 0) {
                  (*(code *)**(undefined8 **)pcVar23)(pcVar23);
                  LOCK();
                  pcVar25 = pcVar23 + 0xc;
                  *(int *)pcVar25 = *(int *)pcVar25 + -1;
                  UNLOCK();
                  if (*(int *)pcVar25 == 0) {
                    (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23);
                  }
                }
              }
              *(undefined4 *)(ppcVar24 + 8) = 0xffffffff;
              dVar50 = *(double *)(lVar36 + 0x178);
              if (*(double *)(lVar36 + 0x178) <= *(double *)(lVar36 + 0x180)) {
                dVar50 = *(double *)(lVar36 + 0x180);
              }
              *(float *)(ppcVar24 + 9) = (float)dVar50;
              *(float *)((longlong)ppcVar24 + 0x4c) = (float)*(double *)(lVar36 + 0x188);
              plVar26 = (longlong *)(lVar36 + 0x240);
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *ppcVar41 = (code *)*plVar26;
                plVar26 = plVar26 + 1;
                ppcVar41 = ppcVar41 + 1;
              }
            }
            else if (cVar8 == '\0') {
              if ((((*(int *)((longlong)ppcVar24 + 0x17c) == 0) ||
                   (uVar9 = *(uint *)(ppcVar24 + 0x2f), (int)uVar9 < 0)) ||
                  ((DAT_14c9647dc <= (int)uVar9 ||
                   (((plVar26 = (longlong *)
                                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                     plVar26 == (longlong *)0x0 ||
                     ((int)plVar26[2] != *(int *)((longlong)ppcVar24 + 0x17c))) ||
                    ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)))))) ||
                 (plVar26 = (longlong *)*plVar26, plVar26 == (longlong *)0x0)) {
                *(undefined4 *)(ppcVar24 + 0x28) = 0;
                plVar26 = (longlong *)0x0;
                iVar10 = 0;
              }
              else {
                uVar9 = *(uint *)((longlong)plVar26 + 0xc);
                *(uint *)(ppcVar24 + 0x28) = uVar9;
                if ((int)uVar9 < iVar10) {
                  lVar36 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(lVar36 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar36 = 0;
                }
                iVar10 = *(int *)(lVar36 + 0x10);
                if (*(int *)(lVar36 + 0x10) == 0) {
                  LOCK();
                  iVar10 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar19 = DAT_14c964868 + 1;
                  bVar47 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar10;
                  if (bVar47) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar19);
                  }
                  LOCK();
                  iVar10 = *(int *)(lVar36 + 0x10);
                  bVar47 = iVar10 == 0;
                  if (bVar47) {
                    *(int *)(lVar36 + 0x10) = iVar19;
                    iVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar47) {
                    iVar10 = iVar19;
                  }
                }
              }
              *(int *)((longlong)ppcVar24 + 0x144) = iVar10;
              plVar34 = (longlong *)(plVar26[0x39] + 0x240);
              if (plVar26[0x39] == 0) {
                plVar34 = &DAT_14c846480;
              }
              for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
                *ppcVar41 = (code *)*plVar34;
                plVar34 = plVar34 + 1;
                ppcVar41 = ppcVar41 + 1;
              }
              lVar36 = plVar26[0x39];
              if (lVar36 == 0) {
                plVar34 = (longlong *)&DAT_14c8464e0;
                pcVar23 = DAT_14c8464f0;
              }
              else {
                plVar34 = (longlong *)(lVar36 + 0x260);
                pcVar23 = *(code **)(lVar36 + 0x270);
              }
              pcVar25 = (code *)plVar34[1];
              *ppcVar24 = (code *)*plVar34;
              ppcVar24[1] = pcVar25;
              ppcVar24[2] = pcVar23;
              ppcVar41 = DAT_14cb1c868;
              ppcVar24[3] = DAT_14cb1c860;
              ppcVar24[4] = (code *)ppcVar41;
              ppcVar24[5] = DAT_14cb1c870;
              ppcVar24[6] = (code *)0x0;
              pcVar23 = ppcVar24[7];
              if (pcVar23 != (code *)0x0) {
                ppcVar24[7] = (code *)0x0;
                LOCK();
                pcVar25 = pcVar23 + 8;
                *(int *)pcVar25 = *(int *)pcVar25 + -1;
                UNLOCK();
                if (*(int *)pcVar25 == 0) {
                  (*(code *)**(undefined8 **)pcVar23)(pcVar23);
                  LOCK();
                  pcVar25 = pcVar23 + 0xc;
                  *(int *)pcVar25 = *(int *)pcVar25 + -1;
                  UNLOCK();
                  if (*(int *)pcVar25 == 0) {
                    (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23);
                  }
                }
              }
              *(undefined4 *)(ppcVar24 + 8) = 0xffffffff;
              (**(code **)(*plVar26 + 0x528))(plVar26,ppcVar24 + 9,(longlong)ppcVar24 + 0x4c);
            }
            else if (cVar8 == '\x01') {
              local_438 = ppcVar24[0x2e];
              local_448 = ppcVar24[0x2c];
              uStack_440 = (code **)ppcVar24[0x2d];
              uStack_420 = (uint)DAT_14cb1c870;
              uStack_41c = (uint)((ulonglong)DAT_14cb1c870 >> 0x20);
              pcStack_430 = DAT_14cb1c860;
              local_428 = DAT_14cb1c868;
              ppcVar41 = local_428;
              local_428._0_4_ = SUB84(DAT_14cb1c868,0);
              local_428._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
              ppcVar24[2] = local_438;
              ppcVar24[3] = pcVar23;
              *(undefined4 *)(ppcVar24 + 4) = (undefined4)local_428;
              *(undefined4 *)((longlong)ppcVar24 + 0x24) = local_428._4_4_;
              *(uint *)(ppcVar24 + 5) = uStack_420;
              *(uint *)((longlong)ppcVar24 + 0x2c) = uStack_41c;
              *ppcVar24 = local_448;
              ppcVar24[1] = (code *)uStack_440;
              ppcVar24[6] = (code *)0x0;
              pcVar23 = ppcVar24[7];
              local_428 = ppcVar41;
              if (pcVar23 != (code *)0x0) {
                ppcVar24[7] = (code *)0x0;
                LOCK();
                pcVar25 = pcVar23 + 8;
                *(int *)pcVar25 = *(int *)pcVar25 + -1;
                UNLOCK();
                if (*(int *)pcVar25 == 0) {
                  (*(code *)**(undefined8 **)pcVar23)(pcVar23);
                  LOCK();
                  pcVar25 = pcVar23 + 0xc;
                  *(int *)pcVar25 = *(int *)pcVar25 + -1;
                  UNLOCK();
                  if (*(int *)pcVar25 == 0) {
                    (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23);
                  }
                }
              }
              *(undefined4 *)(ppcVar24 + 8) = 0xffffffff;
              ppcVar24[9] = (code *)0x0;
            }
            if ((*(char *)((longlong)ppcVar24 + 0x1c1) == '\x01') &&
               (*(char *)((longlong)ppcVar24 + 0x1c2) == '\x01')) {
              if ((*(int *)((longlong)ppcVar24 + 0x17c) == 0) ||
                 (uVar9 = *(uint *)(ppcVar24 + 0x2f), (int)uVar9 < 0)) {
LAB_140bd0d1d:
                uVar29 = 0;
              }
              else {
                uVar29 = 0;
                if ((int)uVar9 < DAT_14c9647dc) {
                  puVar30 = (undefined8 *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                  if (((puVar30 == (undefined8 *)0x0) ||
                      (*(int *)(puVar30 + 2) != *(int *)((longlong)ppcVar24 + 0x17c))) ||
                     ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bd0d1d;
                  uVar29 = *puVar30;
                }
              }
              local_448 = (code *)((ulonglong)local_448 & 0xffffffffffffff00);
              uStack_420 = 0;
              FUN_1456bb102(&local_448,uVar29);
              FUN_1447c3578(ppcVar24 + 0x39,local_588,&local_448);
              cVar8 = FUN_14070def8(local_588,&local_5e8);
              pcVar23 = *(code **)((longlong)&DAT_14c9a85d0 +
                                  (ulonglong)((uint)(byte)local_568 * 0x120));
              if (pcVar23 != (code *)0x0) {
                puVar22 = local_588;
                if (0x18 < (ushort)local_570) {
                  puVar22 = (undefined1 *)local_588._0_8_;
                }
                (*pcVar23)(puVar22);
              }
              if (0x18 < (ushort)local_570) {
                FUN_1400020a8(local_588._0_8_);
              }
              lVar36 = DAT_14c9a3da0;
              if ((longlong)(int)uStack_420 != 0) {
                lVar27 = (longlong)(int)uStack_420 + -1;
                lVar28 = lVar27 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar28),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar28));
                if (*(longlong *)(lVar36 + lVar28) != 0) {
                  FUN_1400020a8();
                }
                lVar36 = DAT_14c9a3da0;
                iVar10 = (int)lVar27;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
                }
                *(undefined4 *)(lVar36 + lVar28) = 0xffffffff;
                iVar19 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar19 = DAT_14c9a3dd0;
                }
                *(int *)(lVar36 + 4 + lVar28) = iVar19;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar13 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar13 = &DAT_14c9a3db0;
                }
                iVar19 = iVar10 + 0x1f;
                if (-1 < iVar10) {
                  iVar19 = iVar10;
                }
                bVar17 = (byte)lVar27 & 0x1f;
                DAT_14c9a3dd0 = iVar10;
                *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) =
                     *(uint *)(puVar13 + (longlong)(iVar19 >> 5) * 4) &
                     (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
                uStack_420 = 0;
              }
              if (((char)local_448 == '\x03') && (local_438 != (code *)0x0)) {
                LOCK();
                pcVar23 = local_438 + 0xc;
                *(int *)pcVar23 = *(int *)pcVar23 + -1;
                UNLOCK();
                if (*(int *)pcVar23 == 0) {
                  (**(code **)(*(longlong *)local_438 + 0x10))();
                }
              }
              if (cVar8 != '\0') {
                auVar54._8_4_ = uStack_5e0;
                auVar54._0_8_ = local_5e8;
                auVar54._12_4_ = uStack_5dc;
                auVar51 = divpd(auVar54,auVar6);
                auVar53._8_8_ = 0;
                auVar53._0_8_ = local_5d8;
                auVar54 = divpd(auVar53,auVar6);
                auVar51 = roundpd(auVar51,auVar51,3);
                auVar54 = roundpd(auVar54,auVar54,3);
                dVar55 = ((double)local_5e8 - auVar51._0_8_ * dVar4) * 0.008726646259971648;
                dVar49 = ((double)CONCAT44(uStack_5dc,uStack_5e0) - auVar51._8_8_ * dVar52) *
                         0.008726646259971648;
                dVar50 = ((double)local_5d8 - auVar54._0_8_ * dVar4) * 0.008726646259971648;
                _X = (void *)((0.0 - auVar54._8_8_ * dVar52) * 0.008726646259971648);
                local_678 = (code **)sin(dVar55);
                pcStack_670 = extraout_XMM0_Qb;
                local_628 = dVar49;
                dStack_620 = dVar49;
                local_688._0_8_ = sin(dVar49);
                local_688._8_8_ = extraout_XMM0_Qb_00;
                local_668 = (code *)sin(dVar50);
                local_638 = _X;
                pvStack_630 = _X;
                sin((double)_X);
                local_648 = (PSRWLOCK)cos(dVar55);
                dVar55 = cos(local_628);
                dVar49 = cos(dVar50);
                cos((double)local_638);
                dVar50 = (double)local_688._0_8_ * (double)local_678 * (double)local_668 +
                         dVar55 * (double)local_648 * dVar49;
                ppcVar24[0x1c] =
                     (code *)((double)local_678 * (double)local_688._0_8_ * dVar49 -
                             (double)local_648 * dVar55 * (double)local_668);
                ppcVar24[0x1d] =
                     (code *)(-((double)local_678 * dVar55 * dVar49) -
                             (double)local_648 * (double)local_688._0_8_ * (double)local_668);
                auVar51._8_4_ = SUB84(dVar50,0);
                auVar51._0_8_ =
                     -(dVar55 * (double)local_678 * (double)local_668) +
                     (double)local_688._0_8_ * (double)local_648 * dVar49;
                auVar51._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                *(undefined1 (*) [16])(ppcVar24 + 0x1e) = auVar51;
              }
            }
            pcVar23 = ppcVar24[0x32];
            if (((pcVar23 != (code *)0x0) && (*(int *)((longlong)ppcVar24 + 0x18c) != 0)) &&
               ((uVar9 = *(uint *)(ppcVar24 + 0x31), -1 < (int)uVar9 &&
                (((((int)uVar9 < DAT_14c9647dc &&
                   (lVar36 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8),
                   lVar36 != 0)) &&
                  (*(int *)(lVar36 + 0x10) == *(int *)((longlong)ppcVar24 + 0x18c))) &&
                 ((*(uint *)(lVar36 + 8) & 0x10200000) == 0)))))) {
              (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23,local_588);
              pcVar23 = DAT_14cb1c860;
              if ((char)local_570 == '\x01') {
                local_438 = local_578;
                local_448 = (code *)local_588._0_8_;
                uStack_440 = stack0xfffffffffffffa80;
                uStack_420 = (uint)DAT_14cb1c870;
                uStack_41c = (uint)((ulonglong)DAT_14cb1c870 >> 0x20);
                pcStack_430 = DAT_14cb1c860;
                local_428 = DAT_14cb1c868;
                ppcVar41 = local_428;
                local_428._0_4_ = SUB84(DAT_14cb1c868,0);
                local_428._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
                ppcVar24[2] = local_578;
                ppcVar24[3] = pcVar23;
                *(undefined4 *)(ppcVar24 + 4) = (undefined4)local_428;
                *(undefined4 *)((longlong)ppcVar24 + 0x24) = local_428._4_4_;
                *(uint *)(ppcVar24 + 5) = uStack_420;
                *(uint *)((longlong)ppcVar24 + 0x2c) = uStack_41c;
                *ppcVar24 = (code *)local_588._0_8_;
                ppcVar24[1] = (code *)stack0xfffffffffffffa80;
                ppcVar24[6] = (code *)0x0;
                pcVar23 = ppcVar24[7];
                local_428 = ppcVar41;
                if (pcVar23 != (code *)0x0) {
                  ppcVar24[7] = (code *)0x0;
                  LOCK();
                  pcVar25 = pcVar23 + 8;
                  *(int *)pcVar25 = *(int *)pcVar25 + -1;
                  UNLOCK();
                  if (*(int *)pcVar25 == 0) {
                    (*(code *)**(undefined8 **)pcVar23)(pcVar23);
                    LOCK();
                    pcVar25 = pcVar23 + 0xc;
                    *(int *)pcVar25 = *(int *)pcVar25 + -1;
                    UNLOCK();
                    if (*(int *)pcVar25 == 0) {
                      (**(code **)(*(longlong *)pcVar23 + 0x10))(pcVar23);
                    }
                  }
                }
                *(undefined4 *)(ppcVar24 + 8) = 0xffffffff;
                ppcVar24[0x20] = (code *)local_588._0_8_;
                ppcVar24[0x21] = (code *)stack0xfffffffffffffa80;
                ppcVar24[0x22] = local_578;
                ppcVar24[0x23] = (code *)0x0;
              }
            }
            if (*(char *)(ppcVar24 + 0x18) == '\0') {
              if ((0x14 < *(uint *)(ppcVar24 + 0x44)) || (*(int *)((longlong)ppcVar24 + 0x144) == 0)
                 ) goto LAB_140bcfebe;
              uVar9 = *(uint *)(ppcVar24 + 0x28);
              uVar7 = 0;
              if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
                plVar26 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                if ((((plVar26 != (longlong *)0x0) &&
                     ((int)plVar26[2] == *(int *)((longlong)ppcVar24 + 0x144))) &&
                    ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)) &&
                   (lVar36 = *plVar26, lVar36 != 0)) {
                  if (DAT_14cacf818 == 0) {
                    local_448 = FUN_141030f22;
                    local_6d0 = FUN_14081d0ea;
                    local_6d8 = &LAB_1463b216c;
                    local_6e0 = &local_448;
                    local_6e8 = &LAB_1479977e3;
                    local_6f0 = &LAB_1463b2171;
                    local_6f8 = &DAT_149e063b2;
                    local_700 = 0;
                    local_708 = (undefined8 **)CONCAT44(local_708._4_4_,0x10000004);
                    local_710 = 0x10;
                    local_718 = CONCAT44(local_718._4_4_,0x750);
                    FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
                  }
                  if (((*(int *)(DAT_14cacf818 + 0x38) <=
                        *(int *)(*(longlong *)(lVar36 + 0x10) + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) &&
                     (lVar36 = *(longlong *)(lVar36 + 0x430), lVar36 != 0)) {
                    uVar7 = (**(code **)(*(longlong *)(lVar36 + 0x178) + 0xd8))(lVar36 + 0x178);
                    goto LAB_140bcffcc;
                  }
                }
                goto LAB_140bcfebe;
              }
            }
            else {
              if (*(char *)(ppcVar24 + 0x18) == '\x01') {
                uVar7 = 1;
                goto LAB_140bcffcc;
              }
LAB_140bcfebe:
              uVar7 = 0;
            }
LAB_140bcffcc:
            *(undefined1 *)((longlong)ppcVar24 + 0x51) = uVar7;
            uVar29 = *(undefined8 *)local_6b8;
            iVar10 = *(int *)(param_1 + 0x60);
            *(uint *)(param_1 + 0x60) = iVar10 + 1U;
            if (*(uint *)(param_1 + 100) < iVar10 + 1U) {
              FUN_146421e3a(local_698,iVar10);
            }
            *(undefined8 *)(*local_698 + (longlong)iVar10 * 8) = uVar29;
          }
        }
        uVar9 = (uint)local_6c8 & ~(uint)uVar45;
        pcVar23 = *(code **)(param_1 + 0x88);
        if (*(code **)(param_1 + 0x88) == (code *)0x0) {
          pcVar23 = local_6a0;
        }
        iVar10 = *(int *)(param_1 + 0x90);
        iVar19 = (int)uVar42;
        lVar36 = (longlong)iVar19;
        local_6c8 = (uint *)CONCAT44(local_6c8._4_4_,uVar9);
        uVar9 = *(uint *)(pcVar23 + lVar36 * 4) & uVar9;
        if (uVar9 == 0) {
          iVar18 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar18 = iVar10 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar44 = iVar18;
          if (iVar18 < iVar19) {
            iVar44 = iVar19;
          }
          if (iVar18 <= iVar19) break;
          local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
          lVar27 = 0;
          while (uVar9 = *(uint *)(pcVar23 + lVar27 * 4 + lVar36 * 4 + 4), uVar9 == 0) {
            local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
            lVar27 = lVar27 + 1;
            if (iVar44 - lVar36 == lVar27) goto LAB_140bd1047;
          }
          uVar42 = (ulonglong)(iVar19 + (int)lVar27 + 1);
          local_6c8 = (uint *)CONCAT44(local_6c8._4_4_,0xffffffff);
        }
        uVar45 = (ulonglong)(-uVar9 & uVar9);
        uVar46 = uVar45 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar46 != 0) {
          for (; uVar46 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        iVar19 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar10);
    }
  }
LAB_140bd1047:
  local_6a8 = (code *)(param_1 + 0xe0);
  local_688._0_8_ = (PSRWLOCK)(param_1 + 0x1d0);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    puVar14 = *(uint **)(param_1 + 0x140);
    local_6c8 = puVar14 + (longlong)*(int *)(param_1 + 0x148) * 2;
    lVar36 = param_1 + 0x118;
    local_6b8 = (code *)(param_1 + 0x1b0);
LAB_140bd392a:
    if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
      lVar27 = *(longlong *)puVar14;
      lVar28 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(param_1 + 0x120) == 0) {
        lVar28 = lVar36;
      }
      iVar10 = *(int *)(lVar28 + (ulonglong)
                                 (*(int *)(param_1 + 0x128) - 1U &
                                 ((uint)((ulonglong)lVar27 >> 0x20) ^ (uint)lVar27)) * 4);
      if (iVar10 != -1) {
        lVar28 = *(longlong *)local_6a8;
        do {
          lVar39 = (longlong)iVar10 * 0x20;
          local_448 = *(code **)(lVar28 + lVar39);
          local_588._0_8_ = lVar27;
          cVar8 = FUN_1447508ba(&local_448,local_588);
          lVar28 = *(longlong *)local_6a8;
          if (cVar8 != '\0') {
            if ((lVar28 + lVar39 != 0) && (lVar27 = lVar28 + lVar39 + 8, lVar27 != 0)) {
              pcVar23 = *(code **)(param_1 + 400);
              if (pcVar23 != (code *)0x0) {
                pcVar25 = *(code **)(param_1 + 0x1a0);
                if (*(code **)(param_1 + 0x1a0) == (code *)0x0) {
                  pcVar25 = local_6b8;
                }
                uVar29 = (**(code **)(*(longlong *)pcVar25 + 8))();
                (*pcVar23)(uVar29,puVar14,lVar27);
              }
              if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
                lVar27 = *(longlong *)puVar14;
                lVar28 = *(longlong *)(param_1 + 0x120);
                if (*(longlong *)(param_1 + 0x120) == 0) {
                  lVar28 = lVar36;
                }
                uVar42 = (longlong)(int)((uint)((ulonglong)lVar27 >> 0x20) ^ (uint)lVar27) &
                         (longlong)*(int *)(param_1 + 0x128) - 1U;
                lVar39 = (longlong)*(int *)(lVar28 + uVar42 * 4);
                if (lVar39 != -1) {
                  lVar33 = *(longlong *)local_6a8;
                  lVar39 = lVar39 * 0x20;
                  local_448 = *(code **)(lVar33 + lVar39);
                  local_588._0_8_ = lVar27;
                  cVar8 = FUN_1447508ba(&local_448,local_588);
                  if (cVar8 != '\0') {
                    piVar32 = (int *)(lVar28 + uVar42 * 4);
                    goto LAB_140bd3af9;
                  }
                  lVar28 = lVar33 + lVar39;
                  goto LAB_140bd3aa4;
                }
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar28 + 0x18 + lVar39);
        } while (iVar10 != -1);
      }
    }
    goto LAB_140bd3b6f;
  }
LAB_140bd107b:
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    pcVar23 = *(code **)(param_1 + 0x130);
    local_6b8 = pcVar23 + (longlong)*(int *)(param_1 + 0x138) * 8;
    local_6a0 = (code *)(param_1 + 0x170);
    local_6c0 = (longlong *)(param_1 + 0xf0);
    local_690 = (longlong *)(param_1 + 0x118);
    do {
      if ((((*(uint *)(pcVar23 + 4) != 0) && (uVar9 = *(uint *)pcVar23, -1 < (int)uVar9)) &&
          ((int)uVar9 < DAT_14c9647dc)) &&
         (((lVar36 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar36 != 0 &&
           (*(uint *)(lVar36 + 0x10) == *(uint *)(pcVar23 + 4))) &&
          ((*(uint *)(lVar36 + 8) & 0x10200000) == 0)))) {
        if (*(int *)(param_1 + 0x114) == 0) {
          uVar9 = *(uint *)(param_1 + 0xe8);
          local_6c8 = (uint *)(ulonglong)uVar9;
          *(uint *)(param_1 + 0xe8) = uVar9 + 1;
          if (*(uint *)(param_1 + 0xec) == uVar9) {
            FUN_1447711aa(local_6a8,local_6c8);
          }
          iVar10 = *(int *)(param_1 + 0x108);
          if (iVar10 == 0) {
            iVar19 = -1;
          }
          else {
            iVar19 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar19 = iVar10 + -1;
            }
            iVar19 = iVar19 >> 5;
          }
          iVar18 = iVar10 + 1;
          iVar44 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar44 = iVar10;
          }
          if (iVar44 >> 5 == iVar19) {
            *(int *)(param_1 + 0x108) = iVar18;
          }
          else {
            if (*(int *)(param_1 + 0x10c) <= iVar10) {
              iVar19 = iVar10;
              if (iVar10 + 0x20U < 0xa0) {
                iVar18 = 0x80;
              }
              else {
                uVar9 = iVar10 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x10c) + 0x1fU < 0xa0) {
                  uVar12 = 4;
                  if (4 < uVar9) {
                    uVar12 = uVar9;
                  }
                }
                else {
                  uVar12 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
                }
                uVar42 = (ulonglong)(uVar12 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar35 = (uint)(uVar42 + 0xf);
                    if (uVar12 < 0x1ffd) {
                      uVar42 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar42 + 0xf >> 4]];
                    }
                    else {
                      uVar46 = (ulonglong)(uVar35 & 0xfffffff0);
                      if (uVar46 < 0x7ff1) {
                        bVar17 = (&DAT_14c841e00)[uVar35 >> 4];
                        uVar45 = 0x32;
                        if (0x32 < bVar17) {
                          uVar45 = (ulonglong)bVar17;
                        }
                        uVar31 = 0x32 - (ulonglong)bVar17;
                        do {
                          uVar42 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0)
                          goto LAB_140bd38d3;
                          lVar36 = uVar45 + 1 + uVar31;
                          uVar31 = uVar31 - 1;
                        } while (lVar36 != 0x33);
                      }
                      uVar42 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar42 = 0x10;
                      }
                      uVar42 = -uVar42 & (uVar46 + uVar42) - 1;
                    }
                  }
                  else {
                    uVar42 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar42,0);
                    iVar19 = *(int *)(param_1 + 0x108);
                  }
                }
LAB_140bd38d3:
                iVar38 = (int)(uVar42 >> 2);
                iVar18 = iVar38 << 5;
                if (iVar38 < (int)uVar9) {
                  iVar18 = -0x20;
                }
              }
              *(int *)(param_1 + 0x10c) = iVar18;
              FUN_1446efbd8(local_6c0,iVar19);
              iVar18 = *(int *)(param_1 + 0x108) + 1;
            }
            iVar19 = iVar18 + 0x1f;
            if (-1 < iVar18) {
              iVar19 = iVar18;
            }
            *(int *)(param_1 + 0x108) = iVar18;
            if (iVar18 % 0x20 != 0) {
              plVar26 = *(longlong **)(param_1 + 0x100);
              if (*(longlong **)(param_1 + 0x100) == (longlong *)0x0) {
                plVar26 = local_6c0;
              }
              bVar17 = -(char)(iVar18 % 0x20);
              *(uint *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) <<
                         (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
            }
          }
          lVar36 = (longlong)(int)(uint)local_6c8;
          plVar26 = *(longlong **)(param_1 + 0x100);
          if (*(longlong **)(param_1 + 0x100) == (longlong *)0x0) {
            plVar26 = local_6c0;
          }
          bVar17 = (byte)iVar10 & 0x1f;
          puVar14 = (uint *)((longlong)plVar26 + (longlong)(iVar44 >> 5) * 4);
          *puVar14 = *puVar14 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
        }
        else {
          local_6c8 = (uint *)(ulonglong)*(uint *)(param_1 + 0x110);
          lVar36 = (longlong)(int)*(uint *)(param_1 + 0x110);
          iVar10 = *(int *)(*(longlong *)(param_1 + 0xe0) + 4 + lVar36 * 0x20);
          *(int *)(param_1 + 0x110) = iVar10;
          iVar19 = *(int *)(param_1 + 0x114) + -1;
          *(int *)(param_1 + 0x114) = iVar19;
          if (iVar19 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar10 * 0x20) = 0xffffffff;
          }
        }
        plVar26 = *(longlong **)(param_1 + 0x100);
        if (*(longlong **)(param_1 + 0x100) == (longlong *)0x0) {
          plVar26 = local_6c0;
        }
        iVar10 = (int)local_6c8;
        iVar19 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar19 = iVar10;
        }
        puVar14 = (uint *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4);
        *puVar14 = *puVar14 | 1 << ((byte)local_6c8 & 0x1f);
        lVar27 = *(longlong *)(param_1 + 0xe0);
        lVar36 = lVar36 * 0x20;
        puVar30 = (undefined8 *)(lVar27 + lVar36);
        uVar29 = *(undefined8 *)pcVar23;
        *(undefined8 *)(lVar27 + lVar36) = uVar29;
        puVar37 = (undefined8 *)(lVar27 + 8 + lVar36);
        *puVar37 = 0;
        puVar37[1] = 0;
        *(undefined4 *)(lVar27 + 0x18 + lVar36) = 0xffffffff;
        uVar12 = (uint)((ulonglong)uVar29 >> 0x20) ^ (uint)uVar29;
        uVar9 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
        if ((uVar9 != 0) && (uVar9 != 1)) {
          plVar26 = *(longlong **)(param_1 + 0x120);
          if (*(longlong **)(param_1 + 0x120) == (longlong *)0x0) {
            plVar26 = local_690;
          }
          iVar10 = *(int *)((longlong)plVar26 +
                           (ulonglong)(*(int *)(param_1 + 0x128) - 1U & uVar12) * 4);
          if (iVar10 != -1) {
            lVar36 = *(longlong *)local_6a8;
            do {
              lVar27 = (longlong)iVar10 * 0x20;
              local_448 = *(code **)(lVar36 + lVar27);
              local_588._0_8_ = uVar29;
              cVar8 = FUN_1447508ba(&local_448,local_588);
              lVar36 = *(longlong *)local_6a8;
              if (cVar8 != '\0') {
                plVar26 = *(longlong **)(lVar36 + 0x10 + lVar27);
                if (plVar26 != (longlong *)0x0) {
                  LOCK();
                  plVar34 = plVar26 + 1;
                  *(int *)plVar34 = (int)*plVar34 + -1;
                  UNLOCK();
                  if ((int)*plVar34 == 0) {
                    (**(code **)*plVar26)(plVar26);
                    LOCK();
                    piVar32 = (int *)((longlong)plVar26 + 0xc);
                    *piVar32 = *piVar32 + -1;
                    UNLOCK();
                    if (*piVar32 == 0) {
                      (**(code **)(*plVar26 + 0x10))(plVar26);
                    }
                  }
                }
                puVar37 = (undefined8 *)(lVar36 + lVar27);
                uVar29 = *puVar30;
                uVar5 = puVar30[1];
                puVar37[2] = puVar30[2];
                *puVar37 = uVar29;
                puVar37[1] = uVar5;
                FUN_1438009fe(local_6a8,local_6c8);
                goto LAB_140bd3635;
              }
              iVar10 = *(int *)(lVar36 + 0x18 + lVar27);
            } while (iVar10 != -1);
            uVar9 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
          }
        }
        if (uVar9 < 4) {
          iVar10 = 1;
        }
        else {
          uVar42 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
          lVar36 = 0x3f;
          if (uVar42 != 0) {
            for (; uVar42 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar36 & 0x1f);
        }
        if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x128))) {
          uVar12 = *(int *)(param_1 + 0x128) - 1U & uVar12;
          *(uint *)((longlong)puVar30 + 0x1c) = uVar12;
          plVar26 = *(longlong **)(param_1 + 0x120);
          if (*(longlong **)(param_1 + 0x120) == (longlong *)0x0) {
            plVar26 = local_690;
          }
          *(undefined4 *)(puVar30 + 3) =
               *(undefined4 *)
                ((longlong)plVar26 +
                ((longlong)*(int *)(param_1 + 0x128) - 1U & (longlong)(int)uVar12) * 4);
          plVar26 = *(longlong **)(param_1 + 0x120);
          if (*(longlong **)(param_1 + 0x120) == (longlong *)0x0) {
            plVar26 = local_690;
          }
          iVar10 = (int)local_6c8;
          *(int *)((longlong)plVar26 +
                  ((longlong)*(int *)(param_1 + 0x128) - 1U & (longlong)(int)uVar12) * 4) = iVar10;
        }
        else {
          *(int *)(param_1 + 0x128) = iVar10;
          FUN_141805944(local_6a8);
          iVar10 = (int)local_6c8;
        }
LAB_140bd3635:
        pcVar25 = *(code **)(param_1 + 0x150);
        if (pcVar25 != (code *)0x0) {
          lVar36 = *(longlong *)(param_1 + 0xe0);
          pcVar16 = *(code **)(param_1 + 0x160);
          if (*(code **)(param_1 + 0x160) == (code *)0x0) {
            pcVar16 = local_6a0;
          }
          uVar29 = (**(code **)(*(ulonglong *)pcVar16 + 8))();
          (*pcVar25)(uVar29,pcVar23,lVar36 + (longlong)iVar10 * 0x20 + 8);
        }
      }
      pcVar23 = pcVar23 + 8;
    } while (pcVar23 != local_6b8);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) < 0) {
    FUN_141805b6e(param_1 + 0x130,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) < 0) {
    FUN_141805b6e(param_1 + 0x140,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)local_688._0_8_);
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    local_698 = *(code ***)(param_1 + 200);
    local_678 = local_698 + *(int *)(param_1 + 0xd0);
    do {
      if (((((*(uint *)((longlong)local_698 + 4) != 0) &&
            (uVar9 = *(uint *)local_698, -1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc)) &&
          ((puVar30 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           puVar30 != (undefined8 *)0x0 &&
           (*(uint *)(puVar30 + 2) == *(uint *)((longlong)local_698 + 4))))) &&
         (((*(uint *)(puVar30 + 1) & 0x10200000) == 0 &&
          (puVar14 = (uint *)*puVar30, local_6c8 = puVar14, puVar14 != (uint *)0x0)))) {
        FUN_141527b1c(puVar14);
        lVar36 = (**(code **)(**(longlong **)(puVar14 + 10) + 0x180))();
        if (lVar36 != 0) {
          lVar27 = *(longlong *)(local_6c8 + 10);
          lVar28 = *(longlong *)(lVar27 + 0x98);
          if (lVar28 != 0) {
            if (DAT_14caf9cd0 == 0) {
              local_448 = FUN_141030f22;
              local_6d0 = FUN_14081d0ea;
              local_6d8 = &LAB_1463c0cc2;
              local_6e0 = &local_448;
              local_6e8 = &LAB_147c9db5b;
              local_6f0 = &LAB_1463f9c44;
              local_6f8 = &DAT_149e063b2;
              local_700 = 0x2000000000;
              local_708 = (undefined8 **)CONCAT44(local_708._4_4_,0x10000004);
              local_710 = 8;
              local_718 = CONCAT44(local_718._4_4_,0x958);
              FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0);
              lVar28 = *(longlong *)(lVar27 + 0x98);
              if (lVar28 == 0) goto LAB_140bd1db0;
            }
            puVar14 = local_6c8;
            if (((DAT_14caf9cd0 != 0) && (lVar27 = *(longlong *)(lVar28 + 0x10), lVar27 != 0)) &&
               ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar27 + 0x38) &&
                ((*(longlong *)
                   (*(longlong *)(lVar27 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
                  DAT_14caf9cd0 + 0x30 && (*(longlong *)(lVar28 + 0x438) != 0)))))) {
              local_6c8[0x1b] = *(uint *)(lVar36 + 0x930);
              uVar42 = 0;
              FUN_1449daf8c(local_588,local_6c8,0);
              local_6a0 = (code *)(puVar14 + 0x28);
              uVar9 = puVar14[0x2e];
              local_690 = (longlong *)(ulonglong)uVar9;
              if (uVar9 == 0) {
                uVar46 = 1;
                plVar26 = (longlong *)0x0;
                local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
              }
              else {
                pcVar23 = *(code **)(local_6c8 + 0x2c);
                if (*(code **)(local_6c8 + 0x2c) == (code *)0x0) {
                  pcVar23 = local_6a0;
                }
                uVar12 = *(uint *)pcVar23;
                if (uVar12 == 0) {
                  iVar10 = uVar9 + 0x1e;
                  if (-1 < (int)(uVar9 - 1)) {
                    iVar10 = uVar9 - 1;
                  }
                  uVar42 = 0;
                  uVar46 = (ulonglong)(uint)(iVar10 >> 5);
                  if (iVar10 >> 5 < 1) {
                    uVar46 = uVar42;
                  }
                  local_6c0 = (longlong *)((ulonglong)local_6c0 & 0xffffffff00000000);
                  do {
                    if (uVar46 == uVar42) goto LAB_140bd1d77;
                    local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
                    uVar12 = *(uint *)(pcVar23 + uVar42 * 4 + 4);
                    uVar42 = uVar42 + 1;
                  } while (uVar12 == 0);
                }
                else {
                  uVar42 = 0;
                  local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
                }
                uVar46 = (ulonglong)(-uVar12 & uVar12);
                uVar45 = uVar46 * 2 + 1;
                lVar36 = 0x3f;
                if (uVar45 != 0) {
                  for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                  }
                }
                uVar12 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                plVar26 = (longlong *)(ulonglong)uVar12;
                if ((int)uVar9 <= (int)uVar12) {
                  plVar26 = local_690;
                }
              }
              if ((uint)plVar26 != uVar9) {
                local_6b8 = (code *)CONCAT44(local_6b8._4_4_,0xffffffff);
                do {
                  lVar36 = *(longlong *)(local_6c8 + 0x24) + (longlong)(int)plVar26 * 0x1030;
                  plVar26 = (longlong *)(lVar36 + 8);
                  bVar17 = *(byte *)(*(longlong *)(lVar36 + 0x10) + 0x804);
                  *(byte *)(lVar36 + 0x20) = bVar17;
                  if ((((char)local_6c8[0x1a] == '\x01') && (bVar17 == 0)) &&
                     (*(longlong *)(local_6c8 + 10) != 0)) {
                    lVar27 = FUN_1409a8112(*(longlong *)(lVar36 + 0x10),0);
                    if (lVar27 == 0) {
                      bVar17 = *(byte *)(lVar36 + 0x20);
                    }
                    else {
                      if (*(longlong *)(local_6c8 + 10) == 0) {
                        bVar17 = false;
                      }
                      else {
                        bVar17 = *(longlong *)(*(longlong *)(local_6c8 + 10) + 0x98) !=
                                 *(longlong *)(lVar27 + 0x168);
                      }
                      *(byte *)(lVar36 + 0x20) = bVar17;
                    }
                  }
                  cVar8 = *(char *)(lVar36 + 0x21);
                  if ((bVar17 & 1) == 0) {
LAB_140bd1411:
                    uVar45 = 1;
                  }
                  else {
                    lVar27 = *(longlong *)(local_6c8 + 10);
                    uVar45 = 0;
                    if (lVar27 != 0) {
                      lVar28 = FUN_1409a8112(*(undefined8 *)(lVar36 + 0x10),0);
                      uVar9 = 0;
                      if (lVar28 != 0) {
                        uVar9 = *(uint *)(lVar28 + 0xc);
                        uVar45 = (ulonglong)uVar9;
                        if ((int)uVar9 < DAT_14c9647dc) {
                          lVar28 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                        }
                        else {
                          lVar28 = 0;
                        }
                        uVar9 = *(uint *)(lVar28 + 0x10);
                        if (*(uint *)(lVar28 + 0x10) == 0) {
                          LOCK();
                          iVar10 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar19 = DAT_14c964868 + 1;
                          local_668 = (code *)CONCAT44(local_668._4_4_,iVar19);
                          bVar47 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar10;
                          if (bVar47) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar19);
                          }
                          LOCK();
                          uVar9 = *(uint *)(lVar28 + 0x10);
                          bVar47 = uVar9 == 0;
                          if (bVar47) {
                            *(uint *)(lVar28 + 0x10) = (uint)local_668;
                            uVar9 = 0;
                          }
                          UNLOCK();
                          if (bVar47) {
                            uVar9 = (uint)local_668;
                          }
                        }
                      }
                      if (*(int *)(lVar27 + 0x1460) != *(int *)(lVar27 + 0x148c)) {
                        lVar28 = lVar27 + 0x1490;
                        if (*(longlong *)(lVar27 + 0x1498) != 0) {
                          lVar28 = *(longlong *)(lVar27 + 0x1498);
                        }
                        iVar10 = *(int *)(lVar28 + (ulonglong)
                                                   (*(int *)(lVar27 + 0x14a0) - 1U &
                                                   (uVar9 ^ (uint)uVar45)) * 4);
                        if (iVar10 != -1) {
                          uVar31 = uVar45 | (ulonglong)uVar9 << 0x20;
                          do {
                            if (*(ulonglong *)
                                 (*(longlong *)(lVar27 + 0x1458) + (longlong)iVar10 * 0x18) ==
                                uVar31) goto LAB_140bd1411;
                            iVar10 = *(int *)(*(longlong *)(lVar27 + 0x1458) +
                                              (longlong)iVar10 * 0x18 + 0x10);
                            uVar45 = 0;
                          } while (iVar10 != -1);
                          goto LAB_140bd1414;
                        }
                      }
                      uVar45 = 0;
                    }
                  }
LAB_140bd1414:
                  *(char *)(lVar36 + 0x21) = (char)uVar45;
                  if (((*(char *)(lVar36 + 0x20) == '\x01') && (cVar8 == '\0')) &&
                     ((char)uVar45 != '\0')) {
                    *(undefined4 *)(lVar36 + 0xa50) = 0;
                    *(undefined4 *)(lVar36 + 0xea8) = 0;
                    *(undefined4 *)(lVar36 + 0xfe0) = 0;
                    *(undefined4 *)(lVar36 + 0x58) = 0;
                  }
                  *(undefined4 *)(lVar36 + 0xa54) = *(undefined4 *)(lVar36 + 0xa50);
                  if (*(char *)(lVar36 + 0x3b0) == '\x01') {
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0x3a8));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_110 = 0xff;
                    FUN_1449496c6(&local_438,lVar36 + 0x70);
                    local_108 = *(undefined1 *)(lVar36 + 0x3a0);
                    local_100 = 0;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    if (*(char *)(lVar36 + 0x3b0) == '\x01') {
                      FUN_1449493b2(lVar36 + 0x70);
                      *(undefined1 *)(lVar36 + 0x3b0) = 0;
                    }
                    FUN_1407ff8cc(&local_438);
                  }
                  if (*(char *)(lVar36 + 0x700) == '\x01') {
                    FUN_1402bea0c(lVar36 + 0x708,lVar36 + 0x3c0);
                    if (*(char *)(lVar36 + 0x700) == '\x01') {
                      FUN_1449493b2(lVar36 + 0x3c0);
                      *(undefined1 *)(lVar36 + 0x700) = 0;
                    }
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0xa40));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_438 = (code *)((ulonglong)local_438 & 0xffffffffffffff00);
                    local_100 = 4;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    FUN_1407ff8cc(&local_438);
                  }
                  *(undefined4 *)(lVar36 + 0xeac) = *(undefined4 *)(lVar36 + 0xea8);
                  if (*(char *)(lVar36 + 0xde8) == '\x01') {
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0xde0));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_438 = (code *)CONCAT44(local_438._4_4_,*(undefined4 *)(lVar36 + 0xd98));
                    iStack_418 = CONCAT31(iStack_418._1_3_,*(char *)(lVar36 + 0xdb8));
                    if (*(char *)(lVar36 + 0xdb8) == '\x01') {
                      uStack_420 = (uint)*(undefined8 *)(lVar36 + 0xdb0);
                      uStack_41c = (uint)((ulonglong)*(undefined8 *)(lVar36 + 0xdb0) >> 0x20);
                      pcStack_430 = *(code **)(lVar36 + 0xda0);
                      local_428 = *(code ***)(lVar36 + 0xda8);
                    }
                    local_3f8 = *(char *)(lVar36 + 0xdd8);
                    if (local_3f8 == '\x01') {
                      pcStack_400 = *(code **)(lVar36 + 0xdd0);
                      plStack_410 = *(longlong **)(lVar36 + 0xdc0);
                      pplStack_408 = *(longlong ***)(lVar36 + 0xdc8);
                    }
                    local_100 = 1;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    if (*(char *)(lVar36 + 0xde8) == '\x01') {
                      if (*(char *)(lVar36 + 0xdd8) == '\x01') {
                        *(undefined1 *)(lVar36 + 0xdd8) = 0;
                      }
                      if (*(char *)(lVar36 + 0xdb8) == '\x01') {
                        *(undefined1 *)(lVar36 + 0xdb8) = 0;
                      }
                      *(undefined1 *)(lVar36 + 0xde8) = 0;
                    }
                    FUN_1407ff8cc(&local_438);
                  }
                  if (*(char *)(lVar36 + 0xe48) == '\x01') {
                    *(undefined4 *)(lVar36 + 0xe50) = *(undefined4 *)(lVar36 + 0xdf8);
                    cVar8 = *(char *)(lVar36 + 0xe18);
                    *(char *)(lVar36 + 0xe70) = cVar8;
                    if (cVar8 == '\x01') {
                      *(undefined8 *)(lVar36 + 0xe68) = *(undefined8 *)(lVar36 + 0xe10);
                      *(undefined8 *)(lVar36 + 0xe58) = *(undefined8 *)(lVar36 + 0xe00);
                      *(undefined8 *)(lVar36 + 0xe60) = *(undefined8 *)(lVar36 + 0xe08);
                    }
                    *(char *)(lVar36 + 0xe90) = *(char *)(lVar36 + 0xe38);
                    if (*(char *)(lVar36 + 0xe38) == '\0') {
                      uVar11 = *(undefined4 *)(lVar36 + 0xe40);
                    }
                    else {
                      *(undefined8 *)(lVar36 + 0xe88) = *(undefined8 *)(lVar36 + 0xe30);
                      *(undefined8 *)(lVar36 + 0xe78) = *(undefined8 *)(lVar36 + 0xe20);
                      *(undefined8 *)(lVar36 + 0xe80) = *(undefined8 *)(lVar36 + 0xe28);
                      uVar11 = *(undefined4 *)(lVar36 + 0xe40);
                      *(undefined1 *)(lVar36 + 0xe38) = 0;
                    }
                    *(undefined4 *)(lVar36 + 0xe98) = uVar11;
                    *(undefined1 *)(lVar36 + 0xea0) = 1;
                    if (cVar8 != '\0') {
                      *(undefined1 *)(lVar36 + 0xe18) = 0;
                    }
                    *(undefined1 *)(lVar36 + 0xe48) = 0;
                    local_448 = (code *)CONCAT44(local_448._4_4_,uVar11);
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_438 = (code *)CONCAT71(local_438._1_7_,1);
                    local_100 = 4;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    FUN_1407ff8cc(&local_438);
                  }
                  *(undefined4 *)(lVar36 + 0xfe4) = *(undefined4 *)(lVar36 + 0xfe0);
                  if (*(char *)(lVar36 + 0xf40) == '\x01') {
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0xf38));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    pplStack_408 = *(longlong ***)(lVar36 + 0xf30);
                    local_438 = *(code **)(lVar36 + 0xf00);
                    pcStack_430 = *(code **)(lVar36 + 0xf08);
                    local_428 = *(code ***)(lVar36 + 0xf10);
                    iStack_418 = *(int *)(lVar36 + 0xf20);
                    iStack_414 = *(int *)(lVar36 + 0xf24);
                    plStack_410 = *(longlong **)(lVar36 + 0xf28);
                    uStack_420 = (uint)*(undefined8 *)(lVar36 + 0xf18);
                    uStack_41c = (uint)((ulonglong)*(undefined8 *)(lVar36 + 0xf18) >> 0x20);
                    local_100 = 2;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    if (*(char *)(lVar36 + 0xf40) == '\x01') {
                      *(undefined1 *)(lVar36 + 0xf40) = 0;
                    }
                    FUN_1407ff8cc(&local_438);
                  }
                  if (*(char *)(lVar36 + 0xf90) == '\x01') {
                    *(undefined8 *)(lVar36 + 0xfc8) = *(undefined8 *)(lVar36 + 0xf80);
                    *(undefined8 *)(lVar36 + 0xfd0) = *(undefined8 *)(lVar36 + 0xf88);
                    *(undefined4 *)(lVar36 + 0xfb8) = *(undefined4 *)(lVar36 + 0xf70);
                    *(undefined4 *)(lVar36 + 0xfbc) = *(undefined4 *)(lVar36 + 0xf74);
                    *(undefined4 *)(lVar36 + 0xfc0) = *(undefined4 *)(lVar36 + 0xf78);
                    *(undefined4 *)(lVar36 + 0xfc4) = *(undefined4 *)(lVar36 + 0xf7c);
                    *(undefined8 *)(lVar36 + 0xfa8) = *(undefined8 *)(lVar36 + 0xf60);
                    *(undefined8 *)(lVar36 + 0xfb0) = *(undefined8 *)(lVar36 + 0xf68);
                    *(undefined8 *)(lVar36 + 0xf98) = *(undefined8 *)(lVar36 + 0xf50);
                    *(undefined8 *)(lVar36 + 4000) = *(undefined8 *)(lVar36 + 0xf58);
                    *(undefined1 *)(lVar36 + 0xfd8) = 1;
                    *(undefined1 *)(lVar36 + 0xf90) = 0;
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0xfd0));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_438 = (code *)CONCAT71(local_438._1_7_,2);
                    local_100 = 4;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    FUN_1407ff8cc(&local_438);
                  }
                  *(undefined4 *)(lVar36 + 0x5c) = *(undefined4 *)(lVar36 + 0x58);
                  if (*(char *)(lVar36 + 0x30) == '\x01') {
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0x2c));
                    uStack_440 = (code **)*plVar26;
                    pcVar23 = *(code **)(lVar36 + 0x24);
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_100 = 3;
                    local_438 = pcVar23;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    if (*(char *)(lVar36 + 0x30) == '\x01') {
                      *(undefined1 *)(lVar36 + 0x30) = 0;
                    }
                    FUN_1407ff8cc(&local_438);
                  }
                  if (*(char *)(lVar36 + 0x44) == '\x01') {
                    *(undefined4 *)(lVar36 + 0x50) = *(undefined4 *)(lVar36 + 0x40);
                    *(undefined8 *)(lVar36 + 0x48) = *(undefined8 *)(lVar36 + 0x38);
                    *(undefined1 *)(lVar36 + 0x54) = 1;
                    *(undefined1 *)(lVar36 + 0x44) = 0;
                    local_448 = (code *)CONCAT44(local_448._4_4_,*(undefined4 *)(lVar36 + 0x40));
                    uStack_440 = (code **)*plVar26;
                    local_100 = 0xff;
                    FUN_1407ff8cc(&local_438);
                    local_438 = (code *)CONCAT71(local_438._1_7_,3);
                    local_100 = 4;
                    (**(code **)(local_588._0_8_ + 400))(local_588,&uStack_440);
                    FUN_1407ff2c2(&local_448,local_588);
                    (**(code **)(local_588._0_8_ + 0x188))(local_588,&local_448);
                    FUN_1407ff8cc(&local_438);
                  }
                  uVar9 = (uint)local_6b8 & ~(uint)uVar46;
                  pcVar23 = *(code **)(local_6c8 + 0x2c);
                  if (*(code **)(local_6c8 + 0x2c) == (code *)0x0) {
                    pcVar23 = local_6a0;
                  }
                  uVar12 = local_6c8[0x2e];
                  iVar10 = (int)uVar42;
                  lVar36 = (longlong)iVar10;
                  local_6b8 = (code *)CONCAT44(local_6b8._4_4_,uVar9);
                  uVar9 = *(uint *)(pcVar23 + lVar36 * 4) & uVar9;
                  if (uVar9 == 0) {
                    iVar19 = uVar12 + 0x1e;
                    if (-1 < (int)(uVar12 - 1)) {
                      iVar19 = uVar12 - 1;
                    }
                    iVar19 = iVar19 >> 5;
                    local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
                    iVar18 = iVar19;
                    if (iVar19 < iVar10) {
                      iVar18 = iVar10;
                    }
                    if (iVar10 < iVar19) {
                      lVar27 = 0;
                      do {
                        uVar9 = *(uint *)(pcVar23 + lVar27 * 4 + lVar36 * 4 + 4);
                        if (uVar9 != 0) {
                          uVar42 = (ulonglong)(iVar10 + (int)lVar27 + 1);
                          local_6b8 = (code *)CONCAT44(local_6b8._4_4_,0xffffffff);
                          goto LAB_140bd155e;
                        }
                        local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
                        lVar27 = lVar27 + 1;
                      } while (iVar18 - lVar36 != lVar27);
                      local_6b8 = (code *)CONCAT44(local_6b8._4_4_,0xffffffff);
                      iVar10 = iVar18;
                    }
                    uVar42 = (ulonglong)(iVar10 + 1);
                    uVar9 = uVar12;
                  }
                  else {
LAB_140bd155e:
                    uVar46 = (ulonglong)(-uVar9 & uVar9);
                    uVar45 = uVar46 * 2 + 1;
                    lVar36 = 0x3f;
                    if (uVar45 != 0) {
                      for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                      }
                    }
                    uVar9 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                    if ((int)uVar12 <= (int)uVar9) {
                      uVar9 = uVar12;
                    }
                  }
                  plVar26 = (longlong *)(ulonglong)uVar9;
                } while (uVar9 != (uint)local_690);
              }
LAB_140bd1d77:
              if (0 < local_4e8) {
                (**(code **)(*(longlong *)local_6c8 + 0x308))(local_6c8,&local_448,local_588);
              }
              FUN_1449daebe(local_588);
            }
          }
        }
      }
LAB_140bd1db0:
      local_698 = local_698 + 1;
    } while (local_698 != local_678);
  }
  local_6b8 = *(code **)(param_1 + 0x1e0);
  if (*(uint *)((longlong)local_6b8 + 0x20) != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)local_688._0_8_);
    local_6c8 = (uint *)(param_1 + 0xf0);
    iVar10 = *(int *)(param_1 + 0x108);
    if (iVar10 == 0) {
      uVar42 = 1;
      uVar46 = 0;
      iVar18 = 0;
      iVar19 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar14 = local_6c8;
      }
      uVar9 = *puVar14;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        uVar46 = 0;
        uVar42 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar42 = uVar46;
        }
        iVar18 = 0;
        do {
          if (uVar42 == uVar46) goto LAB_140bd1f7d;
          iVar18 = iVar18 + 0x20;
          uVar9 = puVar14[uVar46 + 1];
          uVar46 = uVar46 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar46 = 0;
        iVar18 = 0;
      }
      uVar42 = (ulonglong)(-uVar9 & uVar9);
      uVar45 = uVar42 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 != iVar10) {
      uVar9 = 0xffffffff;
      iVar44 = iVar10;
      do {
        lVar36 = *(longlong *)(*(longlong *)local_6a8 + 8 + (longlong)iVar19 * 0x20);
        if (((lVar36 != 0) && (*(uint *)(lVar36 + 0x250) < 0x15)) &&
           ((longlong)(int)*(uint *)((longlong)local_6b8 + 0x20) != 0)) {
          local_6c0 = (longlong *)((longlong)iVar19 * 0x20 + *(longlong *)local_6a8 + 8);
          dVar52 = (double)*(float *)(lVar36 + 0x5d0);
          dVar50 = *(double *)(lVar36 + 0x598) - (double)*(float *)(lVar36 + 0x5d4);
          dVar55 = *(double *)(lVar36 + 0x590) - dVar52;
          dVar4 = *(double *)(lVar36 + 0x588) - dVar52;
          lVar27 = *(longlong *)((longlong)local_6b8 + 0x18);
          lVar28 = 0;
          bVar17 = 0;
          bVar43 = 0;
          do {
            pdVar1 = (double *)(lVar27 + 0x18 + lVar28);
            if (((((dVar4 < *pdVar1 || dVar4 == *pdVar1) &&
                  (*(double *)(lVar27 + lVar28) <= *(double *)(lVar36 + 0x588) + dVar52)) &&
                 (pdVar1 = (double *)(lVar27 + 0x20 + lVar28), dVar55 < *pdVar1 || dVar55 == *pdVar1
                 )) && ((*(double *)(lVar27 + 8 + lVar28) <= *(double *)(lVar36 + 0x590) + dVar52 &&
                        (pdVar1 = (double *)(lVar27 + 0x28 + lVar28),
                        dVar50 < *pdVar1 || dVar50 == *pdVar1)))) &&
               (*(double *)(lVar27 + 0x10 + lVar28) <=
                *(double *)(lVar36 + 0x598) + (double)*(float *)(lVar36 + 0x5d4))) {
              bVar2 = *(byte *)(lVar27 + 0x38 + lVar28);
              bVar17 = bVar17 | bVar2;
              bVar43 = bVar43 | bVar2 ^ 1;
            }
            lVar28 = lVar28 + 0x40;
          } while ((longlong)(int)*(uint *)((longlong)local_6b8 + 0x20) * 0x40 != lVar28);
          if (*(char *)(lVar36 + 0xcd1) != '\0') {
            bVar17 = bVar43;
          }
          if ((bVar17 & 1) != 0) {
            if ((*(uint *)((longlong)local_6b8 + 0x14) == 0) ||
               (uVar12 = *(uint *)((longlong)local_6b8 + 0x10), (int)uVar12 < 0)) {
LAB_140bd2381:
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
              if ((int)uVar12 < DAT_14c9647dc) {
                puVar30 = (undefined8 *)
                          ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if (((puVar30 == (undefined8 *)0x0) ||
                    (*(uint *)(puVar30 + 2) != *(uint *)((longlong)local_6b8 + 0x14))) ||
                   ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)) goto LAB_140bd2381;
                uVar29 = *puVar30;
              }
            }
            uVar7 = FUN_1406d2885(lVar36 + 0x588,uVar29);
            *(undefined1 *)(*local_6c0 + 0xcd1) = uVar7;
            iVar44 = *(int *)(param_1 + 0x108);
          }
        }
        uVar9 = uVar9 & ~(uint)uVar42;
        puVar14 = *(uint **)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
          puVar14 = local_6c8;
        }
        iVar19 = (int)uVar46;
        lVar36 = (longlong)iVar19;
        uVar12 = puVar14[lVar36] & uVar9;
        if (uVar12 == 0) {
          iVar38 = iVar44 + 0x1e;
          if (-1 < iVar44 + -1) {
            iVar38 = iVar44 + -1;
          }
          iVar38 = iVar38 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar20 = iVar38;
          if (iVar38 < iVar19) {
            iVar20 = iVar19;
          }
          if (iVar19 < iVar38) {
            lVar27 = 0;
            do {
              uVar12 = puVar14[lVar36 + lVar27 + 1];
              if (uVar12 != 0) {
                uVar46 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140bd234f;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar20 - lVar36 != lVar27);
            uVar9 = 0xffffffff;
            iVar19 = iVar20;
          }
          uVar46 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar44;
        }
        else {
LAB_140bd234f:
          uVar42 = (ulonglong)(-uVar12 & uVar12);
          uVar45 = uVar42 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar44 <= iVar19) {
            iVar19 = iVar44;
          }
        }
      } while (iVar19 != iVar10);
    }
LAB_140bd1f7d:
    ReleaseSRWLockExclusive((PSRWLOCK)local_688._0_8_);
    *(uint *)((longlong)local_6b8 + 0x20) = 0;
    if ((int)*(uint *)((longlong)local_6b8 + 0x24) < 0) {
      FUN_147e44366((uint *)((longlong)local_6b8 + 0x18));
    }
  }
  if (*DAT_14cb1c8c0 == '\x01') {
    local_588._8_4_ = 1;
    local_588._0_8_ = local_688._0_8_;
    AcquireSRWLockExclusive((PSRWLOCK)local_688._0_8_);
    local_578 = local_6a8;
    local_6b8 = (code *)(param_1 + 0xf0);
    iVar10 = *(int *)(param_1 + 0x108);
    if (iVar10 == 0) {
      uVar42 = 1;
      iVar18 = 0;
      uVar46 = 0;
      iVar19 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar14 = (uint *)local_6b8;
      }
      uVar9 = *puVar14;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        uVar46 = 0;
        uVar42 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar42 = uVar46;
        }
        iVar18 = 0;
        do {
          if (uVar42 == uVar46) goto LAB_140bd23a9;
          iVar18 = iVar18 + 0x20;
          uVar9 = puVar14[uVar46 + 1];
          uVar46 = uVar46 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar18 = 0;
        uVar46 = 0;
      }
      uVar42 = (ulonglong)(-uVar9 & uVar9);
      uVar45 = uVar42 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 != iVar10) {
      uVar9 = 0xffffffff;
      iVar44 = iVar10;
      do {
        if (*(longlong *)(*(longlong *)local_6a8 + 8 + (longlong)iVar19 * 0x20) != 0) {
          FUN_1437f694a();
          iVar44 = *(int *)(param_1 + 0x108);
        }
        uVar9 = uVar9 & ~(uint)uVar42;
        pcVar23 = (code *)*(uint **)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
          pcVar23 = local_6b8;
        }
        iVar19 = (int)uVar46;
        lVar36 = (longlong)iVar19;
        uVar12 = *(uint *)((longlong)pcVar23 + lVar36 * 4) & uVar9;
        if (uVar12 == 0) {
          iVar38 = iVar44 + 0x1e;
          if (-1 < iVar44 + -1) {
            iVar38 = iVar44 + -1;
          }
          iVar38 = iVar38 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar20 = iVar38;
          if (iVar38 < iVar19) {
            iVar20 = iVar19;
          }
          if (iVar19 < iVar38) {
            lVar27 = 0;
            do {
              uVar12 = *(uint *)((longlong)pcVar23 + (lVar36 + lVar27 + 1) * 4);
              if (uVar12 != 0) {
                uVar46 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140bd271b;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar20 - lVar36 != lVar27);
            uVar9 = 0xffffffff;
            iVar19 = iVar20;
          }
          uVar46 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar44;
        }
        else {
LAB_140bd271b:
          uVar42 = (ulonglong)(-uVar12 & uVar12);
          uVar45 = uVar42 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar44 <= iVar19) {
            iVar19 = iVar44;
          }
        }
      } while (iVar19 != iVar10);
    }
LAB_140bd23a9:
    FUN_14350c322(&local_609);
    local_608 = (code *)0x0;
    uStack_600 = 0;
    local_428 = (code **)0x0;
    uStack_420 = 0;
    local_448 = (code *)0x0;
    uStack_440 = (code **)0x0;
    uStack_41c = 0x80;
    iStack_418 = -1;
    iStack_414 = 0;
    pplStack_408 = (longlong **)0x0;
    pcStack_400 = (code *)((ulonglong)pcStack_400 & 0xffffffff00000000);
    uVar9 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
    if (uVar9 != 0) {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar9);
      }
      FUN_14472eb64(&local_448);
      iVar10 = (int)uStack_440;
      lVar36 = (longlong)(int)uStack_440;
      uStack_440 = (code **)CONCAT44(uStack_440._4_4_,(int)uStack_440 + uVar9);
      if ((uint)(uStack_440._4_4_ - iVar10) < uVar9) {
        FUN_144869a3c(&local_448);
      }
      if (iVar10 < (int)uVar9) {
        pcVar23 = local_448 + (ulonglong)uVar9 * 0x10 + -0xc;
        uVar42 = (ulonglong)uVar9;
        do {
          uVar46 = uVar42 - 1;
          if (iStack_414 == 0) {
            iVar10 = (int)uVar42 + -1;
          }
          else {
            *(int *)(local_448 + (longlong)iStack_418 * 0x10) = (int)uVar42 + -1;
            iVar10 = (int)uVar46;
          }
          *(int *)(pcVar23 + -4) = -1;
          iVar19 = -1;
          if (0 < iStack_414) {
            iVar19 = iStack_418;
          }
          *(int *)pcVar23 = iVar19;
          iStack_414 = iStack_414 + 1;
          pcVar23 = pcVar23 + -0x10;
          uVar42 = uVar46;
          iStack_418 = iVar10;
        } while (lVar36 < (longlong)uVar46);
      }
      uVar12 = uVar9 + 0x1f >> 5;
      ppcVar24 = local_428;
      uStack_420 = uVar9;
      if (uStack_41c + 0x1f >> 5 < uVar12) {
        ppcVar24 = (code **)0x0;
        if (local_428 != (code **)0x0 || 0x80 < uVar9) {
          if (0x80 < uVar9) {
            ppcVar24 = (code **)(ulonglong)uVar12;
          }
          FUN_1446efa72(&local_428,0,ppcVar24);
          ppcVar24 = local_428;
        }
        uStack_41c = uVar9 + 0x1f & 0xffffffe0;
      }
      if (ppcVar24 == (code **)0x0) {
        ppcVar24 = &local_438;
      }
      if (uVar9 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(ppcVar24,0,(ulonglong)(uVar12 << 2));
      uVar12 = uStack_420 + 0x1f;
      if (-1 < (int)uStack_420) {
        uVar12 = uStack_420;
      }
      if ((int)uStack_420 % 0x20 != 0) {
        ppcVar24 = &local_438;
        if (local_428 != (code **)0x0) {
          ppcVar24 = local_428;
        }
        bVar17 = -(char)((int)uStack_420 % 0x20);
        *(uint *)((longlong)ppcVar24 + (longlong)((int)uVar12 >> 5) * 4) =
             (*(uint *)((longlong)ppcVar24 + (longlong)((int)uVar12 >> 5) * 4) << (bVar17 & 0x1f))
             >> (bVar17 & 0x1f);
      }
      if (uVar9 < 4) {
        iVar10 = 1;
      }
      else {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        iVar10 = 1 << ((byte)iVar10 & 0x1f);
      }
      if (((int)pcStack_400 == 0) || ((int)pcStack_400 < iVar10)) {
        pcStack_400 = (code *)CONCAT44(pcStack_400._4_4_,iVar10);
        FUN_144aeb2ee();
      }
    }
    iVar10 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if ((int)uStack_600._4_4_ < iVar10) {
      FUN_141805b6e();
    }
    iVar10 = *(int *)(param_1 + 0x108);
    if (iVar10 == 0) {
      uVar42 = 1;
      local_6c8 = (uint *)0x0;
      local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
      iVar19 = 0;
    }
    else {
      pcVar23 = (code *)*(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        pcVar23 = local_6b8;
      }
      uVar9 = *(uint *)pcVar23;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        local_6c8 = (uint *)0x0;
        puVar14 = (uint *)(ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          puVar14 = (uint *)0x0;
        }
        local_6c0 = (longlong *)((ulonglong)local_6c0 & 0xffffffff00000000);
        do {
          if (puVar14 == local_6c8) goto LAB_140bd2cf9;
          local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
          uVar9 = *(uint *)((longlong)pcVar23 + ((longlong)local_6c8 + 1) * 4);
          local_6c8 = (uint *)((longlong)local_6c8 + 1);
        } while (uVar9 == 0);
      }
      else {
        local_6c8 = (uint *)0x0;
        local_6c0 = (longlong *)((ulonglong)local_6c0._4_4_ << 0x20);
      }
      uVar42 = (ulonglong)(-uVar9 & uVar9);
      uVar46 = uVar42 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 < iVar10) {
      uVar9 = 0xffffffff;
      do {
        lVar36 = *(longlong *)local_6a8;
        lVar27 = (longlong)iVar19 * 0x20;
        if ((int)uStack_440 != iStack_414) {
          pcVar23 = *(code **)(lVar36 + lVar27);
          pplVar15 = pplStack_408;
          if (pplStack_408 == (longlong **)0x0) {
            pplVar15 = &plStack_410;
          }
          iVar10 = *(int *)((longlong)pplVar15 +
                           (ulonglong)
                           ((int)pcStack_400 - 1U &
                           ((uint)((ulonglong)pcVar23 >> 0x20) ^ (uint)pcVar23)) * 4);
          if (iVar10 != -1) {
            do {
              local_5e8 = *(undefined8 **)(local_448 + (longlong)iVar10 * 0x10);
              local_5f8 = pcVar23;
              cVar8 = FUN_1447508ba(&local_5e8,&local_5f8);
              if (cVar8 != '\0') goto LAB_140bd2b75;
              iVar10 = *(int *)(local_448 + (longlong)iVar10 * 0x10 + 8);
            } while (iVar10 != -1);
            lVar36 = *(longlong *)local_6a8;
          }
        }
        uVar46 = uStack_600;
        lVar28 = (longlong)(int)uStack_600;
        uVar12 = (int)uStack_600 + 1;
        uStack_600 = CONCAT44(uStack_600._4_4_,uVar12);
        if (uStack_600._4_4_ < uVar12) {
          FUN_1457b5ee4(&local_608,uVar46 & 0xffffffff);
        }
        iVar10 = iStack_418;
        uVar46 = (ulonglong)uStack_440;
        *(undefined8 *)(local_608 + lVar28 * 8) = *(undefined8 *)(lVar36 + lVar27);
        lVar36 = *(longlong *)local_6a8;
        if (iStack_414 == 0) {
          iVar10 = (int)uStack_440;
          uStack_440 = (code **)CONCAT44(uStack_440._4_4_,(int)uStack_440 + 1);
          if (uStack_440._4_4_ == iVar10) {
            FUN_144869a3c(&local_448,uVar46 & 0xffffffff);
          }
          lVar28 = (longlong)iVar10;
          iVar19 = FUN_144a54ea4(&local_438,1);
          ppcVar24 = local_428;
          if (local_428 == (code **)0x0) {
            ppcVar24 = &local_438;
          }
          iVar18 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar18 = iVar19;
          }
          bVar17 = (byte)iVar19 & 0x1f;
          pcVar23 = (code *)((longlong)ppcVar24 + (longlong)(iVar18 >> 5) * 4);
          *(uint *)pcVar23 = *(uint *)pcVar23 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
        }
        else {
          lVar28 = (longlong)iStack_418;
          iStack_418 = *(int *)(local_448 + lVar28 * 0x10 + 4);
          iStack_414 = iStack_414 + -1;
          if (iStack_414 != 0) {
            *(undefined4 *)(local_448 + (longlong)*(int *)(local_448 + lVar28 * 0x10 + 4) * 0x10) =
                 0xffffffff;
          }
        }
        ppcVar24 = local_428;
        if (local_428 == (code **)0x0) {
          ppcVar24 = &local_438;
        }
        iVar19 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar19 = iVar10;
        }
        pcVar23 = (code *)((longlong)ppcVar24 + (longlong)(iVar19 >> 5) * 4);
        *(uint *)pcVar23 = *(uint *)pcVar23 | 1 << ((byte)iVar10 & 0x1f);
        lVar28 = lVar28 * 0x10;
        pcVar23 = local_448 + lVar28;
        pcVar25 = *(code **)(lVar27 + lVar36);
        *(code **)(local_448 + lVar28) = pcVar25;
        *(undefined4 *)(local_448 + lVar28 + 8) = 0xffffffff;
        uVar35 = (uint)((ulonglong)pcVar25 >> 0x20) ^ (uint)pcVar25;
        uVar12 = (int)uStack_440 - iStack_414;
        if ((uVar12 != 0) && (uVar12 != 1)) {
          pplVar15 = pplStack_408;
          if (pplStack_408 == (longlong **)0x0) {
            pplVar15 = &plStack_410;
          }
          iVar19 = *(int *)((longlong)pplVar15 + (ulonglong)((int)pcStack_400 - 1U & uVar35) * 4);
          if (iVar19 != -1) {
            do {
              lVar36 = (longlong)iVar19 * 0x10;
              local_5e8 = *(undefined8 **)(local_448 + lVar36);
              local_5f8 = pcVar25;
              cVar8 = FUN_1447508ba(&local_5e8,&local_5f8);
              if (cVar8 != '\0') {
                *(undefined8 *)(local_448 + lVar36) = *(undefined8 *)pcVar23;
                FUN_147e43efe(&local_448,iVar10);
                goto LAB_140bd2b75;
              }
              iVar19 = *(int *)(local_448 + lVar36 + 8);
            } while (iVar19 != -1);
            uVar12 = (int)uStack_440 - iStack_414;
          }
        }
        if (uVar12 < 4) {
          iVar19 = 1;
        }
        else {
          uVar46 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
          lVar36 = 0x3f;
          if (uVar46 != 0) {
            for (; uVar46 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar19 = 1 << ((byte)lVar36 & 0x1f);
        }
        if (((int)uVar12 < 1) || (iVar19 <= (int)pcStack_400)) {
          uVar35 = (int)pcStack_400 - 1U & uVar35;
          *(uint *)(pcVar23 + 0xc) = uVar35;
          pplVar15 = pplStack_408;
          if (pplStack_408 == (longlong **)0x0) {
            pplVar15 = &plStack_410;
          }
          *(undefined4 *)(pcVar23 + 8) =
               *(undefined4 *)
                ((longlong)pplVar15 + ((longlong)(int)pcStack_400 - 1U & (longlong)(int)uVar35) * 4)
          ;
          pplVar15 = pplStack_408;
          if (pplStack_408 == (longlong **)0x0) {
            pplVar15 = &plStack_410;
          }
          *(int *)((longlong)pplVar15 +
                  ((longlong)(int)pcStack_400 - 1U & (longlong)(int)uVar35) * 4) = iVar10;
        }
        else {
          pcStack_400 = (code *)CONCAT44(pcStack_400._4_4_,iVar19);
          FUN_144aeb2ee(&local_448);
        }
LAB_140bd2b75:
        uVar9 = uVar9 & ~(uint)uVar42;
        pcVar23 = (code *)*(uint **)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
          pcVar23 = local_6b8;
        }
        iVar10 = *(int *)(param_1 + 0x108);
        lVar36 = (longlong)(int)(uint)local_6c8;
        uVar12 = *(uint *)((longlong)pcVar23 + lVar36 * 4) & uVar9;
        if (uVar12 == 0) {
          iVar19 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar19 = iVar10 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar18 = iVar19;
          if (iVar19 < (int)(uint)local_6c8) {
            iVar18 = (uint)local_6c8;
          }
          if (iVar19 <= (int)(uint)local_6c8) break;
          local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
          lVar27 = 0;
          while (uVar12 = *(uint *)((longlong)pcVar23 + (lVar36 + lVar27 + 1) * 4), uVar12 == 0) {
            local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,(int)local_6c0 + 0x20);
            lVar27 = lVar27 + 1;
            if (iVar18 - lVar36 == lVar27) goto LAB_140bd2cf9;
          }
          local_6c8 = (uint *)(ulonglong)((uint)local_6c8 + (int)lVar27 + 1);
          uVar9 = 0xffffffff;
        }
        uVar42 = (ulonglong)(-uVar12 & uVar12);
        uVar46 = uVar42 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar46 != 0) {
          for (; uVar46 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        iVar19 = ((int)local_6c0 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar10);
    }
LAB_140bd2cf9:
    pcStack_400 = (code *)((ulonglong)pcStack_400 & 0xffffffff00000000);
    if (pplStack_408 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    uVar42 = (ulonglong)uStack_440 >> 0x20;
    uStack_440 = (code **)((ulonglong)uStack_440 & 0xffffffff00000000);
    if ((int)uVar42 != 0) {
      FUN_14472eb64(&local_448,0);
    }
    iStack_418 = -1;
    iStack_414 = 0;
    uStack_420 = 0;
    if (0x80 < uStack_41c) {
      uStack_41c = 0x80;
      FUN_1446efbd8(&local_438,0);
    }
    if (local_428 != (code **)0x0) {
      FUN_1400020a8();
    }
    if (local_448 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_448 = (code *)local_588;
    local_5f0 = &local_448;
    uStack_440 = &local_608;
    local_438 = (code *)&LAB_143800a70;
    pcStack_430 = (code *)&local_60a;
    local_708 = &local_5e8;
    local_5e8 = (undefined8 *)0x0;
    uVar46 = 0;
    uStack_5e0 = 0;
    local_5f8 = FUN_1447507cc;
    local_710 = 0;
    uVar42 = 1;
    FUN_1401f8d10(L"ParallelFor Task",uStack_600 & 0xffffffff,1);
    if (local_608 != (code *)0x0) {
      FUN_1400020a8();
    }
    pcVar25 = local_578;
    pcVar23 = local_578 + 0x10;
    iVar10 = *(int *)(local_578 + 0x28);
    iVar18 = 0;
    iVar19 = 0;
    if (iVar10 != 0) {
      pcVar16 = *(code **)(local_578 + 0x20);
      if (*(code **)(local_578 + 0x20) == (code *)0x0) {
        pcVar16 = pcVar23;
      }
      uVar9 = *(uint *)pcVar16;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        uVar46 = 0;
        uVar42 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar42 = uVar46;
        }
        iVar18 = 0;
        do {
          if (uVar42 == uVar46) goto LAB_140bd2eab;
          iVar18 = iVar18 + 0x20;
          uVar9 = *(uint *)(pcVar16 + (uVar46 + 1) * 4);
          uVar46 = uVar46 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar46 = 0;
      }
      uVar42 = (ulonglong)(-uVar9 & uVar9);
      uVar45 = uVar42 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 != iVar10) {
      uVar9 = 0xffffffff;
      iVar44 = iVar10;
      do {
        if (*(longlong *)(*(longlong *)pcVar25 + 8 + (longlong)iVar19 * 0x20) != 0) {
          FUN_147e3d022();
          iVar44 = *(int *)(pcVar25 + 0x28);
        }
        uVar9 = uVar9 & ~(uint)uVar42;
        pcVar16 = *(code **)(pcVar25 + 0x20);
        if (*(code **)(pcVar25 + 0x20) == (code *)0x0) {
          pcVar16 = pcVar23;
        }
        iVar19 = (int)uVar46;
        lVar36 = (longlong)iVar19;
        uVar12 = *(uint *)(pcVar16 + lVar36 * 4) & uVar9;
        if (uVar12 == 0) {
          iVar38 = iVar44 + 0x1e;
          if (-1 < iVar44 + -1) {
            iVar38 = iVar44 + -1;
          }
          iVar38 = iVar38 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar20 = iVar38;
          if (iVar38 < iVar19) {
            iVar20 = iVar19;
          }
          if (iVar19 < iVar38) {
            lVar27 = 0;
            do {
              uVar12 = *(uint *)(pcVar16 + (lVar36 + lVar27 + 1) * 4);
              if (uVar12 != 0) {
                uVar46 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140bd326e;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar20 - lVar36 != lVar27);
            uVar9 = 0xffffffff;
            iVar19 = iVar20;
          }
          uVar46 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar44;
        }
        else {
LAB_140bd326e:
          uVar42 = (ulonglong)(-uVar12 & uVar12);
          uVar45 = uVar42 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar44 <= iVar19) {
            iVar19 = iVar44;
          }
        }
      } while (iVar19 != iVar10);
    }
LAB_140bd2eab:
    FUN_1406a63ce(&local_609);
    SRWLock = (PSRWLOCK)local_588._0_8_;
    if (local_588._8_4_ != 0) goto LAB_140bd2ece;
    ReleaseSRWLockShared((PSRWLOCK)local_588._0_8_);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)local_688._0_8_);
    iVar10 = *(int *)(param_1 + 0x108);
    if (iVar10 == 0) {
      uVar46 = 1;
      uVar42 = 0;
      iVar18 = 0;
      iVar19 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 0xf0);
      }
      uVar9 = *puVar14;
      if (uVar9 == 0) {
        iVar19 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar19 = iVar10 + -1;
        }
        uVar42 = 0;
        uVar46 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar46 = uVar42;
        }
        iVar18 = 0;
        do {
          if (uVar46 == uVar42) goto LAB_140bd2767;
          iVar18 = iVar18 + 0x20;
          uVar9 = puVar14[uVar42 + 1];
          uVar42 = uVar42 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar42 = 0;
        iVar18 = 0;
      }
      uVar46 = (ulonglong)(-uVar9 & uVar9);
      uVar45 = uVar46 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar19) {
        iVar19 = iVar10;
      }
    }
    if (iVar19 != iVar10) {
      uVar9 = 0xffffffff;
      iVar44 = iVar10;
      do {
        if (*(longlong *)(*(longlong *)local_6a8 + 8 + (longlong)iVar19 * 0x20) != 0) {
          puVar30 = (undefined8 *)(*(longlong *)local_6a8 + (longlong)iVar19 * 0x20 + 8);
          FUN_1437f694a();
          FUN_1437f69c4(*puVar30);
          FUN_147e3d022(*puVar30);
          iVar44 = *(int *)(param_1 + 0x108);
        }
        uVar9 = uVar9 & ~(uint)uVar46;
        puVar14 = *(uint **)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0xf0);
        }
        iVar19 = (int)uVar42;
        lVar36 = (longlong)iVar19;
        uVar12 = puVar14[lVar36] & uVar9;
        if (uVar12 == 0) {
          iVar38 = iVar44 + 0x1e;
          if (-1 < iVar44 + -1) {
            iVar38 = iVar44 + -1;
          }
          iVar38 = iVar38 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar20 = iVar38;
          if (iVar38 < iVar19) {
            iVar20 = iVar19;
          }
          if (iVar19 < iVar38) {
            lVar27 = 0;
            do {
              uVar12 = puVar14[lVar36 + lVar27 + 1];
              if (uVar12 != 0) {
                uVar42 = (ulonglong)(iVar19 + (int)lVar27 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140bd2818;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar20 - lVar36 != lVar27);
            uVar9 = 0xffffffff;
            iVar19 = iVar20;
          }
          uVar42 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar44;
        }
        else {
LAB_140bd2818:
          uVar46 = (ulonglong)(-uVar12 & uVar12);
          uVar45 = uVar46 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar19 = (iVar18 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar44 <= iVar19) {
            iVar19 = iVar44;
          }
        }
      } while (iVar19 != iVar10);
    }
LAB_140bd2767:
    SRWLock = (PSRWLOCK)local_688._0_8_;
LAB_140bd2ece:
    ReleaseSRWLockExclusive(SRWLock);
  }
  iVar10 = *(int *)(param_1 + 0x3b4);
  FUN_140d4ac2e(*(undefined8 *)(param_1 + 0x3a8),*(undefined4 *)(param_1 + 0x3b0));
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if ((iVar10 < 0) && (*(int *)(param_1 + 0x3b4) != 0)) {
    FUN_147e445f2();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_140bd3333:
    uVar29 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 8);
    uVar29 = 0;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
      puVar30 = (undefined8 *)
                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
      if ((puVar30 == (undefined8 *)0x0) ||
         ((*(int *)(puVar30 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_140bd3333;
      uVar29 = *puVar30;
    }
  }
  local_588._0_8_ = uVar29;
  LOCK();
  DAT_14cb1cfa8 = DAT_14cb1cfa8 + 1;
  UNLOCK();
  uVar29 = FUN_143801aa0(DAT_14cb1cfa0);
  stack0xfffffffffffffa80 = (code **)uVar29;
  local_578 = (code *)&DAT_14cb1cfa0;
  LOCK();
  DAT_14cb1cfa8 = DAT_14cb1cfa8 + 1;
  UNLOCK();
  local_570 = local_588;
  FUN_143801b1a(local_588 + 8);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  local_568 = (undefined8 *)0x0;
  local_560 = &DAT_14cb1cfa0;
  LOCK();
  DAT_14cb1cfa8 = DAT_14cb1cfa8 + 1;
  UNLOCK();
  local_558 = local_588;
  FUN_143801b1a(&local_568);
  puVar37 = local_560;
  puVar30 = local_568;
  LOCK();
  DAT_14cb1cfa8 = DAT_14cb1cfa8 + -1;
  UNLOCK();
  local_5e8 = stack0xfffffffffffffa80;
  uStack_5e0 = SUB84(local_578,0);
  uStack_5dc = (undefined4)((ulonglong)local_578 >> 0x20);
  LOCK();
  *(int *)(local_578 + 8) = *(int *)(local_578 + 8) + 1;
  UNLOCK();
  local_5d8 = local_570;
  LOCK();
  *(int *)(local_560 + 1) = *(int *)(local_560 + 1) + 1;
  UNLOCK();
  if (stack0xfffffffffffffa80 != (code **)local_568) {
    do {
      if (*(char *)(local_5e8[2] + 0x640) == '\x01') {
        FUN_143811024(local_5e8[2],&local_448);
        iVar10 = *(int *)(param_1 + 0x3b0);
        *(uint *)(param_1 + 0x3b0) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x3b4) < iVar10 + 1U) {
          FUN_146421cd0((longlong *)(param_1 + 0x3a8),iVar10);
        }
        lVar36 = *(longlong *)(param_1 + 0x3a8);
        lVar27 = (longlong)iVar10 * 0x78;
        *(char *)(lVar36 + lVar27) = (char)local_448;
        plVar26 = (longlong *)(lVar36 + 8 + lVar27);
        *plVar26 = (longlong)uStack_440;
        plVar26[1] = (longlong)local_438;
        plVar26 = (longlong *)(lVar36 + 0x18 + lVar27);
        *plVar26 = (longlong)pcStack_430;
        plVar26[1] = (longlong)local_428;
        piVar32 = (int *)(lVar36 + 0x28 + lVar27);
        *piVar32 = uStack_420;
        piVar32[1] = uStack_41c;
        piVar32[2] = iStack_418;
        piVar32[3] = iStack_414;
        *(longlong **)(lVar36 + 0x38 + lVar27) = plStack_410;
        *(longlong ***)(lVar36 + 0x40 + lVar27) = pplStack_408;
        *(int *)(lVar36 + 0x48 + lVar27) = (int)pcStack_400;
        *(ulonglong *)(lVar36 + 0x50 + lVar27) = CONCAT62(uStack_3f6,CONCAT11(uStack_3f7,local_3f8))
        ;
        plVar26 = (longlong *)(lVar36 + 0x68 + lVar27);
        *plVar26 = (longlong)local_3e0;
        plVar26[1] = CONCAT17((undefined1)uStack_3d1,CONCAT43(uStack_3d5,uStack_3d8));
        plVar26 = (longlong *)(lVar36 + 0x58 + lVar27);
        *plVar26 = (longlong)pcStack_3f0;
        plVar26[1] = CONCAT35(uStack_3e3,
                              CONCAT23(local_3e5,CONCAT12(uStack_3e6,CONCAT11(local_3e7,local_3e8)))
                             );
        pplStack_408 = (longlong **)0x0;
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
        plStack_410 = (longlong *)0x0;
      }
      local_5e8 = (undefined8 *)FUN_143801aa0(*local_5e8);
      FUN_143801b1a(&local_5e8);
    } while (local_5e8 != puVar30);
  }
  LOCK();
  *(int *)(puVar37 + 1) = *(int *)(puVar37 + 1) + -1;
  UNLOCK();
  LOCK();
  piVar32 = (int *)(CONCAT44(uStack_5dc,uStack_5e0) + 8);
  *piVar32 = *piVar32 + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_560 + 1) = *(int *)(local_560 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_578 + 8) = *(int *)(local_578 + 8) + -1;
  UNLOCK();
  FUN_14381697a(*(undefined8 *)(param_1 + 0x598));
  local_5b8 = 0;
  local_5a8 = &PTR_LAB_14aba0b70;
  local_5c8[0] = FUN_14380492c;
  local_5a0 = param_1;
  local_598 = param_2;
  FUN_1417399ce(local_650,local_5c8,0);
LAB_140bcd3b0:
  if ((local_f0 ^ (ulonglong)auStack_738) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    lVar33 = *(longlong *)local_6a8;
    lVar28 = lVar28 * 0x20;
    local_448 = *(code **)(lVar33 + lVar28);
    cVar8 = FUN_1447508ba(&local_448,local_588);
    lVar28 = lVar33 + lVar28;
    if (cVar8 != '\0') break;
LAB_140bd3aa4:
    lVar39 = lVar28;
    lVar28 = (longlong)*(int *)(lVar39 + 0x18);
    if (lVar28 == -1) goto LAB_140bd3b6f;
  }
  piVar32 = (int *)(lVar39 + 0x18);
LAB_140bd3af9:
  iVar10 = *piVar32;
  lVar28 = (longlong)iVar10 * 0x20;
  lVar27 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar27 = lVar36;
  }
  lVar39 = *(longlong *)(param_1 + 0xe0);
  lVar33 = (longlong)*(int *)(lVar39 + 0x1c + lVar28);
  iVar19 = *(int *)(lVar27 + lVar33 * 4);
  if (iVar19 == iVar10) {
    piVar32 = (int *)(lVar27 + lVar33 * 4);
  }
  else {
    do {
      piVar32 = (int *)((longlong)iVar19 * 0x20 + lVar39 + 0x18);
      iVar19 = *piVar32;
    } while (iVar19 != iVar10);
  }
  *piVar32 = *(int *)(lVar39 + lVar28 + 0x18);
  plVar26 = *(longlong **)(*(longlong *)local_6a8 + 0x10 + lVar28);
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar34 = plVar26 + 1;
    *(int *)plVar34 = (int)*plVar34 + -1;
    UNLOCK();
    if ((int)*plVar34 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar32 = (int *)((longlong)plVar26 + 0xc);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  FUN_1438009fe(local_6a8,iVar10);
LAB_140bd3b6f:
  puVar14 = puVar14 + 2;
  if (puVar14 == local_6c8) goto LAB_140bd107b;
  goto LAB_140bd392a;
}



// FUNCTION 140bd3cd0 FUN_140bd3cd0 body=337 status=ok
// SIG undefined FUN_140bd3cd0(void)

void FUN_140bd3cd0(longlong param_1,double *param_2)

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
  undefined1 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((*(byte *)(param_1 + 0x374) & 4) == 0) {
    FUN_146d68b50(param_1 + 0x3f8,1,1);
    uVar12 = 0;
    FUN_1429a4e1e(param_1,0,param_2);
  }
  else {
    uVar12 = FUN_140bd3e22(param_1,param_2);
    if ((int)uVar12 < 0) {
      uVar12 = FUN_1404af45e(param_1,param_2);
    }
    else {
      dVar1 = param_2[2];
      dVar2 = param_2[1];
      dVar3 = param_2[5];
      dVar4 = param_2[4];
      dVar5 = param_2[3];
      dVar6 = param_2[8];
      dVar7 = param_2[7];
      dVar8 = param_2[6];
      dVar9 = param_2[9];
      uVar11 = *(undefined4 *)(param_2 + 10);
      uVar10 = *(undefined1 *)((longlong)param_2 + 0x54);
      lVar13 = param_1 + 0x3f8;
      if (*(longlong *)(param_1 + 0x5a8) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x5a8);
      }
      lVar14 = (ulonglong)uVar12 * 0x6c;
      *(float *)(lVar13 + lVar14) = (float)*param_2;
      *(float *)(lVar13 + 4 + lVar14) = (float)dVar2;
      *(float *)(lVar13 + 8 + lVar14) = (float)dVar1;
      *(float *)(lVar13 + 0xc + lVar14) = (float)dVar5;
      *(float *)(lVar13 + 0x10 + lVar14) = (float)dVar4;
      *(float *)(lVar13 + 0x14 + lVar14) = (float)dVar3;
      *(float *)(lVar13 + 0x18 + lVar14) = (float)dVar8;
      *(float *)(lVar13 + 0x1c + lVar14) = (float)dVar7;
      *(float *)(lVar13 + 0x20 + lVar14) = (float)dVar6;
      *(float *)(lVar13 + 0x24 + lVar14) = (float)dVar9;
      *(undefined4 *)(lVar13 + 0x28 + lVar14) = uVar11;
      *(undefined1 *)(lVar13 + 0x2c + lVar14) = uVar10;
    }
  }
  *(uint *)(param_1 + 0x16c) = uVar12;
  return;
}



// FUNCTION 140bd3e22 FUN_140bd3e22 body=427 status=ok
// SIG undefined FUN_140bd3e22(void)

ulonglong FUN_140bd3e22(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(uint *)(param_1 + 0x5b0);
  uVar4 = 0xffffffff;
  if (0 < (int)uVar1) {
    lVar6 = 0x2c;
    uVar5 = 0;
    do {
      local_c0 = 0.0;
      lVar3 = *(longlong *)(param_1 + 0x5a8);
      if (*(longlong *)(param_1 + 0x5a8) == 0) {
        lVar3 = param_1 + 0x3f8;
      }
      local_a8 = (double)*(float *)(lVar3 + -0x24 + lVar6);
      local_b0 = (double)*(float *)(lVar3 + -0x28 + lVar6);
      local_b8 = (double)*(float *)(lVar3 + -0x2c + lVar6);
      local_90 = (double)*(float *)(lVar3 + -0x18 + lVar6);
      local_98 = (double)*(float *)(lVar3 + -0x1c + lVar6);
      local_a0 = (double)*(float *)(lVar3 + -0x20 + lVar6);
      local_78 = (double)*(float *)(lVar3 + -0xc + lVar6);
      local_80 = (double)*(float *)(lVar3 + -0x10 + lVar6);
      local_88 = (double)*(float *)(lVar3 + -0x14 + lVar6);
      local_70 = (double)*(float *)(lVar3 + -8 + lVar6);
      local_68 = *(undefined4 *)(lVar3 + -4 + lVar6);
      local_64 = *(undefined1 *)(lVar3 + lVar6);
      cVar2 = FUN_145782308(param_1,param_2,&local_b8,&local_c0);
      if ((cVar2 != '\0') && (0.0 < local_c0)) {
        uVar4 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x6c;
    } while (uVar1 != uVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140bd3fd8 FUN_140bd3fd8 body=782 status=ok
// SIG undefined FUN_140bd3fd8(void)

undefined8 FUN_140bd3fd8(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140bd42e8();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x48),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x4c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x50);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x50) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x50) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x51),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x51) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x52);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x52) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x52) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14480c34d(param_2,param_1 + 0x58);
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd42e8 FUN_140bd42e8 body=259 status=ok
// SIG undefined FUN_140bd42e8(void)

void FUN_140bd42e8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x10);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bd4391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      return;
    }
    FUN_14572512c(param_2,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 140bd43ec FUN_140bd43ec body=59 status=ok
// SIG undefined FUN_140bd43ec(void)

undefined8 FUN_140bd43ec(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_140bd4428(*(longlong *)(param_1 + 0x2b8),0,1);
    uVar1 = FUN_1447e736e(param_1 + 0x268);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140bd4428 FUN_140bd4428 body=794 status=ok
// SIG undefined FUN_140bd4428(void)

undefined4 FUN_140bd4428(undefined8 *param_1,float param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar12 = 2;
  if (*(char *)(param_1 + 2) == '\0') {
    if (param_3 != '\0') {
      local_78 = (undefined8 *)0x0;
      plVar13 = (longlong *)param_1[1];
      bVar19 = true;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        uVar14 = 0;
      }
      else {
        iVar10 = (int)plVar13[1];
        uVar14 = 0;
        do {
          if (iVar10 == 0) {
            plVar13 = (longlong *)0x0;
            goto LAB_140bd44a6;
          }
          LOCK();
          iVar3 = (int)plVar13[1];
          bVar18 = iVar10 == iVar3;
          if (bVar18) {
            *(int *)(plVar13 + 1) = iVar10 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
          UNLOCK();
        } while (!bVar18);
        uVar14 = *param_1;
        bVar19 = false;
      }
LAB_140bd44a6:
      uStack_70 = (undefined8 **)&DAT_00000001;
      FUN_1402a19f0(&local_78,0);
      *local_78 = uVar14;
      local_78[1] = plVar13;
      if (!bVar19) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (0 < (int)uStack_70) {
        lVar17 = 0;
        local_a0 = param_1;
        do {
          lVar4 = local_78[lVar17 * 2];
          plVar13 = (longlong *)local_78[lVar17 * 2 + 1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          if (*(char *)(lVar4 + 0x13) == '\x01') {
            FUN_140420124(lVar4);
          }
          iVar10 = *(int *)(lVar4 + 0x80);
          if ((longlong)iVar10 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x78);
            lVar15 = 0;
            do {
              ppuVar8 = uStack_70;
              lVar5 = *(longlong *)(lVar4 + lVar15);
              if (lVar5 != 0) {
                plVar6 = *(longlong **)(lVar4 + 8 + lVar15);
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                }
                lVar16 = (longlong)(int)uStack_70;
                uVar11 = (int)uStack_70 + 1;
                uStack_70 = (undefined8 **)CONCAT44(uStack_70._4_4_,uVar11);
                if (uStack_70._4_4_ < uVar11) {
                  FUN_1402a19f0(&local_78,(ulonglong)ppuVar8 & 0xffffffff);
                }
                local_78[lVar16 * 2] = lVar5;
                local_78[lVar16 * 2 + 1] = plVar6;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar6 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
              }
              lVar15 = lVar15 + 0x10;
            } while ((longlong)iVar10 * 0x10 != lVar15);
          }
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar13 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          lVar17 = lVar17 + 1;
          param_1 = local_a0;
        } while (lVar17 < (int)uStack_70);
      }
      FUN_144936a5c(local_78);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar12 = 2;
    if (((param_2 == 0.0) && (!NAN(param_2))) && (DAT_14cb0a330 == '\0')) {
      local_90 = param_1[1];
      uVar14 = param_1[0x13];
      if (local_90 == 0) {
        local_90 = 0;
        local_98 = 0;
      }
      else {
        iVar10 = *(int *)(local_90 + 8);
        local_98 = 0;
        do {
          if (iVar10 == 0) {
            local_90 = 0;
            goto LAB_140bd46dc;
          }
          LOCK();
          iVar3 = *(int *)(local_90 + 8);
          bVar19 = iVar10 == iVar3;
          if (bVar19) {
            *(int *)(local_90 + 8) = iVar10 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
          UNLOCK();
        } while (!bVar19);
        local_98 = *param_1;
      }
LAB_140bd46dc:
      FUN_1415d8200(uVar14,&local_88);
      if (DAT_14c948aa0 != (longlong *)0x0) {
        local_78 = local_88;
        uStack_70 = (undefined8 **)CONCAT44(uStack_70._4_4_,local_80);
        (**(code **)(*DAT_14c948aa0 + 0x60))();
      }
      puVar7 = local_88;
      cVar9 = FUN_147d5d8da(param_1);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_1400020a8(puVar7);
      }
      if (cVar9 != '\0') goto LAB_140bd4672;
    }
    uStack_70 = &local_88;
    local_78 = (undefined8 *)&LAB_1437203e4;
    local_88 = param_1;
    uVar12 = (**(code **)(*DAT_14c948aa0 + 0x40))(DAT_14c948aa0,&local_78,(double)param_2);
  }
LAB_140bd4672:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd4743 FUN_140bd4743 body=1324 status=ok
// SIG undefined FUN_140bd4743(void)

void FUN_140bd4743(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)*param_1;
  FUN_140bd4cf2(puVar1);
  *puVar1 = &PTR_FUN_14ae237f0;
  *(byte *)(puVar1 + 10) = *(byte *)(puVar1 + 10) | 1;
  *(byte *)((longlong)puVar1 + 0x51) = *(byte *)((longlong)puVar1 + 0x51) & 0xe7 | 0x10;
  *(undefined1 *)((longlong)puVar1 + 0x52) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) & 0xf0 | 8;
  *(byte *)((longlong)puVar1 + 100) = *(byte *)((longlong)puVar1 + 100) & 0xf8;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0xffffffff;
  *(byte *)((longlong)puVar1 + 0xac) = *(byte *)((longlong)puVar1 + 0xac) & 0xfe;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1f] = &PTR_LAB_14ae02690;
  puVar1[0x2e] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(byte *)(puVar1 + 0x2f) = *(byte *)(puVar1 + 0x2f) | 0xf;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x17c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x184) = 0;
  *(undefined1 *)(puVar1 + 0x35) = 2;
  *(undefined4 *)(puVar1 + 0x38) = 0xffffffff;
  FUN_14043115e(puVar1 + 0x30);
  puVar1[0x3d] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 2;
  *(undefined4 *)(puVar1 + 0x41) = 0xffffffff;
  FUN_14043115e(puVar1 + 0x39);
  puVar1[0x46] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  *(undefined1 *)(puVar1 + 0x47) = 2;
  *(undefined4 *)(puVar1 + 0x4a) = 0xffffffff;
  FUN_14043115e(puVar1 + 0x42);
  memset(puVar1 + 0x4b,0,0xe0);
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  *(byte *)(puVar1 + 0x77) = *(byte *)(puVar1 + 0x77) | 0xf;
  *(undefined4 *)((longlong)puVar1 + 0x3bc) = 0;
  puVar1[0x67] = &PTR_LAB_14adc1560;
  puVar1[0x7c] = 0;
  *(undefined4 *)(puVar1 + 0x7d) = 0;
  puVar1[0x78] = 0;
  puVar1[0x79] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3f4) = 0;
  puVar1[0x80] = 0;
  *(undefined4 *)(puVar1 + 0x81) = 0;
  puVar1[0x82] = 0xc059000000000000;
  puVar1[0x83] = 0xc059000000000000;
  puVar1[0x84] = 0xc059000000000000;
  puVar1[0x85] = 0x4059000000000000;
  puVar1[0x86] = 0x4059000000000000;
  puVar1[0x87] = 0x4059000000000000;
  *(undefined1 *)(puVar1 + 0x88) = 1;
  *(undefined2 *)(puVar1 + 0x89) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x44a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x454) = 0;
  puVar1[0x8b] = 0x3c888f863d888889;
  puVar1[0x92] = 0;
  puVar1[0x93] = 0;
  puVar1[0x90] = 0;
  puVar1[0x91] = 0;
  puVar1[0x8e] = 0;
  puVar1[0x8f] = 0;
  puVar1[0x8c] = 0;
  puVar1[0x8d] = 0;
  *(byte *)(puVar1 + 0x94) = *(byte *)(puVar1 + 0x94) | 4;
  *(undefined1 *)(puVar1 + 0x95) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4ac) = 0xffffffff;
  puVar1[0x96] = 0;
  puVar1[0x97] = 0;
  puVar1[0x98] = 0;
  puVar1[0x99] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  uVar5 = FUN_14001cc68(0x98,0x10);
  FUN_140bd4c70(uVar5);
  puVar1[0x9c] = uVar5;
  puVar1[0x9d] = 0;
  puVar1[0x9e] = 0;
  *(undefined1 *)(puVar1 + 0x9f) = 0xcc;
  *(undefined4 *)((longlong)puVar1 + 0x4fc) = 0;
  puVar1[0xa0] = 0;
  *(uint *)(puVar1 + 0xa1) = *(uint *)(puVar1 + 0xa1) & 0xffffff80 | 7;
  *(undefined2 *)((longlong)puVar1 + 0x50c) = 0x200;
  puVar1[0xa2] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(puVar1 + 0xa3) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x51c) = 0;
  uVar3 = FUN_144830b78((longlong)puVar1 + 0x524,&DAT_14cb42160);
  *(undefined4 *)((longlong)puVar1 + 0x524) = uVar3;
  puVar1[0xa2] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(puVar1 + 0xa3) = 1;
  puVar1[0xa5] = 0;
  *(undefined4 *)(puVar1 + 0xa6) = 1;
  puVar1[0xa7] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(puVar1 + 0xa8) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x544) = 0;
  uVar3 = FUN_144830b78((longlong)puVar1 + 0x54c,&DAT_14cb42160);
  *(undefined4 *)((longlong)puVar1 + 0x54c) = uVar3;
  puVar1[0xa7] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(puVar1 + 0xa8) = 1;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  FUN_14090dd64(puVar1 + 0x67,puVar1);
  *(undefined4 *)(puVar1 + 5) = 0x20;
  puVar1[0xd] = 0;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) & 0xef;
  if (DAT_14cb366a0 == (longlong *)0x0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_140eca530;
    local_78 = &LAB_148063819;
    local_80 = &LAB_1460672b6;
    local_88 = L"Niagara";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  plVar2 = DAT_14cb366a0;
  lVar6 = DAT_14cb366a0[0x22];
  if (lVar6 == 0) {
    (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
    lVar6 = plVar2[0x22];
    uVar4 = 8;
    if (lVar6 == 0) goto LAB_140bd4b6a;
  }
  uVar4 = (uint)*(byte *)(lVar6 + 0x38) << 3;
LAB_140bd4b6a:
  *(uint *)(puVar1 + 0x94) = *(uint *)(puVar1 + 0x94) & 0xfffffff7 | uVar4;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bd4c70 FUN_140bd4c70 body=129 status=ok
// SIG undefined FUN_140bd4c70(void)

undefined8 * FUN_140bd4c70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xfe;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0x2000000000;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
  *(undefined1 **)((longlong)param_1 + 0x54) = &DAT_3f8000003f800000;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xf0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  uVar1 = CONCAT44(DAT_14cb3dff0,DAT_14cb3dfec);
  *(ulonglong *)((longlong)param_1 + 100) = CONCAT44(DAT_14cb3dfe8,DAT_14cb3dfe4);
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar1;
  uVar1 = CONCAT44(DAT_14cb3dff0,DAT_14cb3dfec);
  *(ulonglong *)((longlong)param_1 + 0x74) = CONCAT44(DAT_14cb3dfe8,DAT_14cb3dfe4);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar1;
  uVar4 = DAT_14cb3dff0;
  uVar3 = DAT_14cb3dfec;
  uVar2 = DAT_14cb3dfe8;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_14cb3dfe4;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  FUN_1402d6d5c();
  return param_1;
}



// FUNCTION 140bd4cf2 FUN_140bd4cf2 body=120 status=ok
// SIG undefined FUN_140bd4cf2(void)

undefined8 * FUN_140bd4cf2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a6fd850;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 140bd4d6a FUN_140bd4d6a body=169 status=ok
// SIG undefined FUN_140bd4d6a(void)

void FUN_140bd4d6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c2190;
  FUN_140bd4e4b(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4e14(param_1 + 0x66);
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4e94(param_1);
  return;
}



// FUNCTION 140bd4e14 FUN_140bd4e14 body=55 status=ok
// SIG undefined FUN_140bd4e14(void)

void FUN_140bd4e14(longlong *param_1)

{
  FUN_140bd54f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bd4e4b FUN_140bd4e4b body=73 status=ok
// SIG undefined FUN_140bd4e4b(void)

void FUN_140bd4e4b(longlong param_1,int param_2)

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



// FUNCTION 140bd4e94 FUN_140bd4e94 body=181 status=ok
// SIG undefined FUN_140bd4e94(void)

void FUN_140bd4e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a165ec0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c39c2(param_1 + 0x4f);
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(param_1 + 0x39);
  FUN_140bd4f4a(param_1);
  return;
}



// FUNCTION 140bd4f4a FUN_140bd4f4a body=268 status=ok
// SIG undefined FUN_140bd4f4a(void)

void FUN_140bd4f4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1704f0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(param_1 + 0x2d);
  FUN_140bd5056(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c38e0(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd508c(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140bd5056 FUN_140bd5056 body=54 status=ok
// SIG undefined FUN_140bd5056(void)

void FUN_140bd5056(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401a56c2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140bd508c FUN_140bd508c body=55 status=ok
// SIG undefined FUN_140bd508c(void)

void FUN_140bd508c(longlong *param_1)

{
  FUN_140bd52f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bd50c4 FUN_140bd50c4 body=55 status=ok
// SIG undefined FUN_140bd50c4(void)

void FUN_140bd50c4(longlong *param_1)

{
  FUN_140bd50fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bd50fc FUN_140bd50fc body=505 status=ok
// SIG undefined FUN_140bd50fc(void)

void FUN_140bd50fc(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140bd5276;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140bd5276;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140bd5276:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bd52f6 FUN_140bd52f6 body=505 status=ok
// SIG undefined FUN_140bd52f6(void)

void FUN_140bd52f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140bd5470;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140bd5470;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140bd5470:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bd54f0 FUN_140bd54f0 body=519 status=ok
// SIG undefined FUN_140bd54f0(void)

void FUN_140bd54f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140bd55d5;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140bd55d5;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140bd55d5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bd56f8 FUN_140bd56f8 body=52 status=ok
// SIG undefined FUN_140bd56f8(void)

void FUN_140bd56f8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140bd572c FUN_140bd572c body=89 status=ok
// SIG undefined FUN_140bd572c(void)

undefined8 * FUN_140bd572c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f541e0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd5786(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bd5786 FUN_140bd5786 body=165 status=ok
// SIG undefined FUN_140bd5786(void)

void FUN_140bd5786(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f52040;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd582b(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd5860(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140f6244c(param_1 + 1,0);
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bd582b FUN_140bd582b body=52 status=ok
// SIG undefined FUN_140bd582b(void)

void FUN_140bd582b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140bd5860 FUN_140bd5860 body=55 status=ok
// SIG undefined FUN_140bd5860(void)

void FUN_140bd5860(longlong *param_1)

{
  FUN_140bd5898(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bd5898 FUN_140bd5898 body=123 status=ok
// SIG undefined FUN_140bd5898(void)

void FUN_140bd5898(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140bd5914 FUN_140bd5914 body=123 status=ok
// SIG undefined FUN_140bd5914(void)

undefined8 *
FUN_140bd5914(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x20))(DAT_14c8407a8,param_2,*param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = TAutoConsoleVariable<bool>::vftable;
  uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x60))();
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 140bd5996 FUN_140bd5996 body=132 status=ok
// SIG undefined FUN_140bd5996(void)

void FUN_140bd5996(undefined8 param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e13790;
  *(ushort *)(puVar1 + 10) = param_3 << 8 | param_3 & 0xff;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x000140bd5a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 140bd5a1a FUN_140bd5a1a body=405 status=ok
// SIG undefined FUN_140bd5a1a(void)

void FUN_140bd5a1a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  FUN_140bd5ce8();
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 0x2d4);
  }
  else {
    bVar4 = *(char *)(lVar1 + 0x654) * '\x02' & 2;
    bVar2 = *(byte *)(param_1 + 0x2d6);
    bVar3 = *(byte *)(param_1 + 0x2dc);
    *(byte *)(param_1 + 0x2d6) = bVar2 & 0xfd | bVar4;
    bVar5 = (*(byte *)(lVar1 + 0x654) & 2) << 5;
    *(byte *)(param_1 + 0x2d6) = bVar2 & 0xbd | bVar4 | bVar5;
    bVar6 = (*(byte *)(lVar1 + 0x654) & 4) << 5;
    *(byte *)(param_1 + 0x2d6) = bVar2 & 0x3d | bVar4 | bVar5 | bVar6;
    bVar7 = *(char *)(lVar1 + 0x656) * '\x02' & 2;
    *(byte *)(param_1 + 0x2dc) = bVar3 & 0xfd | bVar7;
    bVar8 = (*(byte *)(lVar1 + 0x658) & 1) << 3;
    *(byte *)(param_1 + 0x2dc) = bVar3 & 0xf5 | bVar7 | bVar8;
    bVar9 = (*(byte *)(lVar1 + 0x65c) & 1) << 6;
    *(byte *)(param_1 + 0x2dc) = bVar3 & 0xb5 | bVar7 | bVar8 | bVar9;
    *(byte *)(param_1 + 0x2dc) =
         bVar3 & 0x35 | bVar7 | bVar8 | bVar9 | *(char *)(lVar1 + 0x660) << 7;
    bVar3 = (*(byte *)(lVar1 + 0x664) & 1) << 5;
    *(byte *)(param_1 + 0x2d6) = bVar2 & 0x1d | bVar4 | bVar5 | bVar6 | bVar3;
    bVar7 = (*(byte *)(lVar1 + 0x664) & 2) << 2;
    *(byte *)(param_1 + 0x2d6) = bVar2 & 0x15 | bVar4 | bVar5 | bVar6 | bVar3 | bVar7;
    *(byte *)(param_1 + 0x2d6) =
         bVar2 & 5 | bVar4 | bVar5 | bVar6 | bVar3 | bVar7 | (*(byte *)(lVar1 + 0x664) & 4) << 2;
    *(byte *)(param_1 + 0x2de) =
         *(byte *)(param_1 + 0x2de) & 0xbf | (*(byte *)(lVar1 + 0x67c) & 1) << 6;
    *(undefined1 *)(param_1 + 0x332) = *(undefined1 *)(lVar1 + 0x680);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(lVar1 + 0x684);
    FUN_140bd5bb0(param_1,*(undefined4 *)(lVar1 + 0x688));
    *(undefined1 *)(param_1 + 0x2ec) = *(undefined1 *)(lVar1 + 0x665);
    bVar2 = *(byte *)(param_1 + 0x2d4) & 0x7f | *(char *)(lVar1 + 0x678) << 7;
    *(byte *)(param_1 + 0x2d4) = bVar2;
    *(undefined1 *)(param_1 + 0x2d1) = *(undefined1 *)(lVar1 + 0x655);
  }
  *(byte *)(param_1 + 0x2d4) = bVar2 & 0xf7;
  *(byte *)(param_1 + 0x66c) = *(byte *)(param_1 + 0x66c) & 0xef;
  return;
}



// FUNCTION 140bd5bb0 FUN_140bd5bb0 body=141 status=ok
// SIG undefined FUN_140bd5bb0(void)

void FUN_140bd5bb0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  if (0.0 <= param_2) {
    fVar1 = *(float *)(param_1 + 0x2c4);
    if ((fVar1 != param_2) || (NAN(fVar1) || NAN(param_2))) {
      *(float *)(param_1 + 0x2c4) = param_2;
      fVar2 = *(float *)(param_1 + 0x2c8);
      if (((fVar2 == 0.0) && (!NAN(fVar2))) || (param_2 < fVar2)) {
        FUN_140bd5c3e(param_1);
        return;
      }
      if ((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) {
        FUN_140bd5c3e(param_1);
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if ((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) {
          FUN_1414514e6(lVar3,0,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd5c3e FUN_140bd5c3e body=169 status=ok
// SIG undefined FUN_140bd5c3e(void)

void FUN_140bd5c3e(longlong *param_1,float param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (((*(byte *)((longlong)param_1 + 0x2d2) & 8) != 0) || (param_1[0xb7] != 0)) {
    param_2 = 0.0;
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x59) - param_2)) {
    *(float *)(param_1 + 0x59) = param_2;
    if (((param_1[0x16] != 0) &&
        (plVar1 = *(longlong **)(param_1[0x16] + 0x218), plVar1 != (longlong *)0x0)) &&
       (param_1[0xb5] != 0)) {
      uVar2 = (**(code **)(*param_1 + 0x5e8))(param_1);
      (**(code **)(*plVar1 + 0x80))(plVar1,param_1,(int)param_1[0x58],param_2,uVar2);
    }
  }
  return;
}



// FUNCTION 140bd5ce8 FUN_140bd5ce8 body=403 status=ok
// SIG undefined FUN_140bd5ce8(void)

void FUN_140bd5ce8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[0xcc];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0xcc];
  }
  else if (lVar3 == 0) goto LAB_140bd5d2e;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  FUN_1400337aa(lVar3);
LAB_140bd5d2e:
  FUN_144842962(param_1);
  if ((DAT_14c872bf0 == '\0') && ((longlong)(int)param_1[0xd6] != 0)) {
    lVar3 = (longlong)(int)param_1[0xd6] * 0xa0;
    lVar4 = param_1[0xd5] + 0x30;
    do {
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) != 0) {
        FUN_147a3afd8(lVar4,0);
      }
      lVar4 = lVar4 + 0xa0;
      lVar3 = lVar3 + -0xa0;
    } while (lVar3 != 0);
  }
  if ((*(byte *)((longlong)param_1 + 0x675) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x676) = *(byte *)((longlong)param_1 + 0x676) & 0xfd;
  }
  iVar1 = (int)param_1[0xd6];
  iVar2 = 4;
  if (4 < (int)param_1[0xd0]) {
    iVar2 = (int)param_1[0xd0];
  }
  *(int *)(param_1 + 0xd0) = iVar2;
  if (0 < iVar1) {
    lVar4 = 0x40;
    lVar3 = 0;
    do {
      if (*(longlong *)(param_1[0xd5] + lVar4) != 0) {
        FUN_140308182(*(longlong *)(param_1[0xd5] + lVar4),0);
        iVar1 = (int)param_1[0xd6];
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xa0;
    } while (lVar3 < iVar1);
  }
  lVar3 = param_1[0xcc];
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar3 = param_1[0xcc];
  }
  else if (lVar3 == 0) {
    return;
  }
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
                    /* WARNING: Could not recover jumptable at 0x000140bd5e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 140bd5e84 FUN_140bd5e84 body=1495 status=ok
// SIG undefined FUN_140bd5e84(void)

undefined8 FUN_140bd5e84(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  int iVar15;
  double *pdVar16;
  double dVar17;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 *puStack_230;
  int local_21c;
  double *local_218;
  longlong local_210;
  double *local_208;
  undefined1 local_200 [56];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  double local_188 [12];
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar2 = *param_2;
  uVar8 = 1;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x58) == (int)param_2[2])) {
    iVar15 = *(int *)(lVar2 + 0x88);
    local_f8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x44),0);
    local_f8._0_8_ = (double)*(float *)(lVar2 + 0x40);
    local_f8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x44) >> 0x20);
    local_e8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x4c),0);
    local_e8._0_8_ = (double)*(float *)(lVar2 + 0x48);
    local_e8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x4c) >> 0x20);
    local_d8 = *(undefined8 *)(lVar2 + 0x20);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x28);
    local_c8 = *(undefined8 *)(lVar2 + 0x30);
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_21c = iVar15;
    if (plVar3 == (longlong *)0x0) {
      local_100 = *(double *)(param_1 + 0x48);
      local_110 = *(double *)(param_1 + 0x38);
      dStack_108 = *(double *)(param_1 + 0x40);
      local_128 = *(undefined4 *)(param_1 + 0x38);
      uStack_120 = *(undefined4 *)(param_1 + 0x40);
      uStack_124 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      uStack_11c = *(uint *)(param_1 + 0x44) ^ 0x80000000;
      local_118 = -*(double *)(param_1 + 0x48);
      iVar10 = iVar15;
    }
    else {
      pdVar13 = (double *)(param_1 + 0xa0);
      pdVar16 = local_188;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar16 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar16 = pdVar16 + 1;
      }
      (**(code **)(*plVar3 + 0x80))(plVar3,local_1c8);
      FUN_1400c6592(local_1c8,&local_128,local_188);
      iVar10 = *(int *)(lVar2 + 0x88);
    }
    uVar8 = 1;
    if (0 < iVar10) {
      local_210 = param_1 + 0x80;
      local_218 = (double *)(param_1 + 0xa0);
      local_208 = (double *)(param_1 + 0x58);
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar2 + 0x80);
        if (*(longlong *)(lVar2 + 0x80) == 0) {
          lVar12 = lVar2 + 0x78;
        }
        lVar14 = *(longlong *)(lVar12 + lVar11 * 8);
        uVar8 = *(undefined8 *)(lVar14 + 0x10);
        if (1 < iVar15) {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0x38);
            dVar17 = *(double *)(param_1 + 0x40);
            dVar5 = *(double *)(param_1 + 0x48);
          }
          else {
            dVar5 = (local_100 - local_118) * 0.5;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5;
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5;
          }
          local_188[0] = *(double *)(lVar14 + 0x18) - dVar4;
          local_188[1] = *(double *)(lVar14 + 0x20) - dVar17;
          local_188[2] = *(double *)(lVar14 + 0x28) - dVar5;
          local_188[3] = *(double *)(lVar14 + 0x30) + dVar4;
          local_188[4] = *(double *)(lVar14 + 0x38) + dVar17;
          local_188[5] = *(double *)(lVar14 + 0x40) + dVar5;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0xc0);
            dVar17 = *(double *)(param_1 + 200);
            local_1b8 = *(double *)(param_1 + 0xd0);
          }
          else {
            local_1b8 = (local_100 - local_118) * 0.5 + local_118;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5 +
                     (double)CONCAT44(uStack_11c,uStack_120);
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5 +
                    (double)CONCAT44(uStack_124,local_128);
          }
          local_1c8._8_4_ = SUB84(dVar17,0);
          local_1c8._0_8_ = dVar4;
          local_1c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          lVar9 = 0;
          do {
            dVar4 = *(double *)(local_1c8 + lVar9 * 8);
            if ((dVar4 < local_188[lVar9]) ||
               (local_188[lVar9 + 3] <= dVar4 && dVar4 != local_188[lVar9 + 3])) goto LAB_140bd636d;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
        }
        cVar6 = '\x02';
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) {
LAB_140bd621b:
          local_1b8 = (double)CONCAT44(local_1b8._4_4_,0xffffffff);
          dStack_1b0 = 0.0;
          dStack_1a8 = 0.0;
          dStack_1a0 = 0.0;
          local_198 = 0xffffffff;
          local_1c8._8_8_ = *(undefined8 *)(lVar12 + lVar11 * 8);
          local_1c8._0_8_ = lVar2;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if ((*(byte *)(param_1 + 0x51) & 2) == 0) {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = (undefined1 *)0x0;
            }
            else {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = local_200;
            }
            local_238 = 0;
            cVar7 = FUN_140ea601d(uVar8,local_f8);
            iVar15 = local_21c;
            if (cVar7 != '\0') {
              dStack_1a0 = local_208[2];
              dStack_1b0 = *local_208;
              dStack_1a8 = local_208[1];
              if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                  (*(longlong **)(param_1 + 0x98),local_210,local_1c8);
              }
              if (cVar6 != '\0') {
                if ((cVar6 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                  lVar12 = *(longlong *)(param_1 + 0x70);
LAB_140bd632b:
                  *(ulonglong *)(lVar12 + 0x38) = CONCAT44(uStack_194,local_198);
                  *(double *)(lVar12 + 0x28) = dStack_1a8;
                  *(double *)(lVar12 + 0x30) = dStack_1a0;
                  *(double *)(lVar12 + 0x18) = local_1b8;
                  *(double *)(lVar12 + 0x20) = dStack_1b0;
                  *(undefined4 *)(lVar12 + 8) = local_1c8._0_4_;
                  *(undefined4 *)(lVar12 + 0xc) = local_1c8._4_4_;
                  *(undefined4 *)(lVar12 + 0x10) = local_1c8._8_4_;
                  *(undefined4 *)(lVar12 + 0x14) = local_1c8._12_4_;
                  *(undefined1 *)(lVar12 + 0x44) = 1;
                }
                else {
                  lVar12 = *(longlong *)(param_1 + 0x70);
                  if (*(char *)(lVar12 + 0x45) == '\x01') goto LAB_140bd632b;
                  iVar15 = *(int *)(lVar12 + 0x1c50);
                  *(uint *)(lVar12 + 0x1c50) = iVar15 + 1U;
                  if (*(uint *)(lVar12 + 0x1c54) < iVar15 + 1U) {
                    FUN_140ef0e5e(lVar12 + 0x48,iVar15);
                  }
                  lVar14 = lVar12 + 0x48;
                  if (*(longlong *)(lVar12 + 0x1c48) != 0) {
                    lVar14 = *(longlong *)(lVar12 + 0x1c48);
                  }
                  lVar12 = (longlong)iVar15 * 0x38;
                  *(ulonglong *)(lVar14 + 0x30 + lVar12) = CONCAT44(uStack_194,local_198);
                  pdVar13 = (double *)(lVar14 + 0x20 + lVar12);
                  *pdVar13 = dStack_1a8;
                  pdVar13[1] = dStack_1a0;
                  pdVar13 = (double *)(lVar14 + 0x10 + lVar12);
                  *pdVar13 = local_1b8;
                  pdVar13[1] = dStack_1b0;
                  puVar1 = (undefined4 *)(lVar14 + lVar12);
                  *puVar1 = local_1c8._0_4_;
                  puVar1[1] = local_1c8._4_4_;
                  puVar1[2] = local_1c8._8_4_;
                  puVar1[3] = local_1c8._12_4_;
                  iVar15 = local_21c;
                }
                if (*(char *)(param_1 + 0x52) != '\0') {
                  uVar8 = 0;
                  goto LAB_140bd6408;
                }
              }
            }
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                            (*(longlong **)(param_1 + 0x98),local_210,lVar14,lVar2);
          if (cVar6 != '\0') goto LAB_140bd621b;
        }
LAB_140bd636d:
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(lVar2 + 0x88));
      uVar8 = 1;
    }
  }
LAB_140bd6408:
  if ((local_90 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd645c FUN_140bd645c body=467 status=ok
// SIG undefined FUN_140bd645c(void)

void FUN_140bd645c(longlong param_1,int param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = param_2 + 1;
  iVar3 = *(int *)(param_1 + 600);
  if (*(int *)(param_1 + 600) < iVar11) {
    iVar3 = iVar11;
  }
  FUN_1457825ea(param_1 + 0x220,iVar3);
  lVar6 = *(longlong *)(param_3 + 0x10);
  lVar8 = *(longlong *)(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x250) == 0) {
    lVar8 = param_1 + 0x220;
  }
  plVar1 = (longlong *)(lVar8 + (longlong)param_2 * 0x18);
  *plVar1 = lVar6;
  lVar8 = plVar1[1];
  if (lVar8 != param_3) {
    plVar1[1] = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + -1;
      UNLOCK();
    }
  }
  *(undefined4 *)(plVar1 + 2) = param_4;
  *(undefined1 *)((longlong)plVar1 + 0x14) = param_5;
  uVar7 = *(undefined8 *)(param_3 + 0x140);
  iVar3 = *(int *)(param_3 + 0x148);
  lVar8 = param_1 + 0xd0;
  iVar4 = *(int *)(param_1 + 0x218);
  if (iVar11 <= iVar4) {
    iVar11 = iVar4;
  }
  if (param_2 < iVar4) {
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
  }
  else {
    *(int *)(param_1 + 0x218) = iVar11;
    if ((uint)(*(int *)(param_1 + 0x21c) - iVar4) < (uint)(iVar11 - iVar4)) {
      FUN_1481f2194(lVar8,iVar4);
    }
    lVar10 = *(longlong *)(param_1 + 0x210);
    if (*(longlong *)(param_1 + 0x210) == 0) {
      lVar10 = lVar8;
    }
    FUN_14034d33f((longlong)iVar4 * 0xa0 + lVar10,iVar11 - iVar4);
  }
  lVar10 = *(longlong *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x210) == 0) {
    lVar10 = lVar8;
  }
  lVar9 = (longlong)param_2 * 0xa0;
  uVar5 = *(undefined4 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar10 + lVar9) = uVar7;
  *(int *)(lVar10 + 8 + lVar9) = iVar3;
  *(undefined8 *)(lVar10 + 0x10 + lVar9) = 0;
  *(undefined4 *)(lVar10 + 0x18 + lVar9) = 0;
  *(undefined4 *)(lVar10 + 0x38 + lVar9) = 0xffffffff;
  *(undefined4 *)(lVar10 + 0x3c + lVar9) = param_4;
  puVar2 = (undefined8 *)(lVar10 + 0x40 + lVar9);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(longlong *)(lVar10 + 0x58 + lVar9) = lVar6 + 0x20;
  *(longlong *)(lVar10 + 0x68 + lVar9) = lVar6;
  *(longlong *)(lVar10 + 0x60 + lVar9) = lVar6 + 0x24;
  *(undefined4 *)(lVar10 + 0x70 + lVar9) = uVar5;
  *(longlong *)(lVar10 + 0x50 + lVar9) = lVar6 + 0x30;
  if (0 < iVar3) {
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x210);
    }
    *(undefined4 *)(lVar8 + 0x28 + lVar9) = *(undefined4 *)(param_3 + 0x158);
    *(undefined8 *)(lVar8 + 0x20 + lVar9) = *(undefined8 *)(param_3 + 0x150);
  }
  return;
}



// FUNCTION 140bd662f FUN_140bd662f body=49 status=ok
// SIG undefined FUN_140bd662f(void)

longlong FUN_140bd662f(void)

{
  if (DAT_14cab1b70 == 0) {
    FUN_140f50038(&DAT_14cab1b70,&PTR_s__Script_MovieScene_14a45ad68);
  }
  return DAT_14cab1b70;
}



// FUNCTION 140bd6660 FUN_140bd6660 body=439 status=ok
// SIG undefined FUN_140bd6660(void)

void FUN_140bd6660(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                  wchar_t *param_9)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = param_8[2];
  local_c0 = &local_48;
  local_48 = *param_8;
  uStack_40 = param_8[1];
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_c8 = &local_68;
  local_58 = param_7[2];
  local_88 = *param_6;
  uStack_84 = param_6[1];
  uStack_80 = param_6[2];
  uStack_7c = param_6[3];
  local_d0 = &local_88;
  local_78 = *(undefined8 *)(param_6 + 4);
  local_b8 = param_9;
  local_d8 = CONCAT31(local_d8._1_3_,param_5);
  FUN_140bd6818(param_1,param_2,param_3);
  if (param_3 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_a0 = &local_30;
      local_30 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_142b4754c;
      local_a8 = &LAB_1483e40eb;
      local_b0 = &LAB_146486986;
      local_b8 = L"Engine";
      local_c0 = (undefined8 *)0x0;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0x10000005);
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,8);
      local_d8 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      FUN_1457a2934(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd6818 FUN_140bd6818 body=3649 status=ok
// SIG undefined FUN_140bd6818(void)

void FUN_140bd6818(longlong *param_1,code *param_2,longlong *param_3,double param_4,char param_5,
                  longlong *param_6,undefined8 *param_7,longlong *param_8,void *param_9)

{
  int *piVar1;
  longlong *_Dst;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  float _X;
  undefined1 auStack_278 [32];
  uint local_258;
  undefined8 *local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  code *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  code *local_218;
  code *local_210;
  int local_1fc;
  longlong *local_1f8;
  code *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  longlong *local_168;
  undefined1 local_160 [8];
  longlong local_158 [4];
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  _Dst = param_1 + 0x203;
  local_1f0 = param_2;
  memcpy(_Dst,param_9,0x100);
  *(undefined1 *)(param_1 + 0x223) = 1;
  if (((*(char *)((longlong)param_1 + 0x136b) == '\x01') && ((longlong *)param_1[0x36] == param_3))
     || (((param_5 == '\0' &&
          ((*(char *)((longlong)param_1 + 0x136c) == '\x01' &&
           (lVar11 = param_1[0x1c7], lVar11 != 0)))) &&
         ((9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x128)) ||
          ((9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x130)) ||
           (9.999999747378752e-05 < ABS(*(double *)(lVar11 + 0x138)))))))))) goto LAB_140bd6e29;
  if ((param_1[0x1c2] != 0) &&
     (((param_3 != param_1 && ((*(byte *)(param_1[0x1c2] + 0x251) & 8) != 0)) &&
      (param_3 != (longlong *)0x0)))) {
    lVar11 = FUN_140d12354();
    if ((((*(int *)(lVar11 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) && ((*(byte *)((longlong)param_3 + 0x62) & 4) == 0)) &&
       (cVar6 = (**(code **)(param_3[0x7c] + 0x30))(param_3 + 0x7c,param_4), cVar6 == '\0')) {
      lVar11 = param_1[0x1c7];
      if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x360) & 1) == 0)) {
        *(byte *)(lVar11 + 0x360) = *(byte *)(lVar11 + 0x360) | 1;
        *(undefined1 *)(param_1[0x1c7] + 0x4c4) = 1;
      }
      goto LAB_140bd6e29;
    }
  }
  local_1f8 = param_1 + 0x21a;
  plVar8 = (longlong *)FUN_14485cccc();
  if (plVar8 == param_1) {
    FUN_140871de8(local_1f8,param_3);
    if (param_4 == 0.0) {
      *(undefined4 *)(param_1 + 0x21e) = 0;
      iVar7 = 0;
    }
    else {
      uVar15 = *(uint *)((longlong)param_4 + 0xc);
      *(uint *)(param_1 + 0x21e) = uVar15;
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar7 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        local_1fc = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        local_1e8 = lVar11;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        local_1fc);
        }
        LOCK();
        iVar7 = *(int *)(local_1e8 + 0x10);
        bVar16 = iVar7 == 0;
        if (bVar16) {
          *(int *)(local_1e8 + 0x10) = local_1fc;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar7 = local_1fc;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x10f4) = iVar7;
    param_1[0x221] = 0;
  }
  local_168 = (longlong *)param_8[2];
  local_178 = *param_8;
  lStack_170 = param_8[1];
  uStack_190 = *param_7;
  uStack_188 = param_7[1];
  local_180 = param_7[2];
  local_1a8 = *param_6;
  lStack_1a0 = param_6[1];
  local_198 = param_6[2];
  local_1c8 = local_1f0;
  uStack_1b0 = CONCAT71(uStack_1b0._1_7_,param_5);
  uStack_1c0 = param_3;
  local_1b8 = param_4;
  memcpy(local_160,_Dst,0x100);
  uVar9 = FUN_14477b072(param_1,DAT_14cac9ba0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar9,&local_1c8);
  if ((param_3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x1119) == '\0')) {
    uVar9 = FUN_140bd76f6();
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar9);
    if (plVar8 != (longlong *)0x0) {
      uVar9 = FUN_140bd76f6();
      plVar12 = (longlong *)FUN_144718840(plVar8,uVar9);
      if (((plVar8 != plVar12) && (plVar12 != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,param_1 + 0x176,_Dst), cVar6 != '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x1119) = 1;
        FUN_140871de8(&local_1c8,param_3);
        *(undefined4 *)local_1f8 = (undefined4)local_1c8;
        *(undefined4 *)((longlong)local_1f8 + 4) = local_1c8._4_4_;
        *(int *)(local_1f8 + 1) = (int)uStack_1c0;
        *(undefined4 *)((longlong)local_1f8 + 0xc) = uStack_1c0._4_4_;
        *(undefined4 *)(local_1f8 + 2) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_1f8 + 0x14) = local_1b8._4_4_;
        *(undefined4 *)(local_1f8 + 3) = (undefined4)uStack_1b0;
        *(undefined4 *)((longlong)local_1f8 + 0x1c) = uStack_1b0._4_4_;
        if ((((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
           ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)) {
          *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
          (**(code **)(*param_1 + 0x6c0))(param_1);
        }
        *(undefined1 *)((longlong)param_1 + 0x1119) = 0;
        goto LAB_140bd6e29;
      }
    }
  }
  if (param_1[0x1c2] == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)CONCAT71((int7)((ulonglong)param_8 >> 8),*(undefined1 *)(param_1[0x1c2] + 0x481))
    ;
  }
  uVar13 = uVar15;
  if ((param_3 == (longlong *)0x0) || ((*(byte *)((longlong)param_3 + 0x62) & 4) == 0)) {
LAB_140bd69c8:
    memcpy(&local_1c8,_Dst,0x100);
    FUN_1447cd2ec(param_1 + 0x1a3,&local_1c8);
    if ((*(char *)((longlong)param_1 + 0x1369) == '\x01') && (lVar11 = param_1[0x1c2], lVar11 != 0))
    {
      lVar10 = *(longlong *)(lVar11 + 0x530);
      if (lVar10 == 0) {
        uVar9 = FUN_140067708();
        lVar10 = FUN_14477b664(uVar9);
        *(longlong *)(lVar11 + 0x530) = lVar10;
      }
      if (*(longlong *)(lVar11 + 0x538) == 0) {
        if ((lVar10 != 0) && (*(longlong *)(lVar11 + 0x528) != 0)) {
          plVar8 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar6 == '\0')) {
            *(undefined8 *)(lVar11 + 0x538) = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar11 + 0x528));
            *(longlong *)(lVar11 + 0x538) = lVar10;
            if (lVar10 != 0) goto LAB_140bd6a3e;
          }
        }
      }
      else {
LAB_140bd6a3e:
        if ((param_1[0x103] != 0) &&
           (FUN_1403c747e(param_1[0x103],&local_1c8,0), local_1c8 != (code *)0x0)) {
          local_258 = 0;
          FUN_14071ab80(local_1c8,&local_1e0,param_1[0x1c2] + 0x528,param_1);
          pcVar4 = local_1c8;
          local_1e0 = 0;
          local_1d8 = 0xffffffffffffffff;
          *(undefined1 *)((longlong)param_1 + 0x1369) = 0;
          if ((local_1c8 != (code *)0x0) &&
             ((*(int *)(local_1c8 + 0x108) = *(int *)(local_1c8 + 0x108) + -1,
              *(int *)(local_1c8 + 0x130) < 1 &&
              (FUN_1400847bc(local_1c8 + 0xb8,0), *(int *)(pcVar4 + 0x108) == 0)))) {
            FUN_140087e46(pcVar4);
            if (*(longlong *)pcVar4 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140bd6ae1;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar4);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar4);
            }
          }
        }
      }
    }
LAB_140bd6ae1:
    bVar14 = *(byte *)(param_1 + 0x1db);
    if ((bVar14 & 0x10) == 0) {
LAB_140bd6af2:
      bVar14 = 0;
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x1151) & 4) != 0) {
        cVar6 = FUN_14578266e(param_1,_Dst);
        if (cVar6 != '\0') goto LAB_140bd6af2;
        bVar14 = *(byte *)(param_1 + 0x1db);
      }
      bVar14 = bVar14 >> 4;
    }
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_1c8 = FUN_1449e2820;
      local_210 = FUN_14081d0ea;
      local_218 = FUN_1427b09ee;
      local_228 = &LAB_148630fef;
      local_230 = FUN_1464b6a91;
      local_238 = L"Engine";
      local_240 = 0;
      local_248 = 0x10004001;
      local_250 = (undefined8 *)CONCAT44(local_250._4_4_,8);
      local_258 = 0x28;
      local_220 = &local_1c8;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar11 = FUN_144718840(param_3,DAT_14cb56270);
    if (lVar11 == 0) goto LAB_140bd69c8;
    memcpy(&local_1c8,_Dst,0x100);
    FUN_1447cd2ec(param_1 + 0x1a5,&local_1c8);
    bVar14 = *(byte *)(param_1 + 0x1db) >> 5;
    if ((param_1[0x176] == 0) || ((-1 < (short)param_1[0x177] && (param_1[0x178] == 0)))) {
LAB_140bd75a2:
      plVar8 = param_1 + 0x1ab;
LAB_140bd75ac:
      memcpy(&local_1c8,_Dst,0x100);
      FUN_1447cd2ec(plVar8,&local_1c8);
    }
    else {
      iVar7 = FUN_14486116a(param_1 + 0x172,param_3);
      if (iVar7 == 0) {
        plVar8 = param_1 + 0x1a7;
        goto LAB_140bd75ac;
      }
      if (iVar7 == 1) goto LAB_140bd75a2;
      if (iVar7 == 2) {
        memcpy(&local_1c8,_Dst,0x100);
        FUN_1447cd2ec(param_1 + 0x1a9,&local_1c8);
        bVar14 = bVar14 | *(byte *)(param_1 + 0x1db) >> 6;
        uVar13 = 2;
        if ((*(byte *)(param_1 + 0x1dc) & 8) == 0) {
          uVar13 = uVar15 & 0xff;
        }
      }
    }
  }
  FUN_140bd765a(param_1 + 0x1c3,0,0);
  if ((param_1[0x1e5] == 0) || (0xfffffffd < (int)param_1[0x1e6] - 1U)) {
LAB_140bd6d8f:
    if (((param_1[0x1c7] != 0) &&
        (plVar8 = *(longlong **)(param_1[0x1c7] + 0x118), plVar8 != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*plVar8 + 0x480))(plVar8,0), cVar6 != '\0')) {
      plVar8 = (longlong *)param_1[0x1c7];
      lVar11 = plVar8[0x16];
      if (lVar11 == 0) {
        lVar11 = FUN_1448abda6(plVar8);
        if (lVar11 == 0) goto LAB_140bd6deb;
        lVar11 = plVar8[0x16];
        if (lVar11 == 0) {
          lVar11 = FUN_1448abda6(plVar8);
        }
      }
      (**(code **)(*plVar8 + 0x4c8))(plVar8,_Dst,*(undefined4 *)(lVar11 + 0x6f4),&DAT_14c8464e0);
    }
LAB_140bd6deb:
    if (((bVar14 & 1) != 0) &&
       ((((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
        ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)))) {
      *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
      (**(code **)(*param_1 + 0x6c0))(param_1);
    }
    if ((((*(byte *)(param_1 + 0x228) & 1) != 0) && (lVar11 = param_1[0x1c2], lVar11 != 0)) &&
       (((*(byte *)((longlong)param_1 + 0x65) & 2) == 0 &&
        (((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0 && ((*(byte *)(param_1 + 0x69) & 2) == 0)))))) {
      uVar9 = FUN_14485cccc(local_1f8);
      cVar6 = (**(code **)(*param_1 + 0x658))(param_1,uVar9,lVar11 + 0x479);
      if (cVar6 == '\0') {
        if (((*(byte *)((longlong)param_1 + 0xed9) & 1) != 0) &&
           (((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)))) {
          *(byte *)((longlong)param_1 + 0x1151) = *(byte *)((longlong)param_1 + 0x1151) | 0x10;
        }
      }
      else {
        FUN_140bd7d9e(param_1,_Dst,0,uVar13);
      }
    }
  }
  else if ((param_1[0x1c7] == 0) || ((*(byte *)(param_1[0x1c7] + 0x181) & 2) == 0)) {
    if ((param_1[0x1e8] == 0) || (0xfffffffd < (int)param_1[0x1e9] - 1U)) {
      FUN_140bd7c84(param_1,&local_1c8,param_1 + 0x1e5);
      if (((code *)param_1[0x1e8] != local_1c8) || ((int)param_1[0x1e9] != (int)uStack_1c0)) {
        param_1[0x1e8] = (longlong)local_1c8;
        *(int *)(param_1 + 0x1e9) = (int)uStack_1c0;
        param_1[0x1ea] = 0;
      }
    }
    lVar11 = FUN_1401f6e4a(param_1 + 0x1e8);
    lVar10 = FUN_1447210f0(param_1);
    if ((lVar10 != 0 && lVar11 != 0) &&
       ((double)*(float *)(param_1 + 0x1ee) <= *(double *)(lVar10 + 0x6d0))) {
      FUN_14083167e(local_1f0,&local_1c8,0);
      _X = (float)(local_1b8 * local_1b8 +
                  (double)local_1c8 * (double)local_1c8 + (double)uStack_1c0 * (double)uStack_1c0);
      if (ABS(_X) <= 1e-08) {
        lVar3 = param_1[0x1c7];
        if (lVar3 == 0) {
          _X = 0.0;
        }
        else {
          _X = (float)(*(double *)(lVar3 + 0x138) * *(double *)(lVar3 + 0x138) +
                      *(double *)(lVar3 + 0x128) * *(double *)(lVar3 + 0x128) +
                      *(double *)(lVar3 + 0x130) * *(double *)(lVar3 + 0x130));
        }
      }
      if (*(float *)(lVar11 + 0x1c8) * *(float *)(lVar11 + 0x1c8) <= _X) {
        dVar2 = *(double *)(lVar10 + 0x6d0);
        *(float *)(param_1 + 0x1ee) = (float)dVar2;
        *(float *)(param_1 + 0x1ee) = (float)dVar2 + *(float *)(lVar11 + 0x1cc);
        FUN_1407f7f84(&local_1c8,lVar10);
        if (uStack_1c0 != (longlong *)0x0) {
          iVar7 = (int)uStack_1c0[1];
          do {
            if (iVar7 == 0) {
              plVar8 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar5 = (int)uStack_1c0[1];
            bVar16 = iVar7 == iVar5;
            if (bVar16) {
              *(int *)(uStack_1c0 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
            plVar8 = uStack_1c0;
          } while (!bVar16);
          LOCK();
          piVar1 = (int *)((longlong)uStack_1c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*uStack_1c0 + 0x10))();
          }
          pcVar4 = local_1c8;
          if (plVar8 != (longlong *)0x0) {
            if (local_1c8 != (code *)0x0) {
              local_198 = 0;
              uStack_190 = 0;
              local_1a8 = 0;
              lStack_1a0 = 0;
              local_1b8 = 0.0;
              uStack_1b0 = 0;
              local_1c8 = (code *)0x0;
              uStack_1c0 = (longlong *)0x0;
              uStack_188 = CONCAT44(uStack_188._4_4_,0xc0);
              local_178 = 0;
              local_168 = (longlong *)0x0;
              local_138 = 0;
              local_128 = (longlong *)0x0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_e8 = 0;
              local_e0 = 0x3ff0000000000000;
              local_d8 = 0x3ff0000000000000;
              local_d0 = 0x3ff0000000000000;
              local_c8 = 0;
              local_c4 = *(undefined4 *)((longlong)param_1 + 0x74);
              if (_X < 0.0) {
                local_c0 = sqrtf(_X);
              }
              else {
                local_c0 = SQRT(_X);
              }
              if (param_1 != (longlong *)0x0) {
                local_248 = 0;
                local_258 = local_258 & 0xffffff00;
                local_250 = &local_1c8;
                FUN_1408f2522(pcVar4,lVar11,param_1,_Dst);
              }
              if (local_138 != 0) {
                plVar12 = local_128;
                if (local_128 == (longlong *)0x0) {
                  plVar12 = local_118;
                }
                (**(code **)(*plVar12 + 0x10))();
              }
              if (local_178 != 0) {
                plVar12 = local_168;
                if (local_168 == (longlong *)0x0) {
                  plVar12 = local_158;
                }
                (**(code **)(*plVar12 + 0x10))();
              }
              if (local_198 != 0) {
                FUN_1400020a8();
              }
              if (local_1a8 != 0) {
                FUN_1400020a8();
              }
              if (local_1b8 != 0.0) {
                FUN_1400020a8();
              }
              if (local_1c8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            LOCK();
            plVar12 = plVar8 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
      }
    }
    goto LAB_140bd6d8f;
  }
  *(undefined1 *)(param_1 + 0x223) = 0;
LAB_140bd6e29:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bd765a FUN_140bd765a body=155 status=ok
// SIG undefined FUN_140bd765a(void)

void FUN_140bd765a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)((longlong)param_1 + 0x14) != 0 || (int)param_1[2] != 0) || (int)param_1[3] != 0)
       || *(int *)((longlong)param_1 + 0x1c) != 0) &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140bd76c0;
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
    if (*param_1 != 0) {
      local_28 = (undefined4)param_1[2];
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_20 = (undefined4)param_1[3];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x1c);
      FUN_140bd77dc(*param_1,&local_28,param_2,param_3);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_140bd76c0:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bd76f6 FUN_140bd76f6 body=228 status=ok
// SIG undefined FUN_140bd76f6(void)

longlong FUN_140bd76f6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5bf50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148681563;
    local_40 = FUN_1464d3436;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxConditionalCollisionComponent",&DAT_14cb5bf50,
                  &DAT_148681562);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bf50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd77dc FUN_140bd77dc body=618 status=ok
// SIG undefined FUN_140bd77dc(void)

void FUN_140bd77dc(longlong param_1,int *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
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
  undefined8 local_70;
  undefined8 local_68;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0)
  goto LAB_140bd7883;
  plVar1 = (longlong *)(param_1 + 0x140);
  uVar4 = FUN_1447addd0(param_2,0x10);
  iVar5 = FUN_1404fa484(plVar1,uVar4,param_2);
  if (iVar5 != -1) {
    lVar8 = *plVar1 + (longlong)iVar5 * 0x40;
    if ((lVar8 != 0) &&
       (plVar7 = (longlong *)(*plVar1 + (longlong)iVar5 * 0x40 + 0x10), plVar7 != (longlong *)0x0))
    {
      if ((param_3 != 0) && (*plVar7 != 0)) {
        cVar3 = FUN_144904448(lVar8 + 0x20);
        if (cVar3 != '\0') {
          lVar8 = *plVar7;
          if ((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) ||
               (*(int *)(param_1 + 0x1c) == 0)) ||
              (uVar2 = *(uint *)(param_1 + 0x18), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
          {
LAB_140bd79a2:
            lVar6 = 0;
          }
          else {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x1c))) ||
               ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_140bd79a2;
            lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
            if (lVar6 == 0) goto LAB_140bd79a2;
            if (DAT_14cac9ca8 == 0) {
              local_90 = &local_58;
              local_58 = FUN_141030f22;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_98 = &LAB_1478c0a72;
              local_a0 = &LAB_1417b2375;
              local_a8 = L"Engine";
              local_b0 = 0x1000000000;
              local_b8 = 0x10000004;
              local_c0 = 8;
              local_c8 = 0x390;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
            goto LAB_140bd79a2;
          }
          local_c8 = 0;
          FUN_14084a448(lVar8,&local_70,param_3,lVar6);
          local_70 = 0;
          local_68 = 0xffffffffffffffff;
          goto LAB_140bd7878;
        }
      }
      cVar3 = FUN_144904448(lVar8 + 0x20);
      if (cVar3 != '\0') {
        FUN_14072d42a(lVar8 + 0x20,param_4);
      }
    }
  }
LAB_140bd7878:
  FUN_140bd7a48(plVar1,param_2);
LAB_140bd7883:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd7a48 FUN_140bd7a48 body=159 status=ok
// SIG undefined FUN_140bd7a48(void)

undefined8 FUN_140bd7a48(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x40;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_140bd7ae8(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 140bd7ae8 FUN_140bd7ae8 body=295 status=ok
// SIG undefined FUN_140bd7ae8(void)

void FUN_140bd7ae8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x40 + 0x38);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x38);
  lVar2 = *param_1 + lVar2;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0xffffffffffffffff;
  if ((*(longlong *)(lVar2 + 0x18) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x50));
  }
  plVar4 = *(longlong **)(lVar2 + 0x10);
  if (plVar4 == (longlong *)0x0) goto LAB_140bd7b9d;
  *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
  if (((int)plVar4[0x26] < 1) && (FUN_1400847bc(plVar4 + 0x17,0), (int)plVar4[0x21] == 0)) {
    FUN_140087e46(plVar4);
    if (*plVar4 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140bd7b96;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
    }
  }
LAB_140bd7b96:
  *(longlong *)(lVar2 + 0x10) = 0;
LAB_140bd7b9d:
  FUN_140bd7c10(param_1,param_2);
  return;
}



// FUNCTION 140bd7c10 FUN_140bd7c10 body=116 status=ok
// SIG undefined FUN_140bd7c10(void)

void FUN_140bd7c10(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140bd7c84 FUN_140bd7c84 body=207 status=ok
// SIG undefined FUN_140bd7c84(void)

longlong * FUN_140bd7c84(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x4fc71eb4;
  param_2[2] = 0;
  if (*(int *)(param_1 + 0xf30) == 0x3d418293) {
    local_38 = *(undefined4 *)(param_1 + 0xe44);
    local_40 = param_1;
    local_30 = (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x18))(param_1 + 0x3c8);
    FUN_141125464(param_3,&local_58,&local_40);
    if (local_58 != 0 || local_50 != 0x4fc71eb4) {
      *param_2 = local_58;
      *(int *)(param_2 + 1) = local_50;
      param_2[2] = 0;
    }
  }
  else {
    *param_2 = *param_3;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bd7d9e FUN_140bd7d9e body=5234 status=ok
// SIG undefined FUN_140bd7d9e(void)

undefined8 FUN_140bd7d9e(longlong *param_1,longlong param_2,char param_3,undefined1 param_4)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  double dVar20;
  double *pdVar21;
  uint uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  uint *puVar25;
  longlong lVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined4 local_340;
  uint local_338;
  undefined8 local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  uint *local_310;
  code *local_308;
  code *local_300;
  char local_2f1;
  longlong *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined1 local_2d8 [24];
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  longlong *local_250;
  double local_248;
  double local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  ushort local_220;
  undefined4 local_21c;
  byte local_218;
  undefined4 local_214;
  undefined2 local_210;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_190;
  undefined4 local_114;
  uint *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) {
    lVar26 = param_2 + 0xb8;
    plVar14 = (longlong *)FUN_14485cccc(lVar26);
    if (*(int *)(param_2 + 0xdc) == 0) {
LAB_140bd7f8d:
      plVar23 = (longlong *)0x0;
    }
    else {
      uVar22 = *(uint *)(param_2 + 0xd8);
      plVar23 = (longlong *)0x0;
      if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
        puVar24 = (undefined8 *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
        if ((puVar24 == (undefined8 *)0x0) ||
           ((*(int *)(puVar24 + 2) != *(int *)(param_2 + 0xdc) ||
            ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_140bd7f8d;
        plVar23 = (longlong *)*puVar24;
      }
    }
    if (plVar14 != (longlong *)0x0 || plVar23 != (longlong *)0x0) {
      plVar19 = *(longlong **)(param_2 + 0xf0);
      *(undefined1 *)(param_1 + 0x239) = param_4;
      *(undefined1 *)(param_1 + 0x1fb) = 0x80;
      *(byte *)((longlong)param_1 + 0x1151) = *(byte *)((longlong)param_1 + 0x1151) & 0xef;
      fVar31 = 0.0;
      local_2f1 = param_3;
      if (plVar14 != (longlong *)0x0) {
        if (DAT_14cb56270 == 0) {
          local_310 = &local_1b8;
          local_1b8 = 0x449e2820;
          uStack_1b4 = 1;
          local_300 = FUN_14081d0ea;
          local_308 = FUN_1427b09ee;
          local_318 = &LAB_148630fef;
          local_320 = FUN_1464b6a91;
          local_328 = L"Engine";
          local_330 = 0;
          local_338 = 0x10004001;
          local_340 = 8;
          local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar15 = (longlong *)FUN_144718840(plVar14,DAT_14cb56270);
        if (plVar15 != (longlong *)0x0) {
          lVar16 = (**(code **)(*plVar15 + 0x20))(plVar15);
          if (lVar16 != 0) {
            local_1b8 = 0x4893d4e4;
            uStack_1b4 = 1;
            uStack_1b0 = 0;
            FUN_14111ac76(lVar16 + 400,&local_238,param_1);
            param_1[0x238] = (longlong)local_238;
          }
          if ((param_1[0x176] == 0) ||
             (((-1 < (short)param_1[0x177] && (param_1[0x178] == 0)) ||
              (iVar12 = FUN_14486116a(param_1 + 0x172,plVar14), iVar12 != 2)))) {
            lVar16 = param_1[0x1c2];
            if (lVar16 != 0) {
              local_2f0 = plVar19;
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
              uVar3 = *(ushort *)(lVar16 + 0x282);
              goto LAB_140bd8778;
            }
          }
          else {
            lVar16 = param_1[0x1c2];
            if (lVar16 != 0) {
              local_2f0 = plVar19;
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
              uVar3 = *(ushort *)(lVar16 + 0x280);
LAB_140bd8778:
              lVar16 = (ulonglong)((uint)uVar3 * 0x50) + DAT_14c9a6588;
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
              local_1b8 = local_1b8 & 0xffffff00;
              local_190 = (ulonglong)local_190._4_4_ << 0x20;
              FUN_1456bb102(&local_1b8,param_1);
              FUN_1448729ea(lVar16,&local_b8,&local_1b8);
              if (local_98 == 3) {
                local_98 = 3;
                fVar31 = (float)local_b8;
              }
              else {
                FUN_1400b56fe(&local_238,&local_b8,3);
                fVar31 = 0.0;
                if (local_218 != 0) {
                  fVar31 = (float)local_238;
                }
                pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_218 * 0x120))
                ;
                if (pcVar4 != (code *)0x0) {
                  puVar24 = &local_238;
                  if (0x18 < local_220) {
                    puVar24 = (undefined8 *)local_238;
                  }
                  (*pcVar4)(puVar24);
                }
                if (0x18 < local_220) {
                  FUN_1400020a8(local_238);
                }
              }
              plVar19 = local_2f0;
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
              if (pcVar4 != (code *)0x0) {
                puVar24 = &local_b8;
                if (0x18 < (ushort)uStack_a0) {
                  puVar24 = local_b8;
                }
                (*pcVar4)(puVar24);
              }
              if (0x18 < (ushort)uStack_a0) {
                FUN_1400020a8(local_b8);
              }
              FUN_1448173f8(&local_190);
              if (((char)local_1b8 == '\x03') && (local_1a8 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_1a8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_1a8 + 0x10))();
                }
              }
            }
          }
        }
      }
      lVar16 = FUN_144860cdc(plVar14);
      if (lVar16 != 0) {
        FUN_147f5db78(lVar16,param_1[0x36],0);
      }
      if (((0.0 < fVar31) && (0.0001 < fVar31)) &&
         (((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)))) {
        *(float *)((longlong)param_1 + 0xee4) = fVar31;
        *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) | 4;
        (**(code **)(*param_1 + 0x388))(param_1,fVar31);
        (**(code **)(*param_1 + 0x6b0))(param_1);
      }
      if (plVar19 == (longlong *)0x0 || plVar14 == (longlong *)0x0) {
        if (plVar14 != (longlong *)0x0 && plVar19 == (longlong *)0x0) {
          if (DAT_14caf64b8 == 0) {
            local_310 = &local_1b8;
            local_1b8 = 0x41030f22;
            uStack_1b4 = 1;
            local_300 = FUN_14081d0ea;
            local_308 = FUN_142b4754c;
            local_318 = &LAB_147c45ce0;
            local_320 = (code *)&LAB_1463f1ff4;
            local_328 = L"Game";
            local_330 = 0x4000000000;
            local_338 = 0x10000004;
            local_340 = 8;
            local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x428);
            FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
          }
          if ((((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
               (plVar23 == (longlong *)0x0)) ||
              (*(longlong *)
                (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
               DAT_14caf64b8 + 0x30)) ||
             ((plVar23 != (longlong *)plVar14[0x39] &&
              ((*(byte *)((longlong)plVar23 + 0x1f9) & 8) == 0)))) {
            local_2f0 = (longlong *)0x0;
            plVar19 = local_2f0;
          }
          else {
            plVar19 = (longlong *)plVar23[0x24];
            if (plVar19 == (longlong *)0x0) {
LAB_140bd8648:
              plVar19 = (longlong *)FUN_140849bbe(plVar14);
              plVar15 = plVar19;
              if (((plVar19 == (longlong *)0x0) || (iVar12 = FUN_1417c02a0(plVar19), iVar12 < 1)) &&
                 (plVar19 = (longlong *)FUN_146208468(plVar14), plVar19 == (longlong *)0x0)) {
                local_2f0 = (longlong *)0x0;
                plVar19 = local_2f0;
                goto LAB_140bd825c;
              }
            }
            else {
              lVar16 = FUN_14081cebe();
              if (((*(int *)(plVar19[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
                  (*(longlong *)
                    (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                   lVar16 + 0x30)) ||
                 (((*(byte *)((longlong)plVar19 + 0x1f9) & 8) != 0 ||
                  ((iVar12 = (**(code **)(*plVar19 + 0x570))(plVar19), iVar12 == 0 ||
                   ((longlong *)plVar19[0x15] != plVar14)))))) goto LAB_140bd8648;
              if (DAT_14cad2858 == 0) {
                local_310 = &local_1b8;
                local_1b8 = 0x44a7958c;
                uStack_1b4 = 1;
                local_300 = FUN_14081d0ea;
                local_308 = (code *)&LAB_146395584;
                local_318 = &LAB_147a0ba80;
                local_320 = (code *)&LAB_14575ccce;
                local_328 = L"Engine";
                local_330 = 0x40000000000;
                local_338 = 0x10000004;
                local_340 = 0x10;
                local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x1180);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              if ((*(int *)(plVar19[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
                 (plVar15 = plVar19,
                 *(longlong *)
                  (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
                 != DAT_14cad2858 + 0x30)) {
                plVar15 = (longlong *)0x0;
              }
            }
            (**(code **)(*param_1 + 0x328))(param_1);
            dVar5 = (double)CONCAT44(uStack_1b4,local_1b8);
            dVar6 = (double)CONCAT44(uStack_1ac,uStack_1b0);
            dVar20 = (double)local_1a8 * (double)local_1a8 + dVar5 * dVar5 + dVar6 * dVar6;
            if (((dVar20 != 1.0) ||
                (plVar23 = local_1a8, dVar9 = dVar6, dVar10 = dVar5, NAN(dVar20))) &&
               (plVar23 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar20)) {
              dVar20 = 1.0 / SQRT(dVar20);
              plVar23 = (longlong *)((double)local_1a8 * dVar20);
              dVar9 = dVar6 * dVar20;
              dVar10 = dVar5 * dVar20;
            }
            memset(&local_1b8,0,0x100);
            local_e8 = 0xffffffff;
            uStack_1b4 = 0x3f800000;
            local_114 = 0xffffffff;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb8a3e0) && (FUN_144b3d300(&DAT_14cb8a3e0), DAT_14cb8a3e0 == -1))
            {
              local_238 = "AttachToMeshTrace";
              uStack_230 = (double)CONCAT35(uStack_230._5_3_,0x11);
              uVar22 = FUN_14001a6c0(&local_238,1);
              DAT_14cb8a3d8 = (undefined8 *)(ulonglong)uVar22;
              _Init_thread_footer(&DAT_14cb8a3e0);
            }
            local_348 = &local_238;
            local_214 = 0;
            uStack_230 = 0.0;
            local_210 = 0x101;
            local_1e8 = 0;
            local_1e0 = 0x800000000;
            local_1c8 = 0;
            local_1c0 = 0x400000000;
            local_21c = 0;
            local_238 = (char *)DAT_14cb8a3d8;
            local_218 = 0;
            local_228 = 7.291122019556814e-304;
            local_220 = CONCAT11(local_220._1_1_,1);
            local_258 = (double)plVar23 * 1000.0 + *(double *)(param_2 + 0x20);
            local_260 = dVar9 * 1000.0 + *(double *)(param_2 + 0x18);
            local_268 = dVar10 * 1000.0 + *(double *)(param_2 + 0x10);
            local_270 = *(double *)(param_2 + 0x20) - (double)plVar23;
            local_278 = *(double *)(param_2 + 0x18) - dVar9;
            local_280 = *(double *)(param_2 + 0x10) - dVar10;
            cVar11 = (**(code **)(*plVar19 + 0x978))(plVar19,&local_1b8);
            if (cVar11 == '\0') {
              puVar24 = (undefined8 *)(param_2 + 0x10);
              if (plVar19 == plVar15) {
                local_298 = *(undefined4 *)puVar24;
                uStack_294 = *(undefined4 *)(param_2 + 0x14);
                uStack_290 = *(undefined4 *)(param_2 + 0x18);
                uStack_28c = *(undefined4 *)(param_2 + 0x1c);
                local_288 = *(undefined8 *)(param_2 + 0x20);
                local_340 = CONCAT31(local_340._1_3_,1);
                local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffff00000000);
                FUN_147a0ff94(plVar15,&local_250,&local_298,&local_b8);
                local_c8 = local_250;
                if (local_250 == (longlong *)0x0) {
                  local_198 = *(double *)(param_2 + 0x20);
                  uVar13 = *(undefined4 *)puVar24;
                  uVar28 = *(undefined4 *)(param_2 + 0x14);
                  uVar29 = *(undefined4 *)(param_2 + 0x18);
                  uVar30 = *(undefined4 *)(param_2 + 0x1c);
                }
                else {
                  local_198 = (double)CONCAT44(uStack_a4,local_a8);
                  uVar13 = (float)local_b8;
                  uVar28 = local_b8._4_4_;
                  uVar29 = (undefined4)uStack_b0;
                  uVar30 = uStack_b0._4_4_;
                }
                local_1a8 = (longlong *)CONCAT44(uVar28,uVar13);
                uStack_1a0 = (double)CONCAT44(uVar30,uVar29);
              }
              else {
                local_198 = *(double *)(param_2 + 0x20);
                local_1a8 = (longlong *)*puVar24;
                uStack_1a0 = *(double *)(param_2 + 0x18);
              }
            }
            local_2f0 = local_c8;
            plVar23 = (longlong *)param_1[0x39];
            if (plVar23 != (longlong *)0x0) {
              dVar20 = *(double *)(param_2 + 0x28) - *(double *)(param_2 + 0x10);
              dVar6 = *(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x18);
              dVar5 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
              dVar20 = (double)(float)SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar20 * dVar20);
              local_240 = (dVar20 * *(double *)(param_2 + 0x68) + local_198) - (double)plVar23[0x4e]
              ;
              local_248 = (*(double *)(param_2 + 0x60) * dVar20 + uStack_1a0) -
                          (double)plVar23[0x4d];
              local_250 = (longlong *)
                          ((*(double *)(param_2 + 0x58) * dVar20 + (double)local_1a8) -
                          (double)plVar23[0x4c]);
              local_b8 = (undefined8 *)plVar23[0x48];
              uStack_b0 = plVar23[0x49];
              local_a8 = (undefined4)plVar23[0x4a];
              uStack_a4 = *(undefined4 *)((longlong)plVar23 + 0x254);
              uStack_a0 = (undefined4)plVar23[0x4b];
              uStack_9c = *(undefined4 *)((longlong)plVar23 + 0x25c);
              local_338 = CONCAT31(local_338._1_3_,1);
              local_340 = 0;
              local_348 = (undefined8 *)0x0;
              (**(code **)(*plVar23 + 0x510))(plVar23,&local_250,&local_b8,0);
            }
            if (local_1c8 != 0) {
              FUN_1400020a8();
            }
            plVar23 = plVar19;
            plVar19 = local_2f0;
            if (local_1e8 != 0) {
              FUN_1400020a8();
              plVar19 = local_2f0;
            }
          }
        }
      }
      else {
        local_2f0 = plVar19;
        if ((plVar23 != (longlong *)0x0) &&
           (cVar11 = (**(code **)(*plVar23 + 0x4c8))(plVar23,plVar19), plVar19 = local_2f0,
           cVar11 != '\0')) goto LAB_140bd825c;
        local_f8 = (uint *)0x0;
        local_f0 = 0x1800000000;
        local_2e8 = param_2;
        local_2e0 = lVar26;
        FUN_140a44582(plVar14,&local_1b8,0);
        lVar26 = (longlong)(int)local_f0;
        puVar25 = local_f8;
        if (local_f8 == (uint *)0x0) {
          puVar25 = &local_1b8;
        }
        if (lVar26 != 0) {
          lVar16 = 0;
          do {
            plVar15 = *(longlong **)((longlong)puVar25 + lVar16);
            if ((plVar15 != (longlong *)0x0) &&
               (cVar11 = (**(code **)(*plVar15 + 0x4c8))(plVar15,local_2f0), cVar11 != '\0')) {
              lVar26 = local_2e0;
              param_2 = local_2e8;
              if (local_f8 != (uint *)0x0) {
                FUN_1400020a8();
                lVar26 = local_2e0;
                param_2 = local_2e8;
              }
              goto LAB_140bd81f9;
            }
            lVar16 = lVar16 + 8;
          } while (lVar26 * 8 != lVar16);
        }
        if (local_f8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        lVar26 = local_2e0;
        param_2 = local_2e8;
        if (*(code **)(*plVar14 + 0x3a8) == (code *)&LAB_144a8179a) {
          plVar15 = (longlong *)plVar14[0x39];
        }
        else {
          plVar15 = (longlong *)(**(code **)(*plVar14 + 0x3a8))(plVar14);
        }
        if (plVar15 == (longlong *)0x0) {
LAB_140bd8224:
          plVar15 = (longlong *)0x0;
        }
        else {
LAB_140bd81f9:
          if (DAT_14cac6e60 == 0) {
            local_1b8 = 0x44a7958c;
            uStack_1b4 = 1;
            local_300 = FUN_14081d0ea;
            local_308 = FUN_142b47bc4;
            local_318 = &LAB_1478989f1;
            local_320 = (code *)&LAB_146391124;
            local_328 = L"Engine";
            local_330 = 0x10000000000;
            local_338 = 0x10000005;
            local_340 = 0x10;
            local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x620);
            local_310 = &local_1b8;
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
              DAT_14cac6e60 + 0x30)) goto LAB_140bd8224;
        }
        plVar19 = local_2f0;
        if (plVar15 != (longlong *)0x0) {
          plVar23 = plVar15;
        }
      }
LAB_140bd825c:
      local_2f0 = plVar19;
      if (param_1[0x39] != 0) {
        FUN_140583e18(param_1[0x39],1);
      }
      puVar27 = &DAT_14cadad90;
      if (local_2f1 != '\0') {
        puVar27 = &DAT_14cadada0;
      }
      plVar19 = (longlong *)param_1[0x39];
      if (plVar23 == (longlong *)0x0) {
        if (plVar19 == (longlong *)0x0 || plVar14 == (longlong *)0x0) goto LAB_140bd82bd;
        lVar16 = (**(code **)(*plVar14 + 0x3a8))(plVar14);
        if (lVar16 != 0) {
          (**(code **)(*(longlong *)param_1[0x39] + 0x490))
                    ((longlong *)param_1[0x39],lVar16,puVar27,0);
        }
LAB_140bd82f2:
        if ((*(byte *)((longlong)plVar14 + 0x62) & 4) != 0) {
          FUN_14028a150(&local_2a0);
          FUN_14111aa78((longlong)plVar14 + 0x20e,param_1,local_2a0);
          if (plVar23 != (longlong *)0x0) {
            lVar16 = FUN_140c7aaec();
            if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar23[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar23[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                lVar16 + 0x30)) {
              FUN_1488e21a0(&local_2a8);
              FUN_14893d4fc(plVar23 + 0xe6,param_1,local_2a8);
            }
          }
        }
      }
      else {
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x490))(plVar19,plVar23,puVar27,local_2f0);
        }
LAB_140bd82bd:
        if (plVar14 != (longlong *)0x0) goto LAB_140bd82f2;
      }
      plVar23 = (longlong *)param_1[0x1c7];
      if (plVar23 != (longlong *)0x0) {
        (**(code **)(*plVar23 + 0x2b0))();
      }
      if ((plVar14 != (longlong *)0x0) &&
         (plVar14 = (longlong *)plVar14[0x39], plVar14 != (longlong *)0x0)) {
        if (DAT_14cac6e60 == 0) {
          local_310 = &local_1b8;
          local_1b8 = 0x44a7958c;
          uStack_1b4 = 1;
          local_300 = FUN_14081d0ea;
          local_308 = FUN_142b47bc4;
          local_318 = &LAB_1478989f1;
          local_320 = (code *)&LAB_146391124;
          local_328 = L"Engine";
          local_330 = 0x10000000000;
          local_338 = 0x10000005;
          local_340 = 0x10;
          local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x620);
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        plVar19 = (longlong *)plVar14[2];
        plVar23 = plVar19;
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= (int)plVar19[7]) &&
           (plVar23 = (longlong *)plVar19[6],
           ((longlong *)plVar19[6])[*(int *)(DAT_14cac6e60 + 0x38)] == DAT_14cac6e60 + 0x30)) {
          FUN_140b51838(plVar14,param_1,1);
          plVar23 = plVar14;
        }
      }
      plVar14 = (longlong *)param_1[0x39];
      if (plVar14 != (longlong *)0x0) {
        if (DAT_14cac6e60 == 0) {
          local_310 = &local_1b8;
          local_1b8 = 0x44a7958c;
          uStack_1b4 = 1;
          local_300 = FUN_14081d0ea;
          local_308 = FUN_142b47bc4;
          local_318 = &LAB_1478989f1;
          local_320 = (code *)&LAB_146391124;
          local_328 = L"Engine";
          local_330 = 0x10000000000;
          local_338 = 0x10000005;
          local_340 = 0x10;
          local_348 = (undefined8 *)CONCAT44(local_348._4_4_,0x620);
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        plVar19 = (longlong *)plVar14[2];
        plVar23 = plVar19;
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= (int)plVar19[7]) &&
           (plVar23 = (longlong *)plVar19[6],
           ((longlong *)plVar19[6])[*(int *)(DAT_14cac6e60 + 0x38)] == DAT_14cac6e60 + 0x30)) {
          (**(code **)(*plVar14 + 0x940))(plVar14,0);
          (**(code **)(*plVar14 + 0x690))(plVar14,0);
          plVar23 = plVar14;
        }
      }
      uVar13 = SUB84(plVar23,0);
      lVar16 = param_1[0x1c2];
      if (lVar16 != 0) {
        lVar17 = *(longlong *)(lVar16 + 0x518);
        if (lVar17 == 0) {
          uVar13 = FUN_140067708();
          lVar17 = FUN_14477b664();
          *(longlong *)(lVar16 + 0x518) = lVar17;
        }
        if (*(longlong *)(lVar16 + 0x520) == 0) {
          if ((lVar17 != 0) && (*(longlong *)(lVar16 + 0x510) != 0)) {
            plVar14 = *(longlong **)(lVar17 + 0xb8);
            if (plVar14 != (longlong *)0x0) {
              plVar23 = plVar14;
              cVar11 = (**(code **)(*plVar14 + 0x108))();
              uVar13 = SUB84(plVar23,0);
              if (cVar11 != '\0') {
                uVar18 = (**(code **)(*plVar14 + 0x110))(plVar14);
                lVar17 = FUN_144aff482(uVar18,(longlong *)(lVar16 + 0x510));
                uVar13 = (undefined4)uVar18;
                *(longlong *)(lVar16 + 0x520) = lVar17;
                if (lVar17 != 0) goto LAB_140bd8437;
                goto LAB_140bd8535;
              }
            }
            *(undefined8 *)(lVar16 + 0x520) = 0;
          }
        }
        else {
LAB_140bd8437:
          lVar16 = param_1[0x1c2];
          plVar14 = *(longlong **)(lVar16 + 0x510);
          uVar18 = FUN_14477b664(*(undefined8 *)(lVar16 + 0x518));
          uVar18 = FUN_14477b664(uVar18);
          dVar20 = *(double *)(lVar16 + 0x520);
          local_1b8 = local_1b8 & 0xffffff00;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          local_1a8 = plVar14;
          uVar18 = FUN_14477b664(uVar18);
          uStack_1a0 = (double)FUN_14477b664(uVar18);
          local_190 = 0;
          local_348 = (undefined8 *)0x0;
          puVar24 = &local_2c0;
          local_198 = dVar20;
          FUN_140b32deb(puVar24,param_1,&local_1b8,0);
          uVar13 = SUB84(puVar24,0);
          local_2c0 = 0;
          local_2b8 = 0xffffffffffffffff;
          if ((local_190 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            uVar13 = (undefined4)*(undefined8 *)(local_190 + 0x50);
            FUN_1400848c0();
          }
        }
LAB_140bd8535:
        dVar20 = (double)param_1[0x1c2];
        if ((dVar20 != 0.0) && (*(char *)((longlong)dVar20 + 0x482) == '\x01')) {
          fVar31 = *(float *)((longlong)dVar20 + 0x484);
          fVar2 = *(float *)((longlong)dVar20 + 0x488);
          lVar16 = param_1[0x39];
          if (lVar16 == 0) {
            local_228 = DAT_14c846508;
            uVar13 = (undefined4)DAT_14c8464f8;
            uVar28 = DAT_14c8464f8._4_4_;
            uVar29 = (undefined4)DAT_14c846500;
            uVar30 = DAT_14c846500._4_4_;
          }
          else {
            dVar5 = *(double *)(lVar16 + 0x240);
            dVar6 = *(double *)(lVar16 + 0x248);
            local_1b8 = SUB84(dVar5,0);
            uStack_1b4 = (undefined4)((ulonglong)dVar5 >> 0x20);
            uStack_1b0 = SUB84(dVar6,0);
            uStack_1ac = (undefined4)((ulonglong)dVar6 >> 0x20);
            plVar14 = *(longlong **)(lVar16 + 0x250);
            dVar9 = *(double *)(lVar16 + 600);
            pdVar21 = *(double **)(lVar16 + 0x228);
            local_1a8 = plVar14;
            uStack_1a0 = dVar9;
            if (pdVar21 == (double *)0x0) {
              uVar13 = 0x40;
              pdVar21 = (double *)FUN_14001cc68(0x40,0x10);
              dVar20 = DAT_14c8463d8;
              *pdVar21 = DAT_14c8463d0;
              pdVar21[1] = dVar20;
              dVar20 = DAT_14c8463e8;
              pdVar21[2] = DAT_14c8463e0;
              pdVar21[3] = dVar20;
              dVar20 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar21[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar21[5] = dVar20;
              dVar20 = DAT_14c846508;
              pdVar21[6] = DAT_14c846508;
              *(double **)(lVar16 + 0x228) = pdVar21;
            }
            auVar7._8_4_ = (int)-(ulonglong)(dVar6 != pdVar21[1]);
            auVar7._0_8_ = -(ulonglong)(dVar5 != *pdVar21);
            auVar7._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar21[1]) >> 0x20);
            iVar12 = movmskpd(SUB84(dVar20,0),auVar7);
            auVar8._8_4_ = (int)-(ulonglong)(dVar9 != pdVar21[3]);
            auVar8._0_8_ = -(ulonglong)((double)plVar14 != pdVar21[2]);
            auVar8._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar21[3]) >> 0x20);
            uVar22 = movmskpd(uVar13,auVar8);
            if ((uVar22 & 0x3fffffff) != 0 || iVar12 != 0) {
              *(undefined4 *)(pdVar21 + 2) = (undefined4)local_1a8;
              *(undefined4 *)((longlong)pdVar21 + 0x14) = local_1a8._4_4_;
              *(undefined4 *)(pdVar21 + 3) = (undefined4)uStack_1a0;
              *(undefined4 *)((longlong)pdVar21 + 0x1c) = uStack_1a0._4_4_;
              *(uint *)pdVar21 = local_1b8;
              *(undefined4 *)((longlong)pdVar21 + 4) = uStack_1b4;
              *(undefined4 *)(pdVar21 + 1) = uStack_1b0;
              *(undefined4 *)((longlong)pdVar21 + 0xc) = uStack_1ac;
              FUN_1448052ee(&local_1b8,&local_238);
              pdVar21[6] = local_228;
              pdVar21[4] = (double)local_238;
              pdVar21[5] = uStack_230;
            }
            local_228 = pdVar21[6];
            uVar13 = *(undefined4 *)(pdVar21 + 4);
            uVar28 = *(undefined4 *)((longlong)pdVar21 + 0x24);
            uVar29 = *(undefined4 *)(pdVar21 + 5);
            uVar30 = *(undefined4 *)((longlong)pdVar21 + 0x2c);
          }
          local_238 = (char *)CONCAT44(uVar28,uVar13);
          uStack_230 = (double)CONCAT44(uVar30,uVar29);
          local_348 = (undefined8 *)CONCAT44(local_348._4_4_,fVar31 + fVar2);
          FUN_14893d58a(local_2d8,&local_238,param_2 + 0x58,fVar31 - fVar2);
          if (param_1[0x39] != 0) {
            local_338 = local_338 & 0xffffff00;
            local_340 = 0;
            local_348 = (undefined8 *)0x0;
            FUN_1407fd932(param_1[0x39],&DAT_14c8464e0,local_2d8,1);
          }
        }
      }
      uVar18 = FUN_14485cccc(lVar26);
      local_1b8 = (uint)uVar18;
      uStack_1b4 = (undefined4)((ulonglong)uVar18 >> 0x20);
      FUN_1447cd2ec(param_1 + 0x224);
      uVar18 = 1;
      goto LAB_140bd8572;
    }
  }
  uVar18 = 0;
LAB_140bd8572:
  if ((local_90 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 140bd9220 FUN_140bd9220 body=31 status=ok
// SIG undefined FUN_140bd9220(void)

undefined8 FUN_140bd9220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bd9246 FUN_140bd9246 body=21 status=ok
// SIG undefined FUN_140bd9246(void)

undefined8 FUN_140bd9246(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140bd9266 FUN_140bd9266 body=109 status=ok
// SIG undefined FUN_140bd9266(void)

void FUN_140bd9266(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x5c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        FUN_140bd92d4(uVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bd92d4 FUN_140bd92d4 body=122 status=ok
// SIG undefined FUN_140bd92d4(void)

void FUN_140bd92d4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    cVar2 = FUN_1403ae2fa(param_1,2,0);
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x160) == 0)) {
      FUN_140e3bfea(lVar1,*(undefined1 *)(lVar1 + 0xbd8),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140bd934e FUN_140bd934e body=470 status=ok
// SIG undefined FUN_140bd934e(void)

undefined8 * FUN_140bd934e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 200) != 0) && (lVar5 = FUN_14050b0aa(), 0 < *(int *)(lVar5 + 8))) {
    plVar6 = (longlong *)FUN_14050b0aa(*(undefined8 *)(param_1 + 200));
    lVar5 = plVar6[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar1 = *plVar6;
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar10);
        if (lVar2 != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x38);
          if (lVar8 == 0) {
            uVar7 = FUN_14050c9fe();
            lVar8 = FUN_14477b664(uVar7);
            *(longlong *)(lVar2 + 0x38) = lVar8;
          }
          plVar6 = (longlong *)(lVar2 + 0x30);
          lVar9 = *(longlong *)(lVar2 + 0x40);
          if (lVar9 == 0) {
            if ((lVar8 != 0) && (*plVar6 != 0)) {
              plVar3 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                *(undefined8 *)(lVar2 + 0x40) = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar9 = FUN_144aff482(uVar7,plVar6);
                *(longlong *)(lVar2 + 0x40) = lVar9;
                if (lVar9 != 0) {
                  lVar8 = *(longlong *)(lVar2 + 0x38);
                  goto LAB_140bd93fe;
                }
              }
            }
          }
          else {
LAB_140bd93fe:
            if (lVar8 == 0) {
              uVar7 = FUN_14050c9fe(lVar9);
              lVar8 = FUN_14477b664(uVar7);
              *(longlong *)(lVar2 + 0x38) = lVar8;
              lVar9 = *(longlong *)(lVar2 + 0x40);
              if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar6 != 0)) {
                plVar3 = *(longlong **)(lVar8 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')) {
                  lVar9 = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar9 = FUN_144aff482(uVar7,plVar6);
                }
                *(longlong *)(lVar2 + 0x40) = lVar9;
              }
            }
            local_50 = FUN_140bd958e(lVar9,2);
            if (local_50 != 0) {
              FUN_140bd9526(param_2,&local_50);
            }
          }
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bd9526 FUN_140bd9526 body=103 status=ok
// SIG undefined FUN_140bd9526(void)

ulonglong FUN_140bd9526(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_140bd957a;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140bd9624(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140bd957a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140bd958e FUN_140bd958e body=149 status=ok
// SIG undefined FUN_140bd958e(void)

longlong FUN_140bd958e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 < 3) {
    param_1 = param_1 + (ulonglong)param_2 * 0x18;
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (lVar4 == 0) {
      uVar3 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0xd0) = lVar4;
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      return *(longlong *)(param_1 + 0xd8);
    }
    if ((*(longlong *)(param_1 + 200) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 200));
      }
      *(longlong *)(param_1 + 0xd8) = lVar4;
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140bd9624 FUN_140bd9624 body=353 status=ok
// SIG undefined FUN_140bd9624(void)

void FUN_140bd9624(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bd96a9;
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
LAB_140bd96a9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140bd9786 FUN_140bd9786 body=57 status=ok
// SIG undefined FUN_140bd9786(void)

void FUN_140bd9786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d1d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d1d8 = FUN_140002ddd(FUN_1464da744,uVar1,L"GbxDiscoveryPresentationDef");
  }
  return;
}



// FUNCTION 140bd97c0 FUN_140bd97c0 body=43 status=ok
// SIG undefined FUN_140bd97c0(void)

void FUN_140bd97c0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140bd97ec();
  if (cVar1 != '\0') {
    return;
  }
  FUN_14067484e(param_1,param_2);
  return;
}



// FUNCTION 140bd97ec FUN_140bd97ec body=989 status=ok
// SIG undefined FUN_140bd97ec(void)

ulonglong FUN_140bd97ec(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_78 [40];
  uint local_50;
  int iStack_4c;
  longlong *local_48;
  ulonglong local_40;
  
  uVar5 = DAT_14cb0d2b0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c7638e4 == '\x01') {
    lVar15 = param_1[0x16];
    if (lVar15 == 0) {
      lVar15 = FUN_1448abda6(param_1);
    }
    uVar5 = FUN_1402ad3be(uVar5,lVar15,1);
    FUN_1407f7f84(&local_50,uVar5);
    if (local_48 != (longlong *)0x0) {
      iVar7 = (int)local_48[1];
      do {
        if (iVar7 == 0) {
          plVar12 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar11 = (int)local_48[1];
        bVar16 = iVar7 == iVar11;
        if (bVar16) {
          *(int *)(local_48 + 1) = iVar7 + 1;
          iVar11 = iVar7;
        }
        iVar7 = iVar11;
        UNLOCK();
        plVar12 = local_48;
      } while (!bVar16);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar12 != (longlong *)0x0) {
        lVar15 = CONCAT44(iStack_4c,local_50);
        if (lVar15 != 0) {
          if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(param_1);
          }
          if ((longlong)*(int *)(lVar15 + 0x68) != 0) {
            lVar3 = *(longlong *)(lVar15 + 0x60);
            lVar14 = (longlong)*(int *)(lVar15 + 0x68) << 3;
            lVar10 = 0;
            bVar4 = DAT_14c950c29;
            do {
              if ((~bVar4 & 1) == 0 && param_1 != (longlong *)0x0) {
                FUN_1456cec3c(param_1);
                bVar4 = DAT_14c950c29;
              }
              if (*(longlong **)(lVar3 + lVar10 * 8) == param_1) {
                uVar9 = (uint)lVar10;
                if ((-1 < (int)uVar9) && (iVar7 = *(int *)(lVar15 + 0x68), (int)uVar9 < iVar7)) {
                  if (iVar7 - 1U != uVar9) {
                    iVar6 = (iVar7 - 1U) - uVar9;
                    iVar11 = 1;
                    if (iVar6 < 1) {
                      iVar11 = iVar6;
                    }
                    memmove((void *)(*(longlong *)(lVar15 + 0x60) +
                                    (ulonglong)(uVar9 & 0x7fffffff) * 8),
                            (void *)(*(longlong *)(lVar15 + 0x60) +
                                    (ulonglong)(uint)(iVar7 - iVar11) * 8),(longlong)iVar11 << 3);
                    iVar7 = *(int *)(lVar15 + 0x68);
                    bVar4 = DAT_14c950c29;
                  }
                  *(int *)(lVar15 + 0x68) = iVar7 + -1;
                  if ((param_1 != (longlong *)0x0) && ((bVar4 & 1) != 0)) {
                    FUN_1456cec3c(param_1);
                  }
                  iVar7 = *(int *)(lVar15 + 0x58);
                  *(uint *)(lVar15 + 0x58) = iVar7 + 1U;
                  if (*(uint *)(lVar15 + 0x5c) < iVar7 + 1U) {
                    FUN_1488382ce((longlong *)(lVar15 + 0x50),iVar7);
                  }
                  *(longlong **)(*(longlong *)(lVar15 + 0x50) + (longlong)iVar7 * 8) = param_1;
                  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(param_1);
                  }
                  if ((char)param_1[0x62] != '\x01') goto LAB_140bd9a87;
                  if (*(int *)(lVar15 + 0x78) == *(int *)(lVar15 + 0xa4)) goto LAB_140bd9a1a;
                  lVar3 = *(longlong *)((longlong)param_1 + 0x314);
                  uVar9 = (uint)((ulonglong)lVar3 >> 0x10);
                  uVar8 = (uint)lVar3 & 0xffff;
                  lVar10 = lVar15 + 0xa8;
                  if (*(longlong *)(lVar15 + 0xb0) != 0) {
                    lVar10 = *(longlong *)(lVar15 + 0xb0);
                  }
                  iVar7 = *(int *)(lVar10 + (ulonglong)
                                            (*(int *)(lVar15 + 0xb8) - 1U &
                                            (int)((ulonglong)lVar3 >> 0x20) +
                                            ((uint)lVar3 << 0x10 | uVar8) +
                                            (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar8 >> 4)) * 4);
                  if (iVar7 == -1) goto LAB_140bd9a1a;
                  goto LAB_140bd9a01;
                }
                break;
              }
              lVar10 = lVar10 + 1;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
        }
        uVar13 = 0;
        goto LAB_140bd9aa5;
      }
    }
  }
  uVar13 = 0;
  goto LAB_140bd9aaf;
  while (iVar7 = *(int *)(lVar10 + 0x18), iVar7 != -1) {
LAB_140bd9a01:
    lVar10 = *(longlong *)(lVar15 + 0x70) + (longlong)iVar7 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar15 + 0x70) + (longlong)iVar7 * 0x20) == lVar3)
    goto LAB_140bd9a1c;
  }
LAB_140bd9a1a:
  lVar10 = 0;
LAB_140bd9a1c:
  iStack_4c = 0;
  if (param_1 == (longlong *)0x0) {
    local_50 = 0;
    iVar7 = 0;
  }
  else {
    local_50 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((local_50 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar7 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar7 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar7 = iVar11;
      }
    }
  }
  iStack_4c = iVar7;
  FUN_14084f16a(lVar10 + 8);
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
LAB_140bd9a87:
  (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
  FUN_1401bf202(param_1);
  uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_140bd9aa5:
  LOCK();
  plVar2 = plVar12 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_140bd9aaf:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 140bd9bca FUN_140bd9bca body=1797 status=ok
// SIG undefined FUN_140bd9bca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bd9bca(longlong *param_1,int *param_2,undefined8 *param_3)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_198 [40];
  int *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1457826e2(param_1,iVar16);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar8 = iVar18 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar5 = iVar18 + 1;
    iVar10 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar10 = iVar18;
    }
    if (iVar10 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar5;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar5 = 0x80;
          iVar8 = iVar18;
        }
        else {
          uVar15 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar2 = 4;
            if (4 < uVar15) {
              uVar2 = uVar15;
            }
          }
          else {
            uVar2 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar2 << 2,0);
          iVar8 = (int)(uVar7 >> 2);
          iVar5 = -0x20;
          if ((int)uVar15 <= iVar8) {
            iVar5 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar5;
        FUN_1446efbd8(plVar12,iVar8);
        iVar5 = (int)param_1[5] + 1;
      }
      iVar8 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar8 = iVar5;
      }
      *(int *)(param_1 + 5) = iVar5;
      if (iVar5 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar3 = (longlong)iVar16;
    iVar18 = *(int *)(*param_1 + 4 + lVar3 * 0x120);
    *(int *)(param_1 + 6) = iVar18;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x120) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar6 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar6 = puVar1;
  }
  iVar18 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar18 = iVar16;
  }
  puVar6[iVar18 >> 5] = puVar6[iVar18 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  uVar15 = 1;
  _Src = (void *)(*param_1 + lVar3 * 0x120);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = _DAT_14c846250;
  uStack_150 = DAT_14c846258;
  local_148 = _DAT_14c846260;
  uStack_140 = _DAT_14c846268;
  local_138 = _DAT_14c846270;
  uStack_130 = _DAT_14c846278;
  local_128 = _DAT_14c846280;
  uStack_120 = _DAT_14c846288;
  local_118 = _DAT_14c846250;
  uStack_110 = DAT_14c846258;
  local_108 = _DAT_14c846260;
  uStack_100 = _DAT_14c846268;
  local_f8 = _DAT_14c846270;
  uStack_f0 = _DAT_14c846278;
  local_e8 = _DAT_14c846280;
  uStack_e0 = _DAT_14c846288;
  local_d8 = ram0x00014c846340;
  uStack_d0 = _DAT_14c846348;
  local_c8 = ram0x00014c846340;
  uStack_c0 = _DAT_14c846348;
  local_b8 = 0;
  local_ac = DAT_14c846338;
  local_b4 = DAT_14c846330;
  local_a8 = DAT_14c846330;
  local_a0 = DAT_14c846338;
  local_9c = DAT_14c846330;
  local_94 = DAT_14c846338;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  plVar12 = (longlong *)(*param_1 + lVar3 * 0x120);
  *plVar12 = *(longlong *)*param_3;
  memcpy(plVar12 + 2,&local_168,0xd8);
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[0x20] = 0;
  plVar12[0x21] = 0;
  FUN_140bda2d0(&local_168);
  *(undefined4 *)(plVar12 + 0x22) = 0xffffffff;
  lVar3 = *plVar12;
  uVar2 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar9 != 0) && (uVar9 != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar18 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar18 * 0x120);
        if (*(longlong *)(*param_1 + (longlong)iVar18 * 0x120) == lVar3) {
          FUN_140bda2d0((longlong)_Dst + 0x10);
          memmove(_Dst,_Src,0x110);
          FUN_14090c7a8(param_1,iVar16);
          iVar16 = iVar18;
          goto LAB_140bd9e60;
        }
        iVar18 = *(int *)((longlong)_Dst + 0x110);
      } while (iVar18 != -1);
    }
  }
  if (3 < uVar9) {
    uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar9 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)_Src + 0x114) = uVar2;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x110) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         iVar16;
    goto LAB_140bd9e60;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_140bd9f6b:
    uVar2 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
           0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar15 != uVar2);
  }
  else {
    if (uVar15 == 0) goto LAB_140bd9e60;
    FUN_1446efa72(plVar12,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140bd9f6b;
  }
  iVar18 = (int)param_1[5];
  if (iVar18 == 0) {
    uVar7 = 0;
    uVar14 = 1;
    iVar8 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar8 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar8 = iVar18 + -1;
      }
      uVar7 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar7;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar7) goto LAB_140bd9e60;
        iVar5 = iVar5 + 0x20;
        uVar15 = puVar6[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar7 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar19 = uVar14 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar8 = (iVar5 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar8) {
      iVar8 = iVar18;
    }
  }
  if (iVar8 < iVar18) {
    uVar15 = 0xffffffff;
    do {
      lVar3 = *param_1;
      lVar17 = (longlong)iVar8 * 0x120;
      uVar19 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar17) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar3 + lVar17)) & (longlong)(int)param_1[9] - 1U;
      iVar18 = (int)uVar19;
      *(int *)(lVar3 + 0x114 + lVar17) = iVar18;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(undefined4 *)(lVar3 + 0x110 + lVar17) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar19) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar18 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
      uVar15 = ~(uint)uVar14 & uVar15;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      iVar18 = (int)param_1[5];
      iVar8 = (int)uVar7;
      lVar3 = (longlong)iVar8;
      uVar2 = puVar6[lVar3] & uVar15;
      if (uVar2 == 0) {
        iVar10 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar10 = iVar18 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar17 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar2 = puVar6[lVar3 + lVar17 + 1];
          if (uVar2 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar11 - lVar3 == lVar17) goto LAB_140bd9e60;
        }
        uVar7 = (ulonglong)(iVar8 + (int)lVar17 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar19 = uVar14 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = (iVar5 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar18);
  }
LAB_140bd9e60:
  *local_170 = iVar16;
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bda2d0 FUN_140bda2d0 body=340 status=ok
// SIG undefined FUN_140bda2d0(void)

void FUN_140bda2d0(undefined1 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  *param_1 = 0;
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xf8);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xf8) + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar8 = *(longlong **)(param_1 + 0xe0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bda3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bda424 FUN_140bda424 body=59 status=ok
// SIG undefined FUN_140bda424(void)

void FUN_140bda424(longlong param_1)

{
  FUN_140414380(param_1 + 0x10,0);
  FUN_140414380(param_1 + 0x50,0);
  FUN_140296a12(param_1 + 0x50);
  FUN_140296ab8(param_1 + 0x10);
  return;
}



// FUNCTION 140bda486 FUN_140bda486 body=58 status=ok
// SIG undefined FUN_140bda486(void)

void FUN_140bda486(ulonglong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar1 = *param_1;
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      uVar1 = FUN_14001fdce(uVar1,0,4);
      *param_1 = uVar1;
    }
  }
  return;
}



// FUNCTION 140bda4c0 FUN_140bda4c0 body=5295 status=ok
// SIG undefined FUN_140bda4c0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140bda4c0(undefined8 ******param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  longlong lVar19;
  undefined8 *****pppppuVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined8 *****pppppuVar25;
  undefined8 *****pppppuVar26;
  int iVar27;
  int iVar28;
  undefined8 ******ppppppuVar29;
  ulonglong uVar30;
  undefined8 ******ppppppuVar31;
  undefined1 *puVar32;
  int iVar33;
  ulonglong uVar34;
  undefined8 *******pppppppuVar35;
  int iVar36;
  ulonglong uVar37;
  undefined8 ****ppppuVar38;
  undefined8 uVar39;
  uint uVar40;
  int iVar41;
  undefined1 uVar42;
  uint uVar43;
  undefined8 unaff_R13;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined8 *local_290;
  undefined1 *local_288;
  code *local_280;
  char local_26d;
  uint local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 *****local_258;
  undefined8 *****pppppuStack_250;
  undefined8 *****pppppuStack_248;
  undefined8 *****local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  double dStack_220;
  undefined8 *****pppppuStack_218;
  double local_210;
  double dStack_208;
  undefined8 *****local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined1 local_1ea;
  undefined4 local_1e9;
  undefined8 *****local_1b0;
  undefined8 *****local_1a8;
  undefined8 *****pppppuStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 *****local_190;
  undefined8 *****pppppuStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 *****local_170;
  undefined8 *******local_160 [3];
  ushort local_148;
  byte local_140;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 *****local_120;
  undefined8 *******local_118;
  undefined8 *******local_110;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(param_1 + 0x3a1) == '\x01') {
    uVar34 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),*(undefined1 *)((longlong)param_1 + 0x1d0a))
    ;
  }
  else {
    uVar34 = 0;
  }
  local_26d = *(char *)((longlong)param_1 + 0x975);
  cVar17 = *(char *)((longlong)param_1 + 0x1d09);
  FUN_140bdbc28(param_1,param_2);
  (*(code *)(*param_1)[0x8f])(param_1);
  pppppuVar25 = param_1[0x23];
  if ((pppppuVar25 != (undefined8 *****)0x0) &&
     (lVar19 = (*(code *)(*pppppuVar25)[0xf7])(pppppuVar25,0,1,0xffffffff), lVar19 != 0)) {
    local_160[0] = (undefined8 *******)((ulonglong)local_160[0] & 0xffffffff00000000);
    uStack_260 = &local_118;
    local_268 = (code *)&LAB_14362051c;
    local_118 = local_160;
    FUN_1448e6002(lVar19 + 0x138,&local_268);
    *(float *)(param_1 + 0x350) = local_160[0]._0_4_;
    local_268 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_260 = (undefined8 *******)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_258 = DAT_14c8464f0;
    local_118 = (undefined8 *******)&LAB_143620548;
    local_160[0] = (undefined8 *******)&local_268;
    local_110 = local_160;
    FUN_1448e6002(lVar19 + 0x138);
    param_1[0x353] = local_258;
    param_1[0x351] = (undefined8 *****)local_268;
    param_1[0x352] = uStack_260;
  }
  pppppuVar25 = param_1[0x130];
  if (pppppuVar25 != (undefined8 *****)0x0) {
    uVar6 = *(undefined4 *)(param_1 + 0x3a6);
    uVar7 = *(undefined4 *)(param_1 + 0x3ae);
    *(undefined4 *)(param_1 + 0x3a6) = 0;
    *(undefined4 *)(param_1 + 0x3ae) = 0;
    memcpy(param_1 + 0x356,pppppuVar25 + 6,0x2c8);
    *(undefined4 *)(param_1 + 0x3ae) = uVar7;
    *(undefined4 *)(param_1 + 0x3a6) = uVar6;
  }
  if ((((cVar17 != '\0') && (*(char *)((longlong)param_1 + 0x1d09) == '\0')) &&
      ((local_26d != '\0' || (*(char *)((longlong)param_1 + 0x975) == '\x01')))) &&
     ((*(char *)(param_1 + 0x3a1) == '\x01' && (*(char *)((longlong)param_1 + 0x1d0a) == '\x01'))))
  {
    *(undefined1 *)((longlong)param_1 + 0x1d09) = 1;
  }
  pppppuVar20 = param_1[0x332];
  uVar30 = uVar34;
  if (pppppuVar20 != (undefined8 *****)0x0) {
    if (((pppppuVar25 != (undefined8 *****)0x0) &&
        (ppppuVar38 = pppppuVar20[0x340], ppppuVar38 != (undefined8 ****)0x0)) &&
       (ppppuVar8 = pppppuVar20[0x341], ppppuVar8 != (undefined8 ****)0x0)) {
      iVar33 = *(int *)(param_1 + 0x12e);
      iVar41 = *(int *)(pppppuVar25 + 2);
      cVar17 = FUN_1402096b0(param_1);
      if (cVar17 == '\0') {
        fVar45 = 0.0;
      }
      else {
        fVar45 = 1.0;
      }
      fVar45 = fVar45 * ((float)iVar33 / (float)iVar41);
      fVar48 = *(float *)(param_1 + 0x354);
      fVar46 = *(float *)((longlong)ppppuVar38 + (ulonglong)(fVar45 <= fVar48) * 4 + 0x1124);
      if ((0.0 < fVar46) && (fVar47 = fVar45 - fVar48, 1e-08 <= fVar47 * fVar47)) {
        fVar46 = fVar46 * param_2;
        if (1.0 <= fVar46) {
          fVar46 = 1.0;
        }
        if (fVar46 <= 0.0) {
          fVar46 = 0.0;
        }
        fVar45 = fVar48 + fVar47 * fVar46;
      }
      local_26c = (uint)uVar34;
      *(float *)(param_1 + 0x354) = fVar45;
      local_120 = DAT_14c8464f0;
      local_130 = (undefined4)DAT_14c8464e0;
      uStack_12c = DAT_14c8464e0._4_4_;
      uStack_128 = (undefined4)DAT_14c8464e8;
      uStack_124 = DAT_14c8464e8._4_4_;
      pppppuVar25 = param_1[0x16];
      if ((pppppuVar25 == (undefined8 *****)0x0) &&
         (pppppuVar25 = (undefined8 *****)FUN_1448abda6(param_1),
         pppppuVar25 == (undefined8 *****)0x0)) {
        fVar45 = 0.0;
        uVar42 = 0;
      }
      else {
        fVar45 = (float)(double)pppppuVar25[0xda];
        local_120 = param_1[0x10e];
        local_130 = SUB84(param_1[0x10c],0);
        uStack_12c = (undefined4)((ulonglong)param_1[0x10c] >> 0x20);
        uStack_128 = SUB84(param_1[0x10d],0);
        uStack_124 = (undefined4)((ulonglong)param_1[0x10d] >> 0x20);
        uVar42 = *(undefined1 *)((longlong)param_1 + 0x975);
      }
      pppppuVar5 = DAT_14c8464f0;
      pppppuVar25 = (undefined8 *****)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      pppppuVar20 = (undefined8 *****)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      if ((((param_1[0x332] == (undefined8 *****)0x0) ||
           (ppppuVar9 = param_1[0x332][0x340], ppppuVar9 == (undefined8 ****)0x0)) ||
          (iVar33 = *(int *)(param_1 + 0x3b2), iVar33 < 0)) ||
         (uVar43 = *(uint *)(param_1 + 0x3b1), (int)uVar43 <= iVar33)) {
LAB_140bdaa5e:
        bVar15 = false;
      }
      else {
        bVar15 = false;
        if ((uVar43 == *(uint *)(ppppuVar9 + 0x2e4)) && (0 < (int)*(uint *)(ppppuVar9 + 0x2e4))) {
          fVar48 = fVar45 - *(float *)((longlong)ppppuVar38 + 0x171c);
          pppppuVar26 = param_1[0x3b0];
          uVar40 = 0;
          uVar34 = 0xffffffff;
          uVar30 = 0xffffffff;
          do {
            uVar44 = (ulonglong)(iVar33 + uVar40) % (ulonglong)uVar43;
            if (*(float *)(pppppuVar26 + uVar44 * 5) <= fVar48) {
              uVar34 = uVar44;
            }
            uVar37 = uVar44;
            if ((int)uVar30 != -1) {
              uVar37 = uVar30;
            }
            if (*(float *)(pppppuVar26 + uVar44 * 5) <= fVar48) {
              uVar37 = uVar30;
            }
            uVar40 = uVar40 + 1;
            uVar30 = uVar37;
          } while (uVar43 != uVar40);
          iVar33 = (int)uVar34;
          iVar41 = (int)uVar37;
          uVar30 = uVar34;
          if ((int)uVar43 <= iVar33) {
            uVar30 = (longlong)iVar41;
          }
          if (iVar33 < 0) {
            uVar30 = (longlong)iVar41;
          }
          ppppuVar38 = pppppuVar26[uVar30 * 5 + 3];
          ppppuVar3 = pppppuVar26[uVar30 * 5 + 2];
          ppppuVar4 = pppppuVar26[uVar30 * 5 + 1];
          fVar46 = *(float *)(pppppuVar26 + uVar30 * 5);
          if ((iVar41 < 0) || ((int)uVar43 <= iVar41)) {
            pppppuVar26 = param_1[0x16];
            if (pppppuVar26 == (undefined8 *****)0x0) {
              pppppuVar26 = (undefined8 *****)FUN_1448abda6(param_1);
              fVar47 = 0.0;
              if (pppppuVar26 == (undefined8 *****)0x0) goto LAB_140bda8f8;
            }
            fVar47 = (float)(double)pppppuVar26[0xda];
            pppppuVar25 = param_1[0x10c];
            pppppuVar20 = param_1[0x10d];
            pppppuVar5 = param_1[0x10e];
          }
          else {
            fVar47 = *(float *)(pppppuVar26 + uVar37 * 5);
            pppppuVar25 = (undefined8 *****)pppppuVar26[uVar37 * 5 + 1];
            pppppuVar20 = (undefined8 *****)pppppuVar26[uVar37 * 5 + 2];
            pppppuVar5 = (undefined8 *****)pppppuVar26[uVar37 * 5 + 3];
          }
LAB_140bda8f8:
          if ((fVar46 != fVar47) || (NAN(fVar46) || NAN(fVar47))) {
            fVar14 = fVar47;
            if (fVar46 <= fVar47) {
              fVar14 = fVar46;
              fVar46 = fVar47;
            }
            fVar47 = (fVar48 - fVar14) / (fVar46 - fVar14);
          }
          else {
            fVar47 = 0.0;
            if (fVar46 <= fVar48) {
              fVar47 = 1.0;
            }
          }
          dVar11 = (double)fVar47;
          if ((-1 < iVar33) && (iVar33 < *(int *)(param_1 + 0x3b1))) {
            uVar37 = uVar34;
          }
          pppppuVar5 = (undefined8 *****)
                       (((double)pppppuVar5 - (double)ppppuVar38) * dVar11 + (double)ppppuVar38);
          pppppuVar20 = (undefined8 *****)
                        (((double)pppppuVar20 - (double)ppppuVar3) * dVar11 + (double)ppppuVar3);
          pppppuVar25 = (undefined8 *****)
                        (((double)pppppuVar25 - (double)ppppuVar4) * dVar11 + (double)ppppuVar4);
          iVar33 = *(int *)(param_1 + 0x3b2);
          if ((int)uVar37 == iVar33) goto LAB_140bdaa5e;
          bVar15 = false;
          do {
            if (bVar15) break;
            iVar41 = *(int *)(ppppuVar9 + 0x2e4);
            iVar36 = (int)uVar37 + 1;
            uVar34 = (longlong)iVar36 % (longlong)iVar41;
            pppppuVar26 = param_1[0x3b0];
            if ((int)uVar34 == iVar33) {
              if ((param_1[0x16] == (undefined8 *****)0x0) &&
                 (lVar19 = FUN_1448abda6(param_1), lVar19 == 0)) {
                bVar18 = 0;
              }
              else {
                bVar18 = *(byte *)((longlong)param_1 + 0x975);
              }
            }
            else {
              bVar18 = *(byte *)(pppppuVar26 + (uVar34 & 0xffffffff) * 5 + 4);
            }
            bVar16 = true;
            if ((bVar18 & 1) != 0) {
              bVar16 = bVar15;
            }
            if (*(char *)(pppppuVar26 + (longlong)((int)uVar37 % iVar41) * 5 + 4) == '\0') {
              bVar16 = bVar15;
            }
            bVar15 = bVar16;
            uVar34 = (longlong)iVar36 % (longlong)*(int *)(ppppuVar9 + 0x2e4);
            iVar33 = *(int *)(param_1 + 0x3b2);
            uVar37 = uVar34 & 0xffffffff;
          } while ((int)uVar34 != iVar33);
        }
      }
      pppppuVar5 = (undefined8 *****)((double)param_1[0x10e] - (double)pppppuVar5);
      dVar12 = (double)param_1[0x10c] - (double)pppppuVar25;
      dVar11 = (double)param_1[0x10d] - (double)pppppuVar20;
      dVar13 = (double)pppppuVar5 * (double)pppppuVar5 + dVar12 * dVar12 + dVar11 * dVar11;
      fVar46 = (float)SQRT(dVar13);
      fVar48 = *(float *)((longlong)param_1 + 0x1d94);
      if ((fVar46 <= fVar48) || (!bVar15)) {
LAB_140bdaadc:
        pppppuVar25 = param_1[0x332];
        if (0.0 < fVar48) {
          local_268 = (code *)((ulonglong)local_268 & 0xffffffffffffff00);
          local_240 = (undefined8 *****)((ulonglong)local_240 & 0xffffffff00000000);
          FUN_1456bb102(&local_268);
          FUN_1448729ea(param_1 + 0x1b7,local_160,&local_268);
          if (local_140 == 3) {
            local_140 = 3;
            fVar48 = local_160[0]._0_4_;
          }
          else {
            FUN_1400b56fe(&local_118,local_160,3);
            fVar48 = 0.0;
            if (local_f8 != 0) {
              fVar48 = local_118._0_4_;
            }
            pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
            if (pcVar10 != (code *)0x0) {
              pppppppuVar35 = &local_118;
              if (0x18 < local_100) {
                pppppppuVar35 = local_118;
              }
              (*pcVar10)(pppppppuVar35);
            }
            if (0x18 < local_100) {
              FUN_1400020a8(local_118);
            }
          }
          pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_140 * 0x120));
          if (pcVar10 != (code *)0x0) {
            pppppppuVar35 = local_160;
            if (0x18 < local_148) {
              pppppppuVar35 = local_160[0];
            }
            (*pcVar10)(pppppppuVar35);
          }
          if (0x18 < local_148) {
            FUN_1400020a8(local_160[0]);
          }
          FUN_1448173f8(&local_240);
          if (((char)local_268 == '\x03') && (local_258 != (undefined8 *****)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_258 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*local_258)[2])();
            }
          }
          if ((dVar13 != 1.0) || (NAN(dVar13))) {
            if (dVar13 < 9.99999993922529e-09) {
              dVar12 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar11 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              pppppuVar5 = DAT_14c8464f0;
            }
            else {
              dVar13 = 1.0 / SQRT(dVar13);
              dVar11 = dVar11 * dVar13;
              dVar12 = dVar12 * dVar13;
              pppppuVar5 = (undefined8 *****)((double)pppppuVar5 * dVar13);
            }
          }
          memcpy(&local_268,param_1 + 0x35d,0xb8);
          local_1b0 = param_1[0x374];
          local_1a8 = param_1[0x375];
          pppppuStack_1a0 = param_1[0x376];
          local_198 = *(undefined4 *)(param_1 + 0x377);
          local_194 = *(undefined1 *)((longlong)param_1 + 0x1bbc);
          local_170 = param_1[0x37c];
          local_190 = param_1[0x378];
          pppppuStack_188 = param_1[0x379];
          local_180 = *(undefined4 *)(param_1 + 0x37a);
          uStack_17c = *(undefined4 *)((longlong)param_1 + 0x1bd4);
          uStack_178 = *(undefined4 *)(param_1 + 0x37b);
          uStack_174 = *(undefined4 *)((longlong)param_1 + 0x1bdc);
          local_230 = SUB84(param_1[0x361],0);
          uStack_22c = (undefined4)((ulonglong)param_1[0x361] >> 0x20);
          local_240 = param_1[0x35f];
          uStack_238 = SUB84(param_1[0x360],0);
          uStack_234 = (undefined4)((ulonglong)param_1[0x360] >> 0x20);
          local_258 = param_1[0x35f];
          pppppuStack_250 = param_1[0x360];
          pppppuStack_248 = param_1[0x361];
          local_228 = SUB84(dVar12,0);
          uStack_224 = (undefined4)((ulonglong)dVar12 >> 0x20);
          local_2b8 = CONCAT31(local_2b8._1_3_,
                               *(float *)((longlong)param_1 + 0x1d94) <
                               ((fVar48 * 100000.0) / 2236.942) *
                               *(float *)((longlong)ppppuVar8 + 0x7ec));
          local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,*(float *)((longlong)param_1 + 0x1d94))
          ;
          local_2c0 = CONCAT31(local_2c0._1_3_,1);
          dStack_220 = dVar11;
          pppppuStack_218 = pppppuVar5;
          local_210 = dVar12;
          dStack_208 = dVar11;
          local_200 = pppppuVar5;
          (*(code *)(*param_1[0x332])[0x10c])(param_1[0x332],&local_258,&local_228,&local_268);
          FUN_140bdceb2(param_1);
          pppppuVar25 = param_1[0x332];
        }
      }
      else {
        if ((1.0 < *(float *)((longlong)param_1 + 0x1aec) ||
             *(float *)((longlong)param_1 + 0x1aec) == 1.0) ||
           ((cVar17 = FUN_140bdbb20(param_1), cVar17 != '\0' ||
            (*(char *)((longlong)param_1 + 0x1d09) != '\0')))) {
LAB_140bdb053:
          fVar48 = *(float *)((longlong)param_1 + 0x1d94);
          goto LAB_140bdaadc;
        }
        pppppuVar25 = param_1[0x332];
        if ((pppppuVar25[0x3c6] != (undefined8 ****)0x0) &&
           (*(char *)(pppppuVar25[0x3c6] + 0x14) == '\0')) goto LAB_140bdb053;
        *(float *)((longlong)param_1 + 0x1d94) = fVar46;
      }
      if ((pppppuVar25 != (undefined8 *****)0x0) &&
         (ppppuVar38 = pppppuVar25[0x340], ppppuVar38 != (undefined8 ****)0x0)) {
        lVar19 = (longlong)*(int *)(param_1 + 0x3b2);
        if ((-1 < lVar19) &&
           (((*(int *)(param_1 + 0x3b2) < *(int *)(param_1 + 0x3b1) &&
             (*(int *)(param_1 + 0x3b1) == *(int *)(ppppuVar38 + 0x2e4))) &&
            (0 < *(int *)(ppppuVar38 + 0x2e4))))) {
          pppppuVar25 = param_1[0x3b0];
          *(float *)(pppppuVar25 + lVar19 * 5) = fVar45;
          puVar2 = (undefined8 *)((longlong)pppppuVar25 + lVar19 * 0x28 + 4);
          *puVar2 = CONCAT44(local_130,uStack_134);
          puVar2[1] = CONCAT44(uStack_128,uStack_12c);
          pppppuVar25[lVar19 * 5 + 2] = (undefined8 ****)CONCAT44(uStack_124,uStack_128);
          (pppppuVar25 + lVar19 * 5 + 2)[1] = local_120;
          *(undefined1 *)(pppppuVar25 + lVar19 * 5 + 4) = uVar42;
          uVar6 = (undefined4)local_268;
          *(undefined4 *)((longlong)pppppuVar25 + lVar19 * 0x28 + 0x21) = uVar6;
          *(undefined4 *)((longlong)pppppuVar25 + lVar19 * 0x28 + 0x24) = local_268._3_4_;
          *(int *)(param_1 + 0x3b2) = (*(int *)(param_1 + 0x3b2) + 1) % *(int *)(ppppuVar38 + 0x2e4)
          ;
        }
      }
      iVar33 = *(int *)(param_1 + 0x33e);
      if (iVar33 == 0) {
        uVar44 = 1;
        uVar34 = 0;
        iVar41 = 0;
        iVar36 = 0;
      }
      else {
        ppppppuVar29 = (undefined8 ******)param_1[0x33d];
        if ((undefined8 ******)param_1[0x33d] == (undefined8 ******)0x0) {
          ppppppuVar29 = param_1 + 0x33b;
        }
        uVar43 = *(uint *)ppppppuVar29;
        if (uVar43 == 0) {
          iVar41 = iVar33 + 0x1e;
          if (-1 < iVar33 + -1) {
            iVar41 = iVar33 + -1;
          }
          uVar34 = 0;
          uVar30 = (ulonglong)(uint)(iVar41 >> 5);
          if (iVar41 >> 5 < 1) {
            uVar30 = uVar34;
          }
          iVar41 = 0;
          do {
            if (uVar30 == uVar34) goto LAB_140bdabbb;
            iVar41 = iVar41 + 0x20;
            uVar43 = *(uint *)((longlong)ppppppuVar29 + (uVar34 + 1) * 4);
            uVar34 = uVar34 + 1;
          } while (uVar43 == 0);
        }
        else {
          uVar34 = 0;
          iVar41 = 0;
        }
        uVar44 = (ulonglong)(-uVar43 & uVar43);
        uVar30 = uVar44 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar36 = (iVar41 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar33 <= iVar36) {
          iVar36 = iVar33;
        }
      }
      if (iVar36 < iVar33) {
        ppppppuVar29 = param_1 + 0x339;
        uVar43 = 0xffffffff;
        do {
          lVar19 = (longlong)iVar36;
          *(float *)(*ppppppuVar29 + lVar19 * 3 + 1) =
               *(float *)(*ppppppuVar29 + lVar19 * 3 + 1) - param_2;
          if (*(float *)(*ppppppuVar29 + lVar19 * 3 + 1) <= 0.0) {
            FUN_14578280a(ppppppuVar29);
          }
          uVar43 = uVar43 & ~(uint)uVar44;
          ppppppuVar31 = (undefined8 ******)param_1[0x33d];
          if ((undefined8 ******)param_1[0x33d] == (undefined8 ******)0x0) {
            ppppppuVar31 = param_1 + 0x33b;
          }
          iVar33 = *(int *)(param_1 + 0x33e);
          iVar36 = (int)uVar34;
          lVar19 = (longlong)iVar36;
          uVar40 = *(uint *)((longlong)ppppppuVar31 + lVar19 * 4) & uVar43;
          if (uVar40 == 0) {
            iVar27 = iVar33 + 0x1e;
            if (-1 < iVar33 + -1) {
              iVar27 = iVar33 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar28 = iVar27;
            if (iVar27 < iVar36) {
              iVar28 = iVar36;
            }
            if (iVar27 <= iVar36) break;
            lVar23 = 0;
            while( true ) {
              iVar41 = iVar41 + 0x20;
              uVar40 = *(uint *)((longlong)ppppppuVar31 + (lVar23 + lVar19 + 1) * 4);
              if (uVar40 != 0) break;
              lVar23 = lVar23 + 1;
              if (iVar28 - lVar19 == lVar23) goto LAB_140bdabbb;
            }
            uVar34 = (ulonglong)(iVar36 + (int)lVar23 + 1);
            uVar43 = 0xffffffff;
          }
          uVar44 = (ulonglong)(-uVar40 & uVar40);
          uVar30 = uVar44 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar36 = (iVar41 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar36 < iVar33);
      }
LAB_140bdabbb:
      pppppuVar20 = param_1[0x332];
      uVar34 = (ulonglong)local_26c;
      uVar30 = uVar34;
      if (pppppuVar20 == (undefined8 *****)0x0) goto LAB_140bdac14;
    }
    ppppuVar38 = pppppuVar20[0x340];
    uVar30 = uVar34;
    if (ppppuVar38 != (undefined8 ****)0x0) {
      if (((*(char *)((longlong)param_1 + 0x1aa4) != '\0') ||
          (*(char *)((longlong)param_1 + 0x975) != '\x01')) ||
         ((*(float *)(param_1 + 0x35e) < *(float *)((longlong)ppppuVar38 + 0x15c) ||
          (cVar17 = FUN_140bdbb20(param_1), cVar17 != '\0')))) {
        if ((local_26d != '\0') && (*(char *)((longlong)param_1 + 0x975) == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x1aa4) = 0;
          cVar17 = FUN_140bdbb20(param_1);
          if ((cVar17 != '\0') &&
             ((pppppuVar25 = param_1[0x16], pppppuVar25 != (undefined8 *****)0x0 ||
              (pppppuVar25 = (undefined8 *****)FUN_1448abda6(param_1),
              pppppuVar25 != (undefined8 *****)0x0)))) {
            if (pppppuVar25[0x3e] == (undefined8 ****)0x0) {
              pppppuVar20 = pppppuVar25 + 0x8b;
            }
            else {
              pppppuVar20 = (undefined8 *****)(pppppuVar25[0x3e] + 0x1e);
            }
            ppppuVar8 = *pppppuVar20;
            local_268 = (code *)param_1[0x3b3];
            uVar24 = FUN_144a61814(ppppuVar8);
            fVar48 = (float)FUN_144a1f182(ppppuVar8,uVar24);
            fVar45 = *(float *)((longlong)ppppuVar38 + 0x124c);
            uVar30 = uVar34 & 0xffffffff;
            if (fVar45 < fVar48) {
              local_160[0] = (undefined8 *******)0x0;
              if (pppppuVar25[0x3e] == (undefined8 ****)0x0) {
                pppppuVar25 = pppppuVar25 + 0x8b;
              }
              else {
                pppppuVar25 = (undefined8 *****)(pppppuVar25[0x3e] + 0x1e);
              }
              ppppuVar38 = *pppppuVar25;
              local_118 = (undefined8 *******)0x0;
              local_110 = (undefined8 *******)((ulonglong)local_110 & 0xffffffff00000000);
              FUN_1446efa72(&local_118,0,3,0x10);
              pppppppuVar35 = local_118;
              local_110 = (undefined8 *******)CONCAT44(local_110._4_4_,3);
              *local_118 = (undefined8 ******)&PTR_LAB_14a1c8830;
              LOCK();
              UNLOCK();
              ppppppuVar29 = (undefined8 ******)(DAT_14c758608 + 1);
              lVar19 = DAT_14c758608 + 1;
              if (ppppppuVar29 == (undefined8 ******)0x0) {
                LOCK();
                UNLOCK();
                ppppppuVar29 = (undefined8 ******)(DAT_14c758608 + 2);
                lVar19 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar19;
              local_118[2] = ppppppuVar29;
              *local_118 = (undefined8 ******)&PTR_FUN_14b9dd790;
              local_118[3] = (undefined8 ******)0x0;
              FUN_14485c47a(local_118 + 3,param_1);
              pppppppuVar35[4] = param_1;
              local_268 = (code *)0x0;
              uStack_260 = (undefined8 *******)((ulonglong)uStack_260 & 0xffffffff00000000);
              FUN_14487d8d8(&local_268,&local_118);
              local_228 = CONCAT31(local_228._1_3_,1);
              local_2c0 = 0xbf800000;
              local_2c8 = (undefined8 *)((ulonglong)local_2c8 & 0xffffffffffffff00);
              FUN_1406f3fee(ppppuVar38,local_160,&local_268,fVar45);
              (*(code *)(&PTR_LAB_14a1c87a0)[(byte)local_228])(&local_268);
              FUN_1449db362(&local_118);
              uVar30 = uVar34 & 0xffffffff;
            }
          }
        }
      }
      else {
        ppppuVar38 = (undefined8 ****)0x0;
        local_268 = (code *)((ulonglong)local_268 & 0xffffffff00000000);
        uStack_260 = (undefined8 *******)0x0;
        local_258 = (undefined8 *****)0x0;
        pppppuStack_250 = (undefined8 *****)0x0;
        pppppuStack_248 = (undefined8 *****)0x0;
        local_240 = (undefined8 *****)0x0;
        uStack_238 = 0;
        uStack_234 = 0;
        local_230 = 0;
        uStack_22c = 0;
        local_228 = 0;
        dStack_220 = 0.0;
        pppppuStack_218 = (undefined8 *****)0x0;
        local_210 = 0.0;
        dStack_208 = 0.0;
        local_200 = (undefined8 *****)0x0;
        uStack_1f8 = 0;
        local_1f0 = 0xffffffff;
        local_1ec = 0;
        local_1ea = 1;
        local_1e9 = 0;
        if (param_1[0x332] != (undefined8 *****)0x0) {
          ppppuVar38 = param_1[0x332][0x2e2];
        }
        lVar19 = FUN_140316ff8();
        pppppuVar25 = param_1[0x16];
        if (pppppuVar25 == (undefined8 *****)0x0) {
          pppppuVar25 = (undefined8 *****)FUN_1448abda6(param_1);
        }
        local_2c8 = &local_268;
        FUN_140bdce7c(pppppuVar25,lVar19 + 0xc0,ppppuVar38,0);
        *(undefined1 *)((longlong)param_1 + 0x1aa4) = 1;
      }
    }
  }
LAB_140bdac14:
  plVar21 = (longlong *)(*(code *)(*param_1)[0xb7])(param_1);
  if (plVar21 == (longlong *)0x0) {
LAB_140bdac53:
    plVar21 = (longlong *)0x0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_290 = &local_268;
      local_268 = FUN_141030f22;
      local_280 = FUN_14081d0ea;
      local_288 = &LAB_1459f2e4c;
      local_298 = &LAB_148c39de3;
      local_2a0 = &LAB_1457a9eb2;
      local_2a8 = &DAT_149e063b2;
      local_2b0 = 0;
      local_2b8 = 0x10000004;
      local_2c0 = 0x10;
      local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(plVar21[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar21[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
        DAT_14cbadd90 + 0x30)) goto LAB_140bdac53;
  }
  plVar22 = (longlong *)(*(code *)(*param_1)[0xb7])(param_1);
  if ((((*(char *)(param_1 + 0x78) != '\x01') ||
       ((plVar22 != (longlong *)0x0 &&
        (cVar17 = (**(code **)(*plVar22 + 0x6c8))(plVar22), cVar17 != '\0')))) &&
      (plVar21 != (longlong *)0x0)) && (param_1[0x130] != (undefined8 *****)0x0)) {
    cVar17 = (**(code **)(*plVar21 + 0x1080))(plVar21);
    if (cVar17 == '\0') {
      (**(code **)(*plVar21 + 0x680))(plVar21,&local_268);
      *(float *)(param_1 + 0x333) = (float)(double)uStack_260;
      *(float *)((longlong)param_1 + 0x199c) = (float)(double)local_268;
    }
    else {
      (*(code *)(*param_1)[0xc3])(param_1);
      (*(code *)(*param_1)[0xc2])(param_1);
    }
  }
  if ((((char)uVar30 == '\0' && *(char *)((longlong)param_1 + 0x19a1) == '\x01') &&
      (*(char *)(param_1 + 0x3a1) == '\x01')) && (*(char *)((longlong)param_1 + 0x1d0a) == '\x01'))
  {
    FUN_1406f39a0(param_1,0);
  }
  if (*(int *)(param_1 + 0x3a6) != *(int *)((longlong)param_1 + 0x1d2c)) {
    *(int *)(param_1 + 0x3a6) = *(int *)((longlong)param_1 + 0x1d2c);
    uVar43 = *(uint *)(param_1 + 0x3b6);
    if (0 < (int)uVar43) {
      puVar32 = &DAT_ffffffff;
      uVar34 = 0;
      do {
        if (*(float *)(param_1[0x3b5] + uVar34) <= *(float *)((longlong)param_1 + 0x1d24)) {
          puVar32 = (undefined1 *)(uVar34 & 0xffffffff);
        }
        uVar34 = uVar34 + 1;
      } while (uVar43 != uVar34);
      if (((uint)puVar32 < uVar43) &&
         (fVar45 = *(float *)((longlong)param_1[0x3b5] + (longlong)puVar32 * 8 + 4), 0.0 < fVar45))
      {
        cVar17 = FUN_1406f3f0a(param_1);
        if (cVar17 == '\0') {
          FUN_148f01424(param_1,fVar45);
        }
        plVar22 = (longlong *)(*(code *)(*param_1)[0xb7])(param_1);
        if (((*(char *)(param_1 + 0x78) != '\x01') ||
            ((plVar22 != (longlong *)0x0 &&
             (cVar17 = (**(code **)(*plVar22 + 0x6c8))(plVar22), cVar17 != '\0')))) &&
           (param_1[0x130] != (undefined8 *****)0x0)) {
          FUN_1406f39a0(param_1,1,0);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x3ae) != *(int *)((longlong)param_1 + 0x1d6c)) {
    *(int *)(param_1 + 0x3ae) = *(int *)((longlong)param_1 + 0x1d6c);
    plVar22 = (longlong *)(*(code *)(*param_1)[0xb7])(param_1);
    if (((*(char *)(param_1 + 0x78) != '\x01') ||
        ((plVar22 != (longlong *)0x0 &&
         (cVar17 = (**(code **)(*plVar22 + 0x6c8))(plVar22), cVar17 != '\0')))) &&
       (param_1[0x130] != (undefined8 *****)0x0)) {
      FUN_1406f39a0(param_1,*(char *)(param_1 + 0x3a8) != '\0',0);
    }
  }
  plVar22 = (longlong *)(*(code *)(*param_1)[0xb7])(param_1);
  if ((((*(char *)(param_1 + 0x78) == '\x01') &&
       ((plVar22 == (longlong *)0x0 ||
        (cVar17 = (**(code **)(*plVar22 + 0x6c8))(plVar22), cVar17 == '\0')))) ||
      (param_1[0x130] == (undefined8 *****)0x0)) ||
     (((plVar21 != (longlong *)0x0 &&
       (cVar17 = (**(code **)(*plVar21 + 0x1080))(plVar21), cVar17 != '\0')) ||
      (lVar19 = (*(code *)(*param_1)[0xdb])(param_1), lVar19 == 0)))) goto LAB_140bdad92;
  bVar18 = *(byte *)((longlong)param_1 + 0x19a1);
  if (bVar18 == 1) {
    lVar23 = (*(code *)(*param_1)[0xdb])(param_1);
    if (lVar23 == 0) {
      uVar42 = 1;
    }
    else {
      fVar45 = (float)FUN_14020975c(lVar23);
      if (fVar45 <= 1e-08) {
        uVar42 = 2;
      }
      else {
        if (*(longlong *)(lVar23 + 0x40) == 0) {
          bVar18 = *(byte *)((longlong)param_1 + 0x19a1);
          goto LAB_140bdad81;
        }
        uVar42 = 3;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x1a6c) = uVar42;
    uVar24 = 0;
    uVar39 = 0;
  }
  else {
LAB_140bdad81:
    if (((((bVar18 & 1) != 0) || (*(char *)((longlong)param_1 + 0x19a2) != '\x01')) ||
        ((*(char *)(param_1 + 0x3a1) == '\x01' && (*(char *)((longlong)param_1 + 0x1d0a) != '\0'))))
       || (((fVar45 = (float)FUN_14020975c(lVar19), fVar45 < 1.0 ||
            (*(char *)((longlong)param_1 + 0x1a6c) != '\x02')) &&
           ((*(longlong *)(lVar19 + 0x40) != 0 || (*(char *)((longlong)param_1 + 0x1a6c) != '\x03'))
           )))) goto LAB_140bdad92;
    uVar24 = 1;
    uVar39 = 1;
  }
  FUN_1406f39a0(param_1,uVar24,uVar39);
LAB_140bdad92:
  param_1[0x72] = (undefined8 *****)0x0;
  *(undefined4 *)(param_1 + 0x34e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a74) = 0;
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bdb970 FUN_140bdb970 body=428 status=ok
// SIG undefined FUN_140bdb970(void)

float FUN_140bdb970(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar6 = (float)FUN_144800006();
  if ((*(longlong *)(param_1 + 0x1990) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x1a00), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x1d40) == '\0') {
      bVar3 = *(byte *)(param_1 + 0x1cda);
      if (bVar3 == 1) {
        cVar4 = FUN_140bdbb20(param_1);
        if (cVar4 != '\0') {
          local_98[0] = 0;
          local_70 = 0;
          FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x1990));
          FUN_1448729ea(param_1 + 0x14f8,local_68,local_98);
          fVar8 = (float)FUN_144a7ecd0(local_68);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar2 != (code *)0x0) {
            ppppuVar5 = local_68;
            if (0x18 < local_50) {
              ppppuVar5 = (undefined8 ****)local_68[0];
            }
            (*pcVar2)(ppppuVar5);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(local_68[0]);
          }
          fVar6 = fVar6 * fVar8;
          FUN_144a5ac3a(local_98);
          goto LAB_140bdba61;
        }
        bVar3 = *(byte *)(param_1 + 0x1cda);
      }
      uVar7 = 0;
      if ((bVar3 & 1) == 0) {
LAB_140bdb9e2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uVar7);
      }
      if (*(double *)(param_1 + 0x870) <= 0.0) {
        uVar7 = *(undefined4 *)(param_1 + 0x1aec);
        goto LAB_140bdb9e2;
      }
      fVar8 = *(float *)(lVar1 + 0x17c);
    }
    else {
      fVar8 = *(float *)(param_1 + 0x1d60);
    }
    fVar6 = fVar6 * fVar8;
  }
LAB_140bdba61:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdbb20 FUN_140bdbb20 body=262 status=ok
// SIG undefined FUN_140bdbb20(void)

ulonglong FUN_140bdbb20(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  undefined7 uVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x1d98);
  uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar7 = CONCAT71(uVar8,lVar5 != 0);
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_140bdbb75;
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 != DVar3) goto LAB_140bdbb75;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  if (lVar5 != 0 && lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    local_30 = *(undefined8 *)(param_1 + 0x1d98);
    lVar5 = FUN_144a61814(*puVar6);
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71(uVar8,*(char *)(lVar5 + 1) != '\x02');
    }
  }
  else {
    uVar7 = CONCAT71(uVar8,lVar4 == 0 && lVar5 != 0);
  }
LAB_140bdbb75:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdbc28 FUN_140bdbc28 body=2140 status=ok
// SIG undefined FUN_140bdbc28(void)

void FUN_140bdbc28(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  
  fVar19 = (float)param_2;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x5b8))();
  uVar14 = (**(code **)(*param_1 + 0x478))(param_1);
  plVar3 = (longlong *)param_1[0x23];
  iVar13 = 0;
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar3 + 0x7b8))(plVar3,0,1,0xffffffff);
  }
  FUN_140bdc706(param_1 + 0x100,uVar6,uVar14,param_2);
  *(undefined4 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x975) = 0;
  lVar7 = param_1[0x130];
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    iVar13 = 0;
    if (0 < *(int *)(lVar7 + 0x10)) {
      lVar11 = 0;
      iVar13 = 0;
      lVar9 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) == '\x01') {
          iVar13 = iVar13 + 1;
          *(int *)(param_1 + 0x12e) = iVar13;
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x975) = 1;
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x98;
      } while (lVar9 < *(int *)(lVar7 + 0x10));
    }
  }
  *(bool *)((longlong)param_1 + 0x974) = iVar13 == (int)lVar9;
  if ((char)param_1[0x78] == '\x01') {
    if ((plVar5 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar4 == '\0')) goto LAB_140bdc20d;
    lVar7 = param_1[0x130];
  }
  if (lVar7 == 0) {
LAB_140bdc20d:
    if ((char)param_1[0x137] != '\0') {
      return;
    }
    *(int *)((longlong)param_1 + 0x3a4) = (int)param_1[0x6c];
    param_1[0x75] = *(longlong *)((longlong)param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)((longlong)param_1 + 0x36c);
    *(int *)((longlong)param_1 + 0x3b4) = (int)param_1[0x6e];
    *(undefined4 *)(param_1 + 0x77) = *(undefined4 *)((longlong)param_1 + 0x374);
    *(int *)((longlong)param_1 + 0x3bc) = (int)param_1[0x6f];
    FUN_1457828d4(param_1,*(undefined4 *)((longlong)param_1 + 0x37c),1);
    return;
  }
  bVar8 = *(byte *)(param_1 + 0x3c);
  if ((bVar8 & 1) == 0) {
    if (((*(char *)((longlong)param_1 + 0x31d) == '\x01') && (0.0001 < *(float *)(param_1 + 0x72)))
       && ((*(int *)(lVar7 + 0x18) == 0 && (*(int *)((longlong)param_1 + 0x9ac) == 0)))) {
LAB_140bdc35a:
      uVar6 = 1;
LAB_140bdc35f:
      FUN_1457828d4(param_1,uVar6,1);
      bVar8 = *(byte *)(param_1 + 0x3c);
    }
  }
  else {
    if (((0.0001 < *(float *)((longlong)param_1 + 0x394)) && (-1 < *(int *)(lVar7 + 0x18))) &&
       (-1 < *(int *)((longlong)param_1 + 0x9ac))) {
      uVar6 = 0xffffffff;
      goto LAB_140bdc35f;
    }
    if (((0.0001 < *(float *)(param_1 + 0x72)) && (*(int *)(lVar7 + 0x18) < 1)) &&
       (*(int *)((longlong)param_1 + 0x9ac) < 1)) goto LAB_140bdc35a;
  }
  fVar17 = *(float *)(param_1 + 0x72);
  fVar1 = *(float *)((longlong)param_1 + 0x394);
  if ((bVar8 & 1) == 0) {
    fVar18 = ABS(fVar1);
    if ((fVar1 < 1e-08) && (fVar17 < 1e-08)) {
      if ((*(float *)(param_1 + 0x12d) < *(float *)(param_1 + 0x79)) &&
         (-*(float *)(param_1 + 0x79) < *(float *)(param_1 + 0x12d))) {
        fVar18 = 1.0;
      }
    }
    goto LAB_140bdbde5;
  }
  fVar18 = fVar1;
  if (fVar17 <= 0.0) {
    fVar15 = *(float *)(param_1 + 0x12d);
    if (fVar1 <= 0.0) {
      if ((*(float *)(param_1 + 0x79) <= fVar15) || (fVar15 <= -*(float *)(param_1 + 0x79))) {
        fVar18 = *(float *)((longlong)param_1 + 0x3c4);
      }
      else {
        fVar18 = 1.0;
      }
    }
    else {
      if (*(float *)((longlong)param_1 + 0x3cc) <= fVar15 &&
          fVar15 != *(float *)((longlong)param_1 + 0x3cc)) goto LAB_140bdc3f0;
      if (*(int *)((longlong)param_1 + 0x9ac) < 0) {
        fVar18 = 0.0;
        fVar17 = fVar1;
      }
    }
  }
  else if (((bVar8 & 2) != 0) &&
          (*(float *)(param_1 + 0x12d) <= -*(float *)((longlong)param_1 + 0x3cc) &&
           -*(float *)((longlong)param_1 + 0x3cc) != *(float *)(param_1 + 0x12d))) {
LAB_140bdc3f0:
    fVar18 = 1.0;
    fVar17 = 0.0;
  }
  dVar16 = (double)fVar17;
  if (1.0 <= dVar16) {
    dVar16 = 1.0;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  fVar17 = (float)dVar16;
  dVar16 = (double)fVar18;
  if (1.0 <= dVar16) {
    dVar16 = 1.0;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  fVar18 = (float)dVar16;
LAB_140bdbde5:
  fVar1 = *(float *)((longlong)param_1 + 0x3a4);
  fVar15 = *(float *)((longlong)param_1 + 0x38c) - fVar1;
  uVar12 = (ulonglong)((-(uint)(fVar15 == 0.0) & 1) << 2);
  if (fVar1 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar1)) {
    uVar12 = 4;
  }
  uVar10 = 0;
  if (0.0 < fVar15 != fVar1 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar21 = *(float *)((longlong)param_1 + uVar12 + 0x500) * fVar19;
  if (fVar21 <= fVar15) {
    fVar15 = fVar21;
  }
  if (fVar15 <= -fVar21) {
    fVar15 = -fVar21;
  }
  *(float *)((longlong)param_1 + 0x3a4) = fVar15 + fVar1;
  fVar21 = *(float *)(param_1 + 0x75);
  fVar17 = fVar17 - fVar21;
  uVar12 = (ulonglong)((-(uint)(fVar17 == 0.0) & 1) << 2);
  if (fVar21 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar21)) {
    uVar12 = 4;
  }
  if (0.0 < fVar17 != fVar21 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar22 = *(float *)((longlong)param_1 + uVar12 + 0x3d0) * fVar19;
  if (fVar22 <= fVar17) {
    fVar17 = fVar22;
  }
  if (fVar17 <= -fVar22) {
    fVar17 = -fVar22;
  }
  *(float *)(param_1 + 0x75) = fVar17 + fVar21;
  fVar17 = *(float *)((longlong)param_1 + 0x3ac);
  fVar18 = fVar18 - fVar17;
  uVar12 = (ulonglong)((-(uint)(fVar18 == 0.0) & 1) << 2);
  if (fVar17 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar17)) {
    uVar12 = 4;
  }
  if (0.0 < fVar18 != fVar17 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar21 = *(float *)((longlong)param_1 + uVar12 + 0x468) * fVar19;
  if (fVar21 <= fVar18) {
    fVar18 = fVar21;
  }
  if (fVar18 <= -fVar21) {
    fVar18 = -fVar21;
  }
  *(float *)((longlong)param_1 + 0x3ac) = fVar18 + fVar17;
  fVar21 = *(float *)(param_1 + 0x76);
  fVar22 = *(float *)(param_1 + 0x73) - fVar21;
  uVar12 = (ulonglong)((-(uint)(fVar22 == 0.0) & 1) << 2);
  if (fVar21 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar21)) {
    uVar12 = 4;
  }
  if (0.0 < fVar22 != fVar21 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar23 = *(float *)((longlong)param_1 + uVar12 + 0x630) * fVar19;
  if (fVar23 <= fVar22) {
    fVar22 = fVar23;
  }
  if (fVar22 <= -fVar23) {
    fVar22 = -fVar23;
  }
  *(float *)(param_1 + 0x76) = fVar22 + fVar21;
  fVar23 = *(float *)((longlong)param_1 + 0x3b4);
  fVar20 = *(float *)((longlong)param_1 + 0x39c) - fVar23;
  uVar12 = (ulonglong)((-(uint)(fVar20 == 0.0) & 1) << 2);
  if (fVar23 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar23)) {
    uVar12 = 4;
  }
  if (0.0 < fVar20 != fVar23 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar25 = *(float *)((longlong)param_1 + uVar12 + 0x6c8) * fVar19;
  if (fVar25 <= fVar20) {
    fVar20 = fVar25;
  }
  if (fVar20 <= -fVar25) {
    fVar20 = -fVar25;
  }
  *(float *)((longlong)param_1 + 0x3b4) = fVar20 + fVar23;
  fVar25 = *(float *)(param_1 + 0x77);
  fVar24 = *(float *)(param_1 + 0x74) - fVar25;
  uVar12 = (ulonglong)((-(uint)(fVar24 == 0.0) & 1) << 2);
  if (fVar25 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar25)) {
    uVar12 = 4;
  }
  if (0.0 < fVar24 != fVar25 <= 0.0) {
    uVar12 = uVar10;
  }
  fVar26 = *(float *)((longlong)param_1 + uVar12 + 0x760) * fVar19;
  if (fVar26 <= fVar24) {
    fVar24 = fVar26;
  }
  if (fVar24 <= -fVar26) {
    fVar24 = -fVar26;
  }
  *(float *)(param_1 + 0x77) = fVar24 + fVar25;
  fVar26 = 0.0;
  if ((*(byte *)((longlong)param_1 + 0x314) & 1) != 0) {
    fVar26 = 1.0;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3bc);
  fVar26 = fVar26 - fVar2;
  uVar27 = -(uint)(fVar2 <= 0.0 != 0.0 < fVar26);
  uVar12 = (ulonglong)((-(uint)(fVar26 == 0.0) & 1) << 2);
  if (fVar2 != 0.0) {
    uVar12 = 4;
  }
  if (NAN(fVar2)) {
    uVar12 = 4;
  }
  if ((uVar27 & 1) != 0) {
    uVar12 = uVar10;
  }
  fVar19 = fVar19 * *(float *)((longlong)param_1 + uVar12 + 0x598);
  if (fVar19 <= fVar26) {
    fVar26 = fVar19;
  }
  if (fVar26 <= -fVar19) {
    fVar26 = -fVar19;
  }
  *(float *)((longlong)param_1 + 0x3bc) = fVar26 + fVar2;
  if ((char)param_1[0x137] == '\0') {
    if (param_1[0x130] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(param_1[0x130] + 0x18);
    }
    FUN_148acca94(param_1,fVar15 + fVar1,uVar27,fVar18 + fVar17,fVar26 + fVar2,uVar14,
                  fVar20 + fVar23,fVar22 + fVar21,fVar24 + fVar25);
  }
  lVar7 = param_1[0x3b];
  if (lVar7 == 0) {
    return;
  }
  if ((*(longlong *)(lVar7 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar13 = FUN_14487fd02(lVar7);
  if (iVar13 != 3) {
    return;
  }
  FUN_140bdc5b6(param_1);
  return;
}



// FUNCTION 140bdc484 FUN_140bdc484 body=304 status=ok
// SIG undefined FUN_140bdc484(void)

longlong FUN_140bdc484(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x998);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x110) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa8), lVar1 != 0)) {
      if (DAT_14caf64b8 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141030f22;
        local_20 = FUN_14081d0ea;
        local_28 = FUN_142b4754c;
        local_38 = &LAB_147c45ce0;
        local_40 = &LAB_1463f1ff4;
        local_48 = &DAT_149e063b2;
        local_50 = 0x4000000000;
        local_58 = 0x10000004;
        local_60 = 8;
        local_68 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) {
        lVar1 = *(longlong *)(lVar1 + 0x3c0);
        goto LAB_140bdc4ed;
      }
    }
    lVar1 = 0;
  }
LAB_140bdc4ed:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdc5b6 FUN_140bdc5b6 body=310 status=ok
// SIG undefined FUN_140bdc5b6(void)

void FUN_140bdc5b6(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x5b8))();
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = &DAT_149e063b2;
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
        (lVar1 = *(longlong *)(lVar1 + 0x448), lVar1 != 0)) &&
       ((*(uint *)(lVar1 + 0x2e58) >> 8 & 1) != 0)) {
      *(uint *)(lVar1 + 0x2e58) = *(uint *)(lVar1 + 0x2e58) | 0x400;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bdc706 FUN_140bdc706 body=1909 status=ok
// SIG undefined FUN_140bdc706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bdc706(double *param_1,longlong param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined8 in_XMM2_Qb;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auStack_1a8 [36];
  float local_184;
  double local_180;
  undefined1 local_178 [16];
  double local_168 [4];
  double local_148;
  double dStack_140;
  double local_138;
  double *local_100;
  longlong local_f8;
  code *local_f0;
  double **local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_2 != 0) {
    auVar20._8_4_ = (int)in_XMM2_Qb;
    auVar20._0_8_ = param_3;
    auVar20._12_4_ = (int)((ulonglong)in_XMM2_Qb >> 0x20);
    FUN_1447f067c(param_2,local_168,1,0);
    pdVar8 = local_168;
    pdVar9 = param_1;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
    local_168[0] = DAT_14c8464e0;
    local_168[1] = DAT_14c8464e8;
    local_168[2] = DAT_14c8464f0;
    local_f0 = (code *)&LAB_143620340;
    lVar10 = param_2 + 0x138;
    local_100 = local_168;
    local_f8 = param_2;
    local_e8 = &local_100;
    FUN_1448e6002(lVar10,&local_f0);
    param_1[0xe] = local_168[2];
    param_1[0xc] = local_168[0];
    param_1[0xd] = local_168[1];
    local_168[0] = DAT_14c8464e0;
    local_168[1] = DAT_14c8464e8;
    local_168[2] = DAT_14c8464f0;
    local_f0 = (code *)&LAB_1436203a6;
    local_100 = local_168;
    local_e8 = &local_100;
    FUN_1448e6002(lVar10,&local_f0);
    param_1[0x14] = local_168[2];
    param_1[0x12] = local_168[0];
    param_1[0x13] = local_168[1];
    pdVar8 = (double *)&DAT_14c846480;
    pdVar9 = local_168;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
    local_f0 = FUN_14362045c;
    local_100 = local_168;
    local_e8 = &local_100;
    FUN_1448e6002(lVar10,&local_f0);
    param_1[0x15] = local_148;
    param_1[0x16] = dStack_140;
    param_1[0x17] = local_138;
    dVar14 = param_1[0xc];
    local_180 = param_1[0xd];
    dVar1 = param_1[0xe];
    dVar15 = dVar1 * dVar1 + dVar14 * dVar14 + local_180 * local_180;
    if (((dVar15 != 1.0) || (dVar13 = dVar14, dVar16 = dVar1, dVar11 = local_180, NAN(dVar15))) &&
       (dVar13 = DAT_14c8464e0, dVar16 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar13 = dVar14 * dVar15;
      dVar16 = dVar1 * dVar15;
      dVar11 = local_180 * dVar15;
    }
    param_1[0x18] = dVar13;
    param_1[0x19] = dVar11;
    param_1[0x1a] = dVar16;
    dVar6 = *param_1;
    dVar4 = param_1[1];
    dVar3 = param_1[2];
    dVar13 = dVar6 * 0.0 - dVar4 * 0.0;
    dVar16 = dVar4 * 1.0 - dVar3 * 0.0;
    dVar11 = dVar3 * 0.0 - dVar6 * 1.0;
    dVar14 = param_1[3];
    dVar15 = param_1[3];
    dVar16 = dVar16 + dVar16;
    dVar11 = dVar11 + dVar11;
    dVar13 = dVar13 + dVar13;
    auVar2 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[0x1b] = (dVar13 * dVar4 - dVar11 * dVar3) + dVar14 * dVar16 + 0.0;
    param_1[0x1c] = (dVar3 * dVar16 - dVar6 * dVar13) + dVar15 * dVar11 + 0.0;
    param_1[0x1d] = dVar13 * dVar14 + 1.0 + (dVar11 * dVar6 - dVar16 * dVar4);
    dVar16 = dVar6 * 0.0 - dVar4 * 1.0;
    dVar11 = dVar4 * 0.0 - dVar3 * 0.0;
    dVar18 = dVar3 * 1.0 - dVar6 * 0.0;
    dVar11 = dVar11 + dVar11;
    dVar18 = dVar18 + dVar18;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar16 * dVar14 + 0.0 + (dVar18 * dVar6 - dVar11 * dVar4);
    dVar13 = (dVar3 * dVar11 - dVar6 * dVar16) + dVar15 * dVar18 + 0.0;
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ = (dVar16 * dVar4 - dVar18 * dVar3) + dVar14 * dVar11 + 1.0;
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x1e) = auVar12;
    dVar13 = dVar6 * 1.0 - dVar4 * 0.0;
    dVar16 = dVar4 * 0.0 - dVar3 * 1.0;
    dVar11 = dVar3 * 0.0 - dVar6 * 0.0;
    dVar16 = dVar16 + dVar16;
    dVar11 = dVar11 + dVar11;
    dVar13 = dVar13 + dVar13;
    param_1[0x20] = dVar17;
    dVar15 = (dVar3 * dVar16 - dVar6 * dVar13) + dVar15 * dVar11 + 1.0;
    auVar5._8_4_ = SUB84(dVar15,0);
    auVar5._0_8_ = (dVar13 * dVar4 - dVar11 * dVar3) + dVar14 * dVar16 + 0.0;
    auVar5._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x21) = auVar5;
    param_1[0x23] = dVar13 * dVar14 + 0.0 + (dVar11 * dVar6 - dVar16 * dVar4);
    dVar18 = param_1[0xc];
    dVar15 = param_1[0xd];
    dVar11 = -dVar6;
    dVar4 = -dVar4;
    dVar3 = dVar3 * -1.0;
    dVar13 = param_1[3] * 1.0;
    dVar19 = dVar18 * dVar3 - dVar11 * dVar1;
    dVar16 = dVar15 * dVar11 - dVar4 * dVar18;
    dVar21 = dVar1 * dVar4 - dVar3 * dVar15;
    dVar21 = dVar21 + dVar21;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    auVar12 = divpd(_DAT_149934d80,auVar2);
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar12._0_8_) *
             ((dVar16 * dVar4 - dVar19 * dVar3) + dVar13 * dVar21 + dVar18);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar12._8_8_) *
             (dVar6 * dVar16 + dVar3 * dVar21 + dVar13 * dVar19 + dVar15);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_1[10])) &
                     (ulonglong)(1.0 / param_1[10])) *
             (dVar13 * dVar16 + dVar1 + (dVar19 * dVar11 - dVar21 * dVar4));
    auVar2._8_4_ = SUB84(dVar15,0);
    auVar2._0_8_ = dVar14;
    auVar2._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0xf) = auVar2;
    param_1[0x11] = dVar16;
    dVar13 = 1.0 / (double)param_4;
    dVar16 = (dVar16 - param_1[0x2c]) * dVar13;
    dVar15 = (dVar15 - param_1[0x2b]) * dVar13;
    dVar13 = dVar13 * (dVar14 - param_1[0x2a]);
    local_178._0_4_ = (undefined4)param_3;
    dVar14 = 1.0 / (double)ABS((float)local_178._0_4_);
    param_1[0x24] = dVar13;
    param_1[0x25] = dVar15;
    param_1[0x26] = dVar16;
    param_1[0x27] = dVar14 * dVar13;
    param_1[0x28] = dVar15 * dVar14;
    param_1[0x29] = dVar16 * dVar14;
    param_1[0x2a] = param_1[0xf];
    param_1[0x2b] = param_1[0x10];
    param_1[0x2c] = param_1[0x11];
    *(float *)(param_1 + 0x2d) =
         (float)(dVar17 * dVar1 + dVar18 * param_1[0x1e] + local_180 * param_1[0x1f]);
    *(float *)((longlong)param_1 + 0x16c) = (float)dVar13;
    local_184 = param_4;
    local_178 = auVar20;
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


