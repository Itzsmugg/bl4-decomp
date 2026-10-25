// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f85fa8 FUN_147f85fa8 body=691 status=ok
// SIG undefined FUN_147f85fa8(void)

void FUN_147f85fa8(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7)

{
  void *_Src;
  undefined **ppuVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  void **local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined **local_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined6 uStack_b4;
  undefined2 uStack_ae;
  undefined6 uStack_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar3 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    do {
      if (plVar4[7] == param_2) {
        if (plVar4 != (longlong *)0x0) {
          local_80 = (void *)0x0;
          local_78 = *(int *)(param_7 + 1);
          lVar3 = (longlong)local_78;
          _Src = (void *)*param_7;
          if (lVar3 == 0) {
            local_74 = 0;
          }
          else {
            FUN_1446dd670(&local_80,local_78,0);
            memcpy(local_80,_Src,lVar3 * 2);
          }
          local_148 = &local_80;
          local_150 = param_6;
          local_158 = param_5;
          FUN_147f857a7(param_1 + 0x130,*plVar4,param_3 + 8,param_4);
          if (local_80 != (void *)0x0) {
            FUN_1400020a8();
          }
          if ((*plVar4 != 0) && (lVar3 = FUN_144a7a45a(), lVar3 != 0)) {
            iVar5 = *(int *)(param_7 + 1) + -1;
            if (*(int *)(param_7 + 1) == 0) {
              iVar5 = 0;
            }
            FUN_1446f82e2(&local_138,iVar5,*param_7,1);
            ppuVar1 = local_138;
            plVar4 = (longlong *)FUN_140721bac(*(undefined8 *)(lVar3 + 0x10));
            if (plVar4 == (longlong *)0x0) goto LAB_147f861b6;
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
            if ((longlong)(int)plVar4[1] == 0) goto LAB_147f861b6;
            lVar6 = *plVar4;
            lVar7 = (longlong)(int)plVar4[1] * 0xb8 + lVar6;
            bVar2 = false;
            goto LAB_147f8617c;
          }
        }
        break;
      }
      plVar4 = plVar4 + 9;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  goto LAB_147f86032;
  while (lVar6 = lVar6 + 0xb8, lVar6 != lVar7) {
LAB_147f8617c:
    if (*(undefined ***)(lVar6 + 0x3c) == ppuVar1) {
      FUN_1478f6e7a(lVar3,lVar6);
      lVar6 = lVar6 + 0xb8;
      bVar2 = true;
      if (lVar6 == lVar7) goto LAB_147f86032;
      goto LAB_147f8617c;
    }
  }
  if (!bVar2) {
LAB_147f861b6:
    local_130 = 0;
    local_128 = 0xffffffff00000000;
    local_120 = 0;
    local_11c = 0;
    uStack_114 = 0;
    local_10c = 0;
    local_138 = &PTR_FUN_14a5c6dd8;
    local_108 = 0;
    local_100 = 0x3727c5ac;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = &PTR_FUN_14a5c6de8;
    local_d0 = 0;
    local_c8 = 0xffffffff00000000;
    local_c0 = 0;
    local_bc = 0;
    uStack_b4 = 0;
    uStack_ae = 0;
    uStack_ac = 0;
    local_a4 = 0x3f800000;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0x101;
    local_96 = 0;
    local_84 = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_fc = ppuVar1;
    FUN_1478f6e7a(lVar3);
  }
LAB_147f86032:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f86262 FUN_147f86262 body=434 status=ok
// SIG undefined FUN_147f86262(void)

void FUN_147f86262(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58;
  FUN_140f3d148(param_1,local_30,puVar3,iVar2 != 0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f86416 FUN_147f86416 body=255 status=ok
// SIG undefined FUN_147f86416(void)

void FUN_147f86416(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
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
  FUN_140ec5db4(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f86534 FUN_147f86534 body=464 status=ok
// SIG undefined FUN_147f86534(void)

void FUN_147f86534(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
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
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8673c FUN_147f8673c body=917 status=ok
// SIG undefined FUN_147f8673c(void)

void FUN_147f8673c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar5 = local_64;
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar4 = local_68;
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar3 = local_6c;
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  iVar2 = local_70;
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = iVar3 != 0;
  local_a0 = iVar2 != 0;
  local_b0 = iVar4 != 0;
  local_98 = iVar1 != 0;
  local_b8 = iVar5 != 0;
  FUN_1403604d0(param_1,local_50,local_58,local_60);
  *param_3 = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f86ad8 FUN_147f86ad8 body=86 status=ok
// SIG undefined FUN_147f86ad8(void)

void FUN_147f86ad8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x38 + lVar4);
      if (lVar3 != 0) {
        FUN_141053868(lVar3,0);
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar4);
  }
  return;
}



// FUNCTION 147f86b3e FUN_147f86b3e body=230 status=ok
// SIG undefined FUN_147f86b3e(void)

void FUN_147f86b3e(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147f86c26(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  local_68 = 0;
  uStack_60 = 0;
  uVar1 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar1);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f86c26 FUN_147f86c26 body=256 status=ok
// SIG undefined FUN_147f86c26(void)

undefined8 FUN_147f86c26(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb26578 == 0) {
    uVar2 = FUN_141051039();
    DAT_14cb26578 = FUN_140002ddd(FUN_14644937d,uVar2,L"AnimNode_BlendFaceFXAnimation");
  }
  local_48 = *(undefined8 *)(DAT_14cb26578 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f86d28 FUN_147f86d28 body=102 status=ok
// SIG undefined FUN_147f86d28(void)

longlong FUN_147f86d28(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x188) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x180);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x194);
      if (lVar3 == 0) {
        lVar4 = 0;
        lVar3 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x18c);
      }
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      lVar3 = *(longlong *)(lVar3 + 0x50);
    }
    if (*param_2 == 0) {
      lVar5 = param_2[1];
    }
    else {
      lVar5 = param_2[1];
      lVar2 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      bVar1 = *param_2 == lVar4;
      lVar4 = lVar2;
      if (lVar5 == lVar3 && bVar1) {
        return lVar2;
      }
    }
    lVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar5 == lVar3);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147f86d8e FUN_147f86d8e body=130 status=ok
// SIG undefined FUN_147f86d8e(void)

longlong FUN_147f86d8e(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *param_2;
  lVar3 = *(longlong *)(param_2 + 1);
  if ((longlong)iVar1 == -1 || lVar3 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      return **(longlong **)(param_1 + 0x140);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x148);
    if (((iVar1 < iVar2) &&
        (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x48), lVar5 != 0)
        ) && (*(longlong *)(lVar5 + 0x18) == lVar3)) {
      return lVar5;
    }
    if (iVar2 != 0) {
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x140) + lVar5);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == lVar3)) {
          return lVar4;
        }
        lVar5 = lVar5 + 0x48;
      } while ((longlong)iVar2 * 0x48 != lVar5);
    }
  }
  return 0;
}



// FUNCTION 147f86e10 FUN_147f86e10 body=81 status=ok
// SIG undefined FUN_147f86e10(void)

void FUN_147f86e10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_140b3f358();
  if ((cVar1 == '\0') && ((longlong)*(int *)(param_1 + 0x148) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    do {
      FUN_14169f27a(param_1,lVar3);
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  *(char *)(param_1 + 0x150) = *(char *)(param_1 + 0x150) + -1;
  return;
}



// FUNCTION 147f86e86 FUN_147f86e86 body=45 status=ok
// SIG undefined FUN_147f86e86(void)

longlong FUN_147f86e86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1410679a0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f86eb8 FUN_147f86eb8 body=45 status=ok
// SIG undefined FUN_147f86eb8(void)

longlong FUN_147f86eb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140db8a7a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f86f94 FUN_147f86f94 body=59 status=ok
// SIG undefined FUN_147f86f94(void)

undefined8 FUN_147f86f94(longlong *param_1)

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



// FUNCTION 147f86fe0 FUN_147f86fe0 body=38 status=ok
// SIG undefined FUN_147f86fe0(void)

void FUN_147f86fe0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_147f870c8(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f87054 FUN_147f87054 body=115 status=ok
// SIG undefined FUN_147f87054(void)

void FUN_147f87054(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f870c8 FUN_147f870c8 body=74 status=ok
// SIG undefined FUN_147f870c8(void)

void FUN_147f870c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acbef80;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f8717a FUN_147f8717a body=96 status=ok
// SIG undefined FUN_147f8717a(void)

undefined8 FUN_147f8717a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar3 = *(undefined4 *)(puVar1 + 2);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar5 = *(undefined4 *)(puVar1 + 3);
      lVar2 = param_2 + 0x38 + lVar8;
      *(undefined4 *)(lVar2 + -0x2c) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined8 *)(lVar2 + -0x38) = uVar6;
      *(undefined8 *)(lVar2 + -0x30) = uVar7;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[4];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar4 = *(undefined4 *)(puVar1 + 6);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar8 = lVar8 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f87202 FUN_147f87202 body=59 status=ok
// SIG undefined FUN_147f87202(void)

undefined8 FUN_147f87202(longlong *param_1)

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



// FUNCTION 147f87248 FUN_147f87248 body=38 status=ok
// SIG undefined FUN_147f87248(void)

void FUN_147f87248(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f8733e FUN_147f8733e body=144 status=ok
// SIG undefined FUN_147f8733e(void)

undefined8 FUN_147f8733e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      lVar2 = param_2 + 0x40 + lVar9;
      *(undefined4 *)(lVar2 + -0x20) = *(undefined4 *)(puVar1 + 4);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x30) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0x2c) = uVar3;
      *(undefined4 *)(lVar2 + -0x28) = uVar4;
      *(undefined4 *)(lVar2 + -0x24) = uVar5;
      *(undefined8 *)(lVar2 + -0x40) = uVar6;
      *(undefined8 *)(lVar2 + -0x38) = uVar7;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[5];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 8);
      uVar6 = puVar1[0xb];
      uVar7 = puVar1[0xc];
      uVar8 = puVar1[0xd];
      *(undefined8 *)(lVar2 + 0x10) = puVar1[10];
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      *(undefined8 *)(lVar2 + 0x28) = uVar8;
      lVar9 = lVar9 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f873f6 FUN_147f873f6 body=59 status=ok
// SIG undefined FUN_147f873f6(void)

undefined8 FUN_147f873f6(longlong *param_1)

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



// FUNCTION 147f8743c FUN_147f8743c body=38 status=ok
// SIG undefined FUN_147f8743c(void)

void FUN_147f8743c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f874f2 FUN_147f874f2 body=144 status=ok
// SIG undefined FUN_147f874f2(void)

undefined8 FUN_147f874f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined1 *)(param_2 + -0x58) = *(undefined1 *)(param_3 + -0x58);
      *(undefined4 *)(param_2 + -0x48) = *(undefined4 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x50) = *(undefined8 *)(param_3 + -0x50);
      uVar5 = *(undefined8 *)(param_3 + -0x38);
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x38) = uVar5;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      *(undefined8 *)(param_2 + 0x28) = uVar7;
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f875aa FUN_147f875aa body=59 status=ok
// SIG undefined FUN_147f875aa(void)

undefined8 FUN_147f875aa(longlong *param_1)

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



// FUNCTION 147f875f6 FUN_147f875f6 body=54 status=ok
// SIG undefined FUN_147f875f6(void)

void FUN_147f875f6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14acc1650;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 147f8767c FUN_147f8767c body=57 status=ok
// SIG undefined FUN_147f8767c(void)

undefined8 * FUN_147f8767c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acc1650;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f876bc FUN_147f876bc body=55 status=ok
// SIG undefined FUN_147f876bc(void)

void FUN_147f876bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26640 == 0) {
    uVar1 = FUN_141051039();
    DAT_14cb26640 = FUN_140002ddd(FUN_146449763,uVar1,L"FaceFXAnimationSectionTemplate");
  }
  return;
}



// FUNCTION 147f87774 FUN_147f87774 body=59 status=ok
// SIG undefined FUN_147f87774(void)

undefined8 FUN_147f87774(longlong *param_1)

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



// FUNCTION 147f87876 FUN_147f87876 body=54 status=ok
// SIG undefined FUN_147f87876(void)

undefined1 FUN_147f87876(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f8798e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 147f878d4 FUN_147f878d4 body=59 status=ok
// SIG undefined FUN_147f878d4(void)

undefined8 FUN_147f878d4(longlong *param_1)

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



// FUNCTION 147f8791a FUN_147f8791a body=38 status=ok
// SIG undefined FUN_147f8791a(void)

void FUN_147f8791a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f8798e FUN_147f8798e body=98 status=ok
// SIG undefined FUN_147f8798e(void)

undefined8 * FUN_147f8798e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  lVar5 = param_2[7];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[7];
    }
  }
  param_1[7] = lVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 147f87a5e FUN_147f87a5e body=59 status=ok
// SIG undefined FUN_147f87a5e(void)

undefined8 FUN_147f87a5e(longlong *param_1)

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



// FUNCTION 147f87b34 FUN_147f87b34 body=54 status=ok
// SIG undefined FUN_147f87b34(void)

undefined1 FUN_147f87b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147f87b92 FUN_147f87b92 body=59 status=ok
// SIG undefined FUN_147f87b92(void)

undefined8 FUN_147f87b92(longlong *param_1)

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



// FUNCTION 147f87bd8 FUN_147f87bd8 body=37 status=ok
// SIG undefined FUN_147f87bd8(void)

void FUN_147f87bd8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147f87cb2 FUN_147f87cb2 body=59 status=ok
// SIG undefined FUN_147f87cb2(void)

undefined8 FUN_147f87cb2(longlong *param_1)

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



// FUNCTION 147f87d64 FUN_147f87d64 body=44 status=ok
// SIG undefined FUN_147f87d64(void)

void FUN_147f87d64(undefined8 param_1,longlong *param_2)

{
  FUN_145cc319b(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f87da6 FUN_147f87da6 body=54 status=ok
// SIG undefined FUN_147f87da6(void)

undefined1 FUN_147f87da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f87ea0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147f87e04 FUN_147f87e04 body=59 status=ok
// SIG undefined FUN_147f87e04(void)

undefined8 FUN_147f87e04(longlong *param_1)

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



// FUNCTION 147f87ea0 FUN_147f87ea0 body=95 status=ok
// SIG undefined FUN_147f87ea0(void)

undefined8 * FUN_147f87ea0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cc319b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f87f00(param_1,iVar1);
      FUN_147f87f62(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f87f00 FUN_147f87f00 body=98 status=ok
// SIG undefined FUN_147f87f00(void)

void FUN_147f87f00(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f87f62 FUN_147f87f62 body=115 status=ok
// SIG undefined FUN_147f87f62(void)

void FUN_147f87f62(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_1447a127e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f87fd6 FUN_147f87fd6 body=50 status=ok
// SIG undefined FUN_147f87fd6(void)

void FUN_147f87fd6(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145cc319b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147f88046 FUN_147f88046 body=80 status=ok
// SIG undefined FUN_147f88046(void)

undefined1 FUN_147f88046(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    FUN_1447a122a(param_2 + 0x10,param_3 + 0x10);
    FUN_147f88172(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147f880be FUN_147f880be body=59 status=ok
// SIG undefined FUN_147f880be(void)

undefined8 FUN_147f880be(longlong *param_1)

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



// FUNCTION 147f88104 FUN_147f88104 body=32 status=ok
// SIG undefined FUN_147f88104(void)

void FUN_147f88104(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_147f85520(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147f88172 FUN_147f88172 body=88 status=ok
// SIG undefined FUN_147f88172(void)

undefined8 * FUN_147f88172(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f881ca(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f881ca FUN_147f881ca body=98 status=ok
// SIG undefined FUN_147f881ca(void)

void FUN_147f881ca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f882b2 FUN_147f882b2 body=59 status=ok
// SIG undefined FUN_147f882b2(void)

undefined8 FUN_147f882b2(longlong *param_1)

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



// FUNCTION 147f8836e FUN_147f8836e body=29 status=ok
// SIG undefined FUN_147f8836e(void)

bool FUN_147f8836e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f8838c FUN_147f8838c body=26 status=ok
// SIG undefined FUN_147f8838c(void)

bool FUN_147f8838c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f883a6 FUN_147f883a6 body=101 status=ok
// SIG undefined FUN_147f883a6(void)

void FUN_147f883a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc0200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f8840c FUN_147f8840c body=101 status=ok
// SIG undefined FUN_147f8840c(void)

void FUN_147f8840c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc0200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f88472 FUN_147f88472 body=134 status=ok
// SIG undefined FUN_147f88472(void)

void FUN_147f88472(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acc0270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acc0200;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f884e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f884f8 FUN_147f884f8 body=62 status=ok
// SIG undefined FUN_147f884f8(void)

void FUN_147f884f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f88533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f88552 FUN_147f88552 body=29 status=ok
// SIG undefined FUN_147f88552(void)

bool FUN_147f88552(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f88570 FUN_147f88570 body=26 status=ok
// SIG undefined FUN_147f88570(void)

bool FUN_147f88570(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f8858a FUN_147f8858a body=101 status=ok
// SIG undefined FUN_147f8858a(void)

void FUN_147f8858a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc02e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f885f0 FUN_147f885f0 body=101 status=ok
// SIG undefined FUN_147f885f0(void)

void FUN_147f885f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc02e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f88656 FUN_147f88656 body=134 status=ok
// SIG undefined FUN_147f88656(void)

void FUN_147f88656(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acc0350;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acc02e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f886cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f886dc FUN_147f886dc body=52 status=ok
// SIG undefined FUN_147f886dc(void)

void FUN_147f886dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f8870d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147f8872c FUN_147f8872c body=29 status=ok
// SIG undefined FUN_147f8872c(void)

bool FUN_147f8872c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f8874a FUN_147f8874a body=26 status=ok
// SIG undefined FUN_147f8874a(void)

bool FUN_147f8874a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f88764 FUN_147f88764 body=101 status=ok
// SIG undefined FUN_147f88764(void)

void FUN_147f88764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0430;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc03c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f887ca FUN_147f887ca body=101 status=ok
// SIG undefined FUN_147f887ca(void)

void FUN_147f887ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acc0430;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc03c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f88830 FUN_147f88830 body=134 status=ok
// SIG undefined FUN_147f88830(void)

void FUN_147f88830(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acc0430;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acc03c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f888a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f888b6 FUN_147f888b6 body=62 status=ok
// SIG undefined FUN_147f888b6(void)

void FUN_147f888b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f888f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f888f4 FUN_147f888f4 body=208 status=ok
// SIG undefined FUN_147f888f4(void)

bool FUN_147f888f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_7;
    local_50 = param_6;
    local_58 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f889c8 FUN_147f889c8 body=29 status=ok
// SIG undefined FUN_147f889c8(void)

undefined8 FUN_147f889c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f88a00 FUN_147f88a00 body=29 status=ok
// SIG undefined FUN_147f88a00(void)

bool FUN_147f88a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147f88a1e FUN_147f88a1e body=26 status=ok
// SIG undefined FUN_147f88a1e(void)

bool FUN_147f88a1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147f88a38 FUN_147f88a38 body=24 status=ok
// SIG undefined FUN_147f88a38(void)

bool FUN_147f88a38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147f88a50 FUN_147f88a50 body=101 status=ok
// SIG undefined FUN_147f88a50(void)

void FUN_147f88a50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc04a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f88ab6 FUN_147f88ab6 body=101 status=ok
// SIG undefined FUN_147f88ab6(void)

void FUN_147f88ab6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acc04a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147f88b1c FUN_147f88b1c body=134 status=ok
// SIG undefined FUN_147f88b1c(void)

void FUN_147f88b1c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acc04a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f88b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147f88ba2 FUN_147f88ba2 body=39 status=ok
// SIG undefined FUN_147f88ba2(void)

void FUN_147f88ba2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147f88bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147f88bca FUN_147f88bca body=134 status=ok
// SIG undefined FUN_147f88bca(void)

bool FUN_147f88bca(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f88c52 FUN_147f88c52 body=108 status=ok
// SIG undefined FUN_147f88c52(void)

undefined * FUN_147f88c52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb26a00) {
    FUN_144b3d300(&DAT_14cb26a00);
    if (DAT_14cb26a00 == -1) {
      FUN_1413e28b0(&DAT_14cb26908);
      atexit((_func_5014 *)&LAB_1438b3417);
      _Init_thread_footer(&DAT_14cb26a00);
    }
  }
  return &DAT_14cb26908;
}



// FUNCTION 147f88cbe FUN_147f88cbe body=78 status=ok
// SIG undefined FUN_147f88cbe(void)

void FUN_147f88cbe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = FUN_14278f0ba(param_2);
  if (iVar1 != 0) {
    return;
  }
  FUN_14484255c(param_2,*(undefined4 *)(param_1 + 0x40));
  FUN_14484255c(param_2,*(undefined4 *)(param_1 + 0x50));
  FUN_14484255c(param_2,*(int *)(param_1 + 0x60) << 4);
  return;
}



// FUNCTION 147f88d0c FUN_147f88d0c body=109 status=ok
// SIG undefined FUN_147f88d0c(void)

void FUN_147f88d0c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  switchD_143c3d4dc::caseD_38();
  iVar1 = FUN_14278f0ba(param_2);
  if (iVar1 == 0) {
    FUN_14484255c(param_2,0x10);
    FUN_14484255c(param_2,*(undefined4 *)(param_1 + 0x40));
    return;
  }
  plVar2 = (longlong *)FUN_147d3c660(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147f88d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 400))(plVar2,param_2,*(code **)(*plVar2 + 400));
    return;
  }
  return;
}



// FUNCTION 147f88d7a FUN_147f88d7a body=45 status=ok
// SIG undefined FUN_147f88d7a(void)

void FUN_147f88d7a(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  char cVar1;
  
  cVar1 = FUN_1438b34a4();
  if (cVar1 != '\0') {
    *param_4 = *param_3 - *param_2;
  }
  return;
}



// FUNCTION 147f88da8 FUN_147f88da8 body=108 status=ok
// SIG undefined FUN_147f88da8(void)

longlong FUN_147f88da8(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 == 0) || (*(char *)(param_1 + 0x188) == '\x02')) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x180);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x194);
      if (lVar3 == 0) {
        lVar3 = 0;
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x18c);
      }
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      lVar3 = *(longlong *)(lVar3 + 0x50);
    }
    if (*(longlong *)(param_2 + 0x48) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x50);
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x50);
      lVar2 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      bVar1 = *(longlong *)(param_2 + 0x48) == lVar4;
      lVar4 = lVar2;
      if (lVar5 == lVar3 && bVar1) {
        return lVar2;
      }
    }
    lVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar5 == lVar3);
  }
  return lVar3;
}



// FUNCTION 147f88e14 FUN_147f88e14 body=68 status=ok
// SIG undefined FUN_147f88e14(void)

void FUN_147f88e14(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f88e5a FUN_147f88e5a body=297 status=ok
// SIG undefined FUN_147f88e5a(void)

void FUN_147f88e5a(longlong *param_1,uint *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *param_2;
  cVar1 = FUN_1400a246c(param_1 + 0x13);
  if (cVar1 != '\0') {
    FUN_144757f48(param_1,8);
    cVar1 = FUN_145c40fca(param_1,1);
    if (cVar1 != '\0') {
      lVar2 = 0x2b0;
      if (param_3 != '\0') {
        if ((char)param_1[0x13] == '\x02') goto LAB_147f88f63;
        uVar3 = FUN_14073751e();
        lVar2 = FUN_144a78ede(param_1,uVar3);
        if (lVar2 == 0) goto LAB_147f88f63;
        lVar2 = *(longlong *)(lVar2 + 0x118);
        *(float *)(param_1 + 0x28) =
             (float)(((double)((lVar2 >> 0x20) *
                              (longlong)
                              (int)((*param_2 - (int)((ulonglong)param_1[0x13] >> 0x20)) -
                                   (uint)((char)param_1[0x13] != '\x01'))) +
                     (double)((ulonglong)(double)(int)((ulonglong)lVar2 >> 0x20) &
                             0x8000000000000000)) / (double)(int)lVar2);
        lVar2 = 0x2a8;
      }
      (**(code **)(*param_1 + lVar2))(param_1,((ulonglong)*param_2 << 0x20) + 1);
    }
  }
LAB_147f88f63:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f88f84 FUN_147f88f84 body=448 status=ok
// SIG undefined FUN_147f88f84(void)

longlong FUN_147f88f84(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (lVar4 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    iVar1 = *param_2;
    fVar6 = (float)FUN_147f89146(param_1);
    dVar11 = (double)(int)lVar4;
    dVar12 = (double)(int)((ulonglong)lVar4 >> 0x20);
    dVar8 = ((double)(fVar6 - (*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144))) * dVar11)
            / dVar12;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar8;
    auVar13 = roundpd(auVar13,auVar13,1);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (double)(int)(dVar8 - auVar13._0_8_) + dVar8;
    auVar10 = roundpd(auVar10,auVar10,1);
    dVar8 = auVar10._0_8_;
    if (2147483647.0 <= dVar8) {
      dVar8 = 2147483647.0;
    }
    if (dVar8 <= -2147483648.0) {
      dVar8 = -2147483648.0;
    }
    dVar12 = (double)((ulonglong)dVar12 & 0x8000000000000000);
    dVar9 = ((double)((longlong)
                      (int)((iVar1 - (int)((ulonglong)uVar3 >> 0x20)) -
                           (uint)((char)uVar3 != '\x01')) * (lVar4 >> 0x20)) + dVar12) / dVar11;
    auVar2._4_8_ = (ulonglong)dVar9 >> 0x20;
    auVar2._0_4_ = (float)dVar9;
    fVar7 = (float)FUN_1447c7e44(auVar2._0_8_,
                                 (float)(((double)((longlong)(int)dVar8 * (lVar4 >> 0x20)) + dVar12)
                                        / dVar11));
    fVar6 = *(float *)(param_1 + 0x140);
    local_68 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_2 + 2);
    lVar4 = FUN_1475759e6(param_1,&local_68,0);
    if (lVar4 != 0) {
      lVar5 = FUN_145b65622();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        *(float *)(lVar4 + 0x140) = fVar7 + fVar6;
      }
      goto LAB_147f88fc4;
    }
  }
  lVar4 = 0;
LAB_147f88fc4:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f89146 FUN_147f89146 body=138 status=ok
// SIG undefined FUN_147f89146(void)

void FUN_147f89146(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
    lVar2 = FUN_147f89332(param_1 + 0x118,0);
    if (lVar2 != 0) {
      cVar1 = FUN_1438b34a4(lVar2,&local_14,&local_18);
      if (cVar1 != '\0') {
        *(float *)(param_1 + 0x14c) = local_18 - local_14;
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 1;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*(undefined4 *)(param_1 + 0x14c));
}



// FUNCTION 147f891d2 FUN_147f891d2 body=351 status=ok
// SIG undefined FUN_147f891d2(void)

void FUN_147f891d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_147539898();
  fVar5 = (float)FUN_147f89146(param_1);
  if (((1e-08 < ABS(fVar5)) && (*(char *)(param_1 + 0x98) != '\x02')) &&
     (*(char *)(param_1 + 0xa0) != '\x02')) {
    uVar2 = FUN_14073751e();
    lVar3 = FUN_144a78ede(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xa0);
      dVar6 = ((double)(int)*(undefined8 *)(lVar3 + 0x118) *
              (double)(fVar5 - (*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144)))) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x118) >> 0x20);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar6;
      auVar8 = roundpd(auVar8,auVar8,1);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (double)(int)(dVar6 - auVar8._0_8_) + dVar6;
      auVar7 = roundpd(auVar7,auVar7,1);
      dVar6 = auVar7._0_8_;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      if (0 < (int)dVar6) {
        for (iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
                     (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
            iVar4 <= (int)((uint)((char)uVar2 == '\x01') + (int)((ulonglong)uVar2 >> 0x20));
            iVar4 = iVar4 + (int)dVar6) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14753e8f2(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 147f89332 FUN_147f89332 body=238 status=ok
// SIG undefined FUN_147f89332(void)

longlong FUN_147f89332(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_147f89422();
  if (lVar1 != 0) goto LAB_147f8935b;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = 0;
    goto LAB_147f8935b;
  }
  FUN_14475cc44(param_1 + 8,&local_30);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar2 = FUN_1411e607c();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = 0;
  lVar1 = FUN_1412ecd05(uVar2,param_2,puVar4,0);
  if (lVar1 == 0) {
LAB_147f89407:
    lVar1 = 0;
  }
  else {
    lVar3 = FUN_1411e607c();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147f89407;
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147f8935b:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147f89422 FUN_147f89422 body=197 status=ok
// SIG undefined FUN_147f89422(void)

longlong FUN_147f89422(longlong param_1)

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
  lVar4 = FUN_1411e607c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 147f894e8 FUN_147f894e8 body=261 status=ok
// SIG undefined FUN_147f894e8(void)

int * FUN_147f894e8(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar5 = (float)FUN_147f89146();
  iVar3 = 0;
  iVar4 = 0;
  if (((1e-08 < ABS(fVar5)) && (iVar4 = iVar3, *(char *)(param_1 + 0x98) != '\x02')) &&
     (*(char *)(param_1 + 0xa0) != '\x02')) {
    uVar1 = FUN_14073751e();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    if (lVar2 != 0) {
      dVar6 = ((double)(int)*(undefined8 *)(lVar2 + 0x118) *
              (double)(fVar5 - (*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x144)))) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar6;
      auVar8 = roundpd(auVar8,auVar8,1);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (double)(int)(dVar6 - auVar8._0_8_) + dVar6;
      auVar7 = roundpd(auVar7,auVar7,1);
      dVar6 = auVar7._0_8_;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      iVar4 = 0;
      if (0 < (int)dVar6) {
        iVar4 = (int)dVar6;
      }
    }
  }
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 147f895ed FUN_147f895ed body=96 status=ok
// SIG undefined FUN_147f895ed(void)

longlong FUN_147f895ed(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140b0ae5c();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_140da5c9c(param_1);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 147f8964e FUN_147f8964e body=345 status=ok
// SIG undefined FUN_147f8964e(void)

undefined8 * FUN_147f8964e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14acc1650;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x34);
    param_1[4] = *(undefined8 *)(param_3 + 0x2c);
    param_1[5] = uVar3;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0xb8);
    uVar3 = *(undefined8 *)(param_2 + 0x10c);
    *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x104);
    *(undefined8 *)((longlong)param_1 + 0x3c) = uVar3;
    param_1[9] = *(undefined8 *)(param_2 + 0x118);
    uVar6 = *(undefined4 *)(param_2 + 0x124);
    uVar1 = *(undefined4 *)(param_2 + 0x128);
    uVar2 = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
    *(undefined4 *)(param_1 + 0xb) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
    FUN_144a787a6(param_1 + 0xc,param_2 + 0x130);
    param_1[0xe] = *(undefined8 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x100);
    uVar6 = FUN_147f89146(param_2);
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x144);
    uVar5 = *(ulonglong *)(param_2 + 0x98) & 0xff;
    iVar4 = -0x80000000;
    if (uVar5 != 2) {
      iVar4 = (uint)(uVar5 != 1) + (int)(*(ulonglong *)(param_2 + 0x98) >> 0x20);
    }
    *(int *)(param_1 + 0x11) = iVar4;
    uVar5 = *(ulonglong *)(param_2 + 0xa0) & 0xff;
    iVar4 = 0x7fffffff;
    if (uVar5 != 2) {
      iVar4 = (uint)(uVar5 == 1) + (int)(*(ulonglong *)(param_2 + 0xa0) >> 0x20);
    }
    *(int *)((longlong)param_1 + 0x8c) = iVar4;
  }
  return param_1;
}



// FUNCTION 147f897a7 FUN_147f897a7 body=119 status=ok
// SIG undefined FUN_147f897a7(void)

undefined4 * FUN_147f897a7(undefined4 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb26a4c) {
    FUN_144b3d300(&DAT_14cb26a4c);
    if (DAT_14cb26a4c == -1) {
      FUN_1457480a0(&DAT_14cb26a48);
      _Init_thread_footer(&DAT_14cb26a4c);
    }
  }
  *param_1 = DAT_14cb26a48;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 147f8981e FUN_147f8981e body=334 status=ok
// SIG undefined FUN_147f8981e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147f8981e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb26aa0) {
    FUN_144b3d300(&DAT_14cb26aa0);
    if (DAT_14cb26aa0 == -1) {
      DAT_14cb26a70 = 0;
      DAT_14cb26a78 = 0;
      DAT_14cb26a50 = 0;
      _DAT_14cb26a58 = 0;
      _DAT_14cb26a7c = 0xffffffff00000080;
      DAT_14cb26a84 = 0;
      DAT_14cb26a90 = 0;
      DAT_14cb26a98 = 0;
      atexit(FUN_1438b5725);
      _Init_thread_footer(&DAT_14cb26aa0);
    }
  }
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147f8ac4e(uVar1,param_2);
  if ((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x1c + DAT_14cb26a50, lVar3 == 0)) {
    FUN_1457480a0(local_3c);
    local_38 = param_2;
    local_30 = local_3c;
    FUN_147f8acd8(&local_24);
    uVar1 = *(undefined4 *)(DAT_14cb26a50 + 0x10 + (longlong)local_24 * 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0x10);
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8996e FUN_147f8996e body=656 status=ok
// SIG undefined FUN_147f8996e(void)

void FUN_147f8996e(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  undefined4 local_198;
  undefined1 local_190 [64];
  longlong local_150;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [40];
  undefined5 local_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined8 **local_78;
  undefined1 local_6c [4];
  undefined8 **local_68 [4];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(byte *)(param_3 + 0x1f) & 2) == 0) {
    lVar1 = param_1 + 0x20;
    FUN_147f8981e(&local_88,lVar1);
    lVar2 = FUN_1404155e4(param_5,local_88);
    if (lVar2 == 0) {
      local_198 = 0;
      local_1a0 = &PTR_FUN_14acc1bb8;
      FUN_147f8a99a(local_190,lVar1);
      local_120 = *param_2;
      uStack_118 = param_2[1];
      local_110 = *(undefined4 *)(param_2 + 2);
      local_108 = *param_3;
      uStack_104 = param_3[1];
      uStack_100 = param_3[2];
      uStack_fc = param_3[3];
      local_f8 = param_3[4];
      uStack_f4 = param_3[5];
      uStack_f0 = param_3[6];
      uStack_ec = param_3[7];
      local_e8 = *(undefined8 *)(param_3 + 8);
      FUN_144a3f8b4(local_e0,param_3 + 10);
      FUN_144b1f2a6(local_c0,param_3 + 0x12);
      local_98 = (undefined5)*(undefined8 *)(param_3 + 0x1c);
      uStack_93 = (undefined3)*(undefined8 *)((longlong)param_3 + 0x75);
      uStack_90 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x75) >> 0x18);
      local_84 = local_88;
      local_68[0] = (undefined8 **)FUN_14001cc68(0x118,8);
      local_48 = 1;
      FUN_147f8b716(local_68[0],&local_1a0);
      local_80 = &local_84;
      local_78 = local_68;
      FUN_147f8b212(param_5 + 0x10,local_6c,&local_80,0);
      if ((local_48 & 1) != 0) {
        pppuVar3 = local_68;
        if ((local_48 & 2) == 0) {
          pppuVar3 = (undefined8 ***)local_68[0];
        }
        local_48 = local_48 & 0xfe;
        (*(code *)**pppuVar3)(pppuVar3,0);
        if ((local_48 & 2) == 0) {
          FUN_1400020a8(local_68[0]);
        }
      }
      local_1a0 = &PTR_FUN_14acc1bb8;
      FUN_144adeafa(&local_108);
    }
    else {
      if (*(int *)(lVar2 + 0x20) < *(int *)(param_1 + 0x30)) goto LAB_147f89998;
      local_198 = 0;
      local_1a0 = &PTR_FUN_14acc1bb8;
      FUN_147f8a99a(local_190,lVar1);
      local_120 = *param_2;
      uStack_118 = param_2[1];
      local_110 = *(undefined4 *)(param_2 + 2);
      local_108 = *param_3;
      uStack_104 = param_3[1];
      uStack_100 = param_3[2];
      uStack_fc = param_3[3];
      local_f8 = param_3[4];
      uStack_f4 = param_3[5];
      uStack_f0 = param_3[6];
      uStack_ec = param_3[7];
      local_e8 = *(undefined8 *)(param_3 + 8);
      FUN_144a3f8b4(local_e0,param_3 + 10);
      FUN_144b1f2a6(local_c0,param_3 + 0x12);
      local_98 = (undefined5)*(undefined8 *)(param_3 + 0x1c);
      uStack_93 = (undefined3)*(undefined8 *)((longlong)param_3 + 0x75);
      uStack_90 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x75) >> 0x18);
      FUN_147f89c00(lVar2,&local_1a0);
      local_1a0 = &PTR_FUN_14acc1bb8;
      FUN_144adeafa(&local_108);
    }
    if (local_150 != 0) {
      FUN_1400020a8();
    }
  }
LAB_147f89998:
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f89c00 FUN_147f89c00 body=235 status=ok
// SIG undefined FUN_147f89c00(void)

longlong FUN_147f89c00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_141314ea8(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  uVar4 = *(undefined4 *)(param_2 + 0xa0);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0xac);
  uVar7 = *(undefined4 *)(param_2 + 0xb0);
  uVar8 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  FUN_1400a241c(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1456c55fa(param_1 + 0xe0,param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0x10d);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x10d) = uVar1;
  return param_1;
}



// FUNCTION 147f89cec FUN_147f89cec body=788 status=ok
// SIG undefined FUN_147f89cec(void)

void FUN_147f89cec(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147f897a7(&local_98);
  lVar8 = FUN_1438b574e(param_2,&local_98);
  if (lVar8 != 0) {
    plVar1 = (longlong *)(lVar8 + 8);
    lStack_50 = lVar8 + 0x18;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (*(int *)(lVar8 + 0x30) != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_48;
    uVar6 = local_80;
    local_78 = local_40;
    local_74 = local_3c;
    local_90 = local_58;
    local_88 = lStack_50;
    local_60 = 0;
    local_80._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_98 = plVar1;
    local_70 = plVar1;
    local_68 = plVar1;
    if (local_80._4_4_ < *(int *)(lStack_50 + 0x18)) {
      iVar10 = local_80._4_4_;
      local_80 = uVar6;
      do {
        lVar8 = *local_98;
        lVar11 = (longlong)iVar10 * 0x70;
        if ((((*(int *)(lVar8 + lVar11) == *(int *)(param_1 + 0x20)) &&
             (*(int *)(lVar8 + 4 + lVar11) == *(int *)(param_1 + 0x24))) &&
            (*(int *)(lVar8 + 8 + lVar11) == *(int *)(param_1 + 0x28))) &&
           (*(int *)(lVar8 + 0xc + lVar11) == *(int *)(param_1 + 0x2c))) {
          uVar4 = *(uint *)(lVar8 + 0x10 + lVar11);
          if ((uVar4 == *(uint *)(param_1 + 0x30)) &&
             (*(int *)(lVar8 + 0x20 + lVar11) != *(int *)(lVar8 + 0x4c + lVar11))) {
            lVar2 = lVar8 + lVar11;
            lVar12 = *(longlong *)(lVar2 + 0x58);
            if (*(longlong *)(lVar2 + 0x58) == 0) {
              lVar12 = lVar2 + 0x50;
            }
            uVar5 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 0x60) - 1U & uVar4) * 4);
            if (uVar5 != 0xffffffff) {
              while (puVar3 = (uint *)(*(longlong *)(lVar8 + lVar11 + 0x18) +
                                      (longlong)(int)uVar5 * 0x14), *puVar3 != uVar4) {
                uVar5 = puVar3[3];
                if (uVar5 == 0xffffffff) goto LAB_147f89f2c;
              }
              if ((puVar3 != (uint *)0x0) && (puVar3 != (uint *)0xfffffffffffffffc)) {
                local_58 = *(undefined8 *)(puVar3 + 1);
                lVar8 = FUN_14479d2ce(&local_58);
                if (lVar8 != 0) {
                  lVar11 = FUN_140b0ae5c();
                  if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
                    local_58 = *(undefined8 *)(param_1 + 0x34);
                    lStack_50 = *(longlong *)(param_1 + 0x3c);
                    if ((lStack_50 == 0) &&
                       (lVar11 = FUN_147f89332(param_1 + 0x48,lVar8), lVar11 != 0)) {
                      local_58 = *(undefined8 *)(lVar11 + 0x48);
                      lStack_50 = *(longlong *)(lVar11 + 0x50);
                    }
                    plVar9 = (longlong *)FUN_147f86d8e(lVar8,param_1 + 0x70);
                    cVar7 = FUN_1438b2c30(lVar8,&local_58,plVar9,0);
                    if ((cVar7 != '\0') &&
                       (FUN_1413e942e(lVar8,plVar9,0), plVar9 != (longlong *)0x0)) {
                      (**(code **)(*plVar9 + 0xaf8))(plVar9,0);
                    }
                  }
                }
                goto LAB_147f89ee0;
              }
            }
          }
LAB_147f89f2c:
          if (((char)local_60 == '\x01') && (local_60._1_1_ == '\x01')) {
            FUN_147f8b864(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
          }
          goto LAB_147f89f3e;
        }
LAB_147f89ee0:
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar10 = local_80._4_4_;
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
      uVar6 = local_80;
      if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
        FUN_147f8b864(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
        uVar6 = local_80;
      }
    }
    local_80 = uVar6;
    FUN_147f8ba68(plVar1);
  }
LAB_147f89f3e:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8a002 FUN_147f8a002 body=1240 status=ok
// SIG undefined FUN_147f8a002(void)

void FUN_147f8a002(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  byte local_fe;
  byte local_fd;
  undefined4 local_fc;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_147f897a7(&local_a0);
  lVar8 = FUN_1438b58a4(param_2,&local_a0);
  lVar10 = param_1 + 0x10;
  uVar5 = FUN_1447addd0(lVar10,0x10);
  uVar12 = (ulonglong)uVar5;
  piVar9 = (int *)FUN_147f8be52(lVar8 + 8,uVar12,lVar10);
  iVar1 = *piVar9;
  local_fd = iVar1 != -1;
  iVar2 = *(int *)(param_1 + 0x20);
  *piVar9 = iVar2;
  iVar6 = (**(code **)(*param_3 + 0x38))(param_3);
  iVar14 = *(int *)(param_1 + 0xbc);
  iVar7 = *(int *)(param_1 + 0xb8);
  fVar21 = 0.0;
  fVar22 = 0.0;
  if (SBORROW4(0,iVar14)) {
    lVar8 = param_1 + 4;
    if (iVar7 == 0) {
      lVar8 = lVar10;
    }
    iVar14 = *(int *)(lVar8 + 0x98);
    fVar22 = *(float *)(lVar8 + 0x9c);
  }
  if (iVar7 == 0) {
    lVar10 = param_1 + 4;
  }
  uVar3 = *(undefined8 *)(lVar10 + 0x98);
  fVar20 = *(float *)(param_1 + 0x70);
  if (0.0 < *(float *)(param_1 + 0x6c) - (*(float *)(param_1 + 0x74) + fVar20)) {
    lVar10 = *(longlong *)(param_1 + 0xb0);
    dVar15 = (double)(int)lVar10;
    dVar16 = (double)(int)((ulonglong)lVar10 >> 0x20);
    dVar18 = (double)((ulonglong)dVar16 & 0x8000000000000000);
    lVar10 = lVar10 >> 0x20;
    fVar19 = (float)(((double)(*(int *)(param_1 + 0x7c) * lVar10) + dVar18) / dVar15);
    fVar17 = (float)(((double)(*(int *)(param_1 + 0x78) * lVar10) + dVar18) / dVar15);
    fVar21 = (float)(((double)(iVar14 * lVar10) + (double)fVar22 * dVar16) / dVar15);
    if (fVar19 <= fVar21) {
      fVar21 = fVar19;
    }
    if (fVar21 <= fVar17) {
      fVar21 = fVar17;
    }
    fVar21 = (float)FUN_1447c7e44(fVar21 - fVar17);
    iVar7 = *(int *)(param_1 + 0xb8);
  }
  local_fe = iVar6 != 1;
  if (iVar6 == 0) {
    local_fc = (undefined4)
               CONCAT71((int7)(uVar12 >> 8),
                        fVar22 != (float)((ulonglong)uVar3 >> 0x20) || iVar14 != (int)uVar3);
  }
  else {
    local_fc = 0;
  }
  FUN_1401abe9c(param_3,&local_b0,param_1 + 0x80,param_1 + 0x90);
  if ((longlong)local_a8 != 0) {
    local_c8 = param_1 + 0x20;
    local_fd = local_fd & iVar1 != iVar2;
    fVar20 = fVar20 + fVar21;
    local_fe = local_fe | iVar7 == 1;
    local_d0 = param_1 + 0x60;
    local_d8 = param_1 + 0x24;
    lVar10 = 0;
    do {
      local_b8 = *(undefined8 *)(local_b0 + lVar10);
      plVar11 = (longlong *)FUN_14479d2ce(&local_b8);
      if ((plVar11 != (longlong *)0x0) && (lVar8 = FUN_147f895ed(plVar11), lVar8 != 0)) {
        local_c0 = 0;
        local_a0 = 0;
        FUN_14485c47a(&local_a0,lVar8);
        local_c0 = local_a0;
        local_a0 = local_c8;
        local_98 = &local_c0;
        FUN_147f8c3ee(piVar9 + 2,local_84,&local_a0);
        local_e8 = *(longlong *)(param_1 + 0x2c);
        local_f0 = 0;
        if ((local_e8 != 0) || (local_f0 = FUN_147f89332(param_1 + 0x38,lVar8), local_f0 != 0)) {
          local_f8 = (longlong *)FUN_147f86d8e(lVar8,local_d0);
          if (local_fd == 0) {
            local_e0 = local_f0 + 0x48;
            if (local_e8 != 0) {
              local_e0 = local_d8;
            }
            cVar4 = FUN_1438b2c30(lVar8,local_e0,local_f8,plVar11);
            if (cVar4 == '\0') goto LAB_147f8a3f8;
            if ((local_fe != 0) ||
               (cVar4 = FUN_1438af556(lVar8,local_e0,local_f8,plVar11), plVar13 = local_f8,
               cVar4 == '\0')) goto LAB_147f8a40b;
          }
          else {
LAB_147f8a3f8:
            FUN_1413e942e(lVar8,local_f8,0);
LAB_147f8a40b:
            plVar13 = local_f8;
            if ((char)local_fc == '\0') {
              if (local_e8 == 0) {
                local_128 = local_128 & 0xffffffffffffff00;
                local_120 = local_f8;
                local_118 = plVar11;
                cVar4 = FUN_141674ebe(lVar8,fVar20,local_fe,local_f0);
              }
              else {
                local_128 = *(ulonglong *)(param_1 + 0x2c);
                local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
                local_118 = local_f8;
                local_110 = plVar11;
                cVar4 = FUN_1438af5e8(lVar8,fVar20,local_fe,*(undefined8 *)(param_1 + 0x24));
              }
              if (cVar4 == '\0') {
                FUN_1413e942e(lVar8,plVar13,0);
              }
            }
            else {
              FUN_1438afbe2(lVar8,local_f8,0);
            }
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0xaf8))(plVar13,0);
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)local_a8 * 8 != lVar10);
  }
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8a4dc FUN_147f8a4dc body=273 status=ok
// SIG undefined FUN_147f8a4dc(void)

void FUN_147f8a4dc(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_145b65622();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      plVar5[0x23] = param_3[4];
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x2c);
      lVar6 = param_3[6];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
      *(int *)(plVar5 + 0x24) = (int)param_3[5];
      *(undefined4 *)((longlong)plVar5 + 0x124) = uVar1;
      *(int *)(plVar5 + 0x25) = (int)lVar6;
      *(undefined4 *)((longlong)plVar5 + 300) = uVar2;
      FUN_144a787a6(plVar5 + 0x26,param_3 + 7);
      lVar6 = param_3[2];
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar3 = param_3[3];
      *(undefined4 *)((longlong)plVar5 + 0x104) = *(undefined4 *)((longlong)param_3 + 0xc);
      *(int *)(plVar5 + 0x21) = (int)lVar6;
      *(undefined4 *)((longlong)plVar5 + 0x10c) = uVar1;
      *(int *)(plVar5 + 0x22) = (int)lVar3;
      plVar5[0x1f] = *param_3;
      *(int *)(plVar5 + 0x20) = (int)param_3[1];
      uVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
      FUN_147f894e8(plVar5,&local_34);
      local_48 = uVar4;
      (**(code **)(*plVar5 + 0x300))(plVar5,param_1 + 0x20,*param_2,local_34);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8a604 FUN_147f8a604 body=136 status=ok
// SIG undefined FUN_147f8a604(void)

longlong FUN_147f8a604(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined **local_a8 [12];
  longlong local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147f8964e(local_a8,param_3,param_1 + -0xf8);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_147f8c890(param_2,local_a8);
  local_a8[0] = &PTR_FUN_14acc1650;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8a696 FUN_147f8a696 body=75 status=ok
// SIG undefined FUN_147f8a696(void)

bool FUN_147f8a696(undefined8 param_1,longlong *param_2)

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
      goto LAB_147f8a6ca;
    }
  }
  lVar2 = 0;
LAB_147f8a6ca:
  lVar1 = FUN_145b65622();
  return lVar2 == lVar1;
}



// FUNCTION 147f8a6e7 FUN_147f8a6e7 body=174 status=ok
// SIG undefined FUN_147f8a6e7(void)

undefined8 FUN_147f8a6e7(undefined8 param_1)

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
  uVar1 = FUN_145b65622();
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



// FUNCTION 147f8a7f0 FUN_147f8a7f0 body=66 status=ok
// SIG undefined FUN_147f8a7f0(void)

void FUN_147f8a7f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_1408617ce((longlong *)(param_1 + 0x100),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 147f8a832 FUN_147f8a832 body=74 status=ok
// SIG undefined FUN_147f8a832(void)

void FUN_147f8a832(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_14757ef30(param_1 + 0x100);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8a87e FUN_147f8a87e body=95 status=ok
// SIG undefined FUN_147f8a87e(void)

void FUN_147f8a87e(longlong param_1,uint param_2)

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
  FUN_147f8c964(param_1 + 0x100);
  return;
}



// FUNCTION 147f8a8fa FUN_147f8a8fa body=53 status=ok
// SIG undefined FUN_147f8a8fa(void)

void FUN_147f8a8fa(void)

{
  FUN_147f8a930();
  if (DAT_14cb26a70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb26a50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f8a930 FUN_147f8a930 body=105 status=ok
// SIG undefined FUN_147f8a930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f8a930(void)

{
  DAT_14cb26a58 = 0;
  if (DAT_14cb26a5c != 0) {
    FUN_140411364(&DAT_14cb26a50,0);
  }
  _DAT_14cb26a80 = 0xffffffff;
  DAT_14cb26a78 = 0;
  if (0x80 < DAT_14cb26a7c) {
    DAT_14cb26a7c = 0x80;
    FUN_1446efbd8(&DAT_14cb26a60,0);
    return;
  }
  return;
}



// FUNCTION 147f8a99a FUN_147f8a99a body=151 status=ok
// SIG undefined FUN_147f8a99a(void)

undefined8 * FUN_147f8a99a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[5] = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  _Src = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  return param_1;
}



// FUNCTION 147f8aa32 FUN_147f8aa32 body=69 status=ok
// SIG undefined FUN_147f8aa32(void)

undefined8 * FUN_147f8aa32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acc1bb8;
  FUN_144adeafa(param_1 + 0x13);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f8aa7a FUN_147f8aa7a body=197 status=ok
// SIG undefined FUN_147f8aa7a(void)

void FUN_147f8aa7a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb26a20;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb26a2c = DAT_14cb26a2c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb26a18 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb26a18 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb26a2c = DAT_14cb26a2c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147f8ab14;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb26a2c = DAT_14cb26a2c + -1;
LAB_147f8ab14:
  FUN_14474d06a(&DAT_14cb26a18,0);
  return;
}



// FUNCTION 147f8ab40 FUN_147f8ab40 body=270 status=ok
// SIG undefined FUN_147f8ab40(void)

void FUN_147f8ab40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))
                              (plVar2,param_2,param_3,param_4,param_5,param_6,param_7),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147f8ac0c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147f8ac0c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147f8ac4e FUN_147f8ac4e body=138 status=ok
// SIG undefined FUN_147f8ac4e(void)

int FUN_147f8ac4e(uint param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  
  if (DAT_14cb26a58 != DAT_14cb26a84) {
    puVar3 = &DAT_14cb26a88;
    if (DAT_14cb26a90 != (undefined *)0x0) {
      puVar3 = DAT_14cb26a90;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cb26a98 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(DAT_14cb26a50 + lVar2) == *param_2) &&
             (*(int *)(DAT_14cb26a50 + 4 + lVar2) == param_2[1])) &&
            (*(int *)(DAT_14cb26a50 + 8 + lVar2) == param_2[2])) &&
           (*(int *)(DAT_14cb26a50 + 0xc + lVar2) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + DAT_14cb26a50 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147f8acd8 FUN_147f8acd8 body=315 status=ok
// SIG undefined FUN_147f8acd8(void)

undefined4 * FUN_147f8acd8(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147f8ae14(local_40);
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *local_38 = *puVar1;
  local_38[1] = uVar4;
  local_38[2] = uVar5;
  local_38[3] = uVar6;
  local_38[4] = *puVar2;
  local_38[5] = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = FUN_1447addd0(local_38,0x10);
  cVar7 = FUN_147f8af34(uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar7 == '\0') {
    uVar9 = DAT_14cb26a58 - DAT_14cb26a84;
    iVar12 = 1;
    if (3 < uVar9) {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= DAT_14cb26a98)) {
      uVar8 = DAT_14cb26a98 - 1U & uVar8;
      local_38[6] = uVar8;
      puVar10 = DAT_14cb26a90;
      if (DAT_14cb26a90 == (undefined *)0x0) {
        puVar10 = &DAT_14cb26a88;
      }
      local_38[5] = *(undefined4 *)
                     (puVar10 + ((longlong)DAT_14cb26a98 - 1U & (longlong)(int)uVar8) * 4);
      puVar10 = DAT_14cb26a90;
      if (DAT_14cb26a90 == (undefined *)0x0) {
        puVar10 = &DAT_14cb26a88;
      }
      *(undefined4 *)(puVar10 + ((longlong)DAT_14cb26a98 - 1U & (longlong)(int)uVar8) * 4) =
           local_44;
    }
    else {
      DAT_14cb26a98 = iVar12;
      FUN_147f8b028();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8ae14 FUN_147f8ae14 body=287 status=ok
// SIG undefined FUN_147f8ae14(void)

int * FUN_147f8ae14(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb26a80;
  iVar4 = DAT_14cb26a58;
  if (DAT_14cb26a84 == 0) {
    iVar2 = DAT_14cb26a58 + 1;
    bVar7 = DAT_14cb26a5c == DAT_14cb26a58;
    DAT_14cb26a58 = iVar2;
    if (bVar7) {
      FUN_1406245f8(&DAT_14cb26a50,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb26a60,1);
    puVar3 = DAT_14cb26a70;
    if (DAT_14cb26a70 == (undefined *)0x0) {
      puVar3 = &DAT_14cb26a60;
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
    lVar6 = (longlong)DAT_14cb26a80;
    DAT_14cb26a80 = *(int *)(DAT_14cb26a50 + 4 + lVar6 * 0x1c);
    DAT_14cb26a84 = DAT_14cb26a84 + -1;
    iVar4 = iVar2;
    if (DAT_14cb26a84 != 0) {
      *(undefined4 *)(DAT_14cb26a50 + (longlong)DAT_14cb26a80 * 0x1c) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb26a60;
  if (DAT_14cb26a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb26a70;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x1c + DAT_14cb26a50;
  return param_1;
}



// FUNCTION 147f8af34 FUN_147f8af34 body=100 status=ok
// SIG undefined FUN_147f8af34(void)

undefined8 FUN_147f8af34(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  if ((DAT_14cb26a58 - DAT_14cb26a84 != 1) &&
     (iVar7 = FUN_147f8ac4e(), lVar6 = DAT_14cb26a50, iVar7 != -1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(DAT_14cb26a50 + 0x10 + (longlong)iVar7 * 0x1c) = param_2[4];
    puVar1 = (undefined4 *)(lVar6 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147f8af98(*param_3);
    *param_3 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147f8af98 FUN_147f8af98 body=143 status=ok
// SIG undefined FUN_147f8af98(void)

void FUN_147f8af98(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb26a50;
  if (DAT_14cb26a84 != 0) {
    *(int *)(DAT_14cb26a50 + (longlong)DAT_14cb26a80 * 0x1c) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x1c) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb26a84) {
    iVar4 = DAT_14cb26a80;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x1c) = iVar4;
  DAT_14cb26a84 = DAT_14cb26a84 + 1;
  puVar3 = &DAT_14cb26a60;
  if (DAT_14cb26a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb26a70;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb26a80 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147f8b028 FUN_147f8b028 body=489 status=ok
// SIG undefined FUN_147f8b028(void)

void FUN_147f8b028(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26a90 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb26a90,0,0,4);
  }
  uVar3 = DAT_14cb26a98;
  uVar4 = local_60;
  if (DAT_14cb26a98 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14cb26a88,0,DAT_14cb26a98,4);
    if (0 < (int)uVar3) {
      do {
        puVar8 = DAT_14cb26a90;
        if (DAT_14cb26a90 == (undefined *)0x0) {
          puVar8 = &DAT_14cb26a88;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cb26a98 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb26a60;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb26a78 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb26a50;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar4 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar5 = local_60._4_4_;
      local_60 = uVar4;
      do {
        lVar1 = *local_78;
        lVar2 = (longlong)iVar5 * 0x1c;
        iVar6 = FUN_1447addd0(lVar1 + lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)DAT_14cb26a98 - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar1 + 0x18 + lVar2) = iVar6;
        puVar8 = DAT_14cb26a90;
        if (DAT_14cb26a90 == (undefined *)0x0) {
          puVar8 = &DAT_14cb26a88;
        }
        *(undefined4 *)(lVar1 + 0x14 + lVar2) =
             *(undefined4 *)(puVar8 + ((longlong)(int)DAT_14cb26a98 - 1U & uVar7) * 4);
        puVar8 = DAT_14cb26a90;
        if (DAT_14cb26a90 == (undefined *)0x0) {
          puVar8 = &DAT_14cb26a88;
        }
        *(int *)(puVar8 + ((longlong)iVar6 & (longlong)(int)DAT_14cb26a98 - 1U) * 4) = iVar5;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8b212 FUN_147f8b212 body=311 status=ok
// SIG undefined FUN_147f8b212(void)

undefined4 *
FUN_147f8b212(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147f8b34a(param_1,local_50);
  uVar1 = param_3[1];
  *local_48 = *(uint *)*param_3;
  FUN_147568368(local_48 + 2,uVar1);
  local_48[0xc] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_147f8b42c(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147f8b572(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8b34a FUN_147f8b34a body=226 status=ok
// SIG undefined FUN_147f8b34a(void)

int * FUN_147f8b34a(longlong *param_1,int *param_2)

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



// FUNCTION 147f8b42c FUN_147f8b42c body=188 status=ok
// SIG undefined FUN_147f8b42c(void)

void FUN_147f8b42c(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          FUN_14755f982(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147f8b4e8(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          goto LAB_147f8b49b;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  uVar13 = 0;
LAB_147f8b49b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 147f8b4e8 FUN_147f8b4e8 body=138 status=ok
// SIG undefined FUN_147f8b4e8(void)

void FUN_147f8b4e8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f8b572 FUN_147f8b572 body=419 status=ok
// SIG undefined FUN_147f8b572(void)

void FUN_147f8b572(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 147f8b716 FUN_147f8b716 body=334 status=ok
// SIG undefined FUN_147f8b716(void)

undefined8 * FUN_147f8b716(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = &PTR_LAB_14acc1bc8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14acc1bb8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar1;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar10;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar9;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  uVar4 = *(undefined4 *)(param_2 + 0xa4);
  uVar5 = *(undefined4 *)(param_2 + 0xa8);
  uVar6 = *(undefined4 *)(param_2 + 0xac);
  uVar7 = *(undefined4 *)(param_2 + 0xb0);
  uVar8 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0x16) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar8;
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x1a] = 0;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  FUN_144b1f34a(param_1 + 0x1c,param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0x10d);
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x10d) = uVar1;
  return param_1;
}



// FUNCTION 147f8b864 FUN_147f8b864 body=68 status=ok
// SIG undefined FUN_147f8b864(void)

void FUN_147f8b864(longlong param_1,uint param_2)

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
  FUN_147f8b8a8(param_1);
  return;
}



// FUNCTION 147f8b8a8 FUN_147f8b8a8 body=446 status=ok
// SIG undefined FUN_147f8b8a8(void)

void FUN_147f8b8a8(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x70;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x6c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x68 + lVar10) =
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



// FUNCTION 147f8ba68 FUN_147f8ba68 body=63 status=ok
// SIG undefined FUN_147f8ba68(void)

void FUN_147f8ba68(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147f8bbec(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147f8b8a8(param_1);
    return;
  }
  FUN_147f8baa8(param_1);
  FUN_147f8bbec(param_1);
  return;
}



// FUNCTION 147f8baa8 FUN_147f8baa8 body=322 status=ok
// SIG undefined FUN_147f8baa8(void)

void FUN_147f8baa8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 147f8bbec FUN_147f8bbec body=345 status=ok
// SIG undefined FUN_147f8bbec(void)

void FUN_147f8bbec(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_147f8bd46(lVar2 + lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
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



// FUNCTION 147f8bd46 FUN_147f8bd46 body=52 status=ok
// SIG undefined FUN_147f8bd46(void)

void FUN_147f8bd46(longlong *param_1)

{
  FUN_147f8bd7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f8bd7a FUN_147f8bd7a body=89 status=ok
// SIG undefined FUN_147f8bd7a(void)

void FUN_147f8bd7a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 147f8bdd4 FUN_147f8bdd4 body=73 status=ok
// SIG undefined FUN_147f8bdd4(void)

undefined8 * FUN_147f8bdd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acc1bd8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147f8be1e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f8be1e FUN_147f8be1e body=52 status=ok
// SIG undefined FUN_147f8be1e(void)

void FUN_147f8be1e(longlong *param_1)

{
  FUN_147f8bbec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f8be52 FUN_147f8be52 body=133 status=ok
// SIG undefined FUN_147f8be52(void)

longlong FUN_147f8be52(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147f8bed8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x70;
    if (lVar3 + lVar2 != 0) goto LAB_147f8be8b;
  }
  local_30 = param_3;
  FUN_147f8bf4c(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x70;
LAB_147f8be8b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8bed8 FUN_147f8bed8 body=115 status=ok
// SIG undefined FUN_147f8bed8(void)

int FUN_147f8bed8(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x70;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x68);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147f8bf4c FUN_147f8bf4c body=272 status=ok
// SIG undefined FUN_147f8bf4c(void)

undefined4 * FUN_147f8bf4c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_147f8c05e(param_1,local_48);
  FUN_147f8c1c6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x68) = 0xffffffff;
  cVar1 = FUN_147f8c140(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x6c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x68) =
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
      FUN_147f8b8a8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8c05e FUN_147f8c05e body=226 status=ok
// SIG undefined FUN_147f8c05e(void)

int * FUN_147f8c05e(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 147f8c140 FUN_147f8c140 body=134 status=ok
// SIG undefined FUN_147f8c140(void)

undefined8 FUN_147f8c140(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147f8bed8(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x70;
    *(undefined4 *)(lVar1 + 0x60 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x58 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_147f8bd46(lVar1 + lVar3 + 0x18);
    memmove((void *)(lVar1 + lVar3),param_3,0x68);
    FUN_147f8c37a(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 147f8c1c6 FUN_147f8c1c6 body=165 status=ok
// SIG undefined FUN_147f8c1c6(void)

undefined4 * FUN_147f8c1c6(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0xffffffff;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  puVar1 = (undefined4 *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = 0xffffffff;
  FUN_147f8c26c(param_2 + 6,&local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_147f8bd46(&local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8c26c FUN_147f8c26c body=123 status=ok
// SIG undefined FUN_147f8c26c(void)

undefined8 * FUN_147f8c26c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147f8c2e8();
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



// FUNCTION 147f8c2e8 FUN_147f8c2e8 body=146 status=ok
// SIG undefined FUN_147f8c2e8(void)

longlong * FUN_147f8c2e8(longlong *param_1,longlong *param_2)

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



// FUNCTION 147f8c37a FUN_147f8c37a body=116 status=ok
// SIG undefined FUN_147f8c37a(void)

void FUN_147f8c37a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 147f8c3ee FUN_147f8c3ee body=287 status=ok
// SIG undefined FUN_147f8c3ee(void)

undefined4 * FUN_147f8c3ee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f8c50e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147f8c5f4(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
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
      local_40[4] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147f8c6ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8c50e FUN_147f8c50e body=230 status=ok
// SIG undefined FUN_147f8c50e(void)

int * FUN_147f8c50e(longlong *param_1,int *param_2)

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



// FUNCTION 147f8c5f4 FUN_147f8c5f4 body=134 status=ok
// SIG undefined FUN_147f8c5f4(void)

undefined8 FUN_147f8c5f4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_147f8c67a(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147f8c67a FUN_147f8c67a body=114 status=ok
// SIG undefined FUN_147f8c67a(void)

void FUN_147f8c67a(longlong *param_1,int param_2)

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



// FUNCTION 147f8c6ec FUN_147f8c6ec body=419 status=ok
// SIG undefined FUN_147f8c6ec(void)

void FUN_147f8c6ec(longlong *param_1)

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



// FUNCTION 147f8c890 FUN_147f8c890 body=212 status=ok
// SIG undefined FUN_147f8c890(void)

void FUN_147f8c890(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar5 = (undefined8 *)FUN_14001cc68(0x90,8);
  *param_1 = puVar5;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar5;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14acc1650;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar2;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar4;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}



// FUNCTION 147f8c964 FUN_147f8c964 body=62 status=ok
// SIG undefined FUN_147f8c964(void)

void FUN_147f8c964(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147f8c9a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147f8c9a2 FUN_147f8c9a2 body=93 status=ok
// SIG undefined FUN_147f8c9a2(void)

ulonglong FUN_147f8c9a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147f8c9ff FUN_147f8c9ff body=55 status=ok
// SIG undefined FUN_147f8c9ff(void)

void FUN_147f8c9ff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb26ac8 == 0) {
    uVar1 = FUN_140f546ac();
    DAT_14cb26ac8 = FUN_14171c317(FUN_14644a5a9,uVar1,L"EPlayerMappableKeySlot");
  }
  return;
}



// FUNCTION 147f8ca5c FUN_147f8ca5c body=365 status=ok
// SIG undefined FUN_147f8ca5c(void)

void FUN_147f8ca5c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [24];
  longlong *local_d0;
  undefined1 local_c0 [136];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14644deda(local_c0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar4 = local_c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_140e42d26(local_e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar5 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 0x2e8))(param_1,puVar4,puVar5);
  *param_3 = uVar3;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  FUN_1438b5fe0(local_c0);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8cbe4 FUN_147f8cbe4 body=295 status=ok
// SIG undefined FUN_147f8cbe4(void)

void FUN_147f8cbe4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,local_30,plVar2);
  *param_3 = uVar1;
  FUN_144a65a1e(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8cd0c FUN_147f8cd0c body=351 status=ok
// SIG undefined FUN_147f8cd0c(void)

void FUN_147f8cd0c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  local_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar4 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,plVar4,plVar3);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8ce6c FUN_147f8ce6c body=45 status=ok
// SIG undefined FUN_147f8ce6c(void)

void FUN_147f8ce6c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145827b58();
  FUN_147f975f0(param_3,uVar1);
  return;
}



// FUNCTION 147f8ce9a FUN_147f8ce9a body=87 status=ok
// SIG undefined FUN_147f8ce9a(void)

void FUN_147f8ce9a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_147fa0b68();
  plVar1 = (longlong *)*plVar3;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != plVar1) {
    *param_3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_3 + 1) = (int)plVar3[1];
  return;
}



// FUNCTION 147f8cf0a FUN_147f8cf0a body=351 status=ok
// SIG undefined FUN_147f8cf0a(void)

void FUN_147f8cf0a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  longlong *local_d8;
  undefined1 local_b8 [136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14644deda(local_b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar3 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_147fa0330(local_f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar4 = local_f8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147fa1604(param_1,puVar3,puVar4);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  FUN_1438b5fe0(local_b8);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d06a FUN_147f8d06a body=357 status=ok
// SIG undefined FUN_147f8d06a(void)

void FUN_147f8d06a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [24];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e42d26(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar4 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1,puVar4,plVar3);
  *param_3 = uVar2;
  FUN_144a65a1e(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d1d0 FUN_147f8d1d0 body=156 status=ok
// SIG undefined FUN_147f8d1d0(void)

void FUN_147f8d1d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_147fa0b6e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d288 FUN_147f8d288 body=193 status=ok
// SIG undefined FUN_147f8d288(void)

void FUN_147f8d288(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d34a FUN_147f8d34a body=143 status=ok
// SIG undefined FUN_147f8d34a(void)

void FUN_147f8d34a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_28);
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



// FUNCTION 147f8d3de FUN_147f8d3de body=75 status=ok
// SIG undefined FUN_147f8d3de(void)

void FUN_147f8d3de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147fa13b6(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d430 FUN_147f8d430 body=62 status=ok
// SIG undefined FUN_147f8d430(void)

void FUN_147f8d430(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d4a4 FUN_147f8d4a4 body=203 status=ok
// SIG undefined FUN_147f8d4a4(void)

void FUN_147f8d4a4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146201a7c(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x318))(param_1,puVar2);
  *param_3 = uVar1;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d570 FUN_147f8d570 body=176 status=ok
// SIG undefined FUN_147f8d570(void)

void FUN_147f8d570(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,local_28);
  FUN_147f8d622(param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d622 FUN_147f8d622 body=122 status=ok
// SIG undefined FUN_147f8d622(void)

longlong FUN_147f8d622(longlong param_1,longlong param_2)

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
    FUN_147f98e7a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f8d69c FUN_147f8d69c body=46 status=ok
// SIG undefined FUN_147f8d69c(void)

void FUN_147f8d69c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 800))(param_1,param_1 + 0xe);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f8d6ca FUN_147f8d6ca body=45 status=ok
// SIG undefined FUN_147f8d6ca(void)

void FUN_147f8d6ca(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x310))();
  *param_3 = *puVar1;
  return;
}



// FUNCTION 147f8d6f8 FUN_147f8d6f8 body=181 status=ok
// SIG undefined FUN_147f8d6f8(void)

void FUN_147f8d6f8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 800))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d7b4 FUN_147f8d7b4 body=163 status=ok
// SIG undefined FUN_147f8d7b4(void)

void FUN_147f8d7b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fa1bd6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d858 FUN_147f8d858 body=369 status=ok
// SIG undefined FUN_147f8d858(void)

void FUN_147f8d858(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88 [4];
  undefined1 local_68 [32];
  longlong *local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147fa0330(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,puVar2,plVar3);
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8d9d0 FUN_147f8d9d0 body=167 status=ok
// SIG undefined FUN_147f8d9d0(void)

void FUN_147f8d9d0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x328))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8da7e FUN_147f8da7e body=246 status=ok
// SIG undefined FUN_147f8da7e(void)

void FUN_147f8da7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fa1818(param_1,puVar2);
  *param_3 = uVar1;
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147f9904a(&local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8db76 FUN_147f8db76 body=369 status=ok
// SIG undefined FUN_147f8db76(void)

void FUN_147f8db76(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88 [4];
  undefined1 local_68 [32];
  longlong *local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147fa0330(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2e8))(param_1,puVar2,plVar3);
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8dce8 FUN_147f8dce8 body=319 status=ok
// SIG undefined FUN_147f8dce8(void)

void FUN_147f8dce8(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2f0))(param_1,puVar1,plVar2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8de48 FUN_147f8de48 body=180 status=ok
// SIG undefined FUN_147f8de48(void)

void FUN_147f8de48(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x308))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8defe FUN_147f8defe body=369 status=ok
// SIG undefined FUN_147f8defe(void)

void FUN_147f8defe(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88 [4];
  undefined1 local_68 [32];
  longlong *local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147fa0330(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2e0))(param_1,puVar2,plVar3);
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8e076 FUN_147f8e076 body=167 status=ok
// SIG undefined FUN_147f8e076(void)

void FUN_147f8e076(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x330))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8e124 FUN_147f8e124 body=246 status=ok
// SIG undefined FUN_147f8e124(void)

void FUN_147f8e124(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147fa1abc(param_1,puVar2);
  *param_3 = uVar1;
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147f9904a(&local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8e21e FUN_147f8e21e body=75 status=ok
// SIG undefined FUN_147f8e21e(void)

void FUN_147f8e21e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1438c1786(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8e276 FUN_147f8e276 body=124 status=ok
// SIG undefined FUN_147f8e276(void)

undefined8 FUN_147f8e276(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[4];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (((param_1[4] == lVar1) && (param_1[5] == param_2[5])) &&
     (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))) {
    cVar2 = FUN_147f990d7(*param_1,*param_2);
    if ((cVar2 != '\0') && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) {
      uVar3 = FUN_147f9913e(param_1[2],param_2[2]);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147f8e2fa FUN_147f8e2fa body=134 status=ok
// SIG undefined FUN_147f8e2fa(void)

void FUN_147f8e2fa(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_14119cfbe();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = 0;
      do {
        FUN_147f8e380(param_2,*(undefined8 *)(lVar2 + lVar3),*(undefined1 *)(lVar2 + 8 + lVar3),
                      param_3,*(undefined8 *)(lVar2 + 0xc + lVar3));
        lVar3 = lVar3 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar3);
    }
  }
  return;
}



// FUNCTION 147f8e380 FUN_147f8e380 body=200 status=ok
// SIG undefined FUN_147f8e380(void)

void FUN_147f8e380(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar1 = DAT_14c762760 + 1;
  *(int *)(puVar2 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar1;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,param_2);
  *(undefined1 *)(puVar2 + 3) = param_3;
  *puVar2 = &PTR_FUN_14accfde0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_147f983f6(puVar2 + 4,param_4,param_5);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 147f8e448 FUN_147f8e448 body=109 status=ok
// SIG undefined FUN_147f8e448(void)

void FUN_147f8e448(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_14119cfbe();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = 0;
      do {
        FUN_147f8e4b6(param_2,*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar3);
    }
  }
  return;
}



// FUNCTION 147f8e4b6 FUN_147f8e4b6 body=297 status=ok
// SIG undefined FUN_147f8e4b6(void)

longlong FUN_147f8e4b6(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [48];
  int local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x1b0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = (longlong)*(int *)(param_1 + 0x1b0) * 0x38;
    do {
      lVar4 = FUN_14479d2ce(lVar5 + 0x10);
      if (lVar4 == param_2) {
        if (lVar5 != 0) goto LAB_147f8e5a6;
        break;
      }
      lVar5 = lVar5 + 0x38;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  local_58 = DAT_14c762760;
  local_50 = 0;
  DAT_14c762760 = DAT_14c762760 + 1;
  FUN_14485c47a(&local_50,param_2);
  uStack_38 = DAT_14c8464f0;
  uStack_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_30 = 0;
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar3 + 1U) {
    FUN_147f98790((longlong *)(param_1 + 0x1a8),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1a8);
  lVar4 = (longlong)iVar3 * 0x38;
  lVar5 = lVar6 + lVar4;
  *(int *)(lVar6 + 8 + lVar4) = local_58;
  *(undefined ***)(lVar6 + lVar4) = &PTR_FUN_14accfe28;
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_50;
  puVar1[1] = local_50._4_4_;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar4);
  *puVar2 = CONCAT44(uStack_3c,uStack_40);
  puVar2[1] = uStack_38;
  *(ulonglong *)(lVar6 + 0x30 + lVar4) = CONCAT71(uStack_2f,local_30);
LAB_147f8e5a6:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147f8e5e0 FUN_147f8e5e0 body=183 status=ok
// SIG undefined FUN_147f8e5e0(void)

void FUN_147f8e5e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f8e698(param_1,&local_48,local_28);
  param_3[4] = local_38;
  param_3[5] = uStack_34;
  param_3[6] = uStack_30;
  param_3[7] = uStack_2c;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8e698 FUN_147f8e698 body=180 status=ok
// SIG undefined FUN_147f8e698(void)

undefined8 * FUN_147f8e698(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x1b0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1a8) + 0x10;
    lVar7 = (longlong)*(int *)(param_1 + 0x1b0) * 0x38;
    do {
      lVar5 = FUN_14479d2ce(lVar6);
      if (lVar5 == param_3) {
        uVar2 = *(undefined8 *)(lVar6 + 8);
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        uVar4 = *(undefined8 *)(lVar6 + 0x20);
        param_2[2] = *(undefined8 *)(lVar6 + 0x18);
        param_2[3] = uVar4;
        *param_2 = uVar2;
        param_2[1] = uVar3;
        return param_2;
      }
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  if (param_3 == 0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
    *(undefined1 *)(param_2 + 3) = 3;
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x48);
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
    *(byte *)(param_2 + 3) = bVar1;
    if (bVar1 < 2) {
      param_2[1] = 0;
    }
    else if (bVar1 != 2) {
      return param_2;
    }
    param_2[2] = 0;
  }
  return param_2;
}



// FUNCTION 147f8e750 FUN_147f8e750 body=26 status=ok
// SIG undefined FUN_147f8e750(void)

void FUN_147f8e750(undefined8 param_1)

{
  FUN_1479e0b5a();
  FUN_147f8e76a(param_1);
  return;
}



// FUNCTION 147f8e76a FUN_147f8e76a body=86 status=ok
// SIG undefined FUN_147f8e76a(void)

void FUN_147f8e76a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a4);
  FUN_140ffc04b(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x1a0));
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1a4) != 0)) {
    FUN_147f9883e(param_1 + 0x198,0);
    return;
  }
  return;
}



// FUNCTION 147f8e7c0 FUN_147f8e7c0 body=103 status=ok
// SIG undefined FUN_147f8e7c0(void)

undefined8 FUN_147f8e7c0(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 0) || (iVar3 = (int)param_1[1], iVar3 <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    puVar2 = *(undefined8 **)(lVar1 + (ulonglong)param_2 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      iVar3 = (int)param_1[1];
    }
    if (~param_2 + iVar3 != 0) {
      _Dst = (void *)(lVar1 + (ulonglong)param_2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
    uVar4 = CONCAT71((uint7)(uint3)((uint)(iVar3 + -1) >> 8),1);
  }
  return uVar4;
}



// FUNCTION 147f8e828 FUN_147f8e828 body=8 status=ok
// SIG undefined FUN_147f8e828(void)

void FUN_147f8e828(undefined8 param_1,longlong param_2)

{
  FUN_140b4b2ee(param_1,*(undefined4 *)(param_2 + 8));
  return;
}



// FUNCTION 147f8e878 FUN_147f8e878 body=596 status=ok
// SIG undefined FUN_147f8e878(void)

void FUN_147f8e878(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  puVar5 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = *(undefined8 **)(param_2 + 0x38);
  local_70 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  local_71 = 0;
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  uVar4 = local_40;
  uVar3 = local_48;
  puVar5 = &local_70;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  puVar6 = &local_68;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = puVar7;
  }
  puVar7 = &local_60;
  if (puVar1 != (undefined8 *)0x0) {
    puVar7 = puVar1;
  }
  puVar8 = &local_71;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_4c,uStack_50);
  *puVar7 = CONCAT44(uStack_54,local_58);
  *puVar6 = uVar2;
  *puVar5 = uVar3;
  *puVar8 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8eace FUN_147f8eace body=180 status=ok
// SIG undefined FUN_147f8eace(void)

void FUN_147f8eace(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)(float)(double)CONCAT44(uStack_34,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8eb84 FUN_147f8eb84 body=171 status=ok
// SIG undefined FUN_147f8eb84(void)

void FUN_147f8eb84(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8ec30 FUN_147f8ec30 body=180 status=ok
// SIG undefined FUN_147f8ec30(void)

void FUN_147f8ec30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_3 + 4) = local_28;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8ecec FUN_147f8ecec body=212 status=ok
// SIG undefined FUN_147f8ecec(void)

void FUN_147f8ecec(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       9.99999905104687e-09 <=
       local_28 * local_28 +
       (double)CONCAT44(uStack_34,local_38) * (double)CONCAT44(uStack_34,local_38) +
       (double)CONCAT44(uStack_2c,uStack_30) * (double)CONCAT44(uStack_2c,uStack_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8edc2 FUN_147f8edc2 body=255 status=ok
// SIG undefined FUN_147f8edc2(void)

void FUN_147f8edc2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  uStack_20 = uStack_20 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = (undefined4)local_28;
  uStack_54 = local_28._4_4_;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_147f8eec2(&local_48);
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
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8eec2 FUN_147f8eec2 body=216 status=ok
// SIG undefined FUN_147f8eec2(void)

undefined8 * FUN_147f8eec2(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  wchar_t *pwVar3;
  
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    pwVar3 = L"false";
    if (9.99999905104687e-09 <=
        param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]) {
      pwVar3 = L"true";
    }
    FUN_140056680(param_1,pwVar3);
    break;
  case 1:
    FUN_140002266(param_1,L"%3.3f",*param_2);
    break;
  case 2:
    dVar1 = *param_2;
    dVar2 = param_2[1];
    pwVar3 = L"X=%3.3f Y=%3.3f";
    goto LAB_147f8ef5b;
  case 3:
    dVar1 = *param_2;
    dVar2 = param_2[1];
    pwVar3 = L"X=%3.3f Y=%3.3f Z=%3.3f";
LAB_147f8ef5b:
    FUN_140002266(param_1,pwVar3,dVar1,dVar2);
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 147f8ef9a FUN_147f8ef9a body=216 status=ok
// SIG undefined FUN_147f8ef9a(void)

void FUN_147f8ef9a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f9f9fc(&local_30,local_19);
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



// FUNCTION 147f8f074 FUN_147f8f074 body=157 status=ok
// SIG undefined FUN_147f8f074(void)

void FUN_147f8f074(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xcf8))();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8f112 FUN_147f8f112 body=265 status=ok
// SIG undefined FUN_147f8f112(void)

void FUN_147f8f112(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1438b6186(&local_48,local_20,local_28);
  param_3[4] = local_38;
  param_3[5] = uStack_34;
  param_3[6] = uStack_30;
  param_3[7] = uStack_2c;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8f250 FUN_147f8f250 body=358 status=ok
// SIG undefined FUN_147f8f250(void)

void FUN_147f8f250(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ushort local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  plVar3 = DAT_14c966e90;
  local_48 = DAT_14c966e88;
  local_50 = DAT_14c966e80;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_30 = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_40 = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = (ushort)((byte)local_38 & 0xfc);
    local_30 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14022188c(puVar4,&local_80);
  *param_3 = local_80;
  FUN_14181bc4c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8f3b8 FUN_147f8f3b8 body=338 status=ok
// SIG undefined FUN_147f8f3b8(void)

void FUN_147f8f3b8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ushort local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  plVar3 = DAT_14c966e90;
  local_48 = DAT_14c966e88;
  local_50 = DAT_14c966e80;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_30 = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_40 = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = (ushort)((byte)local_38 & 0xfc);
    local_30 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1402218d6(puVar5);
  *param_3 = uVar4;
  FUN_14181bc4c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8f546 FUN_147f8f546 body=341 status=ok
// SIG undefined FUN_147f8f546(void)

void FUN_147f8f546(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ushort local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  plVar3 = DAT_14c966e90;
  local_48 = DAT_14c966e88;
  local_50 = DAT_14c966e80;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_30 = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_40 = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = (ushort)((byte)local_38 & 0xfc);
    local_30 = 0;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = FUN_1402218d6(puVar5);
  *(bool *)param_3 = lVar4 != 0;
  FUN_14181bc4c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8f69c FUN_147f8f69c body=476 status=ok
// SIG undefined FUN_147f8f69c(void)

void FUN_147f8f69c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = DAT_14c8464f0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  bVar1 = *(byte *)(puVar2 + 3);
  if (bVar1 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = local_28;
    uVar4 = local_30;
    if (bVar1 != 2) goto LAB_147f8f7aa;
  }
  uVar4 = 0;
LAB_147f8f7aa:
  *param_3 = local_20;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  *(byte *)(param_3 + 3) = bVar1;
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8f87a FUN_147f8f87a body=435 status=ok
// SIG undefined FUN_147f8f87a(void)

void FUN_147f8f87a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [39];
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a49fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_31 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = local_28;
    uVar2 = local_30;
    if (local_31 != 2) goto LAB_147f8f95f;
  }
  uVar2 = 0;
LAB_147f8f95f:
  *param_3 = local_20;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  *(byte *)(param_3 + 3) = local_31;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f8fa34 FUN_147f8fa34 body=268 status=ok
// SIG undefined FUN_147f8fa34(void)

void FUN_147f8fa34(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_28 = local_3c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_18 = &local_30;
  local_30 = local_38;
  local_20 = FUN_1438bada8;
  FUN_14032f414();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8fb44 FUN_147f8fb44 body=187 status=ok
// SIG undefined FUN_147f8fb44(void)

longlong * FUN_147f8fb44(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_145a777a0();
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_58 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(uVar2,&local_40,param_3,param_2);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8fc00 FUN_147f8fc00 body=504 status=ok
// SIG undefined FUN_147f8fc00(void)

void FUN_147f8fc00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_140636ec6(param_3);
  if (lVar2 == 0) goto LAB_147f8fcad;
  if (*(int *)(param_2 + 1) == 0) {
    pwVar5 = 
    L"Expected arguments:\\n   <action> - Name of action to force each tick\\n   <value> - Value to apply. Valid examples are: true, 0.4, \"X=1.0, Y=-2.0\", \"X=0.1, Y=0.2, Z=0.3\""
    ;
LAB_147f8fc82:
    FUN_140056680(&local_40,pwVar5);
    FUN_1417e897c(lVar2,&local_40,0,0);
  }
  else {
    if (*(longlong *)(lVar2 + 0x508) == 0) {
LAB_147f8fc7b:
      pwVar5 = L"Player controller is not using the Enhanced Input system.";
      goto LAB_147f8fc82;
    }
    lVar3 = FUN_140334ca4();
    if ((((*(longlong *)(lVar2 + 0x508) == 0) || (lVar3 == 0)) ||
        (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x508) + 0x10), lVar1 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) goto LAB_147f8fc7b;
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)*param_2;
    }
    uVar4 = FUN_140e70da6();
    local_98 = L"EnableForcedAction";
    lVar3 = FUN_140277cc4(uVar4,puVar6,0,3);
    if (lVar3 != 0) {
      lVar2 = FUN_144a7ba4c(lVar2);
      if (lVar2 != 0) {
        lVar2 = FUN_1400b6e86(lVar2);
        if (lVar2 != 0) {
          local_90 = 0x3ff0000000000000;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          FUN_147f98a42(local_70,param_2);
          local_40 = &local_48;
          local_48 = lVar3;
          local_38 = local_70;
          FUN_147f9b22a(lVar2 + 0x38,local_2c);
        }
      }
      goto LAB_147f8fcad;
    }
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)*param_2;
    }
    FUN_1446f470e(&local_50,puVar6,1);
    FUN_140056680(&local_40,L"Failed to find action \'%s\'.");
    FUN_1417e897c(lVar2,&local_40,local_50,0);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147f8fcad:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8fdfa FUN_147f8fdfa body=360 status=ok
// SIG undefined FUN_147f8fdfa(void)

void FUN_147f8fdfa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140636ec6(param_3);
  if (lVar1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      FUN_140056680(local_30,L"Expected arguments:\\n   <action> - Name of action to stop forcing");
      FUN_1417e897c(lVar1,local_30,0,0);
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = *(undefined2 **)*param_2;
      }
      uVar2 = FUN_140e70da6();
      local_48 = L"DisableForcedAction";
      lVar3 = FUN_140277cc4(uVar2,puVar4,0,3);
      if (lVar3 != 0) {
        lVar1 = FUN_144a7ba4c(lVar1);
        if (lVar1 != 0) {
          lVar1 = FUN_1400b6e86(lVar1);
          if (lVar1 != 0) {
            local_30[0] = 0;
            FUN_14485c47a(local_30,lVar3);
            FUN_147f9bec2(lVar1 + 0x38,local_30[0]);
          }
        }
        goto LAB_147f8fee6;
      }
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = *(undefined2 **)*param_2;
      }
      FUN_1446f470e(&local_38,puVar4,1);
      FUN_140056680(local_30,L"Failed to find action \'%s\'.");
      FUN_1417e897c(lVar1,local_30,local_38,0);
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_147f8fee6:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f8ff64 FUN_147f8ff64 body=493 status=ok
// SIG undefined FUN_147f8ff64(void)

void FUN_147f8ff64(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 local_70 [32];
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_140636ec6(param_3);
  if (lVar5 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      FUN_140056680(&local_38,
                    L"Expected arguments:\\n   <key> - Name of key to force each tick\\n   <value> - Value to apply. Valid examples are: true, 0.4"
                   );
      FUN_1417e897c(lVar5,&local_38,0,0);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)*param_2;
      }
      FUN_1446f470e(&local_40,puVar6,0);
      local_38 = local_40;
      uStack_30 = 0;
      plStack_28 = (longlong *)0x0;
      cVar4 = FUN_1403e7f2a();
      if (cVar4 == '\0') {
        if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = *(undefined2 **)*param_2;
        }
        FUN_140002266(local_50,L"Failed to locate a key named \'%s\'",puVar6);
        FUN_1417e897c(lVar5,local_50,0,0);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar5 = FUN_144a7ba4c(lVar5);
        if (lVar5 != 0) {
          lVar5 = FUN_1400b6e86(lVar5);
          if (lVar5 != 0) {
            local_90 = 0x3ff0000000000000;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 1;
            FUN_147f98a42(local_70,param_2);
            local_a8 = (undefined4)local_38;
            uStack_a4 = local_38._4_4_;
            uStack_a0 = (undefined4)uStack_30;
            uStack_9c = uStack_30._4_4_;
            local_98 = plStack_28;
            if (plStack_28 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
              UNLOCK();
            }
            FUN_147f93c62(lVar5 + 0x30,&local_a8,local_70);
          }
        }
      }
      plVar3 = plStack_28;
      if (plStack_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_28)(plStack_28);
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
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90152 FUN_147f90152 body=411 status=ok
// SIG undefined FUN_147f90152(void)

void FUN_147f90152(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_140636ec6(param_3);
  if (lVar5 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      FUN_140056680(&local_38,L"Expected arguments:\\n   <key> - Name of key to stop forcing");
      FUN_1417e897c(lVar5,&local_38,0,0);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)*param_2;
      }
      FUN_1446f470e(&local_40,puVar6,0);
      local_38 = local_40;
      uStack_30 = 0;
      plStack_28 = (longlong *)0x0;
      cVar4 = FUN_1403e7f2a();
      if (cVar4 == '\0') {
        if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = *(undefined2 **)*param_2;
        }
        FUN_140002266(local_50,L"Failed to locate a key named \'%s\'",puVar6);
        FUN_1417e897c(lVar5,local_50,0,0);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar5 = FUN_144a7ba4c(lVar5);
        if (lVar5 != 0) {
          lVar5 = FUN_1400b6e86(lVar5);
          if (lVar5 != 0) {
            local_68 = (undefined4)local_38;
            uStack_64 = local_38._4_4_;
            uStack_60 = (undefined4)uStack_30;
            uStack_5c = uStack_30._4_4_;
            local_58 = plStack_28;
            if (plStack_28 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
              UNLOCK();
            }
            FUN_147f93cee(lVar5 + 0x30,&local_68);
          }
        }
      }
      plVar3 = plStack_28;
      if (plStack_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_28)(plStack_28);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f902ee FUN_147f902ee body=172 status=ok
// SIG undefined FUN_147f902ee(void)

void FUN_147f902ee(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar4 + lVar5);
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,uVar3,1);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (DAT_14c872a72 == '\0') {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_14482b126(lVar4,0x40000000);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 147f9039a FUN_147f9039a body=164 status=ok
// SIG undefined FUN_147f9039a(void)

void FUN_147f9039a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147f90440(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90440 FUN_147f90440 body=273 status=ok
// SIG undefined FUN_147f90440(void)

ulonglong FUN_147f90440(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_147f99cc6((longlong *)(param_1 + 0x28),uVar2 >> 0x10 ^ uVar2,&local_20);
  if ((iVar3 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18,
     puVar4 = (ulonglong *)(lVar1 + 8), puVar4 != (ulonglong *)0x0 && lVar1 != 0)) {
    param_2 = *puVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90560 FUN_147f90560 body=57 status=ok
// SIG undefined FUN_147f90560(void)

void FUN_147f90560(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_147f99438(param_1 + 0x50);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_140ca891a(param_1);
  return;
}



// FUNCTION 147f9059a FUN_147f9059a body=100 status=ok
// SIG undefined FUN_147f9059a(void)

longlong FUN_147f9059a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_14598727a(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147f9060a FUN_147f9060a body=341 status=ok
// SIG undefined FUN_147f9060a(void)

void FUN_147f9060a(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  puVar1 = &local_25;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x98))(param_1,local_20,local_24,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9077a FUN_147f9077a body=121 status=ok
// SIG undefined FUN_147f9077a(void)

void FUN_147f9077a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xd8))(param_1,&local_28);
  FUN_147f907f4(param_3,&local_28);
  FUN_140dde623(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f907f4 FUN_147f907f4 body=78 status=ok
// SIG undefined FUN_147f907f4(void)

longlong * FUN_147f907f4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140dde623(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147f90842 FUN_147f90842 body=39 status=ok
// SIG undefined FUN_147f90842(void)

void FUN_147f90842(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f90870 FUN_147f90870 body=269 status=ok
// SIG undefined FUN_147f90870(void)

void FUN_147f90870(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9097e FUN_147f9097e body=550 status=ok
// SIG undefined FUN_147f9097e(void)

void FUN_147f9097e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uStack_40 = uStack_40 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar1 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  (**(code **)(*param_1 + 0x40))(param_1,local_30,&local_98,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90ba6 FUN_147f90ba6 body=550 status=ok
// SIG undefined FUN_147f90ba6(void)

void FUN_147f90ba6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uStack_40 = uStack_40 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar1 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  (**(code **)(*param_1 + 0x50))(param_1,local_30,&local_98,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90dce FUN_147f90dce body=514 status=ok
// SIG undefined FUN_147f90dce(void)

void FUN_147f90dce(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_98 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_98 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_38;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  (**(code **)(*param_1 + 0x48))(param_1,local_30,&local_88,plVar1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f90fd2 FUN_147f90fd2 body=514 status=ok
// SIG undefined FUN_147f90fd2(void)

void FUN_147f90fd2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_98 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_98 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_38;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  (**(code **)(*param_1 + 0x58))(param_1,local_30,&local_88,plVar1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f911d6 FUN_147f911d6 body=157 status=ok
// SIG undefined FUN_147f911d6(void)

void FUN_147f911d6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x38))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91274 FUN_147f91274 body=157 status=ok
// SIG undefined FUN_147f91274(void)

void FUN_147f91274(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x30))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91312 FUN_147f91312 body=208 status=ok
// SIG undefined FUN_147f91312(void)

void FUN_147f91312(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xd0))(param_1,&local_38,local_28);
  FUN_14611128a(param_3,&local_38);
  FUN_144a65a1e(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f913e4 FUN_147f913e4 body=651 status=ok
// SIG undefined FUN_147f913e4(void)

void FUN_147f913e4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined1 local_69;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar4 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_69 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  local_78 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_90 = local_69;
  local_98 = plVar4;
  uVar3 = (**(code **)(*param_1 + 0xb0))(param_1,local_30,local_38,&local_88);
  *param_3 = uVar3;
  if (local_68[0] != 0) {
    FUN_1400020a8();
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
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91670 FUN_147f91670 body=798 status=ok
// SIG undefined FUN_147f91670(void)

void FUN_147f91670(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  longlong *local_c0;
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined1 local_89;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar4 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_78;
  uStack_a4 = local_78._4_4_;
  uStack_a0 = (undefined4)uStack_70;
  uStack_9c = uStack_70._4_4_;
  local_98 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  local_b8 = local_89;
  local_c8 = &local_a8;
  local_c0 = plVar4;
  uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,plVar3,local_50,local_58);
  *param_3 = uVar2;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91990 FUN_147f91990 body=259 status=ok
// SIG undefined FUN_147f91990(void)

void FUN_147f91990(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
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
  local_21 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar1 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa0))(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91a94 FUN_147f91a94 body=257 status=ok
// SIG undefined FUN_147f91a94(void)

void FUN_147f91a94(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_22 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  puVar2 = &local_21;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa8))(param_1,puVar2,local_22);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91b96 FUN_147f91b96 body=550 status=ok
// SIG undefined FUN_147f91b96(void)

void FUN_147f91b96(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uStack_40 = uStack_40 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar1 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  (**(code **)(*param_1 + 0x60))(param_1,local_30,&local_98,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91dbe FUN_147f91dbe body=550 status=ok
// SIG undefined FUN_147f91dbe(void)

void FUN_147f91dbe(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  uStack_40 = uStack_40 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar1 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  (**(code **)(*param_1 + 0x68))(param_1,local_30,&local_98,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f91fe6 FUN_147f91fe6 body=160 status=ok
// SIG undefined FUN_147f91fe6(void)

void FUN_147f91fe6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x80))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f92088 FUN_147f92088 body=160 status=ok
// SIG undefined FUN_147f92088(void)

void FUN_147f92088(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x88))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9212a FUN_147f9212a body=286 status=ok
// SIG undefined FUN_147f9212a(void)

void FUN_147f9212a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  (**(code **)(*param_1 + 0x70))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9224a FUN_147f9224a body=286 status=ok
// SIG undefined FUN_147f9224a(void)

void FUN_147f9224a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = DAT_14c8464f0;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  uStack_30 = uStack_30 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  (**(code **)(*param_1 + 0x78))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f92372 FUN_147f92372 body=66 status=ok
// SIG undefined FUN_147f92372(void)

void FUN_147f92372(longlong *param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 1;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_9,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f923b6 FUN_147f923b6 body=66 status=ok
// SIG undefined FUN_147f923b6(void)

void FUN_147f923b6(longlong *param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 1;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_9,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f923fa FUN_147f923fa body=165 status=ok
// SIG undefined FUN_147f923fa(void)

void FUN_147f923fa(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    uStack_44 = param_3[5];
    uStack_40 = param_3[6];
    uStack_3c = param_3[7];
    local_60 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    local_68 = param_5;
    FUN_14570e87e(lVar1,&local_60,&local_58,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f924a0 FUN_147f924a0 body=138 status=ok
// SIG undefined FUN_147f924a0(void)

void FUN_147f924a0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  byte local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_18 = 0;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(byte *)(param_2 + 0x48);
    if (1 < local_10) {
      local_20 = param_3[1];
      if (local_10 != 2) {
        local_18 = param_3[2];
      }
      goto LAB_147f924e9;
    }
  }
  local_20 = 0;
LAB_147f924e9:
  local_38 = param_5;
  (**(code **)(*param_1 + 0x40))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f9252c FUN_147f9252c body=89 status=ok
// SIG undefined FUN_147f9252c(void)

void FUN_147f9252c(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_38 = param_5;
  (**(code **)(*param_1 + 0x58))(local_28,param_2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f92586 FUN_147f92586 body=242 status=ok
// SIG undefined FUN_147f92586(void)

void FUN_147f92586(longlong *param_1,ulonglong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar9 = (**(code **)(*param_1 + 0xe8))();
  local_38 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  puVar10 = (undefined4 *)FUN_147f99e8e(uVar9,uVar8 >> 0x10 ^ uVar8,&local_38);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar5;
  puVar10[6] = uVar6;
  puVar10[7] = uVar7;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  FUN_147f92679(param_4,puVar10 + 0xc);
  FUN_147f9275f(param_5,puVar10 + 8);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f92679 FUN_147f92679 body=229 status=ok
// SIG undefined FUN_147f92679(void)

void FUN_147f92679(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    FUN_147f9a5dc(param_2);
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + lVar6);
      if (lVar5 != 0) {
        uVar4 = FUN_1402a60e2();
        lVar5 = FUN_14092e757(uVar4,lVar5,0,0);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1402a61c0(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147f9275f FUN_147f9275f body=220 status=ok
// SIG undefined FUN_147f9275f(void)

void FUN_147f9275f(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    FUN_1402a5fa6(param_2);
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + lVar6);
      if (lVar5 != 0) {
        uVar4 = FUN_1402a5ec8();
        lVar5 = FUN_14092e757(uVar4,lVar5,0,0);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14181c0b2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147f9283c FUN_147f9283c body=191 status=ok
// SIG undefined FUN_147f9283c(void)

void FUN_147f9283c(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar9 = (**(code **)(*param_1 + 0xe8))();
  local_28 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  puVar10 = (undefined4 *)FUN_147f99e8e(uVar9,uVar8 >> 0x10 ^ uVar8,&local_28);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar5;
  puVar10[6] = uVar6;
  puVar10[7] = uVar7;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f928fc FUN_147f928fc body=135 status=ok
// SIG undefined FUN_147f928fc(void)

void FUN_147f928fc(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  FUN_147f9a63c(uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


