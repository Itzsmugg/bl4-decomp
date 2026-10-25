// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d4f93e FUN_145d4f93e body=210 status=ok
// SIG undefined FUN_145d4f93e(void)

void FUN_145d4f93e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_141543068(param_1 + 0x160);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0xc4);
  if (plVar1 != (longlong *)0x0) {
    FUN_145d4fa12(local_38,param_1);
    FUN_1448b6402(plVar1 + 0x8e,local_40,local_38);
    FUN_1449db362(local_38);
    uVar2 = FUN_14477b072(plVar1,DAT_14cb601f0);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf1) == '\x01') {
    FUN_145d4fc00(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4fa12 FUN_145d4fa12 body=487 status=ok
// SIG undefined FUN_145d4fa12(void)

longlong * FUN_145d4fa12(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40d630;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_14584ab08;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40d630;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_14584ab08;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4fc00 FUN_145d4fc00 body=2021 status=ok
// SIG undefined FUN_145d4fc00(void)

void FUN_145d4fc00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined4 uStack_d0;
  undefined8 local_c8;
  char local_98;
  undefined1 local_84 [16];
  char local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = FUN_14479d2ce(param_1 + 0xcc);
  if ((lVar7 != 0) && (lVar8 = FUN_145d503e6(lVar7), lVar8 != 0)) {
    lVar9 = FUN_140861c56();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      plVar2 = (longlong *)(param_1 + 0x100);
      lVar9 = param_1 + 0x110;
      local_f8 = 0x100000000;
      local_e8 = 0xffffffff;
      uStack_e0 = 0;
      iVar16 = 0;
      lStack_f0 = lVar9;
      if (*(int *)(param_1 + 0x128) != 0) {
        FUN_1449c0562(&local_f8);
        iVar16 = *(int *)(param_1 + 0x128);
      }
      local_158 = local_e8;
      uVar11 = local_158;
      local_150 = uStack_e0;
      local_14c = uStack_dc;
      local_168 = local_f8;
      local_160 = lStack_f0;
      local_158._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
      iVar6 = local_158._4_4_;
      local_170 = plVar2;
      if ((local_158._4_4_ != iVar16) || (local_158 = uVar11, lStack_f0 != lVar9)) {
        do {
          local_158 = uVar11;
          puVar14 = (undefined8 *)(*local_170 + (longlong)iVar6 * 0x18);
          local_188 = *(undefined4 *)puVar14;
          uStack_184 = *(undefined4 *)((longlong)puVar14 + 4);
          uStack_180 = *(undefined4 *)(puVar14 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar14 + 0xc);
          FUN_148951326(lVar8,local_84,*puVar14);
          if ((local_74 == '\x01') &&
             ((local_1b8 = (longlong *)FUN_14479d2ce(&uStack_180), local_1b8 != (longlong *)0x0 &&
              (FUN_148950a30(lVar7,&local_f8,local_84,local_1b8), local_98 == '\x01')))) {
            uVar11 = FUN_140b040c0();
            plVar12 = (longlong *)(**(code **)(*local_1b8 + 0x288))(local_1b8,uVar11);
            if (plVar12 == (longlong *)0x0) {
LAB_145d5033a:
              local_1a8 = (longlong *)0x0;
            }
            else {
              uVar11 = FUN_140b040c0();
              local_1a8 = (longlong *)FUN_144718840(plVar12,uVar11);
              if (plVar12 == local_1a8) goto LAB_145d5033a;
            }
            uVar11 = FUN_144a7fd54();
            plVar12 = (longlong *)(**(code **)(*local_1b8 + 0x288))(local_1b8,uVar11);
            if (plVar12 != (longlong *)0x0) {
              uVar11 = FUN_144a7fd54();
              local_1b0 = (longlong *)FUN_144718840(plVar12,uVar11);
              if ((((plVar12 != local_1b0) && (local_1a8 != (longlong *)0x0)) &&
                  (local_1b0 != (longlong *)0x0)) &&
                 (lVar13 = (**(code **)(*local_1a8 + 0x20))(), lVar13 != 0)) {
                FUN_14889ba7c(&local_138,param_1);
                cVar5 = FUN_140b068ec(lVar13,2,&DAT_14cb241d0,&local_138);
                FUN_1449db362(&local_138);
                uVar11 = local_c8;
                puVar14 = local_d8;
                if (cVar5 != '\0') {
                  local_138 = (undefined8 *)local_f8;
                  uStack_130 = (longlong *)lStack_f0;
                  local_128 = local_e8;
                  uStack_120 = CONCAT44(uStack_dc,uStack_e0);
                  FUN_1448052ee(&local_138,&local_1a0);
                  uVar10 = (**(code **)(*local_1b0 + 0x28))();
                  uStack_120 = CONCAT62(uStack_120._2_6_,0x18);
                  local_138 = puVar14;
                  local_128 = uVar11;
                  local_118 = CONCAT71(local_118._1_7_,4);
                  local_148 = DAT_14cb24270;
                  uStack_140 = 0xffffffff;
                  FUN_140af060e(uVar10,&local_148,&local_138);
                  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)(byte)local_118 * 0x120));
                  if (pcVar4 != (code *)0x0) {
                    puVar14 = &local_138;
                    if (0x18 < (ushort)uStack_120) {
                      puVar14 = local_138;
                    }
                    (*pcVar4)(puVar14);
                  }
                  if (0x18 < (ushort)uStack_120) {
                    FUN_1400020a8(local_138);
                  }
                  uVar11 = (**(code **)(*local_1b0 + 0x28))();
                  uStack_120 = CONCAT62(uStack_120._2_6_,0x18);
                  local_138 = (undefined8 *)CONCAT44(uStack_19c,local_1a0);
                  local_128 = local_190;
                  local_118 = CONCAT71(local_118._1_7_,5);
                  local_148 = DAT_14cb80bf0;
                  uStack_140 = 0xffffffff;
                  FUN_140af060e(uVar11,&local_148,&local_138);
                  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)(byte)local_118 * 0x120));
                  if (pcVar4 != (code *)0x0) {
                    puVar14 = &local_138;
                    if (0x18 < (ushort)uStack_120) {
                      puVar14 = local_138;
                    }
                    (*pcVar4)(puVar14);
                  }
                  if (0x18 < (ushort)uStack_120) {
                    FUN_1400020a8(local_138);
                  }
                  uVar11 = (**(code **)(*local_1b0 + 0x28))();
                  uStack_120 = CONCAT62(uStack_120._2_6_,4);
                  local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffff00000000);
                  local_118 = CONCAT71(local_118._1_7_,1);
                  local_148 = DAT_14cb80bf8;
                  uStack_140 = 0xffffffff;
                  FUN_140af060e(uVar11,&local_148,&local_138);
                  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)(byte)local_118 * 0x120));
                  if (pcVar4 != (code *)0x0) {
                    puVar14 = &local_138;
                    if (0x18 < (ushort)uStack_120) {
                      puVar14 = local_138;
                    }
                    (*pcVar4)(puVar14);
                  }
                  if (0x18 < (ushort)uStack_120) {
                    FUN_1400020a8(local_138);
                  }
                  local_118 = 0;
                  uStack_110 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_138 = (undefined8 *)0x0;
                  uStack_130 = (longlong *)0x0;
                  local_108 = 0;
                  uStack_100 = 2;
                  FUN_14485c47a(&local_138,local_1b8);
                  FUN_140361b4a(&uStack_130,local_1a8);
                  FUN_14070e9ee(&local_148,local_1b0);
                  uStack_120 = local_148;
                  local_118 = CONCAT44(uStack_13c,uStack_140);
                  lVar13 = FUN_140a40fb0(local_1b8);
                  if (lVar13 != 0) {
                    FUN_1400bc96c(lVar13 + 0x1218,&DAT_14cb80c00);
                    FUN_14485c47a(&uStack_110,lVar13);
                  }
                  plVar12 = (longlong *)local_1b8[0x39];
                  if (plVar12 != (longlong *)0x0) {
                    lVar13 = FUN_144a3a302();
                    if ((*(int *)(lVar13 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                        == lVar13 + 0x30)) {
                      uStack_100 = (**(code **)(*plVar12 + 0x578))(plVar12,2);
                      (**(code **)(*plVar12 + 0x938))(plVar12,2,1);
                      FUN_14485c47a(&local_108,plVar12);
                    }
                  }
                  local_1b8 = (longlong *)(param_1 + 0x150);
                  iVar6 = *(int *)(param_1 + 0x158);
                  *(uint *)(param_1 + 0x158) = iVar6 + 1U;
                  if (*(uint *)(param_1 + 0x15c) < iVar6 + 1U) {
                    FUN_1488a6ed8(local_1b8,iVar6);
                  }
                  lVar13 = *local_1b8;
                  lVar15 = (longlong)iVar6 * 0x40;
                  puVar14 = (undefined8 *)(lVar13 + 0x30 + lVar15);
                  *puVar14 = local_108;
                  puVar14[1] = CONCAT44(uStack_fc,uStack_100);
                  puVar14 = (undefined8 *)(lVar13 + 0x20 + lVar15);
                  *puVar14 = local_118;
                  puVar14[1] = uStack_110;
                  puVar14 = (undefined8 *)(lVar13 + 0x10 + lVar15);
                  *puVar14 = local_128;
                  puVar14[1] = uStack_120;
                  puVar3 = (undefined4 *)(lVar13 + lVar15);
                  *puVar3 = (undefined4)local_138;
                  puVar3[1] = local_138._4_4_;
                  puVar3[2] = (undefined4)uStack_130;
                  puVar3[3] = uStack_130._4_4_;
                }
              }
            }
          }
          local_158 = CONCAT44(local_158._4_4_,(uint)local_158 & ~local_168._4_4_);
          FUN_1449c0562(&local_168);
          iVar6 = local_158._4_4_;
          uVar11 = local_158;
        } while (((local_158._4_4_ != iVar16) || (local_160 != lVar9)) || (local_170 != plVar2));
      }
      if ((*(int *)(param_1 + 0x158) != 0) &&
         (lVar7 = *(longlong *)(param_1 + 0x48), *(char *)(lVar7 + 0xf2) == '\x01')) {
        local_1a0 = CONCAT31(local_1a0._1_3_,2);
        local_170 = (longlong *)FUN_144a7be76(param_1);
        FUN_144a7bec8(param_1,&local_138);
        local_f8 = local_f8 & 0xffffffffffffff00;
        uStack_d0 = 0;
        FUN_144a7bf34(&local_f8,&local_138,&local_170,&local_1a0);
        if (uStack_130 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)uStack_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*uStack_130 + 0x10))();
          }
        }
        FUN_1447c3578(lVar7 + 0xf8,&local_138,&local_f8);
        fVar17 = (float)FUN_144a7ecd0(&local_138);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_118 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar14 = &local_138;
          if (0x18 < (ushort)uStack_120) {
            puVar14 = local_138;
          }
          (*pcVar4)(puVar14);
        }
        if (0x18 < (ushort)uStack_120) {
          FUN_1400020a8(local_138);
        }
        FUN_144a5ac3a(&local_f8);
        fVar18 = (float)FUN_141236616(param_1);
        *(float *)(param_1 + 0x78) = fVar17 + fVar18;
        *(undefined1 *)(param_1 + 0x7c) = 1;
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d503e6 FUN_145d503e6 body=8 status=ok
// SIG undefined FUN_145d503e6(void)

undefined8 FUN_145d503e6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x3d8);
}



// FUNCTION 145d503ee FUN_145d503ee body=292 status=ok
// SIG undefined FUN_145d503ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d503ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ecb48) {
    FUN_144b3d300(&DAT_14c9ecb48);
    if (DAT_14c9ecb48 == -1) {
      FUN_145d5065c();
      FUN_145d50512();
      FUN_140db5666(&DAT_14c9ecaa0,0,&DAT_14c9eca38,L"FMobileLocalFogVolumeTiledRenderPS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeSplat.usf",
                    L"LocalFogVolumeTiledPS",3,1,FUN_1471dc768,FUN_1471dc708,&LAB_1471dc6f0,
                    &LAB_1471dc6ec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f02b8);
      _DAT_14c9ecaa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d04d2a);
      _Init_thread_footer(&DAT_14c9ecb48);
    }
  }
  return &DAT_14c9ecaa0;
}



// FUNCTION 145d50512 FUN_145d50512 body=205 status=ok
// SIG undefined FUN_145d50512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d50512(void)

{
  if ((DAT_14c9eca9f & 2) == 0) {
    DAT_14c9eca9f = DAT_14c9eca9f | 2;
    _DAT_14c9eca40 = L"FMobileLocalFogVolumeTiledRenderPS";
    _DAT_14c9eca58 = FUN_146826540;
    _DAT_14c9eca60 = FUN_146825d77;
    _DAT_14c9eca68 = FUN_146825fd6;
    _DAT_14c9eca70 = FUN_1407e02ea;
    _DAT_14c9eca78 = FUN_146826273;
    _DAT_14c9eca50 = FUN_1471dc6be;
    _DAT_14c9eca90 = 0xffffffff000000e0;
    _DAT_14c9eca98 = 8;
    DAT_14c9eca9c = 0;
    _DAT_14c9eca80 = &LAB_1471dc6e8;
    FUN_145d505e0();
    FUN_1407e00cc(&DAT_14c9eca38);
    return;
  }
  return;
}



// FUNCTION 145d505e0 FUN_145d505e0 body=123 status=ok
// SIG undefined FUN_145d505e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d505e0(void)

{
  _DAT_14c9f1708 = L"BASE";
  DAT_14c9f1732 = 4;
  _DAT_14c9f1710 = FUN_140b35ae4();
  _DAT_14c9f1718 = DAT_14c9eca48;
  _DAT_14c9f1720 = &LAB_14682652b;
  DAT_14c9eca48 = &DAT_14c9f1708;
  DAT_14c9eca9d = DAT_14c9eca9d + '\x01';
  _DAT_14c9f1728 = 0x100000000;
  if (*(char *)(_DAT_14c9f1710 + 100) != '\0') {
    DAT_14c9eca9e = DAT_14c9eca9e + '\x01';
  }
  return;
}



// FUNCTION 145d5065c FUN_145d5065c body=261 status=ok
// SIG undefined FUN_145d5065c(void)

void FUN_145d5065c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f0338) {
    FUN_144b3d300(&DAT_14c9f0338);
    if (DAT_14c9f0338 == -1) {
      FUN_145d50762(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x391;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f02b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2623b);
      _Init_thread_footer(&DAT_14c9f0338);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d50762 FUN_145d50762 body=226 status=ok
// SIG undefined FUN_145d50762(void)

longlong * FUN_145d50762(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d7ca6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5084a FUN_145d5084a body=138 status=ok
// SIG undefined FUN_145d5084a(void)

undefined1 * FUN_145d5084a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x392;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d50846;
}



// FUNCTION 145d508d4 FUN_145d508d4 body=144 status=ok
// SIG undefined FUN_145d508d4(void)

code * FUN_145d508d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d50964();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MobileBasePass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000393;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d5084a;
}



// FUNCTION 145d50964 FUN_145d50964 body=286 status=ok
// SIG undefined FUN_145d50964(void)

undefined * FUN_145d50964(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca098c0) {
    FUN_144b3d300(&DAT_14ca098c0);
    if (DAT_14ca098c0 == -1) {
      FUN_1415430a6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"MobileBasePass";
      local_78 = L"FMobileBasePassUniformParameters";
      local_38 = 0;
      local_50 = 0xd40;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca09840,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142de8241);
      _Init_thread_footer(&DAT_14ca098c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca09840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d50a84 FUN_145d50a84 body=138 status=ok
// SIG undefined FUN_145d50a84(void)

code * FUN_145d50a84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreIntegratedGFSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc1800000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147244cd0;
}



// FUNCTION 145d50b0e FUN_145d50b0e body=138 status=ok
// SIG undefined FUN_145d50b0e(void)

code * FUN_145d50b0e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc2000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d50a84;
}



// FUNCTION 145d50b98 FUN_145d50b98 body=144 status=ok
// SIG undefined FUN_145d50b98(void)

code * FUN_145d50b98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x95000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462ee062;
}



// FUNCTION 145d50c28 FUN_145d50c28 body=146 status=ok
// SIG undefined FUN_145d50c28(void)

code * FUN_145d50c28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d50cba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairVoxelTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"MegaLights::FHairVoxelTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e000000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e288;
  return FUN_145dd960c;
}



// FUNCTION 145d50cba FUN_145d50cba body=261 status=ok
// SIG undefined FUN_145d50cba(void)

void FUN_145d50cba(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0e308) {
    FUN_144b3d300(&DAT_14ca0e308);
    if (DAT_14ca0e308 == -1) {
      FUN_145d50dc0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairVoxelTraceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xd8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e288,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb7f);
      _Init_thread_footer(&DAT_14ca0e308);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d50dc0 FUN_145d50dc0 body=226 status=ok
// SIG undefined FUN_145d50dc0(void)

longlong * FUN_145d50dc0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ed18a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d50ea8 FUN_145d50ea8 body=138 status=ok
// SIG undefined FUN_145d50ea8(void)

undefined1 * FUN_145d50ea8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a81af4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HairStrands";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsViewUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d50ea4;
}



// FUNCTION 145d50f32 FUN_145d50f32 body=284 status=ok
// SIG undefined FUN_145d50f32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d50f32(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0be0) {
    FUN_144b3d300(&DAT_14cae0be0);
    if (DAT_14cae0be0 == -1) {
      FUN_145d5104e();
      FUN_140db5666(&DAT_14cae0b38,0,&DAT_14cae0ad0,L"FRecomputeTangentsPerVertexPassCS<0>",
                    L"/Engine/Private/RecomputeTangentsPerVertexPass.usf",L"MainCS",5,1,
                    FUN_147ada768,FUN_147ada740,&LAB_1463d09b2,&LAB_147ada73c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cae0b38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435122b5);
      _Init_thread_footer(&DAT_14cae0be0);
    }
  }
  return &DAT_14cae0b38;
}



// FUNCTION 145d5104e FUN_145d5104e body=205 status=ok
// SIG undefined FUN_145d5104e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5104e(void)

{
  if ((DAT_14cae0b37 & 2) == 0) {
    DAT_14cae0b37 = DAT_14cae0b37 | 2;
    _DAT_14cae0ad8 = L"FRecomputeTangentsPerVertexPassCS<0>";
    _DAT_14cae0af0 = FUN_146826540;
    _DAT_14cae0af8 = FUN_146825d77;
    _DAT_14cae0b00 = FUN_146825fd6;
    _DAT_14cae0b08 = FUN_1407e02ea;
    _DAT_14cae0b10 = FUN_146826273;
    _DAT_14cae0ae8 = FUN_147ada70e;
    _DAT_14cae0b28 = 0xffffffff00000110;
    _DAT_14cae0b30 = 8;
    DAT_14cae0b34 = 0;
    _DAT_14cae0b18 = &LAB_147ada738;
    FUN_145d5111c();
    FUN_1407e00cc(&DAT_14cae0ad0);
    return;
  }
  return;
}



// FUNCTION 145d5111c FUN_145d5111c body=133 status=ok
// SIG undefined FUN_145d5111c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5111c(void)

{
  _DAT_14cae3430 = L"BASE";
  DAT_14cae345a = 4;
  FUN_145d511a2();
  _DAT_14cae3440 = DAT_14cae0ae0;
  _DAT_14cae3438 = &DAT_14cae3460;
  _DAT_14cae3448 = &LAB_14682652b;
  DAT_14cae0ae0 = &DAT_14cae3430;
  DAT_14cae0b35 = DAT_14cae0b35 + '\x01';
  _DAT_14cae3450 = 0x100000000;
  if (DAT_14cae34c4 != '\0') {
    DAT_14cae0b36 = DAT_14cae0b36 + '\x01';
  }
  return;
}



// FUNCTION 145d511a2 FUN_145d511a2 body=210 status=ok
// SIG undefined FUN_145d511a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d511a2(void)

{
  if ((DAT_14cae34c7 & 2) == 0) {
    DAT_14cae34c7 = DAT_14cae34c7 | 2;
    _DAT_14cae3468 = L"FBaseRecomputeTangentsPerVertexShader";
    _DAT_14cae3480 = FUN_146826540;
    _DAT_14cae3488 = FUN_146825d77;
    _DAT_14cae3490 = FUN_146825fd6;
    _DAT_14cae3498 = FUN_1407e02ea;
    _DAT_14cae34a0 = FUN_146826273;
    _DAT_14cae3478 = FUN_147ae1cce;
    _DAT_14cae34b8 = 0xffffffff00000110;
    _DAT_14cae34c0 = 8;
    DAT_14cae34c4 = 0;
    _DAT_14cae34a8 = &LAB_147ae1cf8;
    FUN_145d51274();
    FUN_145d515ca();
    FUN_1407e00cc(&DAT_14cae3460);
    return;
  }
  return;
}



// FUNCTION 145d51274 FUN_145d51274 body=121 status=ok
// SIG undefined FUN_145d51274(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d51274(void)

{
  FUN_145d512ee();
  _DAT_14cae34c8 = L"IntermediateAccumBufferUAV";
  DAT_14cae34f2 = FUN_140850cc5();
  _DAT_14cae34d0 = FUN_140fb78d0();
  _DAT_14cae34e0 = &LAB_14682652b;
  _DAT_14cae34e8 = 0x1000000e0;
  _DAT_14cae34f0 = 0;
  _DAT_14cae34d8 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae34c8;
  return;
}



// FUNCTION 145d512ee FUN_145d512ee body=121 status=ok
// SIG undefined FUN_145d512ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d512ee(void)

{
  FUN_145d51368();
  _DAT_14cae34f8 = L"IntermediateAccumBufferOffset";
  DAT_14cae3522 = FUN_140850cc5();
  _DAT_14cae3500 = FUN_140ec6960();
  _DAT_14cae3510 = &LAB_14682652b;
  _DAT_14cae3518 = 0x1000000e4;
  _DAT_14cae3520 = 0;
  _DAT_14cae3508 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae34f8;
  return;
}



// FUNCTION 145d51368 FUN_145d51368 body=121 status=ok
// SIG undefined FUN_145d51368(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d51368(void)

{
  FUN_145d513e2();
  _DAT_14cae3528 = L"TangentBufferUAV";
  DAT_14cae3552 = FUN_140850cc5();
  _DAT_14cae3530 = FUN_140fb78d0();
  _DAT_14cae3540 = &LAB_14682652b;
  _DAT_14cae3548 = 0x1000000ea;
  _DAT_14cae3550 = 0;
  _DAT_14cae3538 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae3528;
  return;
}



// FUNCTION 145d513e2 FUN_145d513e2 body=121 status=ok
// SIG undefined FUN_145d513e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d513e2(void)

{
  FUN_145d5145c();
  _DAT_14cae3558 = L"TangentInputBuffer";
  DAT_14cae3582 = FUN_140850cc5();
  _DAT_14cae3560 = FUN_140fb78d0();
  _DAT_14cae3570 = &LAB_14682652b;
  _DAT_14cae3578 = 0x1000000ee;
  _DAT_14cae3580 = 0;
  _DAT_14cae3568 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae3558;
  return;
}



// FUNCTION 145d5145c FUN_145d5145c body=121 status=ok
// SIG undefined FUN_145d5145c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5145c(void)

{
  FUN_145d514d6();
  _DAT_14cae3588 = L"ColorInputBuffer";
  DAT_14cae35b2 = FUN_140850cc5();
  _DAT_14cae3590 = FUN_140fb78d0();
  _DAT_14cae35a0 = &LAB_14682652b;
  _DAT_14cae35a8 = 0x1000000f2;
  _DAT_14cae35b0 = 0;
  _DAT_14cae3598 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae3588;
  return;
}



// FUNCTION 145d514d6 FUN_145d514d6 body=121 status=ok
// SIG undefined FUN_145d514d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d514d6(void)

{
  FUN_145d51550();
  _DAT_14cae35b8 = L"SkinCacheStart";
  DAT_14cae35e2 = FUN_140850cc5();
  _DAT_14cae35c0 = FUN_140ec6960();
  _DAT_14cae35d0 = &LAB_14682652b;
  _DAT_14cae35d8 = 0x1000000f6;
  _DAT_14cae35e0 = 0;
  _DAT_14cae35c8 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae35b8;
  return;
}



// FUNCTION 145d51550 FUN_145d51550 body=121 status=ok
// SIG undefined FUN_145d51550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d51550(void)

{
  FUN_145d51646();
  _DAT_14cae35e8 = L"NumVertices";
  DAT_14cae3612 = FUN_140850cc5();
  _DAT_14cae35f0 = FUN_140ec6960();
  _DAT_14cae3600 = &LAB_14682652b;
  _DAT_14cae3608 = 0x1000000fc;
  _DAT_14cae3610 = 0;
  _DAT_14cae35f8 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae35e8;
  return;
}



// FUNCTION 145d515ca FUN_145d515ca body=123 status=ok
// SIG undefined FUN_145d515ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d515ca(void)

{
  _DAT_14cae3678 = L"BASE";
  DAT_14cae36a2 = 4;
  _DAT_14cae3680 = FUN_140b35ae4();
  _DAT_14cae3688 = DAT_14cae3470;
  _DAT_14cae3690 = &LAB_14682652b;
  DAT_14cae3470 = &DAT_14cae3678;
  DAT_14cae34c5 = DAT_14cae34c5 + '\x01';
  _DAT_14cae3698 = 0x100000000;
  if (*(char *)(_DAT_14cae3680 + 100) != '\0') {
    DAT_14cae34c6 = DAT_14cae34c6 + '\x01';
  }
  return;
}



// FUNCTION 145d51646 FUN_145d51646 body=216 status=ok
// SIG undefined FUN_145d51646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d51646(void)

{
  _DAT_14cae3648 = L"VertexColorChannel";
  DAT_14cae3672 = FUN_140850cc5();
  _DAT_14cae3650 = FUN_140ec6960();
  _DAT_14cae3660 = &LAB_14682652b;
  _DAT_14cae3668 = &DAT_100000108;
  _DAT_14cae3670 = 0;
  _DAT_14cae3658 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae3648;
  _DAT_14cae3618 = L"InputStreamStart";
  DAT_14cae3642 = FUN_140850cc5();
  _DAT_14cae3620 = FUN_140ec6960();
  _DAT_14cae3630 = &LAB_14682652b;
  _DAT_14cae3638 = 0x100000102;
  _DAT_14cae3640 = 0;
  _DAT_14cae3628 = DAT_14cae3470;
  DAT_14cae3470 = &DAT_14cae3618;
  return;
}



// FUNCTION 145d5171e FUN_145d5171e body=62 status=ok
// SIG undefined FUN_145d5171e(void)

void FUN_145d5171e(longlong param_1)

{
  FUN_145d517e4();
  FUN_145d5175c(param_1);
  FUN_145be02dc(param_1 + 0x28,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_144a8da18(param_1 + 0x50);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145d5175c FUN_145d5175c body=134 status=ok
// SIG undefined FUN_145d5175c(void)

void FUN_145d5175c(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x48);
    FUN_1447a97f4(local_40,param_1 + 0x50);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1720);
    FUN_145d5188a(&local_48);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1720);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d517e4 FUN_145d517e4 body=166 status=ok
// SIG undefined FUN_145d517e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d517e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1728) {
    FUN_144b3d300(&DAT_14c9a1728);
    if (DAT_14c9a1728 == -1) {
      DAT_14c9a16f0 = 0;
      DAT_14c9a16f8 = 0;
      DAT_14c9a16d0 = 0;
      _DAT_14c9a16d8 = 0;
      _DAT_14c9a16fc = 0xffffffff00000080;
      DAT_14c9a1704 = 0;
      DAT_14c9a1710 = 0;
      DAT_14c9a1718 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14c9a1720);
      atexit(FUN_142b245cf);
      _Init_thread_footer(&DAT_14c9a1728);
      return;
    }
  }
  return;
}



// FUNCTION 145d5188a FUN_145d5188a body=227 status=ok
// SIG undefined FUN_145d5188a(void)

void FUN_145d5188a(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (DAT_14c9a16d8 != DAT_14c9a1704) {
    iVar4 = FUN_144a78877(param_1[1] ^ *param_1,param_1[2]);
    lVar2 = DAT_14c9a16d0;
    puVar5 = &DAT_14c9a1708;
    if (DAT_14c9a1710 != (undefined *)0x0) {
      puVar5 = DAT_14c9a1710;
    }
    uVar7 = (longlong)iVar4 & (longlong)DAT_14c9a1718 - 1U;
    if ((longlong)*(int *)(puVar5 + uVar7 * 4) != -1) {
      lVar9 = (longlong)*(int *)(puVar5 + uVar7 * 4) * 0x40;
      lVar1 = DAT_14c9a16d0 + lVar9;
      cVar3 = FUN_14709eb5e(lVar1,param_1);
      if ((cVar3 == '\0') || (*(uint *)(lVar2 + 8 + lVar9) != param_1[2])) {
        do {
          lVar9 = lVar1;
          lVar2 = DAT_14c9a16d0;
          lVar8 = (longlong)*(int *)(lVar9 + 0x38);
          if (lVar8 == -1) {
            return;
          }
          lVar8 = lVar8 * 0x40;
          lVar1 = DAT_14c9a16d0 + lVar8;
          cVar3 = FUN_14709eb5e(lVar1,param_1);
        } while ((cVar3 == '\0') || (*(uint *)(lVar2 + 8 + lVar8) != param_1[2]));
        puVar6 = (undefined4 *)(lVar9 + 0x38);
      }
      else {
        puVar6 = (undefined4 *)(puVar5 + uVar7 * 4);
      }
      FUN_14709ead8(*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 145d5196e FUN_145d5196e body=614 status=ok
// SIG undefined FUN_145d5196e(void)

undefined4 FUN_145d5196e(longlong param_1,char param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  char *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == '\x01') {
    if ((((*(int *)(param_3 + 0x18) < 2) && (*(int *)(param_3 + 8) < 2)) &&
        (*(int *)(param_3 + 0x28) < 2)) && (uVar8 = 0x3f0, *(char *)(param_3 + 0x40) == '\0'))
    goto LAB_145d51ac4;
    local_b8 = (char *)(param_1 + 0x300);
    *(undefined1 *)(param_1 + 0x300) = 1;
    FUN_1413ebcfe(&local_a8,param_3);
  }
  else {
    local_b8 = (char *)(param_1 + 0x300);
    *(char *)(param_1 + 0x300) = param_2;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    local_60 = 0x5a00000a8c;
    local_58 = 0x3ff0000000000000;
    local_50 = 0;
    local_68 = 0;
  }
  lVar2 = param_1 + 0x308;
  FUN_145d51c20(lVar2,&local_a8);
  FUN_141478002(&local_a8);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_145d51c72(param_1 + 0x140,&local_a8);
  if ((longlong)(int)uStack_a0 == 0) {
    uVar8 = 0;
  }
  else {
    puVar9 = local_a8 + (longlong)(int)uStack_a0 * 2;
    bVar10 = false;
    puVar11 = local_a8;
    local_b0 = param_3;
    do {
      plVar3 = (longlong *)*puVar11;
      plVar4 = (longlong *)puVar11[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
        bVar12 = cVar5 == '\0';
        bVar10 = (bool)(bVar10 | !bVar12);
      }
      else {
        bVar10 = true;
        bVar12 = false;
      }
      if (plVar4 != (longlong *)0x0) {
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
      }
      param_3 = local_b0;
    } while ((bVar12) && (puVar11 = puVar11 + 2, puVar11 != puVar9));
    uVar8 = 0;
    if (bVar10) {
      if (*local_b8 == '\x01') {
        uVar6 = FUN_145cefb3b(lVar2);
        iVar7 = FUN_145cefbbe(param_1 + 0x140,uVar6,lVar2);
        if (iVar7 == -1) goto LAB_145d51aa7;
      }
      uVar8 = FUN_14154318a(param_1);
    }
  }
LAB_145d51aa7:
  FUN_145d51bd5(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_145d51ac4:
  FUN_141478002(param_3);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 145d51bd5 FUN_145d51bd5 body=75 status=ok
// SIG undefined FUN_145d51bd5(void)

void FUN_145d51bd5(longlong param_1,int param_2)

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



// FUNCTION 145d51c20 FUN_145d51c20 body=82 status=ok
// SIG undefined FUN_145d51c20(void)

longlong FUN_145d51c20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  return param_1;
}



// FUNCTION 145d51c72 FUN_145d51c72 body=319 status=ok
// SIG undefined FUN_145d51c72(void)

void FUN_145d51c72(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  FUN_145d51db2(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
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
      iVar3 = iStack_5c;
      lVar4 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_148aeba94(param_2,iVar1);
      }
      lVar4 = (longlong)iVar3 * 0x78 + lVar4;
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar4 + 0x60);
      lVar4 = *(longlong *)(lVar4 + 0x68);
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d51db2 FUN_145d51db2 body=69 status=ok
// SIG undefined FUN_145d51db2(void)

void FUN_145d51db2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145d51bd5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145d51df8(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145d51df8 FUN_145d51df8 body=95 status=ok
// SIG undefined FUN_145d51df8(void)

void FUN_145d51df8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145d51e58 FUN_145d51e58 body=402 status=ok
// SIG undefined FUN_145d51e58(void)

void FUN_145d51e58(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14163838c(param_3 + 0x18);
  local_60 = FUN_145a486fe;
  local_58 = 0;
  FUN_145d520ee(local_50,param_1);
  FUN_145d51fec(param_2 + 0x50,&local_60,local_50);
  FUN_1449db362(local_50);
  *(code **)(param_3 + 0x98) = local_60;
  local_60 = FUN_141477eb6;
  local_58 = 0;
  FUN_145d520ee(local_50,param_1,&local_60);
  FUN_145d51fec(param_2 + 0x80,&local_60,local_50);
  FUN_1449db362(local_50);
  *(code **)(param_3 + 0xa0) = local_60;
  local_60 = FUN_145a489ea;
  local_58 = 0;
  FUN_145d520ee(local_50,param_1,&local_60);
  FUN_145d51fec(param_2 + 0x68,&local_60,local_50);
  FUN_1449db362(local_50);
  *(code **)(param_3 + 0xa8) = local_60;
  local_60 = FUN_14160b0b4;
  local_58 = 0;
  FUN_145d5229a(local_50,param_1,&local_60);
  FUN_145cefd90(param_2 + 0x38,&local_60,local_50);
  FUN_1449db362(local_50);
  *(code **)(param_3 + 0xb0) = local_60;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d51fec FUN_145d51fec body=216 status=ok
// SIG undefined FUN_145d51fec(void)

undefined8 * FUN_145d51fec(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d520ee FUN_145d520ee body=428 status=ok
// SIG undefined FUN_145d520ee(void)

longlong * FUN_145d520ee(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145d521ce:
    *puVar5 = &PTR_LAB_14b528fa0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b528f30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d521ce;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b528fa0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b528f30;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145d5229a FUN_145d5229a body=428 status=ok
// SIG undefined FUN_145d5229a(void)

longlong * FUN_145d5229a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145d5237a:
    *puVar5 = &PTR_LAB_14b5276b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b529010;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d5237a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b5276b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b529010;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145d52446 FUN_145d52446 body=214 status=ok
// SIG undefined FUN_145d52446(void)

void FUN_145d52446(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  undefined1 *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ea;
  undefined1 local_e8 [24];
  undefined1 local_d0 [80];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_100 = *(undefined2 *)(lVar1 + 0x4a);
  local_fe = *(undefined2 *)(lVar1 + 0x62);
  local_fc = *(undefined2 *)(lVar2 + 0x4c);
  local_f7 = 0;
  local_f4 = 0x6ff;
  local_f0 = 0;
  local_ea = *(undefined2 *)(lVar1 + 0x11a);
  local_110 = &local_ea;
  local_108 = local_e8;
  FUN_145d5251e(&local_100,local_e8);
  FUN_141543376(local_e8,in_stack_00000028 + 0x28,local_d0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5251e FUN_145d5251e body=146 status=ok
// SIG undefined FUN_145d5251e(void)

undefined8 * FUN_145d5251e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_145d525b2(param_2,param_2 + 3);
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



// FUNCTION 145d525b2 FUN_145d525b2 body=166 status=ok
// SIG undefined FUN_145d525b2(void)

void FUN_145d525b2(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5265a FUN_145d5265a body=245 status=ok
// SIG undefined FUN_145d5265a(void)

void FUN_145d5265a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2 + 8,local_30);
  lVar1 = FUN_140dbb734(param_1,local_30);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  uVar3 = 2;
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) != 0)) {
    lVar1 = FUN_140f8052a();
    uVar3 = 3;
    if (*(longlong *)(lVar4 + 0x70) != lVar1) {
      lVar1 = FUN_14627a9cc();
      if (*(longlong *)(lVar4 + 0x70) == lVar1) {
        uVar3 = 1;
      }
      else {
        FUN_140bf8bc4();
        uVar3 = 2;
      }
    }
  }
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d52750 FUN_145d52750 body=141 status=ok
// SIG undefined FUN_145d52750(void)

void FUN_145d52750(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145d527cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 145d527de FUN_145d527de body=40 status=ok
// SIG undefined FUN_145d527de(void)

undefined8 FUN_145d527de(undefined8 param_1,int param_2)

{
  FUN_145d52806();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d52806 FUN_145d52806 body=473 status=ok
// SIG undefined FUN_145d52806(void)

void FUN_145d52806(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1837b0;
  param_1[5] = &PTR_FUN_14b183c50;
  param_1[6] = &PTR_LAB_14b183c90;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52a30(param_1 + 0x65);
  FUN_145d52a9d(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52a66(param_1 + 0x59);
  FUN_145d529df(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52a07(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x53];
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
  plVar3 = (longlong *)param_1[0x51];
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
  FUN_145d52aea(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52b38(param_1 + 0x40);
  FUN_145d52bc0(param_1 + 0x33);
  FUN_140ffc082(param_1);
  return;
}



// FUNCTION 145d529df FUN_145d529df body=40 status=ok
// SIG undefined FUN_145d529df(void)

void FUN_145d529df(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486c0e4e(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145d52a07 FUN_145d52a07 body=40 status=ok
// SIG undefined FUN_145d52a07(void)

void FUN_145d52a07(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486c0da8(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145d52a30 FUN_145d52a30 body=53 status=ok
// SIG undefined FUN_145d52a30(void)

void FUN_145d52a30(longlong *param_1)

{
  FUN_145d52c48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52a66 FUN_145d52a66 body=55 status=ok
// SIG undefined FUN_145d52a66(void)

void FUN_145d52a66(longlong *param_1)

{
  FUN_145d52f86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52a9d FUN_145d52a9d body=77 status=ok
// SIG undefined FUN_145d52a9d(void)

void FUN_145d52a9d(longlong param_1,int param_2)

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



// FUNCTION 145d52aea FUN_145d52aea body=77 status=ok
// SIG undefined FUN_145d52aea(void)

void FUN_145d52aea(longlong param_1,int param_2)

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



// FUNCTION 145d52b38 FUN_145d52b38 body=81 status=ok
// SIG undefined FUN_145d52b38(void)

void FUN_145d52b38(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52b8a(param_1 + 3);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52b8a FUN_145d52b8a body=53 status=ok
// SIG undefined FUN_145d52b8a(void)

void FUN_145d52b8a(longlong *param_1)

{
  FUN_145d52ca2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52bc0 FUN_145d52bc0 body=81 status=ok
// SIG undefined FUN_145d52bc0(void)

void FUN_145d52bc0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145d52c12(param_1 + 3);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52c12 FUN_145d52c12 body=53 status=ok
// SIG undefined FUN_145d52c12(void)

void FUN_145d52c12(longlong *param_1)

{
  FUN_145d52e14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d52c48 FUN_145d52c48 body=90 status=ok
// SIG undefined FUN_145d52c48(void)

void FUN_145d52c48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d52ca2 FUN_145d52ca2 body=369 status=ok
// SIG undefined FUN_145d52ca2(void)

void FUN_145d52ca2(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d52e14 FUN_145d52e14 body=369 status=ok
// SIG undefined FUN_145d52e14(void)

void FUN_145d52e14(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d52f86 FUN_145d52f86 body=378 status=ok
// SIG undefined FUN_145d52f86(void)

void FUN_145d52f86(longlong *param_1,int param_2)

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
      FUN_1486ba7c8((longlong)iStack_54 * 0x30 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5310c FUN_145d5310c body=135 status=ok
// SIG undefined FUN_145d5310c(void)

undefined8 * FUN_145d5310c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a6950d0;
  memset(param_1 + 0x16,0,0x118);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebff8) {
    FUN_144b3d300(&DAT_14caebff8);
    if (DAT_14caebff8 == -1) {
      FUN_141543642();
      atexit((_func_5014 *)&LAB_14356f4cc);
      _Init_thread_footer(&DAT_14caebff8);
    }
  }
  return param_1;
}



// FUNCTION 145d5319e FUN_145d5319e body=135 status=ok
// SIG undefined FUN_145d5319e(void)

undefined8 * FUN_145d5319e(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a695600;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec010) {
    FUN_144b3d300(&DAT_14caec010);
    if (DAT_14caec010 == -1) {
      FUN_1415436e8();
      atexit((_func_5014 *)&LAB_14356f4e0);
      _Init_thread_footer(&DAT_14caec010);
    }
  }
  return param_1;
}



// FUNCTION 145d53230 FUN_145d53230 body=135 status=ok
// SIG undefined FUN_145d53230(void)

undefined8 * FUN_145d53230(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a696010;
  memset(param_1 + 0x16,0,0x118);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec0a0) {
    FUN_144b3d300(&DAT_14caec0a0);
    if (DAT_14caec0a0 == -1) {
      FUN_14154378e();
      atexit((_func_5014 *)&LAB_14356f558);
      _Init_thread_footer(&DAT_14caec0a0);
    }
  }
  return param_1;
}



// FUNCTION 145d532c2 FUN_145d532c2 body=135 status=ok
// SIG undefined FUN_145d532c2(void)

undefined8 * FUN_145d532c2(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a696680;
  memset(param_1 + 0x16,0,0x148);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec0b8) {
    FUN_144b3d300(&DAT_14caec0b8);
    if (DAT_14caec0b8 == -1) {
      FUN_141543834();
      atexit((_func_5014 *)&LAB_14356f56c);
      _Init_thread_footer(&DAT_14caec0b8);
    }
  }
  return param_1;
}



// FUNCTION 145d53354 FUN_145d53354 body=135 status=ok
// SIG undefined FUN_145d53354(void)

undefined8 * FUN_145d53354(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a696d80;
  memset(param_1 + 0x16,0,0x1b8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec0d0) {
    FUN_144b3d300(&DAT_14caec0d0);
    if (DAT_14caec0d0 == -1) {
      FUN_1415438da();
      atexit((_func_5014 *)&LAB_14356f580);
      _Init_thread_footer(&DAT_14caec0d0);
    }
  }
  return param_1;
}



// FUNCTION 145d533e6 FUN_145d533e6 body=135 status=ok
// SIG undefined FUN_145d533e6(void)

undefined8 * FUN_145d533e6(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bca3ba0;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13b90) {
    FUN_144b3d300(&DAT_14cc13b90);
    if (DAT_14cc13b90 == -1) {
      FUN_141543980();
      atexit((_func_5014 *)&LAB_1444f2246);
      _Init_thread_footer(&DAT_14cc13b90);
    }
  }
  return param_1;
}



// FUNCTION 145d53478 FUN_145d53478 body=135 status=ok
// SIG undefined FUN_145d53478(void)

undefined8 * FUN_145d53478(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bca9b20;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13860) {
    FUN_144b3d300(&DAT_14cc13860);
    if (DAT_14cc13860 == -1) {
      FUN_141543a26();
      atexit((_func_5014 *)&LAB_1444f20bb);
      _Init_thread_footer(&DAT_14cc13860);
    }
  }
  return param_1;
}



// FUNCTION 145d5350a FUN_145d5350a body=135 status=ok
// SIG undefined FUN_145d5350a(void)

undefined8 * FUN_145d5350a(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcae320;
  memset(param_1 + 0x16,0,0xcc);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13b18) {
    FUN_144b3d300(&DAT_14cc13b18);
    if (DAT_14cc13b18 == -1) {
      FUN_141543acc();
      atexit((_func_5014 *)&LAB_1444f220a);
      _Init_thread_footer(&DAT_14cc13b18);
    }
  }
  return param_1;
}



// FUNCTION 145d53592 FUN_145d53592 body=80 status=ok
// SIG undefined FUN_145d53592(void)

void FUN_145d53592(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0xdc) = *param_2;
  FUN_145d535e2(param_1 + 0xe8,param_4);
  *(undefined1 *)(param_1 + 0x160) = param_3;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_145d53660(param_1);
  FUN_1449db362(param_4);
  return;
}



// FUNCTION 145d535e2 FUN_145d535e2 body=124 status=ok
// SIG undefined FUN_145d535e2(void)

void FUN_145d535e2(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d53660 FUN_145d53660 body=1086 status=ok
// SIG undefined FUN_145d53660(void)

void FUN_145d53660(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 **local_90;
  undefined8 *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  void *local_50;
  uint local_48;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (longlong)param_1 + 0xdc;
  iVar6 = (int)param_1[0x1b];
  do {
    switch(iVar6) {
    case 0:
      iVar6 = FUN_1411eec94(lVar3);
      if (iVar6 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
      }
      iVar6 = FUN_1411eec94(lVar3);
      if (iVar6 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
      }
      local_3c = 1;
      local_34 = 0xffffffff;
      FUN_145d53d3a(param_1);
    default:
switchD_145d536a9_default:
      if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    case 1:
      iVar6 = FUN_1411eec94(lVar3);
      if ((iVar6 == 2) && (iVar6 = FUN_141543b76(param_1[6]), iVar6 == 1)) {
        FUN_145d53afe(param_1,&local_50);
        _Src = local_50;
        lVar3 = param_1[6];
        local_70 = (longlong *)0x0;
        local_68 = CONCAT44(local_68._4_4_,local_48);
        local_78 = param_1;
        if ((longlong)(int)local_48 == 0) {
          local_68 = (ulonglong)local_48;
        }
        else {
          FUN_144a06ca8(&local_70,local_48,0);
          memcpy(local_70,_Src,(longlong)(int)local_48 << 2);
        }
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        local_58 = 3;
        *local_60 = &PTR_LAB_14b4eddb0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_60[2] = lVar11;
        *local_60 = &PTR_FUN_14b4e9950;
        local_60[3] = local_78;
        local_60[4] = local_70;
        local_70 = (longlong *)0x0;
        *(undefined4 *)(local_60 + 5) = (undefined4)local_68;
        *(undefined4 *)((longlong)local_60 + 0x2c) = local_68._4_4_;
        local_68 = 0;
        local_98 = (undefined8 **)((ulonglong)local_98 & 0xffffffffffffff00);
        local_90 = &local_60;
        FUN_145d54248(lVar3,&local_50,0,(char)param_1[0x2c]);
        if (local_70 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto switchD_145d536a9_default;
      }
      break;
    case 2:
      iVar6 = FUN_1411eec94(lVar3);
      if (iVar6 == 2) {
        if (param_1[10] == 0) {
          (**(code **)(*param_1 + 0x50))(param_1,&local_78);
          plVar1 = local_70;
          if (local_70 == (longlong *)0x0) {
            param_1[10] = (longlong)local_78;
            plVar12 = (longlong *)param_1[0xb];
            if (plVar12 != (longlong *)0x0) {
              param_1[0xb] = 0;
LAB_145d53845:
              LOCK();
              plVar1 = plVar12 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar6 = *piVar2;
                UNLOCK();
joined_r0x000145d53af2:
                if (iVar6 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
            param_1[10] = (longlong)local_78;
            plVar12 = (longlong *)param_1[0xb];
            if (local_70 == plVar12) {
              LOCK();
              plVar12 = local_70 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                iVar6 = *piVar2;
                UNLOCK();
                plVar12 = plVar1;
                goto joined_r0x000145d53af2;
              }
            }
            else {
              param_1[0xb] = (longlong)local_70;
              if (plVar12 != (longlong *)0x0) goto LAB_145d53845;
            }
          }
          plVar1 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_70 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          uVar7 = (**(code **)(*param_1 + 0x58))(param_1);
          lVar4 = param_1[10];
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,3,0x10);
          local_80 = 3;
          *local_88 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar11 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          local_88[2] = lVar10;
          *local_88 = &PTR_FUN_14b4e99c0;
          local_88[3] = param_1;
          local_88[4] = FUN_145a0595e;
          *(undefined4 *)(local_88 + 5) = 0;
          uVar8 = FUN_141543b76(param_1[6]);
          uVar9 = FUN_141543b72(lVar3);
          local_98 = &local_88;
          FUN_145d53bcc(lVar4,uVar9,uVar7,uVar8);
        }
        goto switchD_145d536a9_default;
      }
      break;
    case 3:
      cVar5 = FUN_145d53b76(param_1);
      if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
      }
      break;
    case 4:
      param_1[7] = *(longlong *)((longlong)param_1 + 0xdc);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    iVar6 = (int)param_1[0x1b] + 1;
    *(int *)(param_1 + 0x1b) = iVar6;
  } while( true );
}



// FUNCTION 145d53afe FUN_145d53afe body=120 status=ok
// SIG undefined FUN_145d53afe(void)

longlong * FUN_145d53afe(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  iVar1 = *(int *)(lVar4 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lVar5 = 0;
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + lVar5) + 0xe0);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = uVar2;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 145d53b76 FUN_145d53b76 body=85 status=ok
// SIG undefined FUN_145d53b76(void)

bool FUN_145d53b76(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_145d53bb0;
  }
  plVar2 = (longlong *)0x0;
LAB_145d53bb0:
  bVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
  return bVar1 < 6;
}



// FUNCTION 145d53bcc FUN_145d53bcc body=129 status=ok
// SIG undefined FUN_145d53bcc(void)

void FUN_145d53bcc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_14114e6dc(param_1 + 0x540,param_5);
    local_3c = param_2;
    local_38 = param_3;
    local_34 = param_4;
    FUN_145d547c6(param_1);
  }
  FUN_1449db362(param_5);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d53c4e FUN_145d53c4e body=234 status=ok
// SIG undefined FUN_145d53c4e(void)

void FUN_145d53c4e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d53afe(param_1,local_38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_14b4edd40;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b4e9aa0;
  local_48[3] = param_1;
  FUN_145d53e48(uVar1,local_38,param_2,&local_48);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d53d3a FUN_145d53d3a body=269 status=ok
// SIG undefined FUN_145d53d3a(void)

void FUN_145d53d3a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14b4e9a30;
  local_28[3] = param_1;
  local_28[4] = local_38;
  *(undefined4 *)(local_28 + 5) = local_30;
  FUN_14114e6dc(param_1 + 0x23,&local_28);
  *(undefined1 *)(param_1 + 0x25) = 0;
  (**(code **)(*param_1 + 0x70))(param_1);
  *(undefined4 *)(param_1 + 0x22) = 0;
  FUN_1415a26e8(param_1);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d53e48 FUN_145d53e48 body=275 status=ok
// SIG undefined FUN_145d53e48(void)

void FUN_145d53e48(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[0x69];
  local_29 = param_3;
  local_58 = (**(code **)(*param_1 + 0x2d0))();
  local_48 = (longlong *)FUN_145d53ffe(param_2,&local_58,&local_29,param_4);
  local_50 = local_48 + 2;
  FUN_145d53f5c(&local_50);
  plVar4 = local_48;
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 == (longlong *)0x0) {
    FUN_1411d7792(lVar3,&local_40);
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    FUN_1411d7792(lVar3);
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
  }
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1449db362(param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d53f5c FUN_145d53f5c body=162 status=ok
// SIG undefined FUN_145d53f5c(void)

void FUN_145d53f5c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d53f9b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d53f9b;
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
LAB_145d53f9b:
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
                    /* WARNING: Could not recover jumptable at 0x000145d53ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d53ffe FUN_145d53ffe body=183 status=ok
// SIG undefined FUN_145d53ffe(void)

undefined8 *
FUN_145d53ffe(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4eff00;
  local_50 = 0;
  local_48 = 0;
  FUN_145d541ca(&local_50,param_4);
  local_58 = &local_50;
  FUN_145d540b6(puVar1 + 2,param_1,*param_2,*param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d540b6 FUN_145d540b6 body=276 status=ok
// SIG undefined FUN_145d540b6(void)

undefined8 *
FUN_145d540b6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b4e4490;
  param_1[4] = &PTR_FUN_14b4e44b8;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_145d541ca(param_1 + 0xc,param_5);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(longlong *)(param_1[6] + 0x30) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1[6] + 0x30) + 0x360);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_141028a6c();
    }
  }
  param_1[7] = uVar3;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145d541ca FUN_145d541ca body=124 status=ok
// SIG undefined FUN_145d541ca(void)

void FUN_145d541ca(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d54248 FUN_145d54248 body=877 status=ok
// SIG undefined FUN_145d54248(void)

void FUN_145d54248(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong **local_c0;
  undefined1 local_b1;
  longlong local_b0;
  longlong *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined2 local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_1[0x6a];
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_98;
  pvVar3 = (void *)*param_2;
  local_b1 = param_3;
  local_a8 = param_1;
  if (lVar7 == 0) {
    local_94 = 0;
  }
  else {
    FUN_144a06ca8(&local_a0,local_98,0);
    memcpy(local_a0,pvVar3,lVar7 << 2);
  }
  local_90 = 0;
  local_88 = 0;
  FUN_145d545b6(&local_90,param_6);
  local_80 = CONCAT11(param_5,param_4);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,5,0x10);
  plVar2 = local_78;
  local_70 = 5;
  *local_78 = (longlong)&PTR_LAB_14b4eddb0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_78[2] = lVar6;
  *local_78 = (longlong)&PTR_FUN_14b4eff20;
  local_78[3] = 0;
  FUN_14485c47a(local_78 + 3,param_1);
  pvVar3 = local_a0;
  plVar2[4] = (longlong)local_a8;
  plVar2[5] = 0;
  lVar7 = (longlong)local_98;
  *(int *)(plVar2 + 6) = local_98;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(plVar2 + 5,local_98,0);
    memcpy((void *)plVar2[5],pvVar3,lVar7 << 2);
  }
  plVar2[7] = local_90;
  local_90 = 0;
  *(undefined4 *)(plVar2 + 8) = local_88;
  local_88 = 0;
  *(undefined2 *)(plVar2 + 9) = local_80;
  uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4eff90;
  plVar2 = plVar5 + 2;
  local_c0 = &local_58;
  local_58 = local_78;
  local_78 = (longlong *)0x0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,local_70);
  local_70 = 0;
  local_c8 = param_4;
  FUN_145d546d6(plVar2,param_2,uVar4,local_b1);
  local_68 = plVar2;
  local_60 = plVar5;
  FUN_145d54634(&local_68,plVar2);
  local_58 = plVar2;
  local_50 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_1411d7792(local_b0,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_1411d7792(local_b0);
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
  plVar2 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1449db362(&local_78);
  FUN_1449db362(&local_90);
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_6);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d545b6 FUN_145d545b6 body=124 status=ok
// SIG undefined FUN_145d545b6(void)

void FUN_145d545b6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d54634 FUN_145d54634 body=162 status=ok
// SIG undefined FUN_145d54634(void)

void FUN_145d54634(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d54673;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d54673;
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
LAB_145d54673:
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
                    /* WARNING: Could not recover jumptable at 0x000145d546d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d546d6 FUN_145d546d6 body=240 status=ok
// SIG undefined FUN_145d546d6(void)

undefined8 *
FUN_145d546d6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  *param_1 = &PTR_FUN_14b4f3700;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  FUN_14485c47a(param_1 + 6,param_3);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_145d545b6(param_1 + 7,param_6);
  *(undefined1 *)(param_1 + 9) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x49) = param_5;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xb] = 0;
  FUN_1449db362(param_6);
  return param_1;
}



// FUNCTION 145d547c6 FUN_145d547c6 body=603 status=ok
// SIG undefined FUN_145d547c6(void)

void FUN_145d547c6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x54) != 0) goto LAB_145d54957;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  (**(code **)(*param_1 + 0x90))(param_1,1);
  lVar4 = param_1[9];
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4f0c80;
  FUN_145c08d38(plVar6 + 2,param_1[7],lVar4);
  plVar6[2] = (longlong)&PTR_FUN_14b4ef690;
  plVar6[0xc] = 0;
  *(undefined4 *)(plVar6 + 0xd) = 0;
  if (plVar6 == (longlong *)0x0) {
    param_1[0xc] = 0x10;
    plVar8 = (longlong *)param_1[0xd];
    if (plVar8 != (longlong *)0x0) {
      param_1[0xd] = 0;
LAB_145d54997:
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
      if (plVar6 != (longlong *)0x0) goto LAB_145d5488f;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0xc] = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)param_1[0xd];
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
      param_1[0xd] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_145d54997;
    }
LAB_145d5488f:
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
  lVar4 = param_1[0xc];
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar7;
  *local_50 = &PTR_FUN_14b4f0ca0;
  local_50[3] = param_1;
  local_50[4] = FUN_141472dd2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + 0x50) = *param_2;
  *(undefined4 *)(lVar4 + 0x58) = uVar3;
  local_40 = 0;
  local_38 = 0;
  FUN_14114e6dc(&local_40,&local_50);
  FUN_141543d2a(lVar4,&local_40);
  FUN_1449db362(&local_50);
LAB_145d54957:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d54a22 FUN_145d54a22 body=284 status=ok
// SIG undefined FUN_145d54a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d54a22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ddee8) {
    FUN_144b3d300(&DAT_14c9ddee8);
    if (DAT_14c9ddee8 == -1) {
      FUN_145d54b3e();
      FUN_140db5666(&DAT_14c9dde40,0,&DAT_14c9dddd8,L"FHdrCustomResolveArray2xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve2xPS",3,1,
                    FUN_1471994f8,FUN_1471994a0,FUN_1462ce3c6,&LAB_14719949c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9dde40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce34);
      _Init_thread_footer(&DAT_14c9ddee8);
    }
  }
  return &DAT_14c9dde40;
}



// FUNCTION 145d54b3e FUN_145d54b3e body=206 status=ok
// SIG undefined FUN_145d54b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d54b3e(void)

{
  if ((DAT_14c9dde3f & 2) == 0) {
    DAT_14c9dde3f = DAT_14c9dde3f | 2;
    _DAT_14c9ddde0 = L"FHdrCustomResolveArray2xPS";
    _DAT_14c9dddf8 = FUN_146826540;
    _DAT_14c9dde00 = FUN_146825d77;
    _DAT_14c9dde08 = FUN_146825fd6;
    _DAT_14c9dde10 = FUN_1407e02ea;
    _DAT_14c9dde18 = FUN_146826273;
    _DAT_14c9dddf0 = FUN_14719946e;
    _DAT_14c9dde30 = 0xffffffff000000e8;
    _DAT_14c9dde38 = 8;
    DAT_14c9dde3c = 0;
    _DAT_14c9dde20 = &LAB_147199498;
    FUN_145d54c0c();
    FUN_1407e00cc(&DAT_14c9dddd8);
  }
  return &DAT_14c9dddd8;
}



// FUNCTION 145d54c0c FUN_145d54c0c body=133 status=ok
// SIG undefined FUN_145d54c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d54c0c(void)

{
  _DAT_14c9e1810 = L"BASE";
  DAT_14c9e183a = 4;
  FUN_145d1b2ce();
  _DAT_14c9e1820 = DAT_14c9ddde8;
  _DAT_14c9e1818 = &DAT_14c9dd5c0;
  _DAT_14c9e1828 = &LAB_14682652b;
  DAT_14c9ddde8 = &DAT_14c9e1810;
  DAT_14c9dde3d = DAT_14c9dde3d + '\x01';
  _DAT_14c9e1830 = 0x100000000;
  if (DAT_14c9dd624 != '\0') {
    DAT_14c9dde3e = DAT_14c9dde3e + '\x01';
  }
  return;
}



// FUNCTION 145d54c92 FUN_145d54c92 body=409 status=ok
// SIG undefined FUN_145d54c92(void)

undefined8 * FUN_145d54c92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_145d54e2c(param_1 + 8,iVar1,0);
    FUN_145d54e8e(param_1[8],uVar3,iVar1);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar3 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_140a1e386(param_1 + 10,iVar1,0);
    FUN_140a1e307(param_1[10],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xc] = param_2[0xc];
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar3 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xe,iVar1,0);
    FUN_140b8566a(param_1[0xe],uVar3,iVar1);
  }
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 145d54e2c FUN_145d54e2c body=98 status=ok
// SIG undefined FUN_145d54e2c(void)

void FUN_145d54e2c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145d54e8e FUN_145d54e8e body=116 status=ok
// SIG undefined FUN_145d54e8e(void)

void FUN_145d54e8e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145d54f02 FUN_145d54f02 body=423 status=ok
// SIG undefined FUN_145d54f02(void)

void FUN_145d54f02(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145d55116();
  lVar1 = param_1 + 0x3c60;
  FUN_145d550aa(lVar1,*(undefined4 *)(param_1 + 0x3c58));
  if ((longlong)*(int *)(param_1 + 0x3c58) != 0) {
    puVar5 = *(ulonglong **)(param_1 + 0x3c50);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x3c58) * 2;
    do {
      local_70 = *puVar5;
      if ((local_70 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_70);
      }
      uVar2 = local_70;
      local_68 = puVar5[1];
      if (((DAT_14c950c29 & 1) != 0) && (local_70 != 0)) {
        FUN_1456cec3c(local_70);
      }
      local_88 = uVar2;
      if (((DAT_14c950c29 & 1) != 0) && (uVar2 != 0)) {
        FUN_1456cec3c(uVar2);
      }
      if (((DAT_14c950c29 & 1) != 0) && (uVar2 != 0)) {
        FUN_1456cec3c(uVar2);
      }
      uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      FUN_14148d9ca(lVar1,uVar3 >> 0x10 ^ uVar3,&local_88);
      local_88 = local_68;
      local_80 = 0x7201;
      local_78 = 0;
      local_60 = &local_70;
      local_58 = &local_88;
      FUN_145d551ce(lVar1,local_4c,&local_60);
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d550aa FUN_145d550aa body=107 status=ok
// SIG undefined FUN_145d550aa(void)

void FUN_145d550aa(longlong param_1,uint param_2)

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
  if ((((int)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x48))) &&
     (*(int *)(param_1 + 0x48) <= iVar3)) {
    FUN_148dbcbd6(param_1);
    FUN_14589443e(param_1,param_2);
    return;
  }
  FUN_14589443e(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_145d55512(param_1);
  return;
}



// FUNCTION 145d55116 FUN_145d55116 body=183 status=ok
// SIG undefined FUN_145d55116(void)

void FUN_145d55116(longlong *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_14487fd02();
  bVar4 = *(byte *)((longlong)param_1 + 0x2ef4) & 0xfe | iVar3 == 3;
  *(byte *)((longlong)param_1 + 0x2ef4) = bVar4;
  if (param_2 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    bVar2 = cVar1 * '\x02';
    bVar4 = *(byte *)((longlong)param_1 + 0x2ef4);
  }
  *(byte *)((longlong)param_1 + 0x2ef4) = bVar4 & 0xfd | bVar2;
  if ((param_1[0x735] != param_1[0x75d]) || ((int)param_1[0x736] != 0x7201)) {
    param_1[0x735] = param_1[0x75d];
    *(undefined4 *)(param_1 + 0x736) = 0x7201;
    param_1[0x737] = 0;
  }
  uVar5 = (**(code **)(*param_1 + 0x8b8))(param_1);
  *(undefined4 *)(param_1 + 0x75) = uVar5;
  FUN_14587625a(param_1);
  FUN_145d55722(param_1,param_2);
  return;
}



// FUNCTION 145d551ce FUN_145d551ce body=417 status=ok
// SIG undefined FUN_145d551ce(void)

undefined4 * FUN_145d551ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d55422(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar7);
    uVar7 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  local_40[1] = *puVar1;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar2 & 1) != 0) && (uVar7 != 0)) {
    FUN_1456cec3c(uVar7);
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_145d55370(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x24) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145d55512(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d55370 FUN_145d55370 body=176 status=ok
// SIG undefined FUN_145d55370(void)

undefined8 FUN_145d55370(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar10 = FUN_14148d9ca(param_1,param_2,&local_30);
    if (iVar10 != -1) {
      lVar2 = *param_1;
      lVar7 = *param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      lVar8 = param_3[1];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar9 = param_3[3];
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
      *puVar1 = (int)param_3[2];
      puVar1[1] = uVar5;
      puVar1[2] = (int)lVar9;
      puVar1[3] = uVar6;
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
      *puVar1 = (int)lVar7;
      puVar1[1] = uVar3;
      puVar1[2] = (int)lVar8;
      puVar1[3] = uVar4;
      FUN_148dbcd1a(param_1,*param_4);
      *param_4 = iVar10;
      uVar11 = 1;
      goto LAB_145d55394;
    }
  }
  uVar11 = 0;
LAB_145d55394:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d55422 FUN_145d55422 body=240 status=ok
// SIG undefined FUN_145d55422(void)

int * FUN_145d55422(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145d55512 FUN_145d55512 body=527 status=ok
// SIG undefined FUN_145d55512(void)

void FUN_145d55512(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x28);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x28;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d55722 FUN_145d55722 body=571 status=ok
// SIG undefined FUN_145d55722(void)

void FUN_145d55722(longlong *param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_ab8 [32];
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined8 local_a88;
  undefined4 local_a78;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined1 local_a68 [48];
  undefined4 local_a38;
  undefined4 local_a00;
  undefined4 local_9d0;
  char local_9cc;
  undefined8 local_9c8;
  undefined4 local_9c0;
  undefined1 local_9b8 [2088];
  longlong local_190;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [12];
  char local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_ab8;
  _Src = (void *)(**(code **)(*param_1 + 0x670))();
  memcpy(local_a68,_Src,0x98);
  local_9cc = *(char *)((longlong)_Src + 0x9c);
  if (local_9cc == '\x01') {
    local_9d0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9c0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9c8 = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9b8,(longlong)_Src + 0xb0);
  local_f8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_f0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x988);
  local_78 = *(char *)((longlong)_Src + 0x9f0);
  if (local_78 == '\x01') {
    puVar2 = (undefined8 *)((longlong)_Src + 0x990);
    puVar3 = auStack_d8;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  local_48 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_68 = *(undefined8 *)((longlong)_Src + 0xa00);
  uStack_60 = *(undefined8 *)((longlong)_Src + 0xa08);
  local_58 = *(undefined4 *)((longlong)_Src + 0xa10);
  uStack_54 = *(undefined4 *)((longlong)_Src + 0xa14);
  uStack_50 = *(undefined4 *)((longlong)_Src + 0xa18);
  uStack_4c = *(undefined4 *)((longlong)_Src + 0xa1c);
  local_a38 = (undefined4)param_1[0x75];
  local_a00 = *(undefined4 *)((longlong)param_1 + 0x3ac);
  (**(code **)(*param_1 + 0x660))(param_1);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x72] = param_2;
  local_a78 = 0;
  local_a74 = 1;
  local_a70 = 0x40000000;
  (**(code **)(*param_1 + 0x780))(param_1,param_2);
  lVar1 = FUN_14093f908(param_1);
  local_a98 = *(undefined4 *)(lVar1 + 0x448);
  uStack_a94 = *(undefined4 *)(lVar1 + 0x44c);
  uStack_a90 = *(undefined4 *)(lVar1 + 0x450);
  uStack_a8c = *(undefined4 *)(lVar1 + 0x454);
  local_a88 = *(undefined8 *)(lVar1 + 0x458);
  (**(code **)(*param_1 + 0x738))(param_1,&local_a98,0x40a00000);
  (**(code **)(*param_1 + 0x6a0))(param_1,0);
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_ab8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5595e FUN_145d5595e body=241 status=ok
// SIG undefined FUN_145d5595e(void)

void FUN_145d5595e(longlong param_1,double *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x2e58) & 0x20) == 0) {
    *(uint *)(param_1 + 0x2e58) = *(uint *)(param_1 + 0x2e58) | 0x20;
    *(undefined8 *)(param_1 + 0x3d8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x3e0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 1000) = 0x3ff0000000000000;
    uVar3 = 0;
    uVar4 = 0x3ff00000;
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x3d8);
    uVar4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3d8) >> 0x20);
  }
  if ((((*param_2 != (double)CONCAT44(uVar4,uVar3)) ||
       (NAN(*param_2) || NAN((double)CONCAT44(uVar4,uVar3)))) ||
      (param_2[1] != *(double *)(param_1 + 0x3e0))) ||
     (((NAN(param_2[1]) || NAN(*(double *)(param_1 + 0x3e0)) ||
       (param_2[2] != *(double *)(param_1 + 1000))) ||
      (NAN(param_2[2]) || NAN(*(double *)(param_1 + 1000)))))) {
    *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_1 + 1000);
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x3d8);
    *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x3e0);
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x3f4) = uVar3;
    *(undefined4 *)(param_1 + 0x3f8) = uVar4;
    *(undefined4 *)(param_1 + 0x3fc) = uVar1;
    *(double *)(param_1 + 0x400) = param_2[2];
    lVar2 = FUN_1447210f0(param_1);
    *(float *)(param_1 + 0x424) = (float)*(double *)(lVar2 + 0x6d0);
    *(undefined4 *)(param_1 + 0x420) = param_3;
    *(byte *)(param_1 + 0x2e58) = *(byte *)(param_1 + 0x2e58) | 0x40;
  }
  return;
}



// FUNCTION 145d55a50 FUN_145d55a50 body=600 status=ok
// SIG undefined FUN_145d55a50(void)

void FUN_145d55a50(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  local_40 = local_2c;
  local_48 = local_28;
  (**(code **)(*param_1 + 0x3e0))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d55caa FUN_145d55caa body=138 status=ok
// SIG undefined FUN_145d55caa(void)

void FUN_145d55caa(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (double)param_4;
  local_30 = (double)param_3;
  local_10 = (double)param_7;
  local_18 = (double)param_6;
  local_38 = (double)param_2;
  local_20 = (double)param_5;
  (**(code **)(*param_1 + 0x420))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d55d36 FUN_145d55d36 body=667 status=ok
// SIG undefined FUN_145d55d36(void)

longlong * FUN_145d55d36(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  code **local_98;
  int local_8c;
  code *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_3[1] == 0) || (param_3[2] == 0)) || (*(int *)(param_3[2] + 8) < 1)) {
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x48);
      lVar9 = (longlong)*(int *)(param_1 + 0x50) * 0x70;
      do {
        FUN_140bc46c6(*param_3,lVar8,0,0);
        lVar8 = lVar8 + 0x70;
        lVar9 = lVar9 + -0x70;
      } while (lVar9 != 0);
    }
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar3 = *(char *)(param_1 + 0x58);
    uVar6 = FUN_14479d2ce(*(longlong *)(*param_3 + 8) + 0x58);
    FUN_145d55fd2(&local_58,uVar6);
    bVar4 = true;
    if (local_58 != 0) {
      local_68 = 0;
      local_60 = 0;
      plVar7 = (longlong *)FUN_14001cc68(0x68,0x10);
      FUN_145d56000(plVar7,param_3);
      plVar1 = plVar7 + 2;
      local_78 = plVar1;
      local_70 = plVar7;
      FUN_145d5606c(&local_78,plVar1);
      if (cVar3 == '\0') {
        local_88 = FUN_145c81adc;
        local_80 = 0;
        FUN_145d5610e(&local_68,&local_78);
      }
      lVar8 = (**(code **)(*(longlong *)*param_3 + 0x70))();
      if (lVar8 == 0) {
        local_88 = (code *)0x0;
        local_80 = 0;
      }
      else {
        local_80 = *(undefined4 *)(lVar8 + 0x98);
        local_88 = *(code **)(lVar8 + 0x90);
      }
      local_98 = &local_88;
      FUN_145d5623a(local_58,&local_8c,param_1 + 0x20,&local_68);
      plVar5 = local_70;
      *(int *)(plVar7 + 9) = local_8c;
      if (local_8c == 0 || cVar3 != '\0') {
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
        FUN_1449db362(&local_68);
      }
      else {
        *param_2 = (longlong)plVar1;
        param_2[1] = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
        FUN_1449db362(&local_68);
        bVar4 = false;
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (!bVar4) goto LAB_145d55d78;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_145d55d78:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d55fd2 FUN_145d55fd2 body=46 status=ok
// SIG undefined FUN_145d55fd2(void)

void FUN_145d55fd2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x148);
    lVar1 = *(longlong *)(param_2 + 0x150);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 145d56000 FUN_145d56000 body=108 status=ok
// SIG undefined FUN_145d56000(void)

void FUN_145d56000(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b419640;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &PTR_LAB_14b419c58;
  param_1[5] = *param_2;
  param_1[6] = param_2[1];
  lVar1 = param_2[2];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[2] = &PTR_FUN_14b419658;
  return;
}



// FUNCTION 145d5606c FUN_145d5606c body=162 status=ok
// SIG undefined FUN_145d5606c(void)

void FUN_145d5606c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d560ab;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d560ab;
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
LAB_145d560ab:
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
                    /* WARNING: Could not recover jumptable at 0x000145d5610a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d5610e FUN_145d5610e body=300 status=ok
// SIG undefined FUN_145d5610e(void)

void FUN_145d5610e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b419c70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b419680;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b419c70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b419680;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000145d56225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d5623a FUN_145d5623a body=1639 status=ok
// SIG undefined FUN_145d5623a(void)

int * FUN_145d5623a(longlong param_1,int *param_2,code *param_3,longlong *param_4,
                   undefined8 *param_5)

{
  code *pcVar1;
  longlong *plVar2;
  int *piVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  code *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined8 uStack_68;
  undefined2 *local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_3 + 8) != 0) {
    lVar12 = FUN_145d56936();
    if (lVar12 == 0) {
      pcVar1 = param_3 + 8;
      local_c8 = *(longlong **)param_3;
      local_c0 = *(undefined4 *)pcVar1;
      uStack_bc = *(undefined4 *)(param_3 + 0xc);
      uStack_b8 = *(undefined4 *)(param_3 + 0x10);
      uStack_b4 = *(undefined4 *)(param_3 + 0x14);
      local_b0 = (void *)0x0;
      local_a8 = *(int *)(param_3 + 0x20);
      lVar12 = (longlong)local_a8;
      pvVar4 = *(void **)(param_3 + 0x18);
      local_f0 = param_4;
      if (lVar12 == 0) {
        local_a4 = 0;
        local_98 = *(longlong **)pcVar1;
        uStack_90 = *(undefined8 *)(param_3 + 0x10);
        local_80 = 0;
        local_a0 = local_c8;
LAB_145d562ee:
        local_88 = (void *)0x0;
        local_7c = 0;
        local_58 = 0;
        local_c8 = local_a0;
        local_78 = local_a0;
LAB_145d5631d:
        local_60 = (undefined2 *)0x0;
        local_54 = 0;
        local_a0 = local_78;
        local_70 = local_98;
        uStack_68 = uStack_90;
      }
      else {
        FUN_1446dd670(&local_b0,local_a8,0);
        memcpy(local_b0,pvVar4,lVar12 * 2);
        pvVar4 = local_b0;
        local_80 = local_a8;
        lVar12 = (longlong)local_a8;
        local_a0 = local_c8;
        local_98 = (longlong *)CONCAT44(uStack_bc,local_c0);
        uStack_90 = CONCAT44(uStack_b4,uStack_b8);
        local_88 = (void *)0x0;
        if (lVar12 == 0) goto LAB_145d562ee;
        FUN_1446dd670(&local_88,local_a8,0);
        memcpy(local_88,pvVar4,lVar12 * 2);
        pvVar4 = local_88;
        local_58 = local_80;
        lVar12 = (longlong)local_80;
        local_78 = local_a0;
        local_70 = local_98;
        uStack_68 = uStack_90;
        local_60 = (undefined2 *)0x0;
        if (lVar12 == 0) goto LAB_145d5631d;
        FUN_1446dd670(&local_60,local_80,0);
        memcpy(local_60,pvVar4,lVar12 * 2);
      }
      uVar6 = (uint)((ulonglong)uStack_68 >> 0x10);
      uVar18 = (uint)uStack_68 & 0xffff;
      uVar8 = (uint)((ulonglong)local_70 >> 0x10);
      uVar17 = (uint)local_70 & 0xffff;
      uVar8 = ((uint)local_70 << 0x10 | uVar17) + (int)((ulonglong)local_70 >> 0x20) +
              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar17 >> 4);
      uVar9 = FUN_144a78877(0,(uVar8 >> 2) +
                              ((uint)uStack_68 << 0x10 | uVar18) +
                              (int)((ulonglong)uStack_68 >> 0x20) + (uVar6 << 0x13 | uVar6 & 0xffff)
                              + (uVar18 >> 4) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8);
      iVar11 = local_58 + -1;
      puVar7 = local_60;
      if (local_58 == 0) {
        iVar11 = 0;
        puVar7 = &DAT_149dfb77a;
      }
      plVar5 = (longlong *)(param_1 + 0xa8);
      uVar10 = FUN_144a49b4a(iVar11,puVar7);
      uVar9 = FUN_144a78877(uVar9,uVar10);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar11 = FUN_145d569f4(plVar5,uVar9,&local_a0);
      if (iVar11 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)iVar11 * 0x50 + *plVar5;
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (lVar12 == 0) {
        FUN_14475cc44(pcVar1,&local_78);
        iVar11 = (int)local_70 + -1;
        if ((int)local_70 == 0) {
          iVar11 = 0;
        }
        FUN_1446f82e2(&local_a0,iVar11,local_78,1);
        plVar2 = local_a0;
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_78 = DAT_14cb80948;
        local_70 = plVar2;
        uStack_68 = 0;
        uVar13 = thunk_FUN_14050fd64();
        FUN_140b0c6f6(uVar13,&local_a0,&local_78);
        if (local_a0 == (longlong *)0x0) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          (**(code **)(*local_a0 + 8))(local_a0,pcVar1,0);
          plVar2 = local_a0;
          local_e8 = FUN_1415c6020;
          local_e0 = 0;
          FUN_145d56bd4(local_d8,param_1,&local_e8,param_3);
          FUN_140844560(plVar2,&local_e8,local_d8);
          FUN_1407d097e(local_a0);
          local_e8 = param_3;
          FUN_145d56da8(plVar5,&local_4c,&local_e8);
          lVar12 = *(longlong *)(param_1 + 0xa8);
          lVar14 = (longlong)local_4c * 0x50;
          puVar15 = (undefined8 *)(lVar12 + lVar14 + 0x28);
          if (local_98 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
          }
          plVar5 = *(longlong **)(lVar12 + 0x30 + lVar14);
          *puVar15 = local_a0;
          *(longlong **)(lVar12 + 0x30 + lVar14) = local_98;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
        plVar5 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_98 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_145d56897;
      }
      else {
        puVar15 = (undefined8 *)(lVar12 + 0x28);
      }
      iVar11 = *(int *)(puVar15 + 3);
      *(uint *)(puVar15 + 3) = iVar11 + 1U;
      if (*(uint *)((longlong)puVar15 + 0x1c) < iVar11 + 1U) {
        FUN_145d568a2(puVar15 + 2,iVar11);
      }
      piVar3 = (int *)(puVar15[2] + (longlong)iVar11 * 0x28);
      piVar16 = piVar3 + 4;
      piVar16[0] = 0;
      piVar16[1] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      DAT_14cb80940 = DAT_14cb80940 + 1 + (uint)(DAT_14cb80940 == -1);
      *piVar3 = DAT_14cb80940;
      *(undefined8 *)(piVar3 + 1) = *param_5;
      piVar3[3] = *(int *)(param_5 + 1);
      FUN_144a450dc(piVar16,local_f0);
      *param_2 = *piVar3;
      goto LAB_145d5662e;
    }
    FUN_145d467de(param_1,&local_78,lVar12,param_5);
    plVar5 = local_70;
    if (local_78 != (longlong *)0x0) {
      plVar5 = (longlong *)*param_4;
      if (plVar5 != (longlong *)0x0 && (int)param_4[1] != 0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined4 *)((longlong)local_78 + 0x184),&local_78);
      }
      plVar5 = local_70;
      *param_2 = *(int *)((longlong)local_78 + 0x184);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      goto LAB_145d5662e;
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
LAB_145d56897:
  *param_2 = 0;
LAB_145d5662e:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d568a2 FUN_145d568a2 body=147 status=ok
// SIG undefined FUN_145d568a2(void)

void FUN_145d568a2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 145d56936 FUN_145d56936 body=189 status=ok
// SIG undefined FUN_145d56936(void)

longlong FUN_145d56936(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140999e90();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 145d569f4 FUN_145d569f4 body=478 status=ok
// SIG undefined FUN_145d569f4(void)

int FUN_145d569f4(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      local_a0 = param_3 + 1;
      do {
        local_70 = *param_3;
        local_68 = *(undefined4 *)local_a0;
        uStack_64 = *(undefined4 *)((longlong)local_a0 + 4);
        uStack_60 = *(undefined4 *)(local_a0 + 1);
        uStack_5c = *(undefined4 *)((longlong)local_a0 + 0xc);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar6 = (longlong)local_50;
        pvVar2 = (void *)param_3[3];
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar6 * 2);
        }
        lVar6 = *param_1;
        lVar8 = (longlong)iVar5 * 0x50;
        local_98 = *(undefined8 *)(lVar6 + lVar8);
        puVar1 = (undefined4 *)(lVar6 + 8 + lVar8);
        local_90 = *puVar1;
        uStack_8c = puVar1[1];
        uStack_88 = puVar1[2];
        uStack_84 = puVar1[3];
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x20 + lVar8);
        lVar7 = (longlong)local_78;
        pvVar2 = *(void **)(lVar6 + 0x18 + lVar8);
        if (lVar7 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar7 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_90,&local_68);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_145d56b32;
        iVar5 = *(int *)(*param_1 + 0x48 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_145d56b32:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d56bd4 FUN_145d56bd4 body=305 status=ok
// SIG undefined FUN_145d56bd4(void)

longlong * FUN_145d56bd4(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x20);
  if (plVar6 == (longlong *)0x0) {
LAB_145d56c90:
    FUN_145d56d06(puVar5,param_4);
    *puVar5 = &PTR_FUN_14b40d220;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = uVar4;
    *(undefined4 *)(puVar5 + 10) = uVar3;
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_145d56c90;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_145d56d06(puVar5,param_4);
    *puVar5 = &PTR_FUN_14b40d220;
    puVar5[7] = uVar7;
    puVar5[8] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 10) = uVar3;
    puVar5[9] = uVar4;
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
  return param_1;
}



// FUNCTION 145d56d06 FUN_145d56d06 body=162 status=ok
// SIG undefined FUN_145d56d06(void)

undefined8 * FUN_145d56d06(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR_LAB_14b40d290;
  param_1[1] = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  param_1[6] = lVar6;
  return param_1;
}



// FUNCTION 145d56da8 FUN_145d56da8 body=640 status=ok
// SIG undefined FUN_145d56da8(void)

undefined4 * FUN_145d56da8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  uint local_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145d57152(param_1,local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_145d570aa(local_70,*param_3,&local_68);
  FUN_145d5702a(&local_68);
  *(undefined4 *)(local_70 + 9) = 0xffffffff;
  local_68 = CONCAT44(local_68._4_4_,local_78[0]);
  local_a0 = *local_70;
  local_98 = *(uint *)(local_70 + 1);
  iStack_94 = *(int *)((longlong)local_70 + 0xc);
  uStack_90 = *(uint *)(local_70 + 2);
  iStack_8c = *(int *)((longlong)local_70 + 0x14);
  local_88 = (undefined2 *)0x0;
  local_80 = *(int *)(local_70 + 4);
  lVar9 = (longlong)local_80;
  _Src = (void *)local_70[3];
  if (lVar9 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar9 * 2);
  }
  uVar6 = (uint)(CONCAT44(iStack_8c,uStack_90) >> 0x10);
  uVar3 = (uint)(CONCAT44(iStack_94,local_98) >> 0x10);
  uVar3 = (local_98 << 0x10 | local_98 & 0xffff) + iStack_94 + (uVar3 << 0x13 | uVar3 & 0xffff) +
          ((local_98 & 0xffff) >> 4);
  uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                          (uStack_90 << 0x10 | uStack_90 & 0xffff) + iStack_8c +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uStack_90 & 0xffff) >> 4) +
                          uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
  iVar8 = local_80 + -1;
  puVar1 = local_88;
  if (local_80 == 0) {
    iVar8 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar1);
  uVar6 = FUN_144a78877(uVar4,uVar5);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_145d57242(param_1,uVar6,local_70,&local_68);
  uVar4 = (undefined4)local_68;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar3) {
      uVar7 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_70 + 0x4c) = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 9) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = (undefined4)local_68;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145d57388(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5702a FUN_145d5702a body=84 status=ok
// SIG undefined FUN_145d5702a(void)

void FUN_145d5702a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145d5707e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145d5707a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d5707e FUN_145d5707e body=44 status=ok
// SIG undefined FUN_145d5707e(void)

void FUN_145d5707e(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d570aa FUN_145d570aa body=168 status=ok
// SIG undefined FUN_145d570aa(void)

undefined8 * FUN_145d570aa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  param_1[7] = 0;
  param_1[7] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  return param_1;
}



// FUNCTION 145d57152 FUN_145d57152 body=239 status=ok
// SIG undefined FUN_145d57152(void)

int * FUN_145d57152(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 145d57242 FUN_145d57242 body=325 status=ok
// SIG undefined FUN_145d57242(void)

undefined8 FUN_145d57242(longlong *param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *param_3;
    local_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_58 = *(undefined4 *)(param_3 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 4);
    lVar4 = (longlong)local_48;
    _Src = (void *)param_3[3];
    if (lVar4 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar4 * 2);
    }
    iVar2 = FUN_145d569f4(param_1,param_2,&local_68);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar2 != -1) {
      lVar1 = *param_1;
      lVar4 = lVar1 + (longlong)iVar2 * 0x50;
      FUN_145d5702a(lVar4 + 0x28);
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        FUN_1400020a8();
      }
      memmove((void *)(lVar1 + (longlong)iVar2 * 0x50),param_3,0x48);
      FUN_145afb4ea(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_145d5726c;
    }
  }
  uVar3 = 0;
LAB_145d5726c:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d57388 FUN_145d57388 body=758 status=ok
// SIG undefined FUN_145d57388(void)

void FUN_145d57388(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    lStack_60 = 0xffffffff;
    local_58 = (undefined2 *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = lStack_60;
    local_78 = (undefined4)local_58;
    local_74 = local_58._4_4_;
    local_98 = param_1;
    while (iVar4 = local_80._4_4_, local_80._4_4_ < (int)local_88[3]) {
      lVar3 = *local_98;
      lVar14 = (longlong)local_80._4_4_ * 0x50;
      local_70 = *(undefined8 *)(lVar3 + lVar14);
      plVar8 = (longlong *)(lVar3 + 8 + lVar14);
      local_68 = (longlong *)*plVar8;
      lStack_60 = plVar8[1];
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(lVar3 + 0x20 + lVar14);
      lVar15 = (longlong)local_50;
      _Src = *(void **)(lVar3 + 0x18 + lVar14);
      if (lVar15 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar15 * 2);
      }
      uVar2 = (uint)((ulonglong)lStack_60 >> 0x10);
      uVar13 = (uint)lStack_60 & 0xffff;
      uVar11 = (uint)((ulonglong)local_68 >> 0x10);
      uVar12 = (uint)local_68 & 0xffff;
      uVar11 = ((uint)local_68 << 0x10 | uVar12) + (int)((ulonglong)local_68 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4);
      uVar5 = FUN_144a78877(0,(uVar11 >> 2) +
                              ((uint)lStack_60 << 0x10 | uVar13) +
                              (int)((ulonglong)lStack_60 >> 0x20) + (uVar2 << 0x13 | uVar2 & 0xffff)
                              + (uVar13 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
      puVar10 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar7,puVar10);
      iVar7 = FUN_144a78877(uVar5,uVar6);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar9;
      *(int *)(lVar3 + lVar14 + 0x4c) = iVar7;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar3 + lVar14 + 0x48) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
      FUN_1449c0562(&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d57680 FUN_145d57680 body=226 status=ok
// SIG undefined FUN_145d57680(void)

longlong * FUN_145d57680(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145c8d640;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d57764 FUN_145d57764 body=140 status=ok
// SIG undefined FUN_145d57764(void)

undefined1 * FUN_145d57764(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8da38();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeferredLightPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa97;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ea828;
  return &LAB_1471d8862;
}



// FUNCTION 145d577f0 FUN_145d577f0 body=146 status=ok
// SIG undefined FUN_145d577f0(void)

code * FUN_145d577f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c8d6d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubstrateTileSimple";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateTileParameter";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31000000a9a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ea9c0;
  return FUN_1462d66e6;
}



// FUNCTION 145d57882 FUN_145d57882 body=146 status=ok
// SIG undefined FUN_145d57882(void)

code * FUN_145d57882(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c8d6d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubstrateTileSingle";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateTileParameter";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33000000a9b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ea9c0;
  return FUN_145d577f0;
}



// FUNCTION 145d57914 FUN_145d57914 body=138 status=ok
// SIG undefined FUN_145d57914(void)

code * FUN_145d57914(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairTransmittanceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000039b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d5799e;
}



// FUNCTION 145d5799e FUN_145d5799e body=138 status=ok
// SIG undefined FUN_145d5799e(void)

code * FUN_145d5799e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightingChannelsSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf80000039a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d849e;
}



// FUNCTION 145d57a28 FUN_145d57a28 body=138 status=ok
// SIG undefined FUN_145d57a28(void)

code * FUN_145d57a28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairTransmittanceBufferMaxCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc400000394;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d8750;
}



// FUNCTION 145d57ab2 FUN_145d57ab2 body=113 status=ok
// SIG undefined FUN_145d57ab2(void)

void FUN_145d57ab2(void)

{
  FUN_144760e21(DAT_14c83bbe8,DAT_14c83bbf0);
  if (DAT_14c83bbe8 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c83bbc0);
  if (DAT_14c83bbb0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d57b23(DAT_14c83bba0,DAT_14c83bba8);
  if (DAT_14c83bba0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d57b23 FUN_145d57b23 body=43 status=ok
// SIG undefined FUN_145d57b23(void)

void FUN_145d57b23(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1467b19ba(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 145d57b5a FUN_145d57b5a body=145 status=ok
// SIG undefined FUN_145d57b5a(void)

undefined8 * FUN_145d57b5a(undefined8 *param_1)

{
  FUN_14061ea1a();
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *param_1 = &PTR_FUN_14a7c9d10;
  param_1[5] = &PTR_FUN_14a7ca100;
  param_1[6] = &PTR_FUN_14a7ca140;
  param_1[7] = &PTR_FUN_14a7ca170;
  param_1[0x18] = 0;
  param_1[0x19] = 0x10000ea60;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  return param_1;
}



// FUNCTION 145d57bec FUN_145d57bec body=75 status=ok
// SIG undefined FUN_145d57bec(void)

void FUN_145d57bec(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x8a0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145d57c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8a8))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerCheckClientPossession_Validate";
  return;
}



// FUNCTION 145d57c46 FUN_145d57c46 body=145 status=ok
// SIG undefined FUN_145d57c46(void)

undefined8 * FUN_145d57c46(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14abc1350;
  param_1[0x79] = &PTR_FUN_14abc19c0;
  lVar1 = FUN_145c45f0e();
  param_1[0x7a] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x7b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e1) = 3;
  if (param_1[0x75] != 0) {
    FUN_14127091c(param_1[0x75],0);
    (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  }
  return param_1;
}



// FUNCTION 145d57cd8 FUN_145d57cd8 body=96 status=ok
// SIG undefined FUN_145d57cd8(void)

ulonglong FUN_145d57cd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145d57d29:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145d57d29;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145d57d42 FUN_145d57d42 body=107 status=ok
// SIG undefined FUN_145d57d42(void)

void FUN_145d57d42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  FUN_1449db362(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d57da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145d57db8 FUN_145d57db8 body=145 status=ok
// SIG undefined FUN_145d57db8(void)

undefined8 * FUN_145d57db8(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b56e960;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar1 = FUN_1458d5bf2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_145d57e20;
  }
  lVar2 = 0;
LAB_145d57e20:
  FUN_14485c47a(&DAT_14cb9d928,lVar2);
  return param_1;
}



// FUNCTION 145d57e50 FUN_145d57e50 body=197 status=ok
// SIG undefined FUN_145d57e50(void)

void FUN_145d57e50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d57f22 FUN_145d57f22 body=96 status=ok
// SIG undefined FUN_145d57f22(void)

void FUN_145d57f22(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(&local_20,iVar1,*param_2,1);
  *(undefined8 *)(param_1 + 0x29c) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d57f8e FUN_145d57f8e body=301 status=ok
// SIG undefined FUN_145d57f8e(void)

undefined8 * FUN_145d57f8e(undefined8 *param_1)

{
  FUN_1412b486a();
  *param_1 = &PTR_FUN_14bcc6ae0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0x106;
  *(undefined4 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0x3ff0000000000000;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_14485c47a((longlong)param_1 + 0x1ac,0);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xc;
  *(undefined1 *)(param_1 + 0x37) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1bb) = 0x10101;
  *(undefined2 *)((longlong)param_1 + 0x1bf) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0x37a7c5ac37a7c5ac;
  param_1[0x3b] = 0x3c75c28f3a800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}



// FUNCTION 145d580c0 FUN_145d580c0 body=151 status=ok
// SIG undefined FUN_145d580c0(void)

void FUN_145d580c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14588bebe(puVar1);
  *puVar1 = &PTR_FUN_14bd6fd40;
  puVar1[5] = &PTR_LAB_14bd700c0;
  puVar1[0x13] = &PTR_LAB_14bd700e0;
  puVar1[0x14] = &PTR_LAB_14bd70100;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x20] = DAT_14c846330;
  *(undefined4 *)(puVar1 + 0x21) = DAT_14c846338;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0x3f80000000000000;
  *(undefined1 *)((longlong)puVar1 + 0x11c) = 1;
  puVar1[0x24] = 0;
  return;
}



// FUNCTION 145d58158 FUN_145d58158 body=284 status=ok
// SIG undefined FUN_145d58158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d58158(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87d48) {
    FUN_144b3d300(&DAT_14ca87d48);
    if (DAT_14ca87d48 == -1) {
      FUN_145d58274();
      FUN_140db5666(&DAT_14ca87ca0,0,&DAT_14ca87c38,L"FClearReplacementCS_Buffer_Uint",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417c2a,
                    FUN_147417c02,&LAB_147417bfe,&LAB_147417bfa,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87ca0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f53);
      _Init_thread_footer(&DAT_14ca87d48);
    }
  }
  return &DAT_14ca87ca0;
}



// FUNCTION 145d58274 FUN_145d58274 body=313 status=ok
// SIG undefined FUN_145d58274(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d58274(void)

{
  if ((DAT_14ca87c9f & 2) == 0) {
    DAT_14ca87c9f = DAT_14ca87c9f | 2;
    _DAT_14ca87c40 = L"FClearReplacementCS_Buffer_Uint";
    _DAT_14ca87c58 = FUN_146826540;
    _DAT_14ca87c60 = FUN_146825d77;
    _DAT_14ca87c68 = FUN_146825fd6;
    _DAT_14ca87c70 = FUN_1407e02ea;
    _DAT_14ca87c78 = FUN_146826273;
    _DAT_14ca87c50 = FUN_147417bca;
    _DAT_14ca87c90 = 0xffffffff00000100;
    _DAT_14ca87c98 = 8;
    DAT_14ca87c9c = 0;
    _DAT_14ca87c80 = &LAB_147417bf6;
    _DAT_14ca932e0 = L"ClearResourceParam";
    DAT_14ca9330a = FUN_140850cc5();
    _DAT_14ca932e8 = FUN_140fb78d0();
    _DAT_14ca932f8 = &LAB_14682652b;
    _DAT_14ca93300 = 0x1000000f8;
    _DAT_14ca93308 = 0;
    _DAT_14ca932f0 = DAT_14ca87c48;
    DAT_14ca87c48 = &DAT_14ca932e0;
    FUN_145d583ae();
    FUN_1407e00cc(&DAT_14ca87c38);
    return;
  }
  return;
}



// FUNCTION 145d583ae FUN_145d583ae body=133 status=ok
// SIG undefined FUN_145d583ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d583ae(void)

{
  _DAT_14ca93310 = L"BASE";
  DAT_14ca9333a = 4;
  FUN_145d58434();
  _DAT_14ca93320 = DAT_14ca87c48;
  _DAT_14ca93318 = &DAT_14ca93340;
  _DAT_14ca93328 = &LAB_14682652b;
  DAT_14ca87c48 = &DAT_14ca93310;
  DAT_14ca87c9d = DAT_14ca87c9d + '\x01';
  _DAT_14ca93330 = 0x100000000;
  if (DAT_14ca933a4 != '\0') {
    DAT_14ca87c9e = DAT_14ca87c9e + '\x01';
  }
  return;
}



// FUNCTION 145d58434 FUN_145d58434 body=205 status=ok
// SIG undefined FUN_145d58434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d58434(void)

{
  if ((DAT_14ca933a7 & 2) != 0) {
    return;
  }
  DAT_14ca933a7 = DAT_14ca933a7 | 2;
  _DAT_14ca93348 = L"TClearReplacementBase";
  _DAT_14ca93360 = FUN_146826540;
  _DAT_14ca93368 = FUN_146825d77;
  _DAT_14ca93370 = FUN_146825fd6;
  _DAT_14ca93378 = FUN_1407e02ea;
  _DAT_14ca93380 = FUN_146826273;
  _DAT_14ca93358 = FUN_147426288;
  _DAT_14ca93398 = 0xffffffff000000f8;
  _DAT_14ca933a0 = 8;
  DAT_14ca933a4 = 0;
  _DAT_14ca93388 = &LAB_1474262b4;
  FUN_145d58502();
  FUN_145d5857c();
  FUN_1407e00cc(&DAT_14ca93340);
  return;
}



// FUNCTION 145d58502 FUN_145d58502 body=121 status=ok
// SIG undefined FUN_145d58502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d58502(void)

{
  FUN_145d58602();
  _DAT_14ca933a8 = L"ClearValueParam";
  DAT_14ca933d2 = FUN_140850cc5();
  _DAT_14ca933b0 = FUN_140ec6960();
  _DAT_14ca933c0 = &LAB_14682652b;
  _DAT_14ca933c8 = 0x1000000e0;
  _DAT_14ca933d0 = 0;
  _DAT_14ca933b8 = DAT_14ca93350;
  DAT_14ca93350 = &DAT_14ca933a8;
  return;
}



// FUNCTION 145d5857c FUN_145d5857c body=133 status=ok
// SIG undefined FUN_145d5857c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5857c(void)

{
  _DAT_14ca93438 = L"BASE";
  DAT_14ca93462 = 4;
  FUN_140b35ae4();
  _DAT_14ca93448 = DAT_14ca93350;
  _DAT_14ca93440 = &DAT_14ca8c6c8;
  _DAT_14ca93450 = &LAB_14682652b;
  DAT_14ca93350 = &DAT_14ca93438;
  DAT_14ca933a5 = DAT_14ca933a5 + '\x01';
  _DAT_14ca93458 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca933a6 = DAT_14ca933a6 + '\x01';
  }
  return;
}



// FUNCTION 145d58602 FUN_145d58602 body=216 status=ok
// SIG undefined FUN_145d58602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d58602(void)

{
  _DAT_14ca93408 = L"MaxBoundsParam";
  DAT_14ca93432 = FUN_140850cc5();
  _DAT_14ca93410 = FUN_140ec6960();
  _DAT_14ca93420 = &LAB_14682652b;
  _DAT_14ca93428 = 0x1000000ec;
  _DAT_14ca93430 = 0;
  _DAT_14ca93418 = DAT_14ca93350;
  DAT_14ca93350 = &DAT_14ca93408;
  _DAT_14ca933d8 = L"MinBoundsParam";
  DAT_14ca93402 = FUN_140850cc5();
  _DAT_14ca933e0 = FUN_140ec6960();
  _DAT_14ca933f0 = &LAB_14682652b;
  _DAT_14ca933f8 = 0x1000000e6;
  _DAT_14ca93400 = 0;
  _DAT_14ca933e8 = DAT_14ca93350;
  DAT_14ca93350 = &DAT_14ca933d8;
  return;
}



// FUNCTION 145d586e2 FUN_145d586e2 body=5490 status=ok
// SIG undefined FUN_145d586e2(void)

void FUN_145d586e2(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(local_50,"#000000FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x38) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(float *)(param_1 + 0x44) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#151515FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x58) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(float *)(param_1 + 100) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#151515FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x48) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(float *)(param_1 + 0x54) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"0F0F0FFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x68) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(float *)(param_1 + 0x74) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"0F0F0FFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x78) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(float *)(param_1 + 0x84) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"0F0F0FFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x88) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(float *)(param_1 + 0x94) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"383838FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x98) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(float *)(param_1 + 0xa4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#1A1A1AFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0xa8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(float *)(param_1 + 0xb4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#242424FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0xb8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(float *)(param_1 + 0xc4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#2F2F2FFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 200) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(float *)(param_1 + 0xd4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#383838FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0xd8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(float *)(param_1 + 0xe4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#4C4C4CFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0xe8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(float *)(param_1 + 0xf4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#575757FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0xf8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(float *)(param_1 + 0x104) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#808080FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x108) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(float *)(param_1 + 0x114) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFFFFFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x118) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(float *)(param_1 + 0x124) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFFFFF40");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x128) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(float *)(param_1 + 0x134) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#0070E0FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x138) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(float *)(param_1 + 0x144) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#0070E0FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x148) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(float *)(param_1 + 0x154) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#0E86FFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x158) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(float *)(param_1 + 0x164) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#0050A0FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x168) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(float *)(param_1 + 0x174) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#383838FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x178) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(float *)(param_1 + 0x184) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#C0C0C0FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x188) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 400) = uVar2;
  *(float *)(param_1 + 0x194) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFFFFFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x198) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(float *)(param_1 + 0x1a4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x94);
  FUN_1400b22c2(local_50,"#C8C8C8FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x1b8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(float *)(param_1 + 0x1c4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x154);
  FUN_1400b22c2(local_50,"#40576F");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x1d8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = uVar2;
  *(float *)(param_1 + 0x1e4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#2C323AFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x1e8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(float *)(param_1 + 500) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0xc4);
  FUN_1400b22c2(local_50,"464B50FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x208) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(float *)(param_1 + 0x214) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#26BBFFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x218) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  *(float *)(param_1 + 0x224) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#A139BFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x228) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(float *)(param_1 + 0x234) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FF729CFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x238) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  *(float *)(param_1 + 0x244) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FF4040FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x248) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(float *)(param_1 + 0x254) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FE9B07FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 600) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x25c) = uVar1;
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  *(float *)(param_1 + 0x264) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFDC1AFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x268) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(float *)(param_1 + 0x274) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#8BC24AFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x278) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(float *)(param_1 + 0x284) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#804D39FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x288) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(float *)(param_1 + 0x294) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#242424FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x298) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x29c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a0) = uVar2;
  *(float *)(param_1 + 0x2a4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#808080FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2a8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(float *)(param_1 + 0x2b4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFFFFFFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2b8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 700) = uVar1;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(float *)(param_1 + 0x2c4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#B68F55FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2c8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  *(float *)(param_1 + 0x2d4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#FFB800FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2d8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x2dc) = uVar1;
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  *(float *)(param_1 + 0x2e4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#EF3535FF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2e8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x2ec) = uVar1;
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  *(float *)(param_1 + 0x2f4) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"#1FE44BFF");
  FUN_1415445ba(&local_3c,local_50);
  uVar1 = (&DAT_14c758c60)[local_3b];
  uVar2 = (&DAT_14c758c60)[local_3c];
  *(undefined4 *)(param_1 + 0x2f8) = (&DAT_14c758c60)[local_3a];
  *(undefined4 *)(param_1 + 0x2fc) = uVar1;
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  *(float *)(param_1 + 0x304) = (float)local_39 * 0.003921569;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d59c56 FUN_145d59c56 body=493 status=ok
// SIG undefined FUN_145d59c56(void)

void FUN_145d59c56(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  FUN_141544b26(local_20,iVar1 != 0,local_30,local_31);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d59e44 FUN_145d59e44 body=144 status=ok
// SIG undefined FUN_145d59e44(void)

code * FUN_145d59e44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d59ed4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MobileReflectionCaptureData";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileReflectionCaptureShaderData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d53d8;
}



// FUNCTION 145d59ed4 FUN_145d59ed4 body=289 status=ok
// SIG undefined FUN_145d59ed4(void)

undefined * FUN_145d59ed4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41ca8) {
    FUN_144b3d300(&DAT_14ca41ca8);
    if (DAT_14ca41ca8 == -1) {
      FUN_145d59ff6(local_20);
      local_60 = "Unknown";
      local_68 = L"ReflectionCapture";
      local_70 = L"ReflectionCaptureES31";
      local_78 = L"FMobileReflectionCaptureShaderData";
      local_30 = 1;
      local_38 = 0;
      local_40 = 0;
      local_50 = 0x3840;
      local_58 = 0x333;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca41c28,1,3);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f84a22);
      _Init_thread_footer(&DAT_14ca41ca8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca41c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d59ff6 FUN_145d59ff6 body=226 status=ok
// SIG undefined FUN_145d59ff6(void)

longlong * FUN_145d59ff6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146304178;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5a0de FUN_145d5a0de body=136 status=ok
// SIG undefined FUN_145d5a0de(void)

code * FUN_145d5a0de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64000000336;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 100;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd286;
}



// FUNCTION 145d5a166 FUN_145d5a166 body=138 status=ok
// SIG undefined FUN_145d5a166(void)

code * FUN_145d5a166(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BoxTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000033b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 100;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd172;
}



// FUNCTION 145d5a1f0 FUN_145d5a1f0 body=237 status=ok
// SIG undefined FUN_145d5a1f0(void)

undefined8
FUN_145d5a1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149f02f40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a5aa3e0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145d5a2de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5a2de FUN_145d5a2de body=216 status=ok
// SIG undefined FUN_145d5a2de(void)

undefined8 * FUN_145d5a2de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5a3c8 FUN_145d5a3c8 body=619 status=ok
// SIG undefined FUN_145d5a3c8(void)

int * FUN_145d5a3c8(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
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
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_145d5a67a(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_145d5a591;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0d10;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0d28;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_145d5a634(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_145c695b8;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_145d5a564;
    }
  }
  else {
LAB_145d5a564:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar8 != (longlong *)0x0) {
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
LAB_145d5a591:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d5a634 FUN_145d5a634 body=70 status=ok
// SIG undefined FUN_145d5a634(void)

void FUN_145d5a634(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 145d5a67a FUN_145d5a67a body=170 status=ok
// SIG undefined FUN_145d5a67a(void)

undefined8 FUN_145d5a67a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
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
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 145d5a724 FUN_145d5a724 body=284 status=ok
// SIG undefined FUN_145d5a724(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d5a724(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d6a8) {
    FUN_144b3d300(&DAT_14cb0d6a8);
    if (DAT_14cb0d6a8 == -1) {
      FUN_145d5a840();
      FUN_140db5666(&DAT_14cb0d600,0,&DAT_14cb0d598,L"FUpdateTexture2DSubresourceCS_Float",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"TUpdateTexture2DSubresourceCS",5,1
                    ,FUN_147d8a2ee,FUN_147d8a2c6,&LAB_147d8a2ae,&LAB_147d8a2aa,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb0d600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c9a0);
      _Init_thread_footer(&DAT_14cb0d6a8);
    }
  }
  return &DAT_14cb0d600;
}



// FUNCTION 145d5a840 FUN_145d5a840 body=205 status=ok
// SIG undefined FUN_145d5a840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5a840(void)

{
  if ((DAT_14cb0d5ff & 2) == 0) {
    DAT_14cb0d5ff = DAT_14cb0d5ff | 2;
    _DAT_14cb0d5a0 = L"FUpdateTexture2DSubresourceCS_Float";
    _DAT_14cb0d5b8 = FUN_146826540;
    _DAT_14cb0d5c0 = FUN_146825d77;
    _DAT_14cb0d5c8 = FUN_146825fd6;
    _DAT_14cb0d5d0 = FUN_1407e02ea;
    _DAT_14cb0d5d8 = FUN_146826273;
    _DAT_14cb0d5b0 = FUN_147d8a27c;
    _DAT_14cb0d5f0 = 0xffffffff000000f8;
    _DAT_14cb0d5f8 = 8;
    DAT_14cb0d5fc = 0;
    _DAT_14cb0d5e0 = &LAB_147d8a2a6;
    FUN_145d5a90e();
    FUN_1407e00cc(&DAT_14cb0d598);
    return;
  }
  return;
}



// FUNCTION 145d5a90e FUN_145d5a90e body=133 status=ok
// SIG undefined FUN_145d5a90e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5a90e(void)

{
  _DAT_14cb0eeb8 = L"BASE";
  DAT_14cb0eee2 = 4;
  FUN_145d5a994();
  _DAT_14cb0eec8 = DAT_14cb0d5a8;
  _DAT_14cb0eec0 = &DAT_14cb0d400;
  _DAT_14cb0eed0 = &LAB_14682652b;
  DAT_14cb0d5a8 = &DAT_14cb0eeb8;
  DAT_14cb0d5fd = DAT_14cb0d5fd + '\x01';
  _DAT_14cb0eed8 = 0x100000000;
  if (DAT_14cb0d464 != '\0') {
    DAT_14cb0d5fe = DAT_14cb0d5fe + '\x01';
  }
  return;
}



// FUNCTION 145d5a994 FUN_145d5a994 body=205 status=ok
// SIG undefined FUN_145d5a994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5a994(void)

{
  if ((DAT_14cb0d467 & 2) != 0) {
    return;
  }
  DAT_14cb0d467 = DAT_14cb0d467 | 2;
  _DAT_14cb0d408 = L"FUpdateTexture2DSubresourceCS";
  _DAT_14cb0d420 = FUN_146826540;
  _DAT_14cb0d428 = FUN_146825d77;
  _DAT_14cb0d430 = FUN_146825fd6;
  _DAT_14cb0d438 = FUN_1407e02ea;
  _DAT_14cb0d440 = FUN_146826273;
  _DAT_14cb0d418 = FUN_147d8a1a2;
  _DAT_14cb0d458 = 0xffffffff000000f8;
  _DAT_14cb0d460 = 8;
  DAT_14cb0d464 = 0;
  _DAT_14cb0d448 = &LAB_147d8a1cc;
  FUN_145d5aa62();
  FUN_145d5ab56();
  FUN_1407e00cc(&DAT_14cb0d400);
  return;
}



// FUNCTION 145d5aa62 FUN_145d5aa62 body=121 status=ok
// SIG undefined FUN_145d5aa62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5aa62(void)

{
  FUN_145d5aadc();
  _DAT_14cb0eaf0 = L"SrcPosPitchParameter";
  DAT_14cb0eb1a = FUN_140850cc5();
  _DAT_14cb0eaf8 = FUN_140ec6960();
  _DAT_14cb0eb08 = &LAB_14682652b;
  _DAT_14cb0eb10 = 0x1000000e0;
  _DAT_14cb0eb18 = 0;
  _DAT_14cb0eb00 = DAT_14cb0d410;
  DAT_14cb0d410 = &DAT_14cb0eaf0;
  return;
}



// FUNCTION 145d5aadc FUN_145d5aadc body=121 status=ok
// SIG undefined FUN_145d5aadc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5aadc(void)

{
  FUN_145d5abd2();
  _DAT_14cb0eb20 = L"SrcBuffer";
  DAT_14cb0eb4a = FUN_140850cc5();
  _DAT_14cb0eb28 = FUN_140fb78d0();
  _DAT_14cb0eb38 = &LAB_14682652b;
  _DAT_14cb0eb40 = 0x1000000e6;
  _DAT_14cb0eb48 = 0;
  _DAT_14cb0eb30 = DAT_14cb0d410;
  DAT_14cb0d410 = &DAT_14cb0eb20;
  return;
}



// FUNCTION 145d5ab56 FUN_145d5ab56 body=123 status=ok
// SIG undefined FUN_145d5ab56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5ab56(void)

{
  _DAT_14cb0ee58 = L"BASE";
  DAT_14cb0ee82 = 4;
  _DAT_14cb0ee60 = FUN_140b35ae4();
  _DAT_14cb0ee68 = DAT_14cb0d410;
  _DAT_14cb0ee70 = &LAB_14682652b;
  DAT_14cb0d410 = &DAT_14cb0ee58;
  DAT_14cb0d465 = DAT_14cb0d465 + '\x01';
  _DAT_14cb0ee78 = 0x100000000;
  if (*(char *)(_DAT_14cb0ee60 + 100) != '\0') {
    DAT_14cb0d466 = DAT_14cb0d466 + '\x01';
  }
  return;
}



// FUNCTION 145d5abd2 FUN_145d5abd2 body=216 status=ok
// SIG undefined FUN_145d5abd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5abd2(void)

{
  _DAT_14cb0eb80 = L"DestTexture";
  DAT_14cb0ebaa = FUN_140850cc5();
  _DAT_14cb0eb88 = FUN_140fb78d0();
  _DAT_14cb0eb98 = &LAB_14682652b;
  _DAT_14cb0eba0 = 0x1000000f0;
  _DAT_14cb0eba8 = 0;
  _DAT_14cb0eb90 = DAT_14cb0d410;
  DAT_14cb0d410 = &DAT_14cb0eb80;
  _DAT_14cb0eb50 = L"DestPosSizeParameter";
  DAT_14cb0eb7a = FUN_140850cc5();
  _DAT_14cb0eb58 = FUN_140ec6960();
  _DAT_14cb0eb68 = &LAB_14682652b;
  _DAT_14cb0eb70 = 0x1000000ea;
  _DAT_14cb0eb78 = 0;
  _DAT_14cb0eb60 = DAT_14cb0d410;
  DAT_14cb0d410 = &DAT_14cb0eb50;
  return;
}



// FUNCTION 145d5acaa FUN_145d5acaa body=63 status=ok
// SIG undefined FUN_145d5acaa(void)

void FUN_145d5acaa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_145d5acea(param_1 + 0x10);
  FUN_145d5ad68(param_1 + 0x30,param_3);
  FUN_1449db362(param_2);
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 145d5acea FUN_145d5acea body=124 status=ok
// SIG undefined FUN_145d5acea(void)

void FUN_145d5acea(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5ad68 FUN_145d5ad68 body=124 status=ok
// SIG undefined FUN_145d5ad68(void)

void FUN_145d5ad68(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5ade6 FUN_145d5ade6 body=132 status=ok
// SIG undefined FUN_145d5ade6(void)

void FUN_145d5ade6(longlong param_1,int param_2)

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



// FUNCTION 145d5ae6c FUN_145d5ae6c body=146 status=ok
// SIG undefined FUN_145d5ae6c(void)

void FUN_145d5ae6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
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
  FUN_1404578a2(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_140457c28(param_1 + 0x1b8,0);
  }
  FUN_145d5aefe(param_1);
  return;
}



// FUNCTION 145d5aefe FUN_145d5aefe body=166 status=ok
// SIG undefined FUN_145d5aefe(void)

void FUN_145d5aefe(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x198);
    local_18 = *(longlong *)(param_1 + 0x1a0);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5afb0 FUN_145d5afb0 body=302 status=ok
// SIG undefined FUN_145d5afb0(void)

undefined8 * FUN_145d5afb0(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b060910;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xa0a0a0a00000000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0xa0a;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8ffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7c260) {
    FUN_144b3d300(&DAT_14cb7c260);
    if (DAT_14cb7c260 == -1) {
      FUN_1446f470e(&DAT_14cb7c258,L"FactsChannel",1);
      _Init_thread_footer(&DAT_14cb7c260);
    }
  }
  param_1[8] = DAT_14cb7c258;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 145d5b0de FUN_145d5b0de body=40 status=ok
// SIG undefined FUN_145d5b0de(void)

undefined8 FUN_145d5b0de(undefined8 param_1,int param_2)

{
  FUN_145d5b106();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5b106 FUN_145d5b106 body=224 status=ok
// SIG undefined FUN_145d5b106(void)

void FUN_145d5b106(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd95760;
  param_1[5] = &PTR_FUN_14bd95b20;
  param_1[0x13] = &PTR_FUN_14bd95b40;
  FUN_145d5b1e6(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x45];
  if (lVar3 != 0) {
    FUN_1482f1656(lVar3);
    FUN_1400020a8(lVar3);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x3a);
  FUN_1457e5b52(param_1 + 0x20);
  plVar4 = (longlong *)param_1[0x1d];
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
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145d5b1e6 FUN_145d5b1e6 body=49 status=ok
// SIG undefined FUN_145d5b1e6(void)

void FUN_145d5b1e6(longlong param_1,int param_2)

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



// FUNCTION 145d5b218 FUN_145d5b218 body=332 status=ok
// SIG undefined FUN_145d5b218(void)

undefined4 * FUN_145d5b218(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d5b3e6(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145d5b366(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d5b4ce(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5b366 FUN_145d5b366 body=127 status=ok
// SIG undefined FUN_145d5b366(void)

undefined8 FUN_145d5b366(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487bee06((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d5b3e6 FUN_145d5b3e6 body=231 status=ok
// SIG undefined FUN_145d5b3e6(void)

int * FUN_145d5b3e6(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145d5b4ce FUN_145d5b4ce body=482 status=ok
// SIG undefined FUN_145d5b4ce(void)

void FUN_145d5b4ce(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145d5b6b2 FUN_145d5b6b2 body=129 status=ok
// SIG undefined FUN_145d5b6b2(void)

void FUN_145d5b6b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1488c207a(param_2);
  }
  local_20 = FUN_14599673a();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_145d5b734(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5b734 FUN_145d5b734 body=206 status=ok
// SIG undefined FUN_145d5b734(void)

void FUN_145d5b734(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145d5b782;
    }
  }
  lVar2 = 0;
LAB_145d5b782:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_141544cac(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5b818 FUN_145d5b818 body=132 status=ok
// SIG undefined FUN_145d5b818(void)

void FUN_145d5b818(longlong param_1,int param_2)

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



// FUNCTION 145d5b89c FUN_145d5b89c body=109 status=ok
// SIG undefined FUN_145d5b89c(void)

void FUN_145d5b89c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb97f20 == 0) {
    DAT_14cb97f20 = param_1;
    FUN_145d5b9e2(param_1 + 0x28,&local_20);
    local_20 = &DAT_14cb97f18;
    FUN_145d5b90a(local_28,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5b90a FUN_145d5b90a body=215 status=ok
// SIG undefined FUN_145d5b90a(void)

undefined8 FUN_145d5b90a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4f8710;
  local_30[3] = *param_2;
  FUN_1448b6402(&DAT_14c872d10,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5b9e2 FUN_145d5b9e2 body=226 status=ok
// SIG undefined FUN_145d5b9e2(void)

undefined8 FUN_145d5b9e2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4f86a0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4f8630;
  local_30[3] = &DAT_14cb97f18;
  local_30[4] = FUN_141633ab2;
  FUN_145d5bac6(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5bac6 FUN_145d5bac6 body=216 status=ok
// SIG undefined FUN_145d5bac6(void)

undefined8 * FUN_145d5bac6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5bbb0 FUN_145d5bbb0 body=142 status=ok
// SIG undefined FUN_145d5bbb0(void)

code * FUN_145d5bbb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d5bc3e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DebugViewMode";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDebugViewModePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145fcb51c;
}



// FUNCTION 145d5bc3e FUN_145d5bc3e body=289 status=ok
// SIG undefined FUN_145d5bc3e(void)

undefined * FUN_145d5bc3e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c25a8) {
    FUN_144b3d300(&DAT_14c9c25a8);
    if (DAT_14c9c25a8 == -1) {
      FUN_145d5bd60(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"DebugViewModePass";
      local_78 = L"FDebugViewModePassUniformParameters";
      local_38 = 0;
      local_50 = 0x200;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c2528,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ba9674);
      _Init_thread_footer(&DAT_14c9c25a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c2528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5bd60 FUN_145d5bd60 body=226 status=ok
// SIG undefined FUN_145d5bd60(void)

longlong * FUN_145d5bd60(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc98e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5be48 FUN_145d5be48 body=138 status=ok
// SIG undefined FUN_145d5be48(void)

undefined1 * FUN_145d5be48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x27;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d5be44;
}



// FUNCTION 145d5bed2 FUN_145d5bed2 body=146 status=ok
// SIG undefined FUN_145d5bed2(void)

code * FUN_145d5bed2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d5bf64();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugViewMode";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDebugViewModeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c2490;
  return FUN_145d5be48;
}



// FUNCTION 145d5bf64 FUN_145d5bf64 body=278 status=ok
// SIG undefined FUN_145d5bf64(void)

undefined * FUN_145d5bf64(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2510) {
    FUN_144b3d300(&DAT_14c9c2510);
    if (DAT_14c9c2510 == -1) {
      FUN_145d5c07c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"DebugViewModeStruct";
      local_78 = L"FDebugViewModeUniformParameters";
      local_50 = 0x160;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c2490,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ba9668);
      _Init_thread_footer(&DAT_14c9c2510);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c2490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5c07c FUN_145d5c07c body=226 status=ok
// SIG undefined FUN_145d5c07c(void)

longlong * FUN_145d5c07c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc906;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5c164 FUN_145d5c164 body=132 status=ok
// SIG undefined FUN_145d5c164(void)

undefined1 * FUN_145d5c164(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AccuracyColors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 5;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d5c160;
}



// FUNCTION 145d5c1e8 FUN_145d5c1e8 body=138 status=ok
// SIG undefined FUN_145d5c1e8(void)

code * FUN_145d5c1e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LODColors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d5c164;
}



// FUNCTION 145d5c272 FUN_145d5c272 body=38 status=ok
// SIG undefined FUN_145d5c272(void)

undefined8 FUN_145d5c272(undefined8 param_1,int param_2)

{
  FUN_145d5c298();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5c298 FUN_145d5c298 body=100 status=ok
// SIG undefined FUN_145d5c298(void)

void FUN_145d5c298(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145d5c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d5c2fc FUN_145d5c2fc body=9 status=ok
// SIG undefined FUN_145d5c2fc(void)

void FUN_145d5c2fc(longlong param_1)

{
  FUN_145d5c330(param_1 + 0x10);
  return;
}



// FUNCTION 145d5c306 FUN_145d5c306 body=42 status=ok
// SIG undefined FUN_145d5c306(void)

void FUN_145d5c306(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145806982(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145d5c330 FUN_145d5c330 body=413 status=ok
// SIG undefined FUN_145d5c330(void)

void FUN_145d5c330(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_145d5c69e(param_1,0);
  FUN_145d5c4ce(&DAT_14cc295f8);
  if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x208) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1d8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1c8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_145d5c4de(param_1 + 0x150);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5c4ce FUN_145d5c4ce body=15 status=ok
// SIG undefined FUN_145d5c4ce(void)

void FUN_145d5c4ce(undefined8 *param_1)

{
  FUN_145d5c514(&DAT_14caf3250,*param_1);
  return;
}



// FUNCTION 145d5c4de FUN_145d5c4de body=53 status=ok
// SIG undefined FUN_145d5c4de(void)

void FUN_145d5c4de(longlong *param_1)

{
  FUN_145d5ca24();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5c514 FUN_145d5c514 body=158 status=ok
// SIG undefined FUN_145d5c514(void)

undefined8 FUN_145d5c514(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_145d5c5b2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145d5c5b2 FUN_145d5c5b2 body=123 status=ok
// SIG undefined FUN_145d5c5b2(void)

void FUN_145d5c5b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x20 + 0x18);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_145d5c62e(param_1,param_2);
  return;
}



// FUNCTION 145d5c62e FUN_145d5c62e body=112 status=ok
// SIG undefined FUN_145d5c62e(void)

void FUN_145d5c62e(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145d5c69e FUN_145d5c69e body=837 status=ok
// SIG undefined FUN_145d5c69e(void)

void FUN_145d5c69e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  lVar2 = DAT_14cc28e40;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  if ((param_2 == 0) || (iVar6 = *(int *)(lVar2 + uVar5 * 4), iVar6 == 0)) {
    FUN_145d5c9e4(param_1 + 0x150);
  }
  else {
    local_78 = 0;
    iVar7 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    plVar1 = (longlong *)(param_1 + 0x150);
    lVar2 = param_1 + 0x160;
    local_b8 = 0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    local_a0 = 0;
    local_b0 = (undefined1 *)lVar2;
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_1449c0562(&local_b8);
      iVar7 = *(int *)(param_1 + 0x178);
    }
    local_c8._0_4_ = (uint)local_a8;
    local_c8._4_4_ = local_a8._4_4_;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_e0 = plVar1;
    if ((local_a8._4_4_ == iVar7) && (local_b0 == (undefined1 *)lVar2)) {
      local_b0 = local_88;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar6 = 0;
    }
    else {
      do {
        uVar5 = *(ulonglong *)(*(longlong *)(*local_e0 + (longlong)local_c8._4_4_ * 0x10) + 0x50);
        if (((uVar5 <= param_2) && ((ulonglong)(longlong)iVar6 < param_2 - uVar5)) ||
           (uVar5 + (longlong)iVar6 < param_2)) {
          FUN_149822234(local_98,&local_b8,*local_e0 + (longlong)local_c8._4_4_ * 0x10);
        }
        local_c8._0_4_ = (uint)local_c8 & ~local_d8._4_4_;
        FUN_1449c0562(&local_d8);
      } while (local_e0 != plVar1 || (local_d0 != (undefined1 *)lVar2 || local_c8._4_4_ != iVar7));
      local_b0 = local_88;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar6 = 0;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar6 = local_70;
      }
    }
    local_c8 = local_a8;
    uVar3 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = local_98;
    if ((local_c8._4_4_ != iVar6) || (local_b0 != local_88)) {
      iVar7 = local_c8._4_4_;
      local_c8 = uVar3;
      do {
        FUN_14981b2da(plVar1,(longlong)iVar7 * 0x10 + *local_e0);
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar7 = local_c8._4_4_;
        uVar3 = local_c8;
      } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar6));
    }
    local_c8 = uVar3;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145d5c4de(local_98);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5c9e4 FUN_145d5c9e4 body=63 status=ok
// SIG undefined FUN_145d5c9e4(void)

void FUN_145d5c9e4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145d5cb92(param_1);
    FUN_145d5ca24(param_1);
    return;
  }
  FUN_145d5ca24(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_149822578(param_1);
  return;
}



// FUNCTION 145d5ca24 FUN_145d5ca24 body=365 status=ok
// SIG undefined FUN_145d5ca24(void)

void FUN_145d5ca24(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
      lVar4 = *(longlong *)(*local_68 + (longlong)iStack_4c * 0x10);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d5cb92 FUN_145d5cb92 body=335 status=ok
// SIG undefined FUN_145d5cb92(void)

void FUN_145d5cb92(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 145d5cce2 FUN_145d5cce2 body=284 status=ok
// SIG undefined FUN_145d5cce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d5cce2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e820) {
    FUN_144b3d300(&DAT_14ca4e820);
    if (DAT_14ca4e820 == -1) {
      FUN_145d5cdfe();
      FUN_140db5666(&DAT_14ca4e778,0,&DAT_14ca4e710,L"TScreenVSForGS<false>",
                    L"/Engine/Private/ScreenVertexShader.usf",L"MainForGS",0,1,FUN_1472ec4e4,
                    FUN_1472ec4bc,&LAB_1472ec4a4,&LAB_1472ec4a0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca4e778 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143042b21);
      _Init_thread_footer(&DAT_14ca4e820);
    }
  }
  return &DAT_14ca4e778;
}



// FUNCTION 145d5cdfe FUN_145d5cdfe body=205 status=ok
// SIG undefined FUN_145d5cdfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5cdfe(void)

{
  if ((DAT_14ca4e777 & 2) == 0) {
    DAT_14ca4e777 = DAT_14ca4e777 | 2;
    _DAT_14ca4e718 = L"TScreenVSForGS<false>";
    _DAT_14ca4e730 = FUN_146826540;
    _DAT_14ca4e738 = FUN_146825d77;
    _DAT_14ca4e740 = FUN_146825fd6;
    _DAT_14ca4e748 = FUN_1407e02ea;
    _DAT_14ca4e750 = FUN_146826273;
    _DAT_14ca4e728 = FUN_1472ec470;
    _DAT_14ca4e768 = 0xffffffff000000e0;
    _DAT_14ca4e770 = 8;
    DAT_14ca4e774 = 0;
    _DAT_14ca4e758 = &LAB_1472ec49c;
    FUN_145d5cecc();
    FUN_1407e00cc(&DAT_14ca4e710);
    return;
  }
  return;
}



// FUNCTION 145d5cecc FUN_145d5cecc body=123 status=ok
// SIG undefined FUN_145d5cecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5cecc(void)

{
  _DAT_14ca56b88 = L"BASE";
  DAT_14ca56bb2 = 4;
  _DAT_14ca56b90 = FUN_145d5cf48();
  _DAT_14ca56b98 = DAT_14ca4e720;
  _DAT_14ca56ba0 = &LAB_14682652b;
  DAT_14ca4e720 = &DAT_14ca56b88;
  DAT_14ca4e775 = DAT_14ca4e775 + '\x01';
  _DAT_14ca56ba8 = 0x100000000;
  if (*(char *)(_DAT_14ca56b90 + 100) != '\0') {
    DAT_14ca4e776 = DAT_14ca4e776 + '\x01';
  }
  return;
}



// FUNCTION 145d5cf48 FUN_145d5cf48 body=206 status=ok
// SIG undefined FUN_145d5cf48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d5cf48(void)

{
  if ((DAT_14cb03def & 2) == 0) {
    DAT_14cb03def = DAT_14cb03def | 2;
    _DAT_14cb03d90 = L"FScreenVS";
    _DAT_14cb03da8 = FUN_146826540;
    _DAT_14cb03db0 = FUN_146825d77;
    _DAT_14cb03db8 = FUN_146825fd6;
    _DAT_14cb03dc0 = FUN_1407e02ea;
    _DAT_14cb03dc8 = FUN_146826273;
    _DAT_14cb03da0 = FUN_147cf14ca;
    _DAT_14cb03de0 = 0xffffffff000000e0;
    _DAT_14cb03de8 = 8;
    DAT_14cb03dec = 0;
    _DAT_14cb03dd0 = &LAB_147cf14f4;
    FUN_145d5d016();
    FUN_1407e00cc(&DAT_14cb03d88);
  }
  return &DAT_14cb03d88;
}



// FUNCTION 145d5d016 FUN_145d5d016 body=123 status=ok
// SIG undefined FUN_145d5d016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d5d016(void)

{
  _DAT_14cb052f8 = L"BASE";
  DAT_14cb05322 = 4;
  _DAT_14cb05300 = FUN_140b35ae4();
  _DAT_14cb05308 = DAT_14cb03d98;
  _DAT_14cb05310 = &LAB_14682652b;
  DAT_14cb03d98 = &DAT_14cb052f8;
  DAT_14cb03ded = DAT_14cb03ded + '\x01';
  _DAT_14cb05318 = 0x100000000;
  if (*(char *)(_DAT_14cb05300 + 100) != '\0') {
    DAT_14cb03dee = DAT_14cb03dee + '\x01';
  }
  return;
}



// FUNCTION 145d5d092 FUN_145d5d092 body=74 status=ok
// SIG undefined FUN_145d5d092(void)

void FUN_145d5d092(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_145d5d0de(DAT_14c967810 + 0xf0,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d5d0de FUN_145d5d0de body=107 status=ok
// SIG undefined FUN_145d5d0de(void)

void FUN_145d5d0de(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d5d14a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145d5d14a FUN_145d5d14a body=132 status=ok
// SIG undefined FUN_145d5d14a(void)

void FUN_145d5d14a(longlong param_1,int param_2)

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



// FUNCTION 145d5d1da FUN_145d5d1da body=146 status=ok
// SIG undefined FUN_145d5d1da(void)

undefined8 * FUN_145d5d1da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d1dc0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 4 | 0x93;
  return param_1;
}



// FUNCTION 145d5d26c FUN_145d5d26c body=40 status=ok
// SIG undefined FUN_145d5d26c(void)

undefined8 FUN_145d5d26c(undefined8 param_1,int param_2)

{
  FUN_145d5d294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5d294 FUN_145d5d294 body=170 status=ok
// SIG undefined FUN_145d5d294(void)

void FUN_145d5d294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba7710;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145d5d33e(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145d5d374(param_1 + 0xe);
  FUN_1449db362(param_1 + 0xc);
  FUN_1449db362(param_1 + 10);
  FUN_1449db362(param_1 + 8);
  FUN_1449db362(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d5d33e FUN_145d5d33e body=53 status=ok
// SIG undefined FUN_145d5d33e(void)

void FUN_145d5d33e(longlong *param_1)

{
  FUN_145d5d404();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5d374 FUN_145d5d374 body=53 status=ok
// SIG undefined FUN_145d5d374(void)

void FUN_145d5d374(longlong *param_1)

{
  FUN_145d5d3aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d5d3aa FUN_145d5d3aa body=90 status=ok
// SIG undefined FUN_145d5d3aa(void)

void FUN_145d5d3aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d5d404 FUN_145d5d404 body=378 status=ok
// SIG undefined FUN_145d5d404(void)

void FUN_145d5d404(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145d5d58a FUN_145d5d58a body=146 status=ok
// SIG undefined FUN_145d5d58a(void)

undefined8 * FUN_145d5d58a(undefined8 *param_1)

{
  FUN_145907800();
  *param_1 = &PTR_FUN_14abbb810;
  param_1[5] = &PTR_FUN_14abbc220;
  param_1[6] = &PTR_LAB_14abbc260;
  param_1[0x55] = &PTR_FUN_14abbc2b0;
  param_1[0x56] = &PTR_FUN_14abbc330;
  param_1[0x57] = &PTR_FUN_14abbc340;
  param_1[0xcf] = 0;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)(param_1 + 0xce) = *(byte *)(param_1 + 0xce) & 0xfc;
  return param_1;
}



// FUNCTION 145d5d61c FUN_145d5d61c body=83 status=ok
// SIG undefined FUN_145d5d61c(void)

AkDeviceSettings * FUN_145d5d61c(AkDeviceSettings *param_1,longlong param_2)

{
  AK::StreamMgr::GetDefaultDeviceSettings(param_1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x300);
  *(int *)(param_1 + 8) = (int)(longlong)(*(float *)(param_2 + 0x2fc) * 1048576.0);
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  param_1[0x30] = *(AkDeviceSettings *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x18) = 2;
  return param_1;
}



// FUNCTION 145d5d670 FUN_145d5d670 body=40 status=ok
// SIG undefined FUN_145d5d670(void)

undefined8 FUN_145d5d670(undefined8 param_1,int param_2)

{
  FUN_145d5d698();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5d698 FUN_145d5d698 body=117 status=ok
// SIG undefined FUN_145d5d698(void)

void FUN_145d5d698(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad22220;
  param_1[5] = &PTR_FUN_14ad226a0;
  param_1[6] = &PTR_LAB_14ad226e0;
  plVar3 = (longlong *)param_1[0x25];
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
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d5d70e FUN_145d5d70e body=40 status=ok
// SIG undefined FUN_145d5d70e(void)

undefined8 FUN_145d5d70e(undefined8 param_1,int param_2)

{
  FUN_145d5d736();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5d736 FUN_145d5d736 body=117 status=ok
// SIG undefined FUN_145d5d736(void)

void FUN_145d5d736(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad25ef0;
  param_1[5] = &PTR_FUN_14ad26370;
  param_1[6] = &PTR_LAB_14ad263b0;
  plVar3 = (longlong *)param_1[0x29];
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
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d5d7b6 FUN_145d5d7b6 body=146 status=ok
// SIG undefined FUN_145d5d7b6(void)

undefined8 * FUN_145d5d7b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145b02186();
  *param_1 = &PTR_FUN_14adcf670;
  *(undefined4 *)(param_1 + 0xe) = 8;
  *(undefined4 *)(param_1 + 10) = 2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14add3990;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145d5d848 FUN_145d5d848 body=53 status=ok
// SIG undefined FUN_145d5d848(void)

void FUN_145d5d848(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d5d87e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aea1300;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 1;
  return;
}



// FUNCTION 145d5d87e FUN_145d5d87e body=261 status=ok
// SIG undefined FUN_145d5d87e(void)

undefined8 * FUN_145d5d87e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aece700;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 2;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0x3ff0000000000000;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3ff00000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0x3ff0000000000000;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 145d5d98c FUN_145d5d98c body=149 status=ok
// SIG undefined FUN_145d5d98c(void)

undefined8 * FUN_145d5d98c(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b83ad40;
  param_1[6] = &PTR_FUN_14b83b000;
  param_1[7] = &PTR_FUN_14b83b090;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0xffffffff00000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 145d5da22 FUN_145d5da22 body=38 status=ok
// SIG undefined FUN_145d5da22(void)

undefined8 FUN_145d5da22(undefined8 param_1,int param_2)

{
  FUN_145d5da48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d5da48 FUN_145d5da48 body=119 status=ok
// SIG undefined FUN_145d5da48(void)

void FUN_145d5da48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a0690;
  FUN_14042a3cd(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145d5dac0 FUN_145d5dac0 body=68 status=ok
// SIG undefined FUN_145d5dac0(void)

void FUN_145d5dac0(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_145d5db04(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145d5db04 FUN_145d5db04 body=89 status=ok
// SIG undefined FUN_145d5db04(void)

undefined8 * FUN_145d5db04(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8ad7e0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 145d5db66 FUN_145d5db66 body=149 status=ok
// SIG undefined FUN_145d5db66(void)

undefined8 * FUN_145d5db66(undefined8 *param_1)

{
  FUN_1457edf72();
  *param_1 = &PTR_FUN_14bc69ef0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"FocalLength");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"SensorWidth");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"SensorHeight");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"FocusMethod");
  return param_1;
}



// FUNCTION 145d5dbfb FUN_145d5dbfb body=66 status=ok
// SIG undefined FUN_145d5dbfb(void)

void FUN_145d5dbfb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459bada0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beec5b0;
  FUN_145d5dc3e(puVar1 + 0x20);
  *(undefined1 *)(puVar1 + 0x31) = 0;
  puVar1[0x1f] = puVar1 + 0x20;
  return;
}



// FUNCTION 145d5dc3e FUN_145d5dc3e body=91 status=ok
// SIG undefined FUN_145d5dc3e(void)

undefined8 * FUN_145d5dc3e(undefined8 *param_1)

{
  FUN_1459bad82();
  *param_1 = &PTR_FUN_14beed308;
  *(undefined1 *)(param_1 + 4) = 0;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffc0 | 0x13;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x82) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return param_1;
}


