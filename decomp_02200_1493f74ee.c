// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493f74ee FUN_1493f74ee body=175 status=ok
// SIG undefined FUN_1493f74ee(void)

undefined8 FUN_1493f74ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f759e FUN_1493f759e body=1319 status=ok
// SIG undefined FUN_1493f759e(void)

byte FUN_1493f759e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  void **local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0 [2];
  longlong local_b0 [2];
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90 [2];
  longlong local_80;
  void *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar1 = FUN_14934567c(param_2,&DAT_14cc15150);
  bVar2 = FUN_14934567c(param_2,&DAT_14cc15158);
  if ((bVar2 & bVar1) == 1) {
    FUN_140056680(local_58,
                  L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Shading/ConvertFromDiffSpec.ConvertFromDiffSpec\'"
                 );
    FUN_140056680(&local_80,L"DiffSpecFunc");
    local_c8 = FUN_1493f5d5c(*(undefined8 *)(param_1 + 0x1a0),param_3,&local_80,local_58);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(local_c8,local_68);
    FUN_1400021e4(&DAT_14cc15160,&local_80);
    FUN_149384a5a(param_3,local_68,&local_80);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15168,&local_80);
    FUN_1493856ba(param_3,local_68,&local_80);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15170,&local_80);
    FUN_149386002(param_3,local_68,&local_80);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15148,local_90);
    local_d8 = (void **)local_90;
    local_d0 = local_68;
    FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1492ef9be(local_80,local_90);
      FUN_1400021e4(&DAT_14cc15148,&local_a0);
      FUN_149344f46(local_c8,&local_a0,local_90,&local_78);
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15150,local_90);
    local_d8 = (void **)local_90;
    local_d0 = local_68;
    FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1492ef9be(local_80,local_90);
      FUN_1400021e4(&DAT_14cc15150,&local_a0);
      FUN_149344f46(local_c8,&local_a0,local_90,&local_78);
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(param_3,local_90);
    FUN_1400021e4(&DAT_14cc15158,&local_a0);
    local_d8 = &local_a0;
    local_d0 = local_90;
    FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      uVar3 = FUN_145b45900();
      FUN_1492ef9be(param_3,local_90);
      FUN_140056680(&local_a0,L"InverseGlossiness");
      uVar3 = FUN_1493f7e12(param_1,&local_a0,local_90,uVar3);
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1446f470e(&local_a0,L"Input",1);
      FUN_1400021e4(&local_a0,local_90);
      _Src = local_78;
      local_a0 = (void *)0x0;
      local_98 = local_70;
      if ((longlong)local_70 == 0) {
        local_94 = 0;
      }
      else {
        FUN_1446dd670(&local_a0,local_70,0);
        memcpy(local_a0,_Src,(longlong)local_70 * 2);
      }
      FUN_1492ef9be(local_80,local_b0);
      FUN_149344f46(uVar3,local_90,local_b0,&local_a0);
      if (local_b0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&DAT_14cc15178,local_b0);
      FUN_1492ef9be(uVar3,local_c0);
      FUN_149385e76(param_3,local_c0,local_b0);
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar2 & bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f7ac6 FUN_1493f7ac6 body=843 status=ok
// SIG undefined FUN_1493f7ac6(void)

ulonglong *
FUN_1493f7ac6(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_5 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_5;
  }
  FUN_1446f470e(local_68 + 2,puVar9,1);
  cVar3 = FUN_14934567c(param_3,local_68 + 2);
  if (cVar3 != '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    goto LAB_1493f7b3d;
  }
  plVar1 = (longlong *)(param_1 + 0x1e0);
  iVar4 = FUN_1494004d0(plVar1);
  local_68[2] = 0;
  local_68[3] = 0;
  lVar11 = (longlong)iVar4 * 0x10;
  cVar3 = FUN_1493454dc(param_4,param_5,local_68 + 2,*(longlong *)(param_1 + 0x1e0) + lVar11);
  if (cVar3 == '\0') {
    uVar8 = 0;
    uVar10 = (ulonglong)(*(int *)(param_5 + 1) - 1);
    if (*(int *)(param_5 + 1) == 0) {
      uVar10 = 0;
    }
    FUN_1446f82e2(local_68,uVar10,*param_5,1);
    uVar5 = FUN_1493458b8(param_4,local_68);
    iVar4 = FUN_149347f14(param_4,param_5,uVar5);
    if (iVar4 < 0xf) {
      if (iVar4 == 1) {
        uVar8 = FUN_1494001c8(param_1,param_4,param_5,param_6);
        goto LAB_1493f7cb5;
      }
      uVar8 = 0;
      if (iVar4 == 8) {
        if ((char)uVar5 == '\0') {
          uVar8 = FUN_1493ffe14(param_1,param_4,param_5,param_6);
        }
        else {
          uVar8 = FUN_1493ffcac();
        }
        goto LAB_1493f7cb5;
      }
    }
    else {
      if (iVar4 == 0xf) {
        if ((char)uVar5 == '\0') {
          uVar8 = FUN_1494000a2(param_1,param_4,param_5,param_6);
        }
        else {
          uVar8 = FUN_1493fff3a();
        }
      }
      else {
        if (iVar4 != 0x2f) goto LAB_1493f7cc4;
        uVar8 = FUN_1494002da(param_1,param_4,param_5,param_6);
      }
LAB_1493f7cb5:
      if (uVar8 == 0) goto LAB_1493f7cc1;
      local_68[0] = 0;
      local_68[1] = 0;
      lVar6 = *(longlong *)(param_1 + 0x1f0);
      if (lVar6 != 0) {
        FUN_1492ef9be(param_4,local_78);
        cVar3 = FUN_1492ef716(lVar6,local_78,local_68);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') {
          FUN_1492f027e(uVar8,local_68);
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    lVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),local_68 + 2);
    if (lVar6 != 0) {
      lVar7 = FUN_14595e754();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        uVar8 = FUN_1493fee1a(param_1,param_3,lVar6,param_6);
        goto LAB_1493f7cc4;
      }
    }
LAB_1493f7cc1:
    uVar8 = 0;
  }
LAB_1493f7cc4:
  lVar6 = *plVar1;
  *param_2 = uVar8;
  param_2[1] = 0;
  iVar4 = *(int *)(lVar6 + 8 + lVar11);
  _Src = *(void **)(lVar6 + lVar11);
  *(int *)(param_2 + 2) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar4,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar4 * 2);
    lVar6 = *plVar1;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
  lVar11 = *(longlong *)(lVar6 + -0x10 + lVar7);
  puVar2 = (undefined8 *)(lVar6 + -0x10 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_149433b2a(plVar1,*(int *)(param_1 + 0x1e8) + -1);
  FUN_149433b82(plVar1);
  if (lVar11 != 0) {
    FUN_1400020a8(lVar11);
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
LAB_1493f7b3d:
  if ((local_68[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f7e12 FUN_1493f7e12 body=282 status=ok
// SIG undefined FUN_1493f7e12(void)

undefined8 FUN_1493f7e12(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449b8608(local_58,param_3,&DAT_149e01f64);
  FUN_144a7dea0(local_48,local_58,param_2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493ffc16(*(undefined8 *)(param_1 + 0x1a0));
  local_38 = *(undefined8 *)(param_4 + 0x18);
  FUN_1400021e4(&local_38,local_58);
  FUN_14938b814(uVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1444ba64e(uVar1,local_48,param_2,3);
  FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_68,uVar1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492f3e1a(*(undefined8 *)(param_1 + 0x1a0),local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f7f2e FUN_1493f7f2e body=1133 status=ok
// SIG undefined FUN_1493f7f2e(void)

byte FUN_1493f7f2e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_188 [40];
  longlong local_160 [2];
  longlong local_150 [2];
  undefined8 local_140;
  longlong local_138 [2];
  undefined8 local_128;
  undefined8 local_120;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = param_2;
  local_120 = param_3;
  bVar2 = FUN_14934567c(param_2,&DAT_14cc14fc0);
  bVar3 = FUN_14934567c(param_2,&DAT_14cc15130);
  if ((bVar3 & bVar2) == 1) {
    FUN_140056680(local_138,
                  L"MaterialFunction\'/InterchangeAssets/Functions/MF_PhongToMetalRoughness.MF_PhongToMetalRoughness\'"
                 );
    FUN_140056680(&local_d8,L"DiffSpecFunc");
    uVar4 = FUN_1493f5d5c(*(undefined8 *)(param_1 + 0x1a0),param_3,&local_d8,local_138);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_140 = uVar4;
    FUN_1492ef9be(uVar4,local_150);
    FUN_1400021e4(&DAT_14cc15160,&local_d8);
    FUN_149384a5a(param_3,local_150,&local_d8);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15168,&local_d8);
    FUN_1493856ba(param_3,local_150,&local_d8);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15170,&local_d8);
    FUN_149386002(param_3,local_150,&local_d8);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15178,&local_d8);
    FUN_149385e76(param_3,local_150,&local_d8);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(uVar4,local_160);
    local_d8 = (code *)0x0;
    local_c8 = (longlong *)0x0;
    local_118 = (code *)0x0;
    plVar5 = (longlong *)FUN_14001cc68(0x30,8);
    local_108 = local_c8;
    pcVar1 = local_d8;
    *plVar5 = (longlong)&PTR_FUN_14bcc5730;
    plVar5[1] = param_1;
    plVar5[2] = (longlong)&local_120;
    plVar5[3] = (longlong)&local_128;
    plVar5[4] = (longlong)local_160;
    plVar5[5] = (longlong)&local_140;
    if (plVar5 + 1 != (longlong *)0x0) {
      local_118 = FUN_1445105ca;
    }
    local_d8 = local_118;
    local_c8 = plVar5;
    local_118 = pcVar1;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    local_f8 = local_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    local_e8 = local_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    if (pcVar1 != (code *)0x0) {
      plVar5 = local_108;
      if (local_108 == (longlong *)0x0) {
        plVar5 = (longlong *)&local_f8;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    FUN_1400021e4(&DAT_14cc15140,&local_118);
    pcVar1 = local_d8;
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_b8;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc14fc0,&local_118);
    pcVar1 = local_d8;
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_b8;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15138,&local_118);
    pcVar1 = local_d8;
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_b8;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc15130,&local_118);
    pcVar1 = local_d8;
    plVar5 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_b8;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (code *)0x0) {
      plVar5 = (longlong *)&local_b8;
      if (local_c8 != (longlong *)0x0) {
        plVar5 = local_c8;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if (local_160[0] != 0) {
      FUN_1400020a8();
    }
    if (local_150[0] != 0) {
      FUN_1400020a8();
    }
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f839c FUN_1493f839c body=262 status=ok
// SIG undefined FUN_1493f839c(void)

void FUN_1493f839c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14fc0);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc14fc0,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1492ef9be(local_48,local_58);
      FUN_149384a5a(param_3,local_58,local_40);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f84a4 FUN_1493f84a4 body=894 status=ok
// SIG undefined FUN_1493f84a4(void)

ulonglong FUN_1493f84a4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = FUN_14934567c(param_2,&DAT_14cc15160);
  uVar4 = (ulonglong)uVar3;
  if ((char)uVar3 != '\0') {
    FUN_1492ef9be(param_3,local_60);
    FUN_1400021e4(&DAT_14cc15160,local_70);
    local_88 = local_70;
    local_80 = local_60;
    FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1492ef9be(local_50,local_60);
      FUN_149384a5a(param_3,local_60,local_48);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar2 = FUN_14934567c(param_2,&DAT_14cc15168);
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,local_60);
    FUN_1400021e4(&DAT_14cc15168,local_70);
    local_88 = local_70;
    local_80 = local_60;
    FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1492ef9be(local_50,local_60);
      FUN_1493856ba(param_3,local_60,local_48);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar1;
    uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
  cVar2 = FUN_14934567c(param_2,&DAT_14cc15170);
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,local_60);
    FUN_1400021e4(&DAT_14cc15170,local_70);
    local_88 = local_70;
    local_80 = local_60;
    FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1492ef9be(local_50,local_60);
      FUN_149386002(param_3,local_60,local_48);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar1;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  cVar2 = FUN_14934567c(param_2,&DAT_14cc15178);
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,local_60);
    FUN_1400021e4(&DAT_14cc15178,local_70);
    local_88 = local_70;
    local_80 = local_60;
    FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1492ef9be(local_50,local_60);
      FUN_149385e76(param_3,local_60,local_48);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar1;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f8824 FUN_1493f8824 body=753 status=ok
// SIG undefined FUN_1493f8824(void)

ulonglong FUN_1493f8824(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_14934567c(param_2,&DAT_14cc15180);
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,local_68);
    FUN_1400021e4(&DAT_14cc15180,local_78);
    local_88 = local_78;
    local_80 = local_68;
    FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_57,local_58) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_57,local_58),local_68);
      FUN_149384be6(param_3,local_68,local_50);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar1;
  }
  cVar3 = FUN_14934567c(param_2,&DAT_14cc15188);
  if (cVar3 == '\0') {
    cVar3 = FUN_14934567c(param_2,&DAT_14cc15190);
    if (cVar3 != '\0') goto LAB_1493f8a57;
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_1493f8a13;
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,local_68);
    FUN_1400021e4(&DAT_14cc15188,local_78);
    local_88 = local_78;
    local_80 = local_68;
    FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_57,local_58) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_57,local_58),local_68);
      FUN_149384efe(param_3,local_68,local_50);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar1;
    cVar2 = FUN_14934567c(param_2,&DAT_14cc15190);
    if (cVar2 != '\0') {
LAB_1493f8a57:
      uVar1 = *(undefined1 *)(param_1 + 0x1d8);
      *(undefined1 *)(param_1 + 0x1d8) = 2;
      FUN_1492ef9be(param_3,local_68);
      FUN_1400021e4(&DAT_14cc15190,local_78);
      local_88 = local_78;
      local_80 = local_68;
      FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(uStack_57,local_58) != 0) {
        FUN_1492ef9be(CONCAT71(uStack_57,local_58),local_68);
        FUN_149384d72(param_3,local_68,local_50);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x1d8) = uVar1;
    }
  }
  local_58 = 4;
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  FUN_14938b136(param_3,&local_58,1);
LAB_1493f8a13:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f8b16 FUN_1493f8b16 body=299 status=ok
// SIG undefined FUN_1493f8b16(void)

void FUN_1493f8b16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc151b8);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc151b8,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_47,local_48) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_47,local_48),local_58);
      FUN_14938618e(param_3,local_58,local_40);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    local_48 = 2;
    FUN_14938b136(param_3,&local_48,1);
    local_48 = 0;
    FUN_14938aa16(param_3,&local_48,1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f8c42 FUN_1493f8c42 body=495 status=ok
// SIG undefined FUN_1493f8c42(void)

ulonglong FUN_1493f8c42(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc151a8);
  if (cVar1 == '\0') {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc151b0);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_1493f8d48;
    }
LAB_1493f8d84:
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc151b0,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_47,local_48) != 0) {
      param_2 = local_40;
      FUN_1492ef9be(CONCAT71(uStack_47,local_48),local_58);
      FUN_14938508a(param_3,local_58,param_2);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc151a8,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_47,local_48) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_47,local_48),local_58);
      FUN_14938552e(param_3,local_58,local_40);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc151b0);
    if (cVar1 != '\0') goto LAB_1493f8d84;
  }
  local_48 = 8;
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  FUN_14938b136(param_3,&local_48,1);
LAB_1493f8d48:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f8e32 FUN_1493f8e32 body=539 status=ok
// SIG undefined FUN_1493f8e32(void)

ulonglong FUN_1493f8e32(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc15198);
  if (cVar1 == '\0') {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc151a0);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_1493f8f64;
    }
LAB_1493f8fa0:
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc151a0,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_47,local_48) != 0) {
      param_2 = local_40;
      FUN_1492ef9be(CONCAT71(uStack_47,local_48),local_58);
      FUN_14938631a(param_3,local_58,param_2);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1492ef9be(param_3,local_58);
    FUN_1400021e4(&DAT_14cc15198,local_68);
    local_78 = local_68;
    local_70 = local_58;
    FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_47,local_48) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_47,local_48),local_58);
      FUN_149386632(param_3,local_58,local_40);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc151a0);
    if (cVar1 != '\0') goto LAB_1493f8fa0;
  }
  local_48 = 2;
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  FUN_14938aa16(param_3,&local_48,1);
  local_48 = 0xb;
  FUN_14938b136(param_3,&local_48,1);
  local_48 = 5;
  FUN_14938b322(param_3,&local_48,1);
LAB_1493f8f64:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f904e FUN_1493f904e body=2798 status=ok
// SIG undefined FUN_1493f904e(void)

void FUN_1493f904e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 *local_b0;
  undefined1 local_a1;
  undefined1 local_a0 [8];
  float local_98;
  undefined4 uStack_94;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_60 [2];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_149347378(param_2,&local_68);
  if (cVar1 != '\0') {
    FUN_14938af8a(param_3,&local_68);
  }
  local_49 = '\0';
  FUN_149347626(param_2,&local_49);
  if (local_49 == '\0') {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc15198);
    cVar2 = FUN_14934567c(param_2,&DAT_14cc151a0);
    if ((cVar1 == '\0') && (cVar2 == '\0')) goto LAB_1493f90bb;
  }
  else {
LAB_1493f90bb:
    local_68 = 0;
    FUN_1493474d0(param_2,&local_68);
    FUN_14938b512(param_3,&local_68,1);
  }
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14fb0);
  if (cVar1 != '\0') {
    uVar6 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 3;
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14fb0,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_1493848ce(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar6;
  }
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f68);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14f68,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_1493853a2(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f70);
  if (cVar1 != '\0') {
    uVar6 = *(undefined1 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d8) = 2;
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14f70,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_149385846(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1d8) = uVar6;
  }
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f78);
  uVar6 = *(undefined1 *)(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x1d8) = 2;
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14f78,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_1493864a6(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x1d8) = 3;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f88);
  if (cVar1 == '\0') {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc14f80);
    if (cVar1 == '\0') goto LAB_1493f94c9;
    FUN_1400021e4(&DAT_14cc14f80,&local_78);
    FUN_14933bd24(&local_68,&local_78);
    cVar1 = FUN_1492eeb9c(param_2,&local_68,&local_98);
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if ((cVar1 != '\0') && (ABS(local_98 + -1.0) <= 1e-08)) goto LAB_1493f94c9;
    FUN_1492ef9be(param_3,&local_78);
    puVar5 = &DAT_14cc14f80;
  }
  else {
    FUN_1492ef9be(param_3,&local_78);
    puVar5 = &DAT_14cc14f88;
  }
  FUN_1400021e4(puVar5,local_88);
  local_b8 = local_88;
  local_b0 = &local_78;
  FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_77,local_78) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_67,local_68) != 0) {
    FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
    FUN_149385b5e(param_3,&local_78,local_60);
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1493f5bc2(param_2,param_3);
LAB_1493f94c9:
  *(undefined1 *)(param_1 + 0x1d8) = 3;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f90);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14f90,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_1493859d2(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x1d8) = 3;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14fa8);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14fa8,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      local_78 = 0;
      FUN_14938adf2(param_3,&local_78,1);
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_149385cea(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x1d8) = 3;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14f98);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14f98,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      local_78 = 0;
      local_a1 = uVar6;
      FUN_14938adf2(param_3,&local_78,1);
      uVar3 = FUN_145b43e7e();
      FUN_1492ef9be(param_2,&local_78);
      FUN_140056680(local_88,L"IORLerp");
      uVar3 = FUN_1493f7e12(param_1,local_88,&local_78,uVar3);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      local_8c = 0x3f800000;
      FUN_1446f470e(&local_98,L"ConstA",1);
      FUN_1400021e4(&local_98,&local_78);
      FUN_1492eda3c(uVar3,&local_78,&local_8c);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      uVar4 = FUN_145b43e7e();
      FUN_1400021e4(&local_98,&local_78);
      FUN_1492fe4ce(uVar3,&local_78,uVar4,CONCAT44(uStack_94,local_98));
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_1446f470e(local_a0,&DAT_149e060e8,1);
      FUN_1400021e4(local_a0,local_88);
      FUN_149344f46(uVar3,local_88,&local_78,local_60);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      uVar4 = FUN_145b42a62();
      FUN_1492ef9be(param_2,&local_78);
      FUN_140056680(local_88,L"IORFresnel");
      uVar4 = FUN_1493f7e12(param_1,local_88,&local_78,uVar4);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(uVar4,&local_78);
      FUN_1446f470e(local_a0,L"Alpha",1);
      FUN_1400021e4(local_a0,local_88);
      FUN_149344996(uVar3,local_88,&local_78);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      uVar6 = local_a1;
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(uVar3,&local_78);
      FUN_1493876a0(param_3,&local_78);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x1d8) = uVar6;
  cVar1 = FUN_14934567c(param_2,&DAT_14cc14fb8);
  if (cVar1 != '\0') {
    FUN_1492ef9be(param_3,&local_78);
    FUN_1400021e4(&DAT_14cc14fb8,local_88);
    local_b8 = local_88;
    local_b0 = &local_78;
    FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_77,local_78) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_67,local_68) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_67,local_68),&local_78);
      FUN_149385216(param_3,&local_78,local_60);
      if (CONCAT71(uStack_77,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493f9b3e FUN_1493f9b3e body=559 status=ok
// SIG undefined FUN_1493f9b3e(void)

void FUN_1493f9b3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_58,
                L"/Engine/Functions/Engine_MaterialFunctions01/Texturing/FlattenNormal.FlattenNormal"
               );
  FUN_1493f5c6d(param_4,local_58);
  FUN_1492ef9be(param_4,local_80);
  FUN_1400021e4(&DAT_14cc14c60,local_90);
  local_a8 = local_90;
  local_a0 = local_80;
  FUN_1493f7ac6(param_1,&local_70,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1492ef9be(local_70,local_80);
    FUN_140056680(local_90,L"Normal");
    FUN_149344f46(param_4,local_90,local_80,local_68);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_80);
  FUN_1400021e4(&DAT_14cc14c68,local_90);
  local_a8 = local_90;
  local_a0 = local_80;
  FUN_1493f7ac6(param_1,&local_70,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1492ef9be(local_70,local_80);
    FUN_140056680(local_90,L"Flatness");
    FUN_149344f46(param_4,local_90,local_80,local_68);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493f9d6e FUN_1493f9d6e body=962 status=ok
// SIG undefined FUN_1493f9d6e(void)

void FUN_1493f9d6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_90 [2];
  longlong local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_58,
                L"/Engine/Functions/Engine_MaterialFunctions03/Procedurals/NormalFromHeightmap.NormalFromHeightmap"
               );
  FUN_1493f5c6d(param_4,local_58);
  FUN_1400021e4(&DAT_14cc14d68,local_68);
  FUN_1492ef9be(param_4,local_90);
  local_a8 = local_68;
  local_a0 = local_90;
  FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1492ef9be(local_80,local_90);
    FUN_149344f46(param_4,local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14d70,local_68);
  FUN_1492ef9be(param_4,local_90);
  local_a8 = local_68;
  local_a0 = local_90;
  FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1492ef9be(local_80,local_90);
    FUN_149344f46(param_4,local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14d78,local_68);
  FUN_1492ef9be(param_4,local_90);
  local_a8 = local_68;
  local_a0 = local_90;
  FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1492ef9be(local_80,local_90);
    FUN_149344f46(param_4,local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14d80,local_68);
  FUN_1492ef9be(param_4,local_90);
  local_a8 = local_68;
  local_a0 = local_90;
  FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1492ef9be(local_80,local_90);
    FUN_149344f46(param_4,local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14d88,local_68);
  FUN_1492ef9be(param_4,local_90);
  local_a8 = local_68;
  local_a0 = local_90;
  FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1492ef9be(local_80,local_90);
    FUN_149344f46(param_4,local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fa132 FUN_1493fa132 body=797 status=ok
// SIG undefined FUN_1493fa132(void)

void FUN_1493fa132(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c0 [2];
  longlong local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88;
  longlong local_80 [2];
  longlong local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140056680(local_58,
                L"/Engine/Functions/Engine_MaterialFunctions02/Utility/MakeFloat3.MakeFloat3");
  FUN_1493f5c6d(param_4,local_58);
  FUN_1492ef9be(param_4,&local_88);
  FUN_1400021e4(&DAT_14cc14ce0,&local_b0);
  local_d8 = &local_b0;
  local_d0 = &local_88;
  FUN_1493f7ac6(param_1,&local_70,param_3,param_2);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1492ef9be(local_70,&local_88);
    FUN_140056680(&local_b0,&DAT_149e25cc8);
    FUN_149344f46(param_4,&local_b0,&local_88,local_68);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ef9be(param_4,&local_b0);
  FUN_1400021e4(&DAT_14cc14ce8,local_98);
  local_d8 = local_98;
  local_d0 = &local_b0;
  FUN_1493f7ac6(param_1,&local_88,param_3,param_2);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1492ef9be(local_88,&local_b0);
    FUN_140056680(local_98,&DAT_149e25ccc);
    FUN_149344f46(param_4,local_98,&local_b0,local_80);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ef9be(param_4,local_98);
  FUN_1400021e4(&DAT_14cc14cf0,local_c0);
  local_d8 = local_c0;
  local_d0 = local_98;
  FUN_1493f7ac6(param_1,&local_b0,param_3,param_2);
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1492ef9be(local_b0,local_98);
    FUN_140056680(local_c0,&DAT_149e25cd0);
    FUN_149344f46(param_4,local_c0,local_98,local_a8);
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fa450 FUN_1493fa450 body=1749 status=ok
// SIG undefined FUN_1493fa450(void)

void FUN_1493fa450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong *local_190 [2];
  undefined8 local_180;
  longlong *local_178;
  longlong local_170 [2];
  longlong *local_160 [2];
  longlong local_150 [2];
  longlong *local_140 [2];
  longlong local_130 [2];
  longlong *local_120 [2];
  longlong *local_110 [2];
  char local_fa;
  char local_f9;
  undefined8 *local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [3];
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined4 local_b0;
  wchar_t *local_a8;
  int local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  FUN_1492ef928(param_2,&local_f8);
  if (0 < (int)uStack_f0) {
    iVar6 = *(int *)(local_f8 + 1) + -1;
    if (*(int *)(local_f8 + 1) == 0) {
      iVar6 = 0;
    }
    FUN_1402980a2(local_e8,*local_f8,iVar6);
  }
  FUN_14938b814(param_3,param_4);
  FUN_1400021e4(&DAT_14cc14e48,&local_b8);
  if (param_5 == '\0') {
    FUN_14933bd24(&local_a8,&local_b8);
  }
  else {
    FUN_149346170();
  }
  FUN_1492ee142(param_3,&local_a8,local_e8);
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),local_e8);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_1458f3582();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      local_f9 = '\0';
      FUN_140056680(&local_a8,L"TextureUsage");
      FUN_1493fab26(plVar7,&local_a8,&local_f9);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = *(longlong *)(param_1 + 0x1e0);
      lVar10 = (longlong)(*(int *)(param_1 + 0x1e8) + -1) * 0x10;
      FUN_1400021e4(&DAT_14cc14e70,&local_a8);
      pwVar4 = local_a8;
      iVar6 = *(int *)(lVar8 + 8 + lVar10);
      if (iVar6 == local_a0[0]) {
        bVar12 = true;
        if (1 < iVar6) {
          iVar6 = wcscmp(*(wchar_t **)(lVar8 + lVar10),local_a8);
          bVar12 = iVar6 == 0;
        }
      }
      else {
        bVar12 = local_a0[0] + iVar6 == 1;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      uVar3 = *(uint *)(param_1 + 0x1d8);
      uVar9 = 0;
      if ((char)uVar3 != '\x03') {
        uVar9 = uVar3;
      }
      if (!bVar12) {
        uVar9 = uVar3;
      }
      local_fa = (char)uVar9;
      uVar11 = CONCAT71((int7)((ulonglong)pwVar4 >> 8),local_f9);
      if (local_f9 == '\0') {
        if (local_fa == '\x03') {
          cVar5 = FUN_149334a7a(param_2,&local_a8);
          if (cVar5 == '\0') {
            local_b8 = 0;
            FUN_1493b290e(plVar7,&local_b8,1);
          }
        }
        else if ((uVar9 & 0xff) == 2) {
          local_a8._0_1_ = 1;
          FUN_1493b113e(plVar7,&local_a8,1);
          local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,1);
          FUN_1493b1baa(plVar7,&local_a8,1);
        }
        FUN_140056680(&local_a8,L"TextureUsage");
        FUN_1493fac32(plVar7,&local_a8,&local_fa);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_fa != '\0' && local_f9 != local_fa) {
        lVar8 = FUN_14936b2e4(*(undefined8 *)(param_1 + 0x70));
        (**(code **)(*plVar7 + 0x2c8))(plVar7,&local_a8);
        if ((wchar_t **)(lVar8 + 0x38) == &local_a8) {
          if (local_a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar8 + 0x38) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar8 + 0x38) = local_a8;
          local_a8 = (wchar_t *)0x0;
          *(int *)(lVar8 + 0x40) = local_a0[0];
          *(int *)(lVar8 + 0x44) = local_a0[1];
        }
        lVar10 = (**(code **)(*plVar7 + 0x2e8))(plVar7);
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
        *(longlong *)(lVar8 + 0x58) = lVar10;
        FUN_1493f5a26(local_130,uVar9);
        FUN_140233b1a(local_120,local_130);
        FUN_1493f5a26(local_150,uVar11 & 0xffffffff);
        FUN_140233b1a(local_140,local_150);
        (**(code **)(*plVar7 + 0x2c8))(plVar7,local_170);
        FUN_140233b1a(local_160,local_170);
        local_a8 = L"TextureUsageMismatch";
        local_a0[0] = 0x14;
        FUN_1446e940c(local_194,&local_a8);
        local_a8 = L"InterchangeGenericMaterialPipeline";
        local_a0[0] = 0x22;
        FUN_1446e940c(local_198,&local_a8);
        FUN_140208bae(local_190,local_198,local_194,
                      L"{0} is being used as both {1} and {2} which aren\'t compatible.");
        FUN_14023409e(&local_180,local_190,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(local_98,local_160);
        local_88 = 4;
        FUN_14023423e(local_78,local_140);
        local_68 = 4;
        FUN_14023423e(local_58,local_120);
        local_c0 = &local_48;
        local_c8 = &local_a8;
        FUN_14010d304(&local_b8);
        local_e8[2] = local_180;
        local_d0 = local_178;
        if (local_178 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_178 + 1) = (int)local_178[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_110,local_e8 + 2,&local_b8);
        FUN_14007f2db(CONCAT71(uStack_b7,local_b8),local_b0);
        if (CONCAT71(uStack_b7,local_b8) != 0) {
          FUN_1400020a8();
        }
        lVar10 = 0x50;
        do {
          if (*(longlong **)((longlong)&local_a8 + lVar10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_a8 + lVar10) + 0x10))();
            *(undefined8 *)((longlong)&local_a8 + lVar10) = 0;
            *(undefined4 *)((longlong)local_a0 + lVar10) = 0;
          }
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != -0x10);
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_178 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar2 = (int *)((longlong)local_178 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_178 + 0x10))(local_178);
            }
          }
        }
        if (local_160[0] != (longlong *)0x0) {
          (**(code **)(*local_160[0] + 0x10))();
        }
        if (local_140[0] != (longlong *)0x0) {
          (**(code **)(*local_140[0] + 0x10))();
        }
        if (local_120[0] != (longlong *)0x0) {
          (**(code **)(*local_120[0] + 0x10))();
        }
        FUN_140008f88(lVar8 + 0x70,local_110);
        if (local_110[0] != (longlong *)0x0) {
          (**(code **)(*local_110[0] + 0x10))();
        }
        if (local_190[0] != (longlong *)0x0) {
          (**(code **)(*local_190[0] + 0x10))();
        }
        if (local_170[0] != 0) {
          FUN_1400020a8();
        }
        if (local_150[0] != 0) {
          FUN_1400020a8();
        }
        if (local_130[0] != 0) {
          FUN_1400020a8();
        }
        cVar5 = FUN_1493ac750(plVar7,&local_a8);
        if (cVar5 != '\0') {
          local_b8 = 0;
          FUN_1493b00d4(plVar7,&local_b8,1);
        }
      }
    }
  }
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fab26 FUN_1493fab26 body=267 status=ok
// SIG undefined FUN_1493fab26(void)

void FUN_1493fab26(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_149432be4(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      plVar1 = local_58 + 3;
      cVar2 = FUN_140c44378(local_58[2],plVar1);
      if (cVar2 != '\0') {
        iVar3 = FUN_1419073b0(local_58[2],plVar1);
        if ((iVar3 == 0x15) && (local_58[2] != 0)) {
          FUN_149432dca(local_58[2],plVar1,param_3);
        }
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fac32 FUN_1493fac32 body=164 status=ok
// SIG undefined FUN_1493fac32(void)

void FUN_1493fac32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_149432e90(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      FUN_1419073b0(local_48[2],local_30);
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493facd8 FUN_1493facd8 body=404 status=ok
// SIG undefined FUN_1493facd8(void)

void FUN_1493facd8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  char local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [4];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1493fae6e(local_58 + 2,param_2,DAT_14cc14e30,&local_31);
  local_58[0] = 0;
  local_58[1] = 0;
  lVar1 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),local_58 + 2);
  if (lVar1 != 0) {
    lVar2 = FUN_1458d6086();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_145b4c04a();
      local_78[0] = *(longlong *)(lVar2 + 0x18);
      FUN_1400021e4(local_78,local_68);
      local_88 = local_31;
      FUN_1493fa450(param_1,lVar1,param_3,local_68);
      goto LAB_1493fae2f;
    }
  }
  lVar1 = FUN_145b4c04a();
  local_78[0] = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(local_78,local_68);
  FUN_14938b814(param_3,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14e30,local_78);
  if (local_31 == '\x01') {
    FUN_149346170();
  }
  else {
    FUN_14933bd24(local_68,local_78);
  }
  FUN_1492ee142(param_3,local_68,local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_68[0] = local_58[0];
  if (local_78[0] != 0) {
    FUN_1400020a8();
    local_68[0] = local_58[0];
  }
LAB_1493fae2f:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fae6e FUN_1493fae6e body=186 status=ok
// SIG undefined FUN_1493fae6e(void)

undefined8 * FUN_1493fae6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_3;
  cVar1 = FUN_1493458b8(param_2,&local_38);
  *param_4 = cVar1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400021e4(&local_38,local_58);
  if (cVar1 == '\0') {
    FUN_14933bd24(local_48,local_58);
  }
  else {
    FUN_149346170();
  }
  FUN_1492ef716(param_2,local_48,param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493faf2a FUN_1493faf2a body=1088 status=ok
// SIG undefined FUN_1493faf2a(void)

void FUN_1493faf2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1493fae6e(local_58,param_2,DAT_14cc14e48,&local_41);
  local_68 = 0;
  uStack_60 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  lVar5 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),local_58);
  if (lVar5 != 0) {
    lVar6 = FUN_1458d6086();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      lVar6 = FUN_145b9fff6();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) {
        lVar6 = FUN_145b9fe22();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
          lVar6 = FUN_145ba02b4();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            FUN_1459f64c2();
            lVar6 = FUN_145991c34();
          }
          else {
            lVar6 = FUN_145ba2daa();
          }
        }
        else {
          lVar6 = FUN_145b4c3f2();
        }
      }
      else {
        lVar6 = FUN_145b4c4dc();
      }
      local_88[0] = *(longlong *)(lVar6 + 0x18);
      FUN_1400021e4(local_88,&local_a0);
      local_68 = CONCAT44(uStack_9c,local_a0);
      uStack_60 = CONCAT44(uStack_94,iStack_98);
      local_c8 = (longlong *)CONCAT71(local_c8._1_7_,local_41);
      FUN_1493fa450(param_1,lVar5,param_4,&local_68);
      goto LAB_1493fb08d;
    }
  }
  lVar5 = FUN_145991c34();
  local_88[0] = *(longlong *)(lVar5 + 0x18);
  FUN_1400021e4(local_88,&local_a0);
  FUN_14938b814(param_4,&local_a0);
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14e48,local_88);
  if (local_41 == '\x01') {
    FUN_149346170();
  }
  else {
    FUN_14933bd24(&local_a0,local_88);
  }
  FUN_1492ee142(param_4,&local_a0,local_78);
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493fb08d:
  FUN_1492ef9be(param_4,local_88);
  FUN_1400021e4(&DAT_14cc14e40,local_b0);
  local_c8 = local_b0;
  local_c0 = local_88;
  FUN_1493f7ac6(param_1,&local_a0,param_3,param_2);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1492ef9be(CONCAT44(uStack_9c,local_a0),local_88);
    FUN_1446f470e(local_b8,L"Coordinates",1);
    FUN_1400021e4(local_b8,local_b0);
    FUN_149344f46(param_4,local_b0,local_88,&iStack_98);
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (CONCAT44(uStack_94,iStack_98) != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ba2daa();
  local_88[0] = *(longlong *)(lVar5 + 0x18);
  FUN_1400021e4(local_88,&local_a0);
  if ((int)uStack_60 == iStack_98) {
    bVar8 = true;
    if (1 < (int)uStack_60) {
      lVar5 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_68 + lVar5);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(CONCAT44(uStack_9c,local_a0) + lVar5);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1493fb16a;
          }
          iVar4 = uVar3 - uVar7;
          goto LAB_1493fb216;
        }
        if (uVar1 == 0) break;
LAB_1493fb16a:
        lVar5 = lVar5 + 2;
      }
      iVar4 = 0;
LAB_1493fb216:
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iStack_98 + (int)uStack_60 == 1;
  }
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if (bVar8) {
    FUN_1493fb36c(param_2,param_4);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fb36c FUN_1493fb36c body=846 status=ok
// SIG undefined FUN_1493fb36c(void)

void FUN_1493fb36c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(&DAT_14cc14e80,local_50);
  cVar1 = FUN_1492ef004(param_1,local_50,local_3c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_58,L"KernelSize",1);
    FUN_1400021e4(&local_58,local_50);
    FUN_1492eddc0(param_2,local_50,local_3c);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = local_58;
    uVar2 = FUN_145ba2daa();
    FUN_1400021e4(&local_58,local_50);
    FUN_1492fdf66(param_2,local_50,uVar2,uVar3);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14e88,local_50);
  cVar1 = FUN_1492eeb9c(param_1,local_50,local_3c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_58,L"FilterSize",1);
    FUN_1400021e4(&local_58,local_50);
    FUN_1492eda3c(param_2,local_50,local_3c);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = local_58;
    uVar2 = FUN_145ba2daa();
    FUN_1400021e4(&local_58,local_50);
    FUN_1492fe4ce(param_2,local_50,uVar2,uVar3);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14e90,local_50);
  cVar1 = FUN_1492eeb9c(param_1,local_50,local_3c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_58,L"FilterOffset",1);
    FUN_1400021e4(&local_58,local_50);
    FUN_1492eda3c(param_2,local_50,local_3c);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = local_58;
    uVar2 = FUN_145ba2daa();
    FUN_1400021e4(&local_58,local_50);
    FUN_1492fe4ce(param_2,local_50,uVar2,uVar3);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14e98,local_50);
  cVar1 = FUN_1492ef004(param_1,local_50,local_3c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_58,L"Filter",1);
    FUN_1400021e4(&local_58,local_50);
    FUN_1492eddc0(param_2,local_50,local_3c);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145ba2daa();
    FUN_1400021e4(&local_58,local_50);
    FUN_1492fdf66(param_2,local_50,uVar3,local_58);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fb6bc FUN_1493fb6bc body=2564 status=ok
// SIG undefined FUN_1493fb6bc(void)

void FUN_1493fb6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *param_4;
  local_b8 = param_1;
  local_b0 = param_3;
  lVar2 = FUN_145b4bf60();
  local_98 = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(&local_98,&local_60);
  FUN_14938b814(uVar4,&local_60);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14df0,&local_98);
  FUN_14933bd24(&local_60,&local_98);
  cVar1 = FUN_1492ef004(param_2,&local_60,local_70);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_98,L"CoordinateIndex",1);
    uVar4 = *param_4;
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492eddc0(uVar4,&local_60,local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_98;
    uVar4 = *param_4;
    uVar3 = FUN_145b4bf60();
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492fdf66(uVar4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14df8,&local_98);
  FUN_14933bd24(&local_60,&local_98);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_70);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_98,L"UTiling",1);
    uVar4 = *param_4;
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492eda3c(uVar4,&local_60,local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_98;
    uVar4 = *param_4;
    uVar3 = FUN_145b4bf60();
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492fe4ce(uVar4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14df8,&local_98);
  FUN_14933bd24(&local_60,&local_98);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_70);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_98,L"VTiling",1);
    uVar4 = *param_4;
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492eda3c(uVar4,&local_60,local_70);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_98;
    uVar4 = *param_4;
    uVar3 = FUN_145b4bf60();
    FUN_1400021e4(&local_98,&local_60);
    FUN_1492fe4ce(uVar4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ef9be(*param_4,&local_98);
  FUN_1400021e4(&DAT_14cc14e10,local_70);
  uVar4 = local_b0;
  local_c8 = local_70;
  local_c0 = &local_98;
  FUN_1493f7ac6(local_b8,&local_60,local_b0,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    uVar4 = FUN_145b44e08();
    FUN_1492ef9be(*param_4,&local_98);
    FUN_1492ee7cc(local_60,local_80);
    FUN_144a882a8(local_70,local_80,L"_Multiply");
    uVar3 = FUN_1493f7e12(local_b8,local_70,&local_98,uVar4);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(*param_4,&local_98);
    FUN_1446f470e(local_80,&DAT_149e71d50,1);
    FUN_1400021e4(local_80,local_70);
    FUN_149344996(uVar3,local_70,&local_98);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(local_60,&local_98);
    FUN_1446f470e(local_80,&DAT_149e060e8,1);
    FUN_1400021e4(local_80,local_70);
    FUN_149344f46(uVar3,local_70,&local_98,local_58);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar4 = local_b0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    *param_4 = uVar3;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(*param_4,&local_98);
  FUN_1400021e4(&DAT_14cc14e18,local_70);
  local_c8 = local_70;
  local_c0 = &local_98;
  FUN_1493f7ac6(local_b8,&local_60,uVar4,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    uVar4 = FUN_1458f106c();
    FUN_1492ef9be(*param_4,&local_98);
    FUN_1492ee7cc(local_60,local_80);
    FUN_144a882a8(local_70,local_80,L"_Rotator");
    uVar3 = FUN_1493f7e12(local_b8,local_70,&local_98,uVar4);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_70,
                  L"/Engine/Functions/Engine_MaterialFunctions02/Texturing/CustomRotator.CustomRotator"
                 );
    FUN_1493f5c6d(uVar3,local_70);
    FUN_1492ef9be(*param_4,&local_98);
    FUN_140056680(local_80,&DAT_14bcc1176);
    FUN_149344996(uVar3,local_80,&local_98);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(local_60,&local_98);
    FUN_140056680(local_80,L"Rotation Angle (0-1)");
    FUN_149344f46(uVar3,local_80,&local_98,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(*param_4,local_80);
    FUN_1400021e4(&DAT_14cc14e20,local_a8);
    uVar4 = local_b0;
    local_c8 = local_a8;
    local_c0 = local_80;
    FUN_1493f7ac6(local_b8,&local_98,local_b0,param_2);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1492ef9be(local_98,local_80);
      FUN_140056680(local_a8,L"Rotation Center");
      FUN_149344f46(uVar3,local_a8,local_80,local_90);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
    }
    *param_4 = uVar3;
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(*param_4,&local_98);
  FUN_1400021e4(&DAT_14cc14e08,local_70);
  local_c8 = local_70;
  local_c0 = &local_98;
  FUN_1493f7ac6(local_b8,&local_60,uVar4,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    uVar4 = FUN_145b3e142();
    FUN_1492ef9be(*param_4,&local_98);
    FUN_1492ee7cc(local_60,local_80);
    FUN_144a882a8(local_70,local_80,L"_Add");
    uVar4 = FUN_1493f7e12(local_b8,local_70,&local_98,uVar4);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(*param_4,&local_98);
    FUN_1446f470e(local_80,&DAT_149e71d50,1);
    FUN_1400021e4(local_80,local_70);
    FUN_149344996(uVar4,local_70,&local_98);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(local_60,&local_98);
    FUN_1446f470e(local_80,&DAT_149e060e8,1);
    FUN_1400021e4(local_80,local_70);
    FUN_149344f46(uVar4,local_70,&local_98,local_58);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    *param_4 = uVar4;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fc0c2 FUN_1493fc0c2 body=819 status=ok
// SIG undefined FUN_1493fc0c2(void)

void FUN_1493fc0c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_145b43e7e();
  local_70[0] = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(local_70,&local_60);
  FUN_14938b814(param_4,&local_60);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_70);
  FUN_1400021e4(&DAT_14cc14c78,local_80);
  local_a8 = local_80;
  local_a0 = local_70;
  FUN_1493f7ac6(param_1,&local_60,param_3,param_2);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  local_90 = param_2;
  if (local_60 != 0) {
    FUN_1492ef9be(local_60,local_70);
    FUN_1446f470e(local_88,&DAT_149e71d50,1);
    FUN_1400021e4(local_88,local_80);
    FUN_149344f46(param_4,local_80,local_70,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar2 = local_90;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_70);
  FUN_1400021e4(&DAT_14cc14c80,local_80);
  local_a8 = local_80;
  local_a0 = local_70;
  FUN_1493f7ac6(param_1,&local_60,param_3,uVar2);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1492ef9be(local_60,local_70);
    FUN_1446f470e(local_88,&DAT_149e060e8,1);
    FUN_1400021e4(local_88,local_80);
    FUN_149344f46(param_4,local_80,local_70,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = local_90;
    if (local_70[0] != 0) {
      FUN_1400020a8();
      uVar2 = local_90;
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_70);
  FUN_1400021e4(&DAT_14cc14c88,local_80);
  local_a8 = local_80;
  local_a0 = local_70;
  FUN_1493f7ac6(param_1,&local_60,param_3,uVar2);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1492ef9be(local_60,local_70);
    FUN_1446f470e(local_88,L"Alpha",1);
    FUN_1400021e4(local_88,local_80);
    FUN_149344f46(param_4,local_80,local_70,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fc3f6 FUN_1493fc3f6 body=1200 status=ok
// SIG undefined FUN_1493fc3f6(void)

void FUN_1493fc3f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  longlong local_60 [2];
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_145b3fcae();
  local_78[0] = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(local_78,&local_68);
  FUN_14938b814(param_4,&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_49 = '\0';
  FUN_1400021e4(&DAT_14cc14c98,&local_68);
  FUN_1492ee61c(param_2,&local_68,&local_49);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_4a = '\0';
  FUN_1400021e4(&DAT_14cc14ca0,&local_68);
  FUN_1492ee61c(param_2,&local_68,&local_4a);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_4b = '\0';
  FUN_1400021e4(&DAT_14cc14ca8,&local_68);
  FUN_1492ee61c(param_2,&local_68,&local_4b);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_4c = '\0';
  FUN_1400021e4(&DAT_14cc14cb0,&local_68);
  FUN_1492ee61c(param_2,&local_68,&local_4c);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((((local_49 != '\0') || (local_4a != '\0')) || (local_4b != '\0')) || (local_4c == '\x01')) {
    FUN_1446f470e(local_78,&DAT_149ebbc0e,1);
    FUN_1400021e4(local_78,&local_68);
    FUN_1492ed6b4(param_4,&local_68,&local_49);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_78[0];
    uVar2 = FUN_145b3fcae();
    FUN_1400021e4(local_78,&local_68);
    FUN_1492fdcb2(param_4,&local_68,uVar2,lVar1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(local_78,&DAT_149ebbbea,1);
    FUN_1400021e4(local_78,&local_68);
    FUN_1492ed6b4(param_4,&local_68,&local_4a);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_78[0];
    uVar2 = FUN_145b3fcae();
    FUN_1400021e4(local_78,&local_68);
    FUN_1492fdcb2(param_4,&local_68,uVar2,lVar1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(local_78,&DAT_149e060e8,1);
    FUN_1400021e4(local_78,&local_68);
    FUN_1492ed6b4(param_4,&local_68,&local_4b);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_78[0];
    uVar2 = FUN_145b3fcae();
    FUN_1400021e4(local_78,&local_68);
    FUN_1492fdcb2(param_4,&local_68,uVar2,lVar1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(local_78,&DAT_149e71d50,1);
    FUN_1400021e4(local_78,&local_68);
    FUN_1492ed6b4(param_4,&local_68,&local_4c);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_78[0];
    uVar2 = FUN_145b3fcae();
    FUN_1400021e4(local_78,&local_68);
    FUN_1492fdcb2(param_4,&local_68,uVar2,lVar1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ef9be(param_4,local_78);
  FUN_1400021e4(&DAT_14cc14cb8,local_88);
  local_a8 = local_88;
  local_a0 = local_78;
  FUN_1493f7ac6(param_1,&local_68,param_3,param_2);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1492ef9be(local_68,local_78);
    FUN_1446f470e(local_90,L"Input",1);
    FUN_1400021e4(local_90,local_88);
    FUN_149344f46(param_4,local_88,local_78,local_60);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fc8a8 FUN_1493fc8a8 body=1186 status=ok
// SIG undefined FUN_1493fc8a8(void)

void FUN_1493fc8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_145b47bbc();
  local_68[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_68,&local_58);
  FUN_14938b814(param_4,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_68);
  FUN_1400021e4(&DAT_14cc14dc0,local_78);
  local_98 = local_78;
  local_90 = local_68;
  FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    local_88 = param_2;
    FUN_1492ef9be(local_58,local_68);
    FUN_1446f470e(local_80,L"Coordinate",1);
    FUN_1400021e4(local_80,local_78);
    FUN_149344f46(param_4,local_78,local_68,local_50);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    param_2 = local_88;
    if (local_68[0] != 0) {
      FUN_1400020a8();
      param_2 = local_88;
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_68);
  FUN_1400021e4(&DAT_14cc14dc8,local_78);
  local_98 = local_78;
  local_90 = local_68;
  FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1492ef9be(local_58,local_68);
    FUN_1446f470e(local_80,L"Time",1);
    FUN_1400021e4(local_80,local_78);
    FUN_149344f46(param_4,local_78,local_68,local_50);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14da8,&local_58);
  cVar1 = FUN_1492eeb9c(param_2,&local_58,local_78);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_68,L"CenterX",1);
    FUN_1400021e4(local_68,&local_58);
    FUN_1492eda3c(param_4,&local_58,local_78);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_68[0];
    uVar3 = FUN_145b47bbc();
    FUN_1400021e4(local_68,&local_58);
    FUN_1492fe4ce(param_4,&local_58,uVar3,lVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14db0,&local_58);
  cVar1 = FUN_1492eeb9c(param_2,&local_58,local_78);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_68,L"CenterY",1);
    FUN_1400021e4(local_68,&local_58);
    FUN_1492eda3c(param_4,&local_58,local_78);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_68[0];
    uVar3 = FUN_145b47bbc();
    FUN_1400021e4(local_68,&local_58);
    FUN_1492fe4ce(param_4,&local_58,uVar3,lVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14db8,&local_58);
  cVar1 = FUN_1492eeb9c(param_2,&local_58,local_78);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_68,L"Speed",1);
    FUN_1400021e4(local_68,&local_58);
    FUN_1492eda3c(param_4,&local_58,local_78);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_68[0];
    uVar3 = FUN_145b47bbc();
    FUN_1400021e4(local_68,&local_58);
    FUN_1492fe4ce(param_4,&local_58,uVar3,lVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fcd4c FUN_1493fcd4c body=707 status=ok
// SIG undefined FUN_1493fcd4c(void)

void FUN_1493fcd4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145b4c96e();
  local_40 = *(undefined8 *)(lVar3 + 0x18);
  FUN_1400021e4(&local_40,local_50);
  FUN_14938b814(param_2,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14ea8,local_50);
  cVar2 = FUN_1492ee61c(param_1,local_50,local_54);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1446f470e(&local_40,L"bIgnorePause_DEPRECATED",1);
    FUN_1400021e4(&local_40,local_50);
    FUN_1492ed6b4(param_2,local_50,local_54);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145b4c96e();
    FUN_1400021e4(&local_40,local_50);
    FUN_1492fdcb2(param_2,local_50,uVar4,uVar1);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14eb0,local_50);
  cVar2 = FUN_1492ee61c(param_1,local_50,local_54);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1446f470e(&local_40,L"bOverride_Period",1);
    FUN_1400021e4(&local_40,local_50);
    FUN_1492ed6b4(param_2,local_50,local_54);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145b4c96e();
    FUN_1400021e4(&local_40,local_50);
    FUN_1492fdcb2(param_2,local_50,uVar4,uVar1);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14eb8,local_50);
  cVar2 = FUN_1492eeb9c(param_1,local_50,local_54);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1446f470e(&local_40,L"Period",1);
    FUN_1400021e4(&local_40,local_50);
    FUN_1492eda3c(param_2,local_50,local_54);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145b4c96e();
    FUN_1400021e4(&local_40,local_50);
    FUN_1492fe4ce(param_2,local_50,uVar4,uVar1);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fd010 FUN_1493fd010 body=765 status=ok
// SIG undefined FUN_1493fd010(void)

void FUN_1493fd010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_145b4cb42();
  local_60[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_60,&local_50);
  FUN_14938b814(param_4,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_60);
  FUN_1400021e4(&DAT_14cc14ed8,local_70);
  local_88 = local_70;
  local_80 = local_60;
  FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1492ef9be(local_50,local_60);
    FUN_1446f470e(local_78,L"Input",1);
    FUN_1400021e4(local_78,local_70);
    FUN_149344f46(param_4,local_70,local_60,local_48);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14ec8,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"TransformSourceType",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cb42();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14ed0,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"TransformType",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cb42();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fd30e FUN_1493fd30e body=765 status=ok
// SIG undefined FUN_1493fd30e(void)

void FUN_1493fd30e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_145b4ca58();
  local_60[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_60,&local_50);
  FUN_14938b814(param_4,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_60);
  FUN_1400021e4(&DAT_14cc14ef8,local_70);
  local_88 = local_70;
  local_80 = local_60;
  FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1492ef9be(local_50,local_60);
    FUN_1446f470e(local_78,L"Input",1);
    FUN_1400021e4(local_78,local_70);
    FUN_149344f46(param_4,local_70,local_60,local_48);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14ee8,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"TransformSourceType",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4ca58();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14ef0,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"TransformType",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4ca58();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fd60c FUN_1493fd60c body=2545 status=ok
// SIG undefined FUN_1493fd60c(void)

void FUN_1493fd60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_145b4529a();
  local_70[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_70,&local_60);
  FUN_14938b814(param_4,&local_60);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_70);
  FUN_1400021e4(&DAT_14cc14d00,local_80);
  local_a8 = local_80;
  local_a0 = local_70;
  FUN_1493f7ac6(param_1,&local_60,param_3,param_2);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    local_90 = param_2;
    FUN_1492ef9be(local_60,local_70);
    FUN_1446f470e(local_88,L"Position",1);
    FUN_1400021e4(local_88,local_80);
    FUN_149344f46(param_4,local_80,local_70,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    param_2 = local_90;
    if (local_70[0] != 0) {
      FUN_1400020a8();
      param_2 = local_90;
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_70);
  FUN_1400021e4(&DAT_14cc14d08,local_80);
  local_a8 = local_80;
  local_a0 = local_70;
  FUN_1493f7ac6(param_1,&local_60,param_3,param_2);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1492ef9be(local_60,local_70);
    FUN_1446f470e(local_88,L"FilterWidth",1);
    FUN_1400021e4(local_88,local_80);
    FUN_149344f46(param_4,local_80,local_70,local_58);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14d10,&local_60);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"Scale",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eda3c(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fe4ce(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d18,&local_60);
  cVar1 = FUN_1492ef004(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"Quality",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eddc0(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdf66(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d20,&local_60);
  cVar1 = FUN_1492ef004(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"NoiseFunction",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eddc0(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdf66(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d28,&local_60);
  cVar1 = FUN_1492ee61c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"bTurbulence",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492ed6b4(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdcb2(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d30,&local_60);
  cVar1 = FUN_1492ef004(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"Levels",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eddc0(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdf66(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d38,&local_60);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"OutputMin",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eda3c(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fe4ce(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d40,&local_60);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"OutputMax",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eda3c(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fe4ce(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d48,&local_60);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"LevelScale",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eda3c(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fe4ce(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d50,&local_60);
  cVar1 = FUN_1492ee61c(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"bTiling",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492ed6b4(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdcb2(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14d58,&local_60);
  cVar1 = FUN_1492ef004(param_2,&local_60,local_80);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_70,L"RepeatSize",1);
    FUN_1400021e4(local_70,&local_60);
    FUN_1492eddc0(param_4,&local_60,local_80);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_70[0];
    uVar3 = FUN_145b4529a();
    FUN_1400021e4(local_70,&local_60);
    FUN_1492fdf66(param_4,&local_60,uVar3,lVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493fdffe FUN_1493fdffe body=1151 status=ok
// SIG undefined FUN_1493fdffe(void)

void FUN_1493fdffe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_145b4cfd4();
  local_60[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_60,&local_50);
  FUN_14938b814(param_4,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_60);
  FUN_1400021e4(&DAT_14cc14f28,local_70);
  local_88 = local_70;
  local_80 = local_60;
  FUN_1493f7ac6(param_1,&local_50,param_3,param_2);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1492ef9be(local_50,local_60);
    FUN_1446f470e(local_78,L"Position",1);
    FUN_1400021e4(local_78,local_70);
    FUN_149344f46(param_4,local_70,local_60,local_48);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&DAT_14cc14f08,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"NoiseFunction",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cfd4();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14f10,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"Quality",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cfd4();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14f18,&local_50);
  cVar1 = FUN_1492ee61c(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"bTiling",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492ed6b4(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cfd4();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdcb2(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(&DAT_14cc14f08,&local_50);
  cVar1 = FUN_1492ef004(param_2,&local_50,local_70);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_60,L"TileSize",1);
    FUN_1400021e4(local_60,&local_50);
    FUN_1492eddc0(param_4,&local_50,local_70);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_60[0];
    uVar3 = FUN_145b4cfd4();
    FUN_1400021e4(local_60,&local_50);
    FUN_1492fdf66(param_4,&local_50,uVar3,lVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fe47e FUN_1493fe47e body=608 status=ok
// SIG undefined FUN_1493fe47e(void)

void FUN_1493fe47e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined1 local_80 [8];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  longlong alStack_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_145ba2cc0();
  local_68[0] = *(longlong *)(lVar2 + 0x18);
  FUN_1400021e4(local_68,&local_58);
  FUN_14938b814(param_4,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1492ef9be(param_4,local_68);
  FUN_1400021e4(&DAT_14cc14dd8,local_78);
  local_98 = local_78;
  local_90 = local_68;
  FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1492ef9be(local_58,local_68);
    FUN_1446f470e(local_80,L"Input",1);
    FUN_1400021e4(local_80,local_78);
    FUN_149344f46(param_4,local_78,local_68,alStack_50);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (alStack_50[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  alStack_50[0] = 0;
  FUN_1400021e4(&DAT_14cc14de0,local_68);
  cVar1 = FUN_1492ef716(param_2,local_68,&local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(local_78,L"Channels",1);
    FUN_1400021e4(local_78,local_68);
    FUN_1492ee142(param_4,local_68,&local_58);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145ba2cc0();
    FUN_1400021e4(local_78,local_68);
    FUN_1492fe782(param_4,local_68,uVar3,local_78[0]);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fe6e0 FUN_1493fe6e0 body=385 status=ok
// SIG undefined FUN_1493fe6e0(void)

void FUN_1493fe6e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(&DAT_14cc14f40,local_60);
  FUN_149346170(local_50,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1492eeb9c(param_1,local_50,local_64);
  if (cVar2 != '\0') {
    lVar3 = FUN_145a6c708();
    local_40 = *(undefined8 *)(lVar3 + 0x18);
    FUN_1400021e4(&local_40,local_60);
    FUN_14938b814(param_2,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(&local_40,L"DefaultValue",1);
    FUN_1400021e4(&local_40,local_60);
    FUN_1492eda3c(param_2,local_60,local_64);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145a6c708();
    FUN_1400021e4(&local_40,local_60);
    FUN_1492fe4ce(param_2,local_60,uVar4,uVar1);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ee7cc(param_1,local_60);
  FUN_1492f027e(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fe862 FUN_1493fe862 body=385 status=ok
// SIG undefined FUN_1493fe862(void)

void FUN_1493fe862(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400021e4(&DAT_14cc14f50,local_60);
  FUN_149346170(local_50,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1492ef232(param_1,local_50,local_60);
  if (cVar2 != '\0') {
    lVar3 = FUN_145a6c61c();
    local_40 = *(undefined8 *)(lVar3 + 0x18);
    FUN_1400021e4(&local_40,local_70);
    FUN_14938b814(param_2,local_70);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(&local_40,L"DefaultValue",1);
    FUN_1400021e4(&local_40,local_70);
    FUN_1492edf7c(param_2,local_70,local_60);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145a6c61c();
    FUN_1400021e4(&local_40,local_70);
    FUN_1493fe9e4(param_2,local_70,uVar4,uVar1);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ee7cc(param_1,local_70);
  FUN_1492f027e(param_2,local_70);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fe9e4 FUN_1493fe9e4 body=690 status=ok
// SIG undefined FUN_1493fe9e4(void)

void FUN_1493fe9e4(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_1494331d6(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_149433642(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fec98 FUN_1493fec98 body=385 status=ok
// SIG undefined FUN_1493fec98(void)

void FUN_1493fec98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(&DAT_14cc14f60,local_60);
  FUN_149346170(local_50,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1492ee61c(param_1,local_50,&local_61);
  if (cVar2 != '\0') {
    lVar3 = FUN_145a6cd7c();
    local_40 = *(undefined8 *)(lVar3 + 0x18);
    FUN_1400021e4(&local_40,local_60);
    FUN_14938b814(param_2,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(&local_40,L"DefaultValue",1);
    FUN_1400021e4(&local_40,local_60);
    FUN_1492ed6b4(param_2,local_60,&local_61);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = local_40;
    uVar4 = FUN_145a6cd7c();
    FUN_1400021e4(&local_40,local_60);
    FUN_1492fdcb2(param_2,local_60,uVar4,uVar1);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ee7cc(param_1,local_60);
  FUN_1492f027e(param_2,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fee1a FUN_1493fee1a body=2764 status=ok
// SIG undefined FUN_1493fee1a(void)

longlong FUN_1493fee1a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined1 auStack_108 [32];
  void *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong alStack_c0 [3];
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1492ef9be(param_3,&local_c8);
  FUN_140b1283a(local_58,L"Factory_",&local_c8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_1492f2702(*(undefined8 *)(param_1 + 0x1a0),local_58);
  if (lVar3 != 0) {
    lVar4 = FUN_1459f6872();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_1493feebb;
  }
  lVar3 = FUN_1493ff8e8(param_1,param_3,local_58,param_2);
  if (lVar3 != 0) goto LAB_1493feebb;
  lVar3 = FUN_1493ffc16(*(undefined8 *)(param_1 + 0x1a0));
  local_60 = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_1493feebb;
  }
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  FUN_149346a08(param_3);
  FUN_1492ee7cc(param_3,&local_c8);
  FUN_1444ba64e(lVar3,local_58,&local_c8,3);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_88,lVar3);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  puVar7 = local_78;
  if ((int)uStack_70 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  cVar2 = FUN_1402ca022(DAT_14cc14c58,puVar7);
  if (cVar2 == '\0') {
    puVar7 = local_78;
    if ((int)uStack_70 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    cVar2 = FUN_1402ca022(DAT_14cc14cd8,puVar7);
    if (cVar2 == '\0') {
      puVar7 = local_78;
      if ((int)uStack_70 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1402ca022(DAT_14cc14c70,puVar7);
      if (cVar2 == '\0') {
        puVar7 = local_78;
        if ((int)uStack_70 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        cVar2 = FUN_1402ca022(DAT_14cc14c90,puVar7);
        if (cVar2 == '\0') {
          puVar7 = local_78;
          if ((int)uStack_70 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          cVar2 = FUN_1402ca022(DAT_14cc14cf8,puVar7);
          if (cVar2 == '\0') {
            puVar7 = local_78;
            if ((int)uStack_70 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            cVar2 = FUN_1402ca022(DAT_14cc14d60,puVar7);
            if (cVar2 == '\0') {
              puVar7 = local_78;
              if ((int)uStack_70 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              cVar2 = FUN_1402ca022(DAT_14cc14da0,puVar7);
              if (cVar2 == '\0') {
                puVar7 = local_78;
                if ((int)uStack_70 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                cVar2 = FUN_1402ca022(DAT_14cc14dd0,puVar7);
                if (cVar2 == '\0') {
                  puVar7 = local_78;
                  if ((int)uStack_70 == 0) {
                    puVar7 = &DAT_149dfb77a;
                  }
                  cVar2 = FUN_1402ca022(DAT_14cc14de8,puVar7);
                  if (cVar2 == '\0') {
                    puVar7 = local_78;
                    if ((int)uStack_70 == 0) {
                      puVar7 = &DAT_149dfb77a;
                    }
                    cVar2 = FUN_1402ca022(DAT_14cc14e28,puVar7);
                    if (cVar2 == '\0') {
                      puVar7 = local_78;
                      if ((int)uStack_70 == 0) {
                        puVar7 = &DAT_149dfb77a;
                      }
                      cVar2 = FUN_1402ca022(DAT_14cc14e38,puVar7);
                      if (cVar2 == '\0') {
                        puVar7 = local_78;
                        if ((int)uStack_70 == 0) {
                          puVar7 = &DAT_149dfb77a;
                        }
                        cVar2 = FUN_1402ca022(DAT_14cc14ea0,puVar7);
                        if (cVar2 == '\0') {
                          puVar7 = local_78;
                          if ((int)uStack_70 == 0) {
                            puVar7 = &DAT_149dfb77a;
                          }
                          cVar2 = FUN_1402ca022(DAT_14cc14ec0,puVar7);
                          if (cVar2 == '\0') {
                            puVar7 = local_78;
                            if ((int)uStack_70 == 0) {
                              puVar7 = &DAT_149dfb77a;
                            }
                            cVar2 = FUN_1402ca022(DAT_14cc14ee0,puVar7);
                            if (cVar2 == '\0') {
                              puVar7 = local_78;
                              if ((int)uStack_70 == 0) {
                                puVar7 = &DAT_149dfb77a;
                              }
                              cVar2 = FUN_1402ca022(DAT_14cc14f00,puVar7);
                              if (cVar2 == '\0') {
                                puVar7 = local_78;
                                if ((int)uStack_70 == 0) {
                                  puVar7 = &DAT_149dfb77a;
                                }
                                cVar2 = FUN_1402ca022(DAT_14cc14f38,puVar7);
                                if (cVar2 == '\0') {
                                  puVar7 = local_78;
                                  if ((int)uStack_70 == 0) {
                                    puVar7 = &DAT_149dfb77a;
                                  }
                                  cVar2 = FUN_1402ca022(DAT_14cc14f48,puVar7);
                                  if (cVar2 == '\0') {
                                    puVar7 = local_78;
                                    if ((int)uStack_70 == 0) {
                                      puVar7 = &DAT_149dfb77a;
                                    }
                                    cVar2 = FUN_1402ca022(DAT_14cc14f58,puVar7);
                                    if (cVar2 == '\0') {
                                      if (1 < (int)uStack_70) {
                                        FUN_140b1283a(&local_98,L"MaterialExpression",&local_78);
                                        FUN_14938b814(lVar3,&local_98);
                                        local_a8 = (void *)0x0;
                                        uStack_a0 = 0;
                                        FUN_149345138(param_3,&local_a8);
                                        uVar6 = 0;
                                        if ((longlong)(int)uStack_a0 != 0) {
                                          lVar4 = (longlong)(int)uStack_a0 << 4;
                                          pvVar13 = local_a8;
                                          do {
                                            local_e8 = pvVar13;
                                            local_e0 = local_58;
                                            FUN_1493f7ac6(param_1,&local_c8,param_2,param_3);
                                            if (local_c8 != 0) {
                                              FUN_1492ef9be(local_c8,&local_d8);
                                              FUN_149344f46(lVar3,pvVar13,&local_d8,alStack_c0);
                                              if (local_d8 != (longlong *)0x0) {
                                                FUN_1400020a8();
                                              }
                                            }
                                            if (alStack_c0[0] != 0) {
                                              FUN_1400020a8();
                                            }
                                            pvVar13 = (void *)((longlong)pvVar13 + 0x10);
                                            lVar4 = lVar4 + -0x10;
                                          } while (lVar4 != 0);
                                          uVar6 = uStack_a0 & 0xffffffff;
                                        }
                                        FUN_1447a1747(local_a8,uVar6);
                                        if (local_a8 != (void *)0x0) {
                                          FUN_1400020a8();
                                        }
                                        if (local_98 != (undefined8 *)0x0) {
                                          FUN_1400020a8();
                                        }
                                      }
                                    }
                                    else {
                                      FUN_1493fec98(param_3,lVar3);
                                    }
                                  }
                                  else {
                                    FUN_1493fe862(param_3,lVar3);
                                  }
                                }
                                else {
                                  FUN_1493fe6e0(param_3,lVar3);
                                }
                              }
                              else {
                                FUN_1493fdffe(param_1,param_3,param_2,lVar3);
                              }
                            }
                            else {
                              FUN_1493fd30e(param_1,param_3,param_2,lVar3);
                            }
                          }
                          else {
                            FUN_1493fd010(param_1,param_3,param_2,lVar3);
                          }
                        }
                        else {
                          FUN_1493fcd4c(param_3,lVar3);
                        }
                      }
                      else {
                        FUN_1493faf2a(param_1,param_3,param_2,lVar3);
                      }
                    }
                    else {
                      FUN_1493facd8(param_1,param_3,lVar3);
                    }
                  }
                  else {
                    FUN_1493fb6bc(param_1,param_3,param_2,&local_60);
                  }
                }
                else {
                  FUN_1493fe47e(param_1,param_3,param_2,lVar3);
                }
              }
              else {
                FUN_1493fc8a8(param_1,param_3,param_2,lVar3);
              }
            }
            else {
              FUN_1493f9d6e(param_1,param_3,param_2,lVar3);
            }
          }
          else {
            FUN_1493fd60c(param_1,param_3,param_2,lVar3);
          }
        }
        else {
          FUN_1493fc3f6(param_1,param_3,param_2,lVar3);
        }
      }
      else {
        FUN_1493fc0c2(param_1,param_3,param_2,lVar3);
      }
    }
    else {
      FUN_1493fa132(param_1,param_3,param_2,lVar3);
    }
  }
  else {
    FUN_1493f9b3e(param_1,param_3,param_2,lVar3);
  }
  if (1 < *(int *)(param_4 + 8)) {
    FUN_1492f3e1a(*(undefined8 *)(param_1 + 0x1a0),local_58,param_4);
  }
  lVar3 = local_60;
  FUN_1492ef9be(param_3,&local_c8);
  FUN_1444bb06c(lVar3 + 0x40,&local_c8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  puVar7 = local_78;
  if ((int)uStack_70 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  cVar2 = FUN_1402ca022(DAT_14cc14e38,puVar7);
  if (cVar2 == '\0') {
    puVar7 = local_78;
    if ((int)uStack_70 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    cVar2 = FUN_1402ca022(DAT_14cc14e28,puVar7);
    if (cVar2 != '\0') goto LAB_1493ff153;
  }
  else {
LAB_1493ff153:
    local_c8 = 0;
    alStack_c0[0] = 0;
    puVar7 = local_78;
    if ((int)uStack_70 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    cVar2 = FUN_1402ca022(DAT_14cc14e38,puVar7);
    if (cVar2 == '\0') {
      puVar7 = local_78;
      if ((int)uStack_70 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1402ca022(DAT_14cc14e28,puVar7);
      if (cVar2 != '\0') {
        puVar14 = &DAT_14cc14e30;
        goto LAB_1493ff1d5;
      }
    }
    else {
      puVar14 = &DAT_14cc14e48;
LAB_1493ff1d5:
      cVar2 = FUN_1493458b8(param_3,puVar14);
      FUN_1400021e4(puVar14,&local_a8);
      if (cVar2 == '\0') {
        FUN_14933bd24(&local_98,&local_a8);
      }
      else {
        FUN_149346170();
      }
      FUN_1492ef716(param_3,&local_98,&local_c8);
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar4 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),&local_c8);
    if (lVar4 != 0) {
      lVar5 = FUN_1458d6086();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        local_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        FUN_1492ef928(lVar4,&local_98);
        if (0 < (int)uStack_90) {
          local_a8 = (void *)0x0;
          uVar1 = *(uint *)(local_98 + 1);
          pvVar13 = (void *)*local_98;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
          if ((longlong)(int)uVar1 == 0) {
            uStack_a0 = (ulonglong)uVar1;
          }
          else {
            FUN_1446dd670(&local_a8,uVar1,0);
            memcpy(local_a8,pvVar13,(longlong)(int)uVar1 * 2);
          }
          cVar2 = FUN_1492f3730(*(undefined8 *)(param_1 + 0x1a0),&local_a8);
          if (cVar2 != '\0') {
            local_d8 = (longlong *)0x0;
            uStack_d0 = 0;
            FUN_1492f4df8(param_2,&local_d8);
            uVar6 = (ulonglong)(int)uStack_d0;
            if (uVar6 != 0) {
              plVar11 = local_d8;
LAB_1493ff58d:
              if ((int)plVar11[1] == (int)uStack_a0) {
                if (1 < (int)uStack_a0) {
                  lVar4 = 0;
                  do {
                    uVar8 = *(ushort *)(*plVar11 + lVar4);
                    uVar9 = (ulonglong)uVar8;
                    uVar10 = *(ushort *)((longlong)local_a8 + lVar4);
                    if (uVar8 == uVar10) {
                      if (uVar8 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar10 | uVar8)) goto LAB_1493ff778;
                      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                      uVar12 = (ulonglong)uVar10;
                      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                      if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar12]) goto LAB_1493ff778;
                    }
                    lVar4 = lVar4 + 2;
                  } while( true );
                }
              }
              else if ((int)plVar11[1] + (int)uStack_a0 != 1) goto LAB_1493ff5f0;
              goto LAB_1493ff613;
            }
LAB_1493ff5f9:
            FUN_1444bb06c(param_2 + 0x60,&local_a8);
            uVar6 = uStack_d0 & 0xffffffff;
LAB_1493ff613:
            FUN_1447a1747(local_d8,uVar6);
            if (local_d8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1447a1747(local_98,(int)uStack_90);
        if (local_98 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1493feebb:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
LAB_1493ff778:
  if (uVar8 == uVar10) goto LAB_1493ff613;
LAB_1493ff5f0:
  plVar11 = plVar11 + 2;
  if (plVar11 == local_d8 + uVar6 * 2) goto LAB_1493ff5f9;
  goto LAB_1493ff58d;
}



// FUNCTION 1493ff8e8 FUN_1493ff8e8 body=813 status=ok
// SIG undefined FUN_1493ff8e8(void)

longlong FUN_1493ff8e8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c0 [2];
  longlong local_b0;
  longlong local_a8 [2];
  longlong local_98;
  int local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_145a93b24();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    lVar2 = FUN_1494018dd(*(undefined8 *)(param_1 + 0x1a0));
    if (lVar2 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      cVar1 = FUN_149346cc4(param_2);
      if (cVar1 != '\0') {
        lVar3 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0));
        if (lVar3 == 0) {
          local_68 = local_58;
          local_60 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            local_60 = 0;
          }
          cVar1 = FUN_1468716aa(&local_68,0);
          if (cVar1 == '\0') {
            FUN_144a7e010(&local_58);
          }
        }
      }
      if ((int)uStack_50 < 2) {
        lVar2 = 0;
      }
      else {
        FUN_1492ee7cc(param_2,&local_b0);
        FUN_1444ba64e(lVar2,param_3,&local_b0,3);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1492f22b0(*(undefined8 *)(param_1 + 0x1a0),local_78,lVar2);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        lVar3 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0));
        if (lVar3 == 0) {
          local_98 = local_58;
          local_90 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            local_90 = 0;
          }
          cVar1 = FUN_1468716aa(&local_98,0);
          if (cVar1 != '\0') {
            FUN_14938c056(lVar2,&local_58);
            FUN_1493f5c6d(lVar2,&local_58);
          }
        }
        else {
          FUN_140b1283a(&local_b0,L"Factory_",&local_58);
          FUN_14938c056(lVar2,&local_b0);
          lVar3 = FUN_1458f106c();
          local_c0[0] = *(longlong *)(lVar3 + 0x18);
          FUN_1400021e4(local_c0,&local_88);
          FUN_14938b814(lVar2,&local_88);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
        }
        local_88 = 0;
        uStack_80 = 0;
        FUN_149345138(param_2,&local_88);
        if ((longlong)(int)uStack_80 == 0) {
          uVar4 = 0;
        }
        else {
          lVar5 = (longlong)(int)uStack_80 << 4;
          lVar3 = local_88;
          do {
            local_d8 = lVar3;
            local_d0 = param_3;
            FUN_1493f7ac6(param_1,&local_b0,param_4,param_2);
            if (local_b0 != 0) {
              FUN_1492ef9be(local_b0,local_c0);
              FUN_149344f46(lVar2,lVar3,local_c0,local_a8);
              if (local_c0[0] != 0) {
                FUN_1400020a8();
              }
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            lVar3 = lVar3 + 0x10;
            lVar5 = lVar5 + -0x10;
          } while (lVar5 != 0);
          uVar4 = uStack_80 & 0xffffffff;
        }
        FUN_1447a1747(local_88,uVar4);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1493ff93b;
    }
  }
  lVar2 = 0;
LAB_1493ff93b:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ffc16 FUN_1493ffc16 body=148 status=ok
// SIG undefined FUN_1493ffc16(void)

undefined8 FUN_1493ffc16(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f6872();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 1493ffcac FUN_1493ffcac body=359 status=ok
// SIG undefined FUN_1493ffcac(void)

undefined8 FUN_1493ffcac(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  int local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_145a6c708();
  uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
  FUN_149346170(&local_60,param_3);
  cVar1 = FUN_1492eeb9c(param_2,&local_60,local_4c);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_68,L"DefaultValue",1);
    FUN_1400021e4(&local_68,&local_60);
    FUN_1492eda3c(uVar2,&local_60,local_4c);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145a6c708();
    FUN_1400021e4(&local_68,&local_60);
    FUN_1492fe4ce(uVar2,&local_60,uVar3,local_68);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ee7cc(param_2,&local_60);
  if (1 < local_58) {
    param_3 = &local_60;
  }
  FUN_1492f027e(uVar2,param_3);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1493ffe14 FUN_1493ffe14 body=293 status=ok
// SIG undefined FUN_1493ffe14(void)

undefined8
FUN_1493ffe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_145b3fe82();
  uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
  FUN_14933bd24(local_48,param_3);
  cVar1 = FUN_1492eeb9c(param_2,local_48,local_34);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_50,&DAT_149ebbc0e,1);
    FUN_1400021e4(&local_50,local_48);
    FUN_1492eda3c(uVar2,local_48,local_34);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145b3fe82();
    FUN_1400021e4(&local_50,local_48);
    FUN_1492fe4ce(uVar2,local_48,uVar3,local_50);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493fff3a FUN_1493fff3a body=359 status=ok
// SIG undefined FUN_1493fff3a(void)

undefined8 FUN_1493fff3a(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_145a6c61c();
  uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
  FUN_149346170(&local_68,param_3);
  cVar1 = FUN_1492ef232(param_2,&local_68,local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_70,L"DefaultValue",1);
    FUN_1400021e4(&local_70,&local_68);
    FUN_1492edf7c(uVar2,&local_68,local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145a6c61c();
    FUN_1400021e4(&local_70,&local_68);
    FUN_1493fe9e4(uVar2,&local_68,uVar3,local_70);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492ee7cc(param_2,&local_68);
  if (1 < local_60) {
    param_3 = &local_68;
  }
  FUN_1492f027e(uVar2,param_3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1494000a2 FUN_1494000a2 body=293 status=ok
// SIG undefined FUN_1494000a2(void)

undefined8
FUN_1494000a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_145b40056();
  uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
  FUN_14933bd24(local_50,param_3);
  cVar1 = FUN_1492ef232(param_2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_58,L"Constant",1);
    FUN_1400021e4(&local_58,local_50);
    FUN_1492edf7c(uVar2,local_50,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145b40056();
    FUN_1400021e4(&local_58,local_50);
    FUN_1493fe9e4(uVar2,local_50,uVar3,local_58);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494001c8 FUN_1494001c8 body=273 status=ok
// SIG undefined FUN_1494001c8(void)

undefined8
FUN_1494001c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_145a6cd7c();
  uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
  cVar1 = FUN_1492ee61c(param_2,param_3,&local_39);
  if (cVar1 != '\0') {
    FUN_1446f470e(&local_48,L"DefaultValue",1);
    FUN_1400021e4(&local_48,local_58);
    FUN_1492ed6b4(uVar2,local_58,&local_39);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145a6cd7c();
    FUN_1400021e4(&local_48,local_58);
    FUN_1492fdcb2(uVar2,local_58,uVar3,local_48);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1492f027e(uVar2,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494002da FUN_1494002da body=500 status=ok
// SIG undefined FUN_1494002da(void)

undefined8
FUN_1494002da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78 [2];
  undefined8 local_68;
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14933bd24(local_60,param_3);
  cVar1 = FUN_14930c060(param_2,local_60,local_60 + 2);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_145a6c61c();
    uVar2 = FUN_1493f7e12(param_1,param_3,param_4,uVar2);
    FUN_1446f470e(&local_68,L"DefaultValue",1);
    local_60[0] = local_60[2];
    local_60[1] = 0x3f80000000000000;
    FUN_1400021e4(&local_68,local_78);
    FUN_1492edf7c(uVar2,local_78,local_60);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145a6c61c();
    FUN_1400021e4(&local_68,local_60);
    FUN_1493fe9e4(uVar2,local_60,uVar3,local_68);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = FUN_145b3fcae();
    FUN_1449b8608(local_60,param_3,L"_Mask");
    uVar3 = FUN_1493f7e12(param_1,local_60,param_4,uVar3);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(uVar2,local_60);
    FUN_1446f470e(local_80,L"Input",1);
    FUN_1400021e4(local_80,local_78);
    FUN_149344996(uVar3,local_78,local_60);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494004d0 FUN_1494004d0 body=58 status=ok
// SIG undefined FUN_1494004d0(void)

int FUN_1494004d0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149433aa4(param_1,iVar1);
  }
  FUN_149433a9c((longlong)iVar1 * 0x10 + *param_1);
  return iVar1;
}



// FUNCTION 14940050a FUN_14940050a body=1117 status=ok
// SIG undefined FUN_14940050a(void)

undefined4 FUN_14940050a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  int local_88;
  undefined4 uStack_84;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14934567c(param_2,&DAT_14cc15430);
  if ((char)uVar2 != '\0') {
    FUN_1492ef9be(param_3,&local_88);
    FUN_1400021e4(&DAT_14cc15430,local_70);
    local_a8 = local_70;
    local_a0 = (longlong *)&local_88;
    FUN_1493f7ac6(param_1,&local_60,param_3,param_2);
    if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1492ef9be(local_60,&local_88);
      FUN_1400021e4(&DAT_14cc15430,local_70);
      FUN_149344f46(param_3,local_70,&local_88,local_58);
      if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc15438);
    if (cVar1 != '\0') {
      FUN_1492ef9be(param_3,local_70);
      FUN_1400021e4(&DAT_14cc15438,local_98);
      local_a8 = local_98;
      local_a0 = local_70;
      FUN_1493f7ac6(param_1,&local_88,param_3,param_2);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1492ef9be(CONCAT44(uStack_84,local_88),local_70);
        FUN_1400021e4(&DAT_14cc15438,local_98);
        FUN_149344f46(param_3,local_98,local_70,local_80);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
          FUN_1400020a8();
        }
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc15440);
    if (cVar1 != '\0') {
      FUN_1492ef9be(param_3,local_70);
      FUN_1400021e4(&DAT_14cc15440,local_98);
      local_a8 = local_98;
      local_a0 = local_70;
      FUN_1493f7ac6(param_1,&local_88,param_3,param_2);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1492ef9be(CONCAT44(uStack_84,local_88),local_70);
        FUN_1400021e4(&DAT_14cc15440,local_98);
        FUN_149344f46(param_3,local_98,local_70,local_80);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
          FUN_1400020a8();
        }
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc15448);
    if (cVar1 != '\0') {
      FUN_1492ef9be(param_3,local_70);
      FUN_1400021e4(&DAT_14cc15448,local_98);
      local_a8 = local_98;
      local_a0 = local_70;
      FUN_1493f7ac6(param_1,&local_88,param_3,param_2);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FUN_1492ef9be(CONCAT44(uStack_84,local_88),local_70);
        FUN_1400021e4(&DAT_14cc15448,local_98);
        FUN_149344f46(param_3,local_98,local_70,local_80);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (CONCAT71(local_70[0]._1_7_,(undefined1)local_70[0]) != 0) {
          FUN_1400020a8();
        }
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_149346f72(param_2,&local_88);
    if (cVar1 != '\0') {
      local_70[0]._0_1_ = (undefined1)local_88;
      FUN_14938aa16(param_3,local_70,1);
      if (local_88 == 7) {
        local_70[0]._0_1_ = 5;
        FUN_14938b322(param_3,local_70,1);
        local_70[0]._0_1_ = 0;
        FUN_14938adf2(param_3,local_70,1);
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149400968 FUN_149400968 body=543 status=ok
// SIG undefined FUN_149400968(void)

undefined8 FUN_149400968(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58 [2];
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc14fa0);
    if (cVar1 != '\0') {
      FUN_1492ef9be(param_3,local_58);
      FUN_1400021e4(&DAT_14cc14fa0,&local_68);
      local_78 = &local_68;
      local_70 = local_58;
      FUN_1493f7ac6(param_1,&local_48,param_3,param_2);
      if (CONCAT71(uStack_67,local_68) != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48 != 0) {
        FUN_1492ef9be(local_48,local_58);
        FUN_1400021e4(&DAT_14cc14fa0,&local_68);
        FUN_149344f46(param_3,&local_68,local_58,local_40);
        if (CONCAT71(uStack_67,local_68) != 0) {
          FUN_1400020a8();
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc15508) {
        FUN_144b3d300(&DAT_14cc15508);
        if (DAT_14cc15508 == -1) {
          FUN_1446f470e(&DAT_14cc15500,L"bUseMaterialAttributes",1);
          _Init_thread_footer(&DAT_14cc15508);
        }
      }
      local_68 = 1;
      FUN_1400021e4(&DAT_14cc15500,local_58);
      FUN_1492ed6b4(param_3,local_58,&local_68);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = DAT_14cc15500;
      uVar2 = FUN_1458f106c();
      FUN_1400021e4(&DAT_14cc15500,local_58);
      FUN_1492fe782(param_3,local_58,uVar2,uVar3);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = 1;
      goto LAB_149400989;
    }
  }
  uVar3 = 0;
LAB_149400989:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149400b88 FUN_149400b88 body=498 status=ok
// SIG undefined FUN_149400b88(void)

undefined4 FUN_149400b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_90 [2];
  longlong local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14934567c(param_2,&DAT_14cc15428);
  if ((char)uVar2 != '\0') {
    FUN_1492ef9be(param_3,&local_80);
    FUN_1400021e4(&DAT_14cc15428,local_68);
    local_a8 = local_68;
    local_a0 = &local_80;
    FUN_1493f7ac6(param_1,&local_58,param_3,param_2);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT71(uStack_57,local_58) != 0) {
      FUN_1492ef9be(CONCAT71(uStack_57,local_58),&local_80);
      FUN_1493853a2(param_3,&local_80,local_50);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    cVar1 = FUN_14934567c(param_2,&DAT_14cc14f80);
    if (cVar1 != '\0') {
      FUN_1492ef9be(param_3,local_68);
      FUN_1400021e4(&DAT_14cc14f80,local_90);
      local_a8 = local_90;
      local_a0 = local_68;
      FUN_1493f7ac6(param_1,&local_80,param_3,param_2);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1492ef9be(local_80,local_68);
        FUN_149385b5e(param_3,local_68,local_78);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1493f5bc2(param_2,param_3);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    FUN_14938b136(param_3,&local_58,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149400d7c FUN_149400d7c body=306 status=ok
// SIG undefined FUN_149400d7c(void)

void FUN_149400d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_149345138(param_2,&local_b8);
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((longlong)(int)uStack_b0 != 0) {
    lVar2 = (longlong)(int)uStack_b0 << 4;
    lVar1 = local_b8;
    do {
      local_c8 = &local_a8;
      FUN_149400eb0(param_1,param_2,param_3,lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_149432964(&local_a8);
  FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149400eb0 FUN_149400eb0 body=847 status=ok
// SIG undefined FUN_149400eb0(void)

void FUN_149400eb0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined1 auStack_a8 [32];
  ulonglong local_88 [2];
  ulonglong local_78 [2];
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar8 = param_5 + 7;
    if ((longlong *)param_5[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_5[8];
    }
    iVar5 = *(int *)((longlong)plVar8 +
                    (ulonglong)((int)param_5[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *param_5 + (longlong)iVar5 * 0x10;
        if (*(ulonglong *)(*param_5 + (longlong)iVar5 * 0x10) == param_2) {
          if (lVar7 != 0) goto LAB_14940109c;
          break;
        }
        iVar5 = *(int *)(lVar7 + 8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = *(int *)(param_4 + 1) + -1;
  if (*(int *)(param_4 + 1) == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(local_68 + 2,iVar5,*param_4,1);
  local_68[0] = local_68[2];
  uVar4 = FUN_1493458b8(param_2,local_68);
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  cVar1 = FUN_1493454dc(param_2,param_4,local_68 + 2,local_68);
  if (cVar1 != '\0') {
    uVar6 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),local_68 + 2);
    if (uVar6 != 0) {
      lVar7 = FUN_14595e754();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(uVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        local_78[0] = uVar6;
        if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
          uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          plVar8 = param_5 + 7;
          if ((longlong *)param_5[8] != (longlong *)0x0) {
            plVar8 = (longlong *)param_5[8];
          }
          iVar5 = *(int *)((longlong)plVar8 +
                          (ulonglong)((int)param_5[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar5 != -1) {
            do {
              lVar7 = *param_5 + (longlong)iVar5 * 0x10;
              if (*(ulonglong *)(*param_5 + (longlong)iVar5 * 0x10) == uVar6) {
                if (lVar7 != 0) goto LAB_1494010dc;
                break;
              }
              iVar5 = *(int *)(lVar7 + 8);
            } while (iVar5 != -1);
          }
        }
        FUN_149401200(param_1,uVar6,param_3,param_5);
        FUN_1494017a4(param_5,local_88,local_78);
      }
    }
    goto LAB_1494010dc;
  }
  iVar5 = FUN_149347f14(param_2,param_4,uVar4);
  cVar1 = (char)uVar4;
  if (iVar5 == 0xf) {
    if (cVar1 == '\0') {
      FUN_14933bd24(local_88,param_4);
    }
    else {
      FUN_149346170();
    }
    cVar2 = FUN_1492ef232(param_2,local_88,local_78);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_1494010dc;
    if (cVar1 == '\0') {
      FUN_14933bd24(local_88,param_4);
    }
    else {
      FUN_149346170();
    }
    puVar9 = local_88;
    FUN_1492edf7c(param_3,puVar9,local_78);
  }
  else {
    if (iVar5 != 8) goto LAB_1494010dc;
    if (cVar1 == '\0') {
      FUN_14933bd24(local_78,param_4);
    }
    else {
      FUN_149346170();
    }
    cVar2 = FUN_1492eeb9c(param_2,local_78,local_88);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_1494010dc;
    if (cVar1 == '\0') {
      FUN_14933bd24(local_78,param_4);
    }
    else {
      FUN_149346170();
    }
    puVar9 = local_78;
    FUN_1492eda3c(param_3,puVar9,local_88);
  }
  if (*puVar9 != 0) {
    FUN_1400020a8();
  }
LAB_1494010dc:
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
LAB_14940109c:
  if ((local_68[4] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149401200 FUN_149401200 body=404 status=ok
// SIG undefined FUN_149401200(void)

void FUN_149401200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  cVar2 = FUN_149346a08(param_2);
  bVar1 = true;
  if (cVar2 != '\0') {
    puVar3 = local_58;
    if ((int)uStack_50 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    cVar2 = FUN_1402ca022(DAT_14cc14f38,puVar3);
    if (cVar2 == '\0') {
      puVar3 = local_58;
      if ((int)uStack_50 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1402ca022(DAT_14cc14e38,puVar3);
      if (cVar2 == '\0') {
        puVar3 = local_58;
        if ((int)uStack_50 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        cVar2 = FUN_1402ca022(DAT_14cc14f48,puVar3);
        if (cVar2 == '\0') goto LAB_1494012be;
        FUN_1494016a4(param_2,param_3);
      }
      else {
        FUN_1494014a2(param_1,param_2,param_3);
      }
    }
    else {
      FUN_149401396(param_2,param_3);
    }
    bVar1 = false;
  }
LAB_1494012be:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar1) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_149345138(param_2,&local_58);
    if ((longlong)(int)uStack_50 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = (longlong)(int)uStack_50 << 4;
      puVar3 = local_58;
      do {
        local_68 = param_4;
        FUN_149400eb0(param_1,param_2,param_3,puVar3);
        puVar3 = puVar3 + 8;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      uVar4 = uStack_50 & 0xffffffff;
    }
    FUN_1447a1747(local_58,uVar4);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149401396 FUN_149401396 body=266 status=ok
// SIG undefined FUN_149401396(void)

void FUN_149401396(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1493458b8(param_1,&DAT_14cc14f40);
  FUN_1400021e4(&DAT_14cc14f40,local_58);
  if (cVar1 == '\0') {
    FUN_14933bd24(local_48,local_58);
  }
  else {
    FUN_149346170();
  }
  cVar2 = FUN_1492eeb9c(param_1,local_48,local_34);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1492ee7cc(param_1,local_58);
    if (cVar1 == '\0') {
      FUN_14933bd24(local_48,local_58);
    }
    else {
      FUN_149346170();
    }
    FUN_1492eda3c(param_2,local_48,local_34);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494014a2 FUN_1494014a2 body=512 status=ok
// SIG undefined FUN_1494014a2(void)

void FUN_1494014a2(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1493458b8(param_2,&DAT_14cc14e48);
  local_58[2] = 0;
  uStack_40 = 0;
  FUN_1400021e4(&DAT_14cc14e48,&local_68);
  if (cVar2 == '\0') {
    FUN_14933bd24(local_58,&local_68);
  }
  else {
    FUN_149346170();
  }
  bVar3 = FUN_1492ef716(param_2,local_58,local_58 + 2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar3 & 1 < (int)uStack_40) == 1) {
    local_58[0] = 0;
    local_58[1] = 0;
    lVar4 = FUN_1492f2ba8(*(undefined8 *)(param_1 + 0x1a0),local_58 + 2);
    if (lVar4 != 0) {
      lVar5 = FUN_1458d6086();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        FUN_1492ef928(lVar4,&local_68);
        if (0 < (int)uStack_60) {
          iVar1 = *(int *)(local_68 + 1) + -1;
          if (*(int *)(local_68 + 1) == 0) {
            iVar1 = 0;
          }
          FUN_1402980a2(local_58,*local_68,iVar1);
          FUN_1492ee7cc(param_2,local_88);
          if (cVar2 == '\0') {
            FUN_14933bd24(local_78,local_88);
          }
          else {
            FUN_149346170();
          }
          FUN_1492ee142(param_3,local_78,local_58);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1444bb06c(param_3 + 0x60,local_58);
        }
        FUN_1447a1747(local_68,(int)uStack_60);
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494016a4 FUN_1494016a4 body=254 status=ok
// SIG undefined FUN_1494016a4(void)

void FUN_1494016a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1493458b8(param_1,&DAT_14cc14f50);
  FUN_1400021e4(&DAT_14cc14f50,local_60);
  if (cVar1 == '\0') {
    FUN_14933bd24(local_50,local_60);
  }
  else {
    FUN_149346170();
  }
  cVar1 = FUN_1492ef232(param_1,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_1492ee7cc(param_1,local_60);
    FUN_149346170(local_50,local_60);
    FUN_1492edf7c(param_2,local_50,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494017a4 FUN_1494017a4 body=312 status=ok
// SIG undefined FUN_1494017a4(void)

undefined4 * FUN_1494017a4(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_149433c1e(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_149433d04(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_149433df2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494018dd FUN_1494018dd body=148 status=ok
// SIG undefined FUN_1494018dd(void)

undefined8 FUN_1494018dd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a95144();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 149401972 FUN_149401972 body=148 status=ok
// SIG undefined FUN_149401972(void)

undefined8 FUN_149401972(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_140fd0d0c();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 149401a08 FUN_149401a08 body=63 status=ok
// SIG undefined FUN_149401a08(void)

void FUN_149401a08(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_149432998(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_149433df2(param_1);
    return;
  }
  FUN_149433fd0(param_1);
  FUN_149432998(param_1);
  return;
}



// FUNCTION 149401a48 FUN_149401a48 body=197 status=ok
// SIG undefined FUN_149401a48(void)

void FUN_149401a48(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [38];
  char local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1493474d0(param_2,&local_31);
  uVar1 = FUN_14934567c(param_2,&DAT_14cc14fa0);
  uVar2 = FUN_144a78877(local_31,uVar1);
  FUN_149401b0e(&local_32,param_2);
  uVar2 = FUN_144a78877(uVar2,local_32);
  uVar2 = FUN_144a78877(uVar2,local_32 == '\x02');
  uVar1 = FUN_149401bce(param_2);
  uVar2 = FUN_144a78877(uVar2,uVar1);
  uVar3 = FUN_149401c4a(param_1,param_2);
  FUN_144a78877(uVar2,uVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149401b0e FUN_149401b0e body=190 status=ok
// SIG undefined FUN_149401b0e(void)

char * FUN_149401b0e(char *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = '\0';
  cVar1 = FUN_14934567c(param_2,&DAT_14cc15198);
  cVar2 = FUN_14934567c(param_2,&DAT_14cc151a0);
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    cVar1 = FUN_14934567c(param_2,&DAT_14cc151b8);
    if (cVar1 == '\0') {
      cVar1 = FUN_14934567c(param_2,&DAT_14cc14f80);
      if (cVar1 != '\0') {
        cVar1 = FUN_14934567c(param_2,&DAT_14cc15428);
        if (cVar1 != '\0') {
          cVar1 = FUN_149347220(param_2,local_24);
          *param_1 = '\x02' - cVar1;
        }
      }
    }
    else {
      *param_1 = '\0';
    }
  }
  else {
    *param_1 = '\x02';
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149401bce FUN_149401bce body=123 status=ok
// SIG undefined FUN_149401bce(void)

char FUN_149401bce(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = FUN_14934567c(param_1,&DAT_14cc15198);
  cVar2 = FUN_14934567c(param_1,&DAT_14cc151a0);
  cVar3 = '\x01';
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    cVar1 = FUN_14934567c(param_1,&DAT_14cc151b8);
    cVar3 = '\x02';
    if (cVar1 == '\0') {
      cVar1 = FUN_14934567c(param_1,&DAT_14cc15180);
      cVar3 = '\x03';
      if (cVar1 == '\0') {
        cVar3 = FUN_14934567c(param_1,&DAT_14cc15428);
        cVar3 = cVar3 << 2;
      }
    }
  }
  return cVar3;
}



// FUNCTION 149401c4a FUN_149401c4a body=881 status=ok
// SIG undefined FUN_149401c4a(void)

undefined4 FUN_149401c4a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  FUN_149346a08(param_2,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  FUN_149345138(param_2);
  if ((int)uStack_70 < 2) {
    uVar3 = 0;
    if (param_2 == 0) goto LAB_149401ce0;
    lVar4 = FUN_145a93b24();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30)) goto LAB_149401ce0;
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    cVar1 = FUN_149346cc4(param_2);
    uVar3 = 0;
    if ((cVar1 != '\0') && (1 < (int)uStack_90)) {
      uVar2 = FUN_144a49b4a((int)uStack_90 + -1,local_98);
      uVar3 = FUN_144a78877(0,uVar2);
      uVar2 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc0),uVar2);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
    }
  }
  else {
    uVar2 = FUN_144a49b4a((int)uStack_70 + -1,local_78);
    uVar3 = FUN_144a78877(0,uVar2);
    uVar2 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc0),uVar2);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    FUN_1492fbc88(&local_98,param_2);
    uVar2 = 0;
    if ((longlong)(int)uStack_90 != 0) {
      lVar4 = (longlong)(int)uStack_90 * 0x30;
      puVar9 = local_98;
      local_e0 = param_2;
      do {
        uVar2 = *(undefined4 *)(puVar9 + 2);
        uVar3 = FUN_144a78877(uVar3,uVar2);
        uVar2 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc0),uVar2);
        *(undefined4 *)(param_1 + 0xc0) = uVar2;
        puVar7 = &DAT_149dfb77a;
        iVar5 = 0;
        if (*(int *)(puVar9 + 1) != 0) {
          puVar7 = (undefined2 *)*puVar9;
          iVar5 = *(int *)(puVar9 + 1) + -1;
        }
        uVar2 = FUN_144a49b4a(iVar5,puVar7);
        uVar3 = FUN_144a78877(uVar3,uVar2);
        uVar2 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc0),uVar2);
        *(undefined4 *)(param_1 + 0xc0) = uVar2;
        FUN_1492febbd(local_a8,*(undefined4 *)(puVar9 + 2));
        if (*(int *)(puVar9 + 2) == 0x12) {
          FUN_1492fb450(&local_c8,puVar9,*(undefined1 *)(puVar9 + 5));
          local_b8 = local_c8;
          uStack_b4 = uStack_c4;
          uStack_b0 = uStack_c0;
          uStack_ac = uStack_bc;
          FUN_1492ee7cc(local_e0,local_d8);
          FUN_1493ce5b0(&local_c8,local_d8);
          if (local_d8[0] != 0) {
            FUN_1400020a8();
          }
          FUN_149401fbc(param_1,local_e0,&local_b8,&local_c8);
          if (CONCAT44(uStack_c4,local_c8) != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FUN_1400020a8();
          }
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        puVar9 = puVar9 + 6;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
      param_2 = local_e0;
      uVar2 = (int)uStack_90;
    }
    FUN_149306a38(local_98,uVar2);
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_149401ce0:
  if ((longlong)(int)uStack_80 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = (longlong)(int)uStack_80 << 4;
    lVar4 = local_88;
    do {
      uVar2 = FUN_149402170(param_1,param_2,lVar4);
      uVar3 = FUN_144a78877(uVar3,uVar2);
      uVar2 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc0),uVar2);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      lVar4 = lVar4 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    uVar6 = uStack_80 & 0xffffffff;
  }
  FUN_1447a1747(local_88,uVar6);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149401fbc FUN_149401fbc body=434 status=ok
// SIG undefined FUN_149401fbc(void)

void FUN_149401fbc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_2;
  cVar4 = FUN_1492ef716(param_2,param_3);
  if (cVar4 != '\0') {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_144a787a6(&local_68,param_4);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))();
    if (cVar4 == '\0') {
      local_78 = local_58;
      local_70 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        local_70 = 0;
      }
      cVar4 = FUN_1468716aa(&local_78,0);
      if (cVar4 == '\0') {
        FUN_140b1283a(local_88,L"Factory_",&local_58);
        FUN_1492ee142(*(undefined8 *)(param_1 + 0x58),param_4,local_88);
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1492ee142(*(undefined8 *)(param_1 + 0x58),param_4,&local_58);
      }
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_14930e78e((longlong *)(param_1 + 0x60),iVar2);
      }
      _Src = local_68;
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = 0;
      lVar5 = (longlong)(int)uStack_60;
      *(int *)(lVar3 + 8 + lVar6) = (int)uStack_60;
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_60 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar5 * 2);
      }
      FUN_1494017a4(param_1 + 0x70,local_88,&local_48);
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402170 FUN_149402170 body=901 status=ok
// SIG undefined FUN_149402170(void)

undefined4 FUN_149402170(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = 0;
  uStack_50 = 0;
  cVar1 = FUN_1493454dc(param_2,param_3);
  if (cVar1 != '\0') {
    lVar6 = FUN_1492f2ba8(*(undefined8 *)(*param_1 + 0x1a0),local_48);
    uVar3 = 0;
    if (lVar6 != 0) {
      lVar7 = FUN_14595e754();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        uVar2 = FUN_149401c4a(param_1,lVar6);
        uVar3 = FUN_144a78877(0,uVar2);
        uVar2 = FUN_144a78877((int)param_1[0x18],uVar2);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
    }
    if (1 < (int)uStack_50) {
      uVar2 = FUN_144a49b4a((int)uStack_50 + -1,local_58);
      uVar3 = FUN_144a78877(uVar3,uVar2);
      uVar2 = FUN_144a78877((int)param_1[0x18],uVar2);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    goto LAB_149402377;
  }
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(local_68,iVar4,*param_3,1);
  local_78 = local_68[0];
  uVar2 = FUN_1493458b8(param_2);
  iVar4 = FUN_149347f14(param_2,param_3,uVar2);
  uVar3 = FUN_144a78877(0,iVar4);
  uVar5 = FUN_144a78877((int)param_1[0x18],iVar4);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  if ((char)uVar2 == '\0') {
    FUN_14933bd24(local_68,param_3);
    if (iVar4 == 0x12) {
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      cVar1 = FUN_1492ef716(param_2,local_68);
      if (cVar1 != '\0') {
        puVar8 = local_78;
        if ((int)uStack_70 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        iVar4 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar4 = 0;
        }
        uVar2 = FUN_144a49b4a(iVar4,puVar8);
        uVar3 = FUN_144a78877(uVar3,uVar2);
        uVar2 = FUN_144a78877((int)param_1[0x18],uVar2);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      goto LAB_149402359;
    }
    if (iVar4 == 0xf) {
      cVar1 = FUN_1492ef232(param_2,local_68,&local_78);
      if (cVar1 != '\0') {
        uVar2 = FUN_1448eb174(&local_78,0x10,0);
        goto LAB_1494023e9;
      }
    }
    else if ((iVar4 == 8) && (cVar1 = FUN_1492eeb9c(param_2,local_68,&local_78), cVar1 != '\0')) {
      uVar2 = local_78._0_4_;
LAB_1494023e9:
      uVar3 = FUN_144a78877(uVar3,uVar2);
      uVar2 = FUN_144a78877((int)param_1[0x18],uVar2);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  else {
    FUN_149346170();
    FUN_1492ee7cc(param_2,local_88);
    FUN_1493ce5b0(&local_78,local_88);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (iVar4 < 0xf) {
      if (iVar4 == 1) {
        FUN_149402756(param_1,param_2,local_68,&local_78);
      }
      else if (iVar4 == 8) {
        FUN_1494024f6(param_1,param_2,local_68,&local_78);
      }
    }
    else if (iVar4 == 0xf) {
      FUN_149402626(param_1,param_2,local_68,&local_78);
    }
    else if (iVar4 == 0x12) {
      FUN_149401fbc(param_1,param_2,local_68,&local_78);
    }
LAB_149402359:
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68[0] != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_149402377:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494024f6 FUN_1494024f6 body=302 status=ok
// SIG undefined FUN_1494024f6(void)

void FUN_1494024f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  cVar4 = FUN_1492eeb9c(param_2,param_3,local_3c);
  if (cVar4 != '\0') {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_144a787a6(&local_58,param_4);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))
                      (*(longlong **)(param_1 + 0x58),&local_58);
    if (cVar4 == '\0') {
      FUN_1492eda3c(*(undefined8 *)(param_1 + 0x58),param_4,local_3c);
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_14930e78e((longlong *)(param_1 + 0x60),iVar2);
      }
      _Src = local_58;
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = 0;
      lVar5 = (longlong)(int)uStack_50;
      *(int *)(lVar3 + 8 + lVar6) = (int)uStack_50;
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_50 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar5 * 2);
      }
      FUN_1494017a4(param_1 + 0x70,local_5c,&local_38);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402626 FUN_149402626 body=302 status=ok
// SIG undefined FUN_149402626(void)

void FUN_149402626(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  cVar4 = FUN_1492ef232(param_2,param_3,local_48);
  if (cVar4 != '\0') {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_144a787a6(&local_58,param_4);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))
                      (*(longlong **)(param_1 + 0x58),&local_58);
    if (cVar4 == '\0') {
      FUN_1492edf7c(*(undefined8 *)(param_1 + 0x58),param_4,local_48);
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_14930e78e((longlong *)(param_1 + 0x60),iVar2);
      }
      _Src = local_58;
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = 0;
      lVar5 = (longlong)(int)uStack_50;
      *(int *)(lVar3 + 8 + lVar6) = (int)uStack_50;
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_50 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar5 * 2);
      }
      FUN_1494017a4(param_1 + 0x70,local_5c,&local_38);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402756 FUN_149402756 body=302 status=ok
// SIG undefined FUN_149402756(void)

void FUN_149402756(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  cVar4 = FUN_1492ee61c(param_2,param_3,&local_39);
  if (cVar4 != '\0') {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_144a787a6(&local_58,param_4);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))
                      (*(longlong **)(param_1 + 0x58),&local_58);
    if (cVar4 == '\0') {
      FUN_1492ed6b4(*(undefined8 *)(param_1 + 0x58),param_4,&local_39);
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_14930e78e((longlong *)(param_1 + 0x60),iVar2);
      }
      _Src = local_58;
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar6 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar6);
      *(undefined8 *)(lVar3 + lVar6) = 0;
      lVar5 = (longlong)(int)uStack_50;
      *(int *)(lVar3 + 8 + lVar6) = (int)uStack_50;
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_50 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar5 * 2);
      }
      FUN_1494017a4(param_1 + 0x70,local_5c,&local_38);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402886 FUN_149402886 body=901 status=ok
// SIG undefined FUN_149402886(void)

longlong FUN_149402886(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
    puVar8 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[9];
    }
    uVar9 = *(uint *)((longlong)puVar8 +
                     (ulonglong)(*(int *)(param_1 + 10) - 1U & *(uint *)((longlong)param_1 + 0xc4))
                     * 4);
    if (uVar9 != 0xffffffff) {
      lVar6 = 0;
      do {
        puVar1 = (uint *)(param_1[1] + (longlong)(int)uVar9 * 0x18);
        if (*puVar1 == *(uint *)((longlong)param_1 + 0xc4)) {
          if ((puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) ||
             (lVar2 = *(longlong *)(puVar1 + 2), lVar2 == 0)) goto LAB_1494028b1;
          uVar3 = *param_1;
          local_58 = FUN_145a95058();
          if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_58);
          }
          lVar6 = FUN_1493f729e(uVar3,param_2,&local_58);
          if (lVar6 == 0) {
LAB_1494029aa:
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_145a95058();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1494029aa;
          }
          FUN_1492ef9be(lVar2,&local_68);
          FUN_14938bd94(lVar6,&local_68);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_1492ef9be(lVar2,&local_68);
          FUN_1444bb06c(lVar6 + 0x60,&local_68);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if ((longlong)*(int *)(param_1 + 0xd) != 0) {
            lVar7 = param_1[0xc];
            lVar15 = (longlong)*(int *)(param_1 + 0xd) * 0x10 + lVar7;
            goto LAB_149402a22;
          }
          break;
        }
        uVar9 = puVar1[4];
      } while (uVar9 != 0xffffffff);
      goto LAB_1494028b3;
    }
  }
LAB_1494028b1:
  lVar6 = 0;
  goto LAB_1494028b3;
LAB_149402a22:
  do {
    iVar5 = (**(code **)(*(longlong *)param_1[0xb] + 0x2b8))((longlong *)param_1[0xb],lVar7);
    if (iVar5 == 0x12) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      cVar4 = FUN_1492ef716(param_1[0xb],lVar7,&local_78);
      if ((cVar4 != '\0') && (cVar4 = FUN_1492ef716(lVar2,lVar7,&local_68), cVar4 != '\0')) {
        if ((float)uStack_60 == (float)uStack_70) {
          if (1 < (int)(float)uStack_60) {
            lVar12 = 0;
            while( true ) {
              uVar10 = *(ushort *)(local_68 + lVar12);
              uVar11 = (ulonglong)uVar10;
              uVar13 = *(ushort *)(local_78 + lVar12);
              if (uVar10 != uVar13) break;
              if (uVar10 == 0) goto LAB_149402a88;
LAB_149402bba:
              lVar12 = lVar12 + 2;
            }
            if ((uVar13 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar14 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar14]) goto LAB_149402bba;
            }
            if (uVar10 != uVar13) goto LAB_149402bf7;
          }
        }
        else if ((int)(float)uStack_70 + (int)(float)uStack_60 != 1) {
LAB_149402bf7:
          FUN_1492ee142(lVar6,lVar7,&local_78);
        }
      }
LAB_149402a88:
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else if (iVar5 == 0xf) {
      cVar4 = FUN_1492ef232(param_1[0xb],lVar7,&local_78);
      if ((cVar4 != '\0') && (cVar4 = FUN_1492ef232(lVar2,lVar7,&local_68), cVar4 != '\0')) {
        if (((float)local_68 == (float)local_78) && (!NAN((float)local_68) && !NAN((float)local_78))
           ) {
          if ((local_68._4_4_ == local_78._4_4_) && (!NAN(local_68._4_4_) && !NAN(local_78._4_4_)))
          {
            if (((float)uStack_60 == (float)uStack_70) &&
               (!NAN((float)uStack_60) && !NAN((float)uStack_70))) {
              if ((uStack_60._4_4_ == uStack_70._4_4_) &&
                 (!NAN(uStack_60._4_4_) && !NAN(uStack_70._4_4_))) goto LAB_149402a41;
            }
          }
        }
        FUN_1492edf7c(lVar6,lVar7,&local_78);
      }
    }
    else if (((iVar5 == 8) && (cVar4 = FUN_1492eeb9c(param_1[0xb],lVar7,&local_78), cVar4 != '\0'))
            && (cVar4 = FUN_1492eeb9c(lVar2,lVar7,&local_68), cVar4 != '\0')) {
      if (((float)local_68 != (float)local_78) || (NAN((float)local_68) || NAN((float)local_78))) {
        FUN_1492eda3c(lVar6,lVar7,&local_78);
      }
    }
LAB_149402a41:
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != lVar15);
LAB_1494028b3:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 149402c0c FUN_149402c0c body=124 status=ok
// SIG undefined FUN_149402c0c(void)

undefined8 FUN_149402c0c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = FUN_1493f68e6(*param_1);
  local_28 = &local_38;
  local_30 = (longlong)param_1 + 0xc4;
  FUN_149434114(param_1 + 1,local_1c);
  FUN_1492f1d98(param_1[0xb],local_38,param_1 + 0xc);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402c8a FUN_149402c8a body=337 status=ok
// SIG undefined FUN_149402c8a(void)

longlong FUN_149402c8a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
    puVar6 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[9];
    }
    uVar5 = *(uint *)((longlong)puVar6 +
                     (ulonglong)(*(int *)(param_1 + 10) - 1U & *(uint *)((longlong)param_1 + 0xc4))
                     * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar7 = (uint *)(param_1[1] + (longlong)(int)uVar5 * 0x18);
        if (*puVar7 == *(uint *)((longlong)param_1 + 0xc4)) goto LAB_149402cd5;
        uVar5 = puVar7[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  puVar7 = (uint *)0x0;
LAB_149402cd5:
  lVar1 = *(longlong *)(puVar7 + 2);
  uVar2 = *param_1;
  local_28 = FUN_145a95058();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar3 = FUN_1493f729e(uVar2,param_2,&local_28,1);
  if (lVar3 != 0) {
    lVar4 = FUN_145a95058();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_149402d16;
  }
  lVar3 = 0;
LAB_149402d16:
  if (lVar1 != 0) {
    FUN_1492ef9be(lVar1,local_38);
    FUN_14938bd94(lVar3,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar1,local_38);
    FUN_1444bb06c(lVar3 + 0x60,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 149402ddc FUN_149402ddc body=244 status=ok
// SIG undefined FUN_149402ddc(void)

ulonglong FUN_149402ddc(longlong param_1,wchar_t **param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    cVar1 = FUN_144729dda(param_1 + 0x14c);
    if (cVar1 == '\0') {
      local_38 = L"SkeletonMustBeSpecified";
      local_30 = 0x17;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties";
      local_30 = 0x3e;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,
                    L"When importing only animations, a valid skeleton must be set.");
      if (&local_38 != param_2) {
        if (*param_2 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)*param_2 + 0x10))();
        }
        FUN_14023423e(param_2,&local_38);
      }
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
      uVar2 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149402ee6 FUN_149402ee6 body=114 status=ok
// SIG undefined FUN_149402ee6(void)

undefined8 * FUN_149402ee6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 149402f58 FUN_149402f58 body=228 status=ok
// SIG undefined FUN_149402f58(void)

void FUN_149402f58(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_2 + 0xb) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x61);
  *(char *)((longlong)param_1 + 0x61) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 14940303c FUN_14940303c body=143 status=ok
// SIG undefined FUN_14940303c(void)

void FUN_14940303c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494030cc FUN_1494030cc body=52 status=ok
// SIG undefined FUN_1494030cc(void)

void FUN_1494030cc(longlong *param_1)

{
  FUN_149403100();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149403100 FUN_149403100 body=89 status=ok
// SIG undefined FUN_149403100(void)

void FUN_149403100(longlong param_1)

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



// FUNCTION 149403159 FUN_149403159 body=73 status=ok
// SIG undefined FUN_149403159(void)

void FUN_149403159(longlong param_1,int param_2)

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



// FUNCTION 1494031a2 FUN_1494031a2 body=98 status=ok
// SIG undefined FUN_1494031a2(void)

void FUN_1494031a2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149403204 FUN_149403204 body=45 status=ok
// SIG undefined FUN_149403204(void)

void FUN_149403204(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 149403232 FUN_149403232 body=132 status=ok
// SIG undefined FUN_149403232(void)

void FUN_149403232(longlong param_1,int param_2)

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



// FUNCTION 1494032b8 FUN_1494032b8 body=132 status=ok
// SIG undefined FUN_1494032b8(void)

void FUN_1494032b8(longlong param_1,int param_2)

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



// FUNCTION 14940333e FUN_14940333e body=96 status=ok
// SIG undefined FUN_14940333e(void)

void FUN_14940333e(longlong param_1,int param_2)

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



// FUNCTION 14940339e FUN_14940339e body=132 status=ok
// SIG undefined FUN_14940339e(void)

void FUN_14940339e(longlong param_1,int param_2)

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



// FUNCTION 149403424 FUN_149403424 body=132 status=ok
// SIG undefined FUN_149403424(void)

void FUN_149403424(longlong param_1,int param_2)

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



// FUNCTION 1494034aa FUN_1494034aa body=414 status=ok
// SIG undefined FUN_1494034aa(void)

undefined8 * FUN_1494034aa(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2e0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bcc19c0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2d0);
  FUN_140a55f88(plVar4);
  plVar3[0x4f] = 0;
  plVar3[0x50] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14bcc19e0;
  plVar3[0x51] = 0;
  plVar3[0x52] = 0;
  plVar3[0x53] = 0;
  plVar3[0x54] = 0;
  plVar3[0x55] = 0;
  plVar3[0x56] = 0;
  plVar3[0x57] = 0;
  plVar3[0x58] = 0;
  plVar3[0x59] = 0;
  plVar3[0x5a] = 0;
  plVar3[0x5b] = 0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1494038b6(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1494035d6;
    param_1[1] = 0;
LAB_1494035a0:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1494035d6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1494035d6;
      goto LAB_1494035a0;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1494035d6;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1494035d6:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x2d0;
  FUN_140a52e78(*param_1,"SInterchangeGenericAssetMaterialConflictWidget",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x410);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940364a FUN_14940364a body=9 status=ok
// SIG undefined FUN_14940364a(void)

void FUN_14940364a(longlong param_1)

{
  FUN_1494037a8(param_1 + 0x10);
  return;
}



// FUNCTION 149403654 FUN_149403654 body=29 status=ok
// SIG undefined FUN_149403654(void)

undefined8 FUN_149403654(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149403672 FUN_149403672 body=38 status=ok
// SIG undefined FUN_149403672(void)

undefined8 FUN_149403672(undefined8 param_1,int param_2)

{
  FUN_1494037a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14940369c FUN_14940369c body=133 status=ok
// SIG undefined FUN_14940369c(void)

void FUN_14940369c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  *(longlong *)(param_1 + 0x270) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000149403715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149403722 FUN_149403722 body=38 status=ok
// SIG undefined FUN_149403722(void)

undefined8 FUN_149403722(undefined8 param_1,int param_2)

{
  FUN_149403748();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149403748 FUN_149403748 body=96 status=ok
// SIG undefined FUN_149403748(void)

void FUN_149403748(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcc1c30;
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1494037a8 FUN_1494037a8 body=196 status=ok
// SIG undefined FUN_1494037a8(void)

void FUN_1494037a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcc19e0;
  plVar3 = (longlong *)param_1[0x59];
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
  FUN_14940386c(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_149403748(param_1);
  return;
}



// FUNCTION 14940386c FUN_14940386c body=73 status=ok
// SIG undefined FUN_14940386c(void)

void FUN_14940386c(longlong param_1,int param_2)

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



// FUNCTION 1494038b6 FUN_1494038b6 body=167 status=ok
// SIG undefined FUN_1494038b6(void)

void FUN_1494038b6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_149403931;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_149403931;
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
LAB_149403931:
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
                    /* WARNING: Could not recover jumptable at 0x000149403951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14940395e FUN_14940395e body=95 status=ok
// SIG undefined FUN_14940395e(void)

void FUN_14940395e(longlong param_1,uint param_2)

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



// FUNCTION 1494039be FUN_1494039be body=132 status=ok
// SIG undefined FUN_1494039be(void)

void FUN_1494039be(longlong param_1,int param_2)

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



// FUNCTION 149403a44 FUN_149403a44 body=282 status=ok
// SIG undefined FUN_149403a44(void)

longlong * FUN_149403a44(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_149403b5f();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_149403d4e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149403af1;
    param_1[1] = 0;
LAB_149403abb:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149403af1;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_149403af1;
      goto LAB_149403abb;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149403af1;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_149403af1:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2b8;
  FUN_140a52e78(*param_1,"SInterchangeGenericAssetSkeletonConflictWidget",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x472);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149403b5f FUN_149403b5f body=107 status=ok
// SIG undefined FUN_149403b5f(void)

undefined8 * FUN_149403b5f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2c8,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14bcc1e80;
  FUN_140a55f88(puVar1 + 2);
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[2] = &PTR_FUN_14bcc1ea0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  return puVar1;
}



// FUNCTION 149403bd4 FUN_149403bd4 body=29 status=ok
// SIG undefined FUN_149403bd4(void)

undefined8 FUN_149403bd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149403bf2 FUN_149403bf2 body=38 status=ok
// SIG undefined FUN_149403bf2(void)

undefined8 FUN_149403bf2(undefined8 param_1,int param_2)

{
  FUN_149403cbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149403c18 FUN_149403c18 body=162 status=ok
// SIG undefined FUN_149403c18(void)

undefined1 *
FUN_149403c18(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  lVar5 = DAT_14c964dd0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c964dd0;
    UNLOCK();
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
  if (lVar3 == lVar5) {
    FUN_1493f446a(param_1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  return param_2;
}



// FUNCTION 149403cbe FUN_149403cbe body=144 status=ok
// SIG undefined FUN_149403cbe(void)

void FUN_149403cbe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcc1ea0;
  plVar3 = (longlong *)param_1[0x56];
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
  FUN_149403159(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf7175(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_149403748(param_1);
  return;
}



// FUNCTION 149403d4e FUN_149403d4e body=167 status=ok
// SIG undefined FUN_149403d4e(void)

void FUN_149403d4e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_149403dc9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_149403dc9;
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
LAB_149403dc9:
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
                    /* WARNING: Could not recover jumptable at 0x000149403de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149403df6 FUN_149403df6 body=188 status=ok
// SIG undefined FUN_149403df6(void)

undefined8 FUN_149403df6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14681a7fc(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149403eb4 FUN_149403eb4 body=188 status=ok
// SIG undefined FUN_149403eb4(void)

undefined8 FUN_149403eb4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_142787b48(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149403f72 FUN_149403f72 body=188 status=ok
// SIG undefined FUN_149403f72(void)

undefined8 FUN_149403f72(undefined8 param_1,undefined2 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_142787b48(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149404030 FUN_149404030 body=187 status=ok
// SIG undefined FUN_149404030(void)

undefined8 FUN_149404030(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_142787b48(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494040ec FUN_1494040ec body=188 status=ok
// SIG undefined FUN_1494040ec(void)

undefined8 FUN_1494040ec(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_145a2f1a0(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494041aa FUN_1494041aa body=189 status=ok
// SIG undefined FUN_1494041aa(void)

undefined8 FUN_1494041aa(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14681a812(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149404268 FUN_149404268 body=279 status=ok
// SIG undefined FUN_149404268(void)

undefined8 FUN_149404268(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  float fVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (uint)*param_2 << 0xd;
  if ((uVar1 & 0xf800000) == 0xf800000) {
    fVar2 = (float)(uVar1 | 0x70000000);
  }
  else if ((uVar1 & 0xf800000) == 0) {
    fVar2 = (float)(uVar1 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar2 = (float)((uVar1 & 0xfffe000) + 0x38000000);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_14681a812(local_68,(int)(short)*param_2 & 0x80000000U | (uint)fVar2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149404380 FUN_149404380 body=189 status=ok
// SIG undefined FUN_149404380(void)

undefined8 FUN_149404380(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14681a82c(local_68,*param_2);
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_147058dbc(&local_48,0);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  FUN_140b411da(local_48,local_68);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(param_1,&DAT_149e19f2c,&local_48);
  FUN_1407adb3e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940443e FUN_14940443e body=46 status=ok
// SIG undefined FUN_14940443e(void)

void FUN_14940443e(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_1467d74bc();
  FUN_14940446c(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 14940446c FUN_14940446c body=1236 status=ok
// SIG undefined FUN_14940446c(void)

void FUN_14940446c(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  int iVar22;
  longlong lVar23;
  undefined2 *puVar24;
  float fVar25;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_378 = param_1;
    fVar25 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar25 + fVar25);
    plVar16 = &local_378;
    do {
      puVar14 = (undefined8 *)*plVar16;
      puVar20 = (undefined8 *)plVar16[1];
      iVar19 = (int)plVar16[2];
      iVar22 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar14) >> 3);
      local_380 = plVar16;
      if (iVar19 != 0) {
LAB_149404523:
        uVar15 = iVar22 * -0x33333333 + 1;
        if (8 < (int)uVar15) {
          uVar17 = (ulonglong)(uVar15 >> 1);
          uVar3 = puVar14[uVar17 * 5 + 4];
          uVar4 = puVar14[uVar17 * 5];
          uVar5 = (puVar14 + uVar17 * 5)[1];
          uVar6 = puVar14[uVar17 * 5 + 2];
          uVar7 = (puVar14 + uVar17 * 5 + 2)[1];
          puVar14[uVar17 * 5 + 4] = puVar14[4];
          uVar8 = *puVar14;
          uVar9 = puVar14[1];
          uVar10 = puVar14[3];
          puVar14[uVar17 * 5 + 2] = puVar14[2];
          (puVar14 + uVar17 * 5 + 2)[1] = uVar10;
          puVar14[uVar17 * 5] = uVar8;
          (puVar14 + uVar17 * 5)[1] = uVar9;
          puVar14[4] = uVar3;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          *puVar14 = uVar4;
          puVar14[1] = uVar5;
          puVar18 = puVar20 + 5;
          puVar13 = puVar14;
LAB_1494045a3:
          puVar12 = puVar13;
          puVar13 = puVar12 + 5;
          if (puVar13 <= puVar20) {
            puVar21 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 6) != 0) {
              puVar21 = (undefined2 *)puVar12[5];
            }
            puVar24 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar24 = (undefined2 *)*puVar14;
            }
            lVar23 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
              uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_14940460a;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar22 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_14940460d;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_14940460d;
                }
              }
              lVar23 = lVar23 + 2;
            } while( true );
          }
          goto LAB_149404612;
        }
        for (; puVar18 = puVar14, puVar13 = puVar14, puVar14 < puVar20; puVar20 = puVar20 + -5) {
joined_r0x0001494047fe:
          puVar12 = puVar13 + 5;
          if (puVar12 <= puVar20) {
            puVar21 = &DAT_149dfb77a;
            if (*(int *)(puVar13 + 6) != 0) {
              puVar21 = (undefined2 *)puVar13[5];
            }
            puVar24 = &DAT_149dfb77a;
            if (*(int *)(puVar18 + 1) != 0) {
              puVar24 = (undefined2 *)*puVar18;
            }
            lVar23 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
              uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
              puVar13 = puVar12;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x0001494047fe;
LAB_14940483e:
              lVar23 = lVar23 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_14940483e;
              iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            }
            else {
              iVar19 = (uint)uVar1 - (uint)uVar2;
            }
            if (iVar19 < 0) {
              puVar18 = puVar12;
            }
            goto joined_r0x0001494047fe;
          }
          local_58 = puVar18[4];
          local_78 = *puVar18;
          uStack_70 = puVar18[1];
          local_68 = puVar18[2];
          uStack_60 = puVar18[3];
          uVar6 = local_78;
          uVar7 = uStack_70;
          puVar18[4] = puVar20[4];
          uVar3 = *puVar20;
          uVar4 = puVar20[1];
          uVar5 = puVar20[3];
          puVar18[2] = puVar20[2];
          puVar18[3] = uVar5;
          *puVar18 = uVar3;
          puVar18[1] = uVar4;
          puVar20[4] = local_58;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar20[2] = local_68;
          puVar20[3] = uStack_60;
          *(undefined4 *)puVar20 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar20 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_70._4_4_;
          local_78 = uVar6;
          uStack_70 = uVar7;
        }
        goto LAB_1494048e4;
      }
LAB_1494047e1:
      FUN_149404941(puVar14);
LAB_1494048e4:
      plVar16 = local_380 + -3;
    } while (&local_378 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14940460a:
  iVar22 = 0;
LAB_14940460d:
  if (iVar22 < 0) {
LAB_149404612:
    puVar11 = puVar18;
    puVar18 = puVar11 + -5;
    if (puVar14 < puVar18) {
      puVar21 = &DAT_149dfb77a;
      if (*(int *)(puVar14 + 1) != 0) {
        puVar21 = (undefined2 *)*puVar14;
      }
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(puVar11 + -4) != 0) {
        puVar24 = (undefined2 *)puVar11[-5];
      }
      lVar23 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar24 + lVar23);
        uVar2 = *(ushort *)((longlong)puVar21 + lVar23);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_14940467c;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar22 = (uint)uVar1 - (uint)uVar2;
            goto LAB_14940467f;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_14940467f;
          }
        }
        lVar23 = lVar23 + 2;
      } while( true );
    }
    goto LAB_149404684;
  }
  goto LAB_1494045a3;
LAB_14940467c:
  iVar22 = 0;
LAB_14940467f:
  if (iVar22 < 0) goto LAB_149404684;
  goto LAB_149404612;
LAB_149404684:
  if (puVar13 <= puVar18) {
    uVar3 = puVar12[9];
    uVar4 = *puVar13;
    uVar5 = puVar12[6];
    uVar6 = puVar12[7];
    uVar7 = puVar12[8];
    puVar12[9] = puVar11[-1];
    uVar8 = *puVar18;
    uVar9 = puVar11[-4];
    uVar10 = puVar11[-2];
    puVar12[7] = puVar11[-3];
    puVar12[8] = uVar10;
    *puVar13 = uVar8;
    puVar12[6] = uVar9;
    puVar11[-1] = uVar3;
    puVar11[-3] = uVar6;
    puVar11[-2] = uVar7;
    *puVar18 = uVar4;
    puVar11[-4] = uVar5;
    goto LAB_1494045a3;
  }
  local_58 = puVar14[4];
  local_78 = *puVar14;
  uStack_70 = puVar14[1];
  local_68 = puVar14[2];
  uStack_60 = puVar14[3];
  uVar6 = local_78;
  uVar7 = uStack_70;
  puVar14[4] = puVar11[-1];
  uVar3 = *puVar18;
  uVar4 = puVar11[-4];
  uVar5 = puVar11[-2];
  puVar14[2] = puVar11[-3];
  puVar14[3] = uVar5;
  *puVar14 = uVar3;
  puVar14[1] = uVar4;
  puVar11[-1] = local_58;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar11[-3] = local_68;
  puVar11[-2] = uStack_60;
  *(undefined4 *)puVar18 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar11 + -0x24) = local_78._4_4_;
  *(undefined4 *)(puVar11 + -4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar11 + -0x1c) = uStack_70._4_4_;
  iVar19 = iVar19 + -1;
  puVar11 = puVar11 + -10;
  local_78 = uVar6;
  uStack_70 = uVar7;
  if ((longlong)puVar11 - (longlong)puVar14 < (longlong)puVar20 - (longlong)puVar13) {
    if (puVar13 < puVar20) {
      *local_380 = (longlong)puVar13;
      local_380[1] = (longlong)puVar20;
      *(int *)(local_380 + 2) = iVar19;
      local_380 = local_380 + 3;
    }
    if (puVar18 <= puVar14 + 5) goto LAB_1494048e4;
  }
  else {
    if (puVar14 + 5 < puVar18) {
      *local_380 = (longlong)puVar14;
      local_380[1] = (longlong)puVar11;
      *(int *)(local_380 + 2) = iVar19;
      local_380 = local_380 + 3;
    }
    puVar11 = puVar20;
    puVar14 = puVar13;
    if (puVar20 <= puVar13) goto LAB_1494048e4;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar14) >> 3);
  puVar20 = puVar11;
  if (iVar19 == 0) goto LAB_1494047e1;
  goto LAB_149404523;
}



// FUNCTION 149404941 FUN_149404941 body=1102 status=ok
// SIG undefined FUN_149404941(void)

void FUN_149404941(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar19 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar17 = iVar19 * 2 + 1;
      iVar23 = iVar19;
      if (iVar17 < (int)param_2) {
LAB_14940499c:
        iVar21 = iVar23 * 2 + 2;
        iVar22 = iVar17;
        if (iVar21 < (int)param_2) {
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 5 + 1) != 0) {
            puVar18 = (undefined2 *)param_1[(longlong)iVar17 * 5];
          }
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar21 * 5 + 1) != 0) {
            puVar14 = (undefined2 *)param_1[(longlong)iVar21 * 5];
          }
          lVar25 = 0;
          while( true ) {
            uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
            uVar16 = (uint)uVar4;
            uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
            uVar15 = (uint)uVar5;
            iVar22 = iVar21;
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_149404a1b;
LAB_1494049eb:
            lVar25 = lVar25 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1494049eb;
          }
          if ((int)(uVar16 - uVar15) < 0) {
            iVar22 = iVar17;
          }
        }
LAB_149404a1b:
        lVar25 = (longlong)iVar22;
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
          puVar18 = (undefined2 *)param_1[lVar25 * 5];
        }
        lVar24 = (longlong)iVar23;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar24 * 5 + 1) != 0) {
          puVar14 = (undefined2 *)param_1[lVar24 * 5];
        }
        puVar2 = param_1 + lVar24 * 5;
        puVar3 = param_1 + lVar25 * 5;
        lVar25 = 0;
        do {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
          uVar16 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
          uVar15 = (uint)uVar5;
          if (uVar4 == uVar5) {
            if (uVar4 == 0) break;
          }
          else {
            if (0x7f < (uVar5 | uVar4)) goto LAB_149404a8f;
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar5]) goto LAB_149404a8f;
          }
          lVar25 = lVar25 + 2;
        } while( true );
      }
LAB_149404afc:
      bVar26 = iVar19 != 0;
      iVar19 = iVar19 + -1;
    } while (bVar26);
    if (1 < (int)param_2) {
      uVar20 = (ulonglong)param_2 - 1;
      local_48 = param_1[4];
      uVar6 = *param_1;
      uVar7 = param_1[1];
      uVar8 = param_1[2];
      uVar9 = param_1[3];
      param_1[4] = param_1[uVar20 * 5 + 4];
      uVar10 = param_1[uVar20 * 5];
      uVar11 = (param_1 + uVar20 * 5)[1];
      uVar12 = (param_1 + uVar20 * 5 + 2)[1];
      param_1[2] = param_1[uVar20 * 5 + 2];
      param_1[3] = uVar12;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar20 * 5 + 4] = local_48;
      local_68._0_4_ = (undefined4)uVar6;
      local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar7;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_58._0_4_ = (undefined4)uVar8;
      local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar9;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar2 = param_1 + uVar20 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
      puVar2 = param_1 + uVar20 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar6;
      uStack_60 = uVar7;
      local_58 = uVar8;
      uStack_50 = uVar9;
      if (param_2 != 2) {
LAB_149404bac:
        iVar19 = 1;
        iVar17 = 0;
        iVar23 = 0;
LAB_149404bb7:
        iVar17 = iVar17 + 2;
        lVar25 = (longlong)iVar17;
        iVar22 = iVar19;
        if (lVar25 < (longlong)uVar20) {
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar19 * 5 + 1) != 0) {
            puVar18 = (undefined2 *)param_1[(longlong)iVar19 * 5];
          }
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
            puVar14 = (undefined2 *)param_1[lVar25 * 5];
          }
          lVar25 = 0;
          while( true ) {
            uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
            uVar15 = (uint)uVar4;
            uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
            uVar16 = (uint)uVar5;
            iVar22 = iVar17;
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_149404c32;
LAB_149404c03:
            lVar25 = lVar25 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_149404c03;
          }
          if ((int)(uVar15 - uVar16) < 0) {
            iVar22 = iVar19;
          }
        }
LAB_149404c32:
        lVar25 = (longlong)iVar22;
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar25 * 5 + 1) != 0) {
          puVar18 = (undefined2 *)param_1[lVar25 * 5];
        }
        lVar24 = (longlong)iVar23;
        puVar14 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar24 * 5 + 1) != 0) {
          puVar14 = (undefined2 *)param_1[lVar24 * 5];
        }
        puVar2 = param_1 + lVar24 * 5;
        puVar3 = param_1 + lVar25 * 5;
        lVar25 = 0;
        do {
          uVar4 = *(ushort *)((longlong)puVar14 + lVar25);
          uVar15 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar18 + lVar25);
          uVar16 = (uint)uVar5;
          if (uVar4 == uVar5) {
            if (uVar4 == 0) goto LAB_149404d15;
          }
          else {
            if (0x7f < (uVar5 | uVar4)) goto LAB_149404ca2;
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar5]) goto LAB_149404ca2;
          }
          lVar25 = lVar25 + 2;
        } while( true );
      }
    }
  }
LAB_149404b7f:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_149404a8f:
  if (-1 < (int)(uVar16 - uVar15)) goto LAB_149404afc;
  local_48 = puVar2[4];
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2[4] = puVar3[4];
  uVar10 = *puVar3;
  uVar11 = puVar3[1];
  uVar12 = puVar3[3];
  puVar2[2] = puVar3[2];
  puVar2[3] = uVar12;
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar3[4] = local_48;
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar7;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_58._0_4_ = (undefined4)uVar8;
  local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar9;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)puVar3 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
  iVar17 = iVar22 * 2 + 1;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  iVar23 = iVar22;
  if ((int)param_2 <= iVar17) goto LAB_149404afc;
  goto LAB_14940499c;
LAB_149404ca2:
  if (-1 < (int)(uVar15 - uVar16)) goto LAB_149404d15;
  uVar6 = puVar2[4];
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar2[4] = puVar3[4];
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[3];
  puVar2[2] = puVar3[2];
  puVar2[3] = uVar13;
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar3[4] = uVar6;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  iVar17 = iVar22 * 2;
  iVar19 = iVar22 * 2 + 1;
  iVar23 = iVar22;
  if ((longlong)uVar20 <= (longlong)iVar19) goto LAB_149404d15;
  goto LAB_149404bb7;
LAB_149404d15:
  uVar1 = uVar20 - 1;
  local_48 = param_1[4];
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  param_1[4] = param_1[uVar1 * 5 + 4];
  uVar10 = param_1[uVar1 * 5];
  uVar11 = (param_1 + uVar1 * 5)[1];
  uVar12 = (param_1 + uVar1 * 5 + 2)[1];
  param_1[2] = param_1[uVar1 * 5 + 2];
  param_1[3] = uVar12;
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[uVar1 * 5 + 4] = local_48;
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar7;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_58._0_4_ = (undefined4)uVar8;
  local_58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar9;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  puVar2 = param_1 + uVar1 * 5 + 2;
  *(undefined4 *)puVar2 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar2 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_50._4_4_;
  puVar2 = param_1 + uVar1 * 5;
  *(undefined4 *)puVar2 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
  bVar26 = uVar20 < 3;
  uVar20 = uVar1;
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar8;
  uStack_50 = uVar9;
  if (bVar26) goto LAB_149404b7f;
  goto LAB_149404bac;
}



// FUNCTION 149404d90 FUN_149404d90 body=9 status=ok
// SIG undefined FUN_149404d90(void)

void FUN_149404d90(longlong param_1)

{
  FUN_149404db8(param_1 + 0x10);
  return;
}



// FUNCTION 149404d9a FUN_149404d9a body=29 status=ok
// SIG undefined FUN_149404d9a(void)

undefined8 FUN_149404d9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149404db8 FUN_149404db8 body=61 status=ok
// SIG undefined FUN_149404db8(void)

void FUN_149404db8(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149404df6 FUN_149404df6 body=132 status=ok
// SIG undefined FUN_149404df6(void)

void FUN_149404df6(longlong param_1,int param_2)

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



// FUNCTION 149404e7c FUN_149404e7c body=324 status=ok
// SIG undefined FUN_149404e7c(void)

longlong * FUN_149404e7c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x8d0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bcc2110;
  plVar4 = plVar3 + 2;
  FUN_149404fc2(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_149413db6(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_149404f53;
    param_1[1] = 0;
LAB_149404f1d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149404f53;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_149404f53;
      goto LAB_149404f1d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149404f53;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_149404f53:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x8c0;
  FUN_140a52e78(*param_1,"SListView<TSharedPtr<FListItem>>",
                ".\\../Plugins/Interchange/Runtime/Source/Pipelines/Private/InterchangeGenericAssetsPipeline.cpp"
                ,0x6d8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149404fc2 FUN_149404fc2 body=698 status=ok
// SIG undefined FUN_149404fc2(void)

undefined8 * FUN_149404fc2(undefined8 *param_1)

{
  FUN_146af608e(param_1,0);
  *param_1 = &PTR_FUN_14bcc2130;
  param_1[0x4d] = &PTR_FUN_14bcc2410;
  param_1[0x9b] = &PTR_LAB_14bcc2430;
  param_1[0x9c] = param_1;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 2;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x109) = 0x101;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x867) = 0;
  *(undefined1 *)((longlong)param_1 + 0x869) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x88d) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 14940527c FUN_14940527c body=9 status=ok
// SIG undefined FUN_14940527c(void)

void FUN_14940527c(longlong param_1)

{
  FUN_14940934e(param_1 + 0x10);
  return;
}



// FUNCTION 149405286 FUN_149405286 body=29 status=ok
// SIG undefined FUN_149405286(void)

undefined8 FUN_149405286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494052a4 FUN_1494052a4 body=38 status=ok
// SIG undefined FUN_1494052a4(void)

undefined8 FUN_1494052a4(undefined8 param_1,int param_2)

{
  FUN_14940934e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494052ca FUN_1494052ca body=133 status=ok
// SIG undefined FUN_1494052ca(void)

char * FUN_1494052ca(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x840) != 0) && (*(longlong **)(param_1 + 0x838) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x840) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x838);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_149409b1e(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 149405350 FUN_149405350 body=348 status=ok
// SIG undefined FUN_149405350(void)

undefined1 * FUN_149405350(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x864) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4d8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1494054ac FUN_1494054ac body=298 status=ok
// SIG undefined FUN_1494054ac(void)

undefined8 FUN_1494054ac(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x864) != '\x01') goto LAB_14940559b;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_149405515:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_149405515;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
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
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4d8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_14940559b:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1494055d6 FUN_1494055d6 body=709 status=ok
// SIG undefined FUN_1494055d6(void)

undefined8 FUN_1494055d6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0x116];
  if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x866) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x865) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar4 + 8))(plVar4,&local_60);
    iVar6 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar5 = param_1[0xea];
    if (lVar5 == 0) {
      iVar11 = -1;
    }
    else {
      plVar4 = (longlong *)param_1[0xeb];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar11 = -1;
      if ((longlong)local_58 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        do {
          iVar11 = iVar8;
          if (*(longlong *)(local_60 + lVar7) == lVar5) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 0x10;
          iVar11 = -1;
        } while ((longlong)local_58 * 0x10 != lVar7);
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
    }
    cVar3 = *(char *)(param_4 + 0x20);
    iVar8 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar3 == '\x02' && iVar8 == 1) || (cVar3 == '\0' && iVar8 == 0)) {
      uVar10 = (ulonglong)(uint)(iVar11 - iVar6);
    }
    else {
      if ((cVar3 != '\x03' || iVar8 != 1) && (cVar3 != '\x01' || iVar8 != 0)) goto LAB_149405623;
      uVar9 = iVar11 + iVar6;
      uVar10 = (ulonglong)uVar9;
      if (0 < local_58 && (local_58 <= (int)uVar9 || (int)uVar9 < 0)) {
        fVar12 = (float)local_58 / (float)iVar6;
        fVar13 = (float)(iVar11 + 1) / (float)iVar6;
        if ((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1 < (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1) {
          uVar9 = local_58 - 1;
        }
        uVar10 = (ulonglong)uVar9;
      }
    }
    iVar6 = (int)uVar10;
    if (((-1 < iVar6) && (iVar6 < local_58)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_88 = iVar11 <= iVar6;
      FUN_14940a79e(param_1,&local_50,uVar10 * 0x10 + local_60);
      if (local_50 != -1) {
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_50,param_4);
        local_78 = 0;
        uStack_70 = 0;
        FUN_146a35cca(param_2);
        if ((local_50 != -1) && (local_48 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_48 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
        goto LAB_149405634;
      }
    }
  }
LAB_149405623:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_149405634:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940589c FUN_14940589c body=461 status=ok
// SIG undefined FUN_14940589c(void)

longlong * FUN_14940589c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_1494058da:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_1494058da;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_14940a952(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_149405a16;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_149405a16;
LAB_149405979:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_149405a16;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_149405979;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_149405a16:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149405a6c FUN_149405a6c body=83 status=ok
// SIG undefined FUN_149405a6c(void)

undefined1 FUN_149405a6c(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x858) != 0) && (*(longlong **)(param_1 + 0x850) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x858) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x850);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x848) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x848);
}



// FUNCTION 149405ac0 FUN_149405ac0 body=203 status=ok
// SIG undefined FUN_149405ac0(void)

undefined8 FUN_149405ac0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc15520) {
    FUN_144b3d300(&DAT_14cc15520);
    if (DAT_14cc15520 == -1) {
      FUN_140056680(&DAT_14cc15510,L"List");
      atexit((_func_5014 *)&LAB_14450fdc0);
      _Init_thread_footer(&DAT_14cc15520);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cc15510);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149405b8c FUN_149405b8c body=50 status=ok
// SIG undefined FUN_149405b8c(void)

void FUN_149405b8c(longlong *param_1)

{
  FUN_14940ae56(param_1 + 0x9c);
  FUN_14940ae56(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x000149405bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 149405bbe FUN_149405bbe body=1893 status=ok
// SIG undefined FUN_149405bbe(void)

void FUN_149405bbe(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_15c [4];
  float local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)param_1[0x66];
    }
    uVar7 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar5 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar5 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_149405f9b;
      }
    }
    if (cVar6 == '\0') {
      plVar3 = (longlong *)param_1[0x116];
      if (plVar3 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar7 < 0)) ||
               ((int)local_f8 <= (int)uVar7)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar7 * 0x10) == 0) {
              uVar7 = uVar7 + 1;
              iVar8 = 2;
            }
            else {
              puVar9 = (undefined8 *)(local_100 + (ulonglong)uVar7 * 0x10);
              FUN_14940a468(param_1 + 0x9c,&local_110,puVar9);
              if (local_110 == (longlong *)0x0) {
                local_130 = *puVar9;
                local_128 = puVar9[1];
                if (local_128 != 0) {
                  LOCK();
                  *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,&local_130);
                plVar3 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_1494062e3:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar3 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
joined_r0x0001494062cf:
                      if (iVar8 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar3 = local_118 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar8 = *piVar2;
                      UNLOCK();
                      plVar3 = plVar1;
                      goto joined_r0x0001494062cf;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_1494062e3;
                  }
                }
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                    }
                  }
                }
                plVar3 = local_110;
                (**(code **)(*local_110 + 0x10))(local_110,uVar7);
                local_140 = plVar3;
                local_138 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                }
                local_150 = *puVar9;
                local_148 = puVar9[1];
                if (local_148 != 0) {
                  LOCK();
                  *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                  UNLOCK();
                }
                FUN_14940bc7c(param_1 + 0x9c,&local_150,&local_140);
                (**(code **)(*local_110 + 0x58))(local_110,&local_120);
                FUN_1405d299c(local_120);
                plVar3 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
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
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              FUN_144b013c4(local_120,&local_170);
              local_168 = local_170;
              FUN_146af3580(local_15c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_168);
              plVar3 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              plVar3 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar4 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar4 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_158 + (float)(int)dVar4);
                    goto LAB_149405e9d;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar4;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar8 = 3;
                }
                else {
                  if (uVar7 == 0) {
                    iVar8 = 3;
                    dVar13 = 0.0;
                    uVar7 = 0;
                    goto LAB_149405ea3;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar4;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar7 = uVar7 - 1;
                  iVar8 = 0;
                }
                dVar13 = dVar4 - (dVar4 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_158));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar7 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar7 = uVar7 + 1;
                    iVar8 = 0;
                    goto LAB_149405ea3;
                  }
                  dVar13 = (double)(int)uVar7;
                }
LAB_149405e9d:
                iVar8 = 3;
              }
LAB_149405ea3:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
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
          } while (iVar8 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_149405f9b:
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149406324 FUN_149406324 body=747 status=ok
// SIG undefined FUN_149406324(void)

void FUN_149406324(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  ulonglong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar3 = *(longlong **)(param_1 + 0x8b0);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar3 + 8))(plVar3,&local_f8);
      if (0 < local_f0) {
        lVar7 = 8;
        lVar8 = 0;
        do {
          uVar4 = *(ulonglong *)(local_f8 + -8 + lVar7);
          plVar3 = *(longlong **)(local_f8 + lVar7);
          local_108 = uVar4;
          local_e8 = uVar4;
          local_e0 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            local_100 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_100 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
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
            }
          }
          uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          iVar6 = FUN_14940cc88((longlong *)(param_1 + 0x700),uVar5 >> 0x10 ^ uVar5,&local_108);
          plVar3 = local_100;
          if (iVar6 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)iVar6 * 0x18 + *(longlong *)(param_1 + 0x700);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (lVar9 != 0) {
            FUN_14940cd6c(&local_98,local_10c,&local_e8);
          }
          plVar3 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 < local_f0);
      }
      FUN_14940c994(param_1 + 0x700,&local_e8,&local_98);
      iVar6 = (int)local_e0;
      FUN_14940cc0e(param_1 + 0x700,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14940960c(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14940960c(&local_98);
      if (iVar6 <= local_b4) goto LAB_14940638b;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
  }
LAB_14940638b:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149406610 FUN_149406610 body=1026 status=ok
// SIG undefined FUN_149406610(void)

double * FUN_149406610(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4e0;
  FUN_14940d978(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x8b0);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_149406872;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 << 4;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_14940d5fc(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_1494068f7;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar12 = uVar15 << 4;
      fVar27 = local_e8;
      do {
        lVar12 = lVar12 + -0x10;
        if (*(longlong *)(local_e0 + lVar12) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_14940d5fc(param_1,local_e0 + lVar12,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_1494068f7:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_149406872:
  FUN_14940af58(lVar1);
  FUN_14450fdd2(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149406a14 FUN_149406a14 body=81 status=ok
// SIG undefined FUN_149406a14(void)

undefined4 FUN_149406a14(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149406a66 FUN_149406a66 body=2059 status=ok
// SIG undefined FUN_149406a66(void)

undefined1 FUN_149406a66(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  float local_f4;
  float local_f0;
  undefined1 local_ec [4];
  float local_e8;
  undefined1 local_e0 [4];
  float local_dc;
  undefined1 local_d4 [4];
  float local_d0;
  undefined1 local_c8 [4];
  float local_c4;
  undefined1 local_bc [4];
  float local_b8;
  float local_b0;
  float fStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = (longlong *)param_1[0x116];
  if ((plVar3 != (longlong *)0x0) && (param_1[0xf9] != 0)) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_90);
    lVar8 = param_1[0xf9];
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    iVar9 = -1;
    if ((longlong)local_88 != 0) {
      lVar10 = 0;
      iVar11 = 0;
      do {
        iVar9 = iVar11;
        if (*(longlong *)(local_90 + lVar10) == lVar8) break;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = -1;
      } while ((longlong)local_88 * 0x10 != lVar10);
    }
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
    if (iVar9 != -1) {
      fVar13 = (float)(**(code **)(*param_1 + 0x260))(param_1);
      dVar5 = (double)fVar13;
      if (((fVar13 == 0.0) && (!NAN(fVar13))) && (cVar6 = FUN_146af5c6c(param_1), cVar6 != '\0')) {
        dVar5 = (double)param_1[100];
        if ((dVar5 == 0.0) && (!NAN(dVar5))) {
          uVar12 = 1;
          goto LAB_149406dd2;
        }
      }
      FUN_146af65f2(param_1);
      dVar19 = (double)param_1[0x5d];
      auVar15._0_8_ = dVar5 + dVar19;
      auVar15._8_8_ = 0;
      auVar20 = roundpd(in_XMM2,auVar15,1);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_1[0x5d];
      auVar16 = roundpd(auVar15,auVar16,2);
      dVar14 = auVar16._0_8_;
      dVar18 = (double)(int)(auVar20._0_8_ - dVar14);
      if (*(char *)((longlong)param_1 + 0x869) == '\x01') {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[0x5d];
        auVar16 = roundpd(auVar16,auVar4,1);
        dVar14 = auVar16._0_8_;
        auVar17._0_8_ = dVar19 + dVar18;
        auVar17._8_8_ = 0;
        auVar16 = roundpd(auVar17,auVar17,2);
        dVar19 = auVar16._0_8_;
      }
      else {
        auVar20._0_8_ = dVar19 + dVar18;
        auVar20._8_8_ = 0;
        auVar16 = roundpd(auVar20,auVar20,1);
        dVar19 = auVar16._0_8_;
      }
      dVar18 = (double)iVar9;
      cVar6 = (char)param_1[0xfe];
      if ((dVar18 < dVar14) || (dVar19 < dVar18)) {
        if (cVar6 == '\0') {
          if (dVar19 < dVar18) goto LAB_149406c33;
        }
        else if (cVar6 == '\x03') {
LAB_149406c33:
          dVar18 = dVar18 - (dVar5 + -1.0);
        }
        else if (cVar6 == '\x02') {
          dVar18 = dVar18 + dVar5 * -0.5;
        }
LAB_149406c43:
        dVar19 = 0.0;
        if (0.0 <= (double)local_88 - dVar5) {
          dVar19 = (double)local_88 - dVar5;
        }
        if (dVar19 <= dVar18) {
          dVar18 = dVar19;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        FUN_146af48d8(param_1,(float)dVar18);
      }
      else {
        if (cVar6 == '\x01') goto LAB_149406c43;
        if (cVar6 == '\x03') goto LAB_149406c33;
        if (*(char *)((longlong)param_1 + 0x869) != '\0') {
          (**(code **)(param_1[0x9b] + 0xd8))
                    (param_1 + 0x9b,&local_a0,(longlong)iVar9 * 0x10 + local_90);
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 0x58))(local_a0,&local_b0);
            pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
            plVar3 = local_a8;
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fStack_ac = pfVar7[8] * (float)DAT_14c8463f0 * *pfVar7 +
                        pfVar7[10] * (float)DAT_14c8463f8 * pfVar7[1] + pfVar7[0xc];
            local_b0 = (float)DAT_14c8463f0 * *pfVar7 * pfVar7[7] +
                       (float)DAT_14c8463f8 * pfVar7[1] * pfVar7[9] + pfVar7[0xb];
            FUN_146af3580(local_bc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            fStack_ac = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_b0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_c8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            if (local_c4 <= local_b8) {
              dVar18 = (double)param_1[0x5e];
              fStack_ac = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1] + pfVar7[0xc];
              local_b0 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9] + pfVar7[0xb];
              FUN_146af3580(local_d4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              fStack_ac = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
              local_b0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
              FUN_146af3580(local_e0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              if (local_dc < local_d0) {
                if ((longlong)(int)param_1[0xb2] == 0) {
                  fVar13 = 0.0;
                }
                else {
                  lVar8 = param_1[0xb1];
                  fVar21 = local_d0 - local_dc;
                  lVar10 = (longlong)(int)param_1[0xb2] * 0x10;
                  fVar13 = 0.0;
                  do {
                    lVar10 = lVar10 + -0x10;
                    FUN_14940a468(param_1 + 0x9c,&local_108,lVar8);
                    (**(code **)(*local_108 + 0x58))(local_108,&local_b0);
                    pfVar7 = (float *)FUN_144b013e4(CONCAT44(fStack_ac,local_b0));
                    local_f0 = pfVar7[8] * *pfVar7 + pfVar7[10] * pfVar7[1];
                    local_f4 = *pfVar7 * pfVar7[7] + pfVar7[1] * pfVar7[9];
                    FUN_146af3580(local_ec,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_f4);
                    plVar3 = local_a8;
                    if (local_a8 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_a8 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_a8)(local_a8);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    plVar3 = local_100;
                    if (local_100 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_100 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_100)(local_100);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    fVar13 = fVar13 + (float)(~-(uint)(fVar21 <= local_e8) & 0x3f800000 |
                                             (uint)(fVar21 / local_e8) & -(uint)(fVar21 <= local_e8)
                                             );
                    if (fVar21 <= local_e8) break;
                    lVar8 = lVar8 + 0x10;
                    fVar21 = fVar21 - local_e8;
                  } while (lVar10 != 0);
                }
                dVar18 = 0.0;
                if ((char)param_1[0x5a] == '\0') {
                  dVar18 = (double)*(float *)(param_1 + 0x10c);
                }
                dVar18 = (double)fVar13 + (double)param_1[0x5e] + dVar18;
              }
            }
            else {
              dVar18 = dVar18 - (double)*(float *)(param_1 + 0x10c);
            }
            FUN_146af48d8(param_1,(float)dVar18);
          }
          plVar3 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_98)(local_98);
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
      }
      FUN_146af42a2(param_1);
      lVar8 = param_1[0xf9];
      lVar10 = param_1[0xfa];
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_1[0xfd];
      param_1[0xfc] = lVar8;
      param_1[0xfd] = lVar10;
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
    }
    param_1[0xf9] = 0;
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
  }
  plVar3 = (longlong *)param_1[0xfc];
  if (plVar3 == (longlong *)0x0) {
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_98 = (longlong *)param_1[0xfd];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar3;
      (**(code **)(param_1[0x9b] + 0xd8))(param_1 + 0x9b,&local_90,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_84,local_88);
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
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar12 = local_90 == 0;
    }
  }
LAB_149406dd2:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 149407272 FUN_149407272 body=581 status=ok
// SIG undefined FUN_149407272(void)

void FUN_149407272(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x7e0);
  if (lVar3 != 0) {
    local_20 = *(longlong **)(param_1 + 0x7e8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_14940a468(param_1 + 0x4e0,&local_38,&local_28);
    if (local_38 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x869) == '\x01') {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x758);
        *(longlong *)(param_1 + 0x750) = local_28;
        *(longlong **)(param_1 + 0x758) = local_20;
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
        (**(code **)(*local_38 + 0x58))(local_38,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 0x7d8),&local_48,0);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      }
      local_68 = local_28;
      local_60 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_14940d9d4(param_1 + 0x6e0,&local_68,&local_38);
    }
    *(undefined1 *)(param_1 + 0x869) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x7e8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494074d6 FUN_1494074d6 body=1264 status=ok
// SIG undefined FUN_1494074d6(void)

undefined8 * FUN_1494074d6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_14940da5c(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_798 = 0x25;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_1494077e7:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_1494077e7;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_7c8 = &local_7d8;
    FUN_14940dce2(local_7c0,0x663);
    FUN_14940dbc4(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_14940dc42(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_14940762e;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_14940762e;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14940762e;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14940762e;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14940758c:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14940758c;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_14940762e;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14940762e;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14940762e;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_14940762e:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494079c8 FUN_1494079c8 body=1264 status=ok
// SIG undefined FUN_1494079c8(void)

undefined8 * FUN_1494079c8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined1 *local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar5 == '\0')) {
    FUN_14940da5c(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGenerateWidgetNotAssignedMessage";
    local_798 = 0x22;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = &local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_149407cd9:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_149407cd9;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    local_7c8 = &local_7d8;
    FUN_14940dce2(local_7c0,0x67f);
    FUN_14940dbc4(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_14940dc42(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_149407b20;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_149407b20;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_149407b20;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_149407b20;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_149407a7e:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_149407a7e;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_149407b20;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_149407b20;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_149407b20;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_149407b20:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149407ebc FUN_149407ebc body=32 status=ok
// SIG undefined FUN_149407ebc(void)

undefined8 FUN_149407ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 149407edc FUN_149407edc body=563 status=ok
// SIG undefined FUN_149407edc(void)

void FUN_149407edc(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1494133d0(param_1,&local_40,param_2);
  lVar5 = local_40;
  if (local_40 == -1) goto LAB_149407f90;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_149407f57:
    iVar7 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar6 == '\0') goto LAB_149407f57;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x398);
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar7;
  }
  if (iVar7 != 0) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)(param_1 + 0x758);
    *(longlong *)(param_1 + 0x750) = lVar5;
    *(longlong **)(param_1 + 0x758) = local_38;
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
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    local_50 = local_40;
    local_48 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14941371c(param_1,&local_50,uVar4);
    if ((iVar7 == 3) && (uVar3 = *(ushort *)(param_3 + 8), (uVar3 & 0xf) != 0)) {
      if ((uVar3 & 3) == 0) {
        local_70 = local_40;
        local_68 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))
                  ((longlong *)(param_1 + 0x4d8),&local_70,1,1);
      }
      else {
        if ((uVar3 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
        }
        local_60 = local_40;
        local_58 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x38))
                  ((longlong *)(param_1 + 0x4d8),&local_60);
      }
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,1);
    }
    else {
      local_80 = local_40;
      local_78 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_1494137ba(param_1,&local_80);
    }
  }
  if ((local_40 != -1) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_149407f90:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408122 FUN_149408122 body=339 status=ok
// SIG undefined FUN_149408122(void)

ulonglong FUN_149408122(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x228);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_14940cc88(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408276 FUN_149408276 body=150 status=ok
// SIG undefined FUN_149408276(void)

ulonglong FUN_149408276(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x30))();
    if (cVar1 != '\0') {
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x338) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x330);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      uVar4 = (ulonglong)uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940830e FUN_14940830e body=339 status=ok
// SIG undefined FUN_14940830e(void)

ulonglong FUN_14940830e(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x298);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_14940cc88(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408462 FUN_149408462 body=945 status=ok
// SIG undefined FUN_149408462(void)

void FUN_149408462(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [80];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
    iVar7 = (int)param_1[-0x29];
  }
  else {
    if ((int)param_1[-0x27] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)param_1[-0x28];
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + -0x29) = iVar7;
  }
  if (iVar7 == 0) goto LAB_1494084d4;
  if (param_3 == '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_149413a66(param_1 + 0x45,&local_40);
  }
  else {
    FUN_14940cd6c(param_1 + 0x45,local_b0,param_2);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
      iVar7 = (int)param_1[-0x29];
    }
    else {
      if ((int)param_1[-0x27] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[-0x28];
      }
      iVar7 = (**(code **)(*plVar8 + 0x58))();
      *(int *)(param_1 + -0x29) = iVar7;
    }
    if (iVar7 == 1) goto LAB_149408576;
    if (((int)param_1[-0x27] != 0) && ((longlong *)param_1[-0x28] != (longlong *)0x0)) {
      cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))();
      if (cVar6 == '\0') {
        iVar7 = (int)param_1[-0x29];
      }
      else {
        if ((int)param_1[-0x27] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[-0x28];
        }
        iVar7 = (**(code **)(*plVar8 + 0x58))();
        *(int *)(param_1 + -0x29) = iVar7;
      }
    }
    if (iVar7 == 2) goto LAB_149408576;
  }
  else {
LAB_149408576:
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x50];
    param_1[0x4f] = lVar3;
    param_1[0x50] = lVar4;
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
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x52];
    param_1[0x51] = lVar3;
    param_1[0x52] = lVar4;
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
  }
  FUN_1469ffd58(param_1 + -0x24,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,param_2);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,&local_60);
      uVar5 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar8 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_c8,1);
      FUN_14171d2aa(local_e0,0);
      local_f0 = local_60;
      local_e8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_100 = 0;
      local_108 = local_c8;
      FUN_14171f2ba(local_b0,&local_f0,0,local_e0);
      FUN_1428785ec(uVar5,local_b0);
      FUN_1417211dc(local_b0);
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
LAB_1494084d4:
  plVar8 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149408814 FUN_149408814 body=42 status=ok
// SIG undefined FUN_149408814(void)

void FUN_149408814(longlong param_1)

{
  FUN_149413812(param_1 + 0x228);
  FUN_1469ffd58(param_1 + -0x120,0);
  return;
}



// FUNCTION 14940883e FUN_14940883e body=621 status=ok
// SIG undefined FUN_14940883e(void)

void FUN_14940883e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined1 local_5c [4];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + -0x148);
  }
  else {
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + -0x140);
    }
    iVar3 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar3;
  }
  if (iVar3 == 0) goto LAB_1494088e2;
  plVar5 = *(longlong **)(param_1 + 0x3d8);
  if (plVar5 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_58);
    if (local_50 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x288);
      uVar8 = 0;
      if (lVar11 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x290);
        if (plVar5 == (longlong *)0x0) {
LAB_149408a27:
          uVar8 = 0;
          plVar7 = local_58;
          do {
            if (*plVar7 == lVar11) goto LAB_149408a4a;
            plVar7 = plVar7 + 2;
            uVar8 = uVar8 + 1;
          } while (plVar7 != local_58 + (longlong)local_50 * 2);
          uVar8 = 0xffffffff;
LAB_149408a4a:
          if (plVar5 == (longlong *)0x0) goto LAB_14940895c;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uVar8 = 0xffffffff;
          if (local_50 != 0) goto LAB_149408a27;
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
LAB_14940895c:
      uVar6 = 0xffffffff;
      if ((longlong)local_50 != 0) {
        lVar11 = 0;
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          if (*(longlong *)((longlong)local_58 + lVar11) == *param_2) break;
          uVar4 = uVar4 + 1;
          lVar11 = lVar11 + 0x10;
          uVar6 = 0xffffffff;
        } while ((longlong)local_50 << 4 != lVar11);
      }
      uVar4 = local_50 - 1;
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      uVar8 = (uint)uVar9;
      if ((int)uVar6 < (int)uVar4) {
        uVar4 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar4) {
        uVar6 = uVar4;
      }
      iVar3 = uVar8 - uVar6;
      if (iVar3 != 0) {
        lVar11 = (ulonglong)((int)uVar8 < (int)uVar4) * 2 + -1;
        lVar10 = uVar9 << 4;
        local_60 = uVar6;
        do {
          FUN_14940cd6c(param_1 + 0x228,local_5c,(longlong)local_58 + lVar10);
          lVar10 = lVar10 + lVar11 * 0x10;
          iVar3 = iVar3 + (int)lVar11;
          uVar8 = local_60;
        } while (iVar3 != 0);
      }
      FUN_14940cd6c(param_1 + 0x228,local_5c,local_58 + (ulonglong)uVar8 * 2);
    }
  }
  FUN_1469ffd58(param_1 + -0x120,0);
LAB_1494088e2:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149408aac FUN_149408aac body=391 status=ok
// SIG undefined FUN_149408aac(void)

void FUN_149408aac(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0)) {
LAB_149408b06:
    iVar4 = *(int *)(param_1 + -0x148);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar3 == '\0') goto LAB_149408b06;
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + -0x140);
    }
    iVar4 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar4;
  }
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x328) != 0)) {
    plVar6 = (longlong *)(param_1 + 800);
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))();
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
          local_40 = param_1 + 0x238;
          local_48 = 0x100000000;
          local_38 = 0xffffffff;
          local_30 = 0;
          if (*(int *)(param_1 + 0x250) == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1449c0562(&local_48);
            lVar5 = (longlong)local_38._4_4_;
          }
          local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + lVar5 * 0x18);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 8 + lVar5 * 0x18);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            local_50 = plVar2;
            FUN_149413c94(plVar6,&local_58,param_2);
            LOCK();
            plVar6 = plVar2 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_149408b32;
          }
        }
        else {
          local_58 = 0;
        }
        local_50 = (longlong *)0x0;
        FUN_149413c94(plVar6,&local_58,param_2);
      }
    }
  }
LAB_149408b32:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408d80 FUN_149408d80 body=56 status=ok
// SIG undefined FUN_149408d80(void)

void FUN_149408d80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000149408dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149408db8 FUN_149408db8 body=56 status=ok
// SIG undefined FUN_149408db8(void)

void FUN_149408db8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000149408de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149408e06 FUN_149408e06 body=161 status=ok
// SIG undefined FUN_149408e06(void)

void FUN_149408e06(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_149413a66(param_1 + 0x298,&local_30);
  }
  else {
    FUN_14940cd6c(param_1 + 0x298,local_1c,param_2);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408ed2 FUN_149408ed2 body=82 status=ok
// SIG undefined FUN_149408ed2(void)

void FUN_149408ed2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x280))(param_1 + -0x4d8,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000149408f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149408f24 FUN_149408f24 body=138 status=ok
// SIG undefined FUN_149408f24(void)

undefined4 FUN_149408f24(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_149413d1c(param_1 + 0x340,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149408fb0 FUN_149408fb0 body=138 status=ok
// SIG undefined FUN_149408fb0(void)

undefined4 FUN_149408fb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_149413d1c(param_1 + 0x350,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940903c FUN_14940903c body=83 status=ok
// SIG undefined FUN_14940903c(void)

undefined4 FUN_14940903c(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x140);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x148) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x148);
}



// FUNCTION 1494090a4 FUN_1494090a4 body=343 status=ok
// SIG undefined FUN_1494090a4(void)

longlong * FUN_1494090a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14940af12(param_2,*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c));
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149404df6(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
      lVar3 = puVar4[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494091fc FUN_1494091fc body=189 status=ok
// SIG undefined FUN_1494091fc(void)

longlong * FUN_1494091fc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14940a468(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_14940a468(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494092c4 FUN_1494092c4 body=138 status=ok
// SIG undefined FUN_1494092c4(void)

undefined8 * FUN_1494092c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4c8);
  if (plVar3 == (longlong *)0x0) {
LAB_14940933d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14940933d;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x4d0);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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



// FUNCTION 14940934e FUN_14940934e body=544 status=ok
// SIG undefined FUN_14940934e(void)

void FUN_14940934e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bcc2130;
  param_1[0x4d] = &PTR_FUN_14bcc2410;
  param_1[0x9b] = &PTR_LAB_14bcc2430;
  puVar3 = (undefined8 *)param_1[0x116];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1449db362(param_1 + 0x113);
  FUN_1449db362(param_1 + 0x110);
  FUN_1449db362(param_1 + 0x10a);
  FUN_1449db362(param_1 + 0x107);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x103);
  FUN_1449db362(param_1 + 0x101);
  FUN_1449db362(param_1 + 0xff);
  plVar4 = (longlong *)param_1[0xfd];
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
  plVar4 = (longlong *)param_1[0xfa];
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
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_14940960c(param_1 + 0xee);
  plVar4 = (longlong *)param_1[0xed];
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
  plVar4 = (longlong *)param_1[0xeb];
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
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_14940960c(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1449db362(param_1 + 0xd0);
  FUN_14940956e(param_1 + 0xb6);
  FUN_14940956e(param_1 + 0x9c);
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 14940956e FUN_14940956e body=157 status=ok
// SIG undefined FUN_14940956e(void)

void FUN_14940956e(longlong param_1)

{
  FUN_14940386c(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14940386c(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1494097c6(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_149409952(param_1 + 8);
  return;
}



// FUNCTION 14940960c FUN_14940960c body=54 status=ok
// SIG undefined FUN_14940960c(void)

void FUN_14940960c(longlong *param_1)

{
  FUN_149409642(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149409642 FUN_149409642 body=386 status=ok
// SIG undefined FUN_149409642(void)

void FUN_149409642(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494097c6 FUN_1494097c6 body=52 status=ok
// SIG undefined FUN_1494097c6(void)

void FUN_1494097c6(longlong *param_1)

{
  FUN_1494097fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494097fa FUN_1494097fa body=343 status=ok
// SIG undefined FUN_1494097fa(void)

void FUN_1494097fa(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 149409952 FUN_149409952 body=52 status=ok
// SIG undefined FUN_149409952(void)

void FUN_149409952(longlong *param_1)

{
  FUN_149409986();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149409986 FUN_149409986 body=307 status=ok
// SIG undefined FUN_149409986(void)

void FUN_149409986(longlong *param_1)

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
      FUN_149409aba((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149409aba FUN_149409aba body=100 status=ok
// SIG undefined FUN_149409aba(void)

void FUN_149409aba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000149409b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149409b1e FUN_149409b1e body=2377 status=ok
// SIG undefined FUN_149409b1e(void)

undefined1 *
FUN_149409b1e(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_R13;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)param_1[0x116] == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x116] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 == unaff_R13) goto LAB_149409bca;
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar12 = *(longlong **)(param_4 + 0x30);
        if (plVar12 == (longlong *)0x0) goto LAB_149409cc1;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e30;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 != unaff_R13) goto LAB_149409e31;
LAB_149409cd5:
        lVar9 = (longlong)(local_50 + -1);
LAB_149409ce2:
        lVar11 = local_58[lVar9 * 2];
        plVar12 = (longlong *)local_58[lVar9 * 2 + 1];
LAB_149409bd9:
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (lVar11 == 0) {
          uVar10 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          goto LAB_149409cff;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_68 = lVar11;
        local_60 = plVar12;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_4);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
LAB_149409d85:
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar12 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        goto LAB_149409c83;
      }
      if (lVar9 == DAT_14c964e48) {
LAB_149409bca:
        lVar11 = *local_58;
        plVar12 = (longlong *)local_58[1];
        goto LAB_149409bd9;
      }
LAB_149409cc1:
      if (lVar9 == DAT_14c964e30) goto LAB_149409cd5;
LAB_149409e31:
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) {
        if (lVar9 != DAT_14c964e00) {
LAB_14940a009:
          if (lVar9 != DAT_14c964e18) goto LAB_14940a0bc;
LAB_14940a016:
          lVar9 = param_1[0xea];
          if (lVar9 == 0) {
            iVar5 = 0;
          }
          else {
            plVar12 = (longlong *)param_1[0xeb];
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            iVar5 = -1;
            if ((longlong)local_50 != 0) {
              lVar11 = 0;
              iVar8 = 0;
              do {
                iVar5 = iVar8;
                if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
                iVar8 = iVar8 + 1;
                lVar11 = lVar11 + 0x10;
                iVar5 = -1;
              } while ((longlong)local_50 * 0x10 != lVar11);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
          iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
          if (local_50 - iVar8 <= iVar5) goto LAB_149409cd5;
          lVar9 = (longlong)(iVar8 + iVar5);
          goto LAB_149409ce2;
        }
LAB_149409e76:
        lVar9 = param_1[0xea];
        if (lVar9 == 0) {
          iVar5 = 0;
        }
        else {
          plVar12 = (longlong *)param_1[0xeb];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          iVar5 = -1;
          if ((longlong)local_50 != 0) {
            lVar11 = 0;
            iVar8 = 0;
            do {
              iVar5 = iVar8;
              if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
              iVar8 = iVar8 + 1;
              lVar11 = lVar11 + 0x10;
              iVar5 = -1;
            } while ((longlong)local_50 * 0x10 != lVar11);
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar12 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
        iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
        if (iVar8 <= iVar5) {
          lVar9 = (longlong)(iVar5 - iVar8);
          goto LAB_149409ce2;
        }
        goto LAB_149409bca;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e00;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_149409e76;
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) goto LAB_14940a009;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e18;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_14940a016;
LAB_14940a0bc:
      uVar10 = 0;
      plVar12 = (longlong *)0x0;
LAB_149409cff:
      if ((*(char *)((longlong)param_1 + 0x867) == '\x01') && (param_1[0xea] != 0)) {
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar6 = *(longlong **)(param_4 + 0x30);
        lVar11 = DAT_14c964de8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          lVar11 = DAT_14c964de8;
          UNLOCK();
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          local_c0 = uVar10;
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar10 = local_c0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              uVar10 = local_c0;
            }
          }
        }
        if (lVar9 != lVar11) goto LAB_149409d66;
        local_68 = param_1[0xea];
        local_60 = (longlong *)param_1[0xeb];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
          if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 == '\0')) {
            iVar5 = (int)param_1[0x72];
          }
          else {
            if ((int)param_1[0x74] == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)param_1[0x73];
            }
            iVar5 = (**(code **)(*plVar6 + 0x58))();
            *(int *)(param_1 + 0x72) = iVar5;
          }
          if (iVar5 == 2) goto LAB_14940a23c;
          plVar6 = param_1 + 0x9b;
          cVar2 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          if (cVar2 == '\0') {
            local_88 = local_68;
            local_80 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_88,1,1);
            goto LAB_14940a28e;
          }
          bVar13 = false;
        }
        else {
LAB_14940a23c:
          plVar6 = param_1 + 0x9b;
          uVar4 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          local_78 = local_68;
          local_70 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_78,uVar4 ^ 1,1);
LAB_14940a28e:
          (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,0);
          bVar13 = true;
        }
        lVar9 = param_1[0xea];
        lVar11 = param_1[0xeb];
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)param_1[0xed];
        param_1[0xec] = lVar9;
        param_1[0xed] = lVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        FUN_14940a468(param_1 + 0x9c,&local_98,&local_68);
        if (local_98 == 0) {
          uVar3 = *(undefined4 *)(param_4 + 0xc);
          local_a8 = local_68;
          local_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          FUN_14940a616(param_1,&local_a8,uVar3);
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (bVar13) goto LAB_149409d85;
      }
      else {
LAB_149409d66:
        if ((*(ushort *)(param_4 + 8) & 0xc) != 0 && (*(ushort *)(param_4 + 8) & 0x33) == 0) {
          lVar9 = *(longlong *)(param_4 + 0x20);
          plVar6 = *(longlong **)(param_4 + 0x30);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (lVar9 == DAT_14c966f88) {
            if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 != '\0')) {
              if ((int)param_1[0x74] == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = (longlong *)param_1[0x73];
              }
              uVar3 = (**(code **)(*plVar7 + 0x58))();
              *(undefined4 *)(param_1 + 0x72) = uVar3;
            }
            bVar13 = (int)param_1[0x72] == 3;
          }
          else {
            bVar13 = false;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          if (bVar13) {
            plVar6 = param_1 + 0x9b;
            (**(code **)(param_1[0x9b] + 0x30))(plVar6);
            if (0 < local_50) {
              lVar11 = 8;
              lVar9 = 0;
              do {
                local_b8 = *(undefined8 *)((longlong)local_58 + lVar11 + -8);
                local_b0 = *(longlong *)((longlong)local_58 + lVar11);
                if (local_b0 != 0) {
                  LOCK();
                  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8,1,0);
                lVar9 = lVar9 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar9 < local_50);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6);
            goto LAB_149409d85;
          }
        }
        if ((char)uVar10 != '\0') goto LAB_149409d85;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_149409c83:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940a468 FUN_14940a468 body=429 status=ok
// SIG undefined FUN_14940a468(void)

undefined8 * FUN_14940a468(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_14940a6ba((longlong *)(param_1 + 8),uVar6 >> 0x10 ^ uVar6,&local_40);
  plVar3 = local_38;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar8 != 0) {
    *param_2 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14940a616 FUN_14940a616 body=164 status=ok
// SIG undefined FUN_14940a616(void)

void FUN_14940a616(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 2000);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  *(longlong *)(param_1 + 2000) = lVar4;
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
  *(undefined4 *)(param_1 + 0x7d8) = param_3;
  FUN_146af42a2(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00014940a6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14940a6ba FUN_14940a6ba body=228 status=ok
// SIG undefined FUN_14940a6ba(void)

int FUN_14940a6ba(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 14940a79e FUN_14940a79e body=435 status=ok
// SIG undefined FUN_14940a79e(void)

undefined8 *
FUN_14940a79e(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x810) == 0) || (*(longlong **)(param_1 + 0x808) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x30))(), cVar3 == '\0')) {
LAB_14940a8cb:
    *param_2 = uVar5;
    param_2[1] = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14940a8fb;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x8b0);
    if (plVar4 == (longlong *)0x0) {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      (**(code **)(*plVar4 + 8))(plVar4,&local_68);
    }
    plVar4 = plVar6;
    while( true ) {
      plVar6 = plVar4;
      param_4 = param_4 + (param_5 - 1 | 1);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x810) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x808);
      }
      local_58 = uVar5;
      local_50 = plVar6;
      cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_58);
      if (cVar3 != '\0') goto LAB_14940a8cb;
      if (((int)param_4 < 0) || (local_60 <= (int)param_4)) break;
      uVar5 = *(undefined8 *)(local_68 + (ulonglong)param_4 * 0x10);
      plVar4 = *(longlong **)(local_68 + 8 + (ulonglong)param_4 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
    }
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    if (plVar6 == (longlong *)0x0) goto LAB_14940a8fb;
  }
  LOCK();
  plVar4 = plVar6 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14940a8fb:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940a952 FUN_14940a952 body=143 status=ok
// SIG undefined FUN_14940a952(void)

undefined8 * FUN_14940a952(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xc);
  *param_1 = &PTR_FUN_14bcc2520;
  param_1[0xd] = &PTR_FUN_14bcc2610;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940a9e2 FUN_14940a9e2 body=38 status=ok
// SIG undefined FUN_14940a9e2(void)

undefined8 FUN_14940a9e2(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14940aa0e FUN_14940aa0e body=877 status=ok
// SIG undefined FUN_14940aa0e(void)

longlong * FUN_14940aa0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar9 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14940aac6;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar11 = iVar7 == iVar8;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
LAB_14940aac6:
    FUN_146a38fda(param_2,*(int *)(lVar9 + 0x708) - *(int *)(lVar9 + 0x734));
    local_60 = (longlong *)(lVar9 + 0x710);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar9 + 0x728) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = (longlong *)(lVar9 + 0x700);
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        FUN_14940a468(lVar9 + 0x4e0,&local_68,(longlong)iVar8 * 0x18 + *local_90);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x58))(local_68,&local_b0);
          plVar1 = local_a8;
          local_a0 = local_b0;
          local_98 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
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
          FUN_146974758(&local_b0,&local_a0);
          plVar1 = local_a8;
          lVar5 = local_b0;
          if (local_a8 == (longlong *)0x0) {
            if (local_b0 != 0) goto LAB_14940ac5a;
          }
          else {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (lVar5 != 0) {
LAB_14940ac5a:
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14697b806(param_2,iVar8);
              }
              lVar4 = *param_2;
              *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar5;
              *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar1;
              if (plVar1 == (longlong *)0x0) goto LAB_14940aca6;
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
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
LAB_14940aca6:
          plVar1 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_98 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_98)(local_98);
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
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
    local_78 = uVar6;
    if (iVar7 != 0) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940ad7c FUN_14940ad7c body=213 status=ok
// SIG undefined FUN_14940ad7c(void)

ulonglong FUN_14940ad7c(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar9 = *(longlong **)(param_1 + -0x48), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar9[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_14940ade5;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
LAB_14940ade5:
    if (((*(int *)(lVar7 + 0x3a0) != 0) && (*(longlong **)(lVar7 + 0x398) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x398) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar7 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar7 + 0x398);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar7 + 0x390) = uVar5;
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x390) == 3);
    if (iVar3 != 0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14940ae56 FUN_14940ae56 body=92 status=ok
// SIG undefined FUN_14940ae56(void)

void FUN_14940ae56(longlong param_1)

{
  FUN_14940aeb2(param_1 + 0xc0,param_1 + 0xa8);
  FUN_14940386c(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14940b4c0(param_1 + 0xa8,0);
  }
  FUN_14940af58(param_1);
  return;
}



// FUNCTION 14940aeb2 FUN_14940aeb2 body=95 status=ok
// SIG undefined FUN_14940aeb2(void)

undefined8 * FUN_14940aeb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14940386c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14940b430(param_1,iVar1);
      FUN_14940b492(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14940af12 FUN_14940af12 body=68 status=ok
// SIG undefined FUN_14940af12(void)

void FUN_14940af12(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14940386c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14940b4c0(param_1,param_2);
  return;
}



// FUNCTION 14940af58 FUN_14940af58 body=1238 status=ok
// SIG undefined FUN_14940af58(void)

void FUN_14940af58(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_1 + 0x18;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    local_d0 = param_1 + 0xb;
    local_c0 = param_1 + 3;
    lVar11 = 0;
    do {
      plVar8 = *(longlong **)(*local_c8 + lVar11 * 0x10);
      plVar9 = *(longlong **)(*local_c8 + 8 + lVar11 * 0x10);
      local_b8 = plVar8;
      local_78 = plVar8;
      local_70 = plVar9;
      if (plVar9 == (longlong *)0x0) {
LAB_14940b002:
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 == (longlong *)0x0) goto LAB_14940b002;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_b0 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        bVar4 = false;
      }
      uVar6 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = FUN_14940a6ba(plVar1,uVar6 >> 0x10 ^ uVar6,&local_b8);
      plVar8 = local_b0;
      if (iVar7 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (!bVar4) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar8 = local_70;
      if (lVar10 == 0) {
        if ((local_78 == (longlong *)0x0) &&
           (plVar8 = (longlong *)FUN_14940b520(local_d0,&local_78), plVar8 != (longlong *)0x0)) {
          local_68 = (longlong *)&DAT_100000000;
          local_60 = local_c0;
          local_58 = 0xffffffff;
          local_50 = 0;
          if ((int)param_1[6] != 0) {
            FUN_1449c0562(&local_68);
          }
          local_a0 = local_58;
          uVar5 = local_a0;
          local_98 = local_50;
          local_94 = local_4c;
          local_b0 = local_68;
          local_a8 = local_60;
          local_80 = 0;
          local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          bVar4 = local_a0._4_4_ < (int)local_60[3];
          iVar7 = local_a0._4_4_;
          local_b8 = plVar1;
          local_a0 = uVar5;
          local_90 = plVar1;
          local_88 = plVar1;
          if (bVar4) {
            do {
              if (*(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x28) == *plVar8) {
                FUN_14940b7a2(local_90);
                local_80 = CONCAT11(local_80._1_1_,1);
                goto LAB_14940b364;
              }
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
              iVar7 = local_a0._4_4_;
            } while (local_a0._4_4_ < (int)local_a8[3]);
            if ((local_80 & 1) != 0) {
LAB_14940b364:
              if (local_80._1_1_ == '\x01') {
                FUN_14940ba28(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34));
              }
            }
          }
          FUN_14940b88a(local_d0,*plVar8);
        }
      }
      else {
        local_68 = *(longlong **)(lVar10 + 0x10);
        local_60 = *(longlong **)(lVar10 + 0x18);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (local_70 == (longlong *)0x0) {
          local_b8 = local_78;
          local_b0 = (longlong *)0x0;
          FUN_14940b61a(plVar1,&local_b8);
        }
        else {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          local_b8 = local_78;
          local_b0 = local_70;
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          FUN_14940b61a(plVar1,&local_b8);
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        FUN_14940b88a(local_d0,local_68);
        if (*param_1 != 0) {
          (**(code **)(*local_68 + 8))();
          if ((*(int *)(*param_1 + 0x6d8) != 0) &&
             (plVar8 = *(longlong **)(*param_1 + 0x6d0), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x60))(plVar8,&local_68);
          }
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_60 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x19]);
  }
  iVar7 = *(int *)((longlong)param_1 + 0xcc);
  FUN_14940386c(param_1[0x18]);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
    FUN_14940b4c0(local_c8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940b430 FUN_14940b430 body=98 status=ok
// SIG undefined FUN_14940b430(void)

void FUN_14940b430(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14940b492 FUN_14940b492 body=45 status=ok
// SIG undefined FUN_14940b492(void)

void FUN_14940b492(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14940b4c0 FUN_14940b4c0 body=95 status=ok
// SIG undefined FUN_14940b4c0(void)

void FUN_14940b4c0(longlong param_1,uint param_2)

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



// FUNCTION 14940b520 FUN_14940b520 body=248 status=ok
// SIG undefined FUN_14940b520(void)

longlong FUN_14940b520(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) == *param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x20;
        goto LAB_14940b5f6;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_14940b5f6:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940b61a FUN_14940b61a body=391 status=ok
// SIG undefined FUN_14940b61a(void)

void FUN_14940b61a(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (uVar3 == uVar8) {
          FUN_14940b7a2(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014940b668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14940b7a2 FUN_14940b7a2 body=117 status=ok
// SIG undefined FUN_14940b7a2(void)

void FUN_14940b7a2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_149409aba((longlong)param_2 * 0x28 + *param_1);
  FUN_14940b818(param_1,param_2);
  return;
}



// FUNCTION 14940b818 FUN_14940b818 body=114 status=ok
// SIG undefined FUN_14940b818(void)

void FUN_14940b818(longlong *param_1,int param_2)

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



// FUNCTION 14940b88a FUN_14940b88a body=132 status=ok
// SIG undefined FUN_14940b88a(void)

void FUN_14940b88a(longlong *param_1,ulonglong param_2)

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
          FUN_14940b90e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14940b90e FUN_14940b90e body=90 status=ok
// SIG undefined FUN_14940b90e(void)

void FUN_14940b90e(longlong *param_1,int param_2)

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
  FUN_14940b968();
  return;
}



// FUNCTION 14940b968 FUN_14940b968 body=78 status=ok
// SIG undefined FUN_14940b968(void)

void FUN_14940b968(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14940b9b6(param_1,param_2);
  return;
}



// FUNCTION 14940b9b6 FUN_14940b9b6 body=114 status=ok
// SIG undefined FUN_14940b9b6(void)

void FUN_14940b9b6(longlong *param_1,int param_2)

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



// FUNCTION 14940ba28 FUN_14940ba28 body=68 status=ok
// SIG undefined FUN_14940ba28(void)

void FUN_14940ba28(longlong param_1,uint param_2)

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
  FUN_14940ba6c(param_1);
  return;
}



// FUNCTION 14940ba6c FUN_14940ba6c body=527 status=ok
// SIG undefined FUN_14940ba6c(void)

void FUN_14940ba6c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
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
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940bc7c FUN_14940bc7c body=663 status=ok
// SIG undefined FUN_14940bc7c(void)

void FUN_14940bc7c(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (ulonglong *)*param_2;
  puVar5 = (ulonglong *)param_2[1];
  plVar9 = param_1 + 1;
  local_60 = puVar4;
  if (puVar5 == (ulonglong *)0x0) {
    local_58 = (ulonglong *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    local_58 = puVar5;
    if (puVar5 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
      UNLOCK();
      LOCK();
      puVar2 = puVar5 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar3 = (int *)((longlong)puVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*puVar5 + 0x10))(puVar5);
        }
      }
    }
  }
  uVar10 = ((uint)((ulonglong)puVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar4 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  iVar11 = FUN_14940a6ba(plVar9,uVar10 >> 0x10 ^ uVar10,&local_60);
  puVar4 = local_58;
  bVar12 = true;
  if (iVar11 != -1) {
    bVar12 = (longlong)iVar11 * 0x28 + *plVar9 == 0;
  }
  if (local_58 != (ulonglong *)0x0) {
    LOCK();
    puVar2 = local_58 + 1;
    *(int *)puVar2 = (int)*puVar2 + -1;
    UNLOCK();
    if ((int)*puVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)puVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar4 + 0x10))(puVar4);
      }
    }
  }
  if (puVar5 != (ulonglong *)0x0) {
    LOCK();
    puVar4 = puVar5 + 1;
    *(int *)puVar4 = (int)*puVar4 + -1;
    UNLOCK();
    if ((int)*puVar4 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar3 = (int *)((longlong)puVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
  }
  if (bVar12) {
    local_60 = param_2;
    local_58 = param_3;
    FUN_14940bfb2(plVar9,&local_68,&local_60);
    local_68 = *param_3;
    local_60 = &local_68;
    local_58 = param_2;
    FUN_14940c328(param_1 + 0xb,local_4c,&local_60);
    (*(code *)**(undefined8 **)*param_3)();
    uVar6 = *param_1;
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_14940bf14(uVar6,&local_78,param_3);
  }
  local_60 = param_2;
  FUN_14940c88c(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x16);
  *(uint *)(param_1 + 0x16) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar11 + 1U) {
    FUN_149404df6(param_1 + 0x15,iVar11);
  }
  lVar7 = param_1[0x15];
  *(ulonglong *)(lVar7 + (longlong)iVar11 * 0x10) = *param_2;
  uVar8 = param_2[1];
  *(ulonglong *)(lVar7 + 8 + (longlong)iVar11 * 0x10) = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940bf14 FUN_14940bf14 body=141 status=ok
// SIG undefined FUN_14940bf14(void)

void FUN_14940bf14(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14940c804(param_1 + 0x680,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 14940bfb2 FUN_14940bfb2 body=412 status=ok
// SIG undefined FUN_14940bfb2(void)

undefined4 * FUN_14940bfb2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14940c150(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[2] = *puVar4;
  uVar10 = puVar4[1];
  local_40[3] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_14940c236(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14940ba6c(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940c150 FUN_14940c150 body=230 status=ok
// SIG undefined FUN_14940c150(void)

int * FUN_14940c150(longlong *param_1,int *param_2)

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



// FUNCTION 14940c236 FUN_14940c236 body=240 status=ok
// SIG undefined FUN_14940c236(void)

undefined8 FUN_14940c236(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_14940a6ba(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_14940a6ba(param_1);
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
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_149409aba(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_14940b818(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14940c25c;
    }
  }
  uVar13 = 0;
LAB_14940c25c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940c328 FUN_14940c328 body=343 status=ok
// SIG undefined FUN_14940c328(void)

undefined4 * FUN_14940c328(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14940c480(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_14940c566(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14940c626(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940c480 FUN_14940c480 body=229 status=ok
// SIG undefined FUN_14940c480(void)

int * FUN_14940c480(longlong *param_1,int *param_2)

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



// FUNCTION 14940c566 FUN_14940c566 body=191 status=ok
// SIG undefined FUN_14940c566(void)

undefined8 FUN_14940c566(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14940b9b6(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14940c626 FUN_14940c626 body=477 status=ok
// SIG undefined FUN_14940c626(void)

void FUN_14940c626(longlong *param_1)

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



// FUNCTION 14940c804 FUN_14940c804 body=134 status=ok
// SIG undefined FUN_14940c804(void)

void FUN_14940c804(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940c88c FUN_14940c88c body=263 status=ok
// SIG undefined FUN_14940c88c(void)

void FUN_14940c88c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_14940386c(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 14940c994 FUN_14940c994 body=631 status=ok
// SIG undefined FUN_14940c994(void)

undefined8 * FUN_14940c994(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_14940d386(param_2,uVar6);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar5)) {
      *(int *)(param_2 + 9) = iVar5;
      FUN_14940d176(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      uVar3 = *(ulonglong *)(*local_90 + (longlong)iStack_74 * 0x18);
      plVar4 = *(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      local_a0 = uVar3;
      local_98 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar5 = FUN_14940cc88(param_3,uVar6 >> 0x10 ^ uVar6,&local_a0);
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (iVar5 == -1) {
        FUN_14940cd6c(param_2,&local_68,(longlong)iStack_74 * 0x18 + *local_90);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940cc0e FUN_14940cc0e body=122 status=ok
// SIG undefined FUN_14940cc0e(void)

longlong FUN_14940cc0e(longlong param_1,longlong param_2)

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
    FUN_14940d522(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14940cc88 FUN_14940cc88 body=228 status=ok
// SIG undefined FUN_14940cc88(void)

int FUN_14940cc88(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 14940cd6c FUN_14940cd6c body=413 status=ok
// SIG undefined FUN_14940cd6c(void)

undefined4 * FUN_14940cd6c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14940cf0a(param_1,local_48);
  uVar9 = *param_3;
  *local_40 = uVar9;
  uVar3 = param_3[1];
  local_40[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    uVar9 = *local_40;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_14940cff0(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14940d176(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940cf0a FUN_14940cf0a body=230 status=ok
// SIG undefined FUN_14940cf0a(void)

int * FUN_14940cf0a(longlong *param_1,int *param_2)

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



// FUNCTION 14940cff0 FUN_14940cff0 body=274 status=ok
// SIG undefined FUN_14940cff0(void)

undefined8 FUN_14940cff0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar8 = FUN_14940cc88(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar8 = FUN_14940cc88(param_1);
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
    if (iVar8 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_14940d104(param_1,*param_4);
      *param_4 = iVar8;
      uVar9 = 1;
      goto LAB_14940d018;
    }
  }
  uVar9 = 0;
LAB_14940d018:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940d104 FUN_14940d104 body=114 status=ok
// SIG undefined FUN_14940d104(void)

void FUN_14940d104(longlong *param_1,int param_2)

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



// FUNCTION 14940d176 FUN_14940d176 body=527 status=ok
// SIG undefined FUN_14940d176(void)

void FUN_14940d176(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
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
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940d386 FUN_14940d386 body=411 status=ok
// SIG undefined FUN_14940d386(void)

void FUN_14940d386(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 14940d522 FUN_14940d522 body=218 status=ok
// SIG undefined FUN_14940d522(void)

longlong * FUN_14940d522(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_149409642(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14940d5fc FUN_14940d5fc body=891 status=ok
// SIG undefined FUN_14940d5fc(void)

undefined4
FUN_14940d5fc(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_e8 [40];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14940a468(param_1 + 0x9c,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_14940d6f4;
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,&local_80);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_14940d935:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x00014940d921:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x00014940d921;
      }
    }
    else {
      bVar6 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar6) goto LAB_14940d935;
    }
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_14940d6f4:
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_90 = plVar1;
  local_88 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_a0 = *param_2;
  local_98 = param_2[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  FUN_14940bc7c(param_1 + 0x9c,&local_a0,&local_90);
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x58))(local_60,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_b0);
  }
  else {
    local_b0 = plVar1;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_b0);
  }
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_bc = (float)DAT_14c8463f8;
    local_c0 = (float)DAT_14c8463f0;
  }
  else {
    FUN_144b013c4(local_70,&local_c0);
  }
  local_b8 = local_c0;
  local_b4 = local_bc;
  FUN_146af3580(&local_b0,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_b0._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940d978 FUN_14940d978 body=91 status=ok
// SIG undefined FUN_14940d978(void)

void FUN_14940d978(longlong param_1)

{
  FUN_14940aeb2(param_1 + 0xc0,param_1 + 0xa8);
  FUN_14940386c(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  FUN_14940b4c0(param_1 + 0xa8,0);
  return;
}



// FUNCTION 14940d9d4 FUN_14940d9d4 body=134 status=ok
// SIG undefined FUN_14940d9d4(void)

void FUN_14940d9d4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940da5c FUN_14940da5c body=359 status=ok
// SIG undefined FUN_14940da5c(void)

longlong FUN_14940da5c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940dbc4 FUN_14940dbc4 body=125 status=ok
// SIG undefined FUN_14940dbc4(void)

longlong * FUN_14940dbc4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14941248e(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14940dc42 FUN_14940dc42 body=160 status=ok
// SIG undefined FUN_14940dc42(void)

void FUN_14940dc42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14940dce2 FUN_14940dce2 body=333 status=ok
// SIG undefined FUN_14940dce2(void)

longlong * FUN_14940dce2(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bcc2630;
  plVar4 = plVar3 + 2;
  FUN_14940de30(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_1494123e2(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14940ddbf;
    param_1[1] = 0;
LAB_14940dd87:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14940ddbf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14940ddbf;
      goto LAB_14940dd87;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14940ddbf;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14940ddbf:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x380;
  FUN_140a52e78(*param_1 + 8,"STableRow<ItemType>",
                "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940de30 FUN_14940de30 body=202 status=ok
// SIG undefined FUN_14940de30(void)

undefined8 * FUN_14940de30(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_14bcc2650;
  param_1[1] = &PTR_FUN_14bcc26f0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 14940defa FUN_14940defa body=9 status=ok
// SIG undefined FUN_14940defa(void)

void FUN_14940defa(longlong param_1)

{
  FUN_14941149c(param_1 + 0x10);
  return;
}



// FUNCTION 14940df04 FUN_14940df04 body=29 status=ok
// SIG undefined FUN_14940df04(void)

undefined8 FUN_14940df04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14940df36 FUN_14940df36 body=149 status=ok
// SIG undefined FUN_14940df36(void)

byte FUN_14940df36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14940df72;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14940df72:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 14940dfcc FUN_14940dfcc body=248 status=ok
// SIG undefined FUN_14940dfcc(void)

void FUN_14940dfcc(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14940e01b;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e01b:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940e0c6 FUN_14940e0c6 body=149 status=ok
// SIG undefined FUN_14940e0c6(void)

byte FUN_14940e0c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14940e102;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14940e102:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 14940e15c FUN_14940e15c body=124 status=ok
// SIG undefined FUN_14940e15c(void)

undefined4 FUN_14940e15c(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14940e195;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e195:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar5;
}



// FUNCTION 14940e1d8 FUN_14940e1d8 body=124 status=ok
// SIG undefined FUN_14940e1d8(void)

undefined1 FUN_14940e1d8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14940e212;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e212:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar4;
}



// FUNCTION 14940e254 FUN_14940e254 body=144 status=ok
// SIG undefined FUN_14940e254(void)

longlong FUN_14940e254(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14940e290;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e290:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return param_2;
}



// FUNCTION 14940e2e4 FUN_14940e2e4 body=126 status=ok
// SIG undefined FUN_14940e2e4(void)

undefined4 FUN_14940e2e4(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14940e31e;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e31e:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar5;
}



// FUNCTION 14940e362 FUN_14940e362 body=154 status=ok
// SIG undefined FUN_14940e362(void)

longlong * FUN_14940e362(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_14940e3eb:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14940e3eb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
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



// FUNCTION 14940e460 FUN_14940e460 body=248 status=ok
// SIG undefined FUN_14940e460(void)

void FUN_14940e460(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14940e4af;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14940e4af:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940e568 FUN_14940e568 body=114 status=ok
// SIG undefined FUN_14940e568(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14940e568(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014940e5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 14940e5da FUN_14940e5da body=1464 status=ok
// SIG undefined FUN_14940e5da(void)

void FUN_14940e5da(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_14940e7b2:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_14940e7b2;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    FUN_1494112c0(&local_628);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_149411248(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = &local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14940eb94 FUN_14940eb94 body=1060 status=ok
// SIG undefined FUN_14940eb94(void)

int FUN_14940eb94(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14940ec17;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_14940ec17:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 14940efba FUN_14940efba body=216 status=ok
// SIG undefined FUN_14940efba(void)

void FUN_14940efba(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14940f094 FUN_14940f094 body=802 status=ok
// SIG undefined FUN_14940f094(void)

longlong FUN_14940f094(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14940f0ee;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_14940f0ee:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc15530) && (FUN_144b3d300(&DAT_14cc15530), DAT_14cc15530 == -1)) {
    FUN_1446ddc76(&DAT_14cc15528,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14cc15530);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14cc15528,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_14940f2b3;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_14940f25d;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_14940f2b3;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_14940f2b3;
    }
    if ((uVar2 & 1) != 0) goto LAB_14940f2ac;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_14940f2b3;
    }
LAB_14940f25d:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_14940f2b3;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_14940f2b3;
      }
LAB_14940f2ac:
      lVar12 = lVar12 + 0x650;
      goto LAB_14940f2b3;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_14940f2b3;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_14940f2b3:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14940f3b8 FUN_14940f3b8 body=45 status=ok
// SIG undefined FUN_14940f3b8(void)

longlong FUN_14940f3b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14941149c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14940f3e6 FUN_14940f3e6 body=1300 status=ok
// SIG undefined FUN_14940f3e6(void)

undefined1 * FUN_14940f3e6(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [36];
  undefined4 local_184;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14940f448;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_14940f448:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_180 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14940f68e;
  }
  local_184 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_180 + 8) & 3) == 0) {
      if ((*(ushort *)(local_180 + 8) & 0xc) == 0) goto LAB_14940f56d;
      local_120 = *puVar8;
      local_118 = puVar8[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_120,uVar7 ^ 1,1);
    }
    else {
      local_110 = *puVar8;
      local_108 = puVar8[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_14940f56d:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    local_130 = *puVar8;
    local_128 = puVar8[1];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_130,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_148 = (undefined4)DAT_14c966e98;
  uStack_144 = DAT_14c966e98._4_4_;
  uStack_140 = (undefined4)DAT_14c966ea0;
  uStack_13c = DAT_14c966ea0._4_4_;
  local_138 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14940f6e8:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14940f6e8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
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
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_150 = plVar3;
  }
  plVar3 = plStack_150;
  uVar9 = FUN_1407c9a0c(local_100,&local_158,&local_148);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_168);
  uVar9 = FUN_140592b68(uVar9,local_168,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_14940f7a5:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_14940f7a5;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    local_178 = lVar10 + 8;
    if (lVar10 == 0) {
      local_178 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_170 = plVar14;
  }
  plVar14 = plStack_170;
  uVar9 = FUN_140592a6e(uVar9,&local_178);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_184;
LAB_14940f68e:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14940f8fc FUN_14940f8fc body=1907 status=ok
// SIG undefined FUN_14940f8fc(void)

undefined1 * FUN_14940f8fc(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined1 *local_190;
  longlong *local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_190 = param_2;
  local_180 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_194 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_14940f9c3:
    plVar12 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_194 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_14940f9c3;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar12 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_194 = 0;
    }
    else {
      local_194 = 0;
    }
  }
  local_188 = (longlong *)(param_1 + -8);
  lVar14 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar14 == DAT_14c966e98) goto LAB_14940fa35;
LAB_14940fce3:
    puVar13 = local_190;
    if ((lVar14 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar12), cVar6 != '\0'))
    goto LAB_14940fe29;
LAB_14940fd67:
    iVar9 = (**(code **)(*local_188 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar11 == (undefined8 *)0x0)) goto LAB_14940fe29;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      local_168 = *puVar11;
      local_160 = puVar11[1];
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_168,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    local_178 = *puVar11;
    local_170 = puVar11[1];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,&local_178,param_4);
    *puVar13 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    puVar13 = local_190;
    if (lVar14 != lVar5) {
      lVar14 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_14940fce3;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar14 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar12);
        puVar13 = local_190;
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_14940fd67;
      }
      else {
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_14940fe29;
    }
LAB_14940fa35:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar13 = local_190;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_190);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar13 = local_190;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_190,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_180[8] * 0.0;
    fVar19 = local_180[7] * 0.0;
    fVar17 = local_180[10] * 0.0;
    fVar20 = local_180[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_180[0xc],fVar20 + fVar19 + local_180[0xb]);
    local_130 = CONCAT44(*local_180 * local_180[8] + fVar17,*local_180 * local_180[7] + fVar20);
    uStack_128 = CONCAT44(local_180[10] * local_180[1] + fVar18,local_180[1] * local_180[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_188 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188),
              puVar11 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            local_148 = *puVar11;
            local_140 = puVar11[1];
            if (local_140 != 0) {
              LOCK();
              *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar15 + 0x28))(plVar15,&local_148,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            goto LAB_14940ff66;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
LAB_14940ff66:
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188);
      if (puVar11 != (undefined8 *)0x0) {
        local_158 = *puVar11;
        local_150 = puVar11[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar6 != '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_14940fe5b;
    }
    FUN_14493db24(puVar13);
LAB_14940fe29:
    *puVar13 = 0;
  }
  puVar13[0x20] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  memset(puVar13 + 0x28,0,0x88);
  *(undefined4 *)(puVar13 + 0xb0) = 0x20702;
  puVar13[0xb4] = 0;
LAB_14940fe5b:
  if ((char)local_194 == '\0') {
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 149410070 FUN_149410070 body=426 status=ok
// SIG undefined FUN_149410070(void)

undefined1 * FUN_149410070(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_149410118;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_149410118:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10);
    if (puVar8 != (undefined8 *)0x0) {
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar10 + 0xb0))(plVar10);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (puVar8 != (undefined8 *)0x0) goto LAB_1494101ed;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1494101ed:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941021c FUN_14941021c body=637 status=ok
// SIG undefined FUN_14941021c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14941021c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_1494103be:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_1494103be;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_149410488:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_149410488;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
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
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494104a0 FUN_1494104a0 body=90 status=ok
// SIG undefined FUN_1494104a0(void)

void FUN_1494104a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x0001494104eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1494104fa FUN_1494104fa body=106 status=ok
// SIG undefined FUN_1494104fa(void)

void FUN_1494104fa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x000149410555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 149410564 FUN_149410564 body=1078 status=ok
// SIG undefined FUN_149410564(void)

undefined1 *
FUN_149410564(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_149410640;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_1494106de;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_1494106de:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_1494115a4(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_149410915;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_149410918;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_149410915:
    *pbVar11 = 0;
  }
LAB_149410918:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_149410640:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14941099c FUN_14941099c body=207 status=ok
// SIG undefined FUN_14941099c(void)

undefined8 FUN_14941099c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_1494116ae(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_1494109f7;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_1494109f7:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149410a6c FUN_149410a6c body=394 status=ok
// SIG undefined FUN_149410a6c(void)

undefined8 FUN_149410a6c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x372) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_149410b4d:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_149410b4d;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar9) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149410bf8 FUN_149410bf8 body=644 status=ok
// SIG undefined FUN_149410bf8(void)

undefined1 * FUN_149410bf8(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_149410e4e;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar12[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_149410ca3;
      }
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    plVar11 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_149410ca3:
  puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar11 + 0x30))(plVar11);
        }
        local_108 = *puVar8;
        local_100 = puVar8[1];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_108;
      }
      else {
        if ((uVar7 & 0xfffffffe) != 2) goto LAB_149410dae;
        local_118 = *puVar8;
        local_110 = puVar8[1];
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        lVar9 = *plVar11;
        puVar10 = &local_118;
      }
      (**(code **)(lVar9 + 0x28))(plVar11,puVar10,1,1);
      (**(code **)(*plVar11 + 0x40))(plVar11);
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
LAB_149410dae:
    local_128 = *puVar8;
    local_120 = puVar8[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    cVar5 = (**(code **)(*plVar11 + 0xa8))(plVar11);
    if (cVar5 != '\0') {
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
  }
  if (!bVar3) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_149410e4e:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


