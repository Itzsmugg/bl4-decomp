// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493c9ee4 FUN_1493c9ee4 body=156 status=ok
// SIG undefined FUN_1493c9ee4(void)

undefined8 * FUN_1493c9ee4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1493c9f80 FUN_1493c9f80 body=94 status=ok
// SIG undefined FUN_1493c9f80(void)

longlong * FUN_1493c9f80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1493cee5c(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493c9fde FUN_1493c9fde body=94 status=ok
// SIG undefined FUN_1493c9fde(void)

longlong * FUN_1493c9fde(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1493cee5c(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca03c FUN_1493ca03c body=94 status=ok
// SIG undefined FUN_1493ca03c(void)

longlong * FUN_1493ca03c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1493cef99(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca09a FUN_1493ca09a body=98 status=ok
// SIG undefined FUN_1493ca09a(void)

longlong * FUN_1493ca09a(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1400b22c2(param_1 + 2,"Successful.");
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca0fc FUN_1493ca0fc body=98 status=ok
// SIG undefined FUN_1493ca0fc(void)

longlong * FUN_1493ca0fc(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1400b22c2(param_1 + 2,"[Failed] Input File Not Found.");
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca15e FUN_1493ca15e body=98 status=ok
// SIG undefined FUN_1493ca15e(void)

longlong * FUN_1493ca15e(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1400b22c2(param_1 + 2,"[Failed] Parsing error.");
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca1c0 FUN_1493ca1c0 body=98 status=ok
// SIG undefined FUN_1493ca1c0(void)

longlong * FUN_1493ca1c0(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_1400b22c2(param_1 + 2,"[Failed] Unsupported Extension Found.");
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493ca222 FUN_1493ca222 body=175 status=ok
// SIG undefined FUN_1493ca222(void)

undefined8 FUN_1493ca222(undefined8 param_1)

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
  local_b8 = FUN_1459238a6();
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



// FUNCTION 1493ca2d2 FUN_1493ca2d2 body=2708 status=ok
// SIG undefined FUN_1493ca2d2(void)

longlong *
FUN_1493ca2d2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  void *pvVar17;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 *local_180;
  longlong *local_178;
  undefined4 local_16c;
  undefined8 local_168;
  longlong local_160;
  void *local_158;
  undefined8 local_150;
  int local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  longlong local_120 [2];
  undefined8 local_110;
  int local_108;
  longlong local_100 [2];
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(uint *)(param_6 + 1) < 2) {
    param_6 = param_3;
  }
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_6 + 1);
  lVar13 = (longlong)local_90;
  pvVar17 = (void *)*param_6;
  local_180 = param_3;
  local_160 = param_1;
  if (lVar13 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar17,lVar13 * 2);
  }
  puVar10 = local_180 + 0x12;
  if (1 < *(uint *)(param_7 + 1)) {
    puVar10 = param_7;
  }
  FUN_140b1283a(local_a8,L"\\Mesh\\",puVar10);
  local_178 = (longlong *)FUN_1492f2ba8(param_2,local_a8);
  if (local_178 != (longlong *)0x0) {
    lVar13 = FUN_14599b312();
    if ((*(int *)(lVar13 + 0x38) <= *(int *)(local_178[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(local_178[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
        lVar13 + 0x30)) goto LAB_1493ca3e3;
  }
  local_16c = param_4;
  FUN_144a7cc9e(param_5,param_4);
  local_168 = param_2;
  local_178 = (longlong *)FUN_1493cd8cf(param_2);
  FUN_1444ba64e(local_178,local_a8,&local_98,2);
  if ((longlong)*(int *)(local_180 + 3) != 0) {
    pvVar17 = (void *)local_180[2];
    local_158 = (void *)((longlong)*(int *)(local_180 + 3) * 0xa0 + (longlong)pvVar17);
    iVar11 = 0;
    do {
      local_88 = (void *)0x0;
      uStack_80 = (undefined8 *)0x0;
      FUN_144a83b10(&local_88,iVar11);
      FUN_140ba7826(&local_e0,L"Primitive[",&local_88);
      FUN_144a882a8(local_b8,&local_e0,&DAT_14bca8e56);
      if (local_e0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = (undefined8 *)((longlong)pvVar17 + 0x40);
      local_88 = (void *)0x100000000;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      uStack_80 = puVar10;
      if (*(int *)((longlong)pvVar17 + 0x58) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        iVar6 = *(int *)((longlong)pvVar17 + 0x58);
      }
      plVar7 = (longlong *)((longlong)pvVar17 + 0x30);
      uStack_c0 = CONCAT44(uStack_6c,uStack_70);
      local_c8 = local_78;
      uVar3 = local_c8;
      local_d8 = local_88;
      puStack_d0 = uStack_80;
      local_c8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar5 = local_c8._4_4_;
      local_e0 = plVar7;
      if ((local_c8._4_4_ != iVar6) || (local_c8 = uVar3, uStack_80 != puVar10)) {
        do {
          local_c8 = uVar3;
          lVar13 = *local_e0;
          local_88 = (void *)0x0;
          uStack_80 = (undefined8 *)0xffffffff00000000;
          FUN_140474144(&local_f0,local_b8,lVar13 + (longlong)iVar5 * 0x28);
          local_188 = 0;
          FUN_1492fb1ea(local_178,&local_f0,lVar13 + 0x10 + (longlong)iVar5 * 0x28,&local_88);
          if (local_f0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if ((uStack_80._4_4_ != -1) && (local_88 != (void *)0x0)) {
            FUN_1400020a8();
          }
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar5 = local_c8._4_4_;
          uVar3 = local_c8;
        } while (local_e0 != plVar7 || (puStack_d0 != puVar10 || local_c8._4_4_ != iVar6));
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      iVar11 = iVar11 + 1;
      pvVar17 = (void *)((longlong)pvVar17 + 0xa0);
    } while (pvVar17 != local_158);
  }
  plVar7 = local_180 + 8;
  puVar10 = local_180 + 10;
  local_88 = (void *)0x100000000;
  local_78 = 0xffffffff;
  uStack_70 = 0;
  iVar11 = 0;
  uStack_80 = puVar10;
  if (*(int *)(local_180 + 0xd) != 0) {
    FUN_1449c0562(&local_88);
    iVar11 = *(int *)(local_180 + 0xd);
  }
  uVar3 = local_168;
  uVar2 = local_16c;
  local_c8 = local_78;
  uVar4 = local_c8;
  uStack_c0 = CONCAT44(uStack_6c,uStack_70);
  local_d8 = local_88;
  puStack_d0 = uStack_80;
  local_c8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  iVar6 = local_c8._4_4_;
  local_e0 = plVar7;
  if ((local_c8._4_4_ != iVar11) || (local_c8 = uVar4, uStack_80 != puVar10)) {
    do {
      local_c8 = uVar4;
      local_88 = (void *)0x0;
      uStack_80 = (undefined8 *)0xffffffff00000000;
      local_188 = 0;
      FUN_1492fb1ea(local_178,*local_e0 + (longlong)iVar6 * 0x28,
                    *local_e0 + 0x10 + (longlong)iVar6 * 0x28,&local_88);
      if ((uStack_80._4_4_ != -1) && (local_88 != (void *)0x0)) {
        FUN_1400020a8();
      }
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
      FUN_1449c0562(&local_d8);
      iVar6 = local_c8._4_4_;
      uVar4 = local_c8;
    } while (local_e0 != plVar7 || (puStack_d0 != puVar10 || local_c8._4_4_ != iVar11));
  }
  FUN_140002266(&local_e0,&DAT_149e063bc,uVar2);
  plVar7 = local_178;
  local_88 = (void *)CONCAT71(local_88._1_7_,1);
  (**(code **)(*local_178 + 0x2f0))(local_178,&local_e0);
  FUN_1492f22b0(uVar3,local_100,plVar7);
  if (local_100[0] != 0) {
    FUN_1400020a8();
  }
  iVar11 = *(int *)(local_180 + 3);
  puVar10 = local_180;
  if (0 < iVar11) {
    lVar15 = 0x1c;
    lVar12 = 0;
    lVar13 = local_160;
    do {
      lVar9 = puVar10[2];
      iVar6 = *(int *)(lVar9 + lVar15);
      if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar13 + 0x140))) {
        lVar8 = *(longlong *)(lVar13 + 0x138);
        lVar14 = (longlong)iVar6 * 0x370;
        local_88 = (void *)0x0;
        uVar1 = *(uint *)(lVar8 + 8 + lVar14);
        pvVar17 = *(void **)(lVar8 + lVar14);
        uStack_80 = (undefined8 *)CONCAT44(uStack_80._4_4_,uVar1);
        if ((longlong)(int)uVar1 == 0) {
          uStack_80 = (undefined8 *)(ulonglong)uVar1;
        }
        else {
          FUN_1446dd670(&local_88,uVar1,0);
          memcpy(local_88,pvVar17,(longlong)(int)uVar1 * 2);
          lVar8 = *(longlong *)(lVar13 + 0x138);
        }
        lVar13 = (longlong)*(int *)(lVar9 + lVar15) * 0x370;
        local_110 = *(undefined8 *)(lVar8 + 0x360 + lVar13);
        iVar11 = *(int *)(lVar8 + 0x368 + lVar13);
        local_108 = iVar11 + -1;
        if (iVar11 == 0) {
          local_108 = 0;
        }
        FUN_1493482f0(local_b8,&local_110);
        FUN_14933ef4c(local_178,&local_88);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        iVar11 = *(int *)(local_180 + 3);
        puVar10 = local_180;
        lVar13 = local_160;
      }
      lVar12 = lVar12 + 1;
      lVar15 = lVar15 + 0xa0;
    } while (lVar12 < iVar11);
  }
  if (0 < *(int *)(puVar10 + 7)) {
    uVar16 = 0;
    do {
      local_88 = (void *)0x0;
      uVar1 = *(uint *)(puVar10[6] + 8 + uVar16 * 0x10);
      pvVar17 = *(void **)(puVar10[6] + uVar16 * 0x10);
      uStack_80 = (undefined8 *)CONCAT44(uStack_80._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_80 = (undefined8 *)(ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_88,uVar1,0);
        memcpy(local_88,pvVar17,(longlong)(int)uVar1 * 2);
      }
      FUN_14933e85e(local_178,&local_88);
      lVar13 = FUN_1492f2ba8(local_168,&local_88);
      if (lVar13 == 0) {
LAB_1493caadb:
        plVar7 = (longlong *)FUN_1493cd8cf(local_168);
        FUN_1444ba64e(plVar7,&local_88,&local_88,2);
        FUN_140002266(&local_f0,&DAT_149e063bc,uVar16 & 0xffffffff);
        FUN_140002266(local_130,&DAT_149e063bc,local_16c);
        FUN_144a882a8(local_120,local_130,&DAT_149e31048);
        FUN_1401c7f3e(local_b8,local_120,&local_f0);
        if (local_120[0] != 0) {
          FUN_1400020a8();
        }
        if (local_130[0] != 0) {
          FUN_1400020a8();
        }
        if (local_f0 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_f0 = (void *)CONCAT71(local_f0._1_7_,3);
        (**(code **)(*plVar7 + 0x2f0))(plVar7,local_b8,&local_f0);
        FUN_14933e6d0(plVar7,1);
        FUN_14933e924(plVar7,&local_88);
        FUN_1492f22b0(local_168,local_140);
        if (local_140[0] != 0) {
          FUN_1400020a8();
        }
        iVar11 = *(int *)(local_180 + 3);
        if (0 < iVar11) {
          lVar12 = 0x1c;
          lVar15 = 0;
          puVar10 = local_180;
          lVar13 = local_160;
          do {
            lVar9 = puVar10[2];
            iVar6 = *(int *)(lVar9 + lVar12);
            if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar13 + 0x140))) {
              lVar13 = *(longlong *)(lVar13 + 0x138);
              lVar8 = (longlong)iVar6 * 0x370;
              local_f0 = (void *)0x0;
              local_e8 = *(int *)(lVar13 + 8 + lVar8);
              lVar14 = (longlong)local_e8;
              if (lVar14 == 0) {
                local_e4 = 0;
              }
              else {
                local_158 = *(void **)(lVar13 + lVar8);
                FUN_1446dd670(&local_f0,local_e8,0);
                memcpy(local_f0,local_158,lVar14 * 2);
                lVar13 = *(longlong *)(local_160 + 0x138);
              }
              lVar9 = (longlong)*(int *)(lVar9 + lVar12) * 0x370;
              local_150 = *(undefined8 *)(lVar13 + 0x360 + lVar9);
              iVar11 = *(int *)(lVar13 + 0x368 + lVar9);
              local_148 = iVar11 + -1;
              if (iVar11 == 0) {
                local_148 = 0;
              }
              FUN_1493482f0(local_120,&local_150);
              FUN_14933ef4c(plVar7,&local_f0);
              if (local_120[0] != 0) {
                FUN_1400020a8();
              }
              if (local_f0 != (void *)0x0) {
                FUN_1400020a8();
              }
              iVar11 = *(int *)(local_180 + 3);
              puVar10 = local_180;
              lVar13 = local_160;
            }
            lVar15 = lVar15 + 1;
            lVar12 = lVar12 + 0xa0;
          } while (lVar15 < iVar11);
        }
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar12 = FUN_14599b312();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) goto LAB_1493caadb;
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 + 1;
      puVar10 = local_180;
    } while ((longlong)uVar16 < (longlong)*(int *)(local_180 + 7));
  }
  if (local_e0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1493ca3e3:
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_178;
}



// FUNCTION 1493cad70 FUN_1493cad70 body=285 status=ok
// SIG undefined FUN_1493cad70(void)

/* WARNING: Removing unreachable block (ram,0x0001493cadff) */
/* WARNING: Removing unreachable block (ram,0x0001493cae68) */

longlong * FUN_1493cad70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1408be2c4(param_2,2);
  FUN_140056680(&local_28,L"gltf;GL Transmission Format");
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  FUN_140056680(&local_28,L"glb;GL Transmission Format (Binary)");
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493cae8e FUN_1493cae8e body=175 status=ok
// SIG undefined FUN_1493cae8e(void)

undefined8 FUN_1493cae8e(undefined8 param_1)

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
  local_b8 = FUN_145a934b0();
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



// FUNCTION 1493caf3e FUN_1493caf3e body=175 status=ok
// SIG undefined FUN_1493caf3e(void)

undefined8 FUN_1493caf3e(undefined8 param_1)

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
  local_b8 = FUN_145b9fd38();
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



// FUNCTION 1493cafee FUN_1493cafee body=175 status=ok
// SIG undefined FUN_1493cafee(void)

undefined8 FUN_1493cafee(undefined8 param_1)

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
  local_b8 = FUN_1459f63d6();
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



// FUNCTION 1493cb09e FUN_1493cb09e body=175 status=ok
// SIG undefined FUN_1493cb09e(void)

undefined8 FUN_1493cb09e(undefined8 param_1)

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
  local_b8 = FUN_145a93688();
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



// FUNCTION 1493cb14e FUN_1493cb14e body=3637 status=ok
// SIG undefined FUN_1493cb14e(void)

void FUN_1493cb14e(longlong param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_2c8 [32];
  ulonglong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  ulonglong local_288;
  longlong local_280;
  int *local_278;
  undefined8 local_270;
  uint local_264;
  longlong local_260;
  longlong *local_258;
  int *local_250;
  longlong local_248;
  longlong local_240;
  ulonglong local_238;
  longlong local_230;
  longlong local_228 [2];
  longlong local_218 [2];
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  longlong local_1e0 [2];
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  int local_1a0;
  longlong local_198 [2];
  longlong local_188 [2];
  longlong *local_178;
  undefined8 local_170;
  int *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong *local_150;
  undefined8 local_148;
  int *local_140;
  uint local_138;
  uint uStack_134;
  uint local_130;
  undefined4 local_12c;
  undefined8 local_128;
  int *piStack_120;
  undefined8 local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 local_108;
  int local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  int local_c8 [4];
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_288 = 0;
  local_90 = 0;
  lVar14 = param_3[1];
  local_270 = param_2;
  local_238 = param_4;
  if ((longlong)(int)lVar14 == 0) {
    local_278 = local_c8;
    local_128 = 0x100000000;
    piStack_120 = local_278;
    local_118._0_4_ = 0xffffffff;
    local_118._4_4_ = 0;
    local_110 = 0;
  }
  else {
    lVar12 = *param_3;
    local_290 = (longlong *)(param_1 + 0x58);
    lVar9 = 0;
    do {
      iVar3 = *(int *)(lVar12 + lVar9);
      lVar13 = *(longlong *)(param_1 + 0xb8) + (longlong)iVar3 * 0x220;
      puVar11 = (undefined4 *)(lVar13 + 0x84);
      uVar6 = FUN_1493d11ee(local_d8,*puVar11,puVar11);
      iVar4 = *(int *)(lVar13 + 0x88);
      if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0xf0))) {
        lVar13 = (longlong)iVar4 * 0x98;
        if ((0 < *(int *)(*(longlong *)(param_1 + 0xe8) + 0x20 + lVar13)) &&
           ((iVar4 = **(int **)(*(longlong *)(param_1 + 0xe8) + lVar13 + 0x18), -1 < iVar4 &&
            (iVar4 < *(int *)(param_1 + 0xc0))))) {
          iVar4 = FUN_1493bfba2(local_290);
          local_128 = CONCAT44(local_128._4_4_,iVar4);
          if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0xc0))) {
            plVar8 = (longlong *)FUN_140147222(uVar6,iVar4,&local_128);
            iVar4 = (int)plVar8[1];
            *(uint *)(plVar8 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(plVar8,iVar4);
            }
            *(int *)(*plVar8 + (longlong)iVar4 * 4) = iVar3;
          }
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar14 * 4 != lVar9);
    local_288 = 0;
    local_278 = local_c8;
    local_128 = 0x100000000;
    piStack_120 = local_278;
    local_118._0_4_ = 0xffffffff;
    local_118._4_4_ = 0;
    local_110 = 0;
    if (local_b0 != 0) {
      FUN_1449c0562(&local_128);
      local_288 = (ulonglong)local_b0;
    }
  }
  local_138 = (uint)local_118;
  uStack_134 = local_118._4_4_;
  local_130 = local_110;
  local_12c = local_10c;
  local_148 = local_128;
  local_140 = piStack_120;
  local_150 = local_d8;
  if ((local_118._4_4_ != (uint)local_288) || (piStack_120 != local_278)) {
    local_240 = param_1 + 0x58;
    local_260 = param_1 + 0x270;
    local_230 = param_1;
    do {
      lVar14 = *local_150;
      lVar12 = (longlong)(int)uStack_134 * 0x60;
      piVar1 = (int *)(lVar14 + lVar12);
      piVar10 = piVar1 + 6;
      local_248 = (longlong)*piVar1;
      local_128 = 0x100000000;
      local_118 = 0xffffffff;
      local_110 = 0;
      piStack_120 = piVar10;
      if (piVar1[0xc] != 0) {
        FUN_1449c0562(&local_128);
      }
      plVar8 = (longlong *)(lVar14 + lVar12 + 8);
      local_160 = local_118;
      local_158 = local_110;
      local_154 = local_10c;
      local_170 = local_128;
      local_168 = piStack_120;
      local_118._4_4_ = *(uint *)(lVar14 + lVar12 + 0x30);
      local_128 = CONCAT44(1 << ((byte)local_118._4_4_ & 0x1f),(int)local_118._4_4_ >> 5);
      local_118._0_4_ = -1 << ((byte)local_118._4_4_ & 0x1f);
      local_110 = local_118._4_4_ & 0xffffffe0;
      local_178 = plVar8;
      piStack_120 = piVar10;
      if (*(uint *)(lVar14 + lVar12 + 0x30) != local_118._4_4_) {
        FUN_1449c0562(&local_128);
      }
      local_264 = local_118._4_4_;
      local_258 = plVar8;
      local_250 = piStack_120;
      if ((local_178 != plVar8 || local_168 != piStack_120) || local_160._4_4_ != local_118._4_4_) {
        do {
          local_280 = *local_178;
          lVar9 = (longlong)(int)local_160._4_4_;
          lVar14 = *(longlong *)(param_1 + 0xb8);
          lVar12 = (longlong)*(int *)(local_280 + lVar9 * 0x20) * 0x220;
          iVar3 = *(int *)(lVar14 + 0x9c + lVar12);
          lVar13 = local_248 * 0xa8;
          FUN_1449b8608(&local_128,*(longlong *)(param_1 + 0x98) + lVar13,&DAT_149e01f60);
          FUN_144a7dea0(local_188,&local_128,lVar14 + lVar12);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          lVar14 = *(longlong *)(param_1 + 0xb8);
          FUN_1449b8608(&local_128,*(longlong *)(param_1 + 0x98) + lVar13 + 0x90,&DAT_149e01f60);
          FUN_144a7dea0(local_198,&local_128,lVar14 + lVar12 + 0x210);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          local_298 = local_198;
          local_2a0 = local_188;
          local_2a8 = local_238;
          local_290 = (longlong *)
                      FUN_1493ca2d2(param_1,local_270,lVar13 + *(longlong *)(param_1 + 0x98),
                                    local_248);
          FUN_14933ed3e(local_290,1);
          if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x26c)) {
            uVar5 = (longlong)iVar3 * 0x220 + *(longlong *)(param_1 + 0xb8);
            uVar7 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            lVar14 = *(longlong *)(param_1 + 0x278);
            if (*(longlong *)(param_1 + 0x278) == 0) {
              lVar14 = local_260;
            }
            iVar3 = *(int *)(lVar14 + (ulonglong)
                                      (*(int *)(param_1 + 0x280) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4
                            );
            if (iVar3 != -1) {
              do {
                lVar14 = *(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 0x20) == uVar5
                   ) {
                  if (lVar14 != -8 && lVar14 != 0) {
                    FUN_14933ec82();
                  }
                  break;
                }
                iVar3 = *(int *)(lVar14 + 0x18);
              } while (iVar3 != -1);
            }
          }
          lVar14 = local_280 + lVar9 * 0x20;
          local_108 = 0;
          local_100 = 0;
          local_128 = 0;
          piStack_120 = (int *)0x0;
          local_fc = 0xffffffff00000080;
          local_f4 = 0;
          local_e8 = 0;
          local_e0 = 0;
          FUN_140056680(&local_1a8,&DAT_149dfb77a);
          iVar3 = *(int *)(lVar14 + 0x10);
          local_280 = lVar14;
          if ((longlong)iVar3 != 0) {
            lVar14 = *(longlong *)(lVar14 + 8);
            lVar12 = 0;
            do {
              lVar9 = (longlong)*(int *)(lVar14 + lVar12) * 0x220 + *(longlong *)(param_1 + 0xb8);
              if (local_1a0 - 2U < 0x7fffffff) {
                FUN_1400020e8(&local_1a8,&DAT_149e31048,1);
              }
              FUN_140002266(&local_1d0,&DAT_149e063bc,
                            *(int *)(lVar9 + 0x88) << 0x10 | *(uint *)(lVar9 + 0x84));
              iVar4 = (int)local_1c8 + -1;
              if ((int)local_1c8 == 0) {
                iVar4 = 0;
              }
              FUN_1400020e8(&local_1a8,local_1d0,iVar4);
              if (local_1d0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              FUN_1447cbafe(&local_128,&local_1d0,lVar9 + 0x88,0);
              lVar12 = lVar12 + 4;
            } while ((longlong)iVar3 * 4 != lVar12);
          }
          local_1d0 = (longlong *)CONCAT71(local_1d0._1_7_,2);
          (**(code **)(*local_290 + 0x2f0))(local_290,&local_1a8,&local_1d0);
          local_208 = (longlong *)&DAT_100000000;
          local_1f8 = 0xffffffff;
          local_1f0 = local_1f0 & 0xffffffff00000000;
          iVar3 = 0;
          local_200 = &local_118;
          if (local_100 != 0) {
            FUN_1449c0562(&local_208);
            iVar3 = local_100;
          }
          local_1b8 = local_1f8;
          lVar14 = local_1b8;
          local_1b0 = (uint)local_1f0;
          local_1ac = local_1f0._4_4_;
          local_1c8 = local_208;
          local_1c0 = local_200;
          local_1b8._4_4_ = (int)((ulonglong)local_1f8 >> 0x20);
          iVar4 = local_1b8._4_4_;
          local_1d0 = &local_128;
          if ((local_1b8._4_4_ != iVar3) || (local_1b8 = lVar14, local_200 != &local_118)) {
            do {
              local_1b8 = lVar14;
              lVar14 = *local_1d0;
              iVar2 = *(int *)(lVar14 + (longlong)iVar4 * 0xc);
              if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0xf0))) {
                FUN_1449b8608(local_1e0,*(longlong *)(param_1 + 0xe8) + (longlong)iVar2 * 0x98 + 8,
                              &DAT_149e01f60);
                lVar12 = *(longlong *)(param_1 + 0xe8);
                lVar13 = (longlong)*(int *)(lVar14 + (longlong)iVar4 * 0xc) * 0x98;
                lVar14 = lVar12 + lVar13;
                lVar9 = lVar14 + 0x40;
                local_80 = (undefined8 *)&DAT_100000000;
                local_70 = 0xffffffff;
                local_68 = 0;
                local_78 = lVar9;
                if (*(int *)(lVar14 + 0x58) != 0) {
                  FUN_1449c0562(&local_80);
                }
                lVar12 = lVar12 + lVar13;
                plVar8 = (longlong *)(lVar12 + 0x30);
                local_1f0 = local_70;
                local_1e8 = local_68;
                local_1e4 = local_64;
                local_200 = local_80;
                local_1f8 = local_78;
                uVar7 = *(uint *)(lVar12 + 0x58);
                local_80 = (undefined8 *)CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
                local_70 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
                local_68 = uVar7 & 0xffffffe0;
                local_208 = plVar8;
                local_78 = lVar9;
                if (*(uint *)(lVar12 + 0x58) != uVar7) {
                  FUN_1449c0562(&local_80);
                  uVar7 = local_70._4_4_;
                }
                lVar14 = local_78;
                if ((local_208 != plVar8 || local_1f8 != local_78) || local_1f0._4_4_ != uVar7) {
                  do {
                    lVar12 = *local_208;
                    lVar9 = (longlong)(int)local_1f0._4_4_;
                    local_80 = (undefined8 *)0x0;
                    local_78 = -0x100000000;
                    FUN_140474144(local_218,local_1e0,lVar12 + lVar9 * 0x28);
                    local_2a8 = local_2a8 & 0xffffffffffffff00;
                    FUN_1492fb1ea(local_290,local_218,lVar12 + 0x10 + lVar9 * 0x28,&local_80);
                    if (local_218[0] != 0) {
                      FUN_1400020a8();
                    }
                    if ((local_78._4_4_ != -1) && (local_80 != (undefined8 *)0x0)) {
                      FUN_1400020a8();
                    }
                    local_1f0 = CONCAT44(local_1f0._4_4_,(uint)local_1f0 & ~local_200._4_4_);
                    FUN_1449c0562(&local_200);
                  } while (local_208 != plVar8 || (local_1f8 != lVar14 || local_1f0._4_4_ != uVar7))
                  ;
                }
                param_1 = local_230;
                if (local_1e0[0] != 0) {
                  FUN_1400020a8();
                  param_1 = local_230;
                }
              }
              local_1b8 = CONCAT44(local_1b8._4_4_,(uint)local_1b8 & ~local_1c8._4_4_);
              FUN_1449c0562(&local_1c8);
              iVar4 = local_1b8._4_4_;
              lVar14 = local_1b8;
            } while (local_1d0 != &local_128 ||
                     (local_1c0 != &local_118 || local_1b8._4_4_ != iVar3));
          }
          iVar3 = FUN_1493bfba2(local_240,local_280 + 8);
          piVar1 = local_250;
          plVar8 = local_258;
          if (*(int *)(param_1 + 0x240) == *(int *)(param_1 + 0x26c)) {
            lVar14 = 0;
          }
          else {
            uVar5 = (longlong)iVar3 * 0x220 + *(longlong *)(param_1 + 0xb8);
            uVar7 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            lVar14 = *(longlong *)(param_1 + 0x278);
            if (*(longlong *)(param_1 + 0x278) == 0) {
              lVar14 = local_260;
            }
            iVar3 = *(int *)(lVar14 + (ulonglong)
                                      (*(int *)(param_1 + 0x280) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4
                            );
            if (iVar3 != -1) {
              do {
                lVar14 = *(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 0x20) == uVar5
                   ) goto LAB_1493cbb33;
                iVar3 = *(int *)(lVar14 + 0x18);
              } while (iVar3 != -1);
            }
            lVar14 = 0;
          }
LAB_1493cbb33:
          lVar12 = lVar14 + 8;
          if (lVar14 == 0) {
            lVar12 = 0;
          }
          lVar14 = FUN_1492f2ba8(local_270,lVar12);
          if (lVar14 != 0) {
            lVar12 = FUN_1459238a6();
            if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
              FUN_1492ef9be(local_290,&local_1d0);
              FUN_149341f54(lVar14,&local_1d0);
              if (local_1d0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          FUN_1492f22b0(local_270,local_228,local_290);
          if (local_228[0] != 0) {
            FUN_1400020a8();
          }
          if (local_1a8 != 0) {
            FUN_1400020a8();
          }
          local_e0 = 0;
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_128);
          if (local_198[0] != 0) {
            FUN_1400020a8();
          }
          if (local_188[0] != 0) {
            FUN_1400020a8();
          }
          local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~local_170._4_4_);
          FUN_1449c0562(&local_170);
        } while (local_178 != plVar8 || (local_168 != piVar1 || local_160._4_4_ != local_264));
      }
      local_138 = local_138 & ~local_148._4_4_;
      FUN_1449c0562(&local_148);
    } while (local_150 != local_d8 || (local_140 != local_278 || uStack_134 != (uint)local_288));
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1493cec8c(local_d8);
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493cbf84 FUN_1493cbf84 body=931 status=ok
// SIG undefined FUN_1493cbf84(void)

/* WARNING: Removing unreachable block (ram,0x0001493cc1cd) */
/* WARNING: Removing unreachable block (ram,0x0001493cc1dc) */
/* WARNING: Removing unreachable block (ram,0x0001493cc1e0) */

void FUN_1493cbf84(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  longlong local_148 [2];
  void *local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128 [2];
  longlong local_118 [2];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar4 = FUN_1493cd4b0(param_2);
  FUN_140b1283a(local_118,L"\\VariantSet\\",param_3);
  FUN_1444ba64e(uVar4,local_118,param_3,1);
  local_150 = param_2;
  FUN_1492f22b0(param_2,local_128,uVar4);
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149348f14(uVar4,param_3);
  local_138 = (void *)0x0;
  local_130 = *(int *)(param_3 + 1);
  lVar8 = (longlong)local_130;
  _Src = (void *)*param_3;
  if (lVar8 == 0) {
    local_12c = 0;
  }
  else {
    FUN_1446dd670(&local_138,local_130,0);
    memcpy(local_138,_Src,lVar8 * 2);
  }
  local_158 = param_3;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      FUN_140b1283a(&local_88,&DAT_149e06120,*(longlong *)(param_1 + 0x148) + lVar8);
      iVar1 = iStack_80 + -1;
      if (iStack_80 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_138,CONCAT44(uStack_84,local_88),iVar1);
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x150));
  }
  FUN_149349050(uVar4,&local_138);
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  local_88 = 0;
  uStack_84 = 0;
  iStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  local_b8 = (longlong *)0x0;
  local_c8 = FUN_1444f40d0;
  local_a8 = &PTR_LAB_14bcb3a10;
  uStack_a0 = param_1;
  local_98 = uVar4;
  uStack_90 = &local_c8;
  uStack_74 = 0;
  local_78 = 0;
  uStack_84 = 0;
  local_88 = 0;
  local_a8 = &PTR_LAB_14bcb3a10;
  local_b8 = (longlong *)0x0;
  local_c8 = FUN_1444f40d0;
  uStack_ec = uStack_ac;
  uStack_f0 = uStack_b0;
  local_f8 = 0;
  uStack_fc = uStack_bc;
  uStack_100 = uStack_c0;
  local_108 = 0;
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0xb0) << 7;
    lVar8 = *(longlong *)(param_1 + 0xa8) + 0x10;
    do {
      pcVar3 = local_c8;
      plVar6 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar6 = &local_a8;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar4,lVar8);
      lVar8 = lVar8 + 0x80;
      lVar7 = lVar7 + -0x80;
    } while (lVar7 != 0);
  }
  uVar4 = local_150;
  uVar5 = FUN_1493cd560(local_150);
  puVar2 = local_158;
  FUN_140b1283a(&local_88,L"\\SceneVariantSets\\",local_158);
  FUN_1444ba64e(uVar5,&local_88,puVar2,1);
  FUN_1492f22b0(uVar4,local_148,uVar5);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149348e62(uVar5,local_118);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_138 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493cc328 FUN_1493cc328 body=246 status=ok
// SIG undefined FUN_1493cc328(void)

longlong FUN_1493cc328(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14936b2e4();
    local_38 = (void *)0x0;
    local_30 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
    lVar2 = (longlong)local_30;
    _Src = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    if ((void **)(lVar1 + 0x28) == &local_38) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar1 + 0x28) = local_38;
      *(int *)(lVar1 + 0x30) = local_30;
      *(undefined4 *)(lVar1 + 0x34) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cc420 FUN_1493cc420 body=246 status=ok
// SIG undefined FUN_1493cc420(void)

longlong FUN_1493cc420(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1493d000e();
    local_38 = (void *)0x0;
    local_30 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
    lVar2 = (longlong)local_30;
    _Src = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    if ((void **)(lVar1 + 0x28) == &local_38) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar1 + 0x28) = local_38;
      *(int *)(lVar1 + 0x30) = local_30;
      *(undefined4 *)(lVar1 + 0x34) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cc518 FUN_1493cc518 body=952 status=ok
// SIG undefined FUN_1493cc518(void)

longlong FUN_1493cc518(longlong param_1,longlong param_2,undefined8 param_3,void **param_4)

{
  ulonglong *puVar1;
  void *_Src;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0 [2];
  void *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined **local_70;
  longlong *local_68;
  char local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1403de9f2(param_3,&local_88,&DAT_149e31048,1);
  if ((int)uStack_80 != 0) {
    if (*(int *)(local_88 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*local_88;
    }
    uVar3 = _wtoi(_Str);
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0xf0))) {
      lVar7 = *(longlong *)(param_1 + 0xe8);
      *(undefined1 *)(param_2 + 0x38) = 0;
      lVar7 = *(longlong *)(lVar7 + (ulonglong)uVar3 * 0x80);
      if (*(int *)(lVar7 + 0x30) < 2) {
        uVar9 = (ulonglong)*(uint *)(lVar7 + 0x38);
        _Src = *(void **)(lVar7 + 0x40);
        local_a0 = (void *)0x0;
        local_98 = uVar9;
        if (uVar9 == 0) {
          local_90 = 0;
        }
        else {
          FUN_145ad9f5c(&local_a0,uVar9,0);
          memcpy(local_a0,_Src,uVar9);
        }
        lVar6 = FUN_1493cc8d1(DAT_14c951640);
        lVar7 = *(longlong *)(param_1 + -0x18);
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
        }
        *(longlong *)(lVar6 + 0x28) = lVar7;
        FUN_144501fb8(lVar6,&local_70,&local_a0);
        FUN_1493cc988(param_2,&local_70);
        if (local_38 == '\x01') {
          local_70 = &PTR_FUN_14bcb3bb0;
          if (local_40 == '\x01') {
            local_40 = '\0';
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_68 + 3;
            lVar7 = *plVar5;
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (((uint)lVar7 & 0x3fffffff) == 1) {
              (**(code **)(*local_68 + 0x10))(local_68);
              local_68[1] = 0;
              local_68[2] = 0;
              LOCK();
              puVar1 = (ulonglong *)(local_68 + 3);
              uVar9 = *puVar1;
              *puVar1 = *puVar1 - 0x40000000;
              UNLOCK();
              if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
                (**(code **)*local_68)(local_68,1);
              }
            }
          }
        }
        uVar3 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        FUN_14482b126(lVar7,0x4000000);
LAB_1493cc7b2:
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (((int)uStack_80 == 2) && (*(char *)(param_2 + 0x38) == '\x01')) {
          if (*(int *)(local_88 + 3) == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          else {
            puVar8 = (undefined2 *)local_88[2];
          }
          bVar2 = FUN_14052c20c(puVar8);
          *(uint *)(param_2 + 0x18) = (uint)bVar2;
        }
      }
      else {
        FUN_1401aea18(&local_a0,lVar7 + 0x28);
        FUN_1493cc9d6(local_b0,&local_a0,*(undefined8 *)(param_1 + -0x18));
        if (local_b0[0] != 0) {
          uVar4 = FUN_14588b4b2();
          plVar5 = (longlong *)FUN_144718840(local_b0[0],uVar4);
          if (plVar5 != (longlong *)0x0) {
            if (&local_a0 != param_4) {
              FUN_14034a368(param_4,&local_a0);
            }
            (**(code **)(*plVar5 + 0x10))(plVar5,&local_70,param_3,param_4);
            FUN_1493cc988(param_2,&local_70);
            if (local_38 == '\x01') {
              local_70 = &PTR_FUN_14bcb3bb0;
              if (local_40 == '\x01') {
                local_40 = '\0';
              }
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar5 = local_68 + 3;
                lVar7 = *plVar5;
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                if (((uint)lVar7 & 0x3fffffff) == 1) {
                  (**(code **)(*local_68 + 0x10))(local_68);
                  local_68[1] = 0;
                  local_68[2] = 0;
                  LOCK();
                  puVar1 = (ulonglong *)(local_68 + 3);
                  uVar9 = *puVar1;
                  *puVar1 = *puVar1 - 0x40000000;
                  UNLOCK();
                  if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
                    (**(code **)*local_68)(local_68,1);
                  }
                }
              }
            }
            FUN_1493ccaec(local_b0);
            goto LAB_1493cc7b2;
          }
        }
        FUN_1493ccaec(local_b0);
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1493cc591;
    }
  }
  *(undefined1 *)(param_2 + 0x38) = 0;
LAB_1493cc591:
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cc8d1 FUN_1493cc8d1 body=182 status=ok
// SIG undefined FUN_1493cc8d1(void)

undefined8 FUN_1493cc8d1(undefined8 param_1)

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
  local_b8 = FUN_145bc85fc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 1493cc988 FUN_1493cc988 body=77 status=ok
// SIG undefined FUN_1493cc988(void)

undefined8 * FUN_1493cc988(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 7) == '\x01') {
      FUN_1493d0158(param_1);
    }
    else if (*(char *)(param_1 + 7) == '\x01') {
      *param_1 = &PTR_FUN_14bcb3bb0;
      if (*(char *)(param_1 + 6) == '\x01') {
        *(undefined1 *)(param_1 + 6) = 0;
      }
      FUN_14152e1c8(param_1 + 1);
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1493cc9d6 FUN_1493cc9d6 body=277 status=ok
// SIG undefined FUN_1493cc9d6(void)

longlong * FUN_1493cc9d6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146153af4();
  lVar2 = FUN_14935cc6c(param_2);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[1] = lVar2;
  }
  uVar1 = *(uint *)(lVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x4000000);
  uVar3 = FUN_146153af4();
  lVar2 = FUN_14935ed44(uVar3,param_1[1]);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *param_1 = lVar2;
  }
  uVar1 = *(uint *)(lVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x4000000);
  if (param_3 != 0) {
    lVar2 = *param_1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(lVar2 + 0x28) = param_3;
  }
  return param_1;
}



// FUNCTION 1493ccaec FUN_1493ccaec body=135 status=ok
// SIG undefined FUN_1493ccaec(void)

void FUN_1493ccaec(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1[1] != 0) {
    uVar1 = *(uint *)(param_1[1] + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x4000000);
  }
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x4000000);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1493ccb74 FUN_1493ccb74 body=324 status=ok
// SIG undefined FUN_1493ccb74(void)

undefined1 * FUN_1493ccb74(longlong param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = param_3 + 0x10;
  FUN_1493bcb26(local_c8,param_3,lVar1);
  param_2[0x98] = 0;
  cVar2 = *(char *)(param_3 + 0x20);
  if (cVar2 == '\x04') {
    local_78 = *(undefined8 *)(param_3 + 0x28);
    local_70 = *(undefined8 *)(param_3 + 0x30);
    local_68 = *(undefined8 *)(param_3 + 0x38);
    bVar3 = FUN_1444e3cbf(lVar1,param_1 + 0x58,local_c8);
    if ((local_c8 != param_2 & bVar3) != 1) goto LAB_1493ccc2b;
    if (param_2[0x98] == '\x01') goto LAB_1493ccc0f;
  }
  else {
    if (cVar2 == '\x02') {
      bVar3 = FUN_1493be52d(lVar1,param_1 + 0x58,local_c8);
    }
    else {
      if (cVar2 != '\x01') goto LAB_1493ccc2b;
      bVar3 = FUN_1444e3047(lVar1,param_1 + 0x58,local_c8);
    }
    if ((local_c8 != param_2 & bVar3) != 1) goto LAB_1493ccc2b;
    if (param_2[0x98] != '\0') {
LAB_1493ccc0f:
      FUN_1493bcc12(param_2);
    }
  }
  FUN_1493c7aee(param_2,local_c8);
  param_2[0x98] = 1;
LAB_1493ccc2b:
  FUN_1493bcc12(local_c8);
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493cccba FUN_1493cccba body=493 status=ok
// SIG undefined FUN_1493cccba(void)

longlong * FUN_1493cccba(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_158 [40];
  undefined4 local_130;
  undefined8 *local_128;
  longlong local_118;
  ulonglong uStack_110;
  code *local_100;
  longlong **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = 0;
  uStack_110 = 0;
  uVar1 = *(uint *)(param_3 + 1);
  FUN_1493ccea8(&local_118,(ulonglong)uVar1);
  if ((int)param_3[1] < 0xb) {
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if ((longlong)uVar4 < (longlong)(int)param_3[1]) {
          FUN_1493ccb74(param_1 + -0x48,&local_e0,uVar4 * 0x50 + *param_3);
          FUN_1493cceea(uVar4 * 0xa0 + local_118,&local_e0);
          if (local_48 == '\x01') {
            FUN_1493bcc12(&local_e0);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
    }
  }
  else {
    local_f8 = &local_e0;
    local_128 = &local_f0;
    local_f0 = 0;
    local_e8 = 0;
    local_100 = FUN_1444f4006;
    local_130 = 8;
    local_e0 = param_3;
    local_d8 = &local_118;
    local_d0 = param_1 + -0x48;
    FUN_1401f8d10(L"ParallelFor Task",(int)uVar1 / 10 + 1,1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = 0;
  if ((longlong)(int)uStack_110 != 0) {
    lVar5 = (longlong)(int)uStack_110 * 0xa0;
    lVar3 = local_118;
    do {
      if (*(char *)(lVar3 + 0x98) == '\x01') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1493c7d2e(param_2,iVar2);
        }
        FUN_1493c7aee((longlong)iVar2 * 0x98 + *param_2,lVar3);
      }
      lVar3 = lVar3 + 0xa0;
      lVar5 = lVar5 + -0xa0;
    } while (lVar5 != 0);
    uVar4 = uStack_110 & 0xffffffff;
  }
  FUN_1493d01ca(local_118,uVar4);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493ccea8 FUN_1493ccea8 body=66 status=ok
// SIG undefined FUN_1493ccea8(void)

void FUN_1493ccea8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1493d0654(param_1,iVar1);
  }
  FUN_1493d0207((longlong)iVar1 * 0xa0 + *param_1,param_2);
  return;
}



// FUNCTION 1493cceea FUN_1493cceea body=91 status=ok
// SIG undefined FUN_1493cceea(void)

longlong FUN_1493cceea(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x98) == '\x01') {
      if (*(char *)(param_1 + 0x98) != '\0') {
        FUN_1493bcc12(param_1);
      }
      FUN_1493c6094(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x98) == '\0') {
        return param_1;
      }
      FUN_1493bcc12(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x98) = uVar1;
  }
  return param_1;
}



// FUNCTION 1493ccf46 FUN_1493ccf46 body=406 status=ok
// SIG undefined FUN_1493ccf46(void)

longlong * FUN_1493ccf46(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_2 + 2) = 0;
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = *(int *)(param_1 + 0x100);
  iVar2 = FUN_1403de9f2(param_3,&local_48,&DAT_149e06120,1);
  if (iVar1 + 1 == iVar2) {
    if (0 < (longlong)*(int *)(param_1 + 0x100)) {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        iVar1 = *(int *)(local_48 + 8 + lVar7 * 0x10);
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + 8 + lVar6 * 0x10);
        if (iVar1 == iVar2) {
          if (1 < iVar1) {
            lVar8 = 0;
            while( true ) {
              uVar3 = *(ushort *)(*(longlong *)(lVar7 * 0x10 + local_48) + lVar8);
              uVar4 = (ulonglong)uVar3;
              uVar5 = *(ushort *)
                       (*(longlong *)(lVar6 * 0x10 + *(longlong *)(param_1 + 0xf8)) + lVar8);
              if (uVar3 != uVar5) break;
              if (uVar3 == 0) goto LAB_1493cd041;
LAB_1493cd007:
              lVar8 = lVar8 + 2;
            }
            if ((uVar5 | uVar3) < 0x80) {
              uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
              uVar9 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_1493cd007;
            }
            if (uVar3 != uVar5) goto LAB_1493cd0d7;
          }
        }
        else if (iVar2 + iVar1 != 1) {
LAB_1493cd0d7:
          goto LAB_1493cd09c;
        }
LAB_1493cd041:
        lVar6 = lVar7;
      } while (lVar7 != *(int *)(param_1 + 0x100));
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_1493cd0de(param_1 + -0x50,&local_58);
    if (&local_58 != param_2) {
      FUN_1493d06e8(param_2,&local_58);
    }
    FUN_1493ce96d(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1493cd09c:
  FUN_1447a1747(local_48,(undefined4)uStack_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493cd0de FUN_1493cd0de body=976 status=ok
// SIG undefined FUN_1493cd0de(void)

void FUN_1493cd0de(code **param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_208 [44];
  undefined1 local_1dc [4];
  code **local_1d8;
  code **local_1d0 [8];
  longlong local_190;
  undefined4 local_188;
  code **local_180;
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  int local_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1493cd610(param_2,*(undefined4 *)(param_1 + 0x2a));
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uVar6 = *(uint *)(param_1 + 0x2a);
  if ((longlong)(int)uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_1493d08d0(&local_f8,uVar6);
    iVar2 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_b0 == 0) || (local_b0 < iVar2)) {
      local_b0 = iVar2;
      FUN_1493d0a64();
    }
    if (0 < *(int *)(param_1 + 0x2a)) {
      lVar10 = 0;
      lVar7 = 0;
      lVar9 = 0;
      do {
        pcVar1 = param_1[0x29];
        pcVar8 = pcVar1 + lVar10;
        FUN_144a787a6(*param_2 + lVar7,pcVar8);
        local_138 = (code *)(*param_2 + lVar7);
        local_178 = (code *)&DAT_149dfb77a;
        if (*(int *)(pcVar1 + lVar10 + 8) != 0) {
          local_178 = *(code **)pcVar8;
        }
        local_1d8 = &local_178;
        local_1d0[0] = &local_138;
        FUN_1493d0c1e(&local_f8,local_1dc,&local_1d8);
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x20;
        lVar10 = lVar10 + 0x10;
      } while (lVar9 < *(int *)(param_1 + 0x2a));
    }
  }
  local_138 = (code *)0x0;
  local_128 = (longlong *)0x0;
  local_1d8 = param_1;
  FUN_1493ceac6(local_1d0,&local_f8);
  local_178 = (code *)0x0;
  local_180 = &local_138;
  plVar3 = (longlong *)FUN_14001cc68(0x68,8);
  *plVar3 = (longlong)&PTR_FUN_14bcb3a30;
  plVar3[1] = (longlong)local_1d8;
  local_168 = plVar3;
  FUN_1493ceac6(plVar3 + 2,local_1d0);
  plVar5 = local_128;
  pcVar8 = local_138;
  plVar3[0xc] = (longlong)local_180;
  if (plVar3 != (longlong *)&DAT_fffffffffffffff8) {
    local_178 = FUN_1444f43b6;
  }
  local_138 = local_178;
  local_128 = local_168;
  local_178 = pcVar8;
  uStack_170 = uStack_130;
  uStack_16c = uStack_12c;
  local_168 = plVar5;
  uStack_160 = uStack_120;
  uStack_15c = uStack_11c;
  local_158 = local_118;
  uStack_154 = uStack_114;
  uStack_150 = uStack_110;
  uStack_14c = uStack_10c;
  local_148 = local_108;
  uStack_144 = uStack_104;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if (pcVar8 != (code *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_158;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_188 = 0;
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  FUN_1493cebd4(local_1d0);
  if ((longlong)*(int *)(param_1 + 0x16) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x16) << 7;
    pcVar8 = param_1[0x15] + 0x10;
    do {
      pcVar1 = local_138;
      plVar5 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar5 = (longlong *)&local_118;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,pcVar8);
      pcVar8 = pcVar8 + 0x80;
      lVar9 = lVar9 + -0x80;
    } while (lVar9 != 0);
  }
  if (local_138 != (code *)0x0) {
    plVar5 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_118;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1493cebd4(&local_f8);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493cd4b0 FUN_1493cd4b0 body=175 status=ok
// SIG undefined FUN_1493cd4b0(void)

undefined8 FUN_1493cd4b0(undefined8 param_1)

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
  local_b8 = FUN_145a93860();
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



// FUNCTION 1493cd560 FUN_1493cd560 body=175 status=ok
// SIG undefined FUN_1493cd560(void)

undefined8 FUN_1493cd560(undefined8 param_1)

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
  local_b8 = FUN_145a9394c();
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



// FUNCTION 1493cd610 FUN_1493cd610 body=121 status=ok
// SIG undefined FUN_1493cd610(void)

void FUN_1493cd610(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1493d0754(param_1,iVar1);
    }
    FUN_1493d0740((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1493d07da(param_1,param_2,iVar1 - param_2);
    FUN_1493d0834(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1493cd68a FUN_1493cd68a body=580 status=ok
// SIG undefined FUN_1493cd68a(void)

longlong FUN_1493cd68a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined1 local_3b0 [4];
  undefined1 local_3ac [4];
  wchar_t *local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [704];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  FUN_1458c1dca(local_398);
  local_68 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_50 = 0;
  uStack_48 = 0;
  cVar3 = *(char *)(param_3 + 0x10);
  if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
    cVar3 = FUN_1493c0eb6(param_1 + 0x20,param_3,param_4,local_398);
LAB_1493cd728:
    if (cVar3 != '\0') {
      cVar3 = FUN_142ab11c0(local_398,param_3);
      if (cVar3 == '\0') {
        lVar5 = FUN_1493bccfe(param_1 + -0x38);
        lVar2 = *(longlong *)(param_1 + -8);
        if (lVar2 == 0) {
          local_3a8 = (wchar_t *)0x0;
          uStack_3a0 = 0;
        }
        else {
          local_3a8 = (wchar_t *)0x0;
          uVar1 = *(uint *)(lVar2 + 0x30);
          _Src = *(void **)(lVar2 + 0x28);
          uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar1);
          if ((longlong)(int)uVar1 == 0) {
            uStack_3a0 = (ulonglong)uVar1;
          }
          else {
            FUN_1446dd670(&local_3a8,uVar1,0);
            memcpy(local_3a8,_Src,(longlong)(int)uVar1 * 2);
          }
        }
        if ((wchar_t **)(lVar5 + 0x28) == &local_3a8) {
          if (local_3a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar5 + 0x28) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar5 + 0x28) = local_3a8;
          *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_3a0;
          *(undefined4 *)(lVar5 + 0x34) = uStack_3a0._4_4_;
        }
        local_3a8 = L"GetMeshPayloadData_ValidateMeshDescriptionFail";
        uStack_3a0._0_4_ = 0x2e;
        FUN_1446e940c(local_3ac,&local_3a8);
        local_3a8 = L"InterchangeGLTFTranslator";
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,0x19);
        FUN_1446e940c(local_3b0,&local_3a8);
        FUN_140208bae(&local_3a8,local_3b0,local_3ac,
                      L"Invalid mesh data (NAN) was found and changed to zero. This may affect the mesh rendering."
                     );
        FUN_140008f88(lVar5 + 0x70,&local_3a8);
        if (local_3a8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_3a8 + 0x10))();
        }
      }
      FUN_1493c7000(param_2,local_398);
      uVar4 = 1;
      goto LAB_1493cd750;
    }
  }
  else if (cVar3 == '\x02') {
    local_3b8 = &local_d8;
    cVar3 = FUN_1493bfe74(param_1 + 0x20,param_3,param_4,local_398);
    goto LAB_1493cd728;
  }
  uVar4 = 0;
LAB_1493cd750:
  *(undefined1 *)(param_2 + 0x360) = uVar4;
  FUN_1493c6fa6(local_398);
  if ((local_30 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cd8cf FUN_1493cd8cf body=175 status=ok
// SIG undefined FUN_1493cd8cf(void)

undefined8 FUN_1493cd8cf(undefined8 param_1)

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
  local_b8 = FUN_14599b312();
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



// FUNCTION 1493cd980 FUN_1493cd980 body=8 status=ok
// SIG undefined FUN_1493cd980(void)

bool FUN_1493cd980(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1493cd994 FUN_1493cd994 body=28 status=ok
// SIG undefined FUN_1493cd994(void)

undefined8 * FUN_1493cd994(undefined8 param_1,undefined8 *param_2)

{
  FUN_144a61b4f();
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1493cd9b4 FUN_1493cd9b4 body=409 status=ok
// SIG undefined FUN_1493cd9b4(void)

longlong FUN_1493cd9b4(longlong param_1,longlong param_2,undefined8 *param_3,void **param_4)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined **local_80 [3];
  undefined **local_68 [3];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar4 * 2);
  }
  FUN_146153af4();
  lVar4 = FUN_14935cc6c(&local_50);
  FUN_1456bc4c4(local_68,lVar4);
  if (lVar4 == 0) {
    *(undefined1 *)(param_2 + 0x38) = 0;
    goto LAB_1493cda52;
  }
  uVar2 = FUN_146153af4();
  lVar4 = FUN_14935ed44(uVar2,lVar4);
  FUN_1456bc4c4(local_80,lVar4);
  if (lVar4 == 0) {
LAB_1493cdb27:
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    uVar2 = FUN_14588b4b2();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_1493cdb27;
    lVar1 = *(longlong *)(param_1 + -0x10);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(lVar4 + 0x28) = lVar1;
    if (&local_50 != param_4) {
      FUN_14034a368(param_4,&local_50);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3,param_4);
    if (*(char *)(param_2 + 0x38) == '\x01') {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
  }
  local_80[0] = &PTR_LAB_149e668b0;
  FUN_14019e1de();
LAB_1493cda52:
  local_68[0] = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cdbce FUN_1493cdbce body=316 status=ok
// SIG undefined FUN_1493cdbce(void)

void FUN_1493cdbce(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [36];
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  float local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_38,puVar3,1);
  local_50 = (undefined4)local_38;
  uStack_4c = 0;
  local_48 = (undefined4)((ulonglong)local_38 >> 0x20);
  local_44 = 0xffffffff;
  local_40 = 2;
  cVar1 = FUN_140fc5b24(param_1,&local_50,&local_3c,0);
  if (cVar1 != '\0') {
    local_54 = 0.0;
    if (param_4 == '\0') {
      FUN_14933bd24(&local_50,param_2);
    }
    else {
      FUN_149346170();
    }
    FUN_1492eeb9c(param_3,&local_50,&local_54);
    if (1e-08 < ABS(local_54 - local_3c)) {
      lVar2 = FUN_144a772c4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        FUN_14472da24(param_1,local_38,local_54);
      }
    }
    if (CONCAT44(uStack_4c,local_50) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cdd0b FUN_1493cdd0b body=401 status=ok
// SIG undefined FUN_1493cdd0b(void)

void FUN_1493cdd0b(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_70 [2];
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_38,puVar3,1);
  local_5c = (float)local_38;
  fStack_58 = 0.0;
  fStack_54 = (float)((ulonglong)local_38 >> 0x20);
  fStack_50 = -NAN;
  local_4c = 2;
  cVar1 = FUN_140fc5922(param_1,&local_5c,&local_48,0);
  if (cVar1 != '\0') {
    if (param_4 == '\0') {
      FUN_14933bd24(local_70,param_2);
    }
    else {
      FUN_149346170();
    }
    cVar1 = FUN_1492ef232(param_3,local_70,&local_5c);
    if (cVar1 != '\0') {
      if ((((0.0001 <= ABS(local_5c - local_48)) || (0.0001 <= ABS(fStack_58 - local_44))) ||
          (0.0001 <= ABS(fStack_54 - local_40))) || (0.0001 <= ABS(fStack_50 - local_3c))) {
        lVar2 = FUN_144a772c4();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          local_88 = local_5c;
          fStack_84 = fStack_58;
          fStack_80 = fStack_54;
          fStack_7c = fStack_50;
          FUN_144a9d3f0(param_1,local_38);
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cde9d FUN_1493cde9d body=475 status=ok
// SIG undefined FUN_1493cde9d(void)

void FUN_1493cde9d(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58 [3];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_38,puVar4,1);
  local_88 = local_38 & 0xffffffff;
  uStack_80 = CONCAT44(0xffffffff,(int)(local_38 >> 0x20));
  local_78 = CONCAT71(local_78._1_7_,2);
  cVar1 = (**(code **)(*param_1 + 0x3c8))(param_1,&local_88,&local_40,0);
  if (cVar1 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    if (param_5 == '\0') {
      FUN_14933bd24(local_68,param_2);
    }
    else {
      FUN_149346170();
    }
    cVar1 = FUN_1492ef716(param_3,local_68,local_58);
    if (cVar1 != '\0') {
      lVar2 = FUN_1492f2ba8(param_4,local_58);
      if (lVar2 != 0) {
        lVar3 = FUN_1458f3582();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          FUN_1492f4b30(lVar2,&local_88);
          lVar2 = FUN_140081d40(&local_88,0);
          if (lVar2 != 0) {
            lVar3 = FUN_144a7937e();
            if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) && (lVar2 != local_40)) {
              lVar3 = FUN_144a772c4();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                  lVar3 + 0x30)) {
                FUN_14016d8b0(param_1,local_38,lVar2);
              }
            }
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce079 FUN_1493ce079 body=119 status=ok
// SIG undefined FUN_1493ce079(void)

void FUN_1493ce079(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1492eeb9c(param_1,param_2,&local_1c);
  if (cVar1 != '\0') {
    lVar2 = FUN_144a772c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_14472da24(param_3,*param_4,local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce0f1 FUN_1493ce0f1 body=127 status=ok
// SIG undefined FUN_1493ce0f1(void)

void FUN_1493ce0f1(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1492ef232(param_1,param_2,&local_28);
  if (cVar1 != '\0') {
    lVar2 = FUN_144a772c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_38 = local_28;
      uStack_34 = uStack_24;
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      FUN_144a9d3f0(param_3,*param_4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce171 FUN_1493ce171 body=303 status=ok
// SIG undefined FUN_1493ce171(void)

void FUN_1493ce171(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  cVar1 = FUN_1492ef716();
  if (cVar1 != '\0') {
    lVar2 = FUN_1492f2ba8(param_3,local_38);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f3582();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        FUN_1492f4b30(lVar2,&local_58);
        lVar2 = FUN_140081d40(&local_58,0);
        if (lVar2 != 0) {
          lVar3 = FUN_144a7937e();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            lVar3 = FUN_144a772c4();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              FUN_14016d8b0(param_4,*param_5,lVar2);
            }
          }
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce2a1 FUN_1493ce2a1 body=782 status=ok
// SIG undefined FUN_1493ce2a1(void)

longlong FUN_1493ce2a1(byte param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_2 + 0xfe) >> 2 & 1) == param_1) {
    lVar1 = 0;
    goto LAB_1493ce2df;
  }
  pwVar4 = L"_VT";
  if (param_1 == 0) {
    pwVar4 = L"_nonVT";
  }
  FUN_140056680(local_70,pwVar4);
  lVar1 = FUN_144b00ba4(param_2);
  local_90 = *(undefined2 **)(lVar1 + 0x18);
  FUN_1400021e4(&local_90,local_80);
  FUN_140474144(&local_90,local_80,local_70);
  FUN_144a06ecc(&local_a0,&local_90);
  lVar1 = FUN_1444f2390(&local_90);
  if (lVar1 != 0) {
    puVar3 = local_a0;
    if (local_98 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    lVar1 = FUN_140277b32(0,lVar1,puVar3,0);
    if (lVar1 != 0) {
      iVar5 = 1;
      do {
        lVar2 = FUN_144a7937e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_1493ce522;
        local_b8 = (undefined2 *)0x0;
        uStack_b0 = 0;
        FUN_144a83b10(&local_b8,iVar5);
        iVar6 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(&local_90,local_b8,iVar6);
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar1 = FUN_1444f2390(&local_90);
        if (lVar1 == 0) break;
        puVar3 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar3 = local_a0;
        }
        iVar5 = iVar5 + 1;
        lVar1 = FUN_140277b32(0,lVar1,puVar3,0);
      } while (lVar1 != 0);
    }
  }
  puVar3 = local_90;
  if (local_88 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  lVar1 = FUN_14099f58f(puVar3);
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 1;
  FUN_144a06ecc(&local_b8,&local_90);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = local_b8;
  local_98 = (int)uStack_b0;
  local_94 = uStack_b0._4_4_;
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_b0 != 0) {
    puVar3 = local_b8;
  }
  FUN_1446f470e(&local_c0,puVar3,1);
  local_c8 = 0xfff00007;
  local_d0 = 0;
  local_d8 = 0;
  lVar1 = FUN_14092e7b3(param_2,lVar1,local_c0,0xffffffff);
  if (lVar1 == 0) {
LAB_1493ce542:
    lVar1 = 0;
  }
  else {
LAB_1493ce522:
    lVar2 = FUN_144a7937e();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1493ce542;
    if ((*(byte *)(lVar1 + 0xfe) >> 2 & 1) != param_1) {
      *(byte *)(lVar1 + 0xfe) = *(byte *)(lVar1 + 0xfe) & 0xfb | (param_1 & 1) << 2;
    }
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493ce2df:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1493ce5b0 FUN_1493ce5b0 body=190 status=ok
// SIG undefined FUN_1493ce5b0(void)

undefined8 FUN_1493ce5b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  wchar_t *local_130;
  ulonglong *local_128;
  char local_120;
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = local_118;
  local_120 = '\0';
  local_128 = &local_18;
  builtin_wcsncpy(local_118,L"LeafInput:",10);
  local_130 = local_118 + 10;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_138,*param_2,iVar1);
  *local_130 = L'\0';
  FUN_140056680(param_1,local_138);
  if (local_120 == '\x01') {
    FUN_1400020a8(local_138);
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce670 FUN_1493ce670 body=142 status=ok
// SIG undefined FUN_1493ce670(void)

undefined4 FUN_1493ce670(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140056680(local_48,&DAT_149e31048);
  uVar1 = FUN_1407cdba6(param_1,local_48,local_38,param_2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce700 FUN_1493ce700 body=334 status=ok
// SIG undefined FUN_1493ce700(void)

void FUN_1493ce700(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1492f0b1e();
  FUN_149307011(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_14930d8a4(param_2,0);
  }
  uVar5 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    lVar6 = (longlong)(int)uStack_50 << 4;
    puVar7 = local_58;
    do {
      cVar4 = FUN_144a791f8(puVar7,L"LeafInput",9,1);
      if (cVar4 != '\0') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14930e78e(param_2,iVar2);
        }
        lVar3 = *param_2;
        lVar8 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar3 + lVar8);
        *(undefined8 *)(lVar3 + lVar8) = 0;
        iVar2 = *(int *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        *(int *)(lVar3 + 8 + lVar8) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
    uVar5 = uStack_50 & 0xffffffff;
  }
  FUN_149307011(local_58,uVar5);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ce85e FUN_1493ce85e body=45 status=ok
// SIG undefined FUN_1493ce85e(void)

longlong FUN_1493ce85e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145c744b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ce892 FUN_1493ce892 body=45 status=ok
// SIG undefined FUN_1493ce892(void)

longlong FUN_1493ce892(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145c744b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ce8c6 FUN_1493ce8c6 body=45 status=ok
// SIG undefined FUN_1493ce8c6(void)

longlong FUN_1493ce8c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_145c744b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ce8fe FUN_1493ce8fe body=45 status=ok
// SIG undefined FUN_1493ce8fe(void)

longlong FUN_1493ce8fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145c744b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ce932 FUN_1493ce932 body=45 status=ok
// SIG undefined FUN_1493ce932(void)

longlong FUN_1493ce932(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ce96d FUN_1493ce96d body=38 status=ok
// SIG undefined FUN_1493ce96d(void)

void FUN_1493ce96d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493ce994(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1493ce994 FUN_1493ce994 body=59 status=ok
// SIG undefined FUN_1493ce994(void)

void FUN_1493ce994(longlong *param_1)

{
  FUN_1493ce9cf(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493ce9cf FUN_1493ce9cf body=38 status=ok
// SIG undefined FUN_1493ce9cf(void)

void FUN_1493ce9cf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493ce9f6(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1493ce9f6 FUN_1493ce9f6 body=59 status=ok
// SIG undefined FUN_1493ce9f6(void)

void FUN_1493ce9f6(longlong *param_1)

{
  FUN_1493cea31(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493cea31 FUN_1493cea31 body=38 status=ok
// SIG undefined FUN_1493cea31(void)

void FUN_1493cea31(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493cea58(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1493cea58 FUN_1493cea58 body=110 status=ok
// SIG undefined FUN_1493cea58(void)

void FUN_1493cea58(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x34) != -1) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = 0;
    param_1[6] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = 0;
    param_1[4] = -0x100000000;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493ceac6 FUN_1493ceac6 body=123 status=ok
// SIG undefined FUN_1493ceac6(void)

undefined8 * FUN_1493ceac6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1493ceb42();
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



// FUNCTION 1493ceb42 FUN_1493ceb42 body=146 status=ok
// SIG undefined FUN_1493ceb42(void)

longlong * FUN_1493ceb42(longlong *param_1,longlong *param_2)

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



// FUNCTION 1493cebd4 FUN_1493cebd4 body=54 status=ok
// SIG undefined FUN_1493cebd4(void)

void FUN_1493cebd4(longlong *param_1)

{
  FUN_1493cec0a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493cec0a FUN_1493cec0a body=128 status=ok
// SIG undefined FUN_1493cec0a(void)

void FUN_1493cec0a(longlong param_1,int param_2)

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



// FUNCTION 1493cec8c FUN_1493cec8c body=52 status=ok
// SIG undefined FUN_1493cec8c(void)

void FUN_1493cec8c(longlong *param_1)

{
  FUN_1493cecc0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493cecc0 FUN_1493cecc0 body=349 status=ok
// SIG undefined FUN_1493cecc0(void)

void FUN_1493cecc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14083ed90(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 1493cee1e FUN_1493cee1e body=62 status=ok
// SIG undefined FUN_1493cee1e(void)

undefined8 * FUN_1493cee1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcb3bb0;
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  FUN_14152e1c8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493cee5c FUN_1493cee5c body=316 status=ok
// SIG undefined FUN_1493cee5c(void)

undefined8 * FUN_1493cee5c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  iVar5 = 0;
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar1 + 8 + lVar4);
      lVar6 = (longlong)local_50;
      _Src = *(void **)(lVar1 + lVar4);
      if (lVar6 == 0) {
        local_4c = 0;
        iVar5 = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar6 * 2);
        iVar5 = local_50;
      }
      iVar3 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,local_58,iVar3);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_1,&DAT_149e06196);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
    iVar5 = *(int *)(param_1 + 1);
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  FUN_14496493a(param_1,iVar3 + -1,1,0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cef99 FUN_1493cef99 body=660 status=ok
// SIG undefined FUN_1493cef99(void)

undefined8 * FUN_1493cef99(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  local_98 = param_2 + 2;
  local_68 = &DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  iVar5 = 0;
  local_60 = local_98;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar5) || (local_60 != local_98)) {
    do {
      lVar7 = *local_90;
      lVar4 = (longlong)iStack_74;
      local_68 = (undefined1 *)0x0;
      uVar1 = *(uint *)(lVar7 + 8 + lVar4 * 0x28);
      pvVar2 = *(void **)(lVar7 + lVar4 * 0x28);
      local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_60 = (longlong *)(ulonglong)uVar1;
        iVar6 = 0;
      }
      else {
        FUN_1446dd670(&local_68,uVar1,0);
        memcpy(local_68,pvVar2,(longlong)(int)uVar1 * 2);
        iVar6 = (int)local_60;
      }
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,local_68,iVar3);
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar4 * 0x28 + lVar7;
      FUN_1400020e8(param_1,&DAT_149e31048);
      local_68 = (undefined1 *)0x0;
      uVar1 = *(uint *)(lVar7 + 0x18);
      pvVar2 = *(void **)(lVar7 + 0x10);
      local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_60 = (longlong *)(ulonglong)uVar1;
        iVar6 = 0;
      }
      else {
        FUN_1446dd670(&local_68,uVar1,0);
        memcpy(local_68,pvVar2,(longlong)(int)uVar1 * 2);
        iVar6 = (int)local_60;
      }
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,local_68,iVar3);
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_1,&DAT_149e06196,1);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != local_98 || iStack_74 != iVar5));
    iVar6 = *(int *)(param_1 + 1);
  }
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  FUN_14496493a(param_1,iVar5 + -1,1,0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1493cf22e FUN_1493cf22e body=320 status=ok
// SIG undefined FUN_1493cf22e(void)

undefined4 * FUN_1493cf22e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493cf370(param_1,local_48);
  FUN_1493cf4f8(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1493cf456(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1493cf5d6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cf370 FUN_1493cf370 body=229 status=ok
// SIG undefined FUN_1493cf370(void)

int * FUN_1493cf370(longlong *param_1,int *param_2)

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



// FUNCTION 1493cf456 FUN_1493cf456 body=161 status=ok
// SIG undefined FUN_1493cf456(void)

undefined8 FUN_1493cf456(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1493cf564(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493cf4f8 FUN_1493cf4f8 body=107 status=ok
// SIG undefined FUN_1493cf4f8(void)

undefined8 * FUN_1493cf4f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1493cf564 FUN_1493cf564 body=114 status=ok
// SIG undefined FUN_1493cf564(void)

void FUN_1493cf564(longlong *param_1,int param_2)

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



// FUNCTION 1493cf5d6 FUN_1493cf5d6 body=477 status=ok
// SIG undefined FUN_1493cf5d6(void)

void FUN_1493cf5d6(longlong *param_1)

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



// FUNCTION 1493cf7b4 FUN_1493cf7b4 body=106 status=ok
// SIG undefined FUN_1493cf7b4(void)

undefined8 FUN_1493cf7b4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1493cf81e FUN_1493cf81e body=319 status=ok
// SIG undefined FUN_1493cf81e(void)

undefined4 * FUN_1493cf81e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1493cf95e(param_1,local_50);
  puVar6 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  puVar7 = local_48 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 2;
  }
  local_48[0x1c] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = 0;
  cVar1 = FUN_1493cfa44(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar2 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[0x1d] = uVar3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_48[0x1c] =
           *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1493cfb72(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493cf95e FUN_1493cf95e body=229 status=ok
// SIG undefined FUN_1493cf95e(void)

int * FUN_1493cf95e(longlong *param_1,int *param_2)

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
      FUN_14045f6dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1493cfa44 FUN_1493cfa44 body=164 status=ok
// SIG undefined FUN_1493cfa44(void)

void FUN_1493cfa44(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x80);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x80) == *param_3) {
          memmove(_Dst,param_3,0x70);
          FUN_1493cfae8(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1493cfab4;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1493cfab4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1493cfae8 FUN_1493cfae8 body=138 status=ok
// SIG undefined FUN_1493cfae8(void)

void FUN_1493cfae8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
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
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1493cfb72 FUN_1493cfb72 body=422 status=ok
// SIG undefined FUN_1493cfb72(void)

void FUN_1493cfb72(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x80;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x74 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar7) =
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



// FUNCTION 1493cfd1a FUN_1493cfd1a body=105 status=ok
// SIG undefined FUN_1493cfd1a(void)

undefined8 FUN_1493cfd1a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x90,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x90)) {
    uVar5 = uVar2 / 0x90 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x90,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1493cfd83 FUN_1493cfd83 body=55 status=ok
// SIG undefined FUN_1493cfd83(void)

void FUN_1493cfd83(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1493cfdba(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1493cfdba FUN_1493cfdba body=384 status=ok
// SIG undefined FUN_1493cfdba(void)

undefined8 * FUN_1493cfdba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1493cff3a(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1493cffa4(param_1 + 4,iVar1);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_14058acb2(param_1 + 6,param_2 + 6);
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1493cff3a FUN_1493cff3a body=106 status=ok
// SIG undefined FUN_1493cff3a(void)

undefined8 FUN_1493cff3a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1493cffa4 FUN_1493cffa4 body=106 status=ok
// SIG undefined FUN_1493cffa4(void)

undefined8 FUN_1493cffa4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1493d000e FUN_1493d000e body=154 status=ok
// SIG undefined FUN_1493d000e(void)

longlong FUN_1493d000e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar2 = FUN_1493d00a8(DAT_14c951640);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_149301c8e((longlong *)(param_1 + 0x50),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return lVar2;
}



// FUNCTION 1493d00a8 FUN_1493d00a8 body=175 status=ok
// SIG undefined FUN_1493d00a8(void)

undefined8 FUN_1493d00a8(undefined8 param_1)

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
  local_b8 = FUN_145a92e3c();
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



// FUNCTION 1493d0158 FUN_1493d0158 body=114 status=ok
// SIG undefined FUN_1493d0158(void)

undefined8 * FUN_1493d0158(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14bcb3bb0;
    if (*(char *)(param_1 + 6) == '\x01') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    FUN_14152e1c8(param_1 + 1);
  }
  *param_1 = &PTR_FUN_14bcb3bb0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x19);
  uVar4 = *(undefined8 *)(param_2 + 0x21);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x19) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x21) = uVar4;
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 6) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1493d01ca FUN_1493d01ca body=61 status=ok
// SIG undefined FUN_1493d01ca(void)

void FUN_1493d01ca(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(char *)(param_1 + 0x98) == '\x01') {
      FUN_1493bcc12(param_1);
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 1493d0207 FUN_1493d0207 body=1100 status=ok
// SIG undefined FUN_1493d0207(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493d0207(longlong param_1,uint param_2)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar16 = (ulonglong)param_2 - 1;
    auVar18._8_4_ = (int)lVar16;
    auVar18._0_8_ = lVar16;
    auVar18._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    puVar15 = (undefined1 *)(param_1 + 0x98);
    uVar17 = 0;
    auVar19 = pmovsxbq(in_XMM1,0xf0e);
    auVar20 = pmovsxbq(in_XMM2,0xd0c);
    auVar21 = pmovsxbq(in_XMM3,0xb0a);
    auVar22 = pmovsxbq(in_XMM4,0x908);
    auVar23 = pmovsxbq(in_XMM5,0x706);
    auVar24 = pmovsxbq(unaff_XMM6,0x504);
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar27._8_4_ = (int)uVar17;
      auVar27._0_8_ = uVar17;
      auVar27._12_4_ = (int)(uVar17 >> 0x20);
      auVar29 = auVar18 ^ auVar14;
      auVar31 = (auVar27 | auVar26) ^ auVar14;
      lVar16 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      lVar30 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar39 = pshuflw(unaff_XMM14,auVar32,0xe8);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
      if ((auVar31._0_4_ & 1) != 0) {
        *puVar15 = 0;
      }
      auVar32 = packssdw(auVar32,auVar32);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[1] & 1) != 0) {
        puVar15[0xa0] = 0;
      }
      auVar32 = (auVar27 | auVar25) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar33);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar1,auVar31 ^ auVar1);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[2] & 1) != 0) {
        puVar15[0x140] = 0;
      }
      auVar32 = pshufhw(auVar33,auVar33,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar2,auVar32 ^ auVar2);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[3] & 1) != 0) {
        puVar15[0x1e0] = 0;
      }
      auVar32 = (auVar27 | auVar24) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar34,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar3,auVar31 ^ auVar3);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[4] & 1) != 0) {
        puVar15[0x280] = 0;
      }
      auVar32 = packssdw(auVar34,auVar34);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar4,auVar32 ^ auVar4);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[5] & 1) != 0) {
        puVar15[800] = 0;
      }
      auVar32 = (auVar27 | auVar23) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar35);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar5,auVar31 ^ auVar5);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[6] & 1) != 0) {
        puVar15[0x3c0] = 0;
      }
      auVar32 = pshufhw(auVar35,auVar35,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[7] & 1) != 0) {
        puVar15[0x460] = 0;
      }
      auVar32 = (auVar27 | auVar22) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar36,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar7,auVar31 ^ auVar7);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[8] & 1) != 0) {
        puVar15[0x500] = 0;
      }
      auVar32 = packssdw(auVar36,auVar36);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar8,auVar32 ^ auVar8);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[9] & 1) != 0) {
        puVar15[0x5a0] = 0;
      }
      auVar32 = (auVar27 | auVar21) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar37);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar9,auVar31 ^ auVar9);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[10] & 1) != 0) {
        puVar15[0x640] = 0;
      }
      auVar32 = pshufhw(auVar37,auVar37,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar10,auVar32 ^ auVar10);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[0xb] & 1) != 0) {
        puVar15[0x6e0] = 0;
      }
      auVar32 = (auVar27 | auVar20) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar38,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar11,auVar31 ^ auVar11);
      unaff_XMM14 = packsswb(auVar31,auVar31);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar15[0x780] = 0;
      }
      auVar31 = packssdw(auVar38,auVar38);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xd] & 1) != 0) {
        puVar15[0x820] = 0;
      }
      auVar31 = (auVar27 | auVar19) ^ auVar14;
      auVar28._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar31 = packssdw(auVar29,auVar28);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar29,auVar31 ^ auVar29);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xe] & 1) != 0) {
        puVar15[0x8c0] = 0;
      }
      auVar31 = pshufhw(auVar28,auVar28,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar13,auVar31 ^ auVar13);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xf] & 1) != 0) {
        puVar15[0x960] = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar15 = puVar15 + 0xa00;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar17);
  }
  return;
}



// FUNCTION 1493d0654 FUN_1493d0654 body=147 status=ok
// SIG undefined FUN_1493d0654(void)

void FUN_1493d0654(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493d06e8 FUN_1493d06e8 body=88 status=ok
// SIG undefined FUN_1493d06e8(void)

longlong * FUN_1493d06e8(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1493ce96d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 1493d0740 FUN_1493d0740 body=19 status=ok
// SIG undefined FUN_1493d0740(void)

void FUN_1493d0740(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 1493d0754 FUN_1493d0754 body=132 status=ok
// SIG undefined FUN_1493d0754(void)

void FUN_1493d0754(longlong param_1,int param_2)

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



// FUNCTION 1493d07da FUN_1493d07da body=89 status=ok
// SIG undefined FUN_1493d07da(void)

void FUN_1493d07da(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x20 + *param_1);
  FUN_1493ce96d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1493d0834 FUN_1493d0834 body=62 status=ok
// SIG undefined FUN_1493d0834(void)

void FUN_1493d0834(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1493d0872(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1493d0872 FUN_1493d0872 body=93 status=ok
// SIG undefined FUN_1493d0872(void)

ulonglong FUN_1493d0872(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1493d08d0 FUN_1493d08d0 body=403 status=ok
// SIG undefined FUN_1493d08d0(void)

void FUN_1493d08d0(longlong *param_1,uint param_2)

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
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
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
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
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
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1493d0a64 FUN_1493d0a64 body=441 status=ok
// SIG undefined FUN_1493d0a64(void)

void FUN_1493d0a64(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a8db9c(*(undefined8 *)(lVar3 + lVar10 * 0x18));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1493d0c1e FUN_1493d0c1e body=296 status=ok
// SIG undefined FUN_1493d0c1e(void)

undefined4 * FUN_1493d0c1e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493d0d48(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a8db9c();
  cVar3 = FUN_1493d0e2e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1493d0a64(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d0d48 FUN_1493d0d48 body=230 status=ok
// SIG undefined FUN_1493d0d48(void)

int * FUN_1493d0d48(longlong *param_1,int *param_2)

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



// FUNCTION 1493d0e2e FUN_1493d0e2e body=128 status=ok
// SIG undefined FUN_1493d0e2e(void)

undefined8 FUN_1493d0e2e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*param_3 == *plVar5) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1493d0eae((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493d0eae FUN_1493d0eae body=114 status=ok
// SIG undefined FUN_1493d0eae(void)

void FUN_1493d0eae(longlong *param_1,int param_2)

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



// FUNCTION 1493d0f20 FUN_1493d0f20 body=122 status=ok
// SIG undefined FUN_1493d0f20(void)

longlong FUN_1493d0f20(longlong param_1,longlong param_2)

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
    FUN_1493d0f9a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1493d0f9a FUN_1493d0f9a body=121 status=ok
// SIG undefined FUN_1493d0f9a(void)

undefined8 * FUN_1493d0f9a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1493cec0a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1493d1014 FUN_1493d1014 body=59 status=ok
// SIG undefined FUN_1493d1014(void)

longlong FUN_1493d1014(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493d105a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1493d104f(lVar2);
  return lVar2;
}



// FUNCTION 1493d104f FUN_1493d104f body=11 status=ok
// SIG undefined FUN_1493d104f(void)

void FUN_1493d104f(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1493d105a FUN_1493d105a body=132 status=ok
// SIG undefined FUN_1493d105a(void)

void FUN_1493d105a(longlong param_1,int param_2)

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



// FUNCTION 1493d10e0 FUN_1493d10e0 body=126 status=ok
// SIG undefined FUN_1493d10e0(void)

undefined8 * FUN_1493d10e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_14134c51c(param_1 + 3,param_2 + 3);
  FUN_141121e90(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 1493d115e FUN_1493d115e body=143 status=ok
// SIG undefined FUN_1493d115e(void)

void FUN_1493d115e(longlong param_1,int param_2)

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



// FUNCTION 1493d11ee FUN_1493d11ee body=188 status=ok
// SIG undefined FUN_1493d11ee(void)

longlong FUN_1493d11ee(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1493d128d;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1493d12ac(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1493d128d:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1493d12ac FUN_1493d12ac body=272 status=ok
// SIG undefined FUN_1493d12ac(void)

undefined4 * FUN_1493d12ac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1493d13be(param_1,local_48);
  FUN_1493d1562(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1493d14ac(param_1,param_3,local_40,local_48);
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
      FUN_1493d1670(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d13be FUN_1493d13be body=238 status=ok
// SIG undefined FUN_1493d13be(void)

int * FUN_1493d13be(longlong *param_1,int *param_2)

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



// FUNCTION 1493d14ac FUN_1493d14ac body=182 status=ok
// SIG undefined FUN_1493d14ac(void)

undefined8 FUN_1493d14ac(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14083ed90((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1493d15f6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1493d1562 FUN_1493d1562 body=147 status=ok
// SIG undefined FUN_1493d1562(void)

undefined4 * FUN_1493d1562(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14912c73e(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d15f6 FUN_1493d15f6 body=122 status=ok
// SIG undefined FUN_1493d15f6(void)

void FUN_1493d15f6(longlong *param_1,int param_2)

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



// FUNCTION 1493d1670 FUN_1493d1670 body=423 status=ok
// SIG undefined FUN_1493d1670(void)

void FUN_1493d1670(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1493d1818 FUN_1493d1818 body=31 status=ok
// SIG undefined FUN_1493d1818(void)

undefined8 FUN_1493d1818(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493d1854 FUN_1493d1854 body=93 status=ok
// SIG undefined FUN_1493d1854(void)

void FUN_1493d1854(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcb3a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493d18b2 FUN_1493d18b2 body=126 status=ok
// SIG undefined FUN_1493d18b2(void)

void FUN_1493d18b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcb3a50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493d1921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493d1930 FUN_1493d1930 body=21 status=ok
// SIG undefined FUN_1493d1930(void)

undefined8 FUN_1493d1930(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493d1950 FUN_1493d1950 body=313 status=ok
// SIG undefined FUN_1493d1950(void)

void FUN_1493d1950(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492ef9be(param_2,&local_50);
  local_40 = local_50;
  local_38 = local_48 + -1;
  if (local_48 == 0) {
    local_38 = 0;
  }
  local_60 = *param_3;
  local_58 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_58 = 0;
  }
  lVar1 = FUN_14934810c(param_1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400021e4(&DAT_14cc1412c,&local_50);
    FUN_14934650e(lVar1,&local_50,param_4,1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc14124,&local_50);
    FUN_149346b60(lVar1,&local_50);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar1,&local_50);
    FUN_149344996(param_2,param_3,&local_50);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d1a8a FUN_1493d1a8a body=313 status=ok
// SIG undefined FUN_1493d1a8a(void)

void FUN_1493d1a8a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492ef9be(param_2,&local_50);
  local_40 = local_50;
  local_38 = local_48 + -1;
  if (local_48 == 0) {
    local_38 = 0;
  }
  local_60 = *param_3;
  local_58 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_58 = 0;
  }
  lVar1 = FUN_14934810c(param_1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400021e4(&DAT_14cc1413c,&local_50);
    FUN_1493466ec(lVar1,&local_50,param_4,1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc14134,&local_50);
    FUN_149346b60(lVar1,&local_50);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar1,&local_50);
    FUN_149344996(param_2,param_3,&local_50);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d1bc4 FUN_1493d1bc4 body=1391 status=ok
// SIG undefined FUN_1493d1bc4(void)

void FUN_1493d1bc4(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 auStack_138 [36];
  uint local_114;
  undefined8 local_110;
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
  }
  local_110 = param_3;
  FUN_146fa2484(lVar5 + 0x20,&local_88,DAT_14c99c688);
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_2 + 0x80);
  }
  FUN_146f73238(lVar5 + 0x20,&local_90,DAT_14c99c688);
  puVar8 = *(uint **)(*(uint **)(param_1 + 0x80) + 0x20);
  if (puVar8 == (uint *)0x0) {
    puVar8 = *(uint **)(param_1 + 0x80);
  }
  local_80 = (uint *)&DAT_100000000;
  local_70._0_4_ = 0xffffffff;
  local_70._4_4_ = 0;
  uStack_68 = 0;
  uStack_78 = puVar8;
  if (puVar8[6] == 0) {
    uVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    uVar7 = puVar8[6];
  }
  uStack_a0 = CONCAT44(uStack_64,uStack_68);
  local_a8 = (uint)local_70;
  uStack_a4 = local_70._4_4_;
  local_b8 = (undefined4)local_80;
  uStack_b4 = local_80._4_4_;
  uStack_b0 = (int)uStack_78;
  uStack_ac = uStack_78._4_4_;
  if (uStack_78 != puVar8 || local_70._4_4_ != uVar7) {
    puVar4 = uStack_78;
    local_114 = uVar7;
    do {
      local_bc = uStack_a4;
      if ((int)puVar4[6] <= (int)uStack_a4) {
        local_bc = 0xffffffff;
      }
      local_c0 = 0xffffffff;
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_2 + 0x80);
      }
      local_80 = (uint *)0x100000000;
      local_70 = 0xffffffff;
      uStack_68 = 0;
      uStack_78 = (uint *)lVar5;
      if (*(int *)(lVar5 + 0x18) != 0) {
        FUN_1449c0562(&local_80);
      }
      local_d8 = local_70;
      local_d0 = uStack_68;
      local_cc = uStack_64;
      local_e8 = (longlong)local_80;
      lStack_e0 = (longlong)uStack_78;
      local_70._4_4_ = *(uint *)(lVar5 + 0x18);
      local_80 = (uint *)CONCAT44(1 << ((byte)local_70._4_4_ & 0x1f),(int)local_70._4_4_ >> 5);
      local_70._0_4_ = -1 << ((byte)local_70._4_4_ & 0x1f);
      uStack_68 = local_70._4_4_ & 0xffffffe0;
      uStack_78 = (uint *)lVar5;
      if (*(uint *)(lVar5 + 0x18) != local_70._4_4_) {
        FUN_1449c0562(&local_80);
      }
      uVar2 = local_70._4_4_;
      lVar5 = (longlong)uStack_78;
      uVar7 = local_c0;
      if ((uint *)lStack_e0 != uStack_78 || local_d8._4_4_ != local_70._4_4_) {
        do {
          uVar7 = local_d8._4_4_;
          if (*(int *)(lStack_e0 + 0x18) <= (int)local_d8._4_4_) {
            uVar7 = 0xffffffff;
          }
          plVar3 = (longlong *)(local_88 + 0x18);
          if (*(longlong **)(local_88 + 0x30) != (longlong *)0x0) {
            plVar3 = *(longlong **)(local_88 + 0x30);
          }
          plVar6 = (longlong *)(local_90 + 0x18);
          if (*(longlong **)(local_90 + 0x30) != (longlong *)0x0) {
            plVar6 = *(longlong **)(local_90 + 0x30);
          }
          if (*(longlong *)(*plVar3 + (longlong)(int)((int)plVar3[2] * local_bc) * 8) ==
              *(longlong *)(*plVar6 + (longlong)(int)((int)plVar6[2] * uVar7) * 8)) break;
          local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
          FUN_1449c0562(&local_e8);
          uVar7 = local_c0;
        } while (lStack_e0 != lVar5 || local_d8._4_4_ != uVar2);
      }
      local_c0 = uVar7;
      uVar7 = local_c0;
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_2 + 0x80);
      }
      local_c0 = FUN_146f70732(lVar5);
      if (uVar7 == 0xffffffff) {
        plVar3 = (longlong *)(local_88 + 0x18);
        if (*(longlong **)(local_88 + 0x30) != (longlong *)0x0) {
          plVar3 = *(longlong **)(local_88 + 0x30);
        }
        plVar6 = (longlong *)(local_90 + 0x18);
        if (*(longlong **)(local_90 + 0x30) != (longlong *)0x0) {
          plVar6 = *(longlong **)(local_90 + 0x30);
        }
        *(undefined8 *)(*plVar6 + (longlong)(int)((int)plVar6[2] * local_c0) * 8) =
             *(undefined8 *)(*plVar3 + (longlong)(int)((int)plVar3[2] * local_bc) * 8);
        uVar7 = local_114;
      }
      else {
        local_e8 = 0;
        lStack_e0 = 0;
        FUN_144a83b10(&local_e8,local_c0);
        plVar3 = (longlong *)(local_88 + 0x18);
        if (*(longlong **)(local_88 + 0x30) != (longlong *)0x0) {
          plVar3 = *(longlong **)(local_88 + 0x30);
        }
        FUN_1400021e4((longlong)(int)((int)plVar3[2] * local_bc) * 8 + *plVar3,local_108);
        FUN_144a882a8(local_f8,local_108,L"_Section");
        FUN_1401c7f3e(&local_80,local_f8,&local_e8);
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        uVar7 = local_114;
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        iVar1 = (int)uStack_78 + -1;
        if ((int)uStack_78 == 0) {
          iVar1 = 0;
        }
        FUN_1446f82e2(&local_e8,iVar1,local_80,1);
        plVar3 = (longlong *)(local_90 + 0x18);
        if (*(longlong **)(local_90 + 0x30) != (longlong *)0x0) {
          plVar3 = *(longlong **)(local_90 + 0x30);
        }
        *(longlong *)(*plVar3 + (longlong)(int)((int)plVar3[2] * local_c0) * 8) = local_e8;
        if (local_80 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      local_80 = &local_bc;
      uStack_78 = &local_c0;
      FUN_146fa4106(local_110,&local_e8,&local_80,0);
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
      puVar4 = (uint *)CONCAT44(uStack_ac,uStack_b0);
    } while (puVar4 != puVar8 || uStack_a4 != uVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493d2134 FUN_1493d2134 body=3573 status=ok
// SIG undefined FUN_1493d2134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493d2134(double *param_1,undefined4 param_2,char param_3,char param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar35;
  double dVar36;
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_358 [32];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  dVar19 = 0.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = 0.0;
  dStack_2a0 = 0.0;
  local_298 = 1.0;
  dStack_290 = 1.0;
  local_288 = 1.0;
  dStack_280 = 0.0;
  local_2c8 = ZEXT816(0x3ff0000000000000) << 0x40;
  uVar11 = param_2;
  uVar9 = FUN_149340590();
  auVar38 = _DAT_149934d80;
  dVar26 = (double)DAT_149934d80;
  dVar31 = DAT_149934d80._8_8_;
  if (param_3 == '\0') {
    dVar43 = 0.0;
    dVar44 = 0.0;
    auVar20 = ZEXT816(0x3ff0000000000000) << 0x40;
    dVar24 = 1.0;
    dVar25 = 0.0;
    dVar13 = 1.0;
    dVar18 = 1.0;
    dVar41 = 0.0;
    dVar36 = 0.0;
    dVar23 = 0.0;
    if (param_4 == '\0') goto LAB_1493d2639;
    local_338 = 0.0;
    dStack_330 = 0.0;
    local_328 = 0.0;
    dStack_320 = 1.0;
    local_318 = 0.0;
    dStack_310 = 0.0;
    local_308 = 0.0;
    dStack_300 = 0.0;
    local_2f8 = _DAT_149934d80;
    local_2e8 = 1.0;
    dStack_2e0 = 0.0;
    uVar11 = FUN_149340d3c();
    auVar20 = local_2c8;
    dVar24 = local_288;
    dVar25 = dStack_280;
    dVar13 = local_298;
    dVar18 = dStack_290;
    dVar41 = local_2d8;
    dVar36 = dStack_2d0;
    dVar43 = local_2b8;
    dVar44 = dStack_2b0;
    dVar19 = local_2a8;
    dVar23 = dStack_2a0;
    if ((char)uVar11 == '\0') goto LAB_1493d2639;
    auVar6._8_8_ = dStack_290;
    auVar6._0_8_ = local_298;
    auVar8._8_8_ = dStack_280;
    auVar8._0_8_ = local_288;
    dVar1 = local_2f8._0_8_;
    dVar32 = local_2f8._8_8_;
    auVar27._8_8_ = dStack_2e0;
    auVar27._0_8_ = local_2e8;
    auVar20 = minpd(local_2f8,auVar6);
    auVar27 = minpd(auVar27,auVar8);
    auVar22._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    iVar10 = movmskpd(uVar11,auVar22);
    auVar34._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar12 = movmskpd(param_2,auVar34);
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar41 = dStack_330 * (double)local_2c8._0_8_ * -1.0 +
               local_328 * dStack_2d0 +
               dStack_320 * local_2d8 * 1.0 + local_338 * (double)local_2c8._8_8_;
      dVar36 = local_338 * (double)local_2c8._0_8_ * 1.0 +
               dStack_320 * dStack_2d0 +
               local_328 * local_2d8 * -1.0 + dStack_330 * (double)local_2c8._8_8_;
      auVar20._0_8_ =
           dStack_320 * (double)local_2c8._0_8_ * 1.0 +
           ((local_2d8 * dStack_330 * 1.0 + local_328 * (double)local_2c8._8_8_) -
           local_338 * dStack_2d0);
      auVar20._8_8_ =
           local_328 * (double)local_2c8._0_8_ * -1.0 +
           ((local_2d8 * local_338 * -1.0 + dStack_320 * (double)local_2c8._8_8_) -
           dStack_330 * dStack_2d0);
      dVar24 = local_318 * local_298;
      dVar44 = dStack_310 * dStack_290;
      dVar26 = local_308 * local_288;
      dVar31 = dStack_300 * dStack_280;
      dVar18 = dVar44 * local_2d8 - dStack_2d0 * dVar24;
      dVar25 = dVar26 * dStack_2d0 - (double)local_2c8._0_8_ * dVar44;
      dVar19 = dVar24 * (double)local_2c8._0_8_ - local_2d8 * dVar26;
      dVar13 = dVar31 * (double)local_2c8._8_8_ - (double)local_2c8._8_8_ * dVar31;
      dVar25 = dVar25 + dVar25;
      dVar19 = dVar19 + dVar19;
      dVar18 = dVar18 + dVar18;
      dVar13 = dVar13 + dVar13;
      dVar43 = (dVar18 * dStack_2d0 - (double)local_2c8._0_8_ * dVar19) +
               (double)local_2c8._8_8_ * dVar25 + dVar24 + local_2b8;
      dVar44 = (dVar25 * (double)local_2c8._0_8_ - dVar18 * local_2d8) +
               (double)local_2c8._8_8_ * dVar19 + dVar44 + dStack_2b0;
      dVar19 = (dVar19 * local_2d8 - dStack_2d0 * dVar25) +
               (double)local_2c8._8_8_ * dVar18 + dVar26 + local_2a8;
      dVar23 = (dVar13 * (double)local_2c8._8_8_ - dVar13 * (double)local_2c8._8_8_) +
               (double)local_2c8._8_8_ * dVar13 + dVar31 + dStack_2a0;
      dVar13 = dVar1 * local_298;
      dVar18 = dVar32 * dStack_290;
      dVar24 = local_2e8 * local_288;
      dVar25 = dStack_2e0 * dStack_280;
      goto LAB_1493d2639;
    }
    dVar24 = local_288 * local_2e8;
    dVar25 = dStack_280 * dStack_2e0;
    dVar41 = dStack_2d0 + dStack_2d0;
    dVar19 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
    dVar18 = local_2d8 * (local_2d8 + local_2d8);
    local_188 = (1.0 - (dVar18 + dStack_2d0 * dVar41)) * local_288;
    dVar13 = (local_2d8 + local_2d8) * (double)local_2c8._8_8_;
    local_198 = (dVar41 * (double)local_2c8._8_8_ + local_2d8 * dVar19) * local_288;
    dStack_190 = (dVar19 * dStack_2d0 - dVar13) * local_288;
    dVar18 = (dVar31 - ((double)local_2c8._0_8_ * dVar19 + dVar18)) * dStack_290;
    dVar36 = (dVar41 * local_2d8 + dVar19 * (double)local_2c8._8_8_) * local_298;
    local_1a8 = (dVar19 * dStack_2d0 + dVar13) * dStack_290;
    local_1c8 = (local_2d8 * dVar19 - dVar41 * (double)local_2c8._8_8_) * local_298;
    local_1d8._8_4_ = SUB84(dVar36,0);
    local_1d8._0_8_ =
         (dVar26 - ((double)local_2c8._0_8_ * dVar19 + dStack_2d0 * dVar41)) * local_298;
    local_1d8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar18,0);
    local_1b8._0_8_ = (dVar41 * local_2d8 - dVar19 * (double)local_2c8._8_8_) * dStack_290;
    local_1b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_2b8;
    dStack_170 = dStack_2b0;
    local_168 = local_2a8;
    uStack_160 = 0x3ff0000000000000;
    dVar19 = dStack_330 + dStack_330;
    dVar41 = local_328 + local_328;
    dVar43 = local_338 * (local_338 + local_338);
    local_208 = (1.0 - (dVar43 + dStack_330 * dVar19)) * local_2e8;
    dVar36 = (local_338 + local_338) * dStack_320;
    local_218 = (dVar19 * dStack_320 + local_338 * dVar41) * local_2e8;
    dStack_210 = (dVar41 * dStack_330 - dVar36) * local_2e8;
    dVar13 = local_298 * dVar1;
    dVar18 = dStack_290 * dVar32;
    local_258 = (dVar26 - (local_328 * dVar41 + dStack_330 * dVar19)) * dVar1;
    dVar26 = (dVar31 - (local_328 * dVar41 + dVar43)) * dVar32;
    dStack_250 = (dVar19 * local_338 + dVar41 * dStack_320) * dVar1;
    local_228 = (dVar41 * dStack_330 + dVar36) * dVar32;
    local_248 = (local_338 * dVar41 - dVar19 * dStack_320) * dVar1;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar26,0);
    local_238._0_8_ = (dVar19 * local_338 - dVar41 * dStack_320) * dVar32;
    local_238._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_318;
    dStack_1f0 = dStack_310;
    local_1e8 = local_308;
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar20 = blendvpd(_DAT_149936790,auVar38,auVar16);
    dVar26 = (double)(~-(ulonglong)(0.0 <= dVar24) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar24) & 0x3ff0000000000000);
    dVar31 = auVar20._0_8_;
    local_148 = local_148 * dVar31;
    local_150 = local_150 * dVar31;
    local_158 = local_158 * dVar31;
    dVar31 = auVar20._8_8_;
    local_128 = local_128 * dVar31;
    local_130 = local_130 * dVar31;
    local_138 = dVar31 * local_138;
    local_108 = local_108 * dVar26;
    local_110 = local_110 * dVar26;
    local_118 = dVar26 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar26 = local_268 * local_268 + local_278 * local_278;
    dVar31 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar30._0_8_ = dVar26 + dVar31;
    auVar30._8_8_ = dVar26 + dVar31;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar20 = sqrtpd(auVar30,auVar30);
    auVar38 = divpd(auVar38,auVar20);
    auVar40._0_8_ = auVar38._0_8_ * local_268;
    auVar40._8_8_ = auVar38._8_8_ * dStack_260;
    dVar41 = (double)((ulonglong)(local_278 * auVar38._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dVar36 = (double)((ulonglong)(dStack_270 * auVar38._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar17);
  }
  else {
    auVar20 = *(undefined1 (*) [16])(param_1 + 8);
    dVar13 = auVar20._0_8_;
    dVar18 = auVar20._8_8_;
    auVar27 = *(undefined1 (*) [16])(param_1 + 10);
    dVar1 = auVar27._0_8_;
    dVar25 = auVar27._8_8_;
    auVar5._8_8_ = dStack_290;
    auVar5._0_8_ = local_298;
    auVar7._8_8_ = dStack_280;
    auVar7._0_8_ = local_288;
    auVar20 = minpd(auVar5,auVar20);
    auVar27 = minpd(auVar7,auVar27);
    auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar21);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar12 = movmskpd(uVar11,auVar28);
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar35 = *param_1;
      dVar42 = param_1[1];
      dVar3 = param_1[2];
      dVar4 = param_1[3];
      dVar31 = param_1[3];
      dVar26 = param_1[3];
      dVar24 = param_1[1];
      dVar19 = param_1[1];
      dVar44 = param_1[2];
      dVar43 = param_1[2];
      dVar41 = dStack_2d0 * dVar44 * -1.0 +
               (double)local_2c8._0_8_ * dVar24 +
               (double)local_2c8._8_8_ * *param_1 * 1.0 + local_2d8 * dVar31;
      dVar36 = local_2d8 * dVar43 * 1.0 +
               (double)local_2c8._8_8_ * dVar19 +
               (double)local_2c8._0_8_ * *param_1 * -1.0 + dStack_2d0 * dVar26;
      auVar20._0_8_ =
           (double)local_2c8._8_8_ * dVar44 * 1.0 +
           ((*param_1 * dStack_2d0 * 1.0 + (double)local_2c8._0_8_ * dVar31) - local_2d8 * dVar24);
      auVar20._8_8_ =
           (double)local_2c8._0_8_ * dVar43 * -1.0 +
           ((*param_1 * local_2d8 * -1.0 + (double)local_2c8._8_8_ * dVar26) - dStack_2d0 * dVar19);
      dVar43 = local_2b8 * dVar13;
      dVar44 = dStack_2b0 * dVar18;
      dVar19 = local_2a8 * dVar1;
      dVar24 = dStack_2a0 * dVar25;
      dVar33 = dVar44 * dVar35 - dVar42 * dVar43;
      dVar37 = dVar19 * dVar42 - dVar3 * dVar44;
      dVar23 = dVar43 * dVar3 - dVar35 * dVar19;
      dVar32 = dVar24 * dVar4 - dVar4 * dVar24;
      dVar37 = dVar37 + dVar37;
      dVar23 = dVar23 + dVar23;
      dVar33 = dVar33 + dVar33;
      dVar32 = dVar32 + dVar32;
      dVar43 = (dVar33 * dVar42 - dVar3 * dVar23) + dVar31 * dVar37 + dVar43 + param_1[4];
      dVar44 = (dVar37 * dVar3 - dVar33 * dVar35) + dVar26 * dVar23 + dVar44 + param_1[5];
      dVar19 = (dVar23 * dVar35 - dVar42 * dVar37) + dVar31 * dVar33 + dVar19 + param_1[6];
      dVar23 = (dVar32 * dVar4 - dVar32 * dVar4) + dVar26 * dVar32 + dVar24 + param_1[7];
      dVar13 = local_298 * dVar13;
      dVar18 = dStack_290 * dVar18;
      dVar24 = local_288 * dVar1;
      dVar25 = dStack_280 * dVar25;
      goto LAB_1493d2639;
    }
    dVar36 = *param_1;
    dVar43 = param_1[1];
    dVar44 = param_1[2];
    dVar23 = dVar43 + dVar43;
    dVar32 = dVar44 + dVar44;
    dVar41 = dVar36 * (dVar36 + dVar36);
    local_188 = (1.0 - (dVar41 + dVar43 * dVar23)) * dVar1;
    dVar19 = param_1[3];
    dVar33 = dVar32 * dVar19;
    dVar35 = (dVar36 + dVar36) * param_1[3];
    dVar19 = dVar23 * dVar19;
    local_198 = (dVar19 + *param_1 * dVar32) * dVar1;
    dVar24 = dVar1 * local_288;
    dVar25 = dVar25 * dStack_280;
    dVar41 = (dVar31 - (dVar44 * dVar32 + dVar41)) * dVar18;
    dVar42 = (dVar23 * dVar36 + dVar33) * dVar13;
    local_1a8 = (dVar32 * dVar43 + dVar35) * dVar18;
    dStack_190 = (dVar32 * dVar43 - dVar35) * dVar1;
    local_1c8 = (*param_1 * dVar32 - dVar19) * dVar13;
    local_1d8._8_4_ = SUB84(dVar42,0);
    local_1d8._0_8_ = (dVar26 - (dVar44 * dVar32 + dVar43 * dVar23)) * dVar13;
    local_1d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar41,0);
    local_1b8._0_8_ = (dVar23 * dVar36 - dVar33) * dVar18;
    local_1b8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_1[4];
    dStack_170 = param_1[5];
    local_168 = param_1[6];
    uStack_160 = 0x3ff0000000000000;
    dVar19 = dStack_2d0 + dStack_2d0;
    dVar41 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
    dVar43 = local_2d8 * (local_2d8 + local_2d8);
    local_208 = (1.0 - (dVar43 + dStack_2d0 * dVar19)) * local_288;
    dVar36 = (local_2d8 + local_2d8) * (double)local_2c8._8_8_;
    local_218 = (dVar19 * (double)local_2c8._8_8_ + local_2d8 * dVar41) * local_288;
    dStack_210 = (dVar41 * dStack_2d0 - dVar36) * local_288;
    dVar13 = dVar13 * local_298;
    dVar18 = dVar18 * dStack_290;
    local_258 = (dVar26 - ((double)local_2c8._0_8_ * dVar41 + dStack_2d0 * dVar19)) * local_298;
    dVar26 = (dVar31 - ((double)local_2c8._0_8_ * dVar41 + dVar43)) * dStack_290;
    dStack_250 = (dVar19 * local_2d8 + dVar41 * (double)local_2c8._8_8_) * local_298;
    local_228 = (dVar41 * dStack_2d0 + dVar36) * dStack_290;
    local_248 = (local_2d8 * dVar41 - dVar19 * (double)local_2c8._8_8_) * local_298;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar26,0);
    local_238._0_8_ = (dVar19 * local_2d8 - dVar41 * (double)local_2c8._8_8_) * dStack_290;
    local_238._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_2b8;
    dStack_1f0 = dStack_2b0;
    local_1e8 = local_2a8;
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar20 = blendvpd(_DAT_149936790,auVar38,auVar14);
    dVar26 = (double)(~-(ulonglong)(0.0 <= dVar24) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar24) & 0x3ff0000000000000);
    dVar31 = auVar20._0_8_;
    local_148 = local_148 * dVar31;
    local_150 = local_150 * dVar31;
    local_158 = local_158 * dVar31;
    dVar31 = auVar20._8_8_;
    local_128 = local_128 * dVar31;
    local_130 = local_130 * dVar31;
    local_138 = dVar31 * local_138;
    local_108 = local_108 * dVar26;
    local_110 = local_110 * dVar26;
    local_118 = dVar26 * local_118;
    FUN_14481fd10(&local_338,&local_158);
    dVar26 = local_328 * local_328 + local_338 * local_338;
    dVar31 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
    auVar29._0_8_ = dVar26 + dVar31;
    auVar29._8_8_ = dVar26 + dVar31;
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar20 = sqrtpd(auVar29,auVar29);
    auVar38 = divpd(auVar38,auVar20);
    auVar39._0_8_ = auVar38._0_8_ * local_328;
    auVar39._8_8_ = auVar38._8_8_ * dStack_320;
    dVar41 = (double)((ulonglong)(local_338 * auVar38._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dVar36 = (double)((ulonglong)(dStack_330 * auVar38._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar15);
  }
  dVar43 = local_f8;
  dVar44 = dStack_f0;
  dVar19 = local_e8;
  dVar23 = 0.0;
LAB_1493d2639:
  *param_1 = dVar41;
  param_1[1] = dVar36;
  *(undefined1 (*) [16])(param_1 + 2) = auVar20;
  param_1[4] = dVar43;
  param_1[5] = dVar44;
  param_1[6] = dVar19;
  param_1[7] = dVar23;
  auVar2._8_4_ = SUB84(dVar18,0);
  auVar2._0_8_ = dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  auVar38._8_4_ = SUB84(dVar25,0);
  auVar38._0_8_ = dVar24;
  auVar38._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar38;
  if ((local_d0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493d2f2a FUN_1493d2f2a body=326 status=ok
// SIG undefined FUN_1493d2f2a(void)

void FUN_1493d2f2a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 **local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = local_98;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14bcb8e90;
  local_70 = &LAB_144506088;
  local_98[0] = &LAB_1493e177a;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = param_1;
  FUN_1493e17cc(&local_108);
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14058acb2(&local_e8,param_2);
  FUN_1493d3071(&local_108,&local_e8,param_3,param_4);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != (undefined1 *)0x0) {
    pppuVar1 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar1 = &local_78;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d3071 FUN_1493d3071 body=1442 status=ok
// SIG undefined FUN_1493d3071(void)

void FUN_1493d3071(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_178 [43];
  undefined1 local_14d;
  uint local_14c;
  longlong local_148;
  undefined8 local_140;
  longlong local_138 [5];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  uint local_f0;
  int iStack_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  uint local_ac;
  longlong local_a8 [4];
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined **ppuStack_68;
  undefined4 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  iVar11 = (int)param_2[1];
  iVar3 = *(int *)((longlong)param_2 + 0x34);
  uVar4 = *(uint *)(param_1 + 0x18);
  local_14d = param_4;
  local_148 = param_1;
  local_140 = param_3;
  local_ac = uVar4;
  FUN_144a1a59e(local_a8 + 2,iVar11 - iVar3,1);
  local_14c = iVar11 - iVar3;
  if (local_14c != 0 && iVar3 <= iVar11) {
    uVar7 = 0;
    do {
      *(undefined4 *)(local_a8[2] + uVar7 * 4) = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (local_14c != uVar7);
  }
  FUN_144a1a59e(local_a8,uVar4,1);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      *(undefined4 *)(local_a8[0] + uVar7 * 4) = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  plVar1 = param_2 + 2;
  local_d8 = 0x100000000;
  local_c8._0_4_ = 0xffffffff;
  local_c8._4_4_ = 0;
  uStack_c0 = (undefined **)((ulonglong)uStack_c0._4_4_ << 0x20);
  plStack_d0 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    iVar11 = (int)param_2[5];
  }
  local_70 = (uint)local_c8;
  iStack_6c = local_c8._4_4_;
  ppuStack_68 = uStack_c0;
  local_80._0_4_ = (undefined4)local_d8;
  local_80._4_4_ = local_d8._4_4_;
  uStack_78 = plStack_d0;
  local_88 = param_2;
  if ((local_c8._4_4_ != iVar11) || (plStack_d0 != plVar1)) {
    lVar10 = 0;
    do {
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(*local_88 + 8 + (longlong)iStack_6c * 0x28) != 0) {
        puVar9 = *(undefined2 **)(*local_88 + (longlong)iStack_6c * 0x28);
      }
      FUN_1446f470e(&local_d8,puVar9,1);
      if (0 < (int)uVar4) {
        piVar8 = (int *)(*(longlong *)(local_148 + 0x10) + 8);
        uVar7 = 0;
        do {
          if (*(int *)(local_a8[0] + uVar7 * 4) == -1) {
            iVar3 = *piVar8;
            if (((longlong)iVar3 < 0) || ((int)(*(longlong **)(piVar8 + -2))[1] <= iVar3)) {
              lVar6 = 0;
            }
            else {
              lVar6 = *(longlong *)(**(longlong **)(piVar8 + -2) + 8 + (longlong)iVar3 * 0x30);
            }
            if (lVar6 == local_d8) {
              *(int *)(local_a8[0] + uVar7 * 4) = (int)lVar10;
              *(int *)(local_a8[2] + lVar10 * 4) = (int)uVar7;
              break;
            }
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != uVar7);
      }
      lVar10 = lVar10 + 1;
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 || (uStack_78 != plVar1 || iStack_6c != iVar11));
  }
  local_d8 = local_148;
  plStack_d0 = (longlong *)CONCAT71(plStack_d0._1_7_,local_14d);
  local_c8 = local_a8 + 2;
  uStack_c0 = (undefined **)local_a8;
  local_b8 = &local_ac;
  if ((int)uVar4 < (int)local_14c) {
    FUN_1493e194a();
  }
  uVar5 = local_140;
  iVar11 = 0;
  local_dc = 0;
  local_88 = (longlong *)0x100000000;
  uStack_78._0_4_ = 0xffffffff;
  uStack_78._4_4_ = 0;
  local_70 = 0;
  local_80 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_88);
    iVar11 = (int)param_2[5];
  }
  local_f0 = (uint)uStack_78;
  iStack_ec = uStack_78._4_4_;
  local_e8 = local_70;
  local_e4 = iStack_6c;
  local_100 = local_88;
  local_f8 = local_80;
  local_108 = param_2;
  if ((uStack_78._4_4_ != iVar11) || (local_80 != plVar1)) {
    do {
      puVar2 = (undefined8 *)(*local_108 + (longlong)iStack_ec * 0x28);
      local_88 = (longlong *)&LAB_1493e1ae8;
      uStack_78._0_4_ = 0;
      uStack_78._4_4_ = 0;
      ppuStack_68 = &PTR_LAB_14bcb8eb0;
      local_60 = &local_dc;
      if (*(int *)(puVar2 + 1) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*puVar2;
      }
      FUN_1446f470e(local_110,puVar9,1);
      lVar10 = FUN_1492f2ba8(uVar5,puVar2 + 2);
      if (lVar10 == 0) {
LAB_1493d3539:
        FUN_1493e1978(&local_d8,local_110,0,local_dc);
      }
      else {
        lVar6 = FUN_145923a7c();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1493d3539;
        local_138[2] = 0;
        local_138[3] = 0;
        local_138[0] = 0;
        local_138[1] = 0;
        FUN_1492f4b30(lVar10,local_138);
        if (local_138[0] == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = FUN_140007850(local_138);
          if (lVar10 != 0) {
            lVar6 = FUN_1402d2740();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_1493d35c5;
          }
          lVar10 = 0;
        }
LAB_1493d35c5:
        FUN_1493e1978(&local_d8,local_110,lVar10,local_dc);
        if (local_138[2] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1493e1722(&local_88);
      local_f0 = local_f0 & ~local_100._4_4_;
      FUN_1449c0562(&local_100);
    } while (local_108 != param_2 || (local_f8 != plVar1 || iStack_ec != iVar11));
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493d3618 FUN_1493d3618 body=313 status=ok
// SIG undefined FUN_1493d3618(void)

undefined8 FUN_1493d3618(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x20 + lVar4;
    do {
      if ((longlong)*(int *)(lVar4 + 0x18) != 0) {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        lVar5 = (longlong)*(int *)(lVar4 + 0x18) * 0x40 + lVar2;
        do {
          lVar6 = *(longlong *)(lVar2 + 0x30);
          if (*(longlong *)(lVar2 + 0x30) == 0) {
            lVar6 = lVar2;
          }
          if ((longlong)*(int *)(lVar2 + 0x38) != 0) {
            lVar3 = (longlong)*(int *)(lVar2 + 0x38) * 0xc;
            do {
              FUN_1447cbafe(&local_98,local_9c,lVar6,0);
              lVar6 = lVar6 + 0xc;
              lVar3 = lVar3 + -0xc;
            } while (lVar3 != 0);
          }
          lVar2 = lVar2 + 0x40;
        } while (lVar2 != lVar5);
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar7);
  }
  uVar1 = local_a8;
  FUN_140619b9c(&local_98,local_a8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d3752 FUN_1493d3752 body=323 status=ok
// SIG undefined FUN_1493d3752(void)

undefined8 FUN_1493d3752(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar8 = (longlong)(int)param_2[1] * 0x20 + lVar4;
    do {
      if ((longlong)*(int *)(lVar4 + 0x18) != 0) {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        lVar5 = (longlong)*(int *)(lVar4 + 0x18) * 0x40 + lVar2;
        do {
          lVar6 = *(longlong *)(lVar2 + 0x30);
          if (*(longlong *)(lVar2 + 0x30) == 0) {
            lVar6 = lVar2;
          }
          if ((longlong)*(int *)(lVar2 + 0x38) != 0) {
            lVar3 = (longlong)*(int *)(lVar2 + 0x38) * 0xc;
            piVar7 = (int *)(lVar6 + 4);
            do {
              if (*piVar7 != -1) {
                FUN_1447cbafe(&local_98,local_9c,piVar7,0);
              }
              piVar7 = piVar7 + 3;
              lVar3 = lVar3 + -0xc;
            } while (lVar3 != 0);
          }
          lVar2 = lVar2 + 0x40;
        } while (lVar2 != lVar5);
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar8);
  }
  uVar1 = local_a8;
  FUN_140619b9c(&local_98,local_a8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d3896 FUN_1493d3896 body=175 status=ok
// SIG undefined FUN_1493d3896(void)

int FUN_1493d3896(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar6 = 0;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar6;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  iVar3 = FUN_1493defd2((longlong *)(param_1 + 0x40),uVar2,param_2);
  if ((iVar3 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28, lVar1 != -0x10 && lVar1 != 0))
  {
    FUN_1493d3618(&local_30);
    iVar6 = local_28;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d3946 FUN_1493d3946 body=141 status=ok
// SIG undefined FUN_1493d3946(void)

int FUN_1493d3946(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar8 = 0;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = iVar8;
  }
  uVar2 = FUN_144a49b4a(iVar5,puVar6);
  iVar3 = FUN_1493defd2((longlong *)(param_1 + 0x40),uVar2,param_2);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 + (longlong)iVar3 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar1 = lVar1 + (longlong)iVar3 * 0x28;
      lVar4 = (longlong)*(int *)(lVar1 + 0x18);
      if (lVar4 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        do {
          iVar8 = iVar8 + *(int *)(*(longlong *)(lVar1 + 0x10) + 0x18 + lVar7);
          lVar7 = lVar7 + 0x20;
        } while (lVar4 * 0x20 != lVar7);
      }
    }
  }
  return iVar8;
}



// FUNCTION 1493d39d4 FUN_1493d39d4 body=152 status=ok
// SIG undefined FUN_1493d39d4(void)

undefined8 * FUN_1493d39d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong *local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c76512c == '\0') && (DAT_14c86aa68 != '\x01')) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_140056680(local_28,L"obj;OBJ File Format");
  local_30 = &local_18;
  local_38 = local_28;
  FUN_141469cae(param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1493d3a72 FUN_1493d3a72 body=7359 status=ok
// SIG undefined FUN_1493d3a72(void)

ulonglong FUN_1493d3a72(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined ***pppuVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  undefined ***pppuVar19;
  longlong lVar20;
  ulonglong uVar21;
  code **ppcVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined **ppuVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_498 [32];
  code **local_478;
  undefined **local_470;
  undefined ***local_468;
  int local_45c;
  code *local_458;
  int local_450;
  code *local_448;
  int local_440;
  code *local_438;
  int local_430;
  code *local_428;
  int local_420;
  void *local_418;
  int local_410;
  undefined4 local_40c;
  code *local_408;
  int local_400;
  code *local_3f8;
  int local_3f0;
  code *local_3e8;
  int local_3e0;
  code *local_3d8;
  int local_3d0;
  longlong local_3c8 [2];
  code *local_3b8;
  int local_3b0;
  code *local_3a8;
  int local_3a0;
  longlong local_398 [2];
  longlong local_388 [2];
  longlong local_378 [2];
  longlong local_368 [2];
  longlong local_358 [2];
  longlong local_348 [2];
  longlong local_338 [2];
  longlong local_328 [2];
  undefined *local_318 [2];
  undefined ***local_308;
  ulonglong *local_300;
  undefined2 *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  code *local_2e8 [2];
  undefined ***local_2d8;
  undefined **local_2c8;
  code *local_2c0;
  code *local_2a8 [2];
  undefined ***local_298;
  undefined **local_288;
  code *local_280;
  code *local_268 [2];
  undefined ***local_258;
  undefined **local_248;
  code *local_240;
  code *local_228;
  int local_220;
  undefined ***local_218;
  undefined **local_208;
  code *local_200;
  code *local_1e8;
  int local_1e0;
  undefined ***local_1d8;
  undefined **local_1c8;
  code *local_1c0;
  code *local_1a8;
  int local_1a0;
  undefined ***local_198;
  undefined **local_188;
  code *local_180;
  undefined **local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  code *local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  code *local_100;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  code **local_b8;
  longlong *local_b0;
  code **local_a8;
  longlong *local_a0;
  code **local_98;
  longlong *local_90;
  code **local_88;
  longlong *local_80;
  code **local_78;
  longlong *local_70;
  code **local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_2f8 = (undefined2 *)0x0;
  local_2f0 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
  lVar20 = (longlong)local_2f0;
  pvVar4 = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
  if (lVar20 == 0) {
    local_2ec = 0;
  }
  else {
    FUN_1446dd670(&local_2f8,local_2f0,0);
    memcpy(local_2f8,pvVar4,lVar20 * 2);
  }
  plVar13 = (longlong *)FUN_14054d1d4();
  puVar18 = local_2f8;
  if (local_2f0 == 0) {
    puVar18 = &DAT_149dfb77a;
  }
  cVar10 = (**(code **)(*plVar13 + 0x48))(plVar13,puVar18);
  uVar21 = 0;
  if (cVar10 != '\0') {
    uVar23 = (ulonglong)(local_2f0 - 1);
    if (local_2f0 == 0) {
      uVar23 = uVar21;
    }
    FUN_1402980a2(*(undefined8 *)(param_1 + 0x48),local_2f8,uVar23);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc146c8) && (FUN_144b3d300(&DAT_14cc146c8), DAT_14cc146c8 == -1)) {
      FUN_140056680(local_318,&DAT_14bcb40e8);
      uStack_d8 = (code *)&local_128;
      uStack_118 = (undefined ***)0x0;
      ppuStack_108 = &PTR_LAB_14bcb8ef0;
      local_100 = FUN_1444fb147;
      local_128 = FUN_1493e2266;
      local_e0 = local_318;
      FUN_140056680(local_328,&DAT_14bcb40ec);
      uStack_c8 = local_168;
      local_158 = (undefined ***)0x0;
      local_148 = &PTR_LAB_14bcb8ef0;
      local_140 = FUN_1444fb187;
      local_168[0] = (undefined **)FUN_1493e2266;
      local_d0 = (undefined ***)local_328;
      FUN_140056680(local_338,&DAT_14bcb40f0);
      local_b8 = &local_1a8;
      local_198 = (undefined ***)0x0;
      local_188 = &PTR_LAB_14bcb8ef0;
      local_180 = FUN_1444fb20e;
      local_1a8 = FUN_1493e2266;
      local_c0 = local_338;
      FUN_140056680(local_348,&DAT_14bcb40f6);
      local_a8 = &local_1e8;
      local_1d8 = (undefined ***)0x0;
      local_1c8 = &PTR_LAB_14bcb8ef0;
      local_1c0 = FUN_1444fb29c;
      local_1e8 = FUN_1493e2266;
      local_b0 = local_348;
      FUN_140056680(local_358,&DAT_149fc3c34);
      local_98 = &local_228;
      local_218 = (undefined ***)0x0;
      local_208 = &PTR_LAB_14bcb8ef0;
      local_200 = FUN_1444fb323;
      local_228 = FUN_1493e2266;
      local_a0 = local_358;
      FUN_140056680(local_368,&DAT_149e25a7e);
      local_88 = local_268;
      local_258 = (undefined ***)0x0;
      local_248 = &PTR_LAB_14bcb8ef0;
      local_240 = FUN_1444fb698;
      local_268[0] = FUN_1493e2266;
      local_90 = local_368;
      FUN_140056680(local_378,L"mtllib");
      local_78 = local_2a8;
      local_298 = (undefined ***)0x0;
      local_288 = &PTR_LAB_14bcb8ef0;
      local_280 = FUN_1444fb6f8;
      local_2a8[0] = FUN_1493e2266;
      local_80 = local_378;
      FUN_140056680(local_388,L"usemtl");
      local_68 = local_2e8;
      local_2d8 = (undefined ***)0x0;
      local_2c8 = &PTR_LAB_14bcb8ef0;
      local_2c0 = FUN_1444fc70b;
      local_2e8[0] = FUN_1493e2266;
      local_300 = local_60;
      local_308 = &local_e0;
      local_70 = local_388;
      FUN_1493d5732(&DAT_14cc14678);
      if (local_2e8[0] != (code *)0x0) {
        pppuVar19 = local_2d8;
        if (local_2d8 == (undefined ***)0x0) {
          pppuVar19 = &local_2c8;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_388[0] != 0) {
        FUN_1400020a8();
      }
      if (local_2a8[0] != (code *)0x0) {
        pppuVar19 = local_298;
        if (local_298 == (undefined ***)0x0) {
          pppuVar19 = &local_288;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_378[0] != 0) {
        FUN_1400020a8();
      }
      if (local_268[0] != (code *)0x0) {
        pppuVar19 = local_258;
        if (local_258 == (undefined ***)0x0) {
          pppuVar19 = &local_248;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_368[0] != 0) {
        FUN_1400020a8();
      }
      if (local_228 != (code *)0x0) {
        pppuVar19 = local_218;
        if (local_218 == (undefined ***)0x0) {
          pppuVar19 = &local_208;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_358[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1e8 != (code *)0x0) {
        pppuVar19 = local_1d8;
        if (local_1d8 == (undefined ***)0x0) {
          pppuVar19 = &local_1c8;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_348[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1a8 != (code *)0x0) {
        pppuVar19 = local_198;
        if (local_198 == (undefined ***)0x0) {
          pppuVar19 = &local_188;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_338[0] != 0) {
        FUN_1400020a8();
      }
      if (local_168[0] != (undefined **)0x0) {
        pppuVar19 = local_158;
        if (local_158 == (undefined ***)0x0) {
          pppuVar19 = &local_148;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_328[0] != 0) {
        FUN_1400020a8();
      }
      if (local_128 != (code *)0x0) {
        pppuVar19 = uStack_118;
        if (uStack_118 == (undefined ***)0x0) {
          pppuVar19 = &ppuStack_108;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_318[0] != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_1444fc79a);
      _Init_thread_footer(&DAT_14cc146c8);
    }
    puVar18 = local_2f8;
    if (local_2f0 == 0) {
      puVar18 = &DAT_149dfb77a;
    }
    local_e0 = *(undefined ***)(param_1 + 0x48);
    local_d0 = local_168;
    local_168[0] = (undefined **)CONCAT71(local_168[0]._1_7_,1);
    uStack_d8 = (code *)&DAT_14cc14678;
    local_128 = FUN_144505be0;
    uStack_120 = &local_e0;
    FUN_142781ce2(puVar18);
    if ((char)local_168[0] == '\x01') {
      lVar20 = *(longlong *)(param_1 + 0x48);
      if ((*(int *)(lVar20 + 0x48) != *(int *)(lVar20 + 0x74)) ||
         (*(int *)(lVar20 + 0x98) != *(int *)(lVar20 + 0xc4))) {
        plVar13 = (longlong *)(lVar20 + 0x40);
        uVar21 = lVar20 + 0x50;
        local_e0 = (undefined **)&DAT_100000000;
        local_d0._0_4_ = 0xffffffff;
        local_d0._4_4_ = 0;
        uStack_c8 = (undefined ***)((ulonglong)uStack_c8 & 0xffffffff00000000);
        local_468 = (undefined ***)param_2;
        uStack_d8 = (code *)uVar21;
        if (*(int *)(lVar20 + 0x68) == 0) {
          ppcVar22 = (code **)0x0;
        }
        else {
          FUN_1449c0562(&local_e0);
          ppcVar22 = (code **)(ulonglong)*(uint *)(lVar20 + 0x68);
        }
        uStack_110._0_4_ = (uint)local_d0;
        uStack_110._4_4_ = local_d0._4_4_;
        ppuStack_108 = (undefined **)uStack_c8;
        uStack_120 = (undefined ***)local_e0;
        uStack_118 = (undefined ***)uStack_d8;
        local_128 = (code *)plVar13;
        if ((local_d0._4_4_ != (uint)ppcVar22) || (uStack_d8 != (code *)uVar21)) {
          do {
            puVar1 = (undefined8 *)(*(longlong *)local_128 + (longlong)(int)uStack_110._4_4_ * 0x28)
            ;
            if (*(int *)(puVar1 + 1) < 2) {
              FUN_140056680(&local_e0,&DAT_149e43d78);
            }
            else {
              local_e0 = (undefined **)0x0;
              uVar26 = *(uint *)(puVar1 + 1);
              pvVar4 = (void *)*puVar1;
              uStack_d8 = (code *)CONCAT44(uStack_d8._4_4_,uVar26);
              if ((longlong)(int)uVar26 == 0) {
                uStack_d8 = (code *)(ulonglong)uVar26;
              }
              else {
                FUN_1446dd670(&local_e0,uVar26,0);
                memcpy(local_e0,pvVar4,(longlong)(int)uVar26 * 2);
              }
            }
            FUN_140b1283a(local_168,L"\\Mesh\\",&local_e0);
            if (local_e0 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            pppuVar19 = local_468;
            plVar14 = (longlong *)FUN_1493cd8cf(local_468);
            FUN_1444ba64e(plVar14,local_168,puVar1);
            FUN_1492f22b0(pppuVar19,local_398,plVar14);
            if (local_398[0] != 0) {
              FUN_1400020a8();
            }
            local_e0 = (undefined **)CONCAT71(local_e0._1_7_,1);
            (**(code **)(*plVar14 + 0x2f0))(plVar14,puVar1);
            FUN_1444f90ea(*(undefined8 *)(param_1 + 0x48),&local_e0,puVar1);
            FUN_14933dacc(plVar14,&local_e0);
            uVar11 = FUN_1493d3896(*(undefined8 *)(param_1 + 0x48),puVar1);
            local_e0._0_4_ = uVar11;
            FUN_14933e582(plVar14,&local_e0);
            uVar11 = FUN_1493d3946(*(undefined8 *)(param_1 + 0x48),puVar1);
            local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar11);
            FUN_14933e2d8(plVar14,&local_e0);
            local_e0._0_1_ = 1;
            FUN_14933e02a(plVar14,&local_e0);
            local_e0._0_1_ = 0;
            FUN_14933dd7a(plVar14,&local_e0);
            local_e0._0_1_ = 0;
            FUN_14933e182(plVar14,&local_e0);
            local_e0._0_1_ = 0;
            FUN_14933dc22(plVar14,&local_e0);
            local_e0 = (undefined **)((ulonglong)local_e0._1_7_ << 8);
            FUN_14933ded2(plVar14,&local_e0);
            if ((longlong)*(int *)(puVar1 + 3) != 0) {
              lVar20 = puVar1[2];
              lVar24 = (longlong)*(int *)(puVar1 + 3) << 5;
              do {
                if (1 < *(int *)(lVar20 + 8)) {
                  FUN_1444fc7c9(&local_1a8,lVar20);
                  local_3a8 = local_1a8;
                  local_3a0 = local_1a0 + -1;
                  if (local_1a0 == 0) {
                    local_3a0 = 0;
                  }
                  FUN_1493482f0(&local_e0);
                  if (local_1a8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_14933ef4c(plVar14,lVar20,&local_e0);
                  if (local_e0 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                }
                lVar20 = lVar20 + 0x20;
                lVar24 = lVar24 + -0x20;
              } while (lVar24 != 0);
            }
            if (local_168[0] != (undefined **)0x0) {
              FUN_1400020a8();
            }
            uStack_110._0_4_ = (uint)uStack_110 & ~uStack_120._4_4_;
            FUN_1449c0562(&uStack_120);
          } while (local_128 != (code *)plVar13 ||
                   (uStack_118 != (undefined ***)uVar21 || uStack_110._4_4_ != (uint)ppcVar22));
        }
        lVar20 = *(longlong *)(param_1 + 0x48);
        ppuVar25 = (undefined **)(lVar20 + 0x90);
        pppuVar19 = (undefined ***)(lVar20 + 0xa0);
        local_128 = (code *)&DAT_100000000;
        uStack_118 = (undefined ***)&DAT_ffffffff;
        uStack_110 = (longlong *)((ulonglong)uStack_110._4_4_ << 0x20);
        uStack_120 = pppuVar19;
        if (*(int *)(lVar20 + 0xb8) == 0) {
          local_45c = 0;
        }
        else {
          FUN_1449c0562(&local_128);
          local_45c = *(int *)(lVar20 + 0xb8);
        }
        pppuVar9 = local_468;
        uStack_c8 = uStack_118;
        local_c0 = uStack_110;
        uStack_d8 = local_128;
        local_d0 = uStack_120;
        iVar12 = uStack_118._4_4_;
        local_468 = pppuVar19;
        local_e0 = ppuVar25;
        if ((uStack_118._4_4_ != local_45c) || (uStack_120 != pppuVar19)) {
          do {
            ppcVar22 = (code **)(*local_e0 + (longlong)iVar12 * 400);
            FUN_1444fc7c9(&local_128,ppcVar22);
            local_3b8 = local_128;
            local_3b0 = (int)uStack_120 + -1;
            if ((int)uStack_120 == 0) {
              local_3b0 = 0;
            }
            FUN_1493482f0(local_168);
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
            uVar15 = FUN_1493484a5(pppuVar9);
            FUN_1444ba64e(uVar15,local_168,ppcVar22,2);
            FUN_1492f22b0(pppuVar9,local_3c8,uVar15);
            if (local_3c8[0] != 0) {
              FUN_1400020a8();
            }
            if ((((1 < *(int *)(ppcVar22 + 0x23)) || (0.0 <= *(float *)((longlong)ppcVar22 + 0x10c))
                 ) || (1 < *(int *)(ppcVar22 + 0x27))) || (0.0 <= *(float *)(ppcVar22 + 0x25))) {
              FUN_1400021e4(&DAT_14cc1434c,&local_128);
              local_478 = ppcVar22 + 9;
              FUN_1444fc875(pppuVar9,uVar15,&local_128,(longlong)ppcVar22 + 0x14);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(&DAT_14cc14354,&local_128);
              local_478 = ppcVar22 + 0x26;
              FUN_1444fcf40(pppuVar9,uVar15,&local_128,ppcVar22 + 0x25);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              local_1a8 = (code *)CONCAT44(local_1a8._4_4_,
                                           (*(float *)((longlong)ppcVar22 + 0x2c) +
                                            *(float *)(ppcVar22 + 6) +
                                           *(float *)((longlong)ppcVar22 + 0x34)) / 3.0);
              FUN_1400021e4(&DAT_14cc1435c,&local_128);
              local_478 = ppcVar22 + 0xf;
              FUN_1444fcf40(pppuVar9,uVar15,&local_128,&local_1a8);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(&DAT_14cc14364,&local_128);
              local_478 = ppcVar22 + 0x22;
              FUN_1444fcf40(pppuVar9,uVar15,&local_128,(longlong)ppcVar22 + 0x10c);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              if ((0.0 <= *(float *)(ppcVar22 + 0x2f)) && (1e-08 < ABS(*(float *)(ppcVar22 + 0x2f)))
                 ) {
                FUN_1400021e4(&DAT_14cc1436c,&local_128);
                FUN_1493d1950(pppuVar9,uVar15,&local_128,ppcVar22 + 0x2f);
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (0.0 <= *(float *)((longlong)ppcVar22 + 0x17c)) {
                  FUN_1400021e4(&DAT_14cc14374,&local_128);
                  FUN_1493d1950(pppuVar9,uVar15,&local_128,(longlong)ppcVar22 + 0x17c);
                  if (local_128 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              if ((0.0 <= *(float *)(ppcVar22 + 0x30)) && (1e-08 < ABS(*(float *)(ppcVar22 + 0x30)))
                 ) {
                FUN_1400021e4(&DAT_14cc1419c,&local_128);
                FUN_1493d1950(pppuVar9,uVar15,&local_128,ppcVar22 + 0x30);
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              bVar7 = false;
              goto LAB_1493d486c;
            }
            bVar6 = true;
            bVar8 = false;
            bVar7 = false;
            local_470 = ppuVar25;
            switch(*(undefined4 *)(ppcVar22 + 2)) {
            case 0:
              FUN_1400021e4(&DAT_14cc14614,&local_128);
              local_478 = ppcVar22 + 9;
              FUN_1444fc875(pppuVar9,uVar15,&local_128,(longlong)ppcVar22 + 0x14);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              bVar6 = true;
              bVar7 = false;
              ppuVar25 = local_470;
              goto LAB_1493d486e;
            case 1:
              bVar7 = false;
              bVar8 = false;
              bVar6 = false;
            default:
              goto switchD_1493d46a1_caseD_2;
            case 3:
            case 4:
            case 8:
            case 9:
              bVar8 = true;
              bVar7 = false;
              break;
            case 6:
              bVar7 = true;
              bVar8 = true;
              break;
            case 7:
              bVar7 = true;
              bVar8 = false;
            }
            bVar6 = true;
switchD_1493d46a1_caseD_2:
            fVar27 = *(float *)((longlong)ppcVar22 + 0x14);
            if (*(float *)(ppcVar22 + 3) <= *(float *)((longlong)ppcVar22 + 0x14)) {
              fVar27 = *(float *)(ppcVar22 + 3);
            }
            if (*(float *)((longlong)ppcVar22 + 0x1c) <= fVar27) {
              fVar27 = *(float *)((longlong)ppcVar22 + 0x1c);
            }
            if (0.0 <= fVar27) {
              local_1a0 = *(int *)((longlong)ppcVar22 + 0x1c);
              local_1a8 = *(code **)((longlong)ppcVar22 + 0x14);
            }
            else {
              local_1a8 = (code *)0x3f4ccccd3f4ccccd;
              local_1a0 = 0x3f4ccccd;
            }
            FUN_1400021e4(&DAT_14cc141ac,&local_128);
            local_478 = ppcVar22 + 9;
            FUN_1444fc875(pppuVar9,uVar15,&local_128,&local_1a8);
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (bVar6) {
              FUN_1400021e4(&DAT_14cc1431c,&local_128);
              local_478 = ppcVar22 + 0xf;
              FUN_1444fc875(pppuVar9,uVar15,&local_128,(longlong)ppcVar22 + 0x2c);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(&DAT_14cc14324,&local_128);
              lVar20 = FUN_1444fcd57(pppuVar9,uVar15,ppcVar22 + 0x1b);
              if (lVar20 == 0) {
                if (0.0 <= *(float *)(ppcVar22 + 0x21)) {
                  FUN_1493d1950(pppuVar9,uVar15,&local_128,ppcVar22 + 0x21);
                }
              }
              else {
                uVar26 = -(uint)(0.0 <= *(float *)(ppcVar22 + 0x21));
                local_268[0] = (code *)CONCAT44(local_268[0]._4_4_,
                                                ~uVar26 & 0x3dcccccd |
                                                (uint)(*(float *)(ppcVar22 + 0x21) * 0.1) & uVar26);
                FUN_1449b8608(&local_1a8,&local_128,L"_Multiply");
                FUN_1492ef9be(uVar15,&local_1e8);
                local_3d8 = local_1e8;
                local_3d0 = local_1e0 + -1;
                if (local_1e0 == 0) {
                  local_3d0 = 0;
                }
                local_3e8 = local_1a8;
                local_3e0 = local_1a0 + -1;
                if (local_1a0 == 0) {
                  local_3e0 = 0;
                }
                uVar17 = FUN_14934810c(pppuVar9);
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1400021e4(&DAT_14cc13eac,&local_1e8);
                FUN_149346b60(uVar17,&local_1e8);
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1492ef9be(lVar20,&local_1e8);
                FUN_1400021e4(&DAT_14cc13eb4,&local_228);
                FUN_149344996(uVar17,&local_228,&local_1e8);
                if (local_228 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1400021e4(&DAT_14cc13ebc,&local_228);
                FUN_14933bd24(&local_1e8,&local_228);
                FUN_1492eda3c(uVar17,&local_1e8,local_268);
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_228 != (code *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1492ef9be(uVar17,&local_1e8);
                FUN_149344996(uVar15,&local_128,&local_1e8);
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_1a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            FUN_1400021e4(&DAT_14cc1432c,&local_128);
            ppuVar25 = local_470;
            if (bVar8) {
              FUN_1493d1a8a(pppuVar9,uVar15,&local_128,&DAT_149e1e2f8);
              ppuVar25 = local_470;
            }
            else {
              fVar27 = *(float *)(ppcVar22 + 4);
              if (*(float *)((longlong)ppcVar22 + 0x24) <= *(float *)(ppcVar22 + 4)) {
                fVar27 = *(float *)((longlong)ppcVar22 + 0x24);
              }
              if (*(float *)(ppcVar22 + 5) <= fVar27) {
                fVar27 = *(float *)(ppcVar22 + 5);
              }
              if (0.0 <= fVar27) {
                local_1a0 = *(int *)(ppcVar22 + 5);
                local_1a8 = ppcVar22[4];
              }
              else {
                local_1a8 = (code *)0x3f4ccccd3f4ccccd;
                local_1a0 = 0x3f4ccccd;
              }
              local_478 = ppcVar22 + 0xc;
              FUN_1444fc875(pppuVar9,uVar15,&local_128,&local_1a8);
            }
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
LAB_1493d486c:
            bVar6 = false;
LAB_1493d486e:
            FUN_1400021e4(&DAT_14cc1416c,&local_128);
            lVar20 = FUN_1444fcd57(pppuVar9,uVar15,ppcVar22 + 0x18);
            if (lVar20 == 0) {
              local_478 = ppcVar22 + 0x15;
              cVar10 = FUN_1444fcf40(pppuVar9,uVar15,&local_128,ppcVar22 + 0x20);
              if (cVar10 == '\0') {
                fVar27 = *(float *)(ppcVar22 + 0x20);
                if (fVar27 < 0.0) {
                  if (*(float *)((longlong)ppcVar22 + 0x104) < 0.0) goto LAB_1493d48ce;
                  fVar27 = 1.0 - *(float *)((longlong)ppcVar22 + 0x104);
                }
                local_1a8 = (code *)CONCAT44(local_1a8._4_4_,fVar27);
                if (0.0 <= fVar27) {
                  FUN_1493d1950(pppuVar9,uVar15,&local_128,&local_1a8);
                }
              }
            }
            else {
              local_470 = ppuVar25;
              FUN_1449b8608(&local_1a8,&local_128,L"OneMinus");
              FUN_1492ef9be(uVar15,&local_1e8);
              local_3f8 = local_1e8;
              local_3f0 = local_1e0 + -1;
              if (local_1e0 == 0) {
                local_3f0 = 0;
              }
              local_408 = local_1a8;
              local_400 = local_1a0 + -1;
              if (local_1a0 == 0) {
                local_400 = 0;
              }
              uVar17 = FUN_14934810c(pppuVar9);
              if (local_1e8 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(&DAT_14cc13f7c,&local_1e8);
              FUN_149346b60(uVar17,&local_1e8);
              if (local_1e8 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1492ef9be(lVar20,&local_1e8);
              FUN_1400021e4(&DAT_14cc13f84,&local_228);
              FUN_149344996(uVar17,&local_228,&local_1e8);
              if (local_228 != (code *)0x0) {
                FUN_1400020a8();
              }
              ppuVar25 = local_470;
              if (local_1e8 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_1492ef9be(uVar17,&local_1e8);
              FUN_149344996(uVar15,&local_128,&local_1e8);
              if (local_1e8 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_1a8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1493d48ce:
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (!bVar6) {
              FUN_1400021e4(&DAT_14cc14154,&local_128);
              local_478 = ppcVar22 + 0x12;
              FUN_1444fc875(pppuVar9,uVar15,&local_128,ppcVar22 + 7);
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              fVar27 = *(float *)((longlong)ppcVar22 + 0xfc);
              if ((0.0 <= fVar27) || (bVar7)) {
                local_1a8 = (code *)CONCAT44(local_1a8._4_4_,
                                             ~-(uint)(0.0 <= fVar27) & 0x3fc28f5c |
                                             (uint)fVar27 & -(uint)(0.0 <= fVar27));
                FUN_1400021e4(&DAT_14cc14184,&local_128);
                FUN_1493d1950(pppuVar9,uVar15,&local_128,&local_1a8);
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              fVar27 = *(float *)(ppcVar22 + 0x1f);
              fVar2 = *(float *)(ppcVar22 + 0x1e);
              fVar3 = *(float *)((longlong)ppcVar22 + 0xf4);
              fVar28 = fVar2;
              if (fVar3 <= fVar2) {
                fVar28 = fVar3;
              }
              if (fVar27 <= fVar28) {
                fVar28 = fVar27;
              }
              if (0.0 <= fVar28) {
                if ((((0.0001 < ABS(fVar2 - (float)DAT_14c846350)) ||
                     (0.0001 < ABS(fVar3 - DAT_14c846350._4_4_))) ||
                    (0.0001 < ABS(fVar27 - DAT_14c846358))) || (bVar7)) {
                  local_128 = (code *)CONCAT44(*(undefined4 *)((longlong)ppcVar22 + 0xf4),fVar2);
                  uStack_120 = (undefined ***)CONCAT44(0x3f800000,*(undefined4 *)(ppcVar22 + 0x1f));
                  goto LAB_1493d5128;
                }
              }
              else if (bVar7) {
                local_128 = (code *)&DAT_3f8000003f800000;
                uStack_120 = (undefined ***)&DAT_3f8000003f800000;
LAB_1493d5128:
                FUN_1400021e4(&DAT_14cc14384,&local_1a8);
                FUN_1493d1a8a(pppuVar9,uVar15,&local_1a8,&local_128);
                if (local_1a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar20 = FUN_1444fcd57(pppuVar9,uVar15,ppcVar22 + 0x2c);
              if (lVar20 != 0) {
                FUN_1492ef9be(lVar20,&local_128);
                FUN_1400021e4(&DAT_14cc1415c,&local_1a8);
                FUN_149344996(uVar15,&local_1a8,&local_128);
                if (local_1a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (1 < *(int *)(ppcVar22 + 0x2a)) {
                local_128 = (code *)0x0;
                uVar26 = *(uint *)(ppcVar22 + 0x2a);
                pcVar5 = ppcVar22[0x29];
                uStack_120 = (undefined ***)CONCAT44(uStack_120._4_4_,uVar26);
                if ((longlong)(int)uVar26 == 0) {
                  uStack_120 = (undefined ***)(ulonglong)uVar26;
                }
                else {
                  FUN_1446dd670(&local_128,uVar26,0);
                  memcpy(local_128,pcVar5,(longlong)(int)uVar26 * 2);
                }
                FUN_140c50e9c(&local_1e8,&local_128,1);
                FUN_1444fd3c0(&local_1a8,&local_1e8);
                if (local_1e8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                pcVar5 = local_128;
                local_418 = (void *)0x0;
                lVar20 = (longlong)(int)uStack_120;
                local_410 = (int)uStack_120;
                if (lVar20 == 0) {
                  local_40c = 0;
                }
                else {
                  FUN_1446dd670(&local_418,(ulonglong)uStack_120 & 0xffffffff,0);
                  memcpy(local_418,pcVar5,lVar20 * 2);
                }
                lVar20 = FUN_1444fd46c(pppuVar9,&local_418,&local_1a8);
                if (lVar20 != 0) {
                  FUN_1492ef9be(uVar15,&local_1e8);
                  local_428 = local_1e8;
                  local_420 = local_1e0 + -1;
                  if (local_1e0 == 0) {
                    local_420 = 0;
                  }
                  local_438 = local_1a8;
                  local_430 = local_1a0 + -1;
                  if (local_1a0 == 0) {
                    local_430 = 0;
                  }
                  ppuVar16 = (undefined **)FUN_14934810c(pppuVar9);
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1400021e4(&DAT_14cc14014,&local_1e8);
                  FUN_149346b60(ppuVar16,&local_1e8);
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1492ef9be(lVar20,&local_1e8);
                  FUN_1400021e4(&DAT_14cc1401c,local_268);
                  FUN_14933bd24(&local_228,local_268);
                  FUN_1492ee142(ppuVar16,&local_228,&local_1e8);
                  if (local_228 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_268[0] != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  local_470 = ppuVar16;
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1492ef9be(uVar15,&local_1e8);
                  local_448 = local_1e8;
                  local_440 = local_1e0 + -1;
                  if (local_1e0 == 0) {
                    local_440 = 0;
                  }
                  FUN_1400021e4(&DAT_14cc13f4c,&local_228);
                  local_458 = local_228;
                  local_450 = local_220 + -1;
                  if (local_220 == 0) {
                    local_450 = 0;
                  }
                  uVar17 = FUN_14934810c(pppuVar9,&local_458,&local_448);
                  if (local_228 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  ppuVar16 = local_470;
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1400021e4(&DAT_14cc13f4c,&local_1e8);
                  FUN_149346b60(uVar17,&local_1e8);
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1492ef9be(ppuVar16,&local_1e8);
                  FUN_1400021e4(&DAT_14cc13f54,&local_228);
                  FUN_149344996(uVar17,&local_228,&local_1e8);
                  if (local_228 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1400021e4(&DAT_14cc13f5c,&local_228);
                  FUN_14933bd24(&local_1e8,&local_228);
                  FUN_1492eda3c(uVar17,&local_1e8,ppcVar22 + 0x2b);
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_228 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  ppcVar22 = &local_1e8;
                  FUN_1492ef9be(uVar17,ppcVar22);
                  FUN_1400021e4(&DAT_14cc1415c,&local_228);
                  FUN_149344996(uVar15,&local_228,ppcVar22);
                  if (local_228 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_1e8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
                if (local_1a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_168[0] != (undefined **)0x0) {
              FUN_1400020a8();
            }
            uStack_c8 = (undefined ***)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d8._4_4_);
            FUN_1449c0562(&uStack_d8);
            iVar12 = uStack_c8._4_4_;
          } while (local_e0 != ppuVar25 || (local_d0 != local_468 || uStack_c8._4_4_ != local_45c));
        }
        uVar21 = CONCAT71((int7)((ulonglong)ppcVar22 >> 8),1);
        goto LAB_1493d4141;
      }
      lVar20 = FUN_1493bccfe(param_1);
      FUN_140c50e9c(&local_e0,&local_2f8,1);
      if ((undefined ***)(lVar20 + 0x28) == &local_e0) {
        if (local_e0 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar20 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(undefined ***)(lVar20 + 0x28) = local_e0;
        *(undefined4 *)(lVar20 + 0x30) = (undefined4)uStack_d8;
        *(uint *)(lVar20 + 0x34) = uStack_d8._4_4_;
      }
      local_e0 = (undefined **)0x14bcb415c;
      uStack_d8._0_4_ = 0xe;
      FUN_1446e940c(&local_128,&local_e0);
      local_e0 = (undefined **)0x14bcb417a;
      uStack_d8 = (code *)CONCAT44(uStack_d8._4_4_,0x18);
      FUN_1446e940c(local_168,&local_e0);
      FUN_140208bae(&local_e0,local_168,&local_128,L"The OBJ file appears to be empty.");
      FUN_140008f88(lVar20 + 0x70,&local_e0);
      if (local_e0 != (undefined **)0x0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    uVar21 = 0;
  }
LAB_1493d4141:
  if (local_2f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d5732 FUN_1493d5732 body=249 status=ok
// SIG undefined FUN_1493d5732(void)

undefined8 * FUN_1493d5732(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1493e22f6(param_1,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1493e2490(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_1493e2672(param_1,local_34,&local_48);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d582e FUN_1493d582e body=549 status=ok
// SIG undefined FUN_1493d582e(void)

longlong FUN_1493d582e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_688 [40];
  undefined1 local_660 [4];
  undefined1 local_65c [4];
  wchar_t *local_658;
  undefined8 uStack_650;
  undefined1 local_398 [704];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_1458c1dca(local_398);
  local_68 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1444f933c(*(undefined8 *)(param_1 + 0x10),&local_658,param_3,param_4);
  FUN_146f781a2(local_398,&local_658);
  FUN_145838e00(&local_658);
  cVar3 = FUN_142ab11c0(local_398,param_3);
  if (cVar3 == '\0') {
    lVar4 = FUN_1493bccfe(param_1 + -0x38);
    lVar2 = *(longlong *)(param_1 + -8);
    if (lVar2 == 0) {
      local_658 = (wchar_t *)0x0;
      uStack_650 = 0;
    }
    else {
      local_658 = (wchar_t *)0x0;
      uVar1 = *(uint *)(lVar2 + 0x30);
      _Src = *(void **)(lVar2 + 0x28);
      uStack_650 = CONCAT44(uStack_650._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_650 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_658,uVar1,0);
        memcpy(local_658,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    if ((wchar_t **)(lVar4 + 0x28) == &local_658) {
      if (local_658 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(wchar_t **)(lVar4 + 0x28) = local_658;
      *(undefined4 *)(lVar4 + 0x30) = (undefined4)uStack_650;
      *(undefined4 *)(lVar4 + 0x34) = uStack_650._4_4_;
    }
    local_658 = L"GetMeshPayloadData_ValidateMeshDescriptionFail";
    uStack_650._0_4_ = 0x2e;
    FUN_1446e940c(local_65c,&local_658);
    local_658 = L"InterchangeOBJTranslator";
    uStack_650 = CONCAT44(uStack_650._4_4_,0x18);
    FUN_1446e940c(local_660,&local_658);
    FUN_140208bae(&local_658,local_660,local_65c,
                  L"Invalid mesh data (NAN) was found and fix to zero. Mesh render can be bad.");
    FUN_140008f88(lVar4 + 0x70,&local_658);
    if (local_658 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_658 + 0x10))();
    }
  }
  FUN_1493c7000(param_2,local_398);
  *(undefined1 *)(param_2 + 0x360) = 1;
  FUN_1493c6fa6(local_398);
  if ((local_38 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d5a54 FUN_1493d5a54 body=154 status=ok
// SIG undefined FUN_1493d5a54(void)

longlong FUN_1493d5a54(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1493cc9d6(local_38,param_3,*(undefined8 *)(param_1 + -0x18));
  plVar1 = (longlong *)FUN_1493bd1fc(local_38);
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    if (param_3 != param_4) {
      FUN_14034a368(param_4,param_3);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
  }
  FUN_1493ccaec(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d5af8 FUN_1493d5af8 body=37 status=ok
// SIG undefined FUN_1493d5af8(void)

void FUN_1493d5af8(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1493d5b30 FUN_1493d5b30 body=202 status=ok
// SIG undefined FUN_1493d5b30(void)

undefined8 FUN_1493d5b30(undefined8 param_1,longlong param_2)

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
  local_b8 = FUN_1406d0862();
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



// FUNCTION 1493d5bfc FUN_1493d5bfc body=134 status=ok
// SIG undefined FUN_1493d5bfc(void)

void FUN_1493d5bfc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1493c828e(param_1,iVar1);
    }
    FUN_1493e3718((longlong)iVar1 * 0x2c0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1493e3742(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1493e37a8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1493d5c84 FUN_1493d5c84 body=94 status=ok
// SIG undefined FUN_1493d5c84(void)

longlong FUN_1493d5c84(longlong param_1,longlong param_2)

{
  FUN_1493e11bc();
  FUN_1493e11bc(param_1 + 0x50,param_2 + 0x50);
  FUN_1493e11bc(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1493e11bc(param_1 + 0xf0,param_2 + 0xf0);
  FUN_1493e11bc(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 1493d5ce2 FUN_1493d5ce2 body=752 status=ok
// SIG undefined FUN_1493d5ce2(void)

uint FUN_1493d5ce2(longlong param_1,longlong param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  int iVar9;
  undefined1 auStack_178 [40];
  uint local_150;
  int local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 *local_128 [2];
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    piVar2 = (int *)(param_1 + 0x68);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x70);
    }
    iVar9 = *piVar2;
    if (iVar9 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x1a0;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x1a0) == 0)
        goto LAB_1493d5d31;
        iVar9 = *(int *)(lVar6 + 0x198);
      } while (iVar9 != -1);
    }
  }
  lVar6 = 0;
LAB_1493d5d31:
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1493e11bc(local_98,lVar6 + 0x58);
  local_148 = *(longlong *)(param_2 + 0x188);
  local_128[0] = (undefined1 *)0x100000000;
  local_118 = 0xffffffff;
  iStack_114 = 0;
  local_110 = 0;
  iVar9 = 0;
  local_128[1] = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(local_128);
    iVar9 = local_70;
  }
  local_a8 = local_118;
  iStack_a4 = iStack_114;
  local_a0 = local_110;
  local_9c = local_10c;
  local_b8 = local_128[0];
  local_b0 = local_128[1];
  local_c0 = local_98;
  if ((iStack_114 == iVar9) && (local_128[1] == local_88)) {
    local_150 = 0;
  }
  else {
    local_130 = local_148 + 0x38;
    local_140 = local_148 + 0x48;
    local_150 = 0;
    do {
      lVar6 = *local_c0;
      lVar3 = (longlong)iStack_a4;
      puVar7 = &DAT_14c846480;
      ppuVar8 = local_128;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *ppuVar8 = (undefined1 *)*puVar7;
        puVar7 = puVar7 + 1;
        ppuVar8 = ppuVar8 + 1;
      }
      if (*(char *)(lVar6 + 0x390 + lVar3 * 0x410) == '\x01') {
        lVar6 = lVar6 + lVar3 * 0x410 + 0x30;
        cVar1 = FUN_1493d7aa4(lVar6,local_128,local_130);
        if (cVar1 != '\0') {
          local_150 = (uint)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          if (1 < *(int *)(local_148 + 0x50)) {
            lVar6 = *(longlong *)(local_148 + 0x48);
            local_14c = *(int *)(local_148 + 0x50) + -1;
            lVar3 = (longlong)local_14c;
            local_138 = lVar3 * 0x70 + lVar6;
            do {
              uVar4 = FUN_1493d9ba0(lVar6,local_138);
              if ((char)uVar4 != '\0') {
                local_150 = (uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
                FUN_1484f00c4(local_140,local_14c,1);
                break;
              }
              lVar6 = lVar6 + 0x70;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
        }
      }
      local_a8 = local_a8 & ~local_b8._4_4_;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != local_98 || (local_b0 != local_88 || iStack_a4 != iVar9));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(local_98);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_150 & 0xffffff01;
}



// FUNCTION 1493d5fd4 FUN_1493d5fd4 body=658 status=ok
// SIG undefined FUN_1493d5fd4(void)

ulonglong FUN_1493d5fd4(longlong param_1,longlong param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined7 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    piVar2 = (int *)(param_1 + 0x68);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x70);
    }
    iVar9 = *piVar2;
    if (iVar9 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x1a0;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x1a0) == 0)
        goto LAB_1493d6023;
        iVar9 = *(int *)(lVar3 + 0x198);
      } while (iVar9 != -1);
    }
  }
  lVar3 = 0;
LAB_1493d6023:
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1493e11bc(local_98,lVar3 + 0xa8);
  lVar3 = *(longlong *)(param_2 + 0x188);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar9 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar9 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 == iVar9) && (local_b0 == local_88)) {
    uVar5 = 0;
  }
  else {
    lVar6 = lVar3 + 0x38;
    local_e8 = lVar3 + 0x58;
    uVar5 = 0;
    local_f8 = lVar6;
    local_f0 = lVar3;
    do {
      if ((*(char *)(*local_e0 + 0x390 + (longlong)iStack_c4 * 0x410) == '\x01') &&
         (cVar1 = FUN_1493d9290(*local_e0 + (longlong)iStack_c4 * 0x410 + 0x30,lVar6), cVar1 != '\0'
         )) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        if (1 < *(int *)(lVar3 + 0x60)) {
          lVar6 = *(longlong *)(lVar3 + 0x58);
          iVar4 = *(int *)(lVar3 + 0x60) + -1;
          lVar3 = (longlong)iVar4;
          lVar8 = lVar3 * 0x68 + lVar6;
          do {
            cVar1 = FUN_1493d9c25(lVar6,lVar8);
            if (cVar1 != '\0') {
              uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
              FUN_140931d2e(local_e8,iVar4,1);
              goto LAB_1493d6212;
            }
            lVar6 = lVar6 + 0x68;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
          uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
LAB_1493d6212:
          uVar5 = CONCAT71(uVar7,1);
          lVar3 = local_f0;
          lVar6 = local_f8;
        }
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar9));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 1493d6268 FUN_1493d6268 body=677 status=ok
// SIG undefined FUN_1493d6268(void)

undefined8 FUN_1493d6268(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    piVar8 = (int *)(param_1 + 0x68);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      piVar8 = *(int **)(param_1 + 0x70);
    }
    iVar13 = *piVar8;
    if (iVar13 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0x1a0;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0x1a0) == 0)
        goto LAB_1493d62b6;
        iVar13 = *(int *)(lVar10 + 0x198);
      } while (iVar13 != -1);
    }
  }
  lVar10 = 0;
LAB_1493d62b6:
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1493e11bc(local_98,lVar10 + 0xf8);
  lVar10 = *(longlong *)(param_2 + 0x188);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar13 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar13 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 == iVar13) && (local_b0 == local_88)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      if ((*(char *)(*local_e0 + 0x390 + (longlong)iStack_c4 * 0x410) == '\x01') &&
         (cVar7 = FUN_1493d8b52(*local_e0 + (longlong)iStack_c4 * 0x410 + 0x30,lVar10 + 0x38),
         cVar7 != '\0')) {
        uVar9 = *(int *)(lVar10 + 0x40) - 1;
        uVar11 = 1;
        if (0 < (int)uVar9) {
          lVar5 = *(longlong *)(lVar10 + 0x38);
          lVar6 = (ulonglong)uVar9 * 0x50;
          lVar1 = lVar5 + lVar6;
          dVar3 = *(double *)(lVar5 + 0x30 + lVar6);
          lVar12 = 0;
          do {
            dVar4 = *(double *)(lVar5 + 0x30 + lVar12);
            if ((dVar4 == dVar3) && (!NAN(dVar4) && !NAN(dVar3))) {
              dVar4 = *(double *)(lVar5 + 0x38 + lVar12);
              if ((dVar4 == *(double *)(lVar1 + 0x38)) &&
                 (!NAN(dVar4) && !NAN(*(double *)(lVar1 + 0x38)))) {
                dVar4 = *(double *)(lVar5 + 0x40 + lVar12);
                if ((dVar4 == *(double *)(lVar1 + 0x40)) &&
                   (!NAN(dVar4) && !NAN(*(double *)(lVar1 + 0x40)))) {
                  fVar2 = *(float *)(lVar5 + 0x48 + lVar12);
                  if ((fVar2 == *(float *)(lVar1 + 0x48)) &&
                     (!NAN(fVar2) && !NAN(*(float *)(lVar1 + 0x48)))) {
                    uVar11 = 1;
                    FUN_1484f0062(lVar10 + 0x38,(ulonglong)uVar9,
                                  CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
                    break;
                  }
                }
              }
            }
            lVar12 = lVar12 + 0x50;
          } while (lVar6 != lVar12);
        }
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar13));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(local_98);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493d650e FUN_1493d650e body=1062 status=ok
// SIG undefined FUN_1493d650e(void)

ulonglong FUN_1493d650e(longlong param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  longlong *plVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_478 [40];
  longlong local_450;
  longlong *local_448;
  longlong local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong *local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 local_414;
  char local_409;
  longlong *local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  byte local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    piVar9 = (int *)(param_1 + 0x68);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      piVar9 = *(int **)(param_1 + 0x70);
    }
    iVar8 = *piVar9;
    if (iVar8 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x1a0;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x1a0) == 0)
        goto LAB_1493d655f;
        iVar8 = *(int *)(lVar10 + 0x198);
      } while (iVar8 != -1);
    }
  }
  lVar10 = 0;
LAB_1493d655f:
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1493e11bc(local_98,lVar10 + 0x148);
  cVar6 = FUN_14939ea8a(param_3,&local_409);
  if ((cVar6 == '\0') || (local_409 == '\0')) {
    plVar2 = local_98 + 2;
    local_438 = (longlong *)&DAT_100000000;
    local_428 = (longlong *)&DAT_ffffffff;
    local_420 = (longlong *)((ulonglong)local_420._4_4_ << 0x20);
    iVar8 = 0;
    local_430 = plVar2;
    if (local_70 != 0) {
      FUN_1449c0562(&local_438);
      iVar8 = local_70;
    }
    local_3f0 = local_428;
    plVar5 = local_3f0;
    local_3e8 = (uint)local_420;
    local_3e4 = local_420._4_4_;
    local_400 = local_438;
    local_3f8 = local_430;
    local_3f0._4_4_ = (uint)((ulonglong)local_428 >> 0x20);
    bVar17 = local_3f0._4_4_ != iVar8;
    local_408 = local_98;
    local_3f0 = plVar5;
    if ((bVar17) || (plVar5 = local_420, local_430 != plVar2)) {
      do {
        do {
          local_3f0 = (longlong *)CONCAT44(local_3f0._4_4_,(uint)local_3f0 & ~local_400._4_4_);
          FUN_1449c0562(&local_400);
        } while (local_3f0._4_4_ != iVar8);
      } while ((local_3f8 != plVar2) || (plVar5 = local_420, local_408 != local_98));
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x188);
    plVar2 = local_98 + 2;
    local_408 = (longlong *)&DAT_100000000;
    local_3f8 = (longlong *)&DAT_ffffffff;
    local_3f0 = (longlong *)((ulonglong)local_3f0._4_4_ << 0x20);
    iVar8 = 0;
    local_400 = plVar2;
    if (local_70 != 0) {
      FUN_1449c0562(&local_408);
      iVar8 = local_70;
    }
    local_420 = local_3f8;
    plVar5 = local_420;
    local_418 = (uint)local_3f0;
    local_414 = local_3f0._4_4_;
    local_430 = local_408;
    local_428 = local_400;
    local_420._4_4_ = (uint)((ulonglong)local_3f8 >> 0x20);
    local_438 = local_98;
    if ((local_420._4_4_ != iVar8) || (local_400 != plVar2)) {
      local_440 = lVar10 + 0x38;
      local_448 = (longlong *)(lVar10 + 0x68);
      uVar12 = 0;
      iVar7 = local_420._4_4_;
      local_450 = lVar10;
      local_420 = plVar5;
      do {
        local_a8 = *(byte *)(*local_438 + 0x390 + (longlong)iVar7 * 0x410);
        if (local_a8 == 1) {
          FUN_1493c70d2(&local_408,(longlong)iVar7 * 0x410 + *local_438 + 0x30);
        }
        if (((local_a8 & 1) != 0) && (cVar6 = FUN_1493d7834(&local_408,local_440), cVar6 != '\0')) {
          uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
          if (1 < *(int *)(lVar10 + 0x70)) {
            uVar11 = (ulonglong)(*(int *)(lVar10 + 0x70) - 1);
            lVar10 = *local_448;
            lVar14 = uVar11 * 0x100 + lVar10;
            puVar15 = (ulonglong *)(lVar14 + 0x30);
            uVar4 = *(uint *)(lVar14 + 0x38);
            uVar16 = 0;
            do {
              if (*(uint *)(lVar10 + 0x38 + uVar16 * 0x100) == uVar4) {
                if ((int)uVar4 < 1) {
LAB_1493d67d5:
                  uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
                  FUN_1484f0122(local_448,uVar11,CONCAT71((int7)((ulonglong)puVar15 >> 8),1));
                  lVar10 = local_450;
                  goto LAB_1493d66ab;
                }
                lVar14 = *(longlong *)(uVar16 * 0x100 + lVar10 + 0x30);
                uVar12 = *puVar15;
                lVar13 = 0;
                while ((((*(double *)(lVar14 + lVar13) == *(double *)(uVar12 + lVar13) &&
                         (!NAN(*(double *)(lVar14 + lVar13)) && !NAN(*(double *)(uVar12 + lVar13))))
                        && (dVar3 = *(double *)(lVar14 + 8 + lVar13),
                           pdVar1 = (double *)(uVar12 + 8 + lVar13), dVar3 == *pdVar1)) &&
                       (((!NAN(dVar3) && !NAN(*pdVar1) &&
                         (dVar3 = *(double *)(lVar14 + 0x10 + lVar13),
                         pdVar1 = (double *)(uVar12 + 0x10 + lVar13), dVar3 == *pdVar1)) &&
                        (!NAN(dVar3) && !NAN(*pdVar1)))))) {
                  lVar13 = lVar13 + 0x18;
                  if ((ulonglong)uVar4 * 0x18 == lVar13) goto LAB_1493d67d5;
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar11);
            uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
            lVar10 = local_450;
          }
        }
LAB_1493d66ab:
        if (local_a8 == 1) {
          FUN_1493c6fa6(&local_408);
        }
        local_420 = (longlong *)CONCAT44(local_420._4_4_,(uint)local_420 & ~local_430._4_4_);
        FUN_1449c0562(&local_430);
        iVar7 = local_420._4_4_;
      } while (local_438 != local_98 || (local_428 != plVar2 || local_420._4_4_ != iVar8));
      goto LAB_1493d68ab;
    }
  }
  local_420 = plVar5;
  uVar12 = 0;
LAB_1493d68ab:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(local_98);
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 1493d6936 FUN_1493d6936 body=209 status=ok
// SIG undefined FUN_1493d6936(void)

void FUN_1493d6936(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e1670(param_1);
  return;
}



// FUNCTION 1493d6a08 FUN_1493d6a08 body=425 status=ok
// SIG undefined FUN_1493d6a08(void)

void FUN_1493d6a08(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x118) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x80);
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar5 = (ulonglong)uVar1;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    local_58 = 0;
    uStack_50 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    if (uVar5 != 0) {
      FUN_147d59b9c(&local_58,uVar1);
      lVar7 = uVar5 * 0x2c0;
      lVar4 = lVar2;
      do {
        uVar5 = uStack_50;
        lVar6 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_147d59bfc(&local_58,uVar5 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar6 * 8) = lVar4;
        lVar4 = lVar4 + 0x2c0;
        lVar7 = lVar7 + -0x2c0;
      } while (lVar7 != 0);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0x100;
    local_6c = 1;
    local_6b = *(char *)(param_1 + 0x90) != -1;
    *(byte *)(param_2 + 0x195) = *(byte *)(param_2 + 0x195) & 0xfd | local_6b * '\x02';
    FUN_143714670(param_2,&local_58);
    lVar4 = FUN_144b2abfe(param_2);
    if (((lVar4 != 0) && (*(char *)(param_1 + 0x90) != -1)) && (*(char *)(param_1 + 0x119) == '\0'))
    {
      lVar4 = *(longlong *)(param_2 + 0x188);
      if (lVar4 == 0) {
        FUN_147d53e2e(param_2);
        lVar4 = *(longlong *)(param_2 + 0x188);
      }
      *(undefined1 *)(lVar4 + 0x31) = 3;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145cb3fa6(lVar2,uVar1);
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493d6bb4 FUN_1493d6bb4 body=3193 status=ok
// SIG undefined FUN_1493d6bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1493d6bb4(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *_Dst;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_468 [32];
  undefined1 local_448;
  undefined1 local_438 [16];
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [12];
  undefined4 uStack_3bc;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  void *local_370;
  int local_368;
  undefined1 local_35a;
  byte local_359;
  undefined8 local_358 [12];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [2] [16];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  int local_294;
  undefined1 local_290 [8];
  undefined1 *local_288;
  int local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_2f8 = ZEXT816(0);
  FUN_14939a1b0(param_3);
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = (undefined1 *)0x0;
  local_280 = 0;
  puVar18 = &DAT_14c846480;
  puVar19 = local_358;
  local_2c8[0] = ZEXT816(0);
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  local_359 = 0;
  local_35a = 0;
  lVar17 = FUN_149380686(*(undefined8 *)(param_1 + 0x30));
  if (lVar17 != 0) {
    FUN_14937fec0(lVar17,local_358);
    FUN_14937fbd6(lVar17,&local_359);
    if (local_359 == 0) {
      FUN_14937fd2e(lVar17,&local_35a);
    }
  }
  if ((longlong)(int)local_2f8._8_4_ != 0) {
    lVar23 = (longlong)(int)local_2f8._8_4_ << 4;
    lVar17 = local_2f8._0_8_;
    do {
      lVar13 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x30),lVar17);
      if (lVar13 != 0) {
        lVar14 = FUN_1459238a6();
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
          FUN_1492ee7cc(lVar13,&local_370);
          cVar10 = FUN_144a791f8(&local_370,L"SOCKET_",7,1);
          if (cVar10 != '\0') {
            uVar16 = local_368 - 1;
            if (local_368 == 0) {
              uVar16 = 0;
            }
            uVar24 = 7;
            if ((int)uVar16 < 7) {
              uVar24 = uVar16;
            }
            if ((int)uVar24 < 1) {
              uVar24 = 0;
            }
            if (0 < (int)uVar16) {
              if (local_368 - uVar24 != 0) {
                memmove(local_370,(void *)((longlong)local_370 + (ulonglong)uVar24 * 2),
                        (longlong)(int)(local_368 - uVar24) * 2);
              }
              local_368 = local_368 - uVar24;
            }
          }
          uVar24 = 0;
          uVar16 = local_368 - 1;
          if (local_368 == 0) {
            uVar16 = uVar24;
          }
          FUN_1446f82e2(&local_178,uVar16,local_370,1);
          local_378 = local_178;
          FUN_144a13f80(local_2c8,&local_178,&local_378,0);
          auVar38 = _DAT_149934d80;
          auVar35 = ZEXT816(0);
          local_3c8 = ZEXT812(0);
          uStack_3bc = 0x3ff00000;
          dVar28 = (double)DAT_149934d80;
          dVar30 = DAT_149934d80._8_8_;
          local_398 = _DAT_149934d80;
          local_388 = ZEXT816(0x3ff0000000000000);
          local_3d8 = auVar35;
          local_3b8 = auVar35;
          local_3a8 = auVar35;
          if (local_359 == 1) {
            local_448 = 0;
            FUN_149340896(lVar13,*(undefined8 *)(param_1 + 0x30),local_358,local_3d8);
            uVar24 = (uint)local_359;
          }
          FUN_1493d2134(local_3d8,lVar13,uVar24 & 0xffffff01,local_35a);
          uVar15 = FUN_1492f8190(*(undefined8 *)(param_1 + 0x30));
          local_428 = 0;
          uStack_424 = 0;
          uStack_420 = 0;
          uStack_41c = 0x3ff00000;
          local_3f8 = auVar38;
          local_3e8 = 1.0;
          dStack_3e0 = 0.0;
          local_438 = auVar35;
          local_418 = auVar35;
          local_408 = auVar35;
          uVar11 = FUN_1492f67c2(uVar15,local_438);
          dVar9 = dStack_3e0;
          dVar8 = local_3e8;
          if ((char)uVar11 != '\0') {
            dVar1 = local_398._0_8_;
            dVar4 = local_398._8_8_;
            dVar2 = local_388._0_8_;
            dVar5 = local_388._8_8_;
            dVar3 = local_3f8._0_8_;
            dVar6 = local_3f8._8_8_;
            auVar35._8_8_ = dStack_3e0;
            auVar35._0_8_ = local_3e8;
            auVar32 = minpd(local_3f8,local_398);
            auVar35 = minpd(auVar35,local_388);
            auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
            auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
            iVar12 = movmskpd(uVar11,auVar33);
            auVar32._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
            auVar32._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
            uVar16 = movmskpd((int)uVar15,auVar32);
            if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
              dVar28 = (double)CONCAT44(uStack_424,local_428);
              dVar30 = (double)CONCAT44(uStack_41c,uStack_420);
              dVar31 = (double)local_438._8_8_ * (double)local_3c8._0_8_ * -1.0 +
                       dVar28 * (double)local_3d8._8_8_ +
                       dVar30 * (double)local_3d8._0_8_ * 1.0 +
                       (double)local_438._0_8_ * stack0xfffffffffffffc40;
              dVar36 = (double)local_438._0_8_ * (double)local_3c8._0_8_ * 1.0 +
                       dVar30 * (double)local_3d8._8_8_ +
                       dVar28 * (double)local_3d8._0_8_ * -1.0 +
                       (double)local_438._8_8_ * stack0xfffffffffffffc40;
              auVar38._0_8_ =
                   dVar30 * (double)local_3c8._0_8_ * 1.0 +
                   (((double)local_3d8._0_8_ * (double)local_438._8_8_ * 1.0 +
                    dVar28 * stack0xfffffffffffffc40) -
                   (double)local_438._0_8_ * (double)local_3d8._8_8_);
              auVar38._8_8_ =
                   dVar28 * (double)local_3c8._0_8_ * -1.0 +
                   (((double)local_3d8._0_8_ * (double)local_438._0_8_ * -1.0 +
                    dVar30 * stack0xfffffffffffffc40) -
                   (double)local_438._8_8_ * (double)local_3d8._8_8_);
              dVar34 = (double)local_418._0_8_ * dVar1;
              dVar37 = (double)local_418._8_8_ * dVar4;
              dVar28 = (double)local_408._0_8_ * dVar2;
              dVar30 = (double)local_408._8_8_ * dVar5;
              dVar42 = dVar37 * (double)local_3d8._0_8_ - (double)local_3d8._8_8_ * dVar34;
              dVar40 = dVar28 * (double)local_3d8._8_8_ - (double)local_3c8._0_8_ * dVar37;
              dVar41 = dVar34 * (double)local_3c8._0_8_ - (double)local_3d8._0_8_ * dVar28;
              dVar7 = dVar30 * stack0xfffffffffffffc40 - stack0xfffffffffffffc40 * dVar30;
              dVar40 = dVar40 + dVar40;
              dVar41 = dVar41 + dVar41;
              dVar42 = dVar42 + dVar42;
              dVar7 = dVar7 + dVar7;
              local_3b8._0_8_ =
                   (dVar42 * (double)local_3d8._8_8_ - (double)local_3c8._0_8_ * dVar41) +
                   stack0xfffffffffffffc40 * dVar40 + dVar34 + (double)local_3b8._0_8_;
              local_3b8._8_8_ =
                   (dVar40 * (double)local_3c8._0_8_ - dVar42 * (double)local_3d8._0_8_) +
                   stack0xfffffffffffffc40 * dVar41 + dVar37 + (double)local_3b8._8_8_;
              dVar28 = (dVar41 * (double)local_3d8._0_8_ - (double)local_3d8._8_8_ * dVar40) +
                       stack0xfffffffffffffc40 * dVar42 + dVar28 + (double)local_3a8._0_8_;
              dVar30 = (dVar7 * stack0xfffffffffffffc40 - dVar7 * stack0xfffffffffffffc40) +
                       stack0xfffffffffffffc40 * dVar7 + dVar30 + (double)local_3a8._8_8_;
            }
            else {
              dVar36 = (double)local_3d8._8_8_ + (double)local_3d8._8_8_;
              dVar41 = (double)local_3c8._0_8_ + (double)local_3c8._0_8_;
              dVar42 = (double)local_3d8._0_8_ * ((double)local_3d8._0_8_ + (double)local_3d8._0_8_)
              ;
              local_1a8 = (1.0 - (dVar42 + (double)local_3d8._8_8_ * dVar36)) * dVar2;
              dVar7 = ((double)local_3d8._0_8_ + (double)local_3d8._0_8_) * stack0xfffffffffffffc40;
              local_1b8 = (dVar36 * stack0xfffffffffffffc40 + (double)local_3d8._0_8_ * dVar41) *
                          dVar2;
              dVar31 = dVar2 * local_3e8;
              dStack_1b0 = (dVar41 * (double)local_3d8._8_8_ - dVar7) * dVar2;
              local_1f8 = (dVar28 - ((double)local_3c8._0_8_ * dVar41 +
                                    (double)local_3d8._8_8_ * dVar36)) * dVar1;
              dVar42 = (dVar30 - ((double)local_3c8._0_8_ * dVar41 + dVar42)) * dVar4;
              dStack_1f0 = (dVar36 * (double)local_3d8._0_8_ + dVar41 * stack0xfffffffffffffc40) *
                           dVar1;
              local_1c8 = (dVar41 * (double)local_3d8._8_8_ + dVar7) * dVar4;
              local_1e8 = ((double)local_3d8._0_8_ * dVar41 - dVar36 * stack0xfffffffffffffc40) *
                          dVar1;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar42,0);
              local_1d8._0_8_ =
                   (dVar36 * (double)local_3d8._0_8_ - dVar41 * stack0xfffffffffffffc40) * dVar4;
              local_1d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = (double)local_3b8._0_8_;
              dStack_190 = (double)local_3b8._8_8_;
              local_188 = local_3a8._0_4_;
              uStack_184 = local_3a8._4_4_;
              uStack_180 = 0;
              uStack_17c = 0x3ff00000;
              dVar40 = (double)CONCAT44(uStack_424,local_428);
              dVar37 = (double)local_438._8_8_ + (double)local_438._8_8_;
              dVar41 = dVar40 + dVar40;
              dVar36 = (double)local_438._0_8_ * ((double)local_438._0_8_ + (double)local_438._0_8_)
              ;
              local_228 = (1.0 - (dVar36 + (double)local_438._8_8_ * dVar37)) * local_3e8;
              dVar7 = dVar41 * (double)CONCAT44(uStack_41c,uStack_420);
              dVar42 = ((double)local_438._0_8_ + (double)local_438._0_8_) *
                       (double)CONCAT44(uStack_41c,uStack_420);
              dVar34 = dVar37 * (double)CONCAT44(uStack_41c,uStack_420);
              local_238 = (dVar34 + (double)local_438._0_8_ * dVar41) * local_3e8;
              local_258 = (dVar37 * (double)local_438._0_8_ - dVar7) * dVar6;
              dStack_230 = (dVar41 * (double)local_438._8_8_ - dVar42) * local_3e8;
              local_278 = (dVar28 - (dVar40 * dVar41 + (double)local_438._8_8_ * dVar37)) * dVar3;
              dStack_250 = (dVar30 - (dVar40 * dVar41 + dVar36)) * dVar6;
              dStack_270 = (dVar37 * (double)local_438._0_8_ + dVar7) * dVar3;
              local_248 = (dVar41 * (double)local_438._8_8_ + dVar42) * dVar6;
              local_268 = ((double)local_438._0_8_ * dVar41 - dVar34) * dVar3;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_418._0_8_;
              dStack_210 = (double)local_418._8_8_;
              local_208 = (double)local_408._0_8_;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar26._8_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
              auVar26._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
              auVar35 = blendvpd(_DAT_149936790,auVar38,auVar26);
              uVar25 = -(ulonglong)(0.0 <= dVar31);
              dVar28 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
              dVar30 = auVar35._0_8_;
              local_168 = local_168 * dVar30;
              dStack_170 = dStack_170 * dVar30;
              local_178 = local_178 * dVar30;
              dVar30 = auVar35._8_8_;
              local_148 = local_148 * dVar30;
              local_150 = local_150 * dVar30;
              local_158 = dVar30 * local_158;
              local_128 = local_128 * dVar28;
              local_130 = local_130 * dVar28;
              local_138 = dVar28 * local_138;
              FUN_14481fd10(&local_2e8,&local_178);
              dVar28 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
              dVar30 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
              auVar29._0_8_ = dVar28 + dVar30;
              auVar29._8_8_ = dVar28 + dVar30;
              auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
              auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
              auVar35 = sqrtpd(auVar29,auVar29);
              auVar38 = divpd(auVar38,auVar35);
              auVar39._0_8_ = auVar38._0_8_ * local_2d8;
              auVar39._8_8_ = auVar38._8_8_ * dStack_2d0;
              dVar31 = (double)((ulonglong)(local_2e8 * auVar38._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
              dVar36 = (double)((ulonglong)(dStack_2e0 * auVar38._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
              auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar27);
              dVar30 = 0.0;
              local_3b8 = local_118;
              dVar28 = local_108;
            }
            dVar5 = dVar5 * dVar9;
            local_3d8._8_8_ = dVar36;
            local_3d8._0_8_ = dVar31;
            local_3a8._8_4_ = SUB84(dVar30,0);
            local_3a8._0_8_ = dVar28;
            local_3a8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            local_398._8_4_ = SUB84(dVar4 * dVar6,0);
            local_398._0_8_ = dVar1 * dVar3;
            local_398._12_4_ = (int)((ulonglong)(dVar4 * dVar6) >> 0x20);
            local_388._8_4_ = SUB84(dVar5,0);
            local_388._0_8_ = dVar2 * dVar8;
            local_388._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            _local_3c8 = auVar38;
          }
          lVar13 = FUN_144b2ab1c(param_2,local_378);
          if (lVar13 == 0) {
            lVar13 = FUN_1493d9c9d(param_2);
            *(double *)(lVar13 + 0x28) = local_378;
            FUN_147d503b2(param_2,lVar13);
          }
          *(undefined8 *)(lVar13 + 0x30) = local_3b8._0_8_;
          *(undefined8 *)(lVar13 + 0x38) = local_3b8._8_8_;
          *(undefined8 *)(lVar13 + 0x40) = local_3a8._0_8_;
          local_178 = (double)local_3d8._0_8_;
          dStack_170 = (double)local_3d8._8_8_;
          local_168 = (double)local_3c8._0_8_;
          uStack_160 = stack0xfffffffffffffc40;
          FUN_1448052ee(&local_178,&local_1f8);
          *(double *)(lVar13 + 0x58) = local_1e8;
          *(double *)(lVar13 + 0x48) = local_1f8;
          *(double *)(lVar13 + 0x50) = dStack_1f0;
          *(undefined8 *)(lVar13 + 0x60) = local_398._0_8_;
          *(undefined8 *)(lVar13 + 0x68) = local_398._8_8_;
          *(undefined8 *)(lVar13 + 0x70) = local_388._0_8_;
          if (local_370 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + -0x10;
    } while (lVar23 != 0);
  }
  uVar16 = 0;
  do {
    iVar12 = *(int *)(param_2 + 0x1b8);
    if (iVar12 <= (int)uVar16) break;
    lVar17 = *(longlong *)(param_2 + 0x1b0);
    if (local_2c8[0]._8_4_ != local_294) {
      lVar23 = *(longlong *)(*(longlong *)(lVar17 + (ulonglong)uVar16 * 8) + 0x28);
      uVar24 = (uint)((ulonglong)lVar23 >> 0x10);
      uVar21 = (uint)lVar23 & 0xffff;
      puVar20 = local_288;
      if (local_288 == (undefined1 *)0x0) {
        puVar20 = local_290;
      }
      iVar22 = *(int *)(puVar20 +
                       (ulonglong)
                       (local_280 - 1U &
                       (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar21) +
                       (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar21 >> 4)) * 4);
      if (iVar22 != -1) {
        do {
          uVar24 = uVar16;
          if (*(longlong *)(local_2c8[0]._0_8_ + (longlong)iVar22 * 0x10) == lVar23)
          goto LAB_1493d74fb;
          iVar22 = *(int *)((longlong)iVar22 * 0x10 + local_2c8[0]._0_8_ + 8);
        } while (iVar22 != -1);
      }
    }
    if (~uVar16 + iVar12 != 0) {
      _Dst = (void *)(lVar17 + (ulonglong)uVar16 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar16 + iVar12) << 3);
      iVar12 = *(int *)(param_2 + 0x1b8);
    }
    *(int *)(param_2 + 0x1b8) = iVar12 + -1;
    FUN_1493e38ea((longlong *)(param_2 + 0x1b0));
    uVar24 = uVar16 - 1;
LAB_1493d74fb:
    uVar16 = uVar24 + 1;
  } while (-2 < (int)uVar24);
  local_280 = 0;
  if (local_288 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(local_2c8);
  FUN_1447a1747(local_2f8._0_8_,local_2f8._8_4_);
  if (local_2f8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493d7834 FUN_1493d7834 body=623 status=ok
// SIG undefined FUN_1493d7834(void)

bool FUN_1493d7834(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146fa21b4(lVar7 + 0x20,&local_78,DAT_14c99c0d0);
  iVar1 = *(int *)(local_78 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x38) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x3c) < iVar2 + 1U) {
      FUN_1474ba6a4((longlong *)(param_2 + 0x30),iVar2);
    }
    lVar10 = *(longlong *)(param_2 + 0x30);
    lVar7 = lVar10 + (longlong)iVar2 * 0x100;
    FUN_143607b78(lVar7);
    lVar10 = (longlong)iVar2 * 0x100 + lVar10;
    uVar3 = *(uint *)(local_78 + 0x10);
    iVar2 = *(int *)(lVar10 + 0x38);
    *(uint *)(lVar10 + 0x38) = iVar2 + uVar3;
    if ((uint)(*(int *)(lVar10 + 0x3c) - iVar2) < uVar3) {
      FUN_1403e3958();
    }
    if (0 < *(int *)(local_78 + 0x10)) {
      lVar6 = 0x10;
      lVar8 = 0;
      do {
        plVar9 = (longlong *)(local_78 + 0x18);
        if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_78 + 0x30);
        }
        lVar4 = *plVar9;
        lVar11 = (longlong)((int)plVar9[2] * (int)lVar8);
        dVar13 = (double)*(float *)(lVar4 + lVar11 * 0xc) * DAT_14c8464c0;
        dVar14 = (double)*(float *)(lVar4 + 4 + lVar11 * 0xc) * DAT_14c8464c8;
        dVar12 = (double)*(float *)(lVar4 + 8 + lVar11 * 0xc) * DAT_14c8464d0;
        dVar15 = dVar14 * DAT_14c846480 - dVar13 * DAT_14c846488;
        dVar16 = dVar12 * DAT_14c846488 - dVar14 * DAT_14c846490;
        dVar17 = dVar13 * DAT_14c846490 - DAT_14c846480 * dVar12;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar17 + dVar17;
        dVar15 = dVar15 + dVar15;
        dVar14 = (DAT_14c846490 * dVar16 - DAT_14c846480 * dVar15) + DAT_14c846498 * dVar17 + dVar14
                 + DAT_14c8464a8;
        dVar12 = dVar15 * DAT_14c846498 + dVar12 + (dVar17 * DAT_14c846480 - dVar16 * DAT_14c846488)
                 + DAT_14c8464b0;
        lVar4 = *(longlong *)(lVar10 + 0x30);
        auVar5._8_4_ = SUB84(dVar14,0);
        auVar5._0_8_ = (dVar15 * DAT_14c846488 - dVar17 * DAT_14c846490) +
                       DAT_14c846498 * dVar16 + dVar13 + DAT_14c8464a0;
        auVar5._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(lVar4 + -0x10 + lVar6) = auVar5;
        *(double *)(lVar4 + lVar6) = dVar12;
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 0x18;
      } while (lVar8 < *(int *)(local_78 + 0x10));
    }
    FUN_1479b2c20(lVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493d7aa4 FUN_1493d7aa4 body=4268 status=ok
// SIG undefined FUN_1493d7aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1493d7aa4(longlong param_1,double *param_2,longlong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  undefined1 auStack_3b8 [32];
  double local_398;
  undefined8 local_390;
  undefined1 local_388 [16];
  undefined1 local_378 [24];
  longlong local_360;
  longlong *local_358;
  double local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined **local_2d8;
  longlong lStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  int iStack_264;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  longlong local_200;
  longlong local_1f8;
  int local_1f0;
  float *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  int local_1b8 [4];
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined **local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_378._0_16_ = ZEXT816(0);
  local_1e8 = (float *)0x0;
  uStack_1e0 = 0;
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar16 == 0) {
    lVar16 = *(longlong *)(param_1 + 0x70);
  }
  local_360 = param_3;
  FUN_1493e15b0(lVar16 + 0x20,&local_1f8,DAT_14c99c100);
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar16 == 0) {
    lVar16 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146fa21b4(lVar16 + 0x20,&local_200,DAT_14c99c0d0);
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar16 == 0) {
    lVar16 = *(longlong *)(param_1 + 0x70);
  }
  local_178 = (undefined **)0x100000000;
  dStack_170 = (double)lVar16;
  local_168 = 2.12199579047121e-314;
  uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
  if (*(int *)(lVar16 + 0x18) == 0) {
    iVar21 = 0;
  }
  else {
    FUN_1449c0562(&local_178);
    iVar21 = *(int *)(lVar16 + 0x18);
  }
  uStack_268 = SUB84(local_168,0);
  iStack_264 = (int)((ulonglong)local_168 >> 0x20);
  uStack_260 = uStack_160;
  local_278 = local_178;
  uStack_270 = SUB84(dStack_170,0);
  uStack_26c = (undefined4)((ulonglong)dStack_170 >> 0x20);
  dVar43 = 0.0;
  local_388 = ZEXT816(0);
  uVar41 = 0;
  uVar42 = 0;
  if (dStack_170 != (double)lVar16 || iStack_264 != iVar21) {
    plVar11 = (longlong *)(local_1f8 + 0x18);
    local_388 = ZEXT816(0);
    local_390 = 0;
    local_378._0_16_ = ZEXT816(0);
    dVar12 = dStack_170;
    dVar43 = 0.0;
    local_358 = plVar11;
    do {
      uVar17 = uStack_1e0;
      iVar9 = iStack_264;
      if (*(int *)((longlong)dVar12 + 0x18) <= iStack_264) {
        iVar9 = -1;
      }
      plVar19 = *(longlong **)(local_1f8 + 0x30);
      if (*(longlong **)(local_1f8 + 0x30) == (longlong *)0x0) {
        plVar19 = plVar11;
      }
      if (local_1f0 == 0) {
        plVar19 = (longlong *)((longlong)(iVar9 >> 8) * 0xc18 + *plVar19);
        iVar9 = *(int *)((longlong)plVar19 + (ulonglong)(byte)iVar9 * 4 + 0x10);
      }
      else {
        iVar9 = iVar9 * (int)plVar19[2];
      }
      lVar14 = *plVar19;
      lVar22 = (longlong)iVar9;
      plVar19 = (longlong *)(local_200 + 0x18);
      if (*(longlong **)(local_200 + 0x30) != (longlong *)0x0) {
        plVar19 = *(longlong **)(local_200 + 0x30);
      }
      iVar9 = (int)plVar19[2];
      lVar23 = *plVar19;
      lVar15 = (longlong)(*(int *)(lVar14 + lVar22 * 4) * iVar9);
      lVar18 = (longlong)(*(int *)(lVar14 + 4 + lVar22 * 4) * iVar9);
      lVar13 = (longlong)(iVar9 * *(int *)(lVar14 + 8 + lVar22 * 4));
      fVar47 = *(float *)(lVar23 + 8 + lVar15 * 0xc);
      fVar33 = *(float *)(lVar23 + 8 + lVar13 * 0xc) - fVar47;
      fVar2 = *(float *)(lVar23 + lVar15 * 0xc);
      fVar3 = *(float *)(lVar23 + 4 + lVar15 * 0xc);
      fVar35 = *(float *)(lVar23 + 4 + lVar13 * 0xc) - fVar3;
      fVar34 = *(float *)(lVar23 + lVar13 * 0xc) - fVar2;
      fVar36 = *(float *)(lVar23 + 8 + lVar18 * 0xc) - fVar47;
      fVar27 = *(float *)(lVar23 + 4 + lVar18 * 0xc) - fVar3;
      fVar31 = *(float *)(lVar23 + lVar18 * 0xc) - fVar2;
      fVar32 = fVar31 * fVar35 - fVar34 * fVar27;
      fVar31 = fVar36 * fVar34 - fVar33 * fVar31;
      fVar27 = fVar27 * fVar33 - fVar36 * fVar35;
      fVar33 = fVar32 * fVar32 + fVar27 * fVar27 + fVar31 * fVar31;
      if (((fVar33 != 1.0) || (fVar34 = fVar32, fVar35 = fVar31, fVar36 = fVar27, NAN(fVar33))) &&
         (fVar34 = DAT_14c846338, fVar35 = DAT_14c846330._4_4_, fVar36 = (float)DAT_14c846330,
         1e-08 <= fVar33)) {
        fVar33 = 1.0 / SQRT(fVar33);
        fVar34 = fVar32 * fVar33;
        fVar35 = fVar31 * fVar33;
        fVar36 = fVar27 * fVar33;
      }
      dVar5 = (double)fVar36 * param_2[8];
      dVar45 = (double)fVar35 * param_2[9];
      dVar28 = (double)fVar34 * param_2[10];
      dVar46 = *param_2;
      dVar40 = param_2[1];
      dVar7 = param_2[2];
      dVar12 = param_2[3];
      dVar39 = dVar45 * dVar46 - dVar5 * dVar40;
      dVar44 = dVar28 * dVar40 - dVar45 * dVar7;
      dVar37 = dVar5 * dVar7 - dVar46 * dVar28;
      dVar44 = dVar44 + dVar44;
      dVar37 = dVar37 + dVar37;
      dVar39 = dVar39 + dVar39;
      fVar27 = (float)(dVar39 * dVar12 + dVar28 + (dVar37 * dVar46 - dVar44 * dVar40));
      fVar31 = (float)((dVar39 * dVar40 - dVar37 * dVar7) + dVar12 * dVar44 + dVar5);
      fVar32 = (float)((dVar7 * dVar44 - dVar46 * dVar39) + param_2[3] * dVar37 + dVar45);
      if (((0.0001 < ABS(fVar31)) || (0.0001 < ABS(fVar32))) || (0.0001 < ABS(fVar27))) {
        lVar23 = (longlong)(int)uStack_1e0;
        local_350 = dVar43;
        if (0 < lVar23) {
          lVar13 = 0;
          do {
            fVar33 = *(float *)((longlong)local_1e8 + lVar13 + 4);
            fVar34 = *(float *)((longlong)local_1e8 + lVar13 + 8);
            if (ABS(ABS(fVar27 * fVar34 +
                        fVar31 * *(float *)((longlong)local_1e8 + lVar13) + fVar33 * fVar32) + -1.0)
                < 0.001) {
              fVar47 = fVar47 * fVar34 +
                       fVar2 * *(float *)((longlong)local_1e8 + lVar13) + fVar3 * fVar33;
              iVar9 = *(int *)((longlong)local_1e8 + lVar13 + 0xc);
              if (iVar9 != 2) {
                if ((iVar9 == 1) &&
                   (0.001 <= ABS(fVar47 - *(float *)((longlong)local_1e8 + lVar13 + 0x10)))) {
                  *(float *)((longlong)local_1e8 + lVar13 + 0x14) = fVar47;
                  *(undefined4 *)((longlong)local_1e8 + lVar13 + 0xc) = 2;
                }
                goto LAB_1493d7fc2;
              }
              if ((ABS(fVar47 - *(float *)((longlong)local_1e8 + lVar13 + 0x10)) < 0.001) ||
                 (ABS(fVar47 - *(float *)((longlong)local_1e8 + lVar13 + 0x14)) < 0.001))
              goto LAB_1493d7fc2;
              goto LAB_1493d8ab5;
            }
            lVar13 = lVar13 + 0x18;
          } while (lVar23 * 0x18 != lVar13);
        }
        uVar10 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar10);
        if (uStack_1e0._4_4_ < uVar10) {
          FUN_144506216(&local_1e8,uVar17 & 0xffffffff);
        }
        local_1e8[lVar23 * 6] = fVar31;
        local_1e8[lVar23 * 6 + 1] = fVar32;
        local_1e8[lVar23 * 6 + 2] = fVar27;
        local_1e8[lVar23 * 6 + 3] = 1.4013e-45;
        local_1e8[lVar23 * 6 + 4] = fVar47 * fVar27 + fVar2 * fVar31 + fVar3 * fVar32;
        local_1e8[lVar23 * 6 + 5] = 0.0;
LAB_1493d7fc2:
        plVar11 = (longlong *)(local_200 + 0x18);
        if (*(longlong **)(local_200 + 0x30) != (longlong *)0x0) {
          plVar11 = *(longlong **)(local_200 + 0x30);
        }
        iVar9 = (int)plVar11[2];
        lVar23 = *plVar11;
        lVar13 = (longlong)(*(int *)(lVar14 + lVar22 * 4) * iVar9);
        local_2e8 = param_2[8];
        dStack_2e0 = param_2[9];
        dVar44 = (double)*(float *)(lVar23 + lVar13 * 0xc) * local_2e8;
        dVar46 = (double)*(float *)(lVar23 + 4 + lVar13 * 0xc) * dStack_2e0;
        local_308 = param_2[10];
        dStack_300 = param_2[0xb];
        dVar40 = (double)*(float *)(lVar23 + 8 + lVar13 * 0xc) * local_308;
        dVar7 = *param_2;
        dVar28 = *(double *)*(undefined1 (*) [12])(param_2 + 1);
        auVar4 = *(undefined1 (*) [16])(param_2 + 2);
        auVar8 = *(undefined1 (*) [12])(param_2 + 1);
        dVar5 = auVar4._0_8_;
        local_328 = param_2[4];
        dStack_320 = param_2[5];
        local_318 = param_2[6];
        dStack_310 = param_2[7];
        dVar12 = param_2[3];
        dVar43 = param_2[3];
        dVar45 = dVar46 * dVar7 - dVar44 * dVar28;
        dVar39 = dVar40 * dVar28 - dVar46 * dVar5;
        local_2f8._8_4_ = auVar4._8_4_;
        local_2f8._0_8_ = dVar7;
        local_2f8._12_4_ = auVar4._12_4_;
        dVar37 = dVar44 * dVar5 - dVar40 * dVar7;
        dVar39 = dVar39 + dVar39;
        dVar37 = dVar37 + dVar37;
        dVar45 = dVar45 + dVar45;
        auVar4._12_4_ = auVar4._4_4_;
        auVar4._0_12_ = auVar8;
        local_338._8_4_ = SUB84(dVar43,0);
        local_338._0_8_ = dVar12;
        local_338._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        dVar44 = (dVar45 * dVar28 - dVar37 * dVar5) + dVar12 * dVar39 + dVar44 + local_328;
        dVar46 = (dVar5 * dVar39 - dVar7 * dVar45) + dVar43 * dVar37 + dVar46 + dStack_320;
        dVar45 = dVar45 * dVar12 + dVar40 + (dVar37 * dVar7 - dVar39 * dVar28) + local_318;
        local_398 = dVar45;
        dVar39 = dVar44;
        dVar43 = dVar45;
        dVar40 = dVar46;
        dVar37 = dVar44;
        if ((char)local_390 != '\0') {
          dVar37 = (double)local_388._0_8_;
          if (dVar44 <= (double)local_388._0_8_) {
            dVar37 = dVar44;
          }
          dVar39 = (double)local_378._0_8_;
          if ((double)local_378._0_8_ <= dVar44) {
            dVar39 = dVar44;
          }
          dVar40 = (double)local_388._8_8_;
          if (dVar46 <= (double)local_388._8_8_) {
            dVar40 = dVar46;
          }
          local_398 = (double)CONCAT44(uVar42,uVar41);
          if (dVar45 <= (double)CONCAT44(uVar42,uVar41)) {
            local_398 = dVar45;
          }
          if ((double)local_378._8_8_ <= dVar46) {
            local_378._8_8_ = dVar46;
          }
          dVar46 = (double)local_378._8_8_;
          dVar43 = local_350;
          if (local_350 <= dVar45) {
            dVar43 = dVar45;
          }
        }
        lVar13 = (longlong)(*(int *)(lVar14 + 4 + lVar22 * 4) * iVar9);
        dVar29 = (double)*(float *)(lVar23 + lVar13 * 0xc) * local_2e8;
        dVar30 = (double)*(float *)(lVar23 + 4 + lVar13 * 0xc) * dStack_2e0;
        dVar38 = (double)*(float *)(lVar23 + 8 + lVar13 * 0xc) * local_308;
        local_348._0_8_ = auVar8._0_8_;
        local_348._8_8_ = auVar4._8_8_;
        dVar44 = dVar30 * dVar7 - (double)local_348._0_8_ * dVar29;
        dVar6 = dVar38 * dVar28 - (double)local_348._8_8_ * dVar30;
        dVar45 = dVar29 * dVar5 - dVar7 * dVar38;
        dVar6 = dVar6 + dVar6;
        dVar45 = dVar45 + dVar45;
        dVar44 = dVar44 + dVar44;
        dVar29 = (dVar44 * dVar28 - dVar45 * (double)local_348._8_8_) + dVar12 * dVar6 + dVar29 +
                 local_328;
        dVar30 = (dVar5 * dVar6 - dVar7 * dVar44) + (double)local_338._8_8_ * dVar45 + dVar30 +
                 dStack_320;
        dVar45 = dVar44 * dVar12 + dVar38 + (dVar45 * dVar7 - dVar6 * (double)local_348._0_8_) +
                 local_318;
        if (dVar29 <= dVar37) {
          dVar37 = dVar29;
        }
        if (dVar39 <= dVar29) {
          dVar39 = dVar29;
        }
        if (dVar30 <= dVar40) {
          dVar40 = dVar30;
        }
        if (dVar45 <= local_398) {
          local_398 = dVar45;
        }
        if (dVar46 <= dVar30) {
          dVar46 = dVar30;
        }
        lVar14 = (longlong)(iVar9 * *(int *)(lVar14 + 8 + lVar22 * 4));
        if (dVar43 <= dVar45) {
          dVar43 = dVar45;
        }
        dVar45 = (double)*(float *)(lVar23 + lVar14 * 0xc) * local_2e8;
        dVar30 = (double)*(float *)(lVar23 + 4 + lVar14 * 0xc) * dStack_2e0;
        dVar38 = (double)*(float *)(lVar23 + 8 + lVar14 * 0xc) * local_308;
        dVar44 = dVar30 * dVar7 - (double)local_348._0_8_ * dVar45;
        dVar6 = dVar38 * dVar28 - (double)local_348._8_8_ * dVar30;
        dVar29 = dVar45 * dVar5 - dVar7 * dVar38;
        dVar6 = dVar6 + dVar6;
        dVar29 = dVar29 + dVar29;
        dVar44 = dVar44 + dVar44;
        dVar45 = (dVar44 * dVar28 - dVar29 * (double)local_348._8_8_) + dVar12 * dVar6 + dVar45 +
                 local_328;
        dVar5 = (dVar5 * dVar6 - dVar7 * dVar44) + (double)local_338._8_8_ * dVar29 + dVar30 +
                dStack_320;
        dVar12 = dVar44 * dVar12 + dVar38 + (dVar29 * dVar7 - dVar6 * (double)local_348._0_8_) +
                 local_318;
        if (dVar45 <= dVar37) {
          dVar37 = dVar45;
        }
        if (dVar39 <= dVar45) {
          dVar39 = dVar45;
        }
        if (dVar5 <= dVar40) {
          dVar40 = dVar5;
        }
        local_388._8_4_ = SUB84(dVar40,0);
        local_388._0_8_ = dVar37;
        local_388._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        if (dVar46 <= dVar5) {
          dVar46 = dVar5;
        }
        local_378._8_4_ = SUB84(dVar46,0);
        local_378._0_8_ = dVar39;
        local_378._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        uVar41 = SUB84(local_398,0);
        uVar42 = (undefined4)((ulonglong)local_398 >> 0x20);
        if (dVar12 <= local_398) {
          uVar41 = SUB84(dVar12,0);
          uVar42 = (undefined4)((ulonglong)dVar12 >> 0x20);
        }
        if (dVar43 <= dVar12) {
          dVar43 = dVar12;
        }
        local_390 = CONCAT71((int7)((ulonglong)lVar23 >> 8),1);
        plVar11 = local_358;
        local_348 = auVar4;
      }
      uStack_268 = uStack_268 & ~local_278._4_4_;
      FUN_1449c0562(&local_278);
      dVar12 = (double)CONCAT44(uStack_26c,uStack_270);
    } while (dVar12 != (double)lVar16 || iStack_264 != iVar21);
  }
  lVar16 = uStack_260;
  if (((((int)uStack_1e0 != 3) || (local_1e8[3] != 2.8026e-45)) || (local_1e8[9] != 2.8026e-45)) ||
     ((local_1e8[0xf] != 2.8026e-45 ||
      (0.001 <= ABS(ABS((*local_1e8 * local_1e8[7] - local_1e8[6] * local_1e8[1]) * local_1e8[0xe] +
                        (local_1e8[1] * local_1e8[8] - local_1e8[7] * local_1e8[2]) * local_1e8[0xc]
                        + (local_1e8[6] * local_1e8[2] - *local_1e8 * local_1e8[8]) * local_1e8[0xd]
                       ) + -1.0))))) {
LAB_1493d8ab5:
    uVar17 = 0;
  }
  else {
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    iStack_264 = 1;
    uStack_260._0_1_ = (byte)uStack_260 | 1;
    uStack_260._2_6_ = SUB86(lVar16,2);
    uStack_260._0_2_ = CONCAT11(3,(byte)uStack_260);
    local_258 = 6;
    local_278 = &PTR_FUN_14a1e3c70;
    local_248 = DAT_14c8464e0;
    uStack_240 = DAT_14c8464e8;
    local_238 = DAT_14c8464f0;
    uStack_230 = DAT_14c8464f8;
    uStack_228 = DAT_14c846500;
    uStack_220 = (undefined4)DAT_14c846508;
    uStack_21c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
    fStack_218 = 1.0;
    fStack_214 = 1.0;
    local_210 = 1.0;
    local_1a0 = DAT_14c846384;
    local_1a8 = _DAT_14c84637c;
    local_19c = DAT_14c846370;
    local_194 = DAT_14c846378;
    local_190 = DAT_14c846364;
    local_188 = DAT_14c84636c;
    local_1b8[2] = -1;
    local_1b8[0] = -1;
    local_1b8[1] = -1;
    lVar16 = 0;
    do {
      lVar14 = 0;
      pfVar20 = &local_1a0;
      do {
        if (ABS(ABS(*pfVar20 * local_1e8[lVar16 * 6 + 2] +
                    pfVar20[-2] * local_1e8[lVar16 * 6] + pfVar20[-1] * local_1e8[lVar16 * 6 + 1]) +
                -1.0) < 0.001) {
          local_1b8[lVar16] = (int)lVar14;
          break;
        }
        lVar14 = lVar14 + 1;
        pfVar20 = pfVar20 + 3;
      } while (lVar14 != 3);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    bVar24 = (longlong)local_1b8[0] != -1;
    bVar25 = (longlong)local_1b8[1] != -1;
    bVar26 = (longlong)local_1b8[2] != -1;
    local_108 = (dVar43 + (double)CONCAT44(uVar42,uVar41)) * 0.5;
    local_110 = ((double)local_378._8_8_ + (double)local_388._8_8_) * 0.5;
    lVar16 = 2;
    if (bVar26 && (bVar25 && bVar24)) {
      lVar16 = (longlong)local_1b8[2];
    }
    local_118 = ((double)local_378._0_8_ + (double)local_388._0_8_) * 0.5;
    lVar14 = 1;
    if (bVar26 && (bVar25 && bVar24)) {
      lVar14 = (longlong)local_1b8[1];
    }
    lVar22 = (longlong)local_1b8[0];
    if (!bVar26 || (!bVar25 || !bVar24)) {
      lVar22 = 0;
    }
    local_128 = (double)local_1e8[lVar16 * 6 + 2];
    local_130 = (double)local_1e8[lVar16 * 6 + 1];
    local_138 = (double)local_1e8[lVar16 * 6];
    local_148 = (double)local_1e8[lVar14 * 6 + 2];
    local_150 = (double)local_1e8[lVar14 * 6 + 1];
    local_158 = (double)local_1e8[lVar14 * 6];
    local_168 = (double)local_1e8[lVar22 * 6 + 2];
    dStack_170 = (double)local_1e8[lVar22 * 6 + 1];
    local_178 = (undefined **)(double)local_1e8[lVar22 * 6];
    uStack_160 = 0;
    local_140 = 0;
    local_120 = 0;
    local_100 = 0x3ff0000000000000;
    local_250 = &local_278;
    FUN_1448ac920(&local_2d8,&local_178);
    local_178 = local_2d8;
    dStack_170 = (double)lStack_2d0;
    local_168 = (double)CONCAT44(uStack_2c4,local_2c8);
    uStack_160 = CONCAT44(uStack_2bc,uStack_2c0);
    FUN_1448052ee(&local_178,&local_1d0);
    uStack_220 = (undefined4)local_1c0;
    uStack_21c = (undefined4)((ulonglong)local_1c0 >> 0x20);
    uStack_230 = local_1d0;
    uStack_228 = uStack_1c8;
    local_248 = local_2b8;
    uStack_240 = uStack_2b0;
    local_238 = local_2a8;
    fStack_218 = ABS(local_1e8[lVar22 * 6 + 4] - local_1e8[lVar22 * 6 + 5]);
    fStack_214 = ABS(local_1e8[lVar14 * 6 + 4] - local_1e8[lVar14 * 6 + 5]);
    local_210 = ABS(local_1e8[lVar16 * 6 + 4] - local_1e8[lVar16 * 6 + 5]);
    plVar11 = (longlong *)(local_360 + 0x10);
    iVar21 = *(int *)(local_360 + 0x18);
    *(uint *)(local_360 + 0x18) = iVar21 + 1U;
    if (*(uint *)(local_360 + 0x1c) < iVar21 + 1U) {
      FUN_140c9d5a2(plVar11,iVar21);
    }
    lVar16 = *plVar11;
    lVar14 = (longlong)iVar21 * 0x70;
    *(undefined ***)(lVar16 + lVar14) = &PTR_FUN_14a1dee50;
    *(undefined4 *)(lVar16 + 8 + lVar14) = uStack_270;
    *(ulonglong *)(lVar16 + 0xc + lVar14) = CONCAT44(uStack_268,uStack_26c);
    *(int *)(lVar16 + 0x14 + lVar14) = iStack_264;
    *(byte *)(lVar16 + 0x18 + lVar14) =
         *(byte *)(lVar16 + 0x18 + lVar14) & 0xfe | (byte)uStack_260 & 1;
    *(undefined1 *)(lVar16 + 0x19 + lVar14) = uStack_260._1_1_;
    *(undefined4 *)(lVar16 + 0x20 + lVar14) = 6;
    *(longlong *)(lVar16 + 0x28 + lVar14) = lVar16 + lVar14;
    *(undefined ***)(lVar16 + lVar14) = &PTR_FUN_14a1e3c70;
    puVar1 = (undefined8 *)(lVar16 + 0x5c + lVar14);
    *puVar1 = CONCAT44(fStack_218,uStack_21c);
    puVar1[1] = CONCAT44(local_210,fStack_214);
    puVar1 = (undefined8 *)(lVar16 + 0x50 + lVar14);
    *puVar1 = uStack_228;
    puVar1[1] = CONCAT44(uStack_21c,uStack_220);
    puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar14);
    *puVar1 = local_238;
    puVar1[1] = uStack_230;
    puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar14);
    *puVar1 = local_248;
    puVar1[1] = uStack_240;
    uVar17 = CONCAT71((int7)((ulonglong)&local_278 >> 8),1);
  }
  if (local_1e8 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1493d8b52 FUN_1493d8b52 body=1852 status=ok
// SIG undefined FUN_1493d8b52(void)

undefined8 FUN_1493d8b52(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
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
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined1 auStack_198 [44];
  float local_16c;
  undefined1 local_168 [16];
  undefined8 local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined **local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  byte local_110;
  undefined1 local_10f;
  undefined4 local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  float local_e0;
  longlong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146fa21b4(lVar14 + 0x20,&local_d8,DAT_14c99c0d0);
  lVar14 = (longlong)*(int *)(local_d8 + 0x10);
  if (lVar14 != 0) {
    if (local_d8 == 0) {
      dVar6 = 0.0;
      dVar4 = 0.0;
      dVar26 = 0.0;
      dVar10 = 0.0;
      dVar11 = 0.0;
      dVar22 = 0.0;
      dVar7 = 0.0;
    }
    else {
      plVar16 = (longlong *)(local_d8 + 0x18);
      if (*(longlong **)(local_d8 + 0x30) != (longlong *)0x0) {
        plVar16 = *(longlong **)(local_d8 + 0x30);
      }
      lVar17 = *plVar16;
      local_168._8_8_ = DAT_14c8464c8;
      local_168._0_8_ = DAT_14c8464c0;
      local_158 = DAT_14c8464d0;
      dStack_150 = dRam000000014c8464d8;
      local_148 = DAT_14c8464a0;
      dStack_140 = DAT_14c8464a8;
      bVar19 = true;
      lVar18 = 0;
      dVar24 = 0.0;
      dVar5 = 0.0;
      dVar8 = 0.0;
      dVar23 = 0.0;
      dVar12 = 0.0;
      dVar27 = 0.0;
      dVar13 = 0.0;
      do {
        dVar4 = (double)*(float *)(lVar17 + lVar18) * DAT_14c8464c0;
        dVar26 = (double)*(float *)(lVar17 + 4 + lVar18) * DAT_14c8464c8;
        dVar22 = (double)*(float *)(lVar17 + 8 + lVar18) * DAT_14c8464d0;
        dVar10 = dVar26 * DAT_14c846480 - DAT_14c846488 * dVar4;
        dVar11 = dVar22 * DAT_14c846488 - DAT_14c846490 * dVar26;
        dVar6 = dVar4 * DAT_14c846490 - DAT_14c846480 * dVar22;
        dVar7 = dRam000000014c8464d8 * 0.0 * DAT_14c846498 -
                DAT_14c846498 * dRam000000014c8464d8 * 0.0;
        dVar11 = dVar11 + dVar11;
        dVar6 = dVar6 + dVar6;
        dVar10 = dVar10 + dVar10;
        dVar7 = dVar7 + dVar7;
        dVar4 = (dVar10 * DAT_14c846488 - dVar6 * DAT_14c846490) + DAT_14c846498 * dVar11 + dVar4 +
                DAT_14c8464a0;
        dVar26 = (DAT_14c846490 * dVar11 - DAT_14c846480 * dVar10) + DAT_14c846498 * dVar6 + dVar26
                 + DAT_14c8464a8;
        dVar9 = dVar10 * DAT_14c846498 + dVar22 + (dVar6 * DAT_14c846480 - dVar11 * DAT_14c846488) +
                DAT_14c8464b0;
        dVar10 = dVar4;
        dVar11 = dVar26;
        dVar22 = dVar9;
        dVar6 = dVar9;
        if (!bVar19) {
          if (dVar4 <= dVar23) {
            dVar23 = dVar4;
          }
          if (dVar24 <= dVar4) {
            dVar24 = dVar4;
          }
          dVar4 = dVar24;
          if (dVar26 <= dVar12) {
            dVar12 = dVar26;
          }
          if (dVar9 <= dVar27) {
            dVar27 = dVar9;
          }
          if (dVar5 <= dVar26) {
            dVar5 = dVar26;
          }
          dVar26 = dVar5;
          dVar7 = dVar8;
          dVar10 = dVar23;
          dVar11 = dVar12;
          dVar22 = dVar27;
          dVar6 = dVar13;
          if (dVar13 <= dVar9) {
            dVar6 = dVar9;
          }
        }
        lVar18 = lVar18 + 0xc;
        bVar19 = false;
        dVar24 = dVar4;
        dVar5 = dVar26;
        dVar8 = dVar7;
        dVar23 = dVar10;
        dVar12 = dVar11;
        dVar27 = dVar22;
        dVar13 = dVar6;
      } while (lVar14 * 0xc != lVar18);
    }
    dVar6 = (dVar6 - dVar22) * 0.5;
    dVar24 = (dVar26 - dVar11) * 0.5;
    dVar4 = (dVar4 - dVar10) * 0.5;
    dVar26 = dVar4;
    if (dVar4 <= dVar24) {
      dVar26 = dVar24;
    }
    if (dVar26 <= dVar6) {
      dVar26 = dVar6;
    }
    fVar28 = (float)(dVar26 + dVar26);
    dVar26 = dVar4;
    if (dVar24 <= dVar4) {
      dVar26 = dVar24;
    }
    if (dVar6 <= dVar26) {
      dVar26 = dVar6;
    }
    if ((fVar28 - (float)(dVar26 + dVar26)) / fVar28 <= 0.05) {
      local_168._8_4_ = SUB84(dVar7,0);
      local_168._0_8_ = dVar22 + dVar6;
      local_168._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_158 = dVar11 + dVar24;
      dVar4 = dVar4 + dVar10;
      if (local_d8 == 0) {
        fVar21 = 3.4e+38;
        fVar20 = 0.0;
      }
      else {
        plVar16 = (longlong *)(local_d8 + 0x18);
        if (*(longlong **)(local_d8 + 0x30) != (longlong *)0x0) {
          plVar16 = *(longlong **)(local_d8 + 0x30);
        }
        lVar17 = *plVar16;
        local_148 = DAT_14c8464c0;
        dStack_140 = DAT_14c8464c8;
        local_138 = DAT_14c8464d0;
        dStack_130 = dRam000000014c8464d8;
        auVar25._0_12_ = ZEXT812(0x7f7fc99e);
        auVar25._12_4_ = 0;
        lVar18 = 0;
        fVar30 = 0.0;
        do {
          dVar8 = (double)*(float *)(lVar17 + lVar18) * DAT_14c8464c0;
          dVar27 = (double)*(float *)(lVar17 + 4 + lVar18) * DAT_14c8464c8;
          dVar26 = (double)*(float *)(lVar17 + 8 + lVar18) * DAT_14c8464d0;
          dVar7 = dVar27 * DAT_14c846480 - DAT_14c846488 * dVar8;
          dVar5 = dVar26 * DAT_14c846488 - DAT_14c846490 * dVar27;
          dVar10 = dVar8 * DAT_14c846490 - DAT_14c846480 * dVar26;
          dVar24 = dRam000000014c8464d8 * 0.0 * DAT_14c846498 -
                   DAT_14c846498 * dRam000000014c8464d8 * 0.0;
          dVar5 = dVar5 + dVar5;
          dVar10 = dVar10 + dVar10;
          dVar7 = dVar7 + dVar7;
          dVar26 = (dVar7 * DAT_14c846498 + dVar26 +
                    (dVar10 * DAT_14c846480 - dVar5 * DAT_14c846488) + DAT_14c8464b0) -
                   (dVar22 + dVar6);
          dVar27 = ((DAT_14c846490 * dVar5 - DAT_14c846480 * dVar7) +
                    DAT_14c846498 * dVar10 + dVar27 + DAT_14c8464a8) - local_158;
          dVar7 = ((dVar7 * DAT_14c846488 - dVar10 * DAT_14c846490) + DAT_14c846498 * dVar5 + dVar8
                  + DAT_14c8464a0) - dVar4;
          dVar7 = dVar26 * dVar26 + dVar7 * dVar7 + dVar27 * dVar27;
          fVar20 = (float)dVar7;
          fVar21 = fVar20;
          uVar29 = (int)((ulonglong)dVar7 >> 0x20);
          dVar7 = dVar24 + dVar24;
          if (fVar20 <= 0.0001 || auVar25._0_4_ <= fVar20) {
            fVar21 = auVar25._0_4_;
            uVar29 = auVar25._4_4_;
            dVar7 = auVar25._8_8_;
          }
          if (fVar20 <= fVar30) {
            fVar20 = fVar30;
          }
          lVar18 = lVar18 + 0xc;
          auVar25._4_4_ = uVar29;
          auVar25._0_4_ = fVar21;
          auVar25._8_4_ = SUB84(dVar7,0);
          auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          fVar30 = fVar20;
        } while (lVar14 * 0xc != lVar18);
      }
      local_16c = fVar28;
      dStack_150 = dVar11;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      auVar25 = local_168;
      fVar28 = local_16c * 0.5;
      if (fVar21 < 0.0) {
        fVar21 = sqrtf(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
      }
      if ((fVar20 - fVar21) / fVar28 <= 0.05) {
        local_100 = &local_128;
        local_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        local_110 = local_110 | 1;
        local_10f = 3;
        local_108 = 6;
        local_128 = &PTR_FUN_14a418310;
        uStack_f0 = (undefined4)local_158;
        uStack_ec = local_158._4_4_;
        local_e8 = auVar25._0_4_;
        uStack_e4 = auVar25._4_4_;
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        local_f8 = dVar4;
        local_e0 = fVar28;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140e25fd0(param_2,iVar3);
        }
        lVar14 = *param_2;
        lVar17 = (longlong)iVar3 * 0x50;
        *(undefined ***)(lVar14 + lVar17) = &PTR_FUN_14a1dee50;
        *(undefined4 *)(lVar14 + 8 + lVar17) = local_120;
        *(ulonglong *)(lVar14 + 0xc + lVar17) = CONCAT44(uStack_118,uStack_11c);
        *(undefined4 *)(lVar14 + 0x14 + lVar17) = uStack_114;
        *(byte *)(lVar14 + 0x18 + lVar17) = *(byte *)(lVar14 + 0x18 + lVar17) & 0xfe | local_110 & 1
        ;
        *(undefined1 *)(lVar14 + 0x19 + lVar17) = local_10f;
        *(undefined4 *)(lVar14 + 0x20 + lVar17) = 6;
        *(longlong *)(lVar14 + 0x28 + lVar17) = lVar14 + lVar17;
        *(undefined ***)(lVar14 + lVar17) = &PTR_FUN_14a418310;
        puVar1 = (undefined4 *)(lVar14 + 0x30 + lVar17);
        *puVar1 = (undefined4)local_f8;
        puVar1[1] = local_f8._4_4_;
        puVar1[2] = uStack_f0;
        puVar1[3] = uStack_ec;
        puVar2 = (undefined8 *)(lVar14 + 0x3c + lVar17);
        *puVar2 = CONCAT44(local_e8,uStack_ec);
        puVar2[1] = CONCAT44(local_e0,uStack_e4);
        uVar15 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
        goto LAB_1493d8e89;
      }
    }
  }
  uVar15 = 0;
LAB_1493d8e89:
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1493d9290 FUN_1493d9290 body=2319 status=ok
// SIG undefined FUN_1493d9290(void)

undefined8 FUN_1493d9290(longlong param_1,longlong param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_248 [32];
  double local_228;
  double local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [40];
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte local_180;
  undefined1 local_17f;
  undefined4 local_178;
  undefined ***local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146fa21b4(lVar9 + 0x20,&local_e8,DAT_14c99c0d0);
  iVar12 = *(int *)(local_e8 + 0x10);
  uStack_188 = (double)CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
  uStack_190 = (double)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190);
  if (1 < (longlong)iVar12) {
    local_1e8 = DAT_14c8464c0;
    dStack_1e0 = DAT_14c8464c8;
    local_1f8 = DAT_14c8464d0;
    uStack_1f0 = uRam000000014c8464d8;
    plVar7 = (longlong *)(local_e8 + 0x18);
    if (*(longlong **)(local_e8 + 0x30) != (longlong *)0x0) {
      plVar7 = *(longlong **)(local_e8 + 0x30);
    }
    iVar3 = (int)plVar7[2];
    lVar9 = *plVar7;
    fVar24 = 0.0;
    lVar14 = 1;
    local_220 = DAT_14c8464f0;
    local_228 = DAT_14c8464f0;
    local_208._8_8_ = DAT_14c8464e8;
    local_208._0_8_ = DAT_14c8464e0;
    local_218._8_8_ = DAT_14c8464e8;
    local_218._0_8_ = DAT_14c8464e0;
    uVar13 = 0;
    iVar15 = iVar3;
    do {
      lVar11 = (longlong)(iVar3 * (int)uVar13);
      dVar4 = (double)*(float *)(lVar9 + lVar11 * 0xc) * DAT_14c8464c0;
      dVar23 = (double)*(float *)(lVar9 + 4 + lVar11 * 0xc) * DAT_14c8464c8;
      dVar28 = (double)*(float *)(lVar9 + 8 + lVar11 * 0xc) * DAT_14c8464d0;
      dVar19 = dVar23 * DAT_14c846480 - DAT_14c846488 * dVar4;
      dVar21 = dVar28 * DAT_14c846488 - DAT_14c846490 * dVar23;
      dVar26 = dVar4 * DAT_14c846490 - DAT_14c846480 * dVar28;
      dVar21 = dVar21 + dVar21;
      dVar26 = dVar26 + dVar26;
      dVar19 = dVar19 + dVar19;
      dVar4 = (dVar19 * DAT_14c846488 - dVar26 * DAT_14c846490) + DAT_14c846498 * dVar21 + dVar4 +
              DAT_14c8464a0;
      dVar23 = (DAT_14c846490 * dVar21 - dVar19 * DAT_14c846480) + DAT_14c846498 * dVar26 + dVar23 +
               DAT_14c8464a8;
      dVar19 = DAT_14c846498 * dVar19 + dVar28 + (dVar26 * DAT_14c846480 - dVar21 * DAT_14c846488) +
               DAT_14c8464b0;
      lVar11 = (longlong)iVar12;
      iVar10 = iVar15;
      do {
        lVar16 = (longlong)iVar10;
        dVar26 = (double)*(float *)(lVar9 + lVar16 * 0xc) * DAT_14c8464c0;
        dVar22 = (double)*(float *)(lVar9 + 4 + lVar16 * 0xc) * DAT_14c8464c8;
        dVar27 = (double)*(float *)(lVar9 + 8 + lVar16 * 0xc) * DAT_14c8464d0;
        dVar21 = dVar22 * DAT_14c846480 - DAT_14c846488 * dVar26;
        dVar29 = dVar27 * DAT_14c846488 - DAT_14c846490 * dVar22;
        dVar20 = dVar26 * DAT_14c846490 - DAT_14c846480 * dVar27;
        dVar29 = dVar29 + dVar29;
        dVar20 = dVar20 + dVar20;
        dVar21 = dVar21 + dVar21;
        dVar28 = (dVar21 * DAT_14c846488 - dVar20 * DAT_14c846490) + DAT_14c846498 * dVar29 + dVar26
                 + DAT_14c8464a0;
        dVar22 = (DAT_14c846490 * dVar29 - dVar21 * DAT_14c846480) + DAT_14c846498 * dVar20 + dVar22
                 + DAT_14c8464a8;
        dVar20 = DAT_14c846498 * dVar21 + dVar27 + (dVar20 * DAT_14c846480 - dVar29 * DAT_14c846488)
                 + DAT_14c8464b0;
        dVar21 = dVar4 - dVar28;
        dVar26 = dVar19 - dVar20;
        fVar25 = (float)(dVar26 * dVar26 + dVar21 * dVar21 + (dVar23 - dVar22) * (dVar23 - dVar22));
        if (fVar24 < fVar25) {
          local_218._8_4_ = SUB84(dVar22,0);
          local_218._0_8_ = dVar28;
          local_218._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          local_208._8_4_ = SUB84(dVar23,0);
          local_208._0_8_ = dVar4;
          local_208._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          fVar24 = fVar25;
          local_228 = dVar20;
          local_220 = dVar19;
        }
        dVar21 = local_220;
        lVar11 = lVar11 + -1;
        iVar10 = iVar10 + iVar3;
      } while (lVar14 != lVar11);
      lVar14 = lVar14 + 1;
      iVar15 = iVar15 + iVar3;
      bVar17 = uVar13 != iVar12 - 2;
      uVar13 = uVar13 + 1;
    } while (bVar17);
    uStack_188 = (double)CONCAT44(uStack_188._4_4_,(undefined4)uStack_188);
    uStack_190 = (double)CONCAT44(uStack_190._4_4_,(undefined4)uStack_190);
    if (1e-08 < fVar24) {
      uVar5 = local_208._0_8_;
      uVar6 = local_208._8_8_;
      local_108 = (double)local_208._0_8_;
      dStack_100 = (double)local_208._8_8_;
      local_f8 = local_220;
      local_118 = local_228 - local_220;
      uVar8 = local_218._8_8_;
      dStack_120 = (double)local_218._8_8_ - (double)local_208._8_8_;
      local_128 = (double)local_218._0_8_ - (double)local_208._0_8_;
      dVar19 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
      if ((dVar19 != 1.0) || (NAN(dVar19))) {
        if (9.99999993922529e-09 <= dVar19) {
          dVar19 = 1.0 / SQRT(dVar19);
          local_118 = local_118 * dVar19;
          dStack_120 = dStack_120 * dVar19;
          local_128 = local_128 * dVar19;
        }
        else {
          local_118 = DAT_14c8464f0;
          local_128 = DAT_14c8464e0;
          dStack_120 = DAT_14c8464e8;
        }
      }
      iVar12 = 0;
      fVar25 = 0.0;
      do {
        plVar7 = (longlong *)(local_e8 + 0x18);
        if (*(longlong **)(local_e8 + 0x30) != (longlong *)0x0) {
          plVar7 = *(longlong **)(local_e8 + 0x30);
        }
        lVar9 = *plVar7;
        lVar14 = (longlong)((int)plVar7[2] * iVar12);
        dVar19 = (double)*(float *)(lVar9 + lVar14 * 0xc) * DAT_14c8464c0;
        dVar4 = (double)*(float *)(lVar9 + 4 + lVar14 * 0xc) * DAT_14c8464c8;
        dVar28 = (double)*(float *)(lVar9 + 8 + lVar14 * 0xc) * DAT_14c8464d0;
        dVar26 = dVar4 * DAT_14c846480 - dVar19 * DAT_14c846488;
        dVar22 = dVar28 * DAT_14c846488 - dVar4 * DAT_14c846490;
        dVar23 = dVar19 * DAT_14c846490 - DAT_14c846480 * dVar28;
        dVar22 = dVar22 + dVar22;
        dVar23 = dVar23 + dVar23;
        dVar26 = dVar26 + dVar26;
        local_198 = (undefined **)
                    ((dVar26 * DAT_14c846488 - dVar23 * DAT_14c846490) +
                     DAT_14c846498 * dVar22 + dVar19 + DAT_14c8464a0);
        uStack_190 = (DAT_14c846490 * dVar22 - DAT_14c846480 * dVar26) +
                     DAT_14c846498 * dVar23 + dVar4 + DAT_14c8464a8;
        uStack_188 = dVar26 * DAT_14c846498 + dVar28 +
                     (dVar23 * DAT_14c846480 - dVar22 * DAT_14c846488) + DAT_14c8464b0;
        fVar18 = (float)FUN_1409661f0(&local_198,&local_128,&local_108);
        if (fVar18 <= fVar25) {
          fVar18 = fVar25;
        }
        iVar12 = iVar12 + 1;
        fVar25 = fVar18;
      } while (iVar12 < *(int *)(local_e8 + 0x10));
      if (1e-08 < fVar18) {
        uStack_190._0_4_ = 0;
        uStack_190._4_4_ = 0;
        uStack_188._0_4_ = 0;
        uStack_188._4_4_ = 2;
        local_180 = local_180 | 1;
        local_17f = 3;
        local_178 = 6;
        local_198 = &PTR_FUN_14a1dee70;
        dStack_150 = (double)DAT_14c8464f8;
        uStack_148 = DAT_14c846500;
        uStack_140 = DAT_14c846508;
        local_138 = &DAT_3f8000003f800000;
        local_158 = (local_228 + dVar21) * 0.5;
        dStack_160 = ((double)uVar8 + (double)uVar6) * 0.5;
        local_168 = ((double)local_218._0_8_ + (double)uVar5) * 0.5;
        local_170 = &local_198;
        FUN_14022d702(local_1d8,&DAT_14c8463b8,&local_128);
        FUN_1448052ee(local_1d8,&local_1b0);
        uStack_140 = local_1a0;
        dStack_150 = local_1b0;
        uStack_148 = uStack_1a8;
        local_138 = (undefined1 *)CONCAT44(local_138._4_4_,fVar18);
        if (fVar24 < 0.0) {
          fVar24 = sqrtf(fVar24);
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        fVar24 = fVar24 - (fVar18 + fVar18);
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        local_138 = (undefined1 *)CONCAT44(fVar24,(undefined4)local_138);
        iVar12 = *(int *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = iVar12 + 1U;
        if (*(uint *)(param_2 + 0x2c) < iVar12 + 1U) {
          FUN_1407e1e9e((longlong *)(param_2 + 0x20),iVar12);
        }
        lVar9 = *(longlong *)(param_2 + 0x20);
        lVar14 = (longlong)iVar12 * 0x68;
        *(undefined ***)(lVar9 + lVar14) = &PTR_FUN_14a1dee50;
        *(undefined4 *)(lVar9 + 8 + lVar14) = (undefined4)uStack_190;
        *(ulonglong *)(lVar9 + 0xc + lVar14) = CONCAT44((undefined4)uStack_188,uStack_190._4_4_);
        *(undefined4 *)(lVar9 + 0x14 + lVar14) = uStack_188._4_4_;
        *(byte *)(lVar9 + 0x18 + lVar14) = *(byte *)(lVar9 + 0x18 + lVar14) & 0xfe | local_180 & 1;
        *(undefined1 *)(lVar9 + 0x19 + lVar14) = local_17f;
        *(undefined4 *)(lVar9 + 0x20 + lVar14) = 6;
        *(longlong *)(lVar9 + 0x28 + lVar14) = lVar9 + lVar14;
        *(undefined ***)(lVar9 + lVar14) = &PTR_FUN_14a1dee70;
        pdVar1 = (double *)(lVar9 + 0x30 + lVar14);
        *pdVar1 = local_168;
        pdVar1[1] = dStack_160;
        pdVar1 = (double *)(lVar9 + 0x40 + lVar14);
        *pdVar1 = local_158;
        pdVar1[1] = dStack_150;
        puVar2 = (undefined8 *)(lVar9 + 0x50 + lVar14);
        *puVar2 = uStack_148;
        puVar2[1] = uStack_140;
        *(undefined1 **)(lVar9 + 0x60 + lVar14) = local_138;
        uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
        goto LAB_1493d98b7;
      }
    }
  }
  uVar8 = 0;
LAB_1493d98b7:
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1493d9ba0 FUN_1493d9ba0 body=133 status=ok
// SIG undefined FUN_1493d9ba0(void)

byte FUN_1493d9ba0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if (((((*(double *)(param_1 + 0x30) != *(double *)(param_2 + 0x30)) ||
        (NAN(*(double *)(param_1 + 0x30)) || NAN(*(double *)(param_2 + 0x30)))) ||
       (*(double *)(param_1 + 0x38) != *(double *)(param_2 + 0x38))) ||
      (((NAN(*(double *)(param_1 + 0x38)) || NAN(*(double *)(param_2 + 0x38)) ||
        (*(double *)(param_1 + 0x40) != *(double *)(param_2 + 0x40))) ||
       ((NAN(*(double *)(param_1 + 0x40)) || NAN(*(double *)(param_2 + 0x40)) ||
        ((*(double *)(param_1 + 0x48) != *(double *)(param_2 + 0x48) ||
         (NAN(*(double *)(param_1 + 0x48)) || NAN(*(double *)(param_2 + 0x48)))))))))) ||
     ((*(double *)(param_1 + 0x50) != *(double *)(param_2 + 0x50) ||
      (((((NAN(*(double *)(param_1 + 0x50)) || NAN(*(double *)(param_2 + 0x50)) ||
          (*(double *)(param_1 + 0x58) != *(double *)(param_2 + 0x58))) ||
         (NAN(*(double *)(param_1 + 0x58)) || NAN(*(double *)(param_2 + 0x58)))) ||
        ((*(float *)(param_1 + 0x60) != *(float *)(param_2 + 0x60) ||
         (NAN(*(float *)(param_1 + 0x60)) || NAN(*(float *)(param_2 + 0x60)))))) ||
       ((*(float *)(param_1 + 100) != *(float *)(param_2 + 100) ||
        (NAN(*(float *)(param_1 + 100)) || NAN(*(float *)(param_2 + 100)))))))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)(param_2 + 0x68) == *(float *)(param_1 + 0x68)) & 1;
  }
  return bVar1;
}



// FUNCTION 1493d9c25 FUN_1493d9c25 body=120 status=ok
// SIG undefined FUN_1493d9c25(void)

byte FUN_1493d9c25(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if (((((*(double *)(param_1 + 0x30) != *(double *)(param_2 + 0x30)) ||
        (NAN(*(double *)(param_1 + 0x30)) || NAN(*(double *)(param_2 + 0x30)))) ||
       (*(double *)(param_1 + 0x38) != *(double *)(param_2 + 0x38))) ||
      ((((NAN(*(double *)(param_1 + 0x38)) || NAN(*(double *)(param_2 + 0x38)) ||
         (*(double *)(param_1 + 0x40) != *(double *)(param_2 + 0x40))) ||
        ((NAN(*(double *)(param_1 + 0x40)) || NAN(*(double *)(param_2 + 0x40)) ||
         ((*(double *)(param_1 + 0x48) != *(double *)(param_2 + 0x48) ||
          (NAN(*(double *)(param_1 + 0x48)) || NAN(*(double *)(param_2 + 0x48)))))))) ||
       (*(double *)(param_1 + 0x50) != *(double *)(param_2 + 0x50))))) ||
     ((((NAN(*(double *)(param_1 + 0x50)) || NAN(*(double *)(param_2 + 0x50)) ||
        (*(double *)(param_1 + 0x58) != *(double *)(param_2 + 0x58))) ||
       (NAN(*(double *)(param_1 + 0x58)) || NAN(*(double *)(param_2 + 0x58)))) ||
      ((*(float *)(param_1 + 0x60) != *(float *)(param_2 + 0x60) ||
       (NAN(*(float *)(param_1 + 0x60)) || NAN(*(float *)(param_2 + 0x60)))))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)(param_2 + 100) == *(float *)(param_1 + 100)) & 1;
  }
  return bVar1;
}



// FUNCTION 1493d9c9d FUN_1493d9c9d body=175 status=ok
// SIG undefined FUN_1493d9c9d(void)

undefined8 FUN_1493d9c9d(undefined8 param_1)

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
  local_b8 = FUN_145885692();
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



// FUNCTION 1493d9d60 FUN_1493d9d60 body=478 status=ok
// SIG undefined FUN_1493d9d60(void)

longlong FUN_1493d9d60(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (lVar2 != 0) {
    lVar4 = FUN_1458d6172();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (*(longlong *)(param_2 + 0x20) != 0)) &&
       (lVar4 = FUN_1493d9f3e(param_2), lVar4 != 0)) {
      lVar5 = (**(code **)(*param_1 + 0x340))
                        (param_1,lVar4,lVar2,*(undefined8 *)(param_2 + 0x20),param_2);
      if ((lVar5 != 0) && (plVar3 = *(longlong **)(lVar4 + 0x1c8), plVar3 != (longlong *)0x0)) {
        cVar1 = *(char *)((longlong)plVar3 + 0x1fb);
        (**(code **)(*plVar3 + 0x588))(plVar3,2);
        lVar6 = FUN_145a940ac();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
          lVar6 = FUN_145a94198();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            FUN_1493da5a7(param_2,lVar5);
          }
          else {
            lVar6 = FUN_144a79bde();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
              lVar5 = 0;
            }
            lVar6 = FUN_145a94198();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (lVar7 = lVar2,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
              lVar7 = 0;
            }
            FUN_1493da3d3(param_2,lVar7,plVar3,lVar5);
          }
        }
        else {
          lVar6 = FUN_14130829c();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            lVar5 = 0;
          }
          lVar6 = FUN_145a940ac();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (lVar7 = lVar2,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            lVar7 = 0;
          }
          FUN_1493da1ff(param_2,lVar7,plVar3,lVar5);
        }
        if (cVar1 != '\x02') {
          (**(code **)(*plVar3 + 0x588))(plVar3,cVar1);
        }
      }
      FUN_1493da600(lVar2,lVar4);
      FUN_1493da95a(lVar2,lVar4);
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1493d9f3e FUN_1493d9f3e body=704 status=ok
// SIG undefined FUN_1493d9f3e(void)

ulonglong FUN_1493d9f3e(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  byte local_d0 [8];
  undefined1 local_c8 [32];
  longlong local_a8;
  undefined1 local_98;
  undefined1 local_95;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    lVar5 = FUN_1458d6172();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar5 = param_1[4];
      uVar11 = 0;
      if (lVar5 == 0) goto LAB_1493d9f90;
      FUN_1411371f6(local_c8);
      uVar9 = (ulonglong)((int)param_1[2] - 1);
      if ((int)param_1[2] == 0) {
        uVar9 = uVar11;
      }
      FUN_1446f82e2(local_d0,uVar9,param_1[1],1);
      local_95 = 3;
      local_a8 = *param_1;
      local_98 = 1;
      lVar5 = FUN_1493dacbc(lVar5,plVar2);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_1447210f0(lVar5);
      }
      if (DAT_14cb0d2b0 != (longlong *)0x0 && lVar6 == 0) {
        lVar6 = (**(code **)(*DAT_14cb0d2b0 + 0x180))();
      }
      if (local_a8 != 0) {
        lVar6 = FUN_144a8afe2();
      }
      if (lVar6 == 0) {
LAB_1493da1aa:
        uVar11 = 0;
      }
      else {
        lVar7 = (**(code **)(*plVar2 + 0x2e8))(plVar2);
        uVar9 = param_1[6];
        if (uVar9 == 0) {
LAB_1493da0af:
          if ((param_1[7] != 0) && (cVar4 = FUN_1492f5888(plVar2), cVar4 == '\0'))
          goto LAB_1493da1aa;
LAB_1493da0c6:
          local_e8 = local_c8;
          uVar9 = FUN_141137228(lVar6,lVar7,0,0);
          uVar11 = 0;
          if (uVar9 != 0) goto LAB_1493da0ea;
        }
        else {
          lVar8 = FUN_144a6c4d8();
          lVar3 = *(longlong *)(uVar9 + 0x10);
          if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
              lVar8 + 0x30)) goto LAB_1493da0af;
          if (lVar3 != lVar7) goto LAB_1493da0c6;
LAB_1493da0ea:
          plVar12 = *(longlong **)(uVar9 + 0x1c8);
          if (plVar12 == (longlong *)0x0) {
            FUN_1414dfb78(&local_d8);
            local_e0 = 0;
            local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
            uVar10 = FUN_147a03014(uVar9,local_d8,8,0);
            FUN_14092e51e(uVar9,uVar10);
            FUN_141200de6(uVar9,uVar10);
            plVar12 = *(longlong **)(uVar9 + 0x1c8);
            if (plVar12 != (longlong *)0x0) goto LAB_1493da14a;
          }
          else {
LAB_1493da14a:
            cVar4 = FUN_14937a564(plVar2,local_d0);
            if (cVar4 != '\0') {
              if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1c8) != 0)) &&
                 (bVar1 = *(byte *)(*(longlong *)(lVar5 + 0x1c8) + 0x1fb), local_d0[0] < bVar1)) {
                local_d0[0] = bVar1;
              }
              (**(code **)(*plVar12 + 0x588))(plVar12,local_d0[0]);
            }
          }
          uVar11 = uVar9;
          if ((lVar5 != 0) || (cVar4 = FUN_1478b7120(uVar9,0), cVar4 == '\0')) {
            FUN_14135d8d0(uVar9,lVar5,&DAT_14cadad90,0);
          }
        }
      }
      if (local_88 != 0) {
        if (local_78 == (longlong *)0x0) {
          local_78 = local_68;
        }
        (**(code **)(*local_78 + 0x10))();
      }
      goto LAB_1493d9f90;
    }
  }
  uVar11 = 0;
LAB_1493d9f90:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493da1ff FUN_1493da1ff body=467 status=ok
// SIG undefined FUN_1493da1ff(void)

void FUN_1493da1ff(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_90;
  longlong local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 != 0) {
    local_b0 = *(undefined8 *)(param_1 + 0x20);
    local_c0 = 0;
    local_c8 = 0;
    plVar3 = (longlong *)FUN_1493e3985(local_b0,0,0,0);
    uVar2 = FUN_1492ef37c(param_2);
    FUN_1492ee7cc(param_2,&local_a8);
    FUN_1492ef9be(param_2,local_58);
    FUN_1444ba64e(plVar3,local_58,&local_a8,uVar2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(param_2,&local_a8);
    uVar1 = local_b0;
    FUN_1492f3a0c(local_b0,&local_a8,plVar3);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1493e3a7c(&local_a8,param_1);
    local_90 = plVar3;
    (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,param_4);
    uVar4 = FUN_144a799b0();
    FUN_1492f62f4(plVar3,uVar4);
    FUN_1493da5a7(&local_a8,param_4);
    (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,param_3);
    uVar4 = FUN_14130829c();
    FUN_1492f62f4(plVar3,uVar4);
    FUN_1493da5a7(&local_a8,param_3);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(plVar3,&local_a8);
    FUN_1492f3a0c(uVar1,&local_a8,param_2);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493da3d3 FUN_1493da3d3 body=467 status=ok
// SIG undefined FUN_1493da3d3(void)

void FUN_1493da3d3(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_90;
  longlong local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 != 0) {
    local_b0 = *(undefined8 *)(param_1 + 0x20);
    local_c0 = 0;
    local_c8 = 0;
    plVar3 = (longlong *)FUN_1493e3b3b(local_b0,0,0,0);
    uVar2 = FUN_1492ef37c(param_2);
    FUN_1492ee7cc(param_2,&local_a8);
    FUN_1492ef9be(param_2,local_58);
    FUN_1444ba64e(plVar3,local_58,&local_a8,uVar2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(param_2,&local_a8);
    uVar1 = local_b0;
    FUN_1492f3a0c(local_b0,&local_a8,plVar3);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1493e3a7c(&local_a8,param_1);
    local_90 = plVar3;
    (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,param_4);
    uVar4 = FUN_144a799b0();
    FUN_1492f62f4(plVar3,uVar4);
    FUN_1493da5a7(&local_a8,param_4);
    (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,param_3);
    uVar4 = FUN_14130829c();
    FUN_1492f62f4(plVar3,uVar4);
    FUN_1493da5a7(&local_a8,param_3);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(plVar3,&local_a8);
    FUN_1492f3a0c(uVar1,&local_a8,param_2);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493da5a7 FUN_1493da5a7 body=89 status=ok
// SIG undefined FUN_1493da5a7(void)

void FUN_1493da5a7(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1492f5fc0(*(undefined8 *)(param_1 + 0x18),param_2);
    return;
  }
  if (*(longlong *)(param_2 + 0x20) != *(longlong *)(param_1 + 0x30)) {
    return;
  }
  uVar1 = FUN_1492f6324(*(undefined8 *)(param_1 + 0x18),param_2);
  FUN_1444cb710(param_2,*(undefined8 *)(param_1 + 0x38),uVar1,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1493da600 FUN_1493da600 body=856 status=ok
// SIG undefined FUN_1493da600(void)

void FUN_1493da600(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_188 [40];
  longlong *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = 0;
  uStack_130 = 0;
  FUN_14937b768(param_1,&local_138);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_108 = local_138;
  uStack_100 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_130);
  FUN_14282d1cc(local_b8,&local_108);
  local_160 = *(longlong **)(param_2 + 0x1f0);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_2 + 0x1f8));
  FUN_140ce09a0(&local_108);
  local_120 = local_a8;
  local_128 = 0x100000000;
  local_118 = 0xffffffff;
  iStack_114 = 0;
  local_110 = 0;
  iVar7 = 0;
  if (local_90 != 0) {
    FUN_1449c0562(&local_128);
    iVar7 = local_90;
  }
  local_148 = local_118;
  iStack_144 = iStack_114;
  local_140 = local_110;
  local_13c = local_10c;
  local_158 = local_128;
  local_150 = local_120;
  local_160 = local_b8;
  if ((iStack_114 != iVar7) || (local_120 != local_a8)) {
    do {
      iVar1 = *(int *)(*local_160 + 8 + (longlong)iStack_144 * 0x18);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      FUN_1446f82e2(&local_128,iVar6,*(undefined8 *)(*local_160 + (longlong)iStack_144 * 0x18),1);
      lVar3 = local_128;
      if ((int)uStack_100 != local_d4) {
        uVar2 = (uint)((ulonglong)local_128 >> 0x10);
        uVar5 = (uint)local_128 & 0xffff;
        puVar4 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar4 = local_d0;
        }
        for (iVar1 = *(int *)(puVar4 + (ulonglong)
                                       (local_c0 - 1U &
                                       (int)((ulonglong)local_128 >> 0x20) +
                                       ((uint)local_128 << 0x10 | uVar5) +
                                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
            iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_108 + 8)) {
          if (*(longlong *)(local_108 + (longlong)iVar1 * 0x10) == local_128) goto LAB_1493da884;
        }
      }
      iVar1 = *(int *)(param_2 + 0x1f8);
      *(uint *)(param_2 + 0x1f8) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x1fc) < iVar1 + 1U) {
        FUN_1446f84a2((longlong *)(param_2 + 0x1f0),iVar1);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x1f0) + (longlong)iVar1 * 8) = lVar3;
LAB_1493da884:
      local_148 = local_148 & ~local_158._4_4_;
      FUN_1449c0562(&local_158);
    } while (local_160 != local_b8 || (local_150 != local_a8 || iStack_144 != iVar7));
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_b8);
  FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493da95a FUN_1493da95a body=856 status=ok
// SIG undefined FUN_1493da95a(void)

void FUN_1493da95a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_188 [40];
  longlong *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = 0;
  uStack_130 = 0;
  FUN_14937b710(param_1,&local_138);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_108 = local_138;
  uStack_100 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_130);
  FUN_14282d1cc(local_b8,&local_108);
  local_160 = *(longlong **)(param_2 + 0x1d8);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_2 + 0x1e0));
  FUN_140ce09a0(&local_108);
  local_120 = local_a8;
  local_128 = 0x100000000;
  local_118 = 0xffffffff;
  iStack_114 = 0;
  local_110 = 0;
  iVar7 = 0;
  if (local_90 != 0) {
    FUN_1449c0562(&local_128);
    iVar7 = local_90;
  }
  local_148 = local_118;
  iStack_144 = iStack_114;
  local_140 = local_110;
  local_13c = local_10c;
  local_158 = local_128;
  local_150 = local_120;
  local_160 = local_b8;
  if ((iStack_114 != iVar7) || (local_120 != local_a8)) {
    do {
      iVar1 = *(int *)(*local_160 + 8 + (longlong)iStack_144 * 0x18);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      FUN_1446f82e2(&local_128,iVar6,*(undefined8 *)(*local_160 + (longlong)iStack_144 * 0x18),1);
      lVar3 = local_128;
      if ((int)uStack_100 != local_d4) {
        uVar2 = (uint)((ulonglong)local_128 >> 0x10);
        uVar5 = (uint)local_128 & 0xffff;
        puVar4 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar4 = local_d0;
        }
        for (iVar1 = *(int *)(puVar4 + (ulonglong)
                                       (local_c0 - 1U &
                                       (int)((ulonglong)local_128 >> 0x20) +
                                       ((uint)local_128 << 0x10 | uVar5) +
                                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
            iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_108 + 8)) {
          if (*(longlong *)(local_108 + (longlong)iVar1 * 0x10) == local_128) goto LAB_1493dabde;
        }
      }
      iVar1 = *(int *)(param_2 + 0x1e0);
      *(uint *)(param_2 + 0x1e0) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x1e4) < iVar1 + 1U) {
        FUN_1446f84a2((longlong *)(param_2 + 0x1d8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x1d8) + (longlong)iVar1 * 8) = lVar3;
LAB_1493dabde:
      local_148 = local_148 & ~local_158._4_4_;
      FUN_1449c0562(&local_158);
    } while (local_160 != local_b8 || (local_150 != local_a8 || iStack_144 != iVar7));
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_b8);
  FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dacbc FUN_1493dacbc body=201 status=ok
// SIG undefined FUN_1493dacbc(void)

longlong FUN_1493dacbc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1492ef4c6(param_2,local_38);
  lVar1 = FUN_1492f2702(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    lVar1 = 0;
    goto LAB_1493dad06;
  }
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1492f4b30(lVar1,local_38);
  lVar1 = FUN_140081d40(local_38,0);
  if (lVar1 == 0) {
LAB_1493dad73:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1493dad73;
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
LAB_1493dad06:
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dad86 FUN_1493dad86 body=324 status=ok
// SIG undefined FUN_1493dad86(void)

undefined8 FUN_1493dad86(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58 [3];
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[2] = 0;
  uStack_40 = 0;
  FUN_1492ef928(param_2,local_58 + 2);
  if ((int)uStack_40 != 0) {
    lVar1 = FUN_1492f2ba8(param_1,local_58[2]);
    if (lVar1 != 0) {
      lVar2 = FUN_1459238a6();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_58[0] = 0;
        local_58[1] = 0;
        FUN_14933ff3c(lVar1,local_58);
        lVar1 = FUN_1492f2ba8(param_1,local_58);
        uVar4 = 0;
        if (lVar1 == 0) {
          uVar3 = 0;
        }
        else {
          local_68 = 0;
          uStack_60 = 0;
          FUN_1492ef928(lVar1,&local_68);
          if ((int)uStack_60 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_1492f2702(param_1,local_68);
            uVar4 = uStack_60 & 0xffffffff;
          }
          FUN_1447a1747(local_68,uVar4);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1493dadc2;
      }
    }
  }
  uVar3 = 0;
LAB_1493dadc2:
  FUN_1447a1747(local_58[2],uStack_40 & 0xffffffff);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493daecb FUN_1493daecb body=697 status=ok
// SIG undefined FUN_1493daecb(void)

void FUN_1493daecb(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined1 *puStack_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_110 = param_3;
  FUN_14938dd50(param_2,local_b8);
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  uStack_c0 = 0;
  iVar9 = 0;
  puStack_d0 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar9 = local_90;
  }
  local_e8 = local_c8;
  lVar7 = local_e8;
  local_e0 = uStack_c0;
  local_dc = uStack_bc;
  local_f8 = local_d8;
  local_f0 = puStack_d0;
  local_e8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  local_100 = local_b8;
  if ((local_e8._4_4_ != iVar9) || (puStack_d0 != local_a8)) {
    iVar4 = local_e8._4_4_;
    local_e8 = lVar7;
    do {
      lVar7 = *local_100;
      lVar5 = FUN_1492f2ba8(param_1,lVar7 + (longlong)iVar4 * 0x28 + 0x10);
      if (lVar5 != 0) {
        lVar6 = FUN_145923a7c();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          cVar3 = FUN_1492efe02(lVar5);
          if (cVar3 != '\0') {
            local_c8 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_d8 = 0;
            puStack_d0 = (undefined1 *)0x0;
            FUN_1492f4b30(lVar5,&local_d8);
            if (local_d8 != 0) {
              puVar1 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x28);
              puVar8 = &DAT_149dfb77a;
              if (*(int *)(puVar1 + 1) != 0) {
                puVar8 = (undefined2 *)*puVar1;
              }
              FUN_1446f470e(&local_108,puVar8,1);
              lVar7 = FUN_140081d40(&local_d8,0);
              plVar2 = local_110;
              if (lVar7 == 0) {
LAB_1493db139:
                FUN_14003fbd6();
                lVar7 = DAT_14caea080;
              }
              else {
                lVar5 = FUN_1402d2740();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1493db139;
              }
              iVar4 = (**(code **)(*plVar2 + 0x618))(plVar2,local_108);
              if (iVar4 != -1) {
                (**(code **)(*plVar2 + 0x638))(plVar2,iVar4,lVar7);
              }
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
      FUN_1449c0562(&local_f8);
      iVar4 = local_e8._4_4_;
      lVar7 = local_e8;
    } while (local_100 != local_b8 || (local_f0 != local_a8 || local_e8._4_4_ != iVar9));
  }
  local_e8 = lVar7;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493db18e FUN_1493db18e body=62 status=ok
// SIG undefined FUN_1493db18e(void)

undefined8 FUN_1493db18e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459914d2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0xcf0);
    }
  }
  return 0;
}



// FUNCTION 1493db1cc FUN_1493db1cc body=62 status=ok
// SIG undefined FUN_1493db1cc(void)

undefined8 FUN_1493db1cc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140995914();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0x398);
    }
  }
  return 0;
}



// FUNCTION 1493db20a FUN_1493db20a body=1027 status=ok
// SIG undefined FUN_1493db20a(void)

undefined8
FUN_1493db20a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  undefined1 *local_80;
  longlong local_78;
  int local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    lVar4 = FUN_1459e99aa();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      if (param_3 != 0) {
        lVar4 = FUN_145a94284();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_a8 = 0;
          uStack_a0 = 0;
          cVar3 = FUN_149380f54(param_3);
          if (cVar3 != '\0') {
            local_b8 = local_a8;
            local_b0 = (int)uStack_a0 + -1;
            if ((int)uStack_a0 == 0) {
              local_b0 = 0;
            }
            cVar3 = FUN_1468716aa(&local_b8,0);
            if (cVar3 == '\0') {
              lVar4 = FUN_1492f2702(param_4,&local_a8);
              if (lVar4 != 0) {
                lVar6 = FUN_145a94370();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  local_58 = (longlong *)0x0;
                  uStack_50 = 0;
                  local_68 = (wchar_t *)0x0;
                  uStack_60 = 0;
                  cVar3 = FUN_1492f4b30(lVar4);
                  if (cVar3 != '\0') goto LAB_1493db34e;
                  goto LAB_1493db37d;
                }
              }
            }
            else {
              local_68 = (wchar_t *)0x0;
              uStack_60 = 0;
              local_58 = (longlong *)0x0;
              uStack_50 = 0;
              local_78 = local_a8;
              local_70 = (int)uStack_a0 + -1;
              if ((int)uStack_a0 == 0) {
                local_70 = 0;
              }
              FUN_14475bf92(&local_68);
LAB_1493db34e:
              lVar4 = FUN_140081d40(&local_68,0);
              if (lVar4 == 0) {
LAB_1493db37d:
                lVar4 = 0;
              }
              else {
                lVar6 = FUN_1402d2740();
                if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1493db37d;
              }
              if (local_58 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (lVar4 != 0) {
                FUN_147a5d480(param_2,lVar4);
                goto LAB_1493db3a5;
              }
            }
            FUN_140009b9a(local_d8,&local_a8);
            local_68 = L"NoMaterial";
            uStack_60._0_4_ = 10;
            FUN_1446e940c(local_fc,&local_68);
            local_68 = L"DecalActorImport";
            uStack_60 = CONCAT44(uStack_60._4_4_,0x10);
            FUN_1446e940c(local_100,&local_68);
            FUN_140208bae(local_f8,local_100,local_fc,
                          L"No valid decal material found. Make sure that the DecalMaterialPath is valid: %s"
                         );
            FUN_14023409e(&local_e8,local_f8,1);
            local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
            FUN_14023423e(&local_58,local_d8);
            local_80 = local_48;
            local_88 = &local_68;
            FUN_14010d304(&local_78);
            local_98 = local_e8;
            local_90 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_c8,&local_98,&local_78);
            FUN_14007f2db(local_78,local_70);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x10))();
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
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
            FUN_140056680(&local_68,&DAT_149dfb77a);
            local_108 = FUN_14936b1b4(*(undefined8 *)(param_1 + 0x28));
            FUN_1493e3c32(param_1,param_5,local_c8,&local_68);
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != (longlong *)0x0) {
              (**(code **)(*local_c8[0] + 0x10))();
            }
          }
LAB_1493db3a5:
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar5 = *(undefined8 *)(param_2 + 0x390);
      goto LAB_1493db261;
    }
  }
  uVar5 = 0;
LAB_1493db261:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1493db60e FUN_1493db60e body=120 status=ok
// SIG undefined FUN_1493db60e(void)

longlong FUN_1493db60e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)
        ) && (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2e8))(), param_2 != 0)) &&
      ((*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
        param_2 + 0x30)))) && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_145a9445c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1493db686 FUN_1493db686 body=570 status=ok
// SIG undefined FUN_1493db686(void)

longlong FUN_1493db686(longlong *param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  ulonglong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  byte local_49;
  ulonglong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1[7];
  if (lVar4 == 0) {
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    cVar1 = FUN_1492f4b30(param_1[3]);
    if ((cVar1 == '\0') || (lVar4 = FUN_140081d40(local_48,0), lVar4 == 0)) {
      if ((int)param_1[2] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)param_1[1];
      }
      lVar4 = FUN_140277b32(0,*param_1,puVar6,0);
    }
    if (local_48[2] != 0) {
      FUN_1400020a8();
    }
  }
  local_49 = 0;
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    lVar3 = FUN_145a9445c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_48[0] = local_48[0] & 0xffffffffffffff00;
      FUN_1493814a0(lVar5);
      FUN_1493815e0(lVar5,&local_49);
    }
  }
  if (lVar4 == 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 != '\0') {
      lVar4 = FUN_146153af4();
      if (*(longlong **)(lVar4 + 0x350) == (longlong *)0x0) {
        uVar2 = 0x6bf;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x350) + 0x2a8))();
        uVar2 = 0x6bf;
        if (cVar1 != '\0') {
          uVar2 = 0x68f;
        }
      }
      local_48[0] = CONCAT62(local_48[0]._2_6_,uVar2 | (ushort)local_49 << 0xb);
      local_48[1] = 0;
      lVar4 = *param_1;
      if (lVar4 == 0) {
LAB_1493db81e:
        lVar4 = 0;
      }
      else {
        lVar5 = FUN_144a7a812();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1493db81e;
      }
      if ((int)param_1[2] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)param_1[1];
      }
      FUN_1446f470e(&local_58,puVar6,1);
      local_60 = 0;
      local_68 = local_48;
      local_78 = 0;
      local_70 = 5;
      lVar5 = FUN_141603f94(2,1,local_58,lVar4);
      FUN_144757f48(lVar5,3);
      goto LAB_1493db6f9;
    }
  }
  else if (param_2 != 0) {
    if (*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) {
      lVar5 = 0;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30) {
        lVar5 = lVar4;
      }
      goto LAB_1493db6f9;
    }
  }
  lVar5 = 0;
LAB_1493db6f9:
  if ((local_48[4] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1493db8c6 FUN_1493db8c6 body=854 status=ok
// SIG undefined FUN_1493db8c6(void)

longlong FUN_1493db8c6(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != 0) {
    lVar3 = FUN_145869874();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (lVar3 = *(longlong *)(param_2 + 0x390), lVar3 != 0)) {
      FUN_1401bf202(lVar3);
      if (param_3 != 0) {
        lVar4 = FUN_14599b4ea();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_78[0] = 0;
          local_78[1] = 0;
          cVar2 = FUN_14938305e(param_3);
          if (cVar2 != '\0') {
            FUN_1492f5fa0(local_88,local_78);
            lVar4 = FUN_1492f2ba8(param_4,local_88);
            if (lVar4 != 0) {
              lVar5 = FUN_145a94ca8();
              if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = 0;
                uStack_a0 = 0;
                FUN_1492f4b30(lVar4,&local_a8);
                lVar4 = FUN_140081d40(&local_a8,0);
                if (lVar4 != 0) {
                  lVar5 = FUN_14588a8d2();
                  if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                    FUN_1479e2b04(lVar3,lVar4);
                    cVar2 = FUN_14938319e(param_3,&local_e8);
                    if (cVar2 != '\0') {
                      FUN_1479e3aa2(lVar3,(ulonglong)local_e8 & 0xff);
                    }
                    cVar2 = FUN_1493832de(param_3,&local_e8);
                    if (cVar2 != '\0') {
                      FUN_1479e2a24(lVar3,local_e8._0_4_);
                    }
                    cVar2 = FUN_14938341e(param_3,local_c0);
                    if (cVar2 != '\0') {
                      local_118 = *(undefined8 *)(lVar3 + 0x1c0);
                      local_128 = *(undefined4 *)(lVar3 + 0x1b0);
                      uStack_124 = *(undefined4 *)(lVar3 + 0x1b4);
                      uStack_120 = *(undefined4 *)(lVar3 + 0x1b8);
                      uStack_11c = *(undefined4 *)(lVar3 + 0x1bc);
                      FUN_144a7484c(&local_128,&local_108);
                      FUN_144a7484c(local_c0,&local_148);
                      local_e8 = dStack_140 * local_f8 * -1.0 +
                                 local_138 * (double)CONCAT44(uStack_fc,uStack_100) +
                                 (double)CONCAT44(uStack_104,local_108) * dStack_130 * 1.0 +
                                 local_f0 * local_148;
                      dStack_e0 = local_148 * local_f8 * 1.0 +
                                  dStack_130 * (double)CONCAT44(uStack_fc,uStack_100) +
                                  (double)CONCAT44(uStack_104,local_108) * local_138 * -1.0 +
                                  local_f0 * dStack_140;
                      dVar1 = local_138 * local_f8 * -1.0 +
                              (((double)CONCAT44(uStack_104,local_108) * local_148 * -1.0 +
                               local_f0 * dStack_130) -
                              (double)CONCAT44(uStack_fc,uStack_100) * dStack_140);
                      local_d8._8_4_ = SUB84(dVar1,0);
                      local_d8._0_8_ =
                           dStack_130 * local_f8 * 1.0 +
                           (((double)CONCAT44(uStack_104,local_108) * dStack_140 * 1.0 +
                            local_f0 * local_138) -
                           (double)CONCAT44(uStack_fc,uStack_100) * local_148);
                      local_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
                      local_f8 = *(double *)(lVar3 + 0x1a8);
                      local_108 = *(undefined4 *)(lVar3 + 0x198);
                      uStack_104 = *(undefined4 *)(lVar3 + 0x19c);
                      uStack_100 = *(undefined4 *)(lVar3 + 0x1a0);
                      uStack_fc = *(undefined4 *)(lVar3 + 0x1a4);
                      local_150 = 0;
                      local_158 = 0;
                      FUN_144927ad4(lVar3,&local_108,&local_e8,0);
                    }
                  }
                }
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      goto LAB_1493db930;
    }
  }
  lVar3 = 0;
LAB_1493db930:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dbc1d FUN_1493dbc1d body=120 status=ok
// SIG undefined FUN_1493dbc1d(void)

longlong FUN_1493dbc1d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)
        ) && (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2e8))(), param_2 != 0)) &&
      ((*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
        param_2 + 0x30)))) && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_145ba0dac();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1493dbc95 FUN_1493dbc95 body=235 status=ok
// SIG undefined FUN_1493dbc95(void)

longlong FUN_1493dbc95(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[7];
  if (lVar1 == 0) {
    if (*(int *)(param_1 + 2) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)param_1[1];
    }
    lVar1 = FUN_140277b32(0,*param_1,puVar3,0);
    if (lVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)param_1[1];
      }
      FUN_1446f470e(&local_28,puVar3,1);
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      local_48 = 0;
      lVar2 = FUN_140584627(*param_1,param_2,local_28,3);
      goto LAB_1493dbccb;
    }
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30) {
        lVar2 = lVar1;
      }
      goto LAB_1493dbccb;
    }
  }
  lVar2 = 0;
LAB_1493dbccb:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1493dbd94 FUN_1493dbd94 body=86 status=ok
// SIG undefined FUN_1493dbd94(void)

longlong FUN_1493dbd94(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1414199c4();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x398), lVar1 != 0)) {
      FUN_144a81888(lVar1);
      FUN_1401bf202(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1493dbdea FUN_1493dbdea body=728 status=ok
// SIG undefined FUN_1493dbdea(void)

void FUN_1493dbdea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  longlong local_68 [7];
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    lVar3 = FUN_1414199c4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (plVar1 = *(longlong **)(lVar4 + 0x398), plVar1 != (longlong *)0x0)) {
      local_68[6] = 0;
      uStack_30 = 0;
      FUN_1492ef928(*(undefined8 *)(param_2 + 8),local_68 + 6);
      if ((int)uStack_30 != 0) {
        lVar4 = FUN_1492f2702(*(undefined8 *)(param_2 + 0x28),local_68[6]);
        if (lVar4 != 0) {
          lVar3 = FUN_145a95408();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            local_68[4] = 0;
            local_68[5] = 0;
            local_68[2] = 0;
            local_68[3] = 0;
            FUN_1492f4b30(lVar4,local_68 + 2);
            lVar4 = FUN_140081d40(local_68 + 2,0);
            if (lVar4 != 0) {
              lVar3 = FUN_144a85a6c();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                (**(code **)(*plVar1 + 0xaa8))(plVar1,lVar4,1);
                lVar4 = *(longlong *)(param_2 + 8);
                if (lVar4 != 0) {
                  lVar3 = FUN_145a9531c();
                  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                    FUN_1493daecb(*(undefined8 *)(param_2 + 0x28),lVar4,plVar1);
                    local_68[0] = 0;
                    local_68[1] = 0;
                    cVar2 = FUN_14938da2a(lVar4);
                    if (cVar2 != '\0') {
                      FUN_140b1283a(local_78,L"\\AnimSequence",local_68);
                      lVar4 = FUN_1492f2702(*(undefined8 *)(param_2 + 0x28),local_78);
                      if (lVar4 != 0) {
                        lVar3 = FUN_145a94d94();
                        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38))
                           && (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                                (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                          local_88 = 0;
                          uStack_80 = 0;
                          local_98 = 0;
                          uStack_90 = 0;
                          cVar2 = FUN_1492f4b30(lVar4);
                          if (cVar2 != '\0') {
                            lVar4 = FUN_140081d40(&local_98,0);
                            if (lVar4 != 0) {
                              lVar3 = FUN_1402576f0();
                              if ((*(int *)(lVar3 + 0x38) <=
                                   *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                                FUN_14073397e(plVar1,1,1);
                                if (DAT_14c950c29 == '\x01') {
                                  FUN_1456cec3c(lVar4);
                                }
                                plVar1[0x160] = lVar4;
                                *(byte *)(plVar1 + 0x161) = *(byte *)(plVar1 + 0x161) & 0xfc;
                                FUN_14164d696(plVar1,lVar4);
                              }
                            }
                          }
                          if (local_88 != 0) {
                            FUN_1400020a8();
                          }
                        }
                      }
                      if (local_78[0] != 0) {
                        FUN_1400020a8();
                      }
                    }
                    if (local_68[0] != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
            }
            if (local_68[4] != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      FUN_1447a1747(local_68[6],uStack_30 & 0xffffffff);
      if (local_68[6] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dc0c8 FUN_1493dc0c8 body=1034 status=ok
// SIG undefined FUN_1493dc0c8(void)

longlong * FUN_1493dc0c8(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_1403126c0();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)) && (plVar9 = (longlong *)param_2[0x72], plVar9 != (longlong *)0x0)) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0x3ff00000;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = 0;
      uStack_5c = 0x3ff00000;
      local_58 = 0x3ff0000000000000;
      uStack_50 = 0;
      bVar2 = true;
      if (param_3 == 0) {
LAB_1493dc277:
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_145a9531c();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1493dc277;
        cVar3 = FUN_14938dbbc(param_3,&local_a8);
        if (cVar3 != '\0') {
          iVar4 = FUN_14348b0e8(plVar9);
          if (0 < iVar4) {
            lVar5 = FUN_14348b0f0(plVar9,0);
            lVar6 = FUN_144a7a726();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              plVar7 = (longlong *)FUN_14348b12c(lVar5);
              if ((lVar5 != 0) && (plVar7 == param_2)) {
                lVar6 = FUN_144a7a726();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_1493dc270;
              }
            }
          }
          (**(code **)(*param_2 + 0x4c0))(param_2,0);
          FUN_1446f470e(&local_b0,L"GeometricTransform",1);
          local_e0 = 0;
          local_e8 = 0;
          plVar7 = (longlong *)FUN_141797230(param_2[0x39],local_b0,0,0);
          FUN_141200de6(param_2,plVar7);
          lVar5 = FUN_1493dad86(param_4,param_3);
          if (lVar5 != 0) {
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            FUN_1492f4b30(lVar5,&local_d8);
            lVar5 = FUN_140081d40(&local_d8,0);
            if (lVar5 != 0) {
              lVar6 = FUN_1406d0862();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                lVar6 = plVar7[0xcc];
                if ((DAT_14c950c29 == 1) && (lVar6 != 0)) {
                  FUN_1456cec3c(lVar6);
                }
                if (lVar6 != lVar5) {
                  (**(code **)(*plVar7 + 0xa78))(plVar7,lVar5);
                }
                FUN_1493daecb(param_4,param_3,plVar7);
              }
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_140486fc4(plVar7,plVar9,0);
          FUN_1433b7670(param_2);
          uVar1 = *(undefined1 *)((longlong)plVar9 + 0x1fb);
          (**(code **)(*plVar7 + 0x588))(plVar7,2);
          local_e8 = 0;
          FUN_144927a08(plVar7,&local_a8,0,0);
          (**(code **)(*plVar7 + 0x588))(plVar7,uVar1);
          goto LAB_1493dc129;
        }
LAB_1493dc270:
        bVar2 = false;
        lVar5 = param_3;
      }
      lVar6 = FUN_1493dad86(param_4,param_3);
      if (lVar6 != 0) {
        FUN_1401bf202(plVar9);
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_1492f4b30(lVar6,&local_d8);
        lVar6 = FUN_140081d40(&local_d8,0);
        if (lVar6 != 0) {
          lVar8 = FUN_1406d0862();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            lVar8 = plVar9[0xcc];
            if ((lVar8 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar8);
            }
            if (lVar8 != lVar6) {
              (**(code **)(*plVar9 + 0xa78))(plVar9,lVar6);
            }
            if (!bVar2) {
              FUN_1493daecb(param_4,lVar5,plVar9);
            }
          }
        }
        FUN_140b506a4(plVar9);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1493dc129;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_1493dc129:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dc4d4 FUN_1493dc4d4 body=401 status=ok
// SIG undefined FUN_1493dc4d4(void)

void FUN_1493dc4d4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    lVar2 = FUN_1403126c0();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar1 = *(longlong **)(lVar3 + 0x390), plVar1 != (longlong *)0x0)) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1492ef928(*(undefined8 *)(param_2 + 8),&local_38);
      if ((int)uStack_30 != 0) {
        lVar3 = FUN_1492f2702(*(undefined8 *)(param_2 + 0x28),local_38);
        if (lVar3 != 0) {
          lVar2 = FUN_145a955e0();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            FUN_1492f4b30(lVar3,&local_58);
            lVar3 = FUN_140081d40(&local_58,0);
            if (lVar3 != 0) {
              lVar2 = FUN_1406d0862();
              if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                (**(code **)(*plVar1 + 0xa78))(plVar1,lVar3);
                lVar3 = *(longlong *)(param_2 + 8);
                if (lVar3 != 0) {
                  lVar2 = FUN_145a9531c();
                  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                    FUN_1493daecb(*(undefined8 *)(param_2 + 0x28),lVar3,plVar1);
                  }
                }
              }
            }
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dc666 FUN_1493dc666 body=203 status=ok
// SIG undefined FUN_1493dc666(void)

longlong FUN_1493dc666(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    lVar5 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
    lVar5 = 0;
    do {
      if (*(int *)(lVar9 + 0x14) < 1) {
        lVar10 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        lVar8 = (longlong)*(int *)(lVar9 + 0xc);
        lVar6 = (longlong)*(int *)(lVar9 + 8);
        iVar7 = 0;
        lVar10 = 0;
        do {
          uVar3 = FUN_14287fa46(uVar2);
          lVar4 = FUN_146987ac9(uVar3);
          lVar10 = lVar10 + (longlong)*(int *)(lVar9 + 0x10) * lVar4 * lVar6 * lVar8;
          lVar6 = lVar6 >> 1;
          if (lVar6 < 2) {
            lVar6 = 1;
          }
          lVar8 = lVar8 >> 1;
          if (lVar8 < 2) {
            lVar8 = 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar9 + 0x14));
      }
      lVar5 = lVar5 + lVar10;
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar1);
  }
  return lVar5;
}



// FUNCTION 1493dc732 FUN_1493dc732 body=100 status=ok
// SIG undefined FUN_1493dc732(void)

undefined8 FUN_1493dc732(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_4 + 0x18))(param_4);
  if ((cVar1 == '\0') || (*(int *)((longlong)param_4 + 0x14) != *(int *)(param_1 + 0x18))) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_1493dc796(param_1 + 8);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = (int)param_4[4];
    puVar2[3] = *(undefined4 *)((longlong)param_4 + 0x24);
    puVar2[4] = 1;
    puVar2[5] = *(undefined4 *)((longlong)param_4 + 0x1c);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1493dc796 FUN_1493dc796 body=63 status=ok
// SIG undefined FUN_1493dc796(void)

longlong FUN_1493dc796(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493e3de4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  thunk_FUN_147d6e0f4(lVar2);
  return lVar2;
}



// FUNCTION 1493dc7d6 FUN_1493dc7d6 body=855 status=ok
// SIG undefined FUN_1493dc7d6(void)

ulonglong FUN_1493dc7d6(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_108 [40];
  int local_e0;
  undefined8 *local_d8;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = FUN_1493dc666();
  FUN_140e03604(&local_98,uVar7);
  FUN_1467aa942(param_1,&local_98);
  plVar11 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_98 + 3;
    lVar14 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar14 & 0x3fffffff) == 1) {
      (**(code **)(*local_98 + 0x10))(local_98);
      plVar11[1] = 0;
      plVar11[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar11 + 3);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if ((uVar12 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar11)(plVar11,1);
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  iVar10 = (int)param_2[1];
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 == 0) {
    local_c8 = param_2;
    if ((int)param_1[2] != 0) goto LAB_1493dca26;
  }
  else {
    FUN_1406b60f4(&local_78);
    iVar10 = (int)param_2[1];
    if ((int)param_1[2] != iVar10) {
LAB_1493dca26:
      uVar12 = 0;
      goto LAB_1493dca28;
    }
    local_c8 = param_2;
    if (iVar10 != 0) {
      plVar11 = (longlong *)*param_2;
      local_c0 = plVar11 + (longlong)iVar10 * 7;
      lVar15 = 0;
      lVar14 = 0;
      local_b8 = param_1;
      do {
        plVar2 = local_b8;
        cVar3 = (**(code **)(*plVar11 + 0x18))(plVar11);
        uVar12 = uStack_70;
        if ((cVar3 == '\0') || (*(int *)((longlong)plVar11 + 0x14) != (int)plVar2[3]))
        goto LAB_1493dca26;
        lVar13 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_1410d14fc(&local_78,uVar12 & 0xffffffff);
        }
        *(longlong *)(local_78 + lVar13 * 8) = lVar14;
        local_b0 = lVar14;
        local_a8 = lVar15;
        local_a0 = plVar11;
        if (*(int *)(plVar2[1] + 0x14 + lVar15 * 0x18) < 1) {
          lVar14 = 0;
        }
        else {
          lVar13 = plVar2[3];
          lVar15 = plVar2[1] + lVar15 * 0x18;
          lVar9 = (longlong)*(int *)(lVar15 + 0xc);
          lVar16 = (longlong)*(int *)(lVar15 + 8);
          iVar10 = 0;
          lVar14 = 0;
          do {
            uVar6 = FUN_14287fa46((int)lVar13);
            lVar8 = FUN_146987ac9(uVar6);
            lVar14 = lVar14 + (longlong)*(int *)(lVar15 + 0x10) * lVar8 * lVar16 * lVar9;
            lVar16 = lVar16 >> 1;
            if (lVar16 < 2) {
              lVar16 = 1;
            }
            lVar9 = lVar9 >> 1;
            if (lVar9 < 2) {
              lVar9 = 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar15 + 0x14));
        }
        plVar11 = local_a0;
        plVar2 = (longlong *)local_a0[1];
        if (plVar2 == (longlong *)0x0) {
          lVar15 = 0;
        }
        else {
          if ((plVar2[3] & 0x4000000000000000U) == 0) {
            (**(code **)(*plVar2 + 8))(plVar2);
          }
          lVar15 = plVar2[2];
        }
        if (lVar14 != lVar15) goto LAB_1493dca26;
        lVar14 = local_b0 + lVar14;
        lVar15 = local_a8 + 1;
        plVar11 = plVar11 + 7;
        param_1 = local_b8;
      } while (plVar11 != local_c0);
    }
  }
  plVar2 = local_c8;
  plVar11 = (longlong *)*param_1;
  if (plVar11 == (longlong *)0x0) {
    lVar14 = 0;
  }
  else {
    if (((ulonglong)plVar11[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    lVar14 = plVar11[1];
  }
  bVar4 = FUN_144a61b4f();
  local_e0 = (uint)(bVar4 ^ 1) * 8 + 2;
  local_88 = plVar2;
  local_80 = &local_78;
  local_d8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_144506382;
  local_60 = &local_98;
  local_98 = param_1;
  local_90 = lVar14;
  FUN_1401f8d10(L"ParallelFor Task",(int)plVar2[1],1);
  uVar12 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
LAB_1493dca28:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1493dcb34 FUN_1493dcb34 body=197 status=ok
// SIG undefined FUN_1493dcb34(void)

void FUN_1493dcb34(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  
  plVar2 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar6,0);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
    lVar4 = FUN_146987455();
    if (lVar4 < (longlong)uVar3) {
      uVar5 = FUN_14698744f();
      if ((longlong)uVar3 < (longlong)uVar5) {
        uVar5 = uVar3;
      }
      FUN_14626baa2(param_1,uVar5);
      lVar1 = param_1[1];
      lVar4 = lVar1 + uVar5;
      param_1[1] = lVar4;
      if ((ulonglong)(param_1[2] - lVar1) < uVar5) {
        FUN_14112c458(param_1);
        lVar4 = param_1[1];
      }
      (**(code **)(*plVar2 + 0x170))(plVar2,*param_1,lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x0001493dcb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar2)(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 1493dcbf9 FUN_1493dcbf9 body=66 status=ok
// SIG undefined FUN_1493dcbf9(void)

ulonglong FUN_1493dcbf9(longlong *param_1,byte param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  
  if (param_2 < 2) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((*(byte *)(*param_1 + 0x1c) & 4) == 0) {
      cVar1 = FUN_146987268(*(undefined4 *)(*param_1 + 0x18));
      if (cVar1 != '\0') {
        uVar2 = FUN_14698723e(*(undefined4 *)(*param_1 + 0x18));
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1493dcc3c FUN_1493dcc3c body=152 status=ok
// SIG undefined FUN_1493dcc3c(void)

undefined8 * FUN_1493dcc3c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong *local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c76512d == '\0') && (DAT_14c86aa68 != '\x01')) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_140056680(local_28,L"dds;DirectDraw Surface");
  local_30 = &local_18;
  local_38 = local_28;
  FUN_141469cae(param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1493dccd6 FUN_1493dccd6 body=314 status=ok
// SIG undefined FUN_1493dccd6(void)

ulonglong FUN_1493dccd6(undefined8 param_1,longlong param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  int *local_38;
  undefined2 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  undefined7 uVar8;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1492ed44a();
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    local_30 = (undefined2 *)0x0;
    local_28 = *(int *)(param_2 + 0x30);
    lVar6 = (longlong)local_28;
    _Src = *(void **)(param_2 + 0x28);
    if (lVar6 == 0) {
      local_24 = 0;
      _Size = 0;
    }
    else {
      FUN_1446dd670(&local_30,local_28,0);
      _Size = lVar6 * 2;
      memcpy(local_30,_Src,_Size);
    }
    plVar4 = (longlong *)FUN_14054d1d4();
    puVar5 = local_30;
    if (local_28 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,puVar5);
    if (cVar1 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar8 = (undefined7)(_Size >> 8);
      uVar7 = CONCAT71(uVar8,1);
      FUN_1445007fe(&local_38,&local_30,1);
      if (local_38 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        cVar1 = FUN_146987294(local_38);
        if (cVar1 == '\0') {
          iVar2 = FUN_14287d0d8(local_38);
          if (iVar2 == 0) {
            if (((*(byte *)(local_38 + 7) & 1) == 0) &&
               (cVar1 = FUN_1469872c0(local_38), cVar1 == '\0')) {
              uVar7 = CONCAT71(uVar8,*local_38 == 3);
            }
          }
          else {
            uVar3 = FUN_1469872c0(local_38);
            uVar7 = (ulonglong)uVar3;
          }
        }
      }
      FUN_147af4344(&local_38,local_38);
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1493dce12 FUN_1493dce12 body=380 status=ok
// SIG undefined FUN_1493dce12(void)

undefined4 FUN_1493dce12(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x30);
  lVar6 = (longlong)local_38;
  _Src = *(void **)(*(longlong *)(param_1 + 0x30) + 0x28);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar6 * 2);
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,puVar5);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_1493dcea1;
  }
  FUN_1445007fe(&local_48,&local_40,1);
  if (local_48 == (int *)0x0) {
LAB_1493dcefc:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_146987294(local_48);
    if (cVar1 == '\0') {
      iVar3 = FUN_14287d0d8(local_48);
      if (iVar3 == 0) {
        if ((*(byte *)(local_48 + 7) & 1) == 0) {
          cVar1 = FUN_1469872c0(local_48);
          if (cVar1 != '\0') goto LAB_1493dcf66;
          if (*local_48 != 3) goto LAB_1493dcefc;
          uVar2 = FUN_1493e636c(*(undefined8 *)(param_1 + 0x30),param_2);
        }
        else if ((uint)local_48[5] < 7) {
          uVar2 = FUN_1493e622e(*(undefined8 *)(param_1 + 0x30),param_2);
        }
        else {
          uVar2 = FUN_1493e6298();
        }
      }
      else {
        cVar1 = FUN_1469872c0(local_48);
        if (cVar1 == '\0') goto LAB_1493dcefc;
LAB_1493dcf66:
        uVar2 = FUN_1493e6302(*(undefined8 *)(param_1 + 0x30),param_2);
      }
    }
    else {
      uVar2 = FUN_1493e5456(*(undefined8 *)(param_1 + 0x30),param_2);
    }
  }
  FUN_147af4344(&local_48,local_48);
LAB_1493dcea1:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1493dcf94 FUN_1493dcf94 body=152 status=ok
// SIG undefined FUN_1493dcf94(void)

undefined8 * FUN_1493dcf94(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong *local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c76512e == '\0') && (DAT_14c86aa68 != '\x01')) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_140056680(local_28,L"ies;IES light profile");
  local_30 = &local_18;
  local_38 = local_28;
  FUN_141469cae(param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1493dd038 FUN_1493dd038 body=1057 status=ok
// SIG undefined FUN_1493dd038(void)

undefined8 * FUN_1493dd038(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  void *_Dst;
  size_t _Size;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong local_130 [2];
  longlong *local_120 [2];
  longlong *local_110 [2];
  void *local_100 [2];
  undefined4 local_f0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  undefined ***local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined **local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined4 local_5c;
  char local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  cVar4 = FUN_1493e5550(param_1 + -0x38,&DAT_14bcb76fc);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
    goto LAB_1493dd095;
  }
  FUN_1493bc81a(local_100,local_d8,uStack_d0 & 0xffffffff);
  cVar4 = FUN_1493bc932(local_100);
  if (cVar4 == '\0') {
    uVar7 = FUN_1493bc93e(local_100);
    FUN_140056680(local_130,uVar7);
    FUN_140233b1a(local_120,local_130);
    local_88 = (undefined **)0x14bcb7736;
    local_80._0_4_ = 0x18;
    FUN_1446e940c(local_154,&local_88);
    local_88 = (undefined **)0x14bcb7768;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0x18);
    FUN_1446e940c(local_158,&local_88);
    FUN_140208bae(local_150,local_158,local_154,L"IES import failed: \"{0}\"");
    FUN_14023409e(&local_140,local_150,1);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&uStack_78,local_120);
    local_a0 = &uStack_68;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_140;
    local_b0 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (uStack_78 != (longlong *)0x0) {
      (**(code **)(*uStack_78 + 0x10))();
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
        }
      }
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    FUN_1493e5dea(param_1 + -0x38,local_110);
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_130[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    local_80 = (longlong *)0x0;
    uStack_78 = (longlong *)0x0;
    local_60 = 1;
    local_58 = '\0';
    local_88 = &PTR_FUN_14bcb9080;
    local_50 = 0;
    uVar5 = FUN_1493bc956(local_100);
    uVar6 = FUN_1493bc950(local_100);
    local_168 = 1;
    local_170 = 0;
    local_178 = 5;
    FUN_1493e3e78(&local_88,uVar6,uVar5,1);
    local_70 = 6;
    uVar5 = FUN_1493bc95c();
    plVar1 = local_80;
    local_50 = CONCAT44(local_f0,uVar5);
    if (local_80 == (longlong *)0x0) {
      _Size = 0;
LAB_1493dd1c3:
      _Dst = (void *)0x0;
    }
    else {
      if (((ulonglong)local_80[3] >> 0x3e & 1) == 0) {
        (**(code **)(*local_80 + 8))();
      }
      plVar3 = local_80;
      _Size = plVar1[2];
      if (local_80 == (longlong *)0x0) goto LAB_1493dd1c3;
      if ((local_80[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*local_80 + 8))(local_80);
      }
      _Dst = (void *)plVar3[1];
    }
    memcpy(_Dst,local_100[0],_Size);
    plVar1 = local_80;
    local_80 = (longlong *)0x0;
    param_2[1] = plVar1;
    *(undefined4 *)(param_2 + 2) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 3) = local_70;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
    *(ulonglong *)((longlong)param_2 + 0x19) =
         CONCAT17(uStack_68,CONCAT43(uStack_6c,local_70._1_3_));
    *(ulonglong *)((longlong)param_2 + 0x21) = CONCAT17(local_60,uStack_67);
    *(char *)(param_2 + 6) = local_58;
    if (local_58 == '\x01') {
      *(undefined4 *)((longlong)param_2 + 0x2c) = local_5c;
    }
    *param_2 = &PTR_FUN_14bcb9080;
    param_2[7] = local_50;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  FUN_1493dd45a(local_100);
LAB_1493dd095:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dd45a FUN_1493dd45a body=74 status=ok
// SIG undefined FUN_1493dd45a(void)

void FUN_1493dd45a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493dd4a8 FUN_1493dd4a8 body=526 status=ok
// SIG undefined FUN_1493dd4a8(void)

longlong * FUN_1493dd4a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1408be2c4(param_2,7);
  if ((DAT_14c76512f != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"png;Portable Network Graphic");
  }
  if ((DAT_14c765130 != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"bmp;Bitmap image");
  }
  if ((DAT_14c765131 != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"exr;OpenEXR image");
  }
  if ((DAT_14c765132 != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"hdr;High Dynamic Range image");
  }
  if ((DAT_14c765133 != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"tif;Tag Image File Format");
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"tiff;Tag Image File Format");
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"tx;Tag Image File Format");
  }
  if ((DAT_14c765135 != '\0') || (DAT_14c86aa68 == '\x01')) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    FUN_140056680((longlong)iVar1 * 0x10 + *param_2,L"tga;Targa image");
  }
  return param_2;
}



// FUNCTION 1493dd6bf FUN_1493dd6bf body=158 status=ok
// SIG undefined FUN_1493dd6bf(void)

undefined8 * FUN_1493dd6bf(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_14a399d10;
  uVar3 = *param_2;
  puVar5[4] = uVar3;
  *param_2 = 0;
  uVar4 = param_2[1];
  puVar5[5] = uVar4;
  puVar5[6] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  LOCK();
  puVar5[3] = puVar5[3] | 0x4000000000000000;
  UNLOCK();
  LOCK();
  puVar5[3] = puVar5[3] | 0x1000000000000000;
  UNLOCK();
  *param_1 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = puVar5 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar5[3] = puVar5[3] + 0x40000000;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 1493dd762 FUN_1493dd762 body=307 status=ok
// SIG undefined FUN_1493dd762(void)

/* WARNING: Removing unreachable block (ram,0x0001493dd807) */
/* WARNING: Removing unreachable block (ram,0x0001493dd870) */

longlong * FUN_1493dd762(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if ((DAT_14c765136 != '\0') || (DAT_14c86aa68 == '\x01')) {
    FUN_1408be2c4(param_2,2);
    FUN_140056680(&local_28,L"jpg;JPEG image");
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    FUN_140056680(&local_28,L"jpeg;JPEG image");
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    local_28 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493dd8a0 FUN_1493dd8a0 body=142 status=ok
// SIG undefined FUN_1493dd8a0(void)

longlong FUN_1493dd8a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_1493e5550(param_1 + -0x38,L"JPEG");
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_1493dd930(param_1 + -0x38,param_2,local_38,0);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dd930 FUN_1493dd930 body=995 status=ok
// SIG undefined FUN_1493dd930(void)

undefined8 * FUN_1493dd930(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  wchar_t *local_98;
  longlong lStack_90;
  longlong local_88;
  undefined1 local_74 [4];
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  FUN_1446ddc76(&local_60,"ImageWrapper",1);
  uVar14 = FUN_144a52528();
  plVar15 = (longlong *)FUN_1402c9134(uVar14,local_60,&local_98,1);
  (**(code **)(*plVar15 + 0x58))(plVar15,&local_70,1,0);
  if (local_70 != (longlong *)0x0) {
    cVar7 = (**(code **)*local_70)(local_70,uVar4,uVar5);
    plVar15 = local_70;
    if (cVar7 != '\0') {
      uVar10 = (**(code **)(*local_70 + 0x58))(local_70);
      uVar11 = (**(code **)(*plVar15 + 0x50))(plVar15);
      uVar17 = 0;
      bVar8 = FUN_142882538(uVar10,uVar11,0);
      plVar15 = local_70;
      if (bVar8 < 9) {
        uVar17 = *(undefined4 *)(&DAT_14bcb90bc + (ulonglong)bVar8 * 4);
      }
      iVar12 = (**(code **)(*local_70 + 0x50))(local_70);
      if (iVar12 == 8) {
        cVar7 = (**(code **)(*plVar15 + 0x58))(plVar15);
        bVar18 = cVar7 != '\x04';
      }
      else {
        bVar18 = false;
      }
      uVar10 = (**(code **)(*local_70 + 0x48))();
      uVar11 = (**(code **)(*local_70 + 0x40))();
      local_98 = (wchar_t *)0x0;
      lStack_90 = 0;
      local_88 = 0;
      if (param_4 == '\0') {
        uVar13 = (**(code **)(*local_70 + 0x58))(local_70);
        iVar12 = (**(code **)(*local_70 + 0x50))(local_70);
        if (iVar12 != 0 && (char)uVar13 != -1) {
          cVar7 = (**(code **)(*local_70 + 0x38))(local_70,uVar13,iVar12,&local_98);
          if (cVar7 != '\0') {
            pwVar16 = (wchar_t *)FUN_14001cc68(0x38,0x10);
            lVar6 = lStack_90;
            pwVar2 = local_98;
            uVar13 = 0;
            pwVar16[0xc] = L'\0';
            pwVar16[0xd] = L'\0';
            pwVar16[0xe] = L'\0';
            pwVar16[0xf] = L'\0';
            *(undefined ***)pwVar16 = &PTR_FUN_14a399d10;
            *(wchar_t **)(pwVar16 + 0x10) = local_98;
            local_98 = (wchar_t *)0x0;
            *(longlong *)(pwVar16 + 0x14) = lStack_90;
            *(longlong *)(pwVar16 + 0x18) = local_88;
            lStack_90 = 0;
            local_88 = 0;
            *(wchar_t **)(pwVar16 + 4) = pwVar2;
            *(longlong *)(pwVar16 + 8) = lVar6;
            LOCK();
            *(ulonglong *)(pwVar16 + 0xc) = *(ulonglong *)(pwVar16 + 0xc) | 0x4000000000000000;
            UNLOCK();
            LOCK();
            *(ulonglong *)(pwVar16 + 0xc) = *(ulonglong *)(pwVar16 + 0xc) | 0x1000000000000000;
            UNLOCK();
            if (pwVar16 == (wchar_t *)0x0) {
              pwVar16 = (wchar_t *)0x0;
            }
            else {
              LOCK();
              pwVar2 = pwVar16 + 0xc;
              uVar3 = *(ulonglong *)pwVar2;
              *(ulonglong *)pwVar2 = *(ulonglong *)pwVar2 + 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 0) {
                LOCK();
                *(longlong *)(pwVar16 + 0xc) = *(longlong *)(pwVar16 + 0xc) + 0x40000000;
                UNLOCK();
              }
            }
            goto LAB_1493ddc20;
          }
        }
        local_58 = L"DecodingFailed";
        local_50 = 0xe;
        FUN_1446e940c(local_74,&local_58);
        local_58 = L"InterchangeJPEGTranslator";
        local_50 = 0x19;
        FUN_1446e940c(local_9c,&local_58);
        FUN_140208bae(&local_58,local_9c,local_74,L"Failed to decode JPEG.");
        FUN_1493e5dea(param_1,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        uVar9 = 0;
      }
      else {
        FUN_1493dd6bf(&local_58,param_3);
        uVar13 = 2;
        pwVar16 = local_58;
LAB_1493ddc20:
        *param_2 = &PTR_FUN_14bcb3bb0;
        param_2[1] = pwVar16;
        *(undefined4 *)(param_2 + 2) = uVar13;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar17;
        param_2[3] = 0x100000000;
        *(undefined4 *)(param_2 + 4) = uVar11;
        *(undefined4 *)((longlong)param_2 + 0x24) = uVar10;
        *(bool *)(param_2 + 5) = bVar18;
        *(undefined1 *)(param_2 + 6) = 0;
        uVar9 = 1;
      }
      *(undefined1 *)(param_2 + 7) = uVar9;
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1493ddab8;
    }
  }
  local_98 = L"DecodingFailed";
  lStack_90._0_4_ = 0xe;
  FUN_1446e940c(&local_58,&local_98);
  local_98 = L"InterchangeJPEGTranslator";
  lStack_90 = CONCAT44(lStack_90._4_4_,0x19);
  FUN_1446e940c(local_74,&local_98);
  FUN_140208bae(&local_98,local_74,&local_58,L"Failed to decode JPEG.");
  FUN_1493e5dea(param_1,&local_98);
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  *(undefined1 *)(param_2 + 7) = 0;
LAB_1493ddab8:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_68 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ddd18 FUN_1493ddd18 body=142 status=ok
// SIG undefined FUN_1493ddd18(void)

longlong FUN_1493ddd18(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_1493e5550(param_1 + -0x38,L"JPEG");
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_1493dd930(param_1 + -0x38,param_2,local_38,1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dddac FUN_1493dddac body=152 status=ok
// SIG undefined FUN_1493dddac(void)

undefined8 * FUN_1493dddac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong *local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c765137 == '\0') && (DAT_14c86aa68 != '\x01')) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_140056680(local_28,L"psd;Photoshop Document");
  local_30 = &local_18;
  local_38 = local_28;
  FUN_141469cae(param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1493dde50 FUN_1493dde50 body=3180 status=ok
// SIG undefined FUN_1493dde50(void)

undefined8 * FUN_1493dde50(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  short sVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  ushort uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  void *_Src;
  wchar_t *pwVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 local_238 [32];
  undefined4 local_218;
  undefined1 local_210;
  undefined1 local_208;
  uint local_1f8;
  uint local_1f4;
  ulonglong local_1f0;
  ushort local_1e2;
  ulonglong local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  wchar_t *local_1b0;
  void *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  void *local_178;
  ulonglong local_170;
  uint *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined **local_148;
  longlong *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined4 local_11c;
  byte local_118;
  undefined2 local_10a;
  longlong local_108 [3];
  undefined2 *puStack_f0;
  wchar_t *local_e8;
  int aiStack_e0 [14];
  ulonglong local_a8 [9];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_238;
  param_1 = param_1 + -0x38;
  local_168 = (uint *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  cVar9 = FUN_1493e5550(param_1,&DAT_14bcb8aae);
  if (((cVar9 != '\0') && (0x19 < uStack_160)) &&
     (uVar21 = *local_168,
     (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18) ==
     0x38425053)) {
    if ((ushort)((ushort)local_168[1] << 8 | (ushort)local_168[1] >> 8) == 1) {
      uVar7 = local_168[3];
      uVar21 = (uint)(byte)uVar7 * 0x100;
      bVar2 = *(byte *)((longlong)local_168 + 0xd);
      local_1f4 = bVar2 + uVar21;
      if ((4 < (ushort)local_1f4) ||
         (local_1c8 = (ulonglong)(ushort)local_1f4, (0x1aU >> (local_1f4 & 0x1f) & 1) == 0))
      goto LAB_1493ddf7a;
      bVar3 = *(byte *)((longlong)local_168 + 0x17);
      sVar6 = CONCAT11(*(undefined1 *)((longlong)local_168 + 0x16),bVar3);
      if (((sVar6 != 0x10) && (sVar6 != 8)) ||
         ((((ushort)local_168[6] << 8 | (ushort)local_168[6] >> 8) - 1 & 0xfffd) != 0))
      goto LAB_1493ddf7a;
      uVar17 = (uint)CONCAT11(*(undefined1 *)((longlong)local_168 + 0x16),bVar3);
      if (sVar6 == 8) {
        local_218 = 2;
LAB_1493de0de:
        local_1f0 = (ulonglong)*(byte *)((longlong)local_168 + 0x11) |
                    (ulonglong)(byte)local_168[4] << 8 |
                    (longlong)(int)((uint)*(byte *)((longlong)local_168 + 0xe) << 0x18) |
                    (ulonglong)*(byte *)((longlong)local_168 + 0xf) << 0x10;
        uVar11 = (ulonglong)*(byte *)((longlong)local_168 + 0x12) << 0x18;
        uVar13 = (ulonglong)*(byte *)((longlong)local_168 + 0x13) << 0x10;
        uVar19 = (ulonglong)(byte)local_168[5] << 8;
        plVar18 = (longlong *)
                  ((ulonglong)*(byte *)((longlong)local_168 + 0x15) |
                  uVar19 | (longlong)(int)uVar11 | uVar13);
        local_148 = &PTR_FUN_14bcb3bb0;
        local_140 = (longlong *)0x0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_127 = 0;
        local_120 = 1;
        local_118 = 0;
        local_208 = 1;
        local_210 = 1;
        local_1f8 = uVar17;
        FUN_1493e3e78(&local_148,
                      (ulonglong)*(byte *)((longlong)local_168 + 0x15) | uVar19 | uVar11 | uVar13,
                      local_1f0,1);
        plVar15 = local_140;
        if (local_140 == (longlong *)0x0) {
          local_1e0 = 0;
          lVar22 = 0;
          uVar17 = local_1f8;
        }
        else {
          if (((ulonglong)local_140[3] >> 0x3e & 1) == 0) {
            (**(code **)(*local_140 + 8))(local_140);
          }
          uVar17 = local_1f8;
          local_1e0 = plVar15[2];
          if (local_140 == (longlong *)0x0) {
            lVar22 = 0;
          }
          else {
            plVar15 = local_140;
            if ((local_140[3] & 0x4000000000000000U) == 0) {
              local_1d0 = local_140;
              (**(code **)(*local_140 + 8))(local_140);
              plVar15 = local_1d0;
            }
            lVar22 = plVar15[1];
          }
        }
        uVar19 = uStack_160;
        puVar8 = local_168;
        if ((((((ushort)local_1f4 < 5) && ((0x1aU >> ((uint)local_1c8 & 0x1f) & 1) != 0)) &&
             ((sVar6 == 0x10 || (uVar17 == 8)))) &&
            ((((((0x1a < uStack_160 &&
                 (local_1f8 = uVar17, local_1d0 = plVar18, local_1a0 = lVar22,
                 cVar9 = FUN_14287fa1f(plVar18,local_1f0), cVar9 != '\0')) && ((int)local_1f0 != 0))
               && (uVar13 = (longlong)local_1d0 * local_1f0, 0 < (longlong)uVar13)) &&
              ((sVar6 == 0x10 || (local_1f8 == 8)))) && ((ushort)local_1f4 < 5)))) &&
           (((0x1aU >> ((uint)local_1c8 & 0x1f) & 1) != 0 && (uVar13 >> 0x3d == 0)))) {
          uVar19 = uVar19 - 0x1a;
          uVar20 = CONCAT71(0,bVar3 >> 3);
          uVar13 = uVar13 * 4;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar20;
          uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar5,0);
          lVar22 = uVar13 * uVar20;
          if (uVar11 < uVar13) {
            lVar22 = 0;
          }
          if ((uVar19 < 4 || ((longlong)local_1e0 < 0 || uVar11 < uVar13)) ||
              (longlong)local_1e0 < lVar22) goto LAB_1493de30e;
          uVar17 = *(uint *)((longlong)puVar8 + 0x1a);
          uVar11 = (ulonglong)
                   ((uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                    uVar17 << 0x18) + 4);
          uVar13 = uVar11;
          if (uVar19 < uVar11) {
            uVar13 = uVar19;
          }
          uVar20 = uVar19 - uVar13;
          if (uVar20 < 4 || uVar19 <= uVar11) goto LAB_1493de30e;
          uVar17 = *(uint *)((longlong)puVar8 + uVar13 + 0x1a);
          uVar11 = (ulonglong)
                   ((uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                    uVar17 << 0x18) + 4);
          uVar19 = uVar11;
          if (uVar20 < uVar11) {
            uVar19 = uVar20;
          }
          if ((uVar20 <= uVar11) || (uVar20 = uVar20 - uVar19, uVar20 < 4)) goto LAB_1493de30e;
          uVar17 = *(uint *)((longlong)puVar8 + uVar19 + uVar13 + 0x1a);
          uVar14 = (ulonglong)
                   ((uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                    uVar17 << 0x18) + 4);
          uVar11 = uVar14;
          if (uVar20 < uVar14) {
            uVar11 = uVar20;
          }
          if ((uVar20 <= uVar14) || (uVar20 - uVar11 < 2)) goto LAB_1493de30e;
          lVar22 = uVar19 + uVar13 + 0x1a;
          uVar10 = *(ushort *)((longlong)puVar8 + uVar11 + lVar22);
          local_1e2 = uVar10 << 8 | uVar10 >> 8;
          if (1 < local_1e2) goto LAB_1493de30e;
          local_1c0 = (longlong)puVar8 + uVar11 + lVar22 + 2;
          local_1e0 = (uVar20 - uVar11) - 2;
          uVar17 = (uint)(bVar3 >> 3) * (int)local_1d0;
          local_1b0 = (wchar_t *)(ulonglong)uVar17;
          local_198 = (longlong)(int)uVar17;
          local_10a = 0xffff;
          local_a8[6] = 0;
          local_a8[7] = 0;
          local_a8[4] = 0;
          local_a8[5] = 0;
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a8[0] = 0;
          local_a8[1] = 0;
          aiStack_e0[10] = 0;
          aiStack_e0[0xb] = 0;
          aiStack_e0[0xc] = 0;
          aiStack_e0[0xd] = 0;
          aiStack_e0[6] = 0;
          aiStack_e0[7] = 0;
          aiStack_e0[8] = 0;
          aiStack_e0[9] = 0;
          aiStack_e0[2] = 0;
          aiStack_e0[3] = 0;
          aiStack_e0[4] = 0;
          aiStack_e0[5] = 0;
          local_e8 = (wchar_t *)0x0;
          aiStack_e0[0] = 0;
          aiStack_e0[1] = 0;
          local_188 = local_198 * local_1f0;
          if (local_1e2 == 1) {
            local_1b8 = local_1f0 * 2;
            uVar19 = local_1b8 * local_1c8;
            bVar23 = local_1e0 < uVar19;
            local_1e0 = local_1e0 - uVar19;
            if (bVar23) goto LAB_1493de66b;
            local_1d8 = local_1c0 + uVar19;
            local_1f0 = local_1f0 + (local_1f0 == 0);
            uVar11 = 0;
            uVar13 = 0;
            do {
              iVar12 = aiStack_e0[uVar13 * 4];
              iVar4 = aiStack_e0[uVar13 * 4 + 1];
              aiStack_e0[uVar13 * 4] = iVar12 + (uint)local_1b0;
              if ((uint)(iVar4 - iVar12) < (uint)local_1b0) {
                FUN_1447403be(&local_e8 + uVar13 * 2);
              }
              uVar20 = local_1b8;
              if (uVar19 < local_1b8) {
                uVar20 = uVar19;
              }
              local_a8[uVar13 + 4] = local_1c0;
              local_a8[uVar13] = local_1d8 + uVar11;
              uVar14 = 0;
              do {
                uVar10 = *(ushort *)(local_1c0 + uVar14 * 2);
                uVar11 = uVar11 + (ushort)(uVar10 << 8 | uVar10 >> 8);
                uVar14 = uVar14 + 1;
              } while (local_1f0 != uVar14);
              if (local_1e0 < uVar11) goto LAB_1493de66b;
              local_1c0 = local_1c0 + uVar20;
              uVar19 = uVar19 - uVar20;
              uVar13 = uVar13 + 1;
            } while (uVar13 != local_1c8);
            local_1c0 = local_1d8;
LAB_1493de701:
            local_180 = local_198 * 4;
            local_178 = (void *)(ulonglong)(uVar21 | bVar2);
            local_1d8 = 0;
            do {
              local_108[2] = 0;
              puStack_f0 = (undefined2 *)0x0;
              local_108[0] = 0;
              local_108[1] = 0;
              if (local_1e2 == 0) {
                local_108[0] = local_1d8 * local_198 + local_1c0;
                if (1 < (short)(ushort)local_1f4) {
                  uVar19 = 0;
                  do {
                    local_108[uVar19 + 1] = local_108[uVar19 & 0xffffffff] + local_188;
                    uVar19 = uVar19 + 1;
                  } while ((ulonglong)CONCAT11((byte)uVar7,bVar2) - 1 != uVar19);
                }
              }
              else if (0 < (short)(ushort)local_1f4) {
                local_1a8 = (void *)0x0;
                do {
                  local_190 = (longlong)local_1a8 * 0x10;
                  local_1b8 = (ulonglong)aiStack_e0[(longlong)local_1a8 * 4];
                  local_170 = local_a8[(longlong)local_1a8 + 4];
                  uVar10 = *(ushort *)(local_170 + local_1d8 * 2);
                  uVar10 = uVar10 << 8 | uVar10 >> 8;
                  uVar19 = local_a8[(longlong)local_1a8];
                  if (uVar10 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    local_1b0 = (&local_e8)[(longlong)local_1a8 * 2];
                    local_1e0 = CONCAT44(local_1e0._4_4_,(uint)uVar10);
                    uVar13 = 0;
                    uVar11 = 0;
                    _Src = local_1a8;
                    do {
                      iVar12 = (int)*(char *)(uVar19 + uVar11);
                      uVar20 = uVar11 + 1;
                      if (iVar12 == -0x80) {
                        uVar11 = uVar20 & 0xffffffff;
                      }
                      else if (*(char *)(uVar19 + uVar11) < '\0') {
                        uVar14 = uVar13 + (1 - iVar12);
                        if ((local_1b8 < uVar14) || ((uint)local_1e0 <= (uint)uVar20))
                        goto LAB_1493de66b;
                        _Src = (void *)CONCAT71((int7)((ulonglong)_Src >> 8),
                                                *(undefined1 *)(uVar19 + uVar20));
                        uVar11 = (ulonglong)((int)uVar11 + 2);
                        memset((void *)(uVar13 + (longlong)local_1b0),(int)_Src,
                               (ulonglong)(1 - iVar12));
                        uVar13 = uVar14;
                      }
                      else {
                        uVar21 = iVar12 + (uint)uVar20 + 1;
                        uVar11 = (ulonglong)uVar21;
                        if ((uint)local_1e0 < uVar21) goto LAB_1493de66b;
                        _Src = (void *)((uVar20 & 0xffffffff) + uVar19);
                        memcpy((void *)((longlong)local_1b0 + uVar13),_Src,(ulonglong)(iVar12 + 1));
                        uVar13 = uVar13 + (iVar12 + 1);
                      }
                    } while ((uint)uVar11 < (uint)local_1e0);
                  }
                  if (uVar13 != local_1b8) goto LAB_1493de66b;
                  uVar10 = *(ushort *)(local_170 + local_1d8 * 2);
                  local_a8[(longlong)local_1a8] = uVar19 + (ushort)(uVar10 << 8 | uVar10 >> 8);
                  local_108[(longlong)local_1a8] = *(longlong *)((longlong)&local_e8 + local_190);
                  local_1a8 = (void *)((longlong)local_1a8 + 1);
                } while (local_1a8 != local_178);
              }
              if ((ushort)local_1f4 == 3) {
LAB_1493de97f:
                puStack_f0 = &local_10a;
                uVar19 = 0;
              }
              else {
                uVar19 = 0xffffffffffffffff;
                if ((int)local_1c8 == 1) {
                  local_108[1] = local_108[0];
                  local_108[2] = local_108[0];
                  goto LAB_1493de97f;
                }
              }
              if (sVar6 == 0x10) {
                if ((int)local_1d0 != 0) {
                  plVar15 = (longlong *)0x0;
                  do {
                    uVar10 = *(ushort *)(local_108[0] + (longlong)plVar15 * 2);
                    *(ushort *)(local_1a0 + (longlong)plVar15 * 8) = uVar10 << 8 | uVar10 >> 8;
                    uVar10 = *(ushort *)(local_108[1] + (longlong)plVar15 * 2);
                    *(ushort *)(local_1a0 + 2 + (longlong)plVar15 * 8) = uVar10 << 8 | uVar10 >> 8;
                    uVar10 = *(ushort *)(local_108[2] + (longlong)plVar15 * 2);
                    *(ushort *)(local_1a0 + 4 + (longlong)plVar15 * 8) = uVar10 << 8 | uVar10 >> 8;
                    *(ushort *)(local_1a0 + 6 + (longlong)plVar15 * 8) =
                         puStack_f0[(ulonglong)plVar15 & uVar19] << 8 |
                         (ushort)puStack_f0[(ulonglong)plVar15 & uVar19] >> 8;
                    plVar15 = (longlong *)((longlong)plVar15 + 1);
                  } while (local_1d0 != plVar15);
                }
              }
              else if ((local_1f8 == 8) && ((int)local_1d0 != 0)) {
                plVar15 = (longlong *)0x0;
                do {
                  *(undefined1 *)(local_1a0 + 2 + (longlong)plVar15 * 4) =
                       *(undefined1 *)(local_108[0] + (longlong)plVar15);
                  *(undefined1 *)(local_1a0 + 1 + (longlong)plVar15 * 4) =
                       *(undefined1 *)(local_108[1] + (longlong)plVar15);
                  *(undefined1 *)(local_1a0 + (longlong)plVar15 * 4) =
                       *(undefined1 *)(local_108[2] + (longlong)plVar15);
                  *(undefined1 *)(local_1a0 + 3 + (longlong)plVar15 * 4) =
                       *(undefined1 *)((longlong)puStack_f0 + ((ulonglong)plVar15 & uVar19));
                  plVar15 = (longlong *)((longlong)plVar15 + 1);
                } while (local_1d0 != plVar15);
              }
              local_1d8 = local_1d8 + 1;
              local_1a0 = local_1a0 + local_180;
              bVar23 = true;
            } while (local_1d8 != local_1f0);
          }
          else {
            if (local_188 * local_1c8 <= local_1e0) {
              local_1f0 = local_1f0 + (local_1f0 == 0);
              goto LAB_1493de701;
            }
LAB_1493de66b:
            bVar23 = false;
          }
          lVar22 = 0x40;
          do {
            if (*(longlong *)((longlong)local_108 + lVar22 + 0x10) != 0) {
              FUN_1400020a8();
            }
            plVar15 = local_140;
            lVar22 = lVar22 + -0x10;
          } while (lVar22 != 0);
          if (!bVar23) goto LAB_1493de30e;
          *param_2 = &PTR_FUN_14bcb3bb0;
          local_140 = (longlong *)0x0;
          param_2[1] = plVar15;
          *(undefined4 *)(param_2 + 2) = (undefined4)uStack_138;
          *(undefined4 *)((longlong)param_2 + 0x14) = uStack_138._4_4_;
          *(undefined4 *)(param_2 + 3) = local_130;
          *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_12c;
          *(ulonglong *)((longlong)param_2 + 0x19) =
               CONCAT17(uStack_128,CONCAT43(uStack_12c,local_130._1_3_));
          *(ulonglong *)((longlong)param_2 + 0x21) = CONCAT17(local_120,uStack_127);
          *(byte *)(param_2 + 6) = local_118;
          if (local_118 == 1) {
            *(undefined4 *)((longlong)param_2 + 0x2c) = local_11c;
          }
          *(undefined1 *)(param_2 + 7) = 1;
        }
        else {
LAB_1493de30e:
          local_e8 = L"FailedRead";
          aiStack_e0[0] = 10;
          FUN_1446e940c(local_a8 + 4,&local_e8);
          local_e8 = L"InterchangePSDTranslator";
          aiStack_e0[0] = 0x18;
          FUN_1446e940c(local_a8,&local_e8);
          FUN_140208bae(&local_e8,local_a8,local_a8 + 4,L"Failed to read this PSD.");
          FUN_1493e5dea(param_1,&local_e8);
          if (local_e8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_e8 + 0x10))();
          }
          *(undefined1 *)(param_2 + 7) = 0;
        }
        plVar15 = local_140;
        local_148 = &PTR_FUN_14bcb3bb0;
        if ((local_118 & 1) != 0) {
          local_118 = 0;
        }
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_140 + 3;
          lVar22 = *plVar18;
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (((uint)lVar22 & 0x3fffffff) == 1) {
            (**(code **)(*local_140 + 0x10))(local_140);
            plVar15[1] = 0;
            plVar15[2] = 0;
            LOCK();
            puVar1 = (ulonglong *)(plVar15 + 3);
            uVar19 = *puVar1;
            *puVar1 = *puVar1 - 0x40000000;
            UNLOCK();
            if ((uVar19 & 0xfffffffc0000000) == 0x40000000) {
              (**(code **)*plVar15)(plVar15,1);
            }
          }
        }
        goto LAB_1493de009;
      }
      if (uVar17 == 0x10) {
        local_218 = 4;
        goto LAB_1493de0de;
      }
      local_e8 = L"UnsupportedPixelFormat";
      aiStack_e0[0] = 0x16;
      FUN_1446e940c(&local_148,&local_e8);
      local_e8 = L"InterchangePSDTranslator";
      aiStack_e0[0] = 0x18;
      FUN_1446e940c(local_a8 + 4,&local_e8);
      pwVar16 = L"This PSD file contains data in an unsupported pixel format.";
    }
    else {
LAB_1493ddf7a:
      local_e8 = L"UnsupportedFormat";
      aiStack_e0[0] = 0x11;
      FUN_1446e940c(&local_148,&local_e8);
      local_e8 = L"InterchangePSDTranslator";
      aiStack_e0[0] = 0x18;
      FUN_1446e940c(local_a8 + 4,&local_e8);
      pwVar16 = 
      L"Format of this PSD is not supported. Only Grayscale and RGBColor PSD images are currently supported, in 8-bit or 16-bit."
      ;
    }
    FUN_140208bae(&local_e8,local_a8 + 4,&local_148,pwVar16);
    FUN_1493e5dea(param_1,&local_e8);
    if (local_e8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
  }
  *(undefined1 *)(param_2 + 7) = 0;
LAB_1493de009:
  if (local_168 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)local_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493deaf2 FUN_1493deaf2 body=45 status=ok
// SIG undefined FUN_1493deaf2(void)

longlong FUN_1493deaf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493deb26 FUN_1493deb26 body=45 status=ok
// SIG undefined FUN_1493deb26(void)

longlong FUN_1493deb26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493deb5a FUN_1493deb5a body=115 status=ok
// SIG undefined FUN_1493deb5a(void)

undefined8 FUN_1493deb5a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0xffffffff00000000;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4,&local_28);
  if ((iStack_1c != -1) && (local_28 != 0)) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493debd2 FUN_1493debd2 body=45 status=ok
// SIG undefined FUN_1493debd2(void)

longlong FUN_1493debd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493dec06 FUN_1493dec06 body=115 status=ok
// SIG undefined FUN_1493dec06(void)

undefined8 FUN_1493dec06(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0xffffffff00000000;
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4,&local_28);
  if ((iStack_1c != -1) && (local_28 != 0)) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dec7e FUN_1493dec7e body=45 status=ok
// SIG undefined FUN_1493dec7e(void)

longlong FUN_1493dec7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493decb6 FUN_1493decb6 body=45 status=ok
// SIG undefined FUN_1493decb6(void)

longlong FUN_1493decb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493decee FUN_1493decee body=45 status=ok
// SIG undefined FUN_1493decee(void)

longlong FUN_1493decee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493ded22 FUN_1493ded22 body=52 status=ok
// SIG undefined FUN_1493ded22(void)

void FUN_1493ded22(longlong *param_1)

{
  FUN_1493ded56();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493ded56 FUN_1493ded56 body=89 status=ok
// SIG undefined FUN_1493ded56(void)

void FUN_1493ded56(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1493dedb0 FUN_1493dedb0 body=52 status=ok
// SIG undefined FUN_1493dedb0(void)

void FUN_1493dedb0(longlong *param_1)

{
  FUN_1493dede4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493dede4 FUN_1493dede4 body=89 status=ok
// SIG undefined FUN_1493dede4(void)

void FUN_1493dede4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1493dee3e FUN_1493dee3e body=127 status=ok
// SIG undefined FUN_1493dee3e(void)

void FUN_1493dee3e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1493deebe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1493deebe FUN_1493deebe body=140 status=ok
// SIG undefined FUN_1493deebe(void)

void FUN_1493deebe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0xc);
  return;
}



// FUNCTION 1493def4a FUN_1493def4a body=135 status=ok
// SIG undefined FUN_1493def4a(void)

longlong FUN_1493def4a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1493defd2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1493def84;
  }
  local_30 = param_3;
  FUN_1493df09e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1493def84:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493defd2 FUN_1493defd2 body=203 status=ok
// SIG undefined FUN_1493defd2(void)

int FUN_1493defd2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1493df01c:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1493df092;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1493df092;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1493df083;
    }
  }
  return -1;
LAB_1493df092:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1493df083:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493df01c;
}



// FUNCTION 1493df09e FUN_1493df09e body=272 status=ok
// SIG undefined FUN_1493df09e(void)

undefined4 * FUN_1493df09e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1493df1b0(param_1,local_48);
  FUN_1493df304(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_1493df296(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
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
      FUN_1493df4a8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493df1b0 FUN_1493df1b0 body=230 status=ok
// SIG undefined FUN_1493df1b0(void)

int * FUN_1493df1b0(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1493df296 FUN_1493df296 body=109 status=ok
// SIG undefined FUN_1493df296(void)

undefined8 FUN_1493df296(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_1493defd2(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_1493df46c(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1493df3fa(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1493df304 FUN_1493df304 body=101 status=ok
// SIG undefined FUN_1493df304(void)

undefined8 * FUN_1493df304(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1493df369(0,0);
  return param_2;
}



// FUNCTION 1493df369 FUN_1493df369 body=38 status=ok
// SIG undefined FUN_1493df369(void)

void FUN_1493df369(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493df390(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1493df390 FUN_1493df390 body=59 status=ok
// SIG undefined FUN_1493df390(void)

void FUN_1493df390(longlong *param_1)

{
  FUN_1493df3cb(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493df3cb FUN_1493df3cb body=47 status=ok
// SIG undefined FUN_1493df3cb(void)

void FUN_1493df3cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493df3fa FUN_1493df3fa body=114 status=ok
// SIG undefined FUN_1493df3fa(void)

void FUN_1493df3fa(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1493df46c FUN_1493df46c body=59 status=ok
// SIG undefined FUN_1493df46c(void)

void FUN_1493df46c(longlong *param_1)

{
  FUN_1493df369(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493df4a8 FUN_1493df4a8 body=476 status=ok
// SIG undefined FUN_1493df4a8(void)

void FUN_1493df4a8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493df686 FUN_1493df686 body=132 status=ok
// SIG undefined FUN_1493df686(void)

void FUN_1493df686(longlong param_1,int param_2)

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



// FUNCTION 1493df70c FUN_1493df70c body=101 status=ok
// SIG undefined FUN_1493df70c(void)

void * FUN_1493df70c(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x38);
  pvVar2 = *(void **)((longlong)param_2 + 0x30);
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_1493df7f8(param_1,iVar1);
    pvVar2 = *(void **)((longlong)param_1 + 0x30);
    if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 1493df772 FUN_1493df772 body=132 status=ok
// SIG undefined FUN_1493df772(void)

void FUN_1493df772(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493df7f8 FUN_1493df7f8 body=107 status=ok
// SIG undefined FUN_1493df7f8(void)

undefined8 FUN_1493df7f8(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 5) {
    iVar5 = 4;
  }
  else {
    iVar4 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
    iVar5 = (int)(uVar2 / 0xc);
    if (iVar5 < (int)param_2) {
      iVar5 = 0x7fffffff;
    }
    else if (iVar5 < 1) goto LAB_1493df83a;
  }
  iVar4 = iVar5;
  uVar3 = FUN_1493deebe(param_1,0,iVar4);
LAB_1493df83a:
  *(int *)(param_1 + 0x3c) = iVar4;
  return uVar3;
}



// FUNCTION 1493df864 FUN_1493df864 body=324 status=ok
// SIG undefined FUN_1493df864(void)

undefined4 * FUN_1493df864(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493df9aa(param_1,local_48);
  FUN_1493dfb22(param_3,local_40);
  *(undefined4 *)(local_40 + 0x31) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1493dfa96(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x18c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x31) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1493e0254(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493df9aa FUN_1493df9aa body=235 status=ok
// SIG undefined FUN_1493df9aa(void)

int * FUN_1493df9aa(longlong *param_1,int *param_2)

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
      FUN_1409e68b8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 400);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 400) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 400 + *param_1;
  return param_2;
}



// FUNCTION 1493dfa96 FUN_1493dfa96 body=139 status=ok
// SIG undefined FUN_1493dfa96(void)

undefined8 FUN_1493dfa96(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1493e0108(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 400);
    FUN_1493dfcd8(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 400),param_3,0x188);
    FUN_1493e01da(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1493dfb22 FUN_1493dfb22 body=437 status=ok
// SIG undefined FUN_1493dfb22(void)

undefined8 * FUN_1493dfb22(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  memset(local_17c + 0xc,0,0x148);
  local_1a0 = 2;
  local_b8 = DAT_14c846358 ^ 0x80000000;
  local_bc = DAT_14c846350._4_4_ ^ 0x80000000;
  local_c0 = (uint)DAT_14c846350 ^ 0x80000000;
  auVar4._0_8_ = CONCAT44(DAT_14c846350._4_4_,(uint)DAT_14c846350) ^ 0x8000000080000000;
  auVar4._12_4_ = 0x80000000;
  auVar4._8_4_ = local_b8;
  auVar3._4_4_ = 0x80000000;
  auVar3._0_4_ = local_c0;
  auVar3._8_4_ = 0x80000000;
  auVar3._12_4_ = 0x80000000;
  local_19c = insertps(auVar4,auVar3,0x30);
  auVar5._0_8_ = CONCAT44(DAT_14c846358,DAT_14c846350._4_4_) ^ 0x8000000080000000;
  auVar5._12_4_ = 0x80000000;
  auVar5._8_4_ = local_c0;
  auVar2._4_4_ = 0x80000000;
  auVar2._0_4_ = local_bc;
  auVar2._8_4_ = 0x80000000;
  auVar2._12_4_ = 0x80000000;
  local_18c = insertps(auVar5,auVar2,0x30);
  auVar6._0_8_ = CONCAT44((uint)DAT_14c846350,DAT_14c846358) ^ 0x8000000080000000;
  auVar6._12_4_ = 0x80000000;
  auVar6._8_4_ = local_bc;
  auVar1._4_4_ = 0x80000000;
  auVar1._0_4_ = local_b8;
  auVar1._8_4_ = 0x80000000;
  auVar1._12_4_ = 0x80000000;
  local_17c = insertps(auVar6,auVar1,0x30);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0x3f800000;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0x3f800000;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0x3f800000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0x3f800000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x3f800000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0x3f800000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3f800000;
  local_b4 = 0xbf800000;
  uStack_b0 = 0xbf800000;
  uStack_ac = 0xbf800000;
  uStack_a8 = 0xbf800000;
  local_a4 = 0xbf800000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0x3f800000;
  local_88 = 0xbf800000;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3f800000;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_1493dfd9e(param_2 + 2,&local_1a0);
  FUN_1493dfcd8(&local_1a0);
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493dfcd8 FUN_1493dfcd8 body=198 status=ok
// SIG undefined FUN_1493dfcd8(void)

void FUN_1493dfcd8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493dfd9e FUN_1493dfd9e body=874 status=ok
// SIG undefined FUN_1493dfd9e(void)

void FUN_1493dfd9e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x19] = 0;
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  uVar1 = param_2[0x1d];
  uVar2 = param_2[0x1e];
  uVar3 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  param_1[0x20] = 0;
  param_1[0x20] = param_2[0x20];
  param_2[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  param_2[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  param_1[0x24] = 0;
  param_1[0x24] = param_2[0x24];
  param_2[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  param_2[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  param_1[0x27] = 0;
  param_1[0x27] = param_2[0x27];
  param_2[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_2[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  param_1[0x2a] = 0;
  param_1[0x2a] = param_2[0x2a];
  param_2[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  param_2[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x2d] = param_2[0x2d];
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  return;
}



// FUNCTION 1493e0108 FUN_1493e0108 body=209 status=ok
// SIG undefined FUN_1493e0108(void)

int FUN_1493e0108(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1493e0152:
      lVar10 = (longlong)iVar1 * 400;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1493e01ce;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1493e01ce;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1493e01bc;
    }
  }
  return -1;
LAB_1493e01ce:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1493e01bc:
  iVar1 = *(int *)(lVar4 + 0x188 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493e0152;
}



// FUNCTION 1493e01da FUN_1493e01da body=122 status=ok
// SIG undefined FUN_1493e01da(void)

void FUN_1493e01da(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 400) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 400) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 400 + 4) = uVar5;
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



// FUNCTION 1493e0254 FUN_1493e0254 body=485 status=ok
// SIG undefined FUN_1493e0254(void)

void FUN_1493e0254(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 400;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x18c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x188 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e043a FUN_1493e043a body=52 status=ok
// SIG undefined FUN_1493e043a(void)

void FUN_1493e043a(longlong *param_1)

{
  FUN_1493e046e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e046e FUN_1493e046e body=352 status=ok
// SIG undefined FUN_1493e046e(void)

void FUN_1493e046e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x60);
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x60) != 0) {
        plVar3 = plVar2 + 6;
        if ((longlong *)plVar2[4] != (longlong *)0x0) {
          plVar3 = (longlong *)plVar2[4];
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401283f4(param_1,0);
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



// FUNCTION 1493e05d0 FUN_1493e05d0 body=207 status=ok
// SIG undefined FUN_1493e05d0(void)

int FUN_1493e05d0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1493e061a:
      lVar10 = (longlong)iVar1 * 0x60;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1493e0694;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1493e0694;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1493e0685;
    }
  }
  return -1;
LAB_1493e0694:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1493e0685:
  iVar1 = *(int *)(lVar4 + 0x50 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493e061a;
}



// FUNCTION 1493e06a0 FUN_1493e06a0 body=60 status=ok
// SIG undefined FUN_1493e06a0(void)

void FUN_1493e06a0(longlong param_1)

{
  FUN_1493e06dc(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e06dc FUN_1493e06dc body=59 status=ok
// SIG undefined FUN_1493e06dc(void)

void FUN_1493e06dc(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x70);
    do {
      if (*(longlong *)(pcVar1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1493e0718 FUN_1493e0718 body=83 status=ok
// SIG undefined FUN_1493e0718(void)

void FUN_1493e0718(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e076c(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1493e076c(param_1);
  return;
}



// FUNCTION 1493e076c FUN_1493e076c body=52 status=ok
// SIG undefined FUN_1493e076c(void)

void FUN_1493e076c(longlong *param_1)

{
  FUN_1493e07a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493e07a0 FUN_1493e07a0 body=353 status=ok
// SIG undefined FUN_1493e07a0(void)

void FUN_1493e07a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x3a0);
      if (*(char *)(*local_70 + 0x380 + (longlong)iStack_54 * 0x3a0) == '\x01') {
        FUN_1493c6fa6(plVar2 + 4);
        *(undefined1 *)(plVar2 + 0x70) = 0;
      }
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1493e0902(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493e0902 FUN_1493e0902 body=48 status=ok
// SIG undefined FUN_1493e0902(void)

void FUN_1493e0902(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x3a0,0x10);
  }
  return;
}



// FUNCTION 1493e0932 FUN_1493e0932 body=111 status=ok
// SIG undefined FUN_1493e0932(void)

void FUN_1493e0932(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1a0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1a0)) {
      uVar2 = uVar1 / 0x1a0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1a0,8);
  }
  return;
}



// FUNCTION 1493e09a2 FUN_1493e09a2 body=113 status=ok
// SIG undefined FUN_1493e09a2(void)

int FUN_1493e09a2(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_1493e0a14(lVar1 + (longlong)iVar4 * 0x410,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x400 + (longlong)iVar4 * 0x410);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1493e0a14 FUN_1493e0a14 body=70 status=ok
// SIG undefined FUN_1493e0a14(void)

undefined8 FUN_1493e0a14(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if (1 < (int)uVar1) {
      iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  else if (*(uint *)(param_2 + 1) + uVar1 != 1) {
    return 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),*(char *)(param_1 + 2) == *(char *)(param_2 + 2));
}



// FUNCTION 1493e0a5a FUN_1493e0a5a body=139 status=ok
// SIG undefined FUN_1493e0a5a(void)

longlong FUN_1493e0a5a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1493e09a2();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x410;
    if (lVar3 + lVar2 != 0) goto LAB_1493e0a96;
  }
  local_30 = param_3;
  FUN_1493e0ae6(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x410;
LAB_1493e0a96:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e0ae6 FUN_1493e0ae6 body=281 status=ok
// SIG undefined FUN_1493e0ae6(void)

undefined4 * FUN_1493e0ae6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1493e0c00(param_1,local_48);
  FUN_1493e0d5a(param_4,local_40);
  *(undefined4 *)(local_40 + 0x400) = 0xffffffff;
  cVar1 = FUN_1493e0cee(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x404) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x400) =
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
      FUN_1493e0f9c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493e0c00 FUN_1493e0c00 body=237 status=ok
// SIG undefined FUN_1493e0c00(void)

int * FUN_1493e0c00(longlong *param_1,int *param_2)

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
      FUN_145a5dc92(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x410);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x410) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x410 + *param_1;
  return param_2;
}


