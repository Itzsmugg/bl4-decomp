// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1444fc875 FUN_1444fc875 body=1249 status=ok
// SIG undefined FUN_1444fc875(void)

void FUN_1444fc875(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                  undefined8 param_5)

{
  float fVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0 [2];
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  void *local_58;
  float local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1444fcd57(param_1,param_2,param_5);
  if (lVar3 == 0) {
    fVar1 = param_4[2];
    fVar7 = *param_4;
    if (param_4[1] <= *param_4) {
      fVar7 = param_4[1];
    }
    if (fVar1 <= fVar7) {
      fVar7 = fVar1;
    }
    if (0.0 <= fVar7) {
      local_4c = 0x3f800000;
      local_58 = *(void **)param_4;
      local_50 = fVar1;
      FUN_1493d1a8a(param_1,param_2,param_3);
    }
  }
  else {
    local_50 = *(float *)(param_3 + 1);
    lVar6 = (longlong)(int)local_50;
    local_58 = (void *)0x0;
    pvVar2 = (void *)*param_3;
    FUN_1446dd670(&local_58,(int)local_50 + (uint)(lVar6 == 0) + 8,0);
    if (lVar6 != 0) {
      memcpy(local_58,pvVar2,lVar6 * 2);
    }
    FUN_1400020e8(&local_58,L"Multiply",8);
    FUN_1492ef9be(param_2,&local_78);
    local_68 = local_78;
    local_60 = local_70 + -1;
    if (local_70 == 0) {
      local_60 = 0;
    }
    local_88 = local_58;
    local_80 = (int)local_50 + -1;
    if (local_50 == 0.0) {
      local_80 = 0;
    }
    uVar4 = FUN_14934810c(param_1);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc13eac,&local_78);
    FUN_149346b60(uVar4,&local_78);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar3,&local_78);
    FUN_1400021e4(&DAT_14cc13eb4,&local_98);
    FUN_149344996(uVar4,&local_98,&local_78);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_70 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_70;
    local_78 = (void *)0x0;
    pvVar2 = (void *)*param_3;
    FUN_1446dd670(&local_78,(uint)(lVar6 == 0) + local_70 + 9,0);
    if (lVar6 != 0) {
      memcpy(local_78,pvVar2,lVar6 * 2);
    }
    FUN_1400020e8(&local_78,L"MapWeight",9);
    FUN_1492ef9be(uVar4,&local_98);
    local_a8 = local_98;
    local_a0 = local_90 + -1;
    if (local_90 == 0) {
      local_a0 = 0;
    }
    local_b8 = local_78;
    local_b0 = local_70 + -1;
    if (local_70 == 0) {
      local_b0 = 0;
    }
    uVar5 = FUN_14934810c(param_1);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc14124,&local_98);
    FUN_149346b60(uVar5,&local_98);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_bc = 0x3f800000;
    FUN_1400021e4(&DAT_14cc1412c,local_d0);
    FUN_149346170(&local_98,local_d0);
    FUN_1492eda3c(uVar5,&local_98,&local_bc);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(uVar5,&local_98);
    FUN_1400021e4(&DAT_14cc13ebc,local_d0);
    FUN_149344996(uVar4,local_d0,&local_98);
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar3,&local_98);
    FUN_1400021e4(&DAT_14cc13eb4,local_d0);
    FUN_149344996(uVar4,local_d0,&local_98);
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_90 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_90;
    local_98 = (void *)0x0;
    pvVar2 = (void *)*param_3;
    FUN_1446dd670(&local_98,(uint)(lVar6 == 0) + local_90 + 3,0);
    if (lVar6 != 0) {
      memcpy(local_98,pvVar2,lVar6 * 2);
    }
    FUN_1400020e8(&local_98,&DAT_149e3a952,3);
    FUN_1492f027e(lVar3,&local_98);
    FUN_1492ef9be(uVar4,local_d0);
    FUN_149344996(param_2,param_3,local_d0);
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444fcd57 FUN_1444fcd57 body=488 status=ok
// SIG undefined FUN_1444fcd57(void)

size_t FUN_1444fcd57(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  size_t _Size;
  longlong lVar1;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < *(int *)(param_3 + 1)) {
    FUN_140c50e9c(&local_50,param_3,1);
    FUN_1444fd3c0(&local_40,&local_50);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_60 = (void *)0x0;
    local_58 = *(int *)(param_3 + 1);
    lVar1 = (longlong)local_58;
    _Src = (void *)*param_3;
    if (lVar1 == 0) {
      local_54 = 0;
      _Size = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      _Size = lVar1 * 2;
      memcpy(local_60,_Src,_Size);
    }
    lVar1 = FUN_1444fd46c(param_1,&local_60,&local_40);
    if (lVar1 != 0) {
      FUN_1492ef9be(param_2,&local_50);
      local_70 = local_50;
      local_68 = local_48 + -1;
      if (local_48 == 0) {
        local_68 = 0;
      }
      local_80 = local_40;
      local_78 = local_38 + -1;
      if (local_38 == 0) {
        local_78 = 0;
      }
      _Size = FUN_14934810c(param_1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&DAT_14cc14024,&local_50);
      FUN_149346b60(_Size,&local_50);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1492ef9be(lVar1,&local_50);
      FUN_1400021e4(&DAT_14cc14034,local_90);
      FUN_1493468cc(_Size,local_90,&local_50,1);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) goto LAB_1444fce2e;
  }
  _Size = 0;
LAB_1444fce2e:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return _Size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444fcf40 FUN_1444fcf40 body=1151 status=ok
// SIG undefined FUN_1444fcf40(void)

undefined8
FUN_1444fcf40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
             undefined8 param_5)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0 [2];
  uint local_bc;
  void *local_b8;
  int local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = FUN_1444fcd57(param_1,param_2,param_5);
  local_e0 = (void *)0x0;
  local_d8 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_d8;
  pvVar1 = (void *)*param_3;
  if (lVar4 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1446dd670(&local_e0,local_d8,0);
    memcpy(local_e0,pvVar1,lVar4 * 2);
  }
  pvVar1 = local_e0;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)local_d8;
    local_58 = (void *)0x0;
    local_50 = local_d8;
    FUN_1446dd670(&local_58,local_d8 + (uint)(lVar4 == 0) + 8,0);
    if (lVar4 != 0) {
      memcpy(local_58,pvVar1,lVar4 * 2);
    }
    FUN_1400020e8(&local_58,L"Multiply",8);
    FUN_1492ef9be(param_2,&local_78);
    local_68 = local_78;
    local_60 = local_70 + -1;
    if (local_70 == 0) {
      local_60 = 0;
    }
    local_88 = local_58;
    local_80 = local_50 + -1;
    if (local_50 == 0) {
      local_80 = 0;
    }
    lVar4 = FUN_14934810c(param_1);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc13eac,&local_78);
    FUN_149346b60(lVar4,&local_78);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(lVar2,&local_78);
    FUN_1400021e4(&DAT_14cc13eb4,&local_98);
    FUN_149344996(lVar4,&local_98,&local_78);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvVar1 = local_e0;
    lVar2 = (longlong)local_d8;
    local_78 = (void *)0x0;
    local_70 = local_d8;
    FUN_1446dd670(&local_78,(uint)(lVar2 == 0) + local_d8 + 9,0);
    if (lVar2 != 0) {
      memcpy(local_78,pvVar1,lVar2 * 2);
    }
    FUN_1400020e8(&local_78,L"MapWeight",9);
    FUN_1492ef9be(lVar4,&local_a8);
    local_98 = local_a8;
    local_90 = local_a0 + -1;
    if (local_a0 == 0) {
      local_90 = 0;
    }
    local_b8 = local_78;
    local_b0 = local_70 + -1;
    if (local_70 == 0) {
      local_b0 = 0;
    }
    uVar3 = FUN_14934810c(param_1);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc14124,&local_a8);
    FUN_149346b60(uVar3,&local_a8);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    uVar5 = -(uint)(0.0 <= *param_4);
    local_bc = ~uVar5 & 0x3f800000 | (uint)*param_4 & uVar5;
    FUN_1400021e4(&DAT_14cc1412c,local_d0);
    FUN_149346170(&local_a8,local_d0);
    FUN_1492eda3c(uVar3,&local_a8,&local_bc);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1492ef9be(uVar3,&local_a8);
    FUN_1400021e4(&DAT_14cc13ebc,local_d0);
    FUN_149344996(lVar4,local_d0,&local_a8);
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_e0 != (void *)0x0) {
    FUN_1400020a8(local_e0);
  }
  if (lVar4 == 0) {
    if (*param_4 < 0.0) {
      uVar3 = 0;
      goto LAB_1444fd001;
    }
    FUN_1493d1950(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1492f027e(lVar4,param_3);
    FUN_1492ef9be(lVar4,&local_58);
    FUN_149344996(param_2,param_3,&local_58);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar3 = 1;
LAB_1444fd001:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1444fd3c0 FUN_1444fd3c0 body=171 status=ok
// SIG undefined FUN_1444fd3c0(void)

undefined8 FUN_1444fd3c0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 2) {
    FUN_140056680(&local_38,&DAT_149e43d78);
  }
  else {
    local_38 = (void *)0x0;
    _Src = (void *)*param_2;
    local_30 = uVar1;
    FUN_1446dd670(&local_38,(ulonglong)uVar1,0);
    memcpy(local_38,_Src,(ulonglong)uVar1 * 2);
  }
  FUN_140b1283a(param_1,L"TEX_",&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444fd46c FUN_1444fd46c body=1120 status=ok
// SIG undefined FUN_1444fd46c(void)

longlong * FUN_1444fd46c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  longlong *_Src;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  longlong local_c8 [2];
  void *local_b8;
  uint local_b0;
  undefined4 local_ac;
  void *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined2 local_6a [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = (void *)0x0;
  iStack_a0 = *(int *)(param_3 + 1);
  lVar11 = (longlong)iStack_a0;
  _Src = (longlong *)*param_3;
  if (lVar11 == 0) {
    uStack_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,iStack_a0,0);
    memcpy(local_a8,_Src,lVar11 * 2);
  }
  iVar10 = 0;
  do {
    local_b8 = (void *)0x0;
    local_b0 = *(uint *)(param_2 + 1);
    lVar11 = (longlong)(int)local_b0;
    pvVar3 = (void *)*param_2;
    if (lVar11 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy(local_b8,pvVar3,lVar11 * 2);
    }
    FUN_1448097c4(&local_b8,&DAT_149e01f64,&DAT_149e065c6,0);
    local_d8 = local_a8;
    local_d0 = iStack_a0 + -1;
    if (iStack_a0 == 0) {
      local_d0 = 0;
    }
    FUN_149348bf8(local_c8,&local_d8);
    plVar5 = (longlong *)FUN_1492f2ba8(param_1,local_c8);
    if (plVar5 == (longlong *)0x0) {
LAB_1444fd596:
      local_e8 = local_a8;
      bVar12 = false;
      local_e0 = iStack_a0 + -1;
      if (iStack_a0 == 0) {
        local_e0 = 0;
      }
      _Src = (longlong *)FUN_149348cdc(param_1,&local_e8);
      (**(code **)(*_Src + 0x2f0))(_Src,&local_b8);
      FUN_1402980a2(param_3,local_a8);
    }
    else {
      lVar11 = FUN_1459f64c2();
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) goto LAB_1444fd596;
      (**(code **)(*plVar5 + 0x2e8))(plVar5,&local_88);
      pvVar3 = local_b8;
      local_98 = (void *)0x0;
      lVar11 = (longlong)(int)local_b0;
      uStack_90 = CONCAT44(uStack_90._4_4_,local_b0);
      if (lVar11 == 0) {
        uStack_90 = (ulonglong)local_b0;
        iVar4 = 0;
        if ((int)uStack_80 != 0) goto LAB_1444fd705;
        bVar12 = true;
      }
      else {
        FUN_1446dd670(&local_98,local_b0,0);
        memcpy(local_98,pvVar3,lVar11 * 2);
        iVar4 = (int)uStack_90;
        if ((int)uStack_90 == (int)uStack_80) {
          bVar12 = true;
          if (1 < (int)uStack_90) {
            lVar11 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)local_98 + lVar11);
              uVar9 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)local_88 + lVar11);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1444fd6b2;
                }
                iVar4 = uVar9 - uVar8;
                goto LAB_1444fd70e;
              }
              if (uVar1 == 0) break;
LAB_1444fd6b2:
              lVar11 = lVar11 + 2;
            }
            iVar4 = 0;
LAB_1444fd70e:
            bVar12 = iVar4 == 0;
          }
        }
        else {
LAB_1444fd705:
          bVar12 = (int)uStack_80 + iVar4 == 1;
        }
        if ((uStack_90._4_4_ != -1) && (local_98 != (void *)0x0)) {
          FUN_1400020a8();
        }
      }
      if ((uStack_80._4_4_ != -1) && (local_88 != (void *)0x0)) {
        FUN_1400020a8();
      }
      if (bVar12) {
        bVar12 = false;
        FUN_1402980a2(param_3,local_a8);
        _Src = plVar5;
      }
      else {
        local_98 = (void *)0x0;
        uStack_90 = 0;
        iVar7 = 0;
        puVar6 = local_6a;
        lVar11 = 0x1000000000;
        iVar4 = iVar10;
        do {
          lVar11 = lVar11 + -0x100000000;
          *puVar6 = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar4 % 10) * 2);
          uVar9 = iVar4 + 9;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + -1;
          iVar4 = iVar4 / 10;
        } while (0x12 < uVar9);
        FUN_1400020e8(&local_98,(longlong)&local_88 + (lVar11 >> 0x1f),iVar7);
        FUN_1407ec8fc(&local_88,param_3);
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_a8 = local_88;
        iStack_a0 = (int)uStack_80;
        uStack_9c = uStack_80._4_4_;
        local_88 = (void *)0x0;
        uStack_80 = 0;
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        bVar12 = true;
      }
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar10 = iVar10 + 1;
    if (!bVar12) {
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return _Src;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1444fd946 FUN_1444fd946 body=1934 status=ok
// SIG undefined FUN_1444fd946(void)

void FUN_1444fd946(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong uStack_170;
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_120;
  longlong local_118;
  char local_110;
  undefined1 local_10f;
  undefined8 *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined1 local_da;
  char local_d9;
  undefined8 local_d8 [12];
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (lVar7 != 0) {
    lVar4 = FUN_145a955e0();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar1 = FUN_1492f125c(lVar7 + 0x220);
      uVar11 = 8;
      if ((int)uVar1 < 8) {
        uVar11 = uVar1;
      }
      local_78 = 0;
      uStack_70 = 0;
      FUN_1492f1448(lVar7 + 0x220);
      lVar7 = *(longlong *)(param_2 + 0x20);
      if (lVar7 != 0) {
        uVar5 = FUN_14595e83e();
        local_180 = FUN_144718840(lVar7,uVar5);
        if (local_180 != 0) {
          puVar9 = &DAT_14c846480;
          puVar10 = local_d8;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          local_d9 = '\0';
          local_da = 0;
          lVar7 = FUN_149380686(*(undefined8 *)(param_2 + 0x30));
          if (lVar7 != 0) {
            FUN_14937fec0(lVar7,local_d8);
            FUN_14937fbd6(lVar7,&local_d9);
            if (local_d9 == '\0') {
              FUN_14937fd2e(lVar7,&local_da);
            }
          }
          lVar7 = param_1 + 0x30;
          if ((uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) < uVar11) {
            if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar11);
            }
            FUN_1493e2a36(lVar7,uVar11);
            iVar2 = 1;
            if (3 < uVar1) {
              uVar3 = (uVar11 | 1) + 0xe;
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              iVar2 = 1 << ((byte)iVar2 & 0x1f);
            }
            if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x78) < iVar2)) {
              *(int *)(param_1 + 0x78) = iVar2;
              FUN_1493e2bfe(lVar7);
            }
          }
          local_e0 = 0;
          if (0 < (int)uVar1) {
            do {
              local_f0 = (void *)0x0;
              local_e8 = *(int *)(local_78 + 8 + (longlong)local_e0 * 0x10);
              lVar4 = (longlong)local_e8;
              _Src = *(void **)(local_78 + (longlong)local_e0 * 0x10);
              if (lVar4 == 0) {
                local_e4 = 0;
              }
              else {
                FUN_1446dd670(&local_f0,local_e8,0);
                memcpy(local_f0,_Src,lVar4 * 2);
              }
              lVar4 = FUN_1492f2ba8(*(undefined8 *)(param_2 + 0x30),&local_f0);
              if (lVar4 != 0) {
                lVar6 = FUN_145a956cc();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  lVar6 = FUN_1493e2e44(lVar7,local_e0,&local_e0);
                  local_118 = local_180;
                  local_110 = local_d9;
                  local_10f = local_da;
                  local_108 = local_d8;
                  local_138 = 0;
                  uStack_130 = 0;
                  local_198 = lVar6;
                  local_120 = param_2;
                  local_100 = param_4;
                  local_f8 = param_3;
                  FUN_1492f1448(lVar4 + 0x150,&local_138);
                  uVar1 = (uint)uStack_130;
                  lVar8 = (longlong)(int)(uint)uStack_130;
                  local_188 = lVar6;
                  if ((uint)(*(int *)(lVar6 + 8) - *(int *)(lVar6 + 0x34)) < (uint)uStack_130) {
                    if ((int)(uint)uStack_130 < 0) goto LAB_1444fe0cd;
                    local_190 = lVar8;
                    FUN_1493e3560(local_198,lVar8);
                    iVar2 = 1;
                    if (3 < (uint)local_190) {
                      uVar1 = (uVar1 | 1) + 0xe;
                      iVar2 = 0x1f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                        }
                      }
                      iVar2 = 1 << ((byte)iVar2 & 0x1f);
                    }
                    if ((*(int *)(local_198 + 0x48) == 0) || (*(int *)(local_198 + 0x48) < iVar2)) {
                      *(int *)(local_198 + 0x48) = iVar2;
                      FUN_1493e0f9c();
                    }
                  }
                  FUN_1444fe0d6(&local_120,&local_138);
                  if (local_e0 == 0) {
                    local_148 = 0;
                    uStack_140 = 0;
                    FUN_1492f1448(lVar4 + 0x170,&local_148);
                    local_190 = local_188 + 0x50;
                    uVar1 = (uint)uStack_140;
                    lVar8 = (longlong)(int)(uint)uStack_140;
                    if ((uint)(*(int *)(local_198 + 0x58) - *(int *)(local_198 + 0x84)) <
                        (uint)uStack_140) {
                      if ((int)(uint)uStack_140 < 0) goto LAB_1444fe0cd;
                      FUN_1493e3560(local_190,uStack_140 & 0xffffffff);
                      iVar2 = 1;
                      if (3 < uVar1) {
                        uVar1 = (uVar1 | 1) + 0xe;
                        iVar2 = 0x1f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                          }
                        }
                        iVar2 = 1 << ((byte)iVar2 & 0x1f);
                      }
                      if ((*(int *)(local_198 + 0x98) == 0) || (*(int *)(local_198 + 0x98) < iVar2))
                      {
                        *(int *)(local_198 + 0x98) = iVar2;
                        FUN_1493e0f9c(local_190);
                      }
                    }
                    FUN_1444fe0d6(&local_120,&local_148,local_190);
                    local_158 = 0;
                    uStack_150 = 0;
                    FUN_1492f1448(lVar4 + 400,&local_158);
                    local_190 = local_188 + 0xa0;
                    uVar1 = (uint)uStack_150;
                    lVar8 = (longlong)(int)(uint)uStack_150;
                    if ((uint)(*(int *)(local_198 + 0xa8) - *(int *)(local_198 + 0xd4)) <
                        (uint)uStack_150) {
                      if ((int)(uint)uStack_150 < 0) goto LAB_1444fe0cd;
                      FUN_1493e3560(local_190,uStack_150 & 0xffffffff);
                      iVar2 = 1;
                      if (3 < uVar1) {
                        uVar1 = (uVar1 | 1) + 0xe;
                        iVar2 = 0x1f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                          }
                        }
                        iVar2 = 1 << ((byte)iVar2 & 0x1f);
                      }
                      if ((*(int *)(local_198 + 0xe8) == 0) || (*(int *)(local_198 + 0xe8) < iVar2))
                      {
                        *(int *)(local_198 + 0xe8) = iVar2;
                        FUN_1493e0f9c(local_190);
                      }
                    }
                    FUN_1444fe0d6(&local_120,&local_158,local_190);
                    local_168 = 0;
                    uStack_160 = 0;
                    FUN_1492f1448(lVar4 + 0x1b0,&local_168);
                    local_190 = local_188 + 0xf0;
                    uVar1 = (uint)uStack_160;
                    lVar8 = (longlong)(int)(uint)uStack_160;
                    if ((uint)(*(int *)(local_198 + 0xf8) - *(int *)(local_198 + 0x124)) <
                        (uint)uStack_160) {
                      if ((int)(uint)uStack_160 < 0) goto LAB_1444fe0cd;
                      FUN_1493e3560(local_190,uStack_160 & 0xffffffff);
                      iVar2 = 1;
                      if (3 < uVar1) {
                        uVar1 = (uVar1 | 1) + 0xe;
                        iVar2 = 0x1f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                          }
                        }
                        iVar2 = 1 << ((byte)iVar2 & 0x1f);
                      }
                      if ((*(int *)(local_198 + 0x138) == 0) ||
                         (*(int *)(local_198 + 0x138) < iVar2)) {
                        *(int *)(local_198 + 0x138) = iVar2;
                        FUN_1493e0f9c(local_190);
                      }
                    }
                    FUN_1444fe0d6(&local_120,&local_168,local_190);
                    local_178 = 0;
                    uStack_170 = 0;
                    FUN_1492f1448(lVar4 + 0x1d0,&local_178);
                    local_188 = local_188 + 0x140;
                    uVar1 = (uint)uStack_170;
                    lVar8 = (longlong)(int)(uint)uStack_170;
                    if ((uint)(*(int *)(local_198 + 0x148) - *(int *)(local_198 + 0x174)) <
                        (uint)uStack_170) {
                      if ((int)(uint)uStack_170 < 0) {
LAB_1444fe0cd:
                    /* WARNING: Subroutine does not return */
                        FUN_1456acd4b(lVar8);
                      }
                      FUN_1493e3560(local_188,uStack_170 & 0xffffffff);
                      iVar2 = 1;
                      if (3 < uVar1) {
                        uVar1 = (uVar1 | 1) + 0xe;
                        iVar2 = 0x1f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                          }
                        }
                        iVar2 = 1 << ((byte)iVar2 & 0x1f);
                      }
                      if ((*(int *)(local_198 + 0x188) == 0) ||
                         (*(int *)(local_198 + 0x188) < iVar2)) {
                        *(int *)(local_198 + 0x188) = iVar2;
                        FUN_1493e0f9c(local_188);
                      }
                    }
                    FUN_1444fe0d6(&local_120,&local_178);
                    FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
                    if (local_178 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1447a1747(local_168,uStack_160 & 0xffffffff);
                    if (local_168 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
                    if (local_158 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1447a1747(local_148,uStack_140 & 0xffffffff);
                    if (local_148 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
                  if (local_138 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              if (local_f0 != (void *)0x0) {
                FUN_1400020a8();
              }
              local_e0 = local_e0 + 1;
            } while (local_e0 < (int)uVar11);
          }
        }
      }
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444fe0d6 FUN_1444fe0d6 body=1796 status=ok
// SIG undefined FUN_1444fe0d6(void)

void FUN_1444fe0d6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_211;
  longlong *local_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_198;
  void *local_190;
  undefined8 local_188;
  undefined1 local_180;
  void *local_170;
  uint local_168;
  undefined4 local_164;
  undefined1 local_160;
  longlong local_158 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f8;
  uint local_f0;
  undefined1 local_e8;
  byte local_e0;
  code *local_d8;
  undefined8 *local_c8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if ((longlong)(int)param_2[1] != 0) {
    lVar13 = *param_2;
    lVar12 = (longlong)(int)param_2[1] << 4;
    do {
      local_158[0] = 0;
      local_158[1] = 0;
      local_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0x3ff00000;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0x3ff0000000000000;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0;
      plVar6 = (longlong *)FUN_1492f2ba8(*(undefined8 *)(*param_1 + 0x30),lVar13);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = FUN_14599b312();
        if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) {
          lVar7 = FUN_1459238a6();
          if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              != lVar7 + 0x30)) goto LAB_1444fe1ad;
          if ((char)param_1[2] == '\x01') {
            local_208 = 0;
            uStack_200 = 0;
            local_1f8._0_4_ = 0;
            local_1f8._4_4_ = 0;
            uStack_1f0 = 0;
            uStack_1ec = 0x3ff00000;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1c8 = 0x3ff0000000000000;
            uStack_1c0 = 0x3ff0000000000000;
            local_1b8 = 0x3ff0000000000000;
            uStack_1b0 = 0;
            lVar7 = param_1[3];
            local_258 = local_258 & 0xffffffffffffff00;
            cVar3 = FUN_149340896(plVar6,*(undefined8 *)(*param_1 + 0x30),lVar7,&local_208);
            if (cVar3 != '\0') {
              plVar10 = &local_208;
              plVar8 = local_158;
              for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                *plVar8 = *plVar10;
                plVar10 = plVar10 + 1;
                plVar8 = plVar8 + 1;
              }
            }
            uVar11 = CONCAT71((int7)((ulonglong)lVar7 >> 8),(char)param_1[2]);
          }
          else {
            uVar11 = 0;
          }
          FUN_1493d2134(local_158,plVar6,uVar11 & 0xffffffffffffff01,
                        *(undefined1 *)((longlong)param_1 + 0x11));
          local_208 = 0;
          uStack_200 = 0;
          FUN_14933ff3c(plVar6,&local_208);
          plVar6 = (longlong *)FUN_1492f2ba8(*(undefined8 *)(*param_1 + 0x30),&local_208);
          if (plVar6 == (longlong *)0x0) {
LAB_1444fe55b:
            plVar6 = (longlong *)0x0;
          }
          else {
            lVar7 = FUN_14599b312();
            if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                lVar7 + 0x30)) goto LAB_1444fe55b;
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          if (plVar6 == (longlong *)0x0) goto LAB_1444fe1ad;
        }
        else if ((char)param_1[2] == '\x01') {
          plVar10 = (longlong *)param_1[3];
          plVar8 = local_158;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *plVar8 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar8 = plVar8 + 1;
          }
        }
        (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_f8);
        pvVar2 = local_f8;
        if (local_e0 == 1) {
          local_170 = (void *)0x0;
          lVar7 = (longlong)(int)local_f0;
          local_168 = local_f0;
          if (lVar7 == 0) {
            local_164 = 0;
          }
          else {
            FUN_1446dd670(&local_170,local_f0,0);
            memcpy(local_170,pvVar2,lVar7 * 2);
          }
          local_160 = local_e8;
          uStack_240 = CONCAT44(uStack_144,local_148);
          local_238 = CONCAT44(uStack_13c,uStack_140);
          local_228 = uStack_110;
          uStack_220 = local_108;
          uStack_230 = local_118;
          local_248 = local_158[1];
          local_258 = local_128;
          lStack_250 = local_158[0];
          FUN_140002266(&local_208,L"%.5f,%.5f,%.5f|%.5f,%.5f,%.5f,%.5f|%.5f,%.5f,%.5f",local_138,
                        uStack_130);
          iVar5 = (int)uStack_200 + -1;
          if ((int)uStack_200 == 0) {
            iVar5 = 0;
          }
          FUN_1400020e8(&local_170,local_208,iVar5);
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          uVar4 = FUN_1493494d7(&local_170);
          iVar5 = FUN_1493e09a2(param_3,uVar4);
          if (iVar5 == -1) {
            uVar4 = FUN_1493494d7(&local_170);
            lVar7 = FUN_1493e0a5a(param_3,uVar4,&local_170);
            plVar6 = local_158;
            plVar10 = (longlong *)(lVar7 + 0x380);
            for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
              *plVar10 = *plVar6;
              plVar6 = plVar6 + 1;
              plVar10 = plVar10 + 1;
            }
            iVar5 = local_f0 - 1;
            if (local_f0 == 0) {
              iVar5 = 0;
            }
            FUN_1402980a2(lVar7,local_f8,iVar5);
            local_208 = lVar7;
            plVar6 = local_158;
            plVar10 = &local_1f8;
            for (lVar7 = 0xc; pvVar2 = local_f8, lVar7 != 0; lVar7 = lVar7 + -1) {
              *plVar10 = *plVar6;
              plVar6 = plVar6 + 1;
              plVar10 = plVar10 + 1;
            }
            local_198 = param_1[1];
            local_190 = (void *)0x0;
            lVar7 = (longlong)(int)local_f0;
            local_188 = CONCAT44(local_188._4_4_,local_f0);
            if (lVar7 == 0) {
              local_188 = (ulonglong)local_f0;
            }
            else {
              FUN_1446dd670(&local_190,local_f0,0);
              memcpy(local_190,pvVar2,lVar7 * 2);
            }
            local_180 = local_e8;
            local_211 = (undefined1)param_1[5];
            plVar8 = (longlong *)FUN_14001cc68(0xc0,0x10);
            plVar8[1] = (longlong)&DAT_100000001;
            *plVar8 = (longlong)&PTR_FUN_14bca7ef0;
            local_d8 = (code *)0x0;
            local_c8 = (undefined8 *)0x0;
            local_c8 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
            *local_c8 = &PTR_FUN_14bcb8e70;
            plVar6 = &local_208;
            plVar10 = local_c8 + 2;
            for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
              *plVar10 = *plVar6;
              plVar6 = plVar6 + 1;
              plVar10 = plVar10 + 1;
            }
            local_c8[0x11] = local_190;
            local_190 = (void *)0x0;
            *(undefined4 *)(local_c8 + 0x12) = (undefined4)local_188;
            *(undefined4 *)((longlong)local_c8 + 0x94) = local_188._4_4_;
            local_188 = 0;
            *(undefined1 *)(local_c8 + 0x13) = local_180;
            if (local_c8 + 2 != (longlong *)0x0) {
              local_d8 = FUN_144505ede;
            }
            local_210 = plVar8 + 2;
            FUN_1493c626e(local_210,local_211);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
              LOCK();
              plVar6 = plVar8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
            if (local_190 != (void *)0x0) {
              FUN_1400020a8();
            }
            plVar6 = (longlong *)param_1[4];
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            iVar5 = (int)plVar6[1];
            *(uint *)(plVar6 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
              FUN_1493c6cb8(plVar6,iVar5);
            }
            lVar7 = *plVar6;
            *(longlong **)(lVar7 + (longlong)iVar5 * 0x10) = local_210;
            *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
          if (local_170 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        if (((local_e0 & 1) != 0) && (local_f8 != (void *)0x0)) {
          FUN_1400020a8();
        }
      }
LAB_1444fe1ad:
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  if ((local_90 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444fe7dc FUN_1444fe7dc body=539 status=ok
// SIG undefined FUN_1444fe7dc(void)

undefined1 * FUN_1444fe7dc(longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x23) = 0;
  lVar3 = FUN_146153af4();
  if (*(longlong **)(lVar3 + 0x350) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(lVar3 + 0x350) + 0x2a8))();
    *(undefined1 *)(param_1 + 0x23) = uVar1;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  if ((longlong *)param_3[3] == (longlong *)0x0) goto LAB_1444fe87c;
  lVar3 = (**(code **)(*(longlong *)param_3[3] + 0x2e8))();
  lVar4 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if ((((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)) || (lVar3 = param_3[3], lVar3 == 0)) goto LAB_1444fe87c;
  lVar4 = FUN_145a955e0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_1444fe87c;
  plVar5 = (longlong *)param_3[7];
  if (plVar5 == (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    cVar2 = FUN_1492f4b30(lVar3);
    if (cVar2 == '\0') {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)FUN_140081d40(&local_88,0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (plVar5 != (longlong *)0x0) goto LAB_1444fe8cf;
    if (*(int *)(param_3 + 2) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)param_3[1];
    }
    FUN_1446f470e(&local_90,puVar6,1);
    plVar5 = (longlong *)FUN_1493d5b30(*param_3,local_90);
    if (plVar5 == (longlong *)0x0) goto LAB_1444fe87c;
    FUN_147d53e2e(plVar5);
  }
  else {
LAB_1444fe8cf:
    lVar3 = FUN_1406d0862();
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_1444fe87c;
    if ((*(byte *)((longlong)plVar5 + 0x195) & 1) != 0) {
      FUN_147d5c8ae(&local_88,plVar5,1,1);
      (**(code **)(*plVar5 + 0x310))(plVar5);
      FUN_1408e177a(plVar5 + 0x33,0);
      local_98 = 0;
      FUN_147d530c4(plVar5,&local_98);
      lVar3 = local_98;
      if (local_98 != 0) {
        FUN_14029672a(local_98);
        FUN_1400020a8(lVar3);
      }
      FUN_147d5cdcc(&local_88);
    }
  }
  *(longlong **)(param_2 + 8) = plVar5;
LAB_1444fe87c:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444fe9f8 FUN_1444fe9f8 body=4813 status=ok
// SIG undefined FUN_1444fe9f8(void)

undefined1 * FUN_1444fe9f8(longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  void *_Src;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  byte *pbVar17;
  int iVar18;
  uint *puVar19;
  longlong *plVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auStack_468 [47];
  char local_439;
  undefined8 local_438;
  undefined8 local_430;
  ulonglong local_428;
  int local_41c;
  ulonglong local_418;
  longlong local_410;
  uint *local_408;
  longlong local_400;
  longlong local_3f8;
  int local_3ec;
  ulonglong local_3e8;
  undefined8 *local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  char local_3c2;
  char local_3c1;
  longlong local_3c0;
  undefined8 local_3b8;
  int local_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  void *local_390;
  int local_388;
  undefined4 local_384;
  undefined1 local_37a;
  char local_379;
  longlong local_378;
  ulonglong uStack_370;
  char local_359;
  longlong local_358 [2];
  uint local_348 [4];
  uint *local_338;
  uint local_330;
  undefined8 local_32c;
  undefined4 local_324;
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b7;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_468;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  if ((longlong *)param_3[3] == (longlong *)0x0) goto LAB_1444fea88;
  lVar9 = (**(code **)(*(longlong *)param_3[3] + 0x2e8))();
  lVar10 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if ((((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30)) || (lVar9 = param_3[3], lVar9 == 0)) goto LAB_1444fea88;
  lVar10 = FUN_145a955e0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
      != lVar10 + 0x30)) goto LAB_1444fea88;
  uVar14 = *param_3;
  uVar11 = (**(code **)(*param_1 + 0x2a0))(param_1);
  lVar12 = FUN_1444cb8d6(lVar9,uVar11,uVar14,param_3 + 1);
  lVar10 = param_3[7];
  if (lVar12 == 0) goto LAB_1444fea88;
  lVar13 = FUN_1406d0862();
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
      != lVar13 + 0x30)) goto LAB_1444fea88;
  uVar32 = lVar9 + 0x220;
  local_439 = lVar10 != 0;
  local_400 = lVar12;
  iVar7 = FUN_1492f125c(uVar32);
  local_430 = CONCAT44(local_430._4_4_,iVar7);
  iVar23 = 8;
  if (iVar7 < 8) {
    iVar23 = iVar7;
  }
  local_428 = uVar32;
  iVar7 = FUN_1492f125c(uVar32);
  local_438 = CONCAT44(local_438._4_4_,iVar23);
  if (iVar23 != iVar7) {
    FUN_1492f125c(local_428);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  if (local_439 != '\0') {
    FUN_147d5a12c(&local_c8,0);
  }
  local_359 = '\0';
  FUN_14938e7fa(lVar9);
  local_338 = (uint *)0x0;
  local_330 = 0;
  local_358[0] = 0;
  local_358[1] = 0;
  local_32c = 0xffffffff00000080;
  local_324 = 0;
  local_318 = 0;
  local_310 = 0;
  FUN_14938f940(lVar9,local_358);
  uVar14 = param_3[6];
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14058acb2(&local_118,local_358);
  FUN_1493d2f2a(local_400 + 0x158,&local_118,uVar14,local_439);
  local_310 = 0;
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_358);
  local_378 = 0;
  uStack_370 = 0;
  FUN_1492f1448(local_428);
  FUN_1493d5bfc(param_1 + 0x10,local_438 & 0xffffffff,1);
  local_379 = '\0';
  local_37a = 0xff;
  if (0 < (int)local_430) {
    local_3d0 = param_1 + 0xd;
    local_3d8 = param_1 + 0x13;
    uVar33 = local_438 & 0xffffffff;
    uVar32 = 0;
    local_418 = 0;
    local_41c = 0;
    local_3e8 = uVar33;
LAB_1444fed55:
    local_390 = (void *)0x0;
    local_388 = *(int *)(local_378 + 8 + uVar32 * 0x10);
    lVar10 = (longlong)local_388;
    _Src = *(void **)(local_378 + uVar32 * 0x10);
    local_428 = uVar32;
    if (lVar10 == 0) {
      local_384 = 0;
    }
    else {
      FUN_1446dd670(&local_390,local_388,0);
      memcpy(local_390,_Src,lVar10 * 2);
    }
    lVar10 = FUN_1492f2ba8(param_3[6],&local_390);
    if (lVar10 != 0) {
      lVar12 = FUN_145a956cc();
      local_3f8 = lVar10;
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
         (uVar33 = local_3e8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) goto LAB_1444ff2bf;
      local_410 = (longlong)local_41c * 0x2c0 + param_1[0x10];
      local_1c8 = (undefined8 *)0x0;
      local_1c0 = 0;
      local_1b8 = 1;
      local_128 = '\0';
      local_198 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b7 = 0x101010101010101;
      local_3a8 = 0;
      uStack_3a0 = 0;
      FUN_1492f1448(lVar10 + 0x150,&local_3a8);
      local_338 = (uint *)0x0;
      local_330 = 0;
      local_358[0] = 0;
      local_358[1] = 0;
      local_32c = 0xffffffff00000080;
      local_324 = 0;
      local_318 = 0;
      local_310 = 0;
      local_2e8 = 0;
      local_2e0 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_2dc = 0xffffffff00000080;
      local_2d4 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_298 = 0;
      local_290 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_28c = 0xffffffff00000080;
      local_284 = 0;
      local_278 = 0;
      local_270 = 0;
      local_248 = 0;
      local_240 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_23c = 0xffffffff00000080;
      local_234 = 0;
      local_228 = 0;
      local_220 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1ec = 0xffffffff00000080;
      local_1e4 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
        plVar15 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar15 = local_3d0;
        }
        iVar23 = *(int *)((longlong)plVar15 +
                         (ulonglong)((uint)local_428 & (int)param_1[0xf] + 0x7fffffffU) * 4);
        if (iVar23 != -1) {
          lVar10 = param_1[6];
          iVar7 = iVar23;
          do {
            if (local_428 == *(uint *)(lVar10 + (longlong)iVar7 * 0x1a0)) goto LAB_1444ff008;
            iVar7 = *(int *)((longlong)iVar7 * 0x1a0 + lVar10 + 0x198);
          } while (iVar7 != -1);
        }
      }
      goto LAB_1444ff218;
    }
    goto LAB_1444ff2bf;
  }
  local_418 = 0;
  goto LAB_1444ffc37;
  while (iVar23 = *(int *)(lVar12 + 0x198), iVar23 != -1) {
LAB_1444ff008:
    lVar12 = lVar10 + (longlong)iVar23 * 0x1a0;
    if (local_428 == *(uint *)(lVar10 + (longlong)iVar23 * 0x1a0)) goto LAB_1444ff02b;
  }
  lVar12 = 0;
LAB_1444ff02b:
  FUN_1493d5c84(local_358,lVar12 + 8);
  local_438 = (ulonglong)local_330;
  if (local_330 == 0) {
    uVar31 = 1;
    iVar23 = 0;
    uVar32 = 0;
    uVar33 = 0;
  }
  else {
    puVar19 = local_338;
    if (local_338 == (uint *)0x0) {
      puVar19 = local_348;
    }
    uVar24 = *puVar19;
    if (uVar24 == 0) {
      iVar23 = local_330 + 0x1e;
      if (-1 < (int)(local_330 - 1)) {
        iVar23 = local_330 - 1;
      }
      uVar32 = 0;
      uVar33 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar33 = uVar32;
      }
      iVar23 = 0;
      do {
        if (uVar33 == uVar32) goto LAB_1444ff0ed;
        iVar23 = iVar23 + 0x20;
        uVar24 = puVar19[uVar32 + 1];
        uVar32 = uVar32 + 1;
      } while (uVar24 == 0);
    }
    else {
      iVar23 = 0;
      uVar32 = 0;
    }
    uVar31 = (ulonglong)(-uVar24 & uVar24);
    uVar33 = uVar31 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar24 = (iVar23 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    uVar33 = (ulonglong)uVar24;
    if ((int)local_330 <= (int)uVar24) {
      uVar33 = local_438;
    }
  }
  if ((uint)uVar33 != local_330) {
    uVar24 = 0xffffffff;
    local_430 = local_430 & 0xffffffff00000000;
    do {
      lVar10 = (longlong)(int)uVar33 * 0x410;
      if (*(char *)(local_358[0] + 0x390 + lVar10) == '\x01') {
        puVar19 = (uint *)(local_358[0] + lVar10 + 0x30);
        local_408 = puVar19;
        cVar6 = FUN_146f6f4ec();
        if ((local_430 & 1) == 0) {
          if (cVar6 == '\0') {
            uVar14 = FUN_146f781a2(local_410,local_408);
            local_430 = CONCAT44(local_430._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
          }
          else {
            local_430 = (ulonglong)local_430._4_4_ << 0x20;
          }
        }
        else {
          local_430 = CONCAT44(local_430._4_4_,(int)CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
          if (cVar6 == '\0') {
            if (local_359 == '\x01') {
              local_3b8 = (undefined8 *)0x0;
              local_3b0 = 0;
              FUN_1446efa72(&local_3b8,0,2,0x10);
              *local_3b8 = &PTR_LAB_14bcb8f80;
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 1;
              lVar10 = DAT_14c758608 + 1;
              if (lVar12 == 0) {
                LOCK();
                UNLOCK();
                lVar12 = DAT_14c758608 + 2;
                lVar10 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar10;
              local_3b8[2] = lVar12;
              *local_3b8 = &PTR_FUN_14bcb8f10;
              local_3e0 = local_3b8;
              local_3b8 = (undefined8 *)0x0;
              local_3ec = 2;
              local_3b0 = 0;
              if (local_1c0 == 0) {
LAB_1444ff525:
                if (local_1c8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_1c8 != (undefined8 *)0x0) {
                (**(code **)*local_1c8)(local_1c8,0);
                FUN_1446efa72(&local_1c8,0,0,0x10);
                local_1c0 = 0;
                goto LAB_1444ff525;
              }
              local_1c8 = local_3e0;
              local_1c0 = local_3ec;
              if (local_3b0 != 0) {
                if (local_3b8 == (undefined8 *)0x0) goto LAB_1444ff5a3;
                (**(code **)*local_3b8)(local_3b8,0);
                FUN_1446efa72(&local_3b8,0,0,0x10);
                local_3b0 = 0;
              }
              if (local_3b8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_1444ff5a3:
            FUN_146fa0ae2(local_408,local_410,&local_1c8);
          }
        }
      }
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar19 = local_338;
      if (local_338 == (uint *)0x0) {
        puVar19 = local_348;
      }
      iVar7 = (int)uVar32;
      lVar10 = (longlong)iVar7;
      uVar30 = puVar19[lVar10] & uVar24;
      if (uVar30 == 0) {
        iVar29 = local_330 + 0x1e;
        if (-1 < (int)(local_330 - 1)) {
          iVar29 = local_330 - 1;
        }
        iVar29 = iVar29 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar18 = iVar29;
        if (iVar29 < iVar7) {
          iVar18 = iVar7;
        }
        if (iVar7 < iVar29) {
          lVar12 = 0;
          do {
            uVar30 = puVar19[lVar10 + lVar12 + 1];
            if (uVar30 != 0) {
              uVar32 = (ulonglong)(iVar7 + (int)lVar12 + 1);
              uVar24 = 0xffffffff;
              goto LAB_1444ff403;
            }
            iVar23 = iVar23 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar18 - lVar10 != lVar12);
          uVar24 = 0xffffffff;
          iVar7 = iVar18;
        }
        uVar32 = (ulonglong)(iVar7 + 1);
        uVar30 = local_330;
      }
      else {
LAB_1444ff403:
        uVar31 = (ulonglong)(-uVar30 & uVar30);
        uVar33 = uVar31 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar30 = (iVar23 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)local_330 <= (int)uVar30) {
          uVar30 = local_330;
        }
      }
      uVar33 = (ulonglong)uVar30;
    } while (uVar30 != (uint)local_438);
  }
LAB_1444ff0ed:
  lVar10 = *(longlong *)(*(longlong *)(local_410 + 0x58) + 0x80);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(local_410 + 0x58);
  }
  FUN_146fa0812(lVar10 + 0x20,&local_3c0);
  local_3c1 = '\0';
  FUN_14938f6b8(lVar9,&local_3c1);
  if (local_3c1 == '\0') {
    local_3c2 = '\0';
    FUN_14938f412(lVar9,&local_3c2);
    if (local_3c2 == '\x01') {
      local_408 = *(uint **)(*(uint **)(local_410 + 0x58) + 0x20);
      if (local_408 == (uint *)0x0) {
        local_408 = *(uint **)(local_410 + 0x58);
      }
      uVar24 = local_408[6];
      uVar32 = (ulonglong)uVar24;
      local_430 = uVar32;
      if (uVar24 == 0) {
        uVar34 = 1;
        uVar33 = 0;
        local_438 = local_438 & 0xffffffff00000000;
        uVar31 = 0;
      }
      else {
        puVar19 = *(uint **)(local_408 + 4);
        if (*(uint **)(local_408 + 4) == (uint *)0x0) {
          puVar19 = local_408;
        }
        uVar30 = *puVar19;
        if (uVar30 == 0) {
          iVar23 = uVar24 + 0x1e;
          if (-1 < (int)(uVar24 - 1)) {
            iVar23 = uVar24 - 1;
          }
          uVar33 = 0;
          uVar31 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar31 = uVar33;
          }
          local_438 = (ulonglong)local_438._4_4_ << 0x20;
          do {
            if (uVar31 == uVar33) goto LAB_1444ff142;
            local_438 = CONCAT44(local_438._4_4_,(uint)local_438 + 0x20);
            uVar30 = puVar19[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar30 == 0);
        }
        else {
          uVar33 = 0;
          local_438 = (ulonglong)local_438._4_4_ << 0x20;
        }
        uVar34 = (ulonglong)(-uVar30 & uVar30);
        uVar31 = uVar34 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar30 = ((uint)local_438 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        uVar31 = (ulonglong)uVar30;
        if ((int)uVar24 <= (int)uVar30) {
          uVar31 = uVar32;
        }
      }
      if ((uint)uVar31 != uVar24) {
        uVar24 = 0xffffffff;
        do {
          uVar8 = DAT_14c75905c;
          iVar23 = (int)uVar31;
          if ((int)uVar32 <= iVar23) {
            iVar23 = -1;
          }
          if (local_94 < (int)uStack_c0) {
            plVar15 = *(longlong **)(*(longlong *)(local_410 + 0x88) + 0x30);
            plVar16 = (longlong *)(*(longlong *)(local_410 + 0x88) + 0x18);
            if (plVar15 != (longlong *)0x0) {
              plVar16 = plVar15;
            }
            plVar15 = *(longlong **)(*(longlong *)(local_410 + 0xf8) + 0x30);
            plVar20 = (longlong *)(*(longlong *)(local_410 + 0xf8) + 0x18);
            if (plVar15 != (longlong *)0x0) {
              plVar20 = plVar15;
            }
            lVar10 = (longlong)
                     ((int)plVar20[2] *
                     *(int *)(*plVar16 + (longlong)((int)plVar16[2] * iVar23) * 4));
            local_3b0 = *(int *)(*plVar20 + 8 + lVar10 * 0xc);
            local_3b8 = *(undefined8 **)(*plVar20 + lVar10 * 0xc);
            uVar8 = FUN_1448eb174(&local_3b8,0xc,0);
            iVar7 = FUN_1493e386a(&local_c8,uVar8,&local_3b8);
            lVar10 = (longlong)iVar7 * 0x18 + local_c8;
            pbVar17 = (byte *)((longlong)&DAT_149e1e2cc + 2);
            pbVar21 = (byte *)((longlong)&DAT_149e1e2cc + 1);
            pbVar26 = (byte *)&DAT_149e1e2cc;
            pbVar27 = (byte *)((longlong)&DAT_149e1e2cc + 3);
            if (lVar10 != 0 && iVar7 != -1) {
              pbVar26 = (byte *)(lVar10 + 0xc);
              pbVar17 = (byte *)(lVar10 + 0xe);
              pbVar21 = (byte *)(lVar10 + 0xd);
              pbVar27 = (byte *)(lVar10 + 0xf);
            }
            bVar2 = *pbVar27;
            uVar8 = (&DAT_14c758c60)[*pbVar26];
            uVar1 = (&DAT_14c758c60)[*pbVar21];
            plVar15 = (longlong *)(local_3c0 + 0x18);
            if (*(longlong **)(local_3c0 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_3c0 + 0x30);
            }
            lVar10 = *plVar15;
            lVar12 = (longlong)(iVar23 * (int)plVar15[2]) * 0x10;
            *(undefined4 *)(lVar10 + lVar12) = (&DAT_14c758c60)[*pbVar17];
            *(undefined4 *)(lVar10 + 4 + lVar12) = uVar1;
            *(undefined4 *)(lVar10 + 8 + lVar12) = uVar8;
            *(float *)(lVar10 + 0xc + lVar12) = (float)bVar2 * 0.003921569;
          }
          else {
            plVar15 = (longlong *)(local_3c0 + 0x18);
            if (*(longlong **)(local_3c0 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_3c0 + 0x30);
            }
            lVar10 = *plVar15;
            lVar12 = (longlong)(iVar23 * (int)plVar15[2]) * 0x10;
            *(undefined4 *)(lVar10 + lVar12) = DAT_14c75905c;
            *(undefined4 *)(lVar10 + 4 + lVar12) = uVar8;
            *(undefined4 *)(lVar10 + 8 + lVar12) = uVar8;
            *(undefined4 *)(lVar10 + 0xc + lVar12) = 0x3f800000;
          }
          uVar24 = uVar24 & ~(uint)uVar34;
          puVar19 = *(uint **)(local_408 + 4);
          if (*(uint **)(local_408 + 4) == (uint *)0x0) {
            puVar19 = local_408;
          }
          uVar30 = local_408[6];
          uVar32 = (ulonglong)uVar30;
          iVar23 = (int)uVar33;
          lVar10 = (longlong)iVar23;
          uVar22 = puVar19[lVar10] & uVar24;
          if (uVar22 == 0) {
            iVar7 = uVar30 + 0x1e;
            if (-1 < (int)(uVar30 - 1)) {
              iVar7 = uVar30 - 1;
            }
            iVar7 = iVar7 >> 5;
            local_438._0_4_ = (uint)local_438 + 0x20;
            iVar29 = iVar7;
            if (iVar7 < iVar23) {
              iVar29 = iVar23;
            }
            if (iVar23 < iVar7) {
              lVar12 = 0;
              do {
                uVar22 = puVar19[lVar10 + lVar12 + 1];
                if (uVar22 != 0) {
                  uVar33 = (ulonglong)(iVar23 + (int)lVar12 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_1444ff84a;
                }
                local_438._0_4_ = (uint)local_438 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar29 - lVar10 != lVar12);
              uVar24 = 0xffffffff;
              iVar23 = iVar29;
            }
            uVar33 = (ulonglong)(iVar23 + 1);
            uVar31 = uVar32;
          }
          else {
LAB_1444ff84a:
            uVar34 = (ulonglong)(-uVar22 & uVar22);
            uVar31 = uVar34 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar22 = ((uint)local_438 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            uVar31 = (ulonglong)uVar22;
            if ((int)uVar30 <= (int)uVar22) {
              uVar31 = uVar32;
            }
          }
        } while ((int)uVar31 != (int)local_430);
      }
    }
    else {
      cVar6 = FUN_14938f560(lVar9);
      if (cVar6 != '\0') {
        puVar19 = *(uint **)(*(uint **)(local_410 + 0x58) + 0x20);
        if (puVar19 == (uint *)0x0) {
          puVar19 = *(uint **)(local_410 + 0x58);
        }
        uVar24 = puVar19[6];
        if (uVar24 == 0) {
          uVar31 = 1;
          uVar32 = 0;
          iVar23 = 0;
          uVar30 = 0;
        }
        else {
          puVar28 = *(uint **)(puVar19 + 4);
          if (*(uint **)(puVar19 + 4) == (uint *)0x0) {
            puVar28 = puVar19;
          }
          uVar30 = *puVar28;
          if (uVar30 == 0) {
            iVar23 = uVar24 + 0x1e;
            if (-1 < (int)(uVar24 - 1)) {
              iVar23 = uVar24 - 1;
            }
            uVar32 = 0;
            uVar33 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar33 = uVar32;
            }
            iVar23 = 0;
            do {
              if (uVar33 == uVar32) goto LAB_1444ff142;
              iVar23 = iVar23 + 0x20;
              uVar30 = puVar28[uVar32 + 1];
              uVar32 = uVar32 + 1;
            } while (uVar30 == 0);
          }
          else {
            uVar32 = 0;
            iVar23 = 0;
          }
          uVar31 = (ulonglong)(-uVar30 & uVar30);
          uVar33 = uVar31 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar30 = (iVar23 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 <= (int)uVar30) {
            uVar30 = uVar24;
          }
        }
        if (uVar30 != uVar24) {
          uVar25 = 0xffffffff;
          uVar22 = uVar24;
          do {
            if ((int)uVar22 <= (int)uVar30) {
              uVar30 = 0xffffffff;
            }
            uVar8 = (&DAT_14c758c60)[(ulonglong)local_3b8 >> 8 & 0xff];
            uVar1 = (&DAT_14c758c60)[(ulonglong)local_3b8 & 0xff];
            plVar15 = (longlong *)(local_3c0 + 0x18);
            if (*(longlong **)(local_3c0 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_3c0 + 0x30);
            }
            lVar10 = *plVar15;
            lVar12 = (longlong)(int)(uVar30 * (int)plVar15[2]) * 0x10;
            *(undefined4 *)(lVar10 + lVar12) = (&DAT_14c758c60)[(ulonglong)local_3b8 >> 0x10 & 0xff]
            ;
            *(undefined4 *)(lVar10 + 4 + lVar12) = uVar8;
            *(undefined4 *)(lVar10 + 8 + lVar12) = uVar1;
            *(float *)(lVar10 + 0xc + lVar12) = (float)local_3b8._3_1_ * 0.003921569;
            uVar25 = ~(uint)uVar31 & uVar25;
            puVar28 = *(uint **)(puVar19 + 4);
            if (*(uint **)(puVar19 + 4) == (uint *)0x0) {
              puVar28 = puVar19;
            }
            uVar22 = puVar19[6];
            iVar7 = (int)uVar32;
            lVar10 = (longlong)iVar7;
            uVar30 = puVar28[lVar10] & uVar25;
            if (uVar30 == 0) {
              iVar29 = uVar22 + 0x1e;
              if (-1 < (int)(uVar22 - 1)) {
                iVar29 = uVar22 - 1;
              }
              iVar29 = iVar29 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar18 = iVar29;
              if (iVar29 < iVar7) {
                iVar18 = iVar7;
              }
              if (iVar7 < iVar29) {
                lVar12 = 0;
                do {
                  uVar30 = puVar28[lVar10 + lVar12 + 1];
                  if (uVar30 != 0) {
                    uVar32 = (ulonglong)(iVar7 + (int)lVar12 + 1);
                    uVar25 = 0xffffffff;
                    goto LAB_1444ffb9f;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar12 = lVar12 + 1;
                } while (iVar18 - lVar10 != lVar12);
                uVar25 = 0xffffffff;
                lVar10 = (longlong)iVar18;
              }
              uVar32 = lVar10 + 1U & 0xffffffff;
              uVar30 = uVar22;
            }
            else {
LAB_1444ffb9f:
              uVar31 = (ulonglong)(-uVar30 & uVar30);
              uVar33 = uVar31 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar30 = (iVar23 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if ((int)uVar22 <= (int)uVar30) {
                uVar30 = uVar22;
              }
            }
          } while (uVar30 != uVar24);
        }
      }
    }
  }
LAB_1444ff142:
  lVar10 = local_3f8;
  if (local_41c == 0) {
    FUN_14939e6ea(local_3f8,&local_379);
    FUN_14939e83e(lVar10,&local_37a);
    plVar15 = local_3d8;
    lVar10 = local_400;
    if (local_379 == '\x01') {
      if (local_439 != '\0') {
        lVar12 = *(longlong *)(local_400 + 0x188);
        FUN_1401842de(local_3d8);
        FUN_14058b698(plVar15,lVar12 + 0x38);
        FUN_147a2cbea(*(longlong *)(lVar10 + 0x188) + 0x38);
      }
      lVar10 = local_400;
      bVar2 = FUN_1493d5ce2(param_1,local_400);
      bVar3 = FUN_1493d5fd4(param_1,lVar10);
      bVar4 = FUN_1493d6268(param_1,lVar10);
      bVar5 = FUN_1493d650e(param_1,lVar10);
      local_418 = CONCAT71((int7)(local_418 >> 8),(byte)local_418 | bVar5 | bVar4 | bVar3 | bVar2);
    }
  }
  local_41c = local_41c + 1;
LAB_1444ff218:
  FUN_1493d6936(local_358);
  FUN_1447a1747(local_3a8,uStack_3a0 & 0xffffffff);
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  if (local_128 == '\x01') {
    local_128 = '\0';
  }
  if (local_1c0 != 0) {
    uVar33 = local_3e8;
    if (local_1c8 == (undefined8 *)0x0) goto LAB_1444ff2bf;
    (**(code **)*local_1c8)(local_1c8,0);
    FUN_1446efa72(&local_1c8,0,0,0x10);
    local_1c0 = 0;
  }
  uVar33 = local_3e8;
  if (local_1c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
    uVar33 = local_3e8;
  }
LAB_1444ff2bf:
  uVar32 = local_428;
  if (local_390 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar32 = uVar32 + 1;
  if (uVar32 == uVar33) goto LAB_1444ffc1c;
  goto LAB_1444fed55;
LAB_1444ffc1c:
  local_418 = local_418 & 0xffffffffffffff01;
LAB_1444ffc37:
  *(char *)((longlong)param_1 + 0x11a) = local_379;
  *(undefined1 *)(param_1 + 0x12) = local_37a;
  *(char *)((longlong)param_1 + 0x119) = (char)local_418;
  if (*(char *)(param_3[5] + 0x49) == '\0') {
    FUN_1493c1392();
  }
  lVar9 = local_400;
  FUN_1493d6a08(param_1,local_400);
  *(longlong *)(param_2 + 8) = lVar9;
  FUN_1447a1747(local_378,uStack_370 & 0xffffffff);
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e157a(&local_c8);
LAB_1444fea88:
  if ((local_70 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444ffcc6 FUN_1444ffcc6 body=1206 status=ok
// SIG undefined FUN_1444ffcc6(void)

undefined1 * FUN_1444ffcc6(longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  ulonglong local_88;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  if ((longlong *)param_3[3] != (longlong *)0x0) {
    lVar7 = (**(code **)(*(longlong *)param_3[3] + 0x2e8))();
    lVar8 = (**(code **)(*param_1 + 0x2a0))(param_1);
    if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
         lVar8 + 0x30)) && (plVar2 = (longlong *)param_3[3], plVar2 != (longlong *)0x0)) {
      lVar7 = FUN_145a955e0();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        (**(code **)(*plVar2 + 0x2e8))(plVar2);
        if (*(int *)(param_3 + 2) == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = (undefined2 *)param_3[1];
        }
        lVar7 = FUN_140277b32(0,*param_3,puVar17);
        if (lVar7 != 0) {
          local_b0 = lVar7;
          lVar7 = FUN_1406d0862();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(local_b0 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_b0 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            if ((char)param_1[0x23] == '\0') {
              if (0 < (int)param_1[0x11]) {
                local_a0 = (longlong *)(local_b0 + 0x158);
                lVar7 = 0;
                do {
                  lVar8 = lVar7 * 0x2c0 + param_1[0x10];
                  cVar5 = FUN_146f6f4ec(lVar8);
                  if (cVar5 != '\0') break;
                  lVar21 = *(longlong *)(*(longlong *)(lVar8 + 0x80) + 0x80);
                  if (lVar21 == 0) {
                    lVar21 = *(longlong *)(lVar8 + 0x80);
                  }
                  local_78 = lVar7;
                  FUN_146fa2484(lVar21 + 0x20,&local_68,DAT_14c99c688);
                  local_90 = *(uint **)(*(uint **)(lVar8 + 0x80) + 0x20);
                  if (local_90 == (uint *)0x0) {
                    local_90 = *(uint **)(lVar8 + 0x80);
                  }
                  uVar20 = local_90[6];
                  uVar9 = (ulonglong)uVar20;
                  local_a8 = uVar9;
                  if (uVar20 == 0) {
                    local_88 = 1;
                    iVar19 = 0;
                    uVar22 = 0;
                    uVar15 = 0;
                  }
                  else {
                    puVar10 = *(uint **)(local_90 + 4);
                    if (*(uint **)(local_90 + 4) == (uint *)0x0) {
                      puVar10 = local_90;
                    }
                    uVar12 = *puVar10;
                    if (uVar12 == 0) {
                      iVar19 = uVar20 + 0x1e;
                      if (-1 < (int)(uVar20 - 1)) {
                        iVar19 = uVar20 - 1;
                      }
                      uVar22 = 0;
                      uVar3 = iVar19 >> 5;
                      if (iVar19 >> 5 < 1) {
                        uVar3 = 0;
                      }
                      iVar19 = 0;
                      do {
                        if (uVar3 == uVar22) goto LAB_1444fff6a;
                        iVar19 = iVar19 + 0x20;
                        uVar12 = puVar10[uVar22 + 1];
                        uVar22 = uVar22 + 1;
                      } while (uVar12 == 0);
                    }
                    else {
                      iVar19 = 0;
                      uVar22 = 0;
                    }
                    local_88 = (ulonglong)(-uVar12 & uVar12);
                    uVar15 = local_88 * 2 + 1;
                    lVar7 = 0x3f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                      }
                    }
                    uVar12 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                    uVar15 = (ulonglong)uVar12;
                    if ((int)uVar20 <= (int)uVar12) {
                      uVar15 = uVar9;
                    }
                  }
                  if ((uint)uVar15 != uVar20) {
                    uVar20 = 0xffffffff;
                    lVar7 = local_b0;
                    do {
                      iVar11 = (int)uVar15;
                      if ((int)uVar9 <= iVar11) {
                        iVar11 = -1;
                      }
                      plVar16 = (longlong *)(local_68 + 0x18);
                      if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
                        plVar16 = *(longlong **)(local_68 + 0x30);
                      }
                      lVar8 = *plVar16;
                      lVar21 = (longlong)(iVar11 * (int)plVar16[2]);
                      if (0 < (longlong)*(int *)(lVar7 + 0x160)) {
                        lVar18 = 0;
                        do {
                          if (*(longlong *)(*local_a0 + 0x10 + lVar18) ==
                              *(longlong *)(lVar8 + lVar21 * 8)) goto LAB_14450008f;
                          lVar18 = lVar18 + 0x30;
                        } while ((longlong)*(int *)(lVar7 + 0x160) * 0x30 != lVar18);
                      }
                      local_7c = iVar19;
                      FUN_14003fbd6();
                      local_98 = DAT_14caea080;
                      iVar19 = *(int *)(local_b0 + 0x160);
                      *(uint *)(local_b0 + 0x160) = iVar19 + 1U;
                      lVar7 = (longlong)iVar19;
                      if (*(uint *)(local_b0 + 0x164) < iVar19 + 1U) {
                        local_70 = (longlong)iVar19;
                        FUN_147d597be(local_a0,iVar19);
                        lVar7 = local_70;
                      }
                      uVar4 = local_98;
                      local_98 = lVar7 * 0x30;
                      FUN_147d53066(*local_a0 + lVar7 * 0x30,uVar4,
                                    *(undefined8 *)(lVar8 + lVar21 * 8));
                      lVar7 = *local_a0;
                      *(undefined2 *)(lVar7 + 0x18 + local_98) = 1;
                      puVar1 = (undefined8 *)(lVar7 + 0x1c + local_98);
                      *puVar1 = &DAT_3f8000003f800000;
                      puVar1[1] = &DAT_3f8000003f800000;
                      uVar9 = (ulonglong)local_90[6];
                      lVar7 = local_b0;
                      iVar19 = local_7c;
LAB_14450008f:
                      uVar20 = uVar20 & ~(uint)local_88;
                      puVar10 = *(uint **)(local_90 + 4);
                      if (*(uint **)(local_90 + 4) == (uint *)0x0) {
                        puVar10 = local_90;
                      }
                      iVar11 = (int)uVar22;
                      lVar8 = (longlong)iVar11;
                      uVar12 = puVar10[lVar8] & uVar20;
                      iVar6 = (int)uVar9;
                      if (uVar12 == 0) {
                        iVar13 = iVar6 + 0x1e;
                        if (-1 < iVar6 + -1) {
                          iVar13 = iVar6 + -1;
                        }
                        iVar13 = iVar13 >> 5;
                        iVar19 = iVar19 + 0x20;
                        iVar14 = iVar13;
                        if (iVar13 < iVar11) {
                          iVar14 = iVar11;
                        }
                        if (iVar11 < iVar13) {
                          lVar21 = 0;
                          do {
                            uVar12 = puVar10[lVar8 + lVar21 + 1];
                            if (uVar12 != 0) {
                              uVar22 = (ulonglong)(iVar11 + (int)lVar21 + 1);
                              uVar20 = 0xffffffff;
                              goto LAB_144500112;
                            }
                            iVar19 = iVar19 + 0x20;
                            lVar21 = lVar21 + 1;
                          } while (iVar14 - lVar8 != lVar21);
                          uVar20 = 0xffffffff;
                          iVar11 = iVar14;
                        }
                        uVar22 = (ulonglong)(iVar11 + 1);
                        uVar15 = uVar9;
                        lVar7 = local_b0;
                      }
                      else {
LAB_144500112:
                        local_88 = (ulonglong)(-uVar12 & uVar12);
                        uVar15 = local_88 * 2 + 1;
                        lVar8 = 0x3f;
                        if (uVar15 != 0) {
                          for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                          }
                        }
                        uVar12 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
                        uVar15 = (ulonglong)uVar12;
                        if (iVar6 <= (int)uVar12) {
                          uVar15 = uVar9;
                        }
                      }
                    } while ((int)uVar15 != (int)local_a8);
                  }
LAB_1444fff6a:
                  lVar7 = local_78 + 1;
                } while (lVar7 < (int)param_1[0x11]);
              }
              FUN_1493d6bb4(param_3,local_b0,plVar2);
            }
            if (param_3[7] == 0) {
              FUN_1492f5fc0(plVar2,local_b0);
            }
            *(longlong *)(param_2 + 8) = local_b0;
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144500180 FUN_144500180 body=335 status=ok
// SIG undefined FUN_144500180(void)

undefined1 * FUN_144500180(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  lVar2 = FUN_1493db60e(param_3,uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1493db686(param_3,uVar1);
    if (lVar2 != 0) {
      if (DAT_14cb10130 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140754f84;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_147da9a76;
        local_50 = FUN_1409f3105;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
        if ((*(longlong *)(param_3 + 0x28) != 0) &&
           (*(char *)(*(longlong *)(param_3 + 0x28) + 0x49) == '\0')) {
          FUN_1493c1392();
        }
        goto LAB_1445001bd;
      }
    }
  }
  lVar2 = 0;
LAB_1445001bd:
  *param_2 = 0;
  *(longlong *)(param_2 + 8) = lVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445002d0 FUN_1445002d0 body=400 status=ok
// SIG undefined FUN_1445002d0(void)

void FUN_1445002d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_144500318;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_144500318;
    }
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
LAB_14450037b:
    lVar6 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_14450037b;
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar5 = FUN_145a9445c();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) && (lVar6 != 0)) && (*param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_144500318:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144500476 FUN_144500476 body=536 status=ok
// SIG undefined FUN_144500476(void)

undefined8 FUN_144500476(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  longlong local_58 [6];
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    lVar2 = FUN_145a94548();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (param_2 == 0) {
LAB_14450053f:
        FUN_1492ee7cc(param_3,local_58);
        uVar4 = *(undefined8 *)(param_2 + 0x1c8);
        lVar2 = local_58[0];
      }
      else {
        lVar2 = FUN_1413255c0();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_14450053f;
        local_58[4] = 0;
        local_58[5] = 0;
        cVar1 = FUN_149381720(param_3);
        if ((cVar1 == '\0') || (lVar2 = FUN_1492f2702(param_4,local_58 + 4), lVar2 == 0)) {
LAB_14450052e:
          uVar4 = *(undefined8 *)(param_2 + 0x1c8);
          lVar2 = local_58[4];
        }
        else {
          lVar3 = FUN_145a9445c();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_14450052e;
          local_58[2] = 0;
          local_58[3] = 0;
          local_58[0] = 0;
          local_58[1] = 0;
          cVar1 = FUN_1492f4b30(lVar2);
          if (((cVar1 != '\0') && (lVar2 = FUN_140081d40(local_58,0), lVar2 != 0)) &&
             (DAT_14cb10130 == 0)) {
            local_70 = &local_28;
            local_28 = FUN_140754f84;
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
          uVar4 = *(undefined8 *)(param_2 + 0x1c8);
          lVar2 = local_58[4];
          if (local_58[2] != 0) {
            FUN_1400020a8();
            lVar2 = local_58[4];
          }
        }
      }
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1445004a1;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1c8);
LAB_1445004a1:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 144500690 FUN_144500690 body=134 status=ok
// SIG undefined FUN_144500690(void)

undefined1 * FUN_144500690(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  lVar2 = FUN_1493dbc1d(param_3,uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_1493dbc95(param_3,uVar1);
    if (lVar2 != 0) {
      lVar3 = FUN_145a57476();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if ((*(longlong *)(param_3 + 0x28) != 0) &&
           (*(char *)(*(longlong *)(param_3 + 0x28) + 0x49) == '\0')) {
          FUN_1493c1392();
        }
        goto LAB_1445006bb;
      }
    }
  }
  lVar2 = 0;
LAB_1445006bb:
  *param_2 = 0;
  *(longlong *)(param_2 + 8) = lVar2;
  return param_2;
}



// FUNCTION 144500716 FUN_144500716 body=133 status=ok
// SIG undefined FUN_144500716(void)

void FUN_144500716(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    lVar1 = FUN_145a57476();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14450072b;
  }
  lVar3 = 0;
LAB_14450072b:
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    lVar2 = FUN_145ba0dac();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar3 != 0)) && (*param_2 != 0)) {
      FUN_1492f5fc0(lVar1,lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1445007b9 FUN_1445007b9 body=69 status=ok
// SIG undefined FUN_1445007b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445007b9(void)

{
  _DAT_14cc147e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445007fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc147e8,1);
  return;
}



// FUNCTION 1445007fe FUN_1445007fe body=262 status=ok
// SIG undefined FUN_1445007fe(void)

longlong * FUN_1445007fe(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  plVar2 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar4);
  if (cVar1 == '\0') {
LAB_1445008a7:
    *param_1 = 0;
  }
  else {
    if ((char)param_3 == '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      cVar1 = FUN_142781902(&local_38,puVar4,0);
      if (cVar1 == '\0') goto LAB_1445008a7;
    }
    else {
      FUN_1493dcb34(&local_38,param_2);
    }
    lVar3 = FUN_14287d3da(local_38,uStack_30,local_3c,param_3);
    if (lVar3 != 0 && (char)param_3 == '\0') {
      FUN_146987496(lVar3);
      FUN_146987504(lVar3,1);
    }
    *param_1 = lVar3;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144500906 FUN_144500906 body=2328 status=ok
// SIG undefined FUN_144500906(void)

undefined8 * FUN_144500906(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  byte bVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 local_180;
  undefined1 local_178;
  uint local_16c;
  char local_165;
  uint local_164;
  ulonglong local_160;
  int local_158;
  int iStack_154;
  undefined4 local_150;
  undefined1 local_14c;
  char local_14b;
  longlong local_148;
  undefined1 local_13c [4];
  longlong *local_138 [2];
  longlong *local_128;
  longlong *local_120;
  longlong *local_118 [2];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined ***local_98;
  ulonglong *local_90;
  undefined **local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_5c;
  byte local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = param_1 + -0x38;
  cVar6 = FUN_1493e6440(lVar1,&DAT_14bcb709e);
  if (cVar6 == '\0') {
    *(undefined1 *)(param_2 + 7) = 0;
    goto LAB_14450094c;
  }
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(*(longlong *)(param_1 + -8) + 0x30);
  lVar12 = (longlong)local_b0;
  _Src = *(void **)(*(longlong *)(param_1 + -8) + 0x28);
  if (lVar12 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_b0,0);
    memcpy(local_b8,_Src,lVar12 * 2);
  }
  FUN_1445007fe(&local_c0,&local_b8,0);
  lVar12 = local_c0;
  if ((local_c0 == 0) || (cVar6 = FUN_146987294(local_c0), cVar6 == '\0')) {
    FUN_140009b9a(local_e0,&local_b8);
    local_88 = (undefined **)0x14bcb7106;
    local_80._0_4_ = 0x11;
    FUN_1446e940c(local_138,&local_88);
    local_88 = (undefined **)0x14bcb712a;
    local_80._0_4_ = 0x18;
    FUN_1446e940c(local_104,&local_88);
    local_88 = (undefined **)0x14bcb70a6;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0x2f);
    FUN_140208c1e(local_100,local_104,local_138,&local_88);
    FUN_14023409e(&local_f0,local_100,1);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&uStack_78,local_e0);
    local_90 = (ulonglong *)&uStack_68;
    local_98 = &local_88;
    FUN_14010d304(&local_158);
    local_a8 = local_f0;
    local_a0 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_a8,&local_158);
    FUN_14007f2db(CONCAT44(iStack_154,local_158),local_150);
    if (CONCAT44(iStack_154,local_158) != 0) {
      FUN_1400020a8();
    }
    if (uStack_78 != (longlong *)0x0) {
      (**(code **)(*uStack_78 + 0x10))();
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar8 = (int *)((longlong)local_e8 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
  }
  else {
    if (DAT_14c75ed80 != 0) {
      piVar8 = &DAT_14c75ed88;
      iVar10 = DAT_14c75ed80;
      do {
        if (iVar10 == *(int *)(lVar12 + 0x18)) {
          bVar5 = *(byte *)(piVar8 + -1);
          uVar14 = (ulonglong)bVar5;
          switch(uVar14) {
          case 0:
            local_16c = 1;
            break;
          case 1:
            local_16c = 2;
            break;
          case 2:
            local_16c = 3;
            break;
          case 3:
            local_16c = 4;
            break;
          case 4:
            local_16c = 5;
            break;
          case 5:
            local_16c = 9;
            break;
          case 6:
            local_16c = 8;
            break;
          case 7:
            local_16c = 10;
            break;
          case 8:
            local_16c = 0xb;
            break;
          default:
            if (bVar5 == 0xff) goto LAB_144500a29;
            local_16c = 0;
          }
          uVar15 = *(uint *)(lVar12 + 0x10);
          uVar13 = 0xf;
          if (uVar15 < 0xf) {
            uVar13 = uVar15;
          }
          local_88 = &PTR_FUN_14bcb3bb0;
          local_80 = (longlong *)0x0;
          uStack_78 = (longlong *)0x0;
          local_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          local_60 = 1;
          local_58[0] = 0;
          local_180 = FUN_1493dcbf9(&local_c0,uVar14);
          local_178 = 1;
          local_188 = local_16c;
          local_16c = uVar13;
          FUN_1493e3e78(&local_88,*(undefined4 *)(lVar12 + 4),*(undefined4 *)(lVar12 + 8),uVar13);
          local_164 = uVar15;
          if (uVar15 == 0) goto LAB_144501038;
          local_165 = (bVar5 < 2) * '\x02';
          lVar9 = 0;
          uVar15 = 0;
          local_160 = uVar14;
          goto LAB_144500f86;
        }
        iVar10 = *piVar8;
        piVar8 = piVar8 + 2;
      } while (iVar10 != 0);
    }
LAB_144500a29:
    lVar9 = 8;
    pwVar11 = L"UNKNOWN";
    do {
      if (*(int *)(&UNK_149ef2c98 + lVar9) == *(int *)(lVar12 + 0x18)) {
        pwVar11 = *(wchar_t **)((longlong)&DAT_149ef2ca0 + lVar9);
        break;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x7a8);
    FUN_140056680(local_100,pwVar11);
    FUN_140233b1a(local_118,local_100);
    iVar10 = *(int *)(lVar12 + 0x18);
    local_88 = (undefined **)0x14bcb71ae;
    local_80._0_4_ = 0x11;
    FUN_1446e940c(local_104,&local_88);
    local_88 = (undefined **)0x14bcb712a;
    local_80._0_4_ = 0x18;
    FUN_1446e940c(local_13c,&local_88);
    local_88 = (undefined **)0x14bcb715c;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0x28);
    FUN_140208c1e(local_138,local_13c,local_104,&local_88);
    FUN_14023409e(&local_128,local_138,1);
    local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
    uStack_78 = (longlong *)0x0;
    local_70 = 0;
    uStack_68 = 4;
    local_80 = (longlong *)(longlong)iVar10;
    FUN_14023423e(local_58,local_118);
    local_90 = &local_48;
    local_98 = &local_88;
    FUN_14010d304(&local_158);
    local_a8 = local_128;
    local_a0 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_a8,&local_158);
    FUN_14007f2db(CONCAT44(iStack_154,local_158),local_150);
    if (CONCAT44(iStack_154,local_158) != 0) {
      FUN_1400020a8();
    }
    lVar12 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_88 + lVar12) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_88 + lVar12) + 0x10))();
        *(undefined8 *)((longlong)&local_88 + lVar12) = 0;
        *(undefined4 *)((longlong)&local_80 + lVar12) = 0;
      }
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != -0x10);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar8 = (int *)((longlong)local_120 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_100[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1493e5dea(lVar1,local_d0);
  *(undefined1 *)(param_2 + 7) = 0;
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  goto LAB_144500e36;
  while( true ) {
    lVar7 = FUN_1493e5230(&local_88,uVar15);
    lVar9 = lVar9 + lVar7;
    uVar15 = uVar15 + 1;
    if (local_16c == uVar15) break;
LAB_144500f86:
    plVar2 = local_80;
    uVar13 = *(uint *)(lVar12 + 4) >> ((byte)uVar15 & 0x1f);
    uVar16 = *(uint *)(lVar12 + 8) >> ((byte)uVar15 & 0x1f);
    if (local_80 == (longlong *)0x0) {
      local_148 = 0;
    }
    else {
      if (((ulonglong)local_80[3] >> 0x3e & 1) == 0) {
        (**(code **)(*local_80 + 8))(local_80);
      }
      local_148 = plVar2[1];
      lVar12 = local_c0;
    }
    uVar14 = local_160;
    local_148 = local_148 + lVar9;
    local_150 = 1;
    local_14c = (undefined1)local_160;
    local_14b = local_165;
    local_158 = uVar13 + (uVar13 == 0);
    iStack_154 = uVar16 + (uVar16 == 0);
    cVar6 = FUN_14287dc9e(lVar12,&local_158,uVar15);
    if (cVar6 == '\0') {
      local_98 = (undefined ***)0x14bcb7218;
      local_90._0_4_ = 0x11;
      FUN_1446e940c(local_d0,&local_98);
      local_98 = (undefined ***)0x14bcb712a;
      local_90._0_4_ = 0x18;
      FUN_1446e940c(local_100,&local_98);
      local_98 = (undefined ***)0x14bcb71d2;
      local_90 = (ulonglong *)CONCAT44(local_90._4_4_,0x22);
      FUN_140208c1e(&local_a8,local_100,local_d0,&local_98);
      FUN_1493e5dea(lVar1,&local_a8);
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      *(undefined1 *)(param_2 + 7) = 0;
      goto LAB_144501196;
    }
  }
LAB_144501038:
  local_60 = FUN_1493dcbf9(&local_c0,uVar14 & 0xffffffff);
  plVar2 = local_80;
  if (((uint)uVar14 < 9) && ((0x1b4U >> ((uint)uVar14 & 0x1f) & 1) != 0)) {
    local_70 = 6;
  }
  if (1 < local_164) {
    local_5c = 0xe;
    local_58[0] = 1;
  }
  *param_2 = &PTR_FUN_14bcb3bb0;
  local_80 = (longlong *)0x0;
  param_2[1] = plVar2;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_78._4_4_;
  *(undefined4 *)(param_2 + 3) = local_70;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
  *(ulonglong *)((longlong)param_2 + 0x19) =
       CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,local_70._1_3_));
  *(ulonglong *)((longlong)param_2 + 0x21) = CONCAT17(local_60,CONCAT43(uStack_64,uStack_68._1_3_));
  *(byte *)(param_2 + 6) = local_58[0];
  if ((local_58[0] & 1) != 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = local_5c;
  }
  *(undefined1 *)(param_2 + 7) = 1;
LAB_144501196:
  plVar2 = local_80;
  local_88 = &PTR_FUN_14bcb3bb0;
  if ((local_58[0] & 1) != 0) {
    local_58[0] = 0;
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 3;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (((uint)lVar1 & 0x3fffffff) == 1) {
      (**(code **)(*local_80 + 0x10))(local_80);
      plVar2[1] = 0;
      plVar2[2] = 0;
      LOCK();
      puVar4 = (ulonglong *)(plVar2 + 3);
      uVar14 = *puVar4;
      *puVar4 = *puVar4 - 0x40000000;
      UNLOCK();
      if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar2)(plVar2,1);
      }
    }
  }
LAB_144500e36:
  FUN_147af4344(&local_c0,local_c0);
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14450094c:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144501220 FUN_144501220 body=2653 status=ok
// SIG undefined FUN_144501220(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_144501220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  byte bVar8;
  int *piVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined ****ppppuVar12;
  uint uVar13;
  undefined ****ppppuVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined ****ppppuVar19;
  uint uVar20;
  undefined ****ppppuVar21;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_190;
  undefined1 local_188;
  uint local_178;
  uint local_174;
  uint local_170;
  int local_16c;
  ulonglong local_168;
  undefined ***local_160;
  ulonglong *local_158;
  int local_148;
  int iStack_144;
  uint local_140;
  undefined1 local_13c;
  char local_13b;
  undefined8 local_138;
  undefined1 local_12c [4];
  undefined ***local_128 [2];
  undefined ***local_118;
  longlong *local_110;
  longlong *local_108 [2];
  undefined1 local_f4 [4];
  undefined ***local_f0 [2];
  undefined ***local_e0;
  longlong *local_d8;
  longlong *local_d0 [2];
  undefined ***local_c0 [2];
  int *local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined ***local_98;
  longlong *local_90;
  undefined **local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char local_60;
  undefined4 local_5c;
  byte local_58 [8];
  uint local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1 + -0x40;
  cVar6 = FUN_1493e6440(lVar1,&DAT_14bcb709e);
  if (cVar6 == '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
    goto LAB_144501266;
  }
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(*(longlong *)(param_1 + -0x10) + 0x30);
  lVar11 = (longlong)local_a0;
  _Src = *(void **)(*(longlong *)(param_1 + -0x10) + 0x28);
  if (lVar11 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,_Src,lVar11 * 2);
  }
  FUN_1445007fe(&local_b0,&local_a8,0);
  piVar3 = local_b0;
  if (local_b0 == (int *)0x0) {
    FUN_140009b9a(local_d0,&local_a8);
    local_88 = (undefined **)0x14bcb7106;
    local_80._0_4_ = 0x11;
    FUN_1446e940c(local_128,&local_88);
    local_88 = (undefined **)0x14bcb712a;
    local_80._0_4_ = 0x18;
    FUN_1446e940c(local_f4,&local_88);
    local_88 = (undefined **)0x14bcb70a6;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0x2f);
    FUN_140208c1e(local_f0,local_f4,local_128,&local_88);
    FUN_14023409e(&local_e0,local_f0,1);
    local_88 = (undefined **)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(&uStack_78,local_d0);
    local_158 = (ulonglong *)&uStack_68;
    local_160 = &local_88;
    FUN_14010d304(&local_148);
    local_98 = local_e0;
    local_90 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_98,&local_148);
    FUN_14007f2db(CONCAT44(iStack_144,local_148),local_140);
    if (CONCAT44(iStack_144,local_148) != 0) {
      FUN_1400020a8();
    }
    if (uStack_78 != (longlong *)0x0) {
      (**(code **)(*uStack_78 + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar3 = (int *)((longlong)local_d8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_f0[0] != (undefined ***)0x0) {
      (*(code *)(*local_f0[0])[2])();
    }
LAB_144501774:
    FUN_1493e5dea(lVar1,local_c0);
    *(undefined1 *)(param_2 + 8) = 0;
    if (local_c0[0] != (undefined ***)0x0) {
      (*(code *)(*local_c0[0])[2])();
    }
  }
  else {
    iVar7 = FUN_14287d0d8(local_b0);
    if (iVar7 == 0) {
      lVar11 = 0x14;
      if ((((*(byte *)(piVar3 + 7) & 1) != 0) || (cVar6 = FUN_1469872c0(piVar3), cVar6 != '\0')) ||
         (lVar11 = 0xc, *piVar3 == 3)) goto LAB_144501513;
    }
    else {
      cVar6 = FUN_1469872c0(piVar3);
      lVar11 = 0x14;
      if (cVar6 != '\0') {
LAB_144501513:
        if (DAT_14c75ed80 != 0) {
          local_178 = *(uint *)((longlong)piVar3 + lVar11);
          piVar9 = &DAT_14c75ed88;
          iVar7 = DAT_14c75ed80;
          do {
            if (iVar7 == piVar3[6]) {
              uVar15 = (ulonglong)*(byte *)(piVar9 + -1);
              switch(uVar15) {
              case 0:
                uVar16 = 1;
                break;
              case 1:
                uVar16 = 2;
                break;
              case 2:
                uVar16 = 3;
                break;
              case 3:
                uVar16 = 4;
                break;
              case 4:
                uVar16 = 5;
                break;
              case 5:
                uVar16 = 9;
                break;
              case 6:
                uVar16 = 8;
                break;
              case 7:
                uVar16 = 10;
                break;
              case 8:
                uVar16 = 0xb;
                break;
              default:
                if (*(byte *)(piVar9 + -1) == 0xff) goto LAB_144501541;
                uVar16 = 0;
              }
              iVar7 = *piVar3;
              uVar20 = piVar3[4];
              local_174 = 0xf;
              if (uVar20 < 0xf) {
                local_174 = uVar20;
              }
              local_70 = 0;
              uStack_6c = 0;
              uStack_68 = 0;
              uStack_64 = 0;
              local_80 = (longlong *)0x0;
              uStack_78 = (longlong *)0x0;
              local_60 = '\x01';
              local_58[0] = 0;
              local_88 = &PTR_FUN_14bcb9060;
              local_50 = 0;
              local_4c = 0;
              local_190 = FUN_1493dcbf9(&local_b0,uVar15);
              if (iVar7 == 3) {
                local_4c = 1;
              }
              local_50 = local_178;
              local_188 = 1;
              local_198 = uVar16;
              local_16c = iVar7;
              FUN_1493e3e78(&local_88,piVar3[1],piVar3[2],local_174);
              local_170 = uVar20;
              if (uVar20 == 0) goto LAB_1445018f0;
              uVar20 = 0;
              local_168 = uVar15;
              goto LAB_144501986;
            }
            iVar7 = *piVar9;
            piVar9 = piVar9 + 2;
          } while (iVar7 != 0);
        }
LAB_144501541:
        lVar11 = 8;
        pwVar10 = L"UNKNOWN";
        do {
          if (*(int *)(&UNK_149ef2c98 + lVar11) == piVar3[6]) {
            pwVar10 = *(wchar_t **)((longlong)&DAT_149ef2ca0 + lVar11);
            break;
          }
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x7a8);
        FUN_140056680(local_f0,pwVar10);
        FUN_140233b1a(local_108,local_f0);
        iVar7 = piVar3[6];
        local_88 = (undefined **)0x14bcb71ae;
        local_80._0_4_ = 0x11;
        FUN_1446e940c(local_f4,&local_88);
        local_88 = (undefined **)0x14bcb712a;
        local_80._0_4_ = 0x18;
        FUN_1446e940c(local_12c,&local_88);
        local_88 = (undefined **)0x14bcb715c;
        local_80 = (longlong *)CONCAT44(local_80._4_4_,0x28);
        FUN_140208c1e(local_128,local_12c,local_f4,&local_88);
        FUN_14023409e(&local_118,local_128,1);
        local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
        uStack_78 = (longlong *)0x0;
        local_70 = 0;
        uStack_68 = 4;
        local_80 = (longlong *)(longlong)iVar7;
        FUN_14023423e(local_58,local_108);
        local_158 = &local_48;
        local_160 = &local_88;
        FUN_14010d304(&local_148);
        local_98 = local_118;
        local_90 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_110 + 1) = (int)local_110[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c0,&local_98,&local_148);
        FUN_14007f2db(CONCAT44(iStack_144,local_148),local_140);
        if (CONCAT44(iStack_144,local_148) != 0) {
          FUN_1400020a8();
        }
        lVar11 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_88 + lVar11) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_88 + lVar11) + 0x10))();
            *(undefined8 *)((longlong)&local_88 + lVar11) = 0;
            *(undefined4 *)((longlong)&local_80 + lVar11) = 0;
          }
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != -0x10);
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_110 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar3 = (int *)((longlong)local_110 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
        if (local_128[0] != (undefined ***)0x0) {
          (*(code *)(*local_128[0])[2])();
        }
        if (local_f0[0] != (undefined ***)0x0) {
          FUN_1400020a8();
        }
        goto LAB_144501774;
      }
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  goto LAB_144501799;
LAB_144501986:
  do {
    bVar8 = (byte)uVar20;
    uVar17 = (uint)piVar3[1] >> (bVar8 & 0x1f);
    iVar18 = uVar17 + (uVar17 == 0);
    uVar17 = (uint)piVar3[2] >> (bVar8 & 0x1f);
    iVar7 = uVar17 + (uVar17 == 0);
    uVar13 = local_178 >> (bVar8 & 0x1f);
    cVar6 = local_60 * '\x02';
    local_138 = FUN_1493e3f60(&local_88,uVar20,0xffffffff);
    uVar15 = local_168;
    uVar17 = local_178;
    local_13c = (undefined1)local_168;
    local_148 = iVar18;
    iStack_144 = iVar7;
    local_13b = cVar6;
    if (local_16c == 3) {
      local_140 = uVar13 + (uVar13 == 0);
      cVar6 = FUN_14287dc9e(piVar3,&local_148,uVar20);
      if (cVar6 == '\0') {
        local_160 = (undefined ***)0x14bcb723c;
        local_158._0_4_ = 0x12;
        ppppuVar19 = local_c0;
        FUN_1446e940c(ppppuVar19,&local_160);
        local_160 = (undefined ***)0x14bcb712a;
        local_158._0_4_ = 0x18;
        ppppuVar12 = local_f0;
        FUN_1446e940c(ppppuVar12,&local_160);
        local_160 = (undefined ***)0x14bcb71d2;
        local_158 = (ulonglong *)CONCAT44(local_158._4_4_,0x22);
        ppppuVar21 = &local_98;
        ppppuVar14 = &local_160;
LAB_144501aeb:
        FUN_140208c1e(ppppuVar21,ppppuVar12,ppppuVar19,ppppuVar14);
        FUN_1493e5dea(lVar1,ppppuVar21);
        if (*ppppuVar21 != (undefined ***)0x0) {
          (*(code *)(**ppppuVar21)[2])();
        }
        *(undefined1 *)(param_2 + 8) = 0;
        goto LAB_144501b78;
      }
    }
    else {
      local_140 = local_178;
      if (local_178 != 0) {
        uVar13 = 0;
        do {
          FUN_1469878f2(&local_148,&local_160,uVar13);
          cVar6 = FUN_14287dc9e(piVar3,&local_160,piVar3[4] * uVar13 + uVar20);
          if (cVar6 == '\0') {
            local_98 = (undefined ***)0x14bcb7218;
            local_90._0_4_ = 0x11;
            ppppuVar19 = local_f0;
            FUN_1446e940c(ppppuVar19,&local_98);
            local_98 = (undefined ***)0x14bcb712a;
            local_90._0_4_ = 0x18;
            ppppuVar12 = local_128;
            FUN_1446e940c(ppppuVar12,&local_98);
            local_98 = (undefined ***)0x14bcb71d2;
            local_90 = (longlong *)CONCAT44(local_90._4_4_,0x22);
            ppppuVar21 = local_c0;
            ppppuVar14 = &local_98;
            goto LAB_144501aeb;
          }
          uVar13 = uVar13 + 1;
        } while (uVar17 != uVar13);
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != local_174);
LAB_1445018f0:
  local_60 = FUN_1493dcbf9(&local_b0,uVar15 & 0xffffffff);
  if (((uint)uVar15 < 9) && ((0x1b4U >> ((uint)uVar15 & 0x1f) & 1) != 0)) {
    local_70 = 6;
  }
  if (local_170 < 2) {
    param_2[1] = local_80;
    *(undefined4 *)(param_2 + 2) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 3) = local_70;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
    *(ulonglong *)((longlong)param_2 + 0x19) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,local_70._1_3_));
    *(ulonglong *)((longlong)param_2 + 0x21) =
         CONCAT17(local_60,CONCAT43(uStack_64,uStack_68._1_3_));
    *(byte *)(param_2 + 6) = local_58[0];
    if ((local_58[0] & 1) != 0) goto LAB_144501b5b;
  }
  else {
    local_5c = 0xe;
    local_58[0] = 1;
    param_2[1] = local_80;
    *(undefined4 *)(param_2 + 2) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 3) = local_70;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
    *(ulonglong *)((longlong)param_2 + 0x19) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,local_70._1_3_));
    *(ulonglong *)((longlong)param_2 + 0x21) =
         CONCAT17(local_60,CONCAT43(uStack_64,uStack_68._1_3_));
    *(undefined1 *)(param_2 + 6) = 1;
LAB_144501b5b:
    *(undefined4 *)((longlong)param_2 + 0x2c) = local_5c;
  }
  local_80 = (longlong *)0x0;
  *param_2 = &PTR_FUN_14bcb9060;
  *(uint *)(param_2 + 7) = local_50;
  *(undefined1 *)((longlong)param_2 + 0x3c) = local_4c;
  *(undefined1 *)(param_2 + 8) = 1;
LAB_144501b78:
  plVar2 = local_80;
  local_88 = &PTR_FUN_14bcb3bb0;
  if ((local_58[0] & 1) != 0) {
    local_58[0] = 0;
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 3;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (((uint)lVar1 & 0x3fffffff) == 1) {
      (**(code **)(*local_80 + 0x10))(local_80);
      plVar2[1] = 0;
      plVar2[2] = 0;
      LOCK();
      puVar5 = (ulonglong *)(plVar2 + 3);
      uVar15 = *puVar5;
      *puVar5 = *puVar5 - 0x40000000;
      UNLOCK();
      if ((uVar15 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar2)(plVar2,1);
      }
    }
  }
LAB_144501799:
  FUN_147af4344(&local_b0,local_b0);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144501266:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144501c7e FUN_144501c7e body=69 status=ok
// SIG undefined FUN_144501c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501c7e(void)

{
  _DAT_14cc14808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14810,1);
  return;
}



// FUNCTION 144501cc3 FUN_144501cc3 body=69 status=ok
// SIG undefined FUN_144501cc3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501cc3(void)

{
  _DAT_14cc14830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14838,1);
  return;
}



// FUNCTION 144501d08 FUN_144501d08 body=69 status=ok
// SIG undefined FUN_144501d08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501d08(void)

{
  _DAT_14cc14840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14848,1);
  return;
}



// FUNCTION 144501d4d FUN_144501d4d body=69 status=ok
// SIG undefined FUN_144501d4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501d4d(void)

{
  _DAT_14cc14850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14858,1);
  return;
}



// FUNCTION 144501d92 FUN_144501d92 body=69 status=ok
// SIG undefined FUN_144501d92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501d92(void)

{
  _DAT_14cc14860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14868,1);
  return;
}



// FUNCTION 144501dd7 FUN_144501dd7 body=69 status=ok
// SIG undefined FUN_144501dd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501dd7(void)

{
  _DAT_14cc14870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14878,1);
  return;
}



// FUNCTION 144501e1c FUN_144501e1c body=69 status=ok
// SIG undefined FUN_144501e1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501e1c(void)

{
  _DAT_14cc14880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14888,1);
  return;
}



// FUNCTION 144501e61 FUN_144501e61 body=69 status=ok
// SIG undefined FUN_144501e61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144501e61(void)

{
  _DAT_14cc14890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144501ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14898,1);
  return;
}



// FUNCTION 144501ea6 FUN_144501ea6 body=272 status=ok
// SIG undefined FUN_144501ea6(void)

longlong FUN_144501ea6(longlong param_1,longlong param_2)

{
  void *_Src;
  char cVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1493e6440(param_1 + -0x38,L"ImageWrapper");
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
    goto LAB_144501f91;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_58 = (undefined2 *)0x0;
  local_50 = *(int *)(*(longlong *)(param_1 + -8) + 0x30);
  lVar3 = (longlong)local_50;
  _Src = *(void **)(*(longlong *)(param_1 + -8) + 0x28);
  if (lVar3 == 0) {
    local_4c = 0;
LAB_144501f45:
    puVar2 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar3 * 2);
    puVar2 = local_58;
    if (local_50 == 0) goto LAB_144501f45;
  }
  cVar1 = FUN_142781902(local_48,puVar2,0);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    FUN_144501fb8(param_1 + -0x38,param_2,local_48);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_144501f91:
  if ((local_48[3] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144501fb8 FUN_144501fb8 body=1450 status=ok
// SIG undefined FUN_144501fb8(void)

undefined8 * FUN_144501fb8(ulonglong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88;
  uint local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined4 *puStack_60;
  ulonglong local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = *param_3;
  lVar2 = param_3[1];
  local_78 = "ImageWrapper";
  uStack_70 = CONCAT35(uStack_70._5_3_,0xc);
  uVar7 = FUN_14001a6c0(&local_78,1);
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
  plVar8 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar7,&local_78,1);
  plVar10 = plVar8;
  cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,lVar11);
  uVar7 = SUB84(plVar10,0);
  if (cVar5 == -1) {
    uVar12 = 1;
    uVar15 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar17 = 0;
    cVar5 = '\0';
    uVar18 = 0;
    plVar10 = (longlong *)0x0;
  }
  else if ((cVar5 == '\t') && (DAT_14c765134 != '\0')) {
    local_68 = 0;
    puStack_60 = (undefined4 *)0x0;
    local_78 = (char *)0x0;
    uStack_70 = 0;
    local_58 = 0;
    local_50 = 0x201;
    cVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,lVar11);
    if (cVar5 == '\0') {
      local_80 = 0;
      uVar14 = 0;
      uVar16 = 0;
      uVar17 = 0;
      cVar5 = '\0';
      uVar18 = 0;
      plVar10 = (longlong *)0x0;
      uVar13 = 1;
    }
    else {
      FUN_148459091(&local_78);
      uVar18 = 0;
      if ((ulonglong)(byte)local_50 < 9) {
        uVar18 = *(undefined4 *)(&DAT_14bcb90bc + (ulonglong)(byte)local_50 * 4);
      }
      local_84 = (uint)(local_50._1_1_ != '\0');
      uVar14 = *puStack_60;
      uVar16 = puStack_60[1];
      plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
      uVar9 = uStack_70;
      pcVar3 = local_78;
      uVar17 = 0;
      plVar10[3] = 0;
      *plVar10 = (longlong)&PTR_FUN_14a399d10;
      plVar10[4] = (longlong)local_78;
      local_78 = (char *)0x0;
      plVar10[5] = uStack_70;
      plVar10[6] = local_68;
      uStack_70 = 0;
      local_68 = 0;
      plVar10[1] = (longlong)pcVar3;
      plVar10[2] = uVar9;
      LOCK();
      plVar10[3] = plVar10[3] | 0x4000000000000000;
      UNLOCK();
      LOCK();
      plVar10[3] = plVar10[3] | 0x1000000000000000;
      UNLOCK();
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        puVar1 = (ulonglong *)(plVar10 + 3);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 0) {
          LOCK();
          plVar10[3] = plVar10[3] + 0x40000000;
          UNLOCK();
        }
      }
      if ((byte)((byte)local_50 - 2) < 7) {
        uVar17 = *(undefined4 *)(&DAT_14bcb90a0 + (ulonglong)(byte)((byte)local_50 - 2) * 4);
      }
      local_80 = local_58 & 0xffffffff;
      local_88 = 0xe;
      if ((int)local_58 < 2) {
        local_88 = 0;
      }
      cVar5 = '\x01';
      uVar13 = local_84;
    }
    if (puStack_60 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    uVar15 = (undefined4)local_80;
    if (local_78 != (char *)0x0) {
      FUN_1400020a8();
      uVar15 = (undefined4)local_80;
    }
    uVar12 = (undefined1)uVar13;
    uVar7 = local_88;
  }
  else {
    uVar15 = 0;
    local_78 = (char *)0x0;
    uStack_70 = CONCAT26((short)(uStack_70 >> 0x30),0x20100000000);
    local_68 = 0;
    puStack_60 = (undefined4 *)0x0;
    local_58 = 0;
    local_80 = param_1;
    cVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,lVar11,lVar2);
    uVar14 = 0;
    uVar16 = 0;
    uVar17 = 0;
    plVar10 = (longlong *)0x0;
    uVar13 = 1;
    uVar18 = 0;
    if (cVar6 != '\0') {
      FUN_148459030();
      pcVar3 = local_78;
      uVar9 = uStack_70 >> 0x20 & 0xff;
      local_88 = 0;
      if (uVar9 < 9) {
        local_88 = *(undefined4 *)(&DAT_14bcb90bc + uVar9 * 4);
      }
      local_84 = (uint)(uStack_70._5_1_ != '\0');
      uVar14 = (undefined4)local_78;
      uVar16 = local_78._4_4_;
      plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
      puVar4 = puStack_60;
      lVar2 = local_68;
      uVar17 = 0;
      plVar10[3] = 0;
      *plVar10 = (longlong)&PTR_FUN_14a399d10;
      plVar10[4] = local_68;
      local_68 = 0;
      plVar10[5] = (longlong)puStack_60;
      plVar10[6] = local_58;
      puStack_60 = (undefined4 *)0x0;
      local_58 = 0;
      plVar10[1] = lVar2;
      plVar10[2] = (longlong)puVar4;
      LOCK();
      plVar10[3] = plVar10[3] | 0x4000000000000000;
      UNLOCK();
      LOCK();
      plVar10[3] = plVar10[3] | 0x1000000000000000;
      UNLOCK();
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        puVar1 = (ulonglong *)(plVar10 + 3);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 0) {
          LOCK();
          plVar10[3] = plVar10[3] + 0x40000000;
          UNLOCK();
        }
      }
      if ((byte)(uStack_70._4_1_ - 2U) < 7) {
        uVar17 = *(undefined4 *)(&DAT_14bcb90a0 + (ulonglong)(byte)(uStack_70._4_1_ - 2U) * 4);
      }
      uVar15 = 1;
      uVar13 = local_84;
      uVar18 = local_88;
      if (cVar5 == '\a') {
        if (*(char *)(lVar11 + 1) == '\0') {
          if ((*(char *)(lVar11 + 2) == '\x03') && (*(char *)(lVar11 + 0x10) == '\b')) {
            uVar17 = 3;
            uVar13 = 0;
          }
        }
        else if (((*(char *)(lVar11 + 1) == '\x01') && (*(char *)(lVar11 + 2) == '\x01')) &&
                (*(char *)(lVar11 + 0x10) == '\b')) {
          uVar17 = 3;
        }
      }
      else if ((cVar5 == '\0') && (cVar5 = *(char *)(local_80 + 0x40), cVar5 != '\x01')) {
        if (plVar10 == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          if (((ulonglong)plVar10[3] >> 0x3e & 1) == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          lVar11 = plVar10[1];
        }
        local_98 = cVar5 == '\x03';
        FUN_148459106((ulonglong)pcVar3 & 0xffffffff,uVar16,local_88,lVar11);
        uVar13 = local_84;
        uVar18 = local_88;
      }
    }
    lVar11 = local_68;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar12 = (undefined1)uVar13;
    uVar7 = (undefined4)lVar11;
    cVar5 = '\0';
  }
  *param_2 = &PTR_FUN_14bcb3bb0;
  param_2[1] = plVar10;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar18;
  *(undefined4 *)(param_2 + 3) = uVar17;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar15;
  *(undefined4 *)(param_2 + 4) = uVar14;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar16;
  *(undefined1 *)(param_2 + 5) = uVar12;
  *(char *)(param_2 + 6) = cVar5;
  if (cVar5 != '\0') {
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
  }
  *(undefined1 *)(param_2 + 7) = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502563 FUN_144502563 body=69 status=ok
// SIG undefined FUN_144502563(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144502563(void)

{
  _DAT_14cc148b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445025a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc148c0,1);
  return;
}



// FUNCTION 1445025a8 FUN_1445025a8 body=69 status=ok
// SIG undefined FUN_1445025a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445025a8(void)

{
  _DAT_14cc148e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445025ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc148e8,1);
  return;
}



// FUNCTION 1445025ed FUN_1445025ed body=339 status=ok
// SIG undefined FUN_1445025ed(void)

void FUN_1445025ed(longlong *param_1,longlong *param_2,short param_3)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short *psVar10;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar8 = 0;
  uVar9 = 0;
  if (0 < (longlong)(int)uVar3) {
    uVar9 = 0;
    do {
      sVar2 = *(short *)(*param_2 + uVar9 * 2);
      if ((sVar2 != 0x20) && (sVar2 != 9)) goto LAB_144502627;
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar9 = (ulonglong)uVar3;
  }
LAB_144502627:
  uVar4 = uVar3 - (int)uVar9;
  if ((int)uVar3 <= (int)uVar4) {
    uVar4 = uVar3;
  }
  if (0 < (int)uVar4) {
    uVar8 = (ulonglong)uVar4;
  }
  lVar1 = *param_2 + (longlong)(int)uVar3 * 2;
  iVar7 = (int)uVar8;
  psVar10 = (short *)(lVar1 - (ulonglong)(uint)(iVar7 * 2));
  *param_2 = (longlong)psVar10;
  *(int *)(param_2 + 1) = iVar7;
  if (0 < (int)uVar4) {
    if (*psVar10 == 0x23) {
      *param_2 = 0;
      param_2[1] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    uVar9 = 0;
    do {
      sVar2 = psVar10[uVar9];
      if (((sVar2 == 9) || (sVar2 == 0x20)) || (sVar2 == param_3)) {
        if ((int)uVar9 < iVar7) {
          iVar7 = (int)uVar9;
        }
        uVar8 = ~uVar9 + uVar8;
        iVar6 = (int)uVar8;
        iVar5 = 0;
        if (0 < iVar6) {
          iVar5 = iVar6;
        }
        *param_1 = (longlong)psVar10;
        *(int *)(param_1 + 1) = iVar7;
        *param_2 = lVar1 - (ulonglong)(uint)(iVar5 * 2);
        *(int *)(param_2 + 1) = iVar5;
        uVar9 = 0;
        if (iVar6 < 1) goto LAB_14450271a;
        uVar9 = 0;
        iVar7 = 0;
        if (0 < iVar6) {
          iVar7 = iVar6;
        }
        goto LAB_144502700;
      }
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  return;
  while (uVar9 = uVar9 + 1, (uVar8 & 0xffffffff) != uVar9) {
LAB_144502700:
    sVar2 = *(short *)((lVar1 - (ulonglong)(uint)(iVar7 * 2)) + uVar9 * 2);
    if ((sVar2 != 0x20) && (sVar2 != 9)) goto LAB_14450271a;
  }
  uVar9 = uVar8 & 0xffffffff;
LAB_14450271a:
  iVar7 = iVar5 - (int)uVar9;
  if (iVar5 <= iVar7) {
    iVar7 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar7) {
    iVar5 = iVar7;
  }
  *param_2 = lVar1 - (ulonglong)(uint)(iVar5 * 2);
  *(int *)(param_2 + 1) = iVar5;
  return;
}



// FUNCTION 144502740 FUN_144502740 body=67 status=ok
// SIG undefined FUN_144502740(void)

undefined8 FUN_144502740(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144502783();
  if (cVar1 != '\0') {
    cVar1 = FUN_144502783(param_1,param_2 + 4);
    if (cVar1 != '\0') {
      uVar2 = FUN_144502783(param_1,param_2 + 8);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144502783 FUN_144502783 body=154 status=ok
// SIG undefined FUN_144502783(void)

bool FUN_144502783(undefined8 param_1,float *param_2)

{
  wchar_t *_Str;
  double dVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1445025ed(&local_40,param_1,0x20);
  if (local_38 != 0) {
    FUN_14006620a(&local_30,local_40,local_38);
    _Str = L"";
    if (local_28 != 0) {
      _Str = local_30;
    }
    dVar1 = _wtof(_Str);
    *param_2 = (float)dVar1;
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450281e FUN_14450281e body=143 status=ok
// SIG undefined FUN_14450281e(void)

bool FUN_14450281e(undefined8 param_1,int *param_2)

{
  int iVar1;
  wchar_t *_Str;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1445025ed(&local_40,param_1);
  if (local_38 != 0) {
    FUN_14006620a(&local_30,local_40,local_38);
    _Str = L"";
    if (local_28 != 0) {
      _Str = local_30;
    }
    iVar1 = _wtoi(_Str);
    *param_2 = iVar1;
    if (local_30 != (wchar_t *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445028ae FUN_1445028ae body=189 status=ok
// SIG undefined FUN_1445028ae(void)

undefined8 FUN_1445028ae(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1445025ed(&local_60,param_2,0x20);
  FUN_14006620a(&local_50,local_60,local_58);
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  local_50 = &local_70;
  FUN_1493df864(param_1 + 0x90,local_3c,&local_50);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  FUN_1402980a2(param_1 + 0xf0,local_60,local_58);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450296c FUN_14450296c body=297 status=ok
// SIG undefined FUN_14450296c(void)

ulonglong FUN_14450296c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_14450281e(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x10) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502a96 FUN_144502a96 body=309 status=ok
// SIG undefined FUN_144502a96(void)

ulonglong FUN_144502a96(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_144502740(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x1c) = local_38;
      *(undefined8 *)(lVar8 + 0x14) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502bcc FUN_144502bcc body=309 status=ok
// SIG undefined FUN_144502bcc(void)

ulonglong FUN_144502bcc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_144502740(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x28) = local_38;
      *(undefined8 *)(lVar8 + 0x20) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502d02 FUN_144502d02 body=309 status=ok
// SIG undefined FUN_144502d02(void)

ulonglong FUN_144502d02(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_144502740(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x34) = local_38;
      *(undefined8 *)(lVar8 + 0x2c) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502e38 FUN_144502e38 body=309 status=ok
// SIG undefined FUN_144502e38(void)

ulonglong FUN_144502e38(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_144502740(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x40) = local_38;
      *(undefined8 *)(lVar8 + 0x38) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144502f6e FUN_144502f6e body=315 status=ok
// SIG undefined FUN_144502f6e(void)

ulonglong FUN_144502f6e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_144502740(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0xf8) = local_38;
      *(undefined8 *)(lVar8 + 0xf0) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445030aa FUN_1445030aa body=299 status=ok
// SIG undefined FUN_1445030aa(void)

ulonglong FUN_1445030aa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0xfc) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445031d6 FUN_1445031d6 body=299 status=ok
// SIG undefined FUN_1445031d6(void)

ulonglong FUN_1445031d6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x108) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144503302 FUN_144503302 body=299 status=ok
// SIG undefined FUN_144503302(void)

ulonglong FUN_144503302(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x100) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450342e FUN_14450342e body=299 status=ok
// SIG undefined FUN_14450342e(void)

ulonglong FUN_14450342e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x104) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450355a FUN_14450355a body=740 status=ok
// SIG undefined FUN_14450355a(void)

bool FUN_14450355a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_1445036ca;
LAB_144503699:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_1445036ca;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144503699;
        }
        if (uVar9 != uVar11) goto LAB_1445036ed;
LAB_1445036ca:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x58) = (undefined4)local_68;
        }
LAB_1445036ed:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x48) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x48) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x50) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x54) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144503840 FUN_144503840 body=740 status=ok
// SIG undefined FUN_144503840(void)

bool FUN_144503840(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_1445039b0;
LAB_14450397f:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_1445039b0;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_14450397f;
        }
        if (uVar9 != uVar11) goto LAB_1445039d3;
LAB_1445039b0:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x70) = (undefined4)local_68;
        }
LAB_1445039d3:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x60) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x60) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x60) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x68) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x6c) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144503b26 FUN_144503b26 body=749 status=ok
// SIG undefined FUN_144503b26(void)

bool FUN_144503b26(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144503c96;
LAB_144503c65:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144503c96;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144503c65;
        }
        if (uVar9 != uVar11) goto LAB_144503cbc;
LAB_144503c96:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x88) = (undefined4)local_68;
        }
LAB_144503cbc:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x78) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x78) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x78) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x80) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x84) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144503e15 FUN_144503e15 body=758 status=ok
// SIG undefined FUN_144503e15(void)

bool FUN_144503e15(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144503f85;
LAB_144503f54:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144503f85;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144503f54;
        }
        if (uVar9 != uVar11) goto LAB_144503fab;
LAB_144503f85:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0xa0) = (undefined4)local_68;
        }
LAB_144503fab:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x90) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x90) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x90) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x98) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x9c) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450410d FUN_14450410d body=758 status=ok
// SIG undefined FUN_14450410d(void)

bool FUN_14450410d(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_14450427d;
LAB_14450424c:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_14450427d;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_14450424c;
        }
        if (uVar9 != uVar11) goto LAB_1445042a3;
LAB_14450427d:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0xb8) = (undefined4)local_68;
        }
LAB_1445042a3:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0xa8) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0xa8) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0xb0) = (int)local_50;
      *(undefined4 *)(lVar13 + 0xb4) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144504405 FUN_144504405 body=758 status=ok
// SIG undefined FUN_144504405(void)

bool FUN_144504405(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144504575;
LAB_144504544:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144504575;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144504544;
        }
        if (uVar9 != uVar11) goto LAB_14450459b;
LAB_144504575:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0xd0) = (undefined4)local_68;
        }
LAB_14450459b:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0xc0) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0xc0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0xc0) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 200) = (int)local_50;
      *(undefined4 *)(lVar13 + 0xcc) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445046fd FUN_1445046fd body=758 status=ok
// SIG undefined FUN_1445046fd(void)

bool FUN_1445046fd(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_14450486d;
LAB_14450483c:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_14450486d;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_14450483c;
        }
        if (uVar9 != uVar11) goto LAB_144504893;
LAB_14450486d:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0xe8) = (undefined4)local_68;
        }
LAB_144504893:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0xd8) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0xd8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0xd8) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0xe0) = (int)local_50;
      *(undefined4 *)(lVar13 + 0xe4) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445049f5 FUN_1445049f5 body=758 status=ok
// SIG undefined FUN_1445049f5(void)

bool FUN_1445049f5(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144504b65;
LAB_144504b34:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144504b65;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144504b34;
        }
        if (uVar9 != uVar11) goto LAB_144504b8b;
LAB_144504b65:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x158) = (undefined4)local_68;
        }
LAB_144504b8b:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x148) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x148) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x148) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x150) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x154) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144504ced FUN_144504ced body=299 status=ok
// SIG undefined FUN_144504ced(void)

ulonglong FUN_144504ced(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x10c) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144504e19 FUN_144504e19 body=758 status=ok
// SIG undefined FUN_144504e19(void)

bool FUN_144504e19(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144504f89;
LAB_144504f58:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144504f89;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144504f58;
        }
        if (uVar9 != uVar11) goto LAB_144504faf;
LAB_144504f89:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x120) = (undefined4)local_68;
        }
LAB_144504faf:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x110) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x110) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x110) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x118) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x11c) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144505111 FUN_144505111 body=299 status=ok
// SIG undefined FUN_144505111(void)

ulonglong FUN_144505111(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x128) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450523d FUN_14450523d body=758 status=ok
// SIG undefined FUN_14450523d(void)

bool FUN_14450523d(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_1445053ad;
LAB_14450537c:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_1445053ad;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_14450537c;
        }
        if (uVar9 != uVar11) goto LAB_1445053d3;
LAB_1445053ad:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x140) = (undefined4)local_68;
        }
LAB_1445053d3:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x130) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x130) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x130) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x138) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x13c) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144505535 FUN_144505535 body=299 status=ok
// SIG undefined FUN_144505535(void)

ulonglong FUN_144505535(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x178) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144505661 FUN_144505661 body=299 status=ok
// SIG undefined FUN_144505661(void)

ulonglong FUN_144505661(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x17c) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450578d FUN_14450578d body=299 status=ok
// SIG undefined FUN_14450578d(void)

ulonglong FUN_14450578d(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  cVar1 = FUN_144502783(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf8);
    uVar5 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar2 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xf0);
      }
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
                0x20;
        uVar9 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar8 = lVar8 + 1;
      } while (iVar4 != (int)lVar8);
    }
    iVar2 = FUN_1493e0108((longlong *)(param_1 + 0x90),uVar5,(undefined8 *)(param_1 + 0xf0));
    lVar8 = (longlong)iVar2 * 400 + *(longlong *)(param_1 + 0x90);
    if (lVar8 == 0 || iVar2 == -1) {
      uVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar8 + 0x180) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445058b9 FUN_1445058b9 body=758 status=ok
// SIG undefined FUN_1445058b9(void)

bool FUN_1445058b9(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xf8) + -1;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  iVar4 = FUN_1493e0108((longlong *)(param_1 + 0x90));
  iVar8 = 0;
  lVar13 = 0;
  if (iVar4 != -1) {
    lVar13 = (longlong)iVar4 * 400 + *(longlong *)(param_1 + 0x90);
  }
  if (lVar13 != 0) {
    local_70 = param_1;
    FUN_1445025ed(&local_58,param_2,0x20);
    if ((int)local_50 == 0) {
      lVar14 = 0;
    }
    else {
      do {
        iVar8 = (int)local_50;
        lVar14 = local_58;
        lVar5 = 0;
        lVar7 = (longlong)iVar8;
        while( true ) {
          uVar9 = *(ushort *)(local_58 + lVar5);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)&DAT_14bcb8ddc + lVar5);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144505a29;
LAB_1445059f8:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_144505a29;
          lVar5 = lVar5 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1445059f8;
        }
        if (uVar9 != uVar11) goto LAB_144505a4f;
LAB_144505a29:
        if (((&DAT_14bcb8ddc)[iVar8] == 0) &&
           (cVar2 = FUN_144502783(param_2,&local_68), cVar2 != '\0')) {
          *(undefined4 *)(lVar13 + 0x170) = (undefined4)local_68;
        }
LAB_144505a4f:
        FUN_1445025ed(&local_58,param_2,0x20);
      } while ((int)local_50 != 0);
    }
    FUN_14006620a(&local_58,lVar14,iVar8);
    lVar14 = local_58;
    FUN_140bee914(&local_68);
    iVar4 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar4 = 0;
    }
    iVar8 = (int)local_60;
    iVar3 = iVar4 + 1 + (uint)((int)local_60 == 0);
    local_58 = local_68;
    local_68 = 0;
    iVar1 = local_60._4_4_;
    local_50 = local_60;
    local_60 = 0;
    iVar6 = iVar3 + iVar8;
    if (iVar6 < iVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar1 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,lVar14,iVar4);
    if ((longlong *)(lVar13 + 0x160) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar13 + 0x160) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar13 + 0x160) = local_58;
      local_58 = 0;
      *(int *)(lVar13 + 0x168) = (int)local_50;
      *(undefined4 *)(lVar13 + 0x16c) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144505bb1 FUN_144505bb1 body=47 status=ok
// SIG undefined FUN_144505bb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144505bb1(void)

{
  _DAT_14cc14938 = 0;
  if (DAT_14cc14930 != 0) {
    FUN_1400020a8();
  }
  FUN_1493e043a(&DAT_14cc148f0);
  return;
}



// FUNCTION 144505be0 FUN_144505be0 body=715 status=ok
// SIG undefined FUN_144505be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144505be0(undefined8 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  void *_Src;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  uVar3 = *param_1;
  plVar12 = (longlong *)param_1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc14958) && (FUN_144b3d300(&DAT_14cc14958), DAT_14cc14958 == -1)) {
    DAT_14cc14948 = (longlong *)0x0;
    _DAT_14cc14950 = 0;
    atexit(FUN_144505eac);
    _Init_thread_footer(&DAT_14cc14958);
  }
  FUN_1445025ed(&local_78,&local_88,0x20);
  FUN_14006620a(&local_58,local_78,local_70);
  uVar6 = uStack_50;
  _Src = (void *)CONCAT44(uStack_54,local_58);
  uVar15 = (ulonglong)uStack_50;
  local_60 = uStack_50;
  local_5c = uStack_4c;
  bVar16 = 1;
  if (1 < (int)uStack_50) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      uVar1 = *(ushort *)((longlong)_Src + lVar11 * 2);
      uVar7 = ((uint)uVar1 + (uint)(0x19 < uVar1 - 0x61) * 0x20) - 0x20;
      uVar17 = (uint)(uVar13 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar13 ^ uVar7) & 0xff) * 4);
      uVar13 = (ulonglong)
               (uVar17 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (uStack_50 - 1 != (int)lVar11);
    iVar8 = FUN_1493e05d0(plVar12,uVar13,local_68);
    pvVar9 = (void *)(longlong)iVar8;
    lVar11 = (longlong)pvVar9 * 0x60 + *plVar12;
    if (lVar11 == 0 || iVar8 == -1) {
      lVar14 = (longlong)DAT_14cc14950;
      if (lVar14 != 0) {
        plVar12 = DAT_14cc14948;
LAB_144505e03:
        if (*(uint *)(plVar12 + 1) == uVar6) {
          lVar18 = 0;
          do {
            uVar1 = *(ushort *)(*plVar12 + lVar18);
            uVar7 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)_Src + lVar18);
            pvVar9 = (void *)(ulonglong)uVar2;
            if (uVar1 == uVar2) {
              if (uVar1 == 0) goto LAB_144505ded;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) goto LAB_144505e62;
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              pvVar9 = (void *)(ulonglong)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_144505e62;
            }
            lVar18 = lVar18 + 2;
          } while( true );
        }
        if (*(uint *)(plVar12 + 1) + uVar6 != 1) goto LAB_144505e15;
        goto LAB_144505ded;
      }
LAB_144505d6a:
      uVar7 = DAT_14cc14950 + 1;
      _DAT_14cc14950 = CONCAT44(DAT_14cc14954,uVar7);
      if (DAT_14cc14954 < uVar7) {
        FUN_1447a1bd6(&DAT_14cc14948);
      }
      plVar5 = DAT_14cc14948;
      plVar12 = DAT_14cc14948 + lVar14 * 2;
      DAT_14cc14948[lVar14 * 2] = 0;
      *(uint *)(plVar5 + lVar14 * 2 + 1) = uVar6;
      FUN_1446dd670(plVar12,uVar15,0);
      pvVar9 = memcpy((void *)plVar5[lVar14 * 2],_Src,uVar15 * 2);
    }
    else {
      local_58 = local_88;
      uStack_54 = uStack_84;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      pcVar4 = *(code **)(lVar11 + 0x10);
      plVar12 = (longlong *)(lVar11 + 0x30);
      if (*(longlong **)(lVar11 + 0x20) != (longlong *)0x0) {
        plVar12 = *(longlong **)(lVar11 + 0x20);
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      pvVar9 = (void *)(*pcVar4)(uVar10,uVar3,&local_58);
    }
LAB_144505ded:
    bVar16 = (lVar11 == 0 || iVar8 == -1) | (byte)pvVar9;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((bVar16 & 1) == 0) {
    *(undefined1 *)param_1[2] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144505e62:
  if (uVar7 == (uint)pvVar9) goto LAB_144505ded;
LAB_144505e15:
  plVar12 = plVar12 + 2;
  if (plVar12 == DAT_14cc14948 + lVar14 * 2) goto LAB_144505d6a;
  goto LAB_144505e03;
}



// FUNCTION 144505eac FUN_144505eac body=49 status=ok
// SIG undefined FUN_144505eac(void)

void FUN_144505eac(void)

{
  FUN_1447a1747(DAT_14cc14948,DAT_14cc14950);
  if (DAT_14cc14948 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144505ede FUN_144505ede body=139 status=ok
// SIG undefined FUN_144505ede(void)

void FUN_144505ede(longlong *param_1)

{
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [864];
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*(char *)(*param_1 + 0x370) == '\0') {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))
              ((longlong *)param_1[0xe],local_388,param_1 + 0xf,param_1 + 2);
    FUN_1493e1160(*param_1 + 0x10,local_388);
    if (local_28 == '\x01') {
      FUN_1493c6fa6(local_388);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144505f6a FUN_144505f6a body=190 status=ok
// SIG undefined FUN_144505f6a(void)

undefined8 * FUN_144505f6a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14bcb8e70;
  puVar4 = (undefined8 *)(param_1 + 0x10);
  puVar5 = puVar2 + 2;
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2[0x11] = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  _Src = *(void **)(param_1 + 0x88);
  *(int *)(puVar2 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 0x11,iVar1,0);
    memcpy((void *)puVar2[0x11],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(param_1 + 0x98);
  return puVar2 + 2;
}



// FUNCTION 14450602e FUN_14450602e body=29 status=ok
// SIG undefined FUN_14450602e(void)

void FUN_14450602e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14450604c FUN_14450604c body=60 status=ok
// SIG undefined FUN_14450604c(void)

undefined8 * FUN_14450604c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcb8e70;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14450609a FUN_14450609a body=29 status=ok
// SIG undefined FUN_14450609a(void)

undefined8 FUN_14450609a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445060cc FUN_1445060cc body=85 status=ok
// SIG undefined FUN_1445060cc(void)

void FUN_1445060cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcb8f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcb8f10;
  return;
}



// FUNCTION 144506122 FUN_144506122 body=85 status=ok
// SIG undefined FUN_144506122(void)

void FUN_144506122(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcb8f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcb8f10;
  return;
}



// FUNCTION 144506178 FUN_144506178 body=118 status=ok
// SIG undefined FUN_144506178(void)

void FUN_144506178(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bcb8f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcb8f10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445061df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445061fc FUN_1445061fc body=25 status=ok
// SIG undefined FUN_1445061fc(void)

undefined1
FUN_1445061fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1493d1bc4(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 144506216 FUN_144506216 body=363 status=ok
// SIG undefined FUN_144506216(void)

void FUN_144506216(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445062ac;
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
LAB_1445062ac:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 144506382 FUN_144506382 body=243 status=ok
// SIG undefined FUN_144506382(void)

void FUN_144506382(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  size_t _Size;
  longlong lVar8;
  int iVar9;
  
  lVar6 = (longlong)*param_2;
  lVar2 = *(longlong *)(*param_1 + 8);
  iVar9 = 0;
  if (*(int *)(lVar2 + 0x14 + lVar6 * 0x18) < 1) {
    _Size = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 0x18);
    lVar2 = lVar2 + lVar6 * 0x18;
    lVar8 = (longlong)*(int *)(lVar2 + 0xc);
    lVar7 = (longlong)*(int *)(lVar2 + 8);
    _Size = 0;
    do {
      uVar4 = FUN_14287fa46(uVar1);
      lVar5 = FUN_146987ac9(uVar4);
      _Size = _Size + (longlong)*(int *)(lVar2 + 0x10) * lVar5 * lVar7 * lVar8;
      lVar7 = lVar7 >> 1;
      if (lVar7 < 2) {
        lVar7 = 1;
      }
      lVar8 = lVar8 >> 1;
      if (lVar8 < 2) {
        lVar8 = 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar2 + 0x14));
  }
  plVar3 = *(longlong **)(*(longlong *)param_1[2] + 8 + lVar6 * 0x38);
  if (plVar3 == (longlong *)0x0) {
    _Src = (void *)0x0;
  }
  else {
    if (((ulonglong)plVar3[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    _Src = (void *)plVar3[1];
  }
  memcpy((void *)(param_1[1] + *(longlong *)(*(longlong *)param_1[3] + lVar6 * 8)),_Src,_Size);
  return;
}



// FUNCTION 144506475 FUN_144506475 body=7707 status=ok
// SIG undefined FUN_144506475(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144506475(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cc13e2c,&DAT_149e97e80,1);
  FUN_1446f470e(&DAT_14cc13e34,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc13e3c,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc13e44,L"FlattenNormal",1);
  FUN_1446f470e(&DAT_14cc13e4c,L"Normal",1);
  FUN_1446f470e(&DAT_14cc13e54,L"Flatness",1);
  FUN_1446f470e(&DAT_14cc13e5c,L"Lerp",1);
  FUN_1446f470e(&DAT_14cc13e64,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc13e6c,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc13e74,L"Factor",1);
  FUN_1446f470e(&DAT_14cc13e7c,L"ComponentMask",1);
  FUN_1446f470e(&DAT_14cc13e84,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc13e8c,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc13e94,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc13e9c,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc13ea4,L"Input",1);
  FUN_1446f470e(&DAT_14cc13eac,L"Multiply",1);
  FUN_1446f470e(&DAT_14cc13eb4,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc13ebc,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc13ec4,L"MakeFloat3",1);
  FUN_1446f470e(&DAT_14cc13ecc,&DAT_149e25cc8,1);
  FUN_1446f470e(&DAT_14cc13ed4,&DAT_149e25ccc,1);
  FUN_1446f470e(&DAT_14cc13edc,&DAT_149e25cd0,1);
  FUN_1446f470e(&DAT_14cc13ee4,L"Noise",1);
  FUN_1446f470e(&DAT_14cc13eec,L"Position",1);
  FUN_1446f470e(&DAT_14cc13ef4,L"FilterWidth",1);
  FUN_1446f470e(&DAT_14cc13efc,L"Scale",1);
  FUN_1446f470e(&DAT_14cc13f04,L"Quality",1);
  FUN_1446f470e(&DAT_14cc13f0c,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc13f14,L"bTurbulence",1);
  FUN_1446f470e(&DAT_14cc13f1c,L"Levels",1);
  FUN_1446f470e(&DAT_14cc13f24,L"OutputMin",1);
  FUN_1446f470e(&DAT_14cc13f2c,L"OutputMax",1);
  FUN_1446f470e(&DAT_14cc13f34,L"LevelScale",1);
  FUN_1446f470e(&DAT_14cc13f3c,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc13f44,L"RepeatSize",1);
  FUN_1446f470e(&DAT_14cc13f4c,L"NormalFromHeightMap",1);
  FUN_1446f470e(&DAT_14cc13f54,L"Height Map",1);
  FUN_1446f470e(&DAT_14cc13f5c,L"Normal Map Intensity",1);
  FUN_1446f470e(&DAT_14cc13f64,L"Height Map UV Offset",1);
  FUN_1446f470e(&DAT_14cc13f6c,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc13f74,L"Height Map Channel Selector",1);
  FUN_1446f470e(&DAT_14cc13f7c,L"OneMinus",1);
  FUN_1446f470e(&DAT_14cc13f84,L"Input",1);
  FUN_1446f470e(&DAT_14cc13f8c,L"Rotator",1);
  FUN_1446f470e(&DAT_14cc13f94,L"CenterX",1);
  FUN_1446f470e(&DAT_14cc13f9c,L"CenterY",1);
  FUN_1446f470e(&DAT_14cc13fa4,L"Speed",1);
  FUN_1446f470e(&DAT_14cc13fac,L"Coordinate",1);
  FUN_1446f470e(&DAT_14cc13fb4,L"Time",1);
  FUN_1446f470e(&DAT_14cc13fbc,L"MaterialXSwizzle",1);
  FUN_1446f470e(&DAT_14cc13fc4,L"Input",1);
  FUN_1446f470e(&DAT_14cc13fcc,L"Channels",1);
  FUN_1446f470e(&DAT_14cc13fd4,L"TextureCoordinate",1);
  FUN_1446f470e(&DAT_14cc13fdc,L"Index",1);
  FUN_1446f470e(&DAT_14cc13fe4,L"UTiling",1);
  FUN_1446f470e(&DAT_14cc13fec,L"VTiling",1);
  FUN_1446f470e(&DAT_14cc13ff4,L"Offset",1);
  FUN_1446f470e(&DAT_14cc13ffc,L"Scale",1);
  FUN_1446f470e(&DAT_14cc14004,L"Rotate",1);
  FUN_1446f470e(&DAT_14cc1400c,L"RotationCenter",1);
  FUN_1446f470e(&DAT_14cc14014,L"TextureObject",1);
  FUN_1446f470e(&DAT_14cc1401c,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc14024,L"TextureSample",1);
  FUN_1446f470e(&DAT_14cc1402c,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc14034,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc1403c,&DAT_14a9cf404,1);
  FUN_1446f470e(&DAT_14cc14044,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc1404c,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc14054,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc1405c,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14064,L"RGBA",1);
  FUN_1446f470e(&DAT_14cc1406c,L"KernelSize",1);
  FUN_1446f470e(&DAT_14cc14074,L"FilterSize",1);
  FUN_1446f470e(&DAT_14cc1407c,L"FilterOffset",1);
  FUN_1446f470e(&DAT_14cc14084,L"Filter",1);
  FUN_1446f470e(&DAT_14cc1408c,L"Time",1);
  FUN_1446f470e(&DAT_14cc14094,L"bIgnorePause",1);
  FUN_1446f470e(&DAT_14cc1409c,L"bOverride_Period",1);
  FUN_1446f470e(&DAT_14cc140a4,L"Period",1);
  FUN_1446f470e(&DAT_14cc140ac,L"TransformPosition",1);
  FUN_1446f470e(&DAT_14cc140b4,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc140bc,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc140c4,L"Input",1);
  FUN_1446f470e(&DAT_14cc140cc,L"Transform",1);
  FUN_1446f470e(&DAT_14cc140d4,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc140dc,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc140e4,L"Input",1);
  FUN_1446f470e(&DAT_14cc140ec,L"VectorNoise",1);
  FUN_1446f470e(&DAT_14cc140f4,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc140fc,L"Quality",1);
  FUN_1446f470e(&DAT_14cc14104,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc1410c,L"TileSize",1);
  FUN_1446f470e(&DAT_14cc14114,L"Position",1);
  FUN_1446f470e(&DAT_14cc1411c,L"VertexColor",1);
  FUN_1446f470e(&DAT_14cc14124,L"ScalarParameter",1);
  FUN_1446f470e(&DAT_14cc1412c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14134,L"VectorParameter",1);
  FUN_1446f470e(&DAT_14cc1413c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14144,L"StaticBoolParameter",1);
  FUN_1446f470e(&DAT_14cc1414c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14154,L"EmissiveColor",1);
  FUN_1446f470e(&DAT_14cc1415c,L"Normal",1);
  FUN_1446f470e(&DAT_14cc14164,L"Tangent",1);
  FUN_1446f470e(&DAT_14cc1416c,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc14174,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc1417c,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc14184,&DAT_14a2a7780,1);
  FUN_1446f470e(&DAT_14cc1418c,L"BxDF",1);
  FUN_1446f470e(&DAT_14cc14194,L"Refraction",1);
  FUN_1446f470e(&DAT_14cc1419c,L"Anisotropy",1);
  FUN_1446f470e(&DAT_14cc141a4,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc141ac,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc141b4,L"open_pbr_surface",1);
  FUN_1446f470e(&DAT_14cc141bc,L"base_weight",1);
  FUN_1446f470e(&DAT_14cc141c4,L"base_color",1);
  FUN_1446f470e(&DAT_14cc141cc,L"base_roughness",1);
  FUN_1446f470e(&DAT_14cc141d4,L"base_metalness",1);
  FUN_1446f470e(&DAT_14cc141dc,L"specular_weight",1);
  FUN_1446f470e(&DAT_14cc141e4,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc141ec,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc141f4,L"specular_ior",1);
  FUN_1446f470e(&DAT_14cc141fc,L"specular_ior_level",1);
  FUN_1446f470e(&DAT_14cc14204,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1420c,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc14214,L"transmission_weight",1);
  FUN_1446f470e(&DAT_14cc1421c,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc14224,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc1422c,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc14234,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1423c,L"transmission_dispersion_scale",1);
  FUN_1446f470e(&DAT_14cc14244,L"transmission_dispersion_abbe_number",1);
  FUN_1446f470e(&DAT_14cc1424c,L"subsurface_weight",1);
  FUN_1446f470e(&DAT_14cc14254,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc1425c,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc14264,L"subsurface_radius_scale",1);
  FUN_1446f470e(&DAT_14cc1426c,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc14274,L"fuzz_weight",1);
  FUN_1446f470e(&DAT_14cc1427c,L"fuzz_color",1);
  FUN_1446f470e(&DAT_14cc14284,L"fuzz_roughness",1);
  FUN_1446f470e(&DAT_14cc1428c,L"coat_weight",1);
  FUN_1446f470e(&DAT_14cc14294,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc1429c,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc142a4,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc142ac,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc142b4,L"coat_ior",1);
  FUN_1446f470e(&DAT_14cc142bc,L"coat_ior_level",1);
  FUN_1446f470e(&DAT_14cc142c4,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc142cc,L"thin_film_ior",1);
  FUN_1446f470e(&DAT_14cc142d4,L"emission_luminance",1);
  FUN_1446f470e(&DAT_14cc142dc,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc142e4,L"geometry_opacity",1);
  FUN_1446f470e(&DAT_14cc142ec,L"geometry_thin_walled",1);
  FUN_1446f470e(&DAT_14cc142f4,L"geometry_normal",1);
  FUN_1446f470e(&DAT_14cc142fc,L"geometry_coat_normal",1);
  FUN_1446f470e(&DAT_14cc14304,L"geometry_tangent",1);
  FUN_1446f470e(&DAT_14cc1430c,L"OpenPBR_FrontMaterial",1);
  FUN_1446f470e(&DAT_14cc14314,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc1431c,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc14324,L"Shininess",1);
  FUN_1446f470e(&DAT_14cc1432c,L"AmbientColor",1);
  FUN_1446f470e(&DAT_14cc14334,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc1433c,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc14344,L"Glossiness",1);
  FUN_1446f470e(&DAT_14cc1434c,L"BaseColor",1);
  FUN_1446f470e(&DAT_14cc14354,L"Metallic",1);
  FUN_1446f470e(&DAT_14cc1435c,L"Specular",1);
  FUN_1446f470e(&DAT_14cc14364,L"Roughness",1);
  FUN_1446f470e(&DAT_14cc1436c,L"ClearCoat",1);
  FUN_1446f470e(&DAT_14cc14374,L"ClearCoatRoughness",1);
  FUN_1446f470e(&DAT_14cc1437c,L"ClearCoatNormal",1);
  FUN_1446f470e(&DAT_14cc14384,L"TransmissionColor",1);
  FUN_1446f470e(&DAT_14cc1438c,L"SurfaceCoverage",1);
  FUN_1446f470e(&DAT_14cc14394,L"SheenColor",1);
  FUN_1446f470e(&DAT_14cc1439c,L"SheenRoughness",1);
  FUN_1446f470e(&DAT_14cc143a4,L"SubsurfaceColor",1);
  FUN_1446f470e(&DAT_14cc143ac,L"standard_surface",1);
  FUN_1446f470e(&DAT_14cc143b4,L"base",1);
  FUN_1446f470e(&DAT_14cc143bc,L"base_color",1);
  FUN_1446f470e(&DAT_14cc143c4,L"diffuse_roughness",1);
  FUN_1446f470e(&DAT_14cc143cc,L"metalness",1);
  FUN_1446f470e(&DAT_14cc143d4,L"specular",1);
  FUN_1446f470e(&DAT_14cc143dc,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc143e4,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc143ec,L"specular_IOR",1);
  FUN_1446f470e(&DAT_14cc143f4,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc143fc,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc14404,L"transmission",1);
  FUN_1446f470e(&DAT_14cc1440c,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc14414,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc1441c,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc14424,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1442c,L"transmission_dispersion",1);
  FUN_1446f470e(&DAT_14cc14434,L"transmission_extra_roughness",1);
  FUN_1446f470e(&DAT_14cc1443c,L"subsurface",1);
  FUN_1446f470e(&DAT_14cc14444,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc1444c,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc14454,L"subsurface_scale",1);
  FUN_1446f470e(&DAT_14cc1445c,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc14464,L"sheen",1);
  FUN_1446f470e(&DAT_14cc1446c,L"sheen_color",1);
  FUN_1446f470e(&DAT_14cc14474,L"sheen_roughness",1);
  FUN_1446f470e(&DAT_14cc1447c,L"coat",1);
  FUN_1446f470e(&DAT_14cc14484,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc1448c,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc14494,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1449c,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc144a4,L"coat_IOR",1);
  FUN_1446f470e(&DAT_14cc144ac,L"coat_normal",1);
  FUN_1446f470e(&DAT_14cc144b4,L"coat_affect_color",1);
  FUN_1446f470e(&DAT_14cc144bc,L"coat_affect_roughness",1);
  FUN_1446f470e(&DAT_14cc144c4,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc144cc,L"thin_film_IOR",1);
  FUN_1446f470e(&DAT_14cc144d4,L"emission",1);
  FUN_1446f470e(&DAT_14cc144dc,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc144e4,L"opacity",1);
  FUN_1446f470e(&DAT_14cc144ec,L"thin_walled",1);
  FUN_1446f470e(&DAT_14cc144f4,L"normal",1);
  FUN_1446f470e(&DAT_14cc144fc,L"tangent",1);
  FUN_1446f470e(&DAT_14cc14504,L"Substrate StandardSurface Opaque",1);
  FUN_1446f470e(&DAT_14cc1450c,L"Substrate StandardSurface Translucent",1);
  FUN_1446f470e(&DAT_14cc14514,L"Geometry Opacity",1);
  FUN_1446f470e(&DAT_14cc1451c,L"surface",1);
  FUN_1446f470e(&DAT_14cc14524,L"bsdf",1);
  FUN_1446f470e(&DAT_14cc1452c,&DAT_14bc6cbce,1);
  FUN_1446f470e(&DAT_14cc14534,L"opacity",1);
  FUN_1446f470e(&DAT_14cc1453c,L"Surface",1);
  FUN_1446f470e(&DAT_14cc14544,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc1454c,L"surface_unlit",1);
  FUN_1446f470e(&DAT_14cc14554,L"emission",1);
  FUN_1446f470e(&DAT_14cc1455c,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc14564,L"transmission",1);
  FUN_1446f470e(&DAT_14cc1456c,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc14574,L"opacity",1);
  FUN_1446f470e(&DAT_14cc1457c,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc14584,L"Surface Unlit",1);
  FUN_1446f470e(&DAT_14cc1458c,L"UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc14594,L"diffuseColor",1);
  FUN_1446f470e(&DAT_14cc1459c,L"emissiveColor",1);
  FUN_1446f470e(&DAT_14cc145a4,L"specularColor",1);
  FUN_1446f470e(&DAT_14cc145ac,L"metallic",1);
  FUN_1446f470e(&DAT_14cc145b4,L"roughness",1);
  FUN_1446f470e(&DAT_14cc145bc,L"clearcoat",1);
  FUN_1446f470e(&DAT_14cc145c4,L"clearcoatRoughness",1);
  FUN_1446f470e(&DAT_14cc145cc,L"opacity",1);
  FUN_1446f470e(&DAT_14cc145d4,L"opacityThreshold",1);
  FUN_1446f470e(&DAT_14cc145dc,&DAT_14bc3072e,1);
  FUN_1446f470e(&DAT_14cc145e4,L"normal",1);
  FUN_1446f470e(&DAT_14cc145ec,L"displacement",1);
  FUN_1446f470e(&DAT_14cc145f4,L"occlusion",1);
  FUN_1446f470e(&DAT_14cc145fc,L"Substrate UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc14604,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc1460c,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc14614,L"UnlitColor",1);
  FUN_1446f470e(&DAT_14cc1461c,L"Front Material",1);
  FUN_1446f470e(&DAT_14cc14624,L"Opacity Mask",1);
  FUN_1446f470e(&DAT_14cc1462c,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc14634,L"Occlusion",1);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cc1463c);
  if (cVar1 == '\0') {
    _DAT_14cc1463c = 0;
    uRam000000014cc14644 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb4010,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14668,L"Interchange.FeatureFlags.Import.OBJ",&DAT_14c76512c,
                L"Whether OBJ support is enabled.");
  atexit(FUN_1444f90a4);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb45a0,1,0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cc146e8 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb49b0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb4db0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb51c0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb55e0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb5df0,2,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb6320,1,0);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb6750,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb6b90,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb6fc0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc147e0,L"Interchange.FeatureFlags.Import.DDS",&DAT_14c76512d,
                L"Whether DDS support is enabled.");
  atexit(FUN_1445007b9);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb7620,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14808,L"Interchange.FeatureFlags.Import.IES",&DAT_14c76512e,
                L"Whether IES support is enabled.");
  atexit(FUN_144501c7e);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb7b80,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14830,L"Interchange.FeatureFlags.Import.PNG",&DAT_14c76512f,
                L"Whether PNG support is enabled.");
  atexit(FUN_144501cc3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14840,L"Interchange.FeatureFlags.Import.BMP",&DAT_14c765130,
                L"Whether BMP support is enabled.");
  atexit(FUN_144501d08);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14850,L"Interchange.FeatureFlags.Import.EXR",&DAT_14c765131,
                L"Whether OpenEXR support is enabled.");
  atexit(FUN_144501d4d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14860,L"Interchange.FeatureFlags.Import.HDR",&DAT_14c765132,
                L"Whether HDR support is enabled.");
  atexit(FUN_144501d92);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14870,L"Interchange.FeatureFlags.Import.TIFF",&DAT_14c765133,
                L"Whether TIFF support is enabled.");
  atexit(FUN_144501dd7);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14880,L"Interchange.FeatureFlags.Import.MipMapImage",&DAT_14c765134,
                L"Whether Mip Mapped Image support is enabled.");
  atexit(FUN_144501e1c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14890,L"Interchange.FeatureFlags.Import.TGA",&DAT_14c765135,
                L"Whether TGA support is enabled.");
  atexit(FUN_144501e61);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb84e0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc148b8,L"Interchange.FeatureFlags.Import.JPG",&DAT_14c765136,
                L"Whether JPG support is enabled.");
  atexit(FUN_144502563);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb89d0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc148e0,L"Interchange.FeatureFlags.Import.PSD",&DAT_14c765137,
                L"Whether PSD support is enabled.");
  atexit(FUN_1445025a8);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144508294 FUN_144508294 body=2087 status=ok
// SIG undefined FUN_144508294(void)

undefined1 * FUN_144508294(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [3];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  code **local_98;
  ulonglong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  byte local_70;
  code *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_2;
  if ((longlong *)param_3[3] == (longlong *)0x0) {
    local_68 = (code *)0x14bcb9672;
    uStack_60._0_4_ = 0x1c;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = (code *)0x14bcb9602;
    uStack_60._0_4_ = 0x19;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = (code *)0x14bcb9636;
    uStack_60 = CONCAT44(uStack_60._4_4_,0x1d);
    goto LAB_144508405;
  }
  lVar4 = (**(code **)(*(longlong *)param_3[3] + 0x2e8))();
  if (lVar4 == 0) {
LAB_14450832f:
    local_68 = (code *)0x14bcb971e;
    uStack_60._0_4_ = 0x21;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = (code *)0x14bcb9602;
    uStack_60._0_4_ = 0x19;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = (code *)0x14bcb96ac;
    uStack_60 = CONCAT44(uStack_60._4_4_,0x38);
LAB_144508405:
    FUN_140208c1e(&local_88,&local_a8,&local_98,&local_68);
    FUN_144508abc(&local_c0,&local_88);
  }
  else {
    if (DAT_14cb0b430 == 0) {
      local_140 = &local_68;
      local_68 = FUN_1449e2820;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_145892f94;
      local_148 = &LAB_147d6dbf3;
      local_150 = &LAB_1464081e0;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x10000001;
      local_170 = 8;
      local_178 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      if (DAT_14cb0b430 == 0) goto LAB_14450832f;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) !=
        DAT_14cb0b430 + 0x30)) goto LAB_14450832f;
    lVar5 = FUN_1493e41c2(param_3[3]);
    if (lVar5 == 0) {
      local_68 = (code *)0x14bcb982a;
      uStack_60._0_4_ = 0x1d;
      FUN_1446e940c(&local_98,&local_68);
      local_68 = (code *)0x14bcb9602;
      uStack_60._0_4_ = 0x19;
      FUN_1446e940c(&local_a8,&local_68);
      local_68 = (code *)0x14bcb9762;
      uStack_60 = CONCAT44(uStack_60._4_4_,99);
      goto LAB_144508405;
    }
    uVar2 = param_3[6];
    FUN_1493e42e6(&local_68,param_3[3],lVar5);
    FUN_1493e4362(local_78,&local_68,uVar2);
    if ((&DAT_14bcbb75d)[local_70] != '\x01') {
      cVar3 = FUN_1493e44e2(local_78);
      if (cVar3 == '\0') {
        local_68 = (code *)0x14bcb99b4;
        uStack_60._0_4_ = 0x20;
        FUN_1446e940c(&local_98,&local_68);
        local_68 = (code *)0x14bcb9602;
        uStack_60._0_4_ = 0x19;
        FUN_1446e940c(&local_a8,&local_68);
        local_68 = (code *)0x14bcb994c;
        uStack_60 = CONCAT44(uStack_60._4_4_,0x33);
        goto LAB_144508405;
      }
      lVar5 = param_3[7];
      lVar7 = lVar5;
      if (lVar5 == 0) {
        local_58 = (longlong *)0x0;
        uStack_50 = 0;
        local_68 = (code *)0x0;
        uStack_60 = 0;
        cVar3 = FUN_1492f4b30(param_3[3]);
        if (cVar3 == '\0') {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_140081d40(&local_68,0);
        }
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (lVar7 != 0) goto LAB_144508583;
        if (*(int *)(param_3 + 2) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = (undefined2 *)param_3[1];
        }
        FUN_1446f470e(&local_128,puVar8,1);
        lVar7 = FUN_1493e515d(*param_3,lVar4,local_128);
        if (lVar7 == 0) goto LAB_1445088c3;
        lVar4 = FUN_14588a8d2();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          *(undefined2 *)(lVar7 + 0x13d) = 0x101;
          *(undefined1 *)(lVar7 + 0xf6) = 0x1b;
        }
      }
      else {
LAB_144508583:
        if (DAT_14cb0b430 == 0) {
          local_68 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = &LAB_145892f94;
          local_148 = &LAB_147d6dbf3;
          local_150 = &LAB_1464081e0;
          local_158 = L"Engine";
          local_160 = 0;
          local_168 = 0x10000001;
          local_170 = 8;
          local_178 = 0x138;
          local_140 = &local_68;
          FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
        }
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30)) {
          lVar7 = 0;
        }
        if ((lVar5 == 0) &&
           (cVar3 = (**(code **)(*(longlong *)param_3[4] + 0x2b8))(), cVar3 != '\x01')) {
          *param_2 = 1;
          *(undefined1 *)(param_1 + 0xb0) = 1;
        }
        if (lVar7 == 0) {
LAB_1445088c3:
          local_68 = (code *)0x14bcb9a28;
          uStack_60._0_4_ = 0x20;
          FUN_1446e940c(&local_98,&local_68);
          local_68 = (code *)0x14bcb9602;
          uStack_60._0_4_ = 0x19;
          FUN_1446e940c(&local_a8,&local_68);
          local_68 = (code *)0x14bcb99f6;
          uStack_60 = CONCAT44(uStack_60._4_4_,0x18);
          goto LAB_144508405;
        }
      }
      *(longlong *)(param_2 + 8) = lVar7;
      goto LAB_144508441;
    }
    plVar6 = (longlong *)FUN_146890bba(lVar5);
    if (plVar6 == (longlong *)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
    }
    else {
      (**(code **)(*plVar6 + 800))(plVar6,local_f8,lVar5);
    }
    FUN_140233b1a(local_e0,local_f8);
    local_68 = (code *)0x14bcb98fc;
    uStack_60._0_4_ = 0x27;
    FUN_1446e940c(local_11c,&local_68);
    local_68 = (code *)0x14bcb9602;
    uStack_60._0_4_ = 0x19;
    FUN_1446e940c(local_120,&local_68);
    local_68 = (code *)0x14bcb9866;
    uStack_60 = CONCAT44(uStack_60._4_4_,0x4a);
    FUN_140208c1e(local_118,local_120,local_11c,&local_68);
    FUN_14023409e(&local_108,local_118,1);
    local_68 = (code *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,local_e0);
    local_90 = &local_48;
    local_98 = &local_68;
    FUN_14010d304(&local_88);
    local_a8 = local_108;
    local_a0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_144508abc(&local_c0,local_d0);
    local_88 = local_d0[0];
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
LAB_144508441:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144508abc FUN_144508abc body=1003 status=ok
// SIG undefined FUN_144508abc(void)

void FUN_144508abc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)*param_1;
  lVar6 = FUN_14936b1b4(plVar4[5]);
  local_88 = (wchar_t *)0x0;
  local_80[0] = *(int *)(*(longlong *)(param_1[1] + 0x28) + 0x30);
  lVar7 = (longlong)local_80[0];
  pvVar5 = *(void **)(*(longlong *)(param_1[1] + 0x28) + 0x28);
  if (lVar7 == 0) {
    local_80[1] = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80[0],0);
    memcpy(local_88,pvVar5,lVar7 * 2);
  }
  if ((wchar_t **)(lVar6 + 0x28) == &local_88) {
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t **)(lVar6 + 0x28) = local_88;
    local_88 = (wchar_t *)0x0;
    *(int *)(lVar6 + 0x30) = local_80[0];
    *(int *)(lVar6 + 0x34) = local_80[1];
  }
  lVar7 = param_1[1];
  puVar1 = (undefined8 *)(lVar6 + 0x38);
  if (puVar1 != (undefined8 *)(lVar7 + 8)) {
    iVar3 = *(int *)(lVar7 + 0x10);
    pvVar5 = *(void **)(lVar7 + 8);
    *(int *)(lVar6 + 0x40) = iVar3;
    if (iVar3 == 0 && *(int *)(lVar6 + 0x44) == 0) {
      *(undefined4 *)(lVar6 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,pvVar5,(longlong)iVar3 * 2);
      }
    }
  }
  lVar7 = (**(code **)(*plVar4 + 0x2a0))(plVar4);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(lVar6 + 0x58) = lVar7;
  local_d8 = (longlong *)*param_2;
  local_118 = plVar4;
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  local_d0 = (undefined4)param_2[1];
  FUN_140009b9a(local_e8,param_1[1] + 8);
  local_88 = L"TexFact_CouldNotCreateMat";
  local_80[0] = 0x19;
  FUN_1446e940c(local_10c,&local_88);
  local_88 = L"InterchangeTextureFactory";
  local_80[0] = 0x19;
  FUN_1446e940c(local_110,&local_88);
  local_88 = L"UInterchangeTextureFactory: Could not create texture asset %s. Reason: %s";
  local_80[0] = 0x49;
  FUN_140208c1e(local_108,local_110,local_10c,&local_88);
  FUN_14023409e(&local_f8,local_108,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_e8);
  local_68 = 4;
  FUN_14023423e(local_58,&local_d8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_f8;
  local_b0 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_88 + lVar7) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_88 + lVar7) + 0x10))();
      *(undefined8 *)((longlong)&local_88 + lVar7) = 0;
      *(undefined4 *)((longlong)local_80 + lVar7) = 0;
    }
    lVar7 = lVar7 + -0x20;
  } while (lVar7 != -0x10);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  FUN_140008f88(lVar6 + 0x70,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  plVar4 = local_118;
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  *(undefined1 *)(plVar4 + 0x16) = 1;
  *(undefined1 *)param_1[2] = 1;
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144508ea8 FUN_144508ea8 body=10638 status=ok
// SIG undefined FUN_144508ea8(void)

undefined1 * FUN_144508ea8(code **param_1,undefined1 *param_2,longlong param_3)

{
  code ***pppcVar1;
  int *piVar2;
  code ***pppcVar3;
  ulonglong *puVar4;
  code **ppcVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  void *pvVar9;
  undefined2 uVar10;
  longlong **pplVar11;
  char cVar12;
  byte bVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong ***ppplVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  code **ppcVar27;
  int iVar28;
  char cVar29;
  code *pcVar30;
  undefined4 uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  ulonglong uVar35;
  bool bVar36;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined4 local_300;
  code ***local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  code **local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined8 local_2b8;
  longlong **local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  void *local_298;
  ulonglong local_290;
  code **local_288;
  code ***local_280;
  longlong *local_278 [2];
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  code **local_248;
  longlong local_240;
  code **local_238;
  code ***pppcStack_230;
  longlong local_228;
  code **local_220;
  undefined8 uStack_218;
  longlong local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  code **local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  longlong *local_1d8 [2];
  char local_1c8;
  undefined7 uStack_1c7;
  code ***local_1c0;
  longlong *local_1b8;
  ulonglong uStack_1b0;
  code *local_1a8;
  longlong **pplStack_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  undefined1 local_181;
  longlong *local_180;
  longlong local_178;
  int local_16c;
  undefined1 local_168 [8];
  byte local_160;
  longlong local_158;
  char local_150;
  code **local_148;
  undefined8 uStack_140;
  longlong **local_138;
  undefined1 uStack_130;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 local_11c;
  char local_118;
  char local_110;
  code **local_108;
  longlong **pplStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int local_e4;
  byte local_e0;
  undefined4 local_dc;
  char local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined7 uStack_c7;
  uint local_c0;
  code *local_b8;
  longlong **pplStack_b0;
  longlong **local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  code **local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = *(undefined1 *)(param_1 + 0x16);
  local_248 = param_1;
  local_240 = param_3;
  if (*(longlong **)(param_3 + 0x18) == (longlong *)0x0) {
    local_b8 = (code *)0x14bcb9ade;
    pplStack_b0._0_4_ = 0x22;
    FUN_1446e940c(&local_148,&local_b8);
    local_b8 = (code *)0x14bcb9602;
    pplStack_b0._0_4_ = 0x19;
    FUN_1446e940c(&local_220,&local_b8);
    local_b8 = (code *)0x14bcb9a6a;
    pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x39);
  }
  else {
    lVar16 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x2e8))();
    if (lVar16 != 0) {
      if (DAT_14cb0b430 == 0) {
        local_2d0 = &local_b8;
        local_b8 = FUN_1449e2820;
        local_2c0 = FUN_14081d0ea;
        local_2c8 = &LAB_145892f94;
        local_2d8 = &LAB_147d6dbf3;
        local_2e0 = &LAB_1464081e0;
        local_2e8 = L"Engine";
        local_2f0 = 0;
        local_2f8 = (code ***)CONCAT44(local_2f8._4_4_,0x10000001);
        local_300 = 8;
        local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
        if (DAT_14cb0b430 == 0) goto LAB_144508f47;
      }
      if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8)
          == DAT_14cb0b430 + 0x30)) {
        lVar16 = FUN_1493e41c2(*(undefined8 *)(param_3 + 0x18));
        if (lVar16 == 0) {
          local_b8 = (code *)0x14bcb9cdc;
          pplStack_b0._0_4_ = 0x23;
          FUN_1446e940c(&local_148,&local_b8);
          local_b8 = (code *)0x14bcb9602;
          pplStack_b0._0_4_ = 0x19;
          FUN_1446e940c(&local_220,&local_b8);
          local_b8 = (code *)0x14bcb9c16;
          pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x62);
          goto LAB_14450901d;
        }
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        cVar12 = FUN_1492f4b30(*(undefined8 *)(param_3 + 0x18));
        if (cVar12 == '\0') {
          lVar17 = 0;
        }
        else {
          lVar17 = FUN_140081d40(&local_268,0);
        }
        if (*(char *)(param_1 + 0x16) == '\x01') {
          *(longlong *)(param_2 + 8) = lVar17;
        }
        else {
          FUN_1493e42e6(&local_158,*(undefined8 *)(param_3 + 0x18),lVar16);
          FUN_1493e4362(local_168,&local_158);
          if ((&DAT_14bcbb75d)[local_160] == '\x01') {
            plVar18 = (longlong *)FUN_146890bba(lVar16);
            if (plVar18 == (longlong *)0x0) {
              local_238 = (code **)0x0;
              pppcStack_230 = (code ***)0x0;
            }
            else {
              (**(code **)(*plVar18 + 800))(plVar18,&local_238,lVar16);
            }
            FUN_140233b1a(local_278,&local_238);
            local_b8 = (code *)0x14bcb9df2;
            pplStack_b0._0_4_ = 0x2d;
            FUN_1446e940c(&local_1a8,&local_b8);
            local_b8 = (code *)0x14bcb9602;
            pplStack_b0._0_4_ = 0x19;
            FUN_1446e940c(&local_1b8,&local_b8);
            local_b8 = (code *)0x14bcb9d24;
            pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x66);
            FUN_140208c1e(&local_198,&local_1b8,&local_1a8,&local_b8);
            FUN_14023409e(&local_288,&local_198,1);
            local_b8 = (code *)CONCAT44(local_b8._4_4_,4);
            FUN_14023423e(&local_a8,local_278);
            uStack_140 = (longlong **)&local_98;
            local_148 = &local_b8;
            FUN_14010d304(&local_108);
            local_220 = local_288;
            uStack_218 = local_280;
            if (local_280 != (code ***)0x0) {
              LOCK();
              *(int *)(local_280 + 1) = *(int *)(local_280 + 1) + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_1f8,&local_220,&local_108);
            FUN_14007f2db(local_108,(ulonglong)pplStack_100 & 0xffffffff);
            if (local_108 != (code **)0x0) {
              FUN_1400020a8();
            }
            if (local_a8 != (longlong **)0x0) {
              (*(code *)(*local_a8)[2])();
            }
            if (local_280 != (code ***)0x0) {
              LOCK();
              pppcVar1 = local_280 + 1;
              *(int *)pppcVar1 = *(int *)pppcVar1 + -1;
              UNLOCK();
              if (*(int *)pppcVar1 == 0) {
                (***local_280)(local_280);
                LOCK();
                piVar2 = (int *)((longlong)local_280 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(*local_280)[2])(local_280);
                }
              }
            }
            if (local_278[0] != (longlong *)0x0) {
              (**(code **)(*local_278[0] + 0x10))();
            }
            if (local_198 != (longlong *)0x0) {
              (**(code **)(*local_198 + 0x10))();
            }
            if (local_238 != (code **)0x0) {
              FUN_1400020a8();
            }
            FUN_14450b838(&local_248,&local_1f8);
            if (local_1f8 != (code **)0x0) {
              (**(code **)(*local_1f8 + 0x10))();
            }
          }
          else {
            FUN_1493e45e3(&local_178,local_168);
            if (local_16c == -1) {
              local_b8 = (code *)0x14bcb9f26;
              pplStack_b0._0_4_ = 0x26;
              FUN_1446e940c(&local_148,&local_b8);
              local_b8 = (code *)0x14bcb9602;
              pplStack_b0._0_4_ = 0x19;
              FUN_1446e940c(&local_220,&local_b8);
              local_b8 = (code *)0x14bcb9e4e;
              pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x6b);
              FUN_140208c1e(&local_108,&local_220,&local_148,&local_b8);
              FUN_14450b838(&local_248,&local_108);
              if (local_108 != (code **)0x0) {
                (**(code **)(*local_108 + 0x10))();
              }
            }
            else {
              ppcVar27 = param_1 + 0x14;
              if (*(int *)((longlong)param_1 + 0xac) != -1) {
                if (*ppcVar27 != (code *)0x0) {
                  FUN_1400020a8();
                }
                param_1[0x14] = (code *)0x0;
                param_1[0x15] = (code *)0xffffffff00000000;
              }
              lVar16 = *(longlong *)(param_3 + 0x20);
              if (local_160 == 1) {
                local_2b0 = *(longlong ***)(param_3 + 0x28);
                local_98 = 0;
                iStack_94 = 0;
                local_90 = 0;
                local_b8 = (code *)0x0;
                pplStack_b0 = (longlong **)0x0;
                uStack_8c = 0x80;
                uStack_88 = 0xffffffff;
                iStack_84 = 0;
                local_78 = (code **)0x0;
                local_70 = 0;
                local_1c8 = '\0';
                if (local_150 == '\x01') {
                  FUN_149349d10(local_158 + 0x410,&local_108);
                  FUN_14934a0dc(&local_b8,&local_108);
                  local_c0 = 0;
                  if (CONCAT71(uStack_c7,local_c8) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140926446(&local_108);
                  if (local_150 != '\x01') goto LAB_1445092b1;
LAB_1445092b7:
                  if (local_158 != 0) {
                    FUN_1493ae54e(local_158,&local_1c8);
                  }
                }
                else {
LAB_1445092b1:
                  if ((byte)(local_150 - 2U) < 5) goto LAB_1445092b7;
                }
                if (lVar16 == 0) {
LAB_1445092d1:
                  local_70 = 0;
                  if (local_78 != (code **)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_140926446(&local_b8);
                  goto LAB_144509302;
                }
                uVar19 = FUN_14588b4b2();
                plVar18 = (longlong *)FUN_144718840(lVar16,uVar19);
                uVar19 = FUN_145a95990();
                plVar20 = (longlong *)FUN_144718840(lVar16,uVar19);
                if (plVar18 == (longlong *)0x0 && plVar20 != (longlong *)0x0) {
LAB_14450a3a7:
                  (**(code **)(*plVar20 + 0x10))(plVar20,&local_148,&local_178,ppcVar27);
LAB_14450b509:
                  pplVar11 = uStack_140;
                  ppcVar27 = local_148;
                  local_d8 = local_118;
                  if (local_118 == '\x01') {
                    local_148 = (code **)0x0;
                    uStack_140 = (longlong **)0x0;
                    local_108 = ppcVar27;
                    pplStack_100 = pplVar11;
                    local_f8 = local_138;
                    uStack_f0 = (uint)CONCAT41(uStack_12f,uStack_130);
                    uStack_ec = (undefined4)
                                (CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,uStack_130)) >>
                                0x20);
                    local_138 = (longlong **)0x0;
                    local_e8 = CONCAT31(local_e8._1_3_,uStack_12b._3_1_);
                    local_e0 = uStack_123._3_1_;
                    if (uStack_123._3_1_ == 1) {
                      local_e4 = CONCAT31((undefined3)uStack_123,uStack_127._3_1_);
                    }
                  }
                  local_c0 = CONCAT31(local_c0._1_3_,2);
                  FUN_1493e72ec(&local_148);
                }
                else {
                  if (plVar20 == (longlong *)0x0 || plVar18 == (longlong *)0x0) {
                    if (plVar18 == (longlong *)0x0) goto LAB_1445092d1;
                    iVar28 = (int)pplStack_b0 - iStack_84;
                    if (iVar28 == 0) goto LAB_14450a32d;
                    local_198 = (longlong *)0x0;
                    uStack_190 = 0;
                    if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(iVar28);
                    }
                    FUN_1493e7324(&local_198);
                    local_290 = (ulonglong)local_90;
                    if (local_90 == 0) {
                      uVar35 = 1;
                      local_2b8 = (longlong *)0x0;
                      local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
                      uVar22 = 0;
                    }
                    else {
                      ppplVar21 = (longlong ***)CONCAT44(iStack_94,local_98);
                      if ((longlong ***)CONCAT44(iStack_94,local_98) == (longlong ***)0x0) {
                        ppplVar21 = &local_a8;
                      }
                      uVar25 = *(uint *)ppplVar21;
                      if (uVar25 == 0) {
                        iVar28 = local_90 + 0x1e;
                        if (-1 < (int)(local_90 - 1)) {
                          iVar28 = local_90 - 1;
                        }
                        local_2b8 = (longlong *)0x0;
                        plVar18 = (longlong *)(ulonglong)(uint)(iVar28 >> 5);
                        if (iVar28 >> 5 < 1) {
                          plVar18 = (longlong *)0x0;
                        }
                        local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
                        do {
                          if (plVar18 == local_2b8) goto LAB_14450ab58;
                          local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 0x20);
                          uVar25 = *(uint *)((longlong)ppplVar21 + ((longlong)local_2b8 + 1) * 4);
                          local_2b8 = (longlong *)((longlong)local_2b8 + 1);
                        } while (uVar25 == 0);
                      }
                      else {
                        local_2b8 = (longlong *)0x0;
                        local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
                      }
                      uVar35 = (ulonglong)(-uVar25 & uVar25);
                      uVar22 = uVar35 * 2 + 1;
                      lVar34 = 0x3f;
                      if (uVar22 != 0) {
                        for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                        }
                      }
                      uVar25 = ((int)local_2a8 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                      uVar22 = (ulonglong)uVar25;
                      if ((int)local_90 <= (int)uVar25) {
                        uVar22 = local_290;
                      }
                    }
                    if ((uint)uVar22 != local_90) {
                      local_2a0 = (undefined1 *)0xffffffff;
                      local_298 = (void *)CONCAT44(local_298._4_4_,0xffffffff);
                      do {
                        pcVar30 = local_b8 + (longlong)(int)uVar22 * 0x20;
                        if ((int)local_2a0 == -1) {
                          local_108 = (code **)0x0;
                          uVar25 = *(uint *)(local_2b0 + 6);
                          local_2a0 = (undefined1 *)local_2b0[5];
                          pplStack_100 = (longlong **)CONCAT44(pplStack_100._4_4_,uVar25);
                          if ((longlong)(int)uVar25 == 0) {
                            pplStack_100 = (longlong **)(ulonglong)uVar25;
                            iVar28 = *(int *)(pcVar30 + 0x10);
                            if (iVar28 != 0) {
                              iVar26 = 0;
                              goto LAB_14450a9a5;
                            }
                            local_2a0 = &DAT_00000001;
                          }
                          else {
                            FUN_1446dd670(&local_108,uVar25,0);
                            memcpy(local_108,local_2a0,(longlong)(int)uVar25 * 2);
                            iVar28 = *(int *)(pcVar30 + 0x10);
                            iVar26 = (int)pplStack_100;
                            if ((int)pplStack_100 == iVar28) {
                              local_2a0 = (undefined1 *)CONCAT71(local_2a0._1_7_,1);
                              if (1 < (int)pplStack_100) {
                                lVar34 = 0;
                                while( true ) {
                                  uVar7 = *(ushort *)((longlong)local_108 + lVar34);
                                  uVar25 = (uint)uVar7;
                                  uVar8 = *(ushort *)(*(longlong *)(pcVar30 + 8) + lVar34);
                                  uVar33 = (uint)uVar8;
                                  if (uVar7 != uVar8) {
                                    if ((uVar8 | uVar7) < 0x80) {
                                      uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                                      uVar33 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                                      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar8])
                                      goto LAB_14450a95f;
                                    }
                                    iVar28 = uVar25 - uVar33;
                                    goto LAB_14450a9ae;
                                  }
                                  if (uVar7 == 0) break;
LAB_14450a95f:
                                  lVar34 = lVar34 + 2;
                                }
                                iVar28 = 0;
LAB_14450a9ae:
                                bVar36 = iVar28 == 0;
                                goto LAB_14450a9b0;
                              }
                            }
                            else {
LAB_14450a9a5:
                              bVar36 = iVar28 + iVar26 == 1;
LAB_14450a9b0:
                              local_2a0 = (undefined1 *)CONCAT71(local_2a0._1_7_,bVar36);
                            }
                            if (local_108 != (code **)0x0) {
                              FUN_1400020a8();
                            }
                          }
                          uVar22 = (ulonglong)local_2a0 & 1;
                          local_2a0 = (undefined1 *)0xffffffff;
                          iVar28 = (int)uStack_190;
                          if (uVar22 != 0) {
                            local_2a0 = (undefined1 *)(uStack_190 & 0xffffffff);
                          }
                        }
                        else {
                          iVar28 = (int)uStack_190;
                        }
                        uStack_190 = CONCAT44(uStack_190._4_4_,iVar28 + 1U);
                        if (uStack_190._4_4_ < iVar28 + 1U) {
                          FUN_1493e7384(&local_198,iVar28);
                        }
                        local_198[iVar28] = (longlong)pcVar30;
                        uVar25 = (uint)local_298 & ~(uint)uVar35;
                        ppplVar21 = (longlong ***)CONCAT44(iStack_94,local_98);
                        if ((longlong ***)CONCAT44(iStack_94,local_98) == (longlong ***)0x0) {
                          ppplVar21 = &local_a8;
                        }
                        lVar34 = (longlong)(int)local_2b8;
                        local_298 = (void *)CONCAT44(local_298._4_4_,uVar25);
                        uVar25 = *(uint *)((longlong)ppplVar21 + lVar34 * 4) & uVar25;
                        if (uVar25 == 0) {
                          iVar28 = local_90 + 0x1e;
                          if (-1 < (int)(local_90 - 1)) {
                            iVar28 = local_90 - 1;
                          }
                          iVar28 = iVar28 >> 5;
                          local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 0x20);
                          iVar26 = iVar28;
                          if (iVar28 < (int)local_2b8) {
                            iVar26 = (int)local_2b8;
                          }
                          if ((int)local_2b8 < iVar28) {
                            lVar32 = 0;
                            do {
                              uVar25 = *(uint *)((longlong)ppplVar21 + lVar32 * 4 + lVar34 * 4 + 4);
                              if (uVar25 != 0) {
                                local_2b8 = (longlong *)
                                            (ulonglong)((int)local_2b8 + (int)lVar32 + 1);
                                local_298 = (void *)CONCAT44(local_298._4_4_,0xffffffff);
                                goto LAB_14450aacf;
                              }
                              local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 0x20);
                              lVar32 = lVar32 + 1;
                            } while (iVar26 - lVar34 != lVar32);
                            local_298 = (void *)CONCAT44(local_298._4_4_,0xffffffff);
                            lVar34 = (longlong)iVar26;
                          }
                          local_2b8 = (longlong *)(lVar34 + 1);
                          uVar25 = local_90;
                        }
                        else {
LAB_14450aacf:
                          uVar35 = (ulonglong)(-uVar25 & uVar25);
                          uVar22 = uVar35 * 2 + 1;
                          lVar34 = 0x3f;
                          if (uVar22 != 0) {
                            for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                            }
                          }
                          uVar25 = ((int)local_2a8 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                          if ((int)local_90 <= (int)uVar25) {
                            uVar25 = local_90;
                          }
                        }
                        uVar22 = (ulonglong)uVar25;
                      } while (uVar25 != (uint)local_290);
                      iVar28 = (int)local_2a0;
                      if (1 < iVar28 + 1U) {
                        lVar34 = *local_198;
                        *local_198 = local_198[iVar28];
                        local_198[iVar28] = lVar34;
                      }
                    }
LAB_14450ab58:
                    FUN_1493e4682(&local_1a8,lVar16,uStack_190 & 0xffffffff);
                    local_1b8 = (longlong *)0x0;
                    uStack_1b0 = 0;
                    FUN_1493e47ae(&local_1b8,uStack_190 & 0xffffffff);
                    uStack_218 = &local_108;
                    pplStack_100 = &local_198;
                    local_2f8 = &local_148;
                    local_148 = (code **)0x0;
                    uStack_140 = (longlong **)((ulonglong)uStack_140._4_4_ << 0x20);
                    local_220 = (code **)FUN_14450be5a;
                    local_300 = 10;
                    local_108 = &local_1a8;
                    local_f8 = &local_1b8;
                    FUN_1401f8d10(L"ParallelFor Task",uStack_190 & 0xffffffff,1);
                    lVar16 = (longlong)(int)uStack_1b0;
                    if (0 < lVar16) {
                      iVar28 = -(int)uStack_1b0;
                      uVar22 = lVar16 + 1;
                      lVar16 = lVar16 * 0x38;
                      do {
                        lVar34 = lVar16 + -0x38;
                        uVar35 = uVar22 - 1;
                        cVar12 = (**(code **)(*(longlong *)((longlong)local_1b8 + lVar34) + 0x18))
                                           ((longlong)local_1b8 + lVar34);
                        if (cVar12 == '\0') {
                          local_298 = (void *)((longlong)local_1b8 + lVar34);
                          *(undefined ***)((longlong)local_1b8 + lVar34) = &PTR_FUN_14bcb3bb0;
                          local_2b0 = (longlong **)local_1b8;
                          if (*(char *)((longlong)local_1b8 + lVar16 + -8) == '\x01') {
                            *(undefined1 *)((longlong)local_298 + 0x30) = 0;
                          }
                          local_2b8 = *(longlong **)((longlong)local_1b8 + lVar16 + -0x30);
                          if (local_2b8 != (longlong *)0x0) {
                            LOCK();
                            plVar18 = local_2b8 + 3;
                            lVar32 = *plVar18;
                            *plVar18 = *plVar18 + -1;
                            UNLOCK();
                            if (((uint)lVar32 & 0x3fffffff) == 1) {
                              (**(code **)(*local_2b8 + 0x10))();
                              local_2b8[1] = 0;
                              local_2b8[2] = 0;
                              LOCK();
                              puVar4 = (ulonglong *)(local_2b8 + 3);
                              uVar6 = *puVar4;
                              *puVar4 = *puVar4 - 0x40000000;
                              UNLOCK();
                              if ((uVar6 & 0xfffffffc0000000) == 0x40000000) {
                                (**(code **)*local_2b8)(local_2b8,1);
                              }
                            }
                          }
                          if (uVar35 != (uStack_1b0 & 0xffffffff)) {
                            memmove(local_298,(void *)((longlong)local_2b0 + lVar16),
                                    (longlong)((int)uStack_1b0 + iVar28) * 0x38);
                          }
                          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + -1);
                          FUN_1493e7504(&local_1b8);
                          if (uVar35 != (uStack_190 & 0xffffffff)) {
                            memmove(local_198 + (uVar22 - 2),local_198 + (uVar22 - 1),
                                    (longlong)((int)uStack_190 + iVar28) << 3);
                          }
                          uStack_190 = CONCAT44(uStack_190._4_4_,(int)uStack_190 + -1);
                          FUN_1493e75aa(&local_198);
                        }
                        iVar28 = iVar28 + 1;
                        uVar22 = uVar35;
                        lVar16 = lVar34;
                      } while (1 < uVar35);
                    }
                    plVar18 = local_1b8;
                    if ((int)uStack_1b0 == 0) {
                      local_118 = '\0';
                      uVar22 = 0;
                    }
                    else {
                      local_f8 = (longlong **)0x0;
                      uStack_f0 = 0;
                      uStack_ec = 0;
                      local_108 = (code **)0x0;
                      pplStack_100 = (longlong **)0x0;
                      local_e8 = CONCAT31(local_e8._1_3_,1);
                      local_e0 = 0;
                      cVar12 = (**(code **)(*local_1b8 + 0x18))();
                      if (cVar12 == '\0') {
LAB_14450b42b:
                        local_118 = '\0';
                      }
                      else {
                        uStack_f0 = *(uint *)((longlong)plVar18 + 0x14);
                        uStack_ec = (undefined4)plVar18[3];
                        local_e8 = CONCAT31(local_e8._1_3_,*(byte *)(plVar18 + 5));
                        local_2b0 = (longlong **)(uStack_1b0 & 0xffffffff);
                        if ((int)uStack_1b0 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1456afac4(local_2b0);
                        }
                        bVar13 = *(byte *)(plVar18 + 5);
                        if (local_f8._4_4_ < (int)uStack_1b0) {
                          FUN_1493e7646(&pplStack_100,local_2b0);
                          local_2b0 = (longlong **)(uStack_1b0 & 0xffffffff);
                          bVar13 = (byte)local_e8;
                        }
                        plVar18 = local_1b8;
                        if ((int)local_2b0 < 1) {
                          local_2b8 = (longlong *)((ulonglong)local_2b8._4_4_ << 0x20);
                          bVar36 = false;
                        }
                        else {
                          uVar22 = (ulonglong)uStack_f0;
                          lVar16 = (longlong)local_2b0 * 0x38;
                          lVar34 = 0;
                          bVar36 = false;
                          local_2b8 = (longlong *)((ulonglong)local_2b8._4_4_ << 0x20);
                          do {
                            if (bVar13 != *(byte *)((longlong)plVar18 + lVar34 + 0x28)) {
                              local_e8 = local_e8 & 0xffffff00;
                              uStack_f0 = 9;
                              local_2b8 = (longlong *)
                                          CONCAT44(local_2b8._4_4_,
                                                   (int)CONCAT71((int7)(uVar22 >> 8),1));
                              uVar22 = 9;
                              bVar13 = 0;
                            }
                            if ((int)uVar22 != *(int *)((longlong)plVar18 + lVar34 + 0x14)) {
                              uVar22 = FUN_146988019(uVar22 & 0xffffffff);
                              uStack_f0 = (uint)uVar22;
                              bVar36 = true;
                            }
                            lVar34 = lVar34 + 0x38;
                          } while (lVar16 - lVar34 != 0);
                        }
                        if (((bVar13 & 1) == 0) || (uStack_f0 - 1 < 2)) {
                          if (((ulonglong)local_2b8 & 1) != 0 || bVar36) goto LAB_14450af38;
LAB_14450b33c:
                          bVar13 = 1;
                          if (0 < (int)local_2b0) {
                            lVar16 = 0;
                            lVar34 = 0;
                            do {
                              iVar28 = (*(int *)local_198[lVar34] + -0x3e9) / 10;
                              cVar12 = FUN_1493dc732(&local_108,
                                                     *(int *)local_198[lVar34] + iVar28 * -10 +
                                                     -0x3e9,iVar28,(longlong)local_1b8 + lVar16);
                              if (cVar12 == '\0') goto LAB_14450b42b;
                              bVar13 = bVar13 & *(int *)((longlong)local_1b8 + lVar16 + 0x1c) ==
                                                *(int *)((longlong)local_1b8 + 0x1c);
                              lVar34 = lVar34 + 1;
                              lVar16 = lVar16 + 0x38;
                            } while (lVar34 < (int)uStack_1b0);
                          }
                        }
                        else {
                          local_e8 = local_e8 & 0xffffff00;
LAB_14450af38:
                          bVar13 = 1;
                          if ((int)local_2b0 != 0) {
                            local_2b8 = local_1b8;
                            local_2b0 = (longlong **)((longlong)(int)local_2b0 * 0x38);
                            lVar16 = 0;
                            do {
                              cVar12 = *(char *)((longlong)local_2b8 + lVar16 + 0x28);
                              uVar25 = *(uint *)((longlong)local_2b8 + lVar16 + 0x14);
                              if ((cVar12 != (byte)local_e8) || (uVar25 != uStack_f0)) {
                                uVar25 = uVar25 - 1;
                                cVar29 = -1;
                                if (uVar25 < 0xb) {
                                  cVar29 = (&DAT_14bcbb764)[uVar25];
                                }
                                local_298 = (void *)CONCAT44(local_298._4_4_,
                                                             *(undefined4 *)
                                                              ((longlong)local_2b8 + lVar16 + 0x24))
                                ;
                                local_2a8 = CONCAT44(local_2a8._4_4_,
                                                     *(undefined4 *)
                                                      ((longlong)local_2b8 + lVar16 + 0x20));
                                plVar18 = *(longlong **)((longlong)local_2b8 + lVar16 + 8);
                                if (plVar18 == (longlong *)0x0) {
                                  local_1e8 = 0;
                                }
                                else {
                                  if (((ulonglong)plVar18[3] >> 0x3e & 1) == 0) {
                                    (**(code **)(*plVar18 + 8))(plVar18);
                                  }
                                  local_1e8 = plVar18[1];
                                }
                                pplVar11 = uStack_140;
                                pppcVar1 = uStack_1f0;
                                local_1f8 = (code **)CONCAT44((uint)local_298,(int)local_2a8);
                                uStack_1f0._6_2_ = SUB82(pppcVar1,6);
                                uStack_1f0._0_6_ = CONCAT15(cVar12 * '\x02',CONCAT14(cVar29,1));
                                uVar24 = 0xff;
                                if (uStack_f0 - 1 < 0xb) {
                                  uVar24 = (&DAT_14bcbb764)[uStack_f0 - 1];
                                }
                                local_148 = *(code ***)((longlong)local_2b8 + lVar16 + 0x20);
                                uStack_140._6_2_ = SUB82(pplVar11,6);
                                uStack_140._0_6_ =
                                     CONCAT15((byte)local_e8 * '\x02',CONCAT14(uVar24,1));
                                uStack_127 = 0;
                                uStack_123 = uStack_123 & 0xff000000;
                                local_138 = (longlong **)0x0;
                                uStack_130 = 0;
                                uStack_12f = 0;
                                uStack_12b = 0;
                                FUN_14287f4cc(&local_148);
                                local_220 = (code **)0x0;
                                uVar10 = (undefined2)((ulonglong)uStack_218 >> 0x30);
                                uStack_218 = (code ***)CONCAT26(uVar10,0x20100000000);
                                local_200 = 0;
                                local_210 = 0;
                                uStack_208 = 0;
                                if ((byte)(cVar29 - 7U) < 2) {
                                  local_220 = *(code ***)((longlong)local_2b8 + lVar16 + 0x20);
                                  uStack_218._0_6_ =
                                       CONCAT15(*(char *)((longlong)local_2b8 + lVar16 + 0x28) *
                                                '\x02',0x600000001);
                                  uStack_218 = (code ***)CONCAT26(uVar10,(undefined6)uStack_218);
                                  FUN_14287f4cc(&local_220);
                                  local_238 = local_220;
                                  pppcStack_230 = uStack_218;
                                  local_228 = local_210;
                                  FUN_14287def8(&local_1f8,&local_238);
                                  local_1f8 = local_220;
                                  uStack_1f0 = uStack_218;
                                  local_1e8 = local_210;
                                }
                                local_238 = local_148;
                                pppcStack_230 = (code ***)uStack_140;
                                local_228 = (longlong)local_138;
                                FUN_14287def8(&local_1f8,&local_238);
                                if (local_210 != 0) {
                                  FUN_1400020a8();
                                }
                                puVar23 = (undefined8 *)FUN_14001cc68(0x38);
                                pplVar11 = local_138;
                                puVar23[3] = 0;
                                *puVar23 = &PTR_FUN_14a399d10;
                                puVar23[4] = local_138;
                                local_138 = (longlong **)0x0;
                                uVar19 = CONCAT35((undefined3)uStack_12b,
                                                  CONCAT41(uStack_12f,uStack_130));
                                puVar23[5] = uVar19;
                                puVar23[6] = CONCAT35((undefined3)uStack_123,
                                                      CONCAT41(uStack_127,uStack_12b._3_1_));
                                uStack_130 = 0;
                                uStack_12f = 0;
                                uStack_12b = 0;
                                uStack_127 = 0;
                                uStack_123 = uStack_123 & 0xff000000;
                                puVar23[1] = pplVar11;
                                puVar23[2] = uVar19;
                                LOCK();
                                puVar23[3] = puVar23[3] | 0x4000000000000000;
                                UNLOCK();
                                LOCK();
                                puVar23[3] = puVar23[3] | 0x1000000000000000;
                                UNLOCK();
                                if (puVar23 != (undefined8 *)0x0) {
                                  LOCK();
                                  puVar4 = puVar23 + 3;
                                  uVar22 = *puVar4;
                                  *puVar4 = *puVar4 + 1;
                                  UNLOCK();
                                  if ((uVar22 & 0x3fffffff) == 0) {
                                    LOCK();
                                    puVar23[3] = puVar23[3] + 0x40000000;
                                    UNLOCK();
                                  }
                                }
                                plVar18 = *(longlong **)((longlong)local_2b8 + lVar16 + 8);
                                *(undefined8 **)((longlong)local_2b8 + lVar16 + 8) = puVar23;
                                if (plVar18 != (longlong *)0x0) {
                                  LOCK();
                                  plVar20 = plVar18 + 3;
                                  lVar34 = *plVar20;
                                  *plVar20 = *plVar20 + -1;
                                  UNLOCK();
                                  if (((uint)lVar34 & 0x3fffffff) == 1) {
                                    (**(code **)(*plVar18 + 0x10))(plVar18);
                                    plVar18[1] = 0;
                                    plVar18[2] = 0;
                                    LOCK();
                                    puVar4 = (ulonglong *)(plVar18 + 3);
                                    uVar22 = *puVar4;
                                    *puVar4 = *puVar4 - 0x40000000;
                                    UNLOCK();
                                    if ((uVar22 & 0xfffffffc0000000) == 0x40000000) {
                                      (**(code **)*plVar18)(plVar18,1);
                                    }
                                  }
                                }
                                *(uint *)((longlong)local_2b8 + lVar16 + 0x14) = uStack_f0;
                                *(byte *)((longlong)local_2b8 + lVar16 + 0x28) = (byte)local_e8;
                                if ((*(int *)((longlong)local_2b8 + lVar16 + 0x1c) != 1) &&
                                   (*(undefined4 *)((longlong)local_2b8 + lVar16 + 0x1c) = 1,
                                   *(char *)((longlong)local_2b8 + lVar16 + 0x30) == '\x01')) {
                                  *(undefined1 *)((longlong)local_2b8 + lVar16 + 0x30) = 0;
                                }
                                if (local_138 != (longlong **)0x0) {
                                  FUN_1400020a8();
                                }
                              }
                              lVar16 = lVar16 + 0x38;
                            } while (local_2b0 != (longlong **)lVar16);
                            local_2b0 = (longlong **)(uStack_1b0 & 0xffffffff);
                            goto LAB_14450b33c;
                          }
                        }
                        cVar12 = FUN_1493dc7d6(&local_108,&local_1b8);
                        pplVar11 = pplStack_100;
                        ppcVar27 = local_108;
                        if (cVar12 == '\0') goto LAB_14450b42b;
                        if ((bool)(*(int *)((longlong)local_1b8 + 0x1c) != 1 & bVar13)) {
                          local_e4 = 0xe;
                          local_e0 = 1;
                        }
                        local_148 = local_108;
                        uStack_140 = pplStack_100;
                        local_138 = local_f8;
                        local_108 = (code **)0x0;
                        pplStack_100 = (longlong **)0x0;
                        local_f8 = (longlong **)0x0;
                        uStack_130 = (undefined1)uStack_f0;
                        uStack_12f = (undefined4)(CONCAT44(uStack_ec,uStack_f0) >> 8);
                        uStack_12b = CONCAT13((byte)local_e8,(int3)((uint)uStack_ec >> 8));
                        uStack_123 = CONCAT13(local_e0,(undefined3)uStack_123);
                        local_118 = '\x01';
                        if ((local_e0 & 1) != 0) {
                          uStack_127._3_1_ = (undefined1)local_e4;
                          uStack_123._0_3_ = (undefined3)((uint)local_e4 >> 8);
                          uStack_123 = CONCAT13(local_e0,(undefined3)uStack_123);
                        }
                      }
                      if (local_e0 == 1) {
                        local_e0 = 0;
                      }
                      if (pplStack_100 != (longlong **)0x0) {
                        FUN_1400020a8();
                      }
                      ppcVar27 = local_108;
                      if (local_108 != (code **)0x0) {
                        LOCK();
                        ppcVar5 = local_108 + 3;
                        pcVar30 = *ppcVar5;
                        *ppcVar5 = *ppcVar5 + -1;
                        UNLOCK();
                        if (((uint)pcVar30 & 0x3fffffff) == 1) {
                          (**(code **)(*local_108 + 0x10))(local_108);
                          ppcVar27[1] = (code *)0x0;
                          ppcVar27[2] = (code *)0x0;
                          LOCK();
                          ppcVar5 = ppcVar27 + 3;
                          pcVar30 = *ppcVar5;
                          *ppcVar5 = *ppcVar5 + -0x40000000;
                          UNLOCK();
                          if (((ulonglong)pcVar30 & 0xfffffffc0000000) == 0x40000000) {
                            (**(code **)*ppcVar27)(ppcVar27,1);
                          }
                        }
                      }
                      uVar22 = uStack_1b0 & 0xffffffff;
                    }
                    FUN_1493e7409(local_1b8,uVar22);
                    if (local_1b8 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    FUN_1493e47ec(&local_1a8);
                    if (local_198 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    goto LAB_14450b509;
                  }
                  if ((int)pplStack_b0 != iStack_84) goto LAB_14450a3a7;
LAB_14450a32d:
                  lVar34 = *(longlong *)(lVar16 + 0x10);
                  lVar32 = FUN_145bc86e8();
                  if ((lVar34 == lVar32) ||
                     (lVar16 = *(longlong *)(lVar16 + 0x10), lVar34 = FUN_145bc89ac(),
                     lVar16 == lVar34)) {
                    local_308 = &DAT_14c872bc8;
                    FUN_14052bb08(DAT_14c872ce0,L"TextureImporter",L"RetainJpegFormat",&local_1c8);
                  }
                  if ((local_1c8 == '\x01') &&
                     (cVar12 = (**(code **)(*plVar18 + 0x20))(plVar18), cVar12 != '\0')) {
                    (**(code **)(*plVar18 + 0x28))(plVar18,&local_148,&local_178,ppcVar27);
                  }
                  else {
                    (**(code **)(*plVar18 + 0x10))(plVar18,&local_148,&local_178,ppcVar27);
                  }
                  pplVar11 = uStack_140;
                  local_d0 = CONCAT71(local_d0._1_7_,local_110);
                  if (local_110 == '\x01') {
                    local_108 = (code **)&PTR_FUN_14bcb3bb0;
                    uStack_140 = (longlong **)0x0;
                    pplStack_100 = pplVar11;
                    local_f8 = local_138;
                    uStack_f0 = CONCAT31((int3)uStack_12f,uStack_130);
                    uStack_ec._1_3_ = (undefined3)uStack_12b;
                    uStack_ec = CONCAT31(uStack_ec._1_3_,(char)((uint)uStack_12f >> 0x18));
                    local_e8._1_3_ = (undefined3)uStack_127;
                    local_e8 = CONCAT31(local_e8._1_3_,(char)((uint)uStack_12b >> 0x18));
                    local_e4._1_3_ = (undefined3)uStack_123;
                    local_e4 = CONCAT31(local_e4._1_3_,(char)((uint)uStack_127 >> 0x18));
                    local_e0 = (byte)(uStack_123 >> 0x18);
                    local_d8 = local_118;
                    if (local_118 == '\x01') {
                      local_dc = local_11c;
                    }
                  }
                  local_c0 = CONCAT31(local_c0._1_3_,1);
                }
                local_70 = 0;
                if (local_78 != (code **)0x0) {
                  FUN_1400020a8();
                }
                FUN_140926446(&local_b8);
                bVar13 = (byte)local_c0;
              }
              else {
LAB_144509302:
                uVar22 = (ulonglong)local_160;
                if (((((&DAT_14bcbb708)[uVar22] == '\0') && ((&DAT_14bcbb70f)[uVar22] == '\0')) &&
                    ((&DAT_14bcbb716)[uVar22] == '\0')) && ((&DAT_14bcbb71d)[uVar22] != '\x01')) {
LAB_144509a07:
                  if ((lVar16 != 0) && ((&DAT_14bcbb724)[uVar22] != '\0')) {
                    uVar19 = FUN_145a95b68();
                    plVar18 = (longlong *)FUN_144718840(lVar16,uVar19);
                    if (plVar18 != (longlong *)0x0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18,&local_b8,&local_178,ppcVar27);
                      local_c8 = (char)local_78;
                      if ((char)local_78 == '\x01') {
                        pplStack_100 = pplStack_b0;
                        local_f8 = local_a8;
                        uStack_f0 = uStack_a0;
                        uStack_ec = uStack_9c;
                        local_e8 = local_98;
                        local_e4 = iStack_94;
                        local_e0 = (byte)local_90;
                        local_d8 = (char)uStack_88;
                        if ((char)uStack_88 == '\x01') {
                          local_dc = uStack_8c;
                        }
                        local_108 = (code **)&PTR_FUN_14bcb9080;
                        local_d0 = CONCAT44(uStack_7c,local_80);
                      }
                      local_c0 = CONCAT31(local_c0._1_3_,4);
                      bVar13 = 4;
                      goto LAB_144509350;
                    }
                  }
                }
                else if (lVar16 != 0) {
                  uVar19 = FUN_145a95a7c();
                  plVar18 = (longlong *)FUN_144718840(lVar16,uVar19);
                  if (plVar18 != (longlong *)0x0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18,&local_b8,&local_178,ppcVar27);
                    local_c8 = (char)local_78;
                    if ((char)local_78 == '\x01') {
                      pplStack_100 = pplStack_b0;
                      local_f8 = local_a8;
                      uStack_f0 = uStack_a0;
                      uStack_ec = uStack_9c;
                      local_e8 = local_98;
                      local_e4 = iStack_94;
                      local_e0 = (byte)local_90;
                      local_d8 = (char)uStack_88;
                      if ((char)uStack_88 == '\x01') {
                        local_dc = uStack_8c;
                      }
                      local_108 = (code **)&PTR_FUN_14bcb9060;
                      local_d0._0_5_ = CONCAT14((undefined1)uStack_7c,local_80);
                    }
                    local_c0 = CONCAT31(local_c0._1_3_,3);
                    bVar13 = 3;
                    goto LAB_144509350;
                  }
                  uVar22 = (ulonglong)local_160;
                  goto LAB_144509a07;
                }
                local_c0 = local_c0 & 0xffffff00;
                bVar13 = 0;
              }
LAB_144509350:
              if ((&DAT_14bcbb758)[bVar13] == '\x01') {
                local_b8 = (code *)0x14bcba00c;
                pplStack_b0._0_4_ = 0x2a;
                FUN_1446e940c(&local_220,&local_b8);
                local_b8 = (code *)0x14bcb9602;
                pplStack_b0._0_4_ = 0x19;
                FUN_1446e940c(&local_1f8,&local_b8);
                local_b8 = (code *)0x14bcb9f74;
                pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x4b);
LAB_14450978c:
                FUN_140208c1e(&local_148,&local_1f8,&local_220,&local_b8);
                FUN_14450b838(&local_248,&local_148);
                if (local_148 != (code **)0x0) {
                  (**(code **)(*local_148 + 0x10))();
                }
              }
              else {
                if (lVar17 == 0) {
                  local_b8 = (code *)0x14bcba110;
                  pplStack_b0._0_4_ = 0x26;
                  FUN_1446e940c(&local_220,&local_b8);
                  local_b8 = (code *)0x14bcb9602;
                  pplStack_b0._0_4_ = 0x19;
                  FUN_1446e940c(&local_1f8,&local_b8);
                  local_b8 = (code *)0x14bcba062;
                  pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x56);
                  goto LAB_14450978c;
                }
                if (DAT_14cb0b430 == 0) {
                  local_2d0 = &local_b8;
                  local_b8 = FUN_1449e2820;
                  local_2c0 = FUN_14081d0ea;
                  local_2c8 = &LAB_145892f94;
                  local_2d8 = &LAB_147d6dbf3;
                  local_2e0 = &LAB_1464081e0;
                  local_2e8 = L"Engine";
                  local_2f0 = 0;
                  local_2f8 = (code ***)CONCAT44(local_2f8._4_4_,0x10000001);
                  local_300 = 8;
                  local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x138);
                  FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
                }
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30)) {
                  local_b8 = (code *)0x14bcba1d6;
                  pplStack_b0._0_4_ = 0x26;
                  FUN_1446e940c(&local_220,&local_b8);
                  local_b8 = (code *)0x14bcb9602;
                  pplStack_b0._0_4_ = 0x19;
                  FUN_1446e940c(&local_1f8,&local_b8);
                  local_b8 = (code *)0x14bcba15e;
                  pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x3b);
                  goto LAB_14450978c;
                }
                local_180 = *(longlong **)(param_3 + 0x18);
                local_2a8 = *(longlong *)(param_3 + 0x28);
                pppcStack_230 = (code ***)&local_180;
                local_181 = 0;
                local_238 = param_1;
                FUN_1493ac1dc();
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c844850) &&
                   (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
                local_198 = DAT_14c844840;
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
                uStack_190 = uStack_190 & 0xffffffff00000000;
                switch(local_c0 & 0xff) {
                case 1:
                  if ((char)local_d0 == '\x01') {
                    lVar16 = FUN_140265cda();
                    lVar34 = (**(code **)(*local_180 + 0x2e8))();
                    if (lVar16 != lVar34) goto LAB_144509bc4;
                  }
                  break;
                case 2:
                  if (local_d8 == '\x01') {
                    if (0 < (int)local_f8) {
                      uVar25 = 0;
                      do {
                        pplVar11 = pplStack_100;
                        lVar16 = (longlong)(int)uVar25;
                        cVar12 = FUN_1484592fc((longlong)
                                               (int)*(uint *)(pplStack_100 + lVar16 * 3 + 1),
                                               (longlong)
                                               *(int *)((longlong)pplStack_100 + lVar16 * 0x18 + 0xc
                                                       ),local_181,&local_198);
                        plVar18 = local_180;
                        if (cVar12 == '\0') {
                          local_2b0 = pplVar11 + lVar16 * 3;
                          local_1a8 = (code *)0x0;
                          pplStack_1a0 = (longlong **)0x0;
                          if (local_180 == (longlong *)0x0) {
LAB_144509d51:
                            local_b8 = (code *)0x0;
                            uVar33 = *(uint *)(local_2a8 + 0x30);
                            pvVar9 = *(void **)(local_2a8 + 0x28);
                            pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,uVar33);
                            if ((longlong)(int)uVar33 == 0) {
                              pplStack_b0 = (longlong **)(ulonglong)uVar33;
                            }
                            else {
                              FUN_1446dd670(&local_b8,uVar33,0);
                              memcpy(local_b8,pvVar9,(longlong)(int)uVar33 * 2);
                            }
                            if (local_1a8 != (code *)0x0) {
                              FUN_1400020a8();
                            }
                            local_1a8 = local_b8;
                            pplStack_1a0 = pplStack_b0;
                          }
                          else {
                            lVar32 = FUN_1459f6786();
                            lVar34 = plVar18[2];
                            if ((*(int *)(lVar32 + 0x38) <= *(int *)(lVar34 + 0x38)) &&
                               (*(longlong *)
                                 (*(longlong *)(lVar34 + 0x30) +
                                 (longlong)*(int *)(lVar32 + 0x38) * 8) == lVar32 + 0x30)) {
                              iVar28 = *(uint *)local_2b0 + *(uint *)((longlong)local_2b0 + 4) * 10
                                       + 0x3e9;
                              local_b8 = (code *)CONCAT44(local_b8._4_4_,iVar28);
                              FUN_1493a09d0(plVar18 + 0x82,iVar28,&local_b8,&local_1a8);
                            }
                            if ((int)pplStack_1a0 < 2) goto LAB_144509d51;
                          }
                          local_2b8 = (longlong *)FUN_14450bbd4(&local_238,&local_1a8,&local_198);
                          local_298 = (void *)(longlong)(int)*(uint *)((longlong)local_2b0 + 4);
                          local_2b0 = (longlong **)(longlong)(int)*(uint *)local_2b0;
                          local_b8 = (code *)0x14bcba26a;
                          pplStack_b0._0_4_ = 0x20;
                          FUN_1446e940c(local_1dc,&local_b8);
                          local_b8 = (code *)0x14bcb9602;
                          pplStack_b0._0_4_ = 0x19;
                          FUN_1446e940c(local_1e0,&local_b8);
                          local_b8 = (code *)0x14bcba224;
                          pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x22);
                          FUN_140208c1e(local_1d8,local_1e0,local_1dc,&local_b8);
                          FUN_14023409e(&local_1c8,local_1d8,1);
                          local_b8 = (code *)((ulonglong)local_b8 & 0xffffffff00000000);
                          local_a8 = (longlong **)0x0;
                          uStack_a0 = 0;
                          pplStack_b0 = local_2b0;
                          local_98 = 0;
                          uStack_88 = 0;
                          iStack_84 = 0;
                          local_80 = 0;
                          local_90 = (uint)local_298;
                          uStack_8c = (undefined4)((ulonglong)local_298 >> 0x20);
                          local_220 = &local_b8;
                          uStack_218 = &local_78;
                          FUN_14010d304(&local_148,&local_220);
                          local_1f8 = (code **)CONCAT71(uStack_1c7,local_1c8);
                          uStack_1f0 = local_1c0;
                          if (local_1c0 != (code ***)0x0) {
                            LOCK();
                            *(int *)(local_1c0 + 1) = *(int *)(local_1c0 + 1) + 1;
                            UNLOCK();
                          }
                          FUN_14010c016(&local_1b8,&local_1f8,&local_148);
                          FUN_14007f2db(local_148,(ulonglong)uStack_140 & 0xffffffff);
                          if (local_148 != (code **)0x0) {
                            FUN_1400020a8();
                          }
                          lVar34 = 0x30;
                          do {
                            if (*(longlong **)((longlong)&local_b8 + lVar34) != (longlong *)0x0) {
                              (**(code **)(**(longlong **)((longlong)&local_b8 + lVar34) + 0x10))();
                              *(undefined8 *)((longlong)&local_b8 + lVar34) = 0;
                              *(undefined4 *)((longlong)&pplStack_b0 + lVar34) = 0;
                            }
                            pppcVar1 = local_1c0;
                            lVar34 = lVar34 + -0x20;
                          } while (lVar34 != -0x10);
                          if (local_1c0 != (code ***)0x0) {
                            LOCK();
                            pppcVar3 = local_1c0 + 1;
                            *(int *)pppcVar3 = *(int *)pppcVar3 + -1;
                            UNLOCK();
                            if (*(int *)pppcVar3 == 0) {
                              (***local_1c0)(local_1c0);
                              LOCK();
                              piVar2 = (int *)((longlong)pppcVar1 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              UNLOCK();
                              if (*piVar2 == 0) {
                                (*(*pppcVar1)[2])(pppcVar1);
                              }
                            }
                          }
                          plVar18 = local_1b8;
                          plVar20 = local_1b8;
                          if (*(code **)(*local_1b8 + 0x50) != FUN_144828418) {
                            plVar20 = (longlong *)(**(code **)(*local_1b8 + 0x50))(local_1b8);
                          }
                          FUN_1447a1fc0(plVar20);
                          pcVar30 = *(code **)(*plVar18 + 0x28);
                          if (pcVar30 == FUN_14482841c) {
                            plVar20 = (longlong *)(plVar18[5] + 8);
                            if (plVar18[5] == 0) {
                              plVar20 = plVar18 + 3;
                            }
                          }
                          else if (pcVar30 == (code *)&LAB_14010c34c) {
                            plVar20 = plVar18 + 2;
                          }
                          else {
                            plVar20 = (longlong *)(*pcVar30)(plVar18);
                          }
                          local_b8 = (code *)0x0;
                          uVar33 = *(uint *)(plVar20 + 1);
                          local_2b0 = (longlong **)*plVar20;
                          pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,uVar33);
                          if ((longlong)(int)uVar33 == 0) {
                            pplStack_b0 = (longlong **)(ulonglong)uVar33;
                          }
                          else {
                            FUN_1446dd670(&local_b8,uVar33,0);
                            memcpy(local_b8,local_2b0,(longlong)(int)uVar33 * 2);
                          }
                          if (plVar18 != (longlong *)0x0) {
                            (**(code **)(*plVar18 + 0x10))(plVar18);
                          }
                          if (local_1d8[0] != (longlong *)0x0) {
                            (**(code **)(*local_1d8[0] + 0x10))();
                          }
                          plVar18 = *(longlong **)((longlong)local_2b8 + 0x70);
                          if (*(code **)(*plVar18 + 0x50) != FUN_144828418) {
                            plVar18 = (longlong *)(**(code **)(*plVar18 + 0x50))();
                          }
                          plVar20 = (longlong *)((longlong)local_2b8 + 0x70);
                          FUN_1447a1fc0(plVar18);
                          plVar18 = (longlong *)*plVar20;
                          pcVar30 = *(code **)(*plVar18 + 0x28);
                          local_2b8 = plVar20;
                          if (pcVar30 == FUN_14482841c) {
                            plVar20 = plVar18 + 3;
                            if (plVar18[5] != 0) {
                              plVar20 = (longlong *)(plVar18[5] + 8);
                            }
                          }
                          else if (pcVar30 == (code *)&LAB_14010c34c) {
                            plVar20 = plVar18 + 2;
                          }
                          else {
                            plVar20 = (longlong *)(*pcVar30)(plVar18);
                          }
                          iVar28 = (int)plVar20[1] + -1;
                          if ((int)plVar20[1] == 0) {
                            iVar28 = 0;
                          }
                          FUN_1400020e8(&local_b8,*plVar20,iVar28);
                          FUN_140009b9a(&local_148,&local_b8);
                          FUN_140008f88(local_2b8,&local_148);
                          if (local_148 != (code **)0x0) {
                            (**(code **)(*local_148 + 0x10))();
                          }
                          iVar28 = ~uVar25 + (int)local_f8;
                          if (iVar28 != 0) {
                            if (0 < iVar28) {
                              iVar28 = 1;
                            }
                            memmove(pplStack_100 + lVar16 * 3,
                                    pplStack_100 + (longlong)((int)local_f8 - iVar28) * 3,
                                    (longlong)iVar28 * 0x18);
                          }
                          local_f8 = (longlong **)CONCAT44(local_f8._4_4_,(int)local_f8 + -1);
                          FUN_1493e7806(&pplStack_100);
                          if (local_b8 != (code *)0x0) {
                            FUN_1400020a8();
                          }
                          if (local_1a8 != (code *)0x0) {
                            FUN_1400020a8();
                          }
                          uVar25 = uVar25 - 1;
                        }
                        uVar25 = uVar25 + 1;
                      } while ((int)uVar25 < (int)local_f8);
                    }
                    if ((int)local_f8 == 0) {
                      local_b8 = (code *)0x14bcba31c;
                      pplStack_b0._0_4_ = 0x13;
                      FUN_1446e940c(&local_220,&local_b8);
                      local_b8 = (code *)0x14bcb9602;
                      pplStack_b0._0_4_ = 0x19;
                      FUN_1446e940c(&local_1f8,&local_b8);
                      local_b8 = (code *)0x14bcba2ac;
                      pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x37);
                      FUN_140208c1e(&local_148,&local_1f8,&local_220,&local_b8);
                      local_b8 = (code *)0x0;
                      pplStack_b0 = (longlong **)0x0;
                      FUN_14450bbd4(&local_238,&local_b8,&local_148);
                      if (local_b8 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_148 != (code **)0x0) {
                        (**(code **)(*local_148 + 0x10))();
                      }
                      goto LAB_14450a5a6;
                    }
                  }
                  break;
                case 3:
                case 4:
                  if (local_c8 == '\x01') {
LAB_144509bc4:
                    cVar12 = FUN_1484592fc((longlong)(int)local_e8,(longlong)local_e4,local_181,
                                           &local_198);
                    if (cVar12 == '\0') {
                      local_b8 = (code *)0x0;
                      uVar25 = *(uint *)(local_2a8 + 0x30);
                      pvVar9 = *(void **)(local_2a8 + 0x28);
                      pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,uVar25);
                      if ((longlong)(int)uVar25 == 0) {
                        pplStack_b0 = (longlong **)(ulonglong)uVar25;
                      }
                      else {
                        FUN_1446dd670(&local_b8,uVar25,0);
                        memcpy(local_b8,pvVar9,(longlong)(int)uVar25 * 2);
                      }
                      FUN_14450bbd4(&local_238,&local_b8,&local_198);
                      if (local_b8 != (code *)0x0) {
                        FUN_1400020a8();
                      }
LAB_14450a5a6:
                      (*(code *)(&PTR_FUN_14bcbb6e0)[(byte)local_c0])(&local_108);
                      local_c0 = local_c0 & 0xffffff00;
                    }
                  }
                }
                if (local_198 != (longlong *)0x0) {
                  (**(code **)(*local_198 + 0x10))();
                }
                if (DAT_14cb0b4f0 == 0) {
                  local_2d0 = &local_b8;
                  local_b8 = FUN_1449e2820;
                  local_2c0 = FUN_14081d0ea;
                  local_2c8 = &LAB_14580b774;
                  local_2d8 = &LAB_147d6e27b;
                  local_2e0 = &LAB_140307be8;
                  local_2e8 = L"Engine";
                  local_2f0 = 0;
                  local_2f8 = (code ***)CONCAT44(local_2f8._4_4_,0x10000000);
                  local_300 = 8;
                  local_308 = (undefined8 *)CONCAT44(local_308._4_4_,0x158);
                  FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
                }
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cb0b4f0 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) != DAT_14cb0b4f0 + 0x30)) {
LAB_14450a70d:
                  local_148 = *(code ***)(lVar17 + 0x18);
                  FUN_1400021e4(&local_148,&local_b8);
                  local_148 = (code **)0x0;
                  uVar25 = *(uint *)(*(longlong *)(param_3 + 0x28) + 0x30);
                  pvVar9 = *(void **)(*(longlong *)(param_3 + 0x28) + 0x28);
                  uStack_140 = (longlong **)CONCAT44(uStack_140._4_4_,uVar25);
                  if ((longlong)(int)uVar25 == 0) {
                    uStack_140 = (longlong **)(ulonglong)uVar25;
                  }
                  else {
                    FUN_1446dd670(&local_148,uVar25,0);
                    memcpy(local_148,pvVar9,(longlong)(int)uVar25 * 2);
                  }
                  FUN_1493e4ee9(param_1,*(undefined8 *)(lVar17 + 0x10),&local_148,&local_b8);
                  if (local_148 != (code **)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_b8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  *(longlong *)(param_2 + 8) = lVar17;
                }
                else {
                  if ((local_c0 & 0xff) != 4) {
                    if (((local_c0 & 0xff) == 1) && ((char)local_d0 == '\x01')) goto LAB_14450a63e;
                    goto LAB_14450a70d;
                  }
                  if (local_c8 != '\x01') goto LAB_14450a70d;
LAB_14450a63e:
                  cVar12 = (*local_108[3])();
                  if (cVar12 == '\0') goto LAB_14450a70d;
                  local_98 = 0;
                  iStack_94 = 0;
                  local_90 = 0;
                  uStack_8c = 4;
                  FUN_1493e4d9e(param_1 + 6,&local_108);
                  if ((DAT_14c86a9f8 == '\x01') &&
                     (iVar28 = *(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0xc60), iVar28 != 2)) {
                    uVar31 = 0xff;
                    if (iVar28 == 1) {
                      DVar14 = FUN_140ad26c0();
                      DVar15 = GetCurrentThreadId();
                      if (DVar14 == DVar15) goto LAB_14450b82d;
                    }
                  }
                  else {
LAB_14450b82d:
                    uVar31 = 1;
                  }
                  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,&local_b8,uVar31);
                  *(longlong *)(param_2 + 8) = lVar17;
                  ppcVar27 = (code **)CONCAT44(iStack_94,local_98);
                  if ((code **)CONCAT44(iStack_94,local_98) == (code **)0x0) {
                    ppcVar27 = &local_b8;
                  }
                  FUN_144717c65(ppcVar27,local_90);
                  if (CONCAT44(iStack_94,local_98) != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              (*(code *)(&PTR_FUN_14bcbb6e0)[(byte)local_c0])();
            }
            if ((local_16c != -1) && (local_178 != 0)) {
              FUN_1400020a8();
            }
          }
        }
        if (local_258 != 0) {
          FUN_1400020a8();
        }
        goto LAB_144509059;
      }
    }
LAB_144508f47:
    local_b8 = (code *)0x14bcb9bce;
    pplStack_b0._0_4_ = 0x23;
    FUN_1446e940c(&local_148,&local_b8);
    local_b8 = (code *)0x14bcb9602;
    pplStack_b0._0_4_ = 0x19;
    FUN_1446e940c(&local_220,&local_b8);
    local_b8 = (code *)0x14bcb9b24;
    pplStack_b0 = (longlong **)CONCAT44(pplStack_b0._4_4_,0x54);
  }
LAB_14450901d:
  FUN_140208c1e(&local_108,&local_220,&local_148,&local_b8);
  FUN_14450b838(&local_248,&local_108);
  if (local_108 != (code **)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
LAB_144509059:
  if ((local_60 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14450b838 FUN_14450b838 body=439 status=ok
// SIG undefined FUN_14450b838(void)

void FUN_14450b838(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)*param_1;
  lVar5 = FUN_14936b1b4(plVar2[5]);
  local_50 = (void *)0x0;
  local_48 = *(int *)(*(longlong *)(param_1[1] + 0x28) + 0x30);
  lVar7 = (longlong)local_48;
  pvVar3 = *(void **)(*(longlong *)(param_1[1] + 0x28) + 0x28);
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar3,lVar7 * 2);
  }
  if ((void **)(lVar5 + 0x28) == &local_50) {
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(void **)(lVar5 + 0x28) = local_50;
    local_50 = (void *)0x0;
    *(int *)(lVar5 + 0x30) = local_48;
    *(undefined4 *)(lVar5 + 0x34) = local_44;
  }
  lVar7 = param_1[1];
  puVar6 = (undefined8 *)(lVar5 + 0x38);
  if (puVar6 != (undefined8 *)(lVar7 + 8)) {
    iVar1 = *(int *)(lVar7 + 0x10);
    pvVar3 = *(void **)(lVar7 + 8);
    *(int *)(lVar5 + 0x40) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar5 + 0x44) == 0) {
      *(undefined4 *)(lVar5 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(puVar6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar6,pvVar3,(longlong)iVar1 * 2);
      }
    }
  }
  lVar7 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(lVar5 + 0x58) = lVar7;
  plVar2 = (longlong *)*param_2;
  plVar4 = *(longlong **)(lVar5 + 0x70);
  if (plVar4 != plVar2) {
    *(longlong **)(lVar5 + 0x70) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(lVar5 + 0x78) = (int)param_2[1];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450b9f0 FUN_14450b9f0 body=462 status=ok
// SIG undefined FUN_14450b9f0(void)

ulonglong FUN_14450b9f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = uVar3;
  if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_14450bad9;
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 == 0) {
LAB_14450ba54:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb0b430 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145892f94;
      local_48 = &LAB_147d6dbf3;
      local_50 = &LAB_1464081e0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    uVar3 = DAT_14cb0b430;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
       (uVar3 = DAT_14cb0b430 + 0x30,
       *(ulonglong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != uVar3)) goto LAB_14450ba54;
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x78);
    if ((&DAT_14bcbb758)[uVar3] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if (*(char *)(param_2 + 0x58) == '\0') {
    uVar2 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_14482b126(lVar4,0x40000000);
    FUN_144757f48(lVar5,0x40000000);
    uVar2 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar5 + 8);
      uVar3 = (ulonglong)uVar2;
      if ((uVar2 >> 0x15 & 1) != 0) break;
      LOCK();
      uVar1 = *(uint *)(lVar5 + 8);
      if (uVar2 == uVar1) {
        *(uint *)(lVar5 + 8) = uVar2 | 0x200000;
      }
      else {
        uVar3 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar2 != uVar1);
  }
LAB_14450bad9:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450bbd4 FUN_14450bbd4 body=329 status=ok
// SIG undefined FUN_14450bbd4(void)

longlong FUN_14450bbd4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14936b1b4(*(undefined8 *)(*param_1 + 0x28));
  if ((undefined8 *)(lVar3 + 0x28) != param_2) {
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar3 + 0x28) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  (**(code **)(**(longlong **)param_1[1] + 0x2c8))(*(longlong **)param_1[1],&local_38);
  if ((longlong *)(lVar3 + 0x38) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar3 + 0x38) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar3 + 0x40) = local_30;
    *(undefined4 *)(lVar3 + 0x44) = local_2c;
  }
  lVar4 = (**(code **)(**(longlong **)param_1[1] + 0x2e8))();
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(lVar3 + 0x58) = lVar4;
  plVar1 = (longlong *)*param_3;
  plVar2 = *(longlong **)(lVar3 + 0x70);
  if (plVar2 != plVar1) {
    *(longlong **)(lVar3 + 0x70) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(lVar3 + 0x78) = (int)param_3[1];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450bd1e FUN_14450bd1e body=69 status=ok
// SIG undefined FUN_14450bd1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14450bd1e(void)

{
  _DAT_14cc14990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014450bd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc14998,1);
  return;
}



// FUNCTION 14450bd63 FUN_14450bd63 body=69 status=ok
// SIG undefined FUN_14450bd63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14450bd63(void)

{
  _DAT_14cc149d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014450bda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc149e0,1);
  return;
}



// FUNCTION 14450be30 FUN_14450be30 body=41 status=ok
// SIG undefined FUN_14450be30(void)

void FUN_14450be30(void)

{
  DAT_14cc14ab8 = 0;
  if (DAT_14cc14ab0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69fe0();
  return;
}



// FUNCTION 14450be5a FUN_14450be5a body=962 status=ok
// SIG undefined FUN_14450be5a(void)

void FUN_14450be5a(undefined8 *param_1,int *param_2)

{
  ulonglong *puVar1;
  undefined ***pppuVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined **local_c8;
  longlong *local_c0;
  char local_98;
  char local_90;
  longlong local_88;
  undefined8 local_80;
  int iStack_7c;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined4 local_4c;
  char local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = (longlong)*param_2;
  lVar4 = *(longlong *)*param_1;
  plVar5 = *(longlong **)(lVar4 + lVar11 * 0x10);
  uVar9 = FUN_14588b4b2();
  plVar10 = (longlong *)FUN_144718840(plVar5,uVar9);
  lVar4 = *(longlong *)(lVar4 + 8 + lVar11 * 0x10);
  FUN_1401aea18(&local_78,*(longlong *)(*(longlong *)param_1[1] + lVar11 * 8) + 8);
  if ((undefined ***)(lVar4 + 0x28) == &local_78) {
    if (local_78 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(lVar4 + 0x28) = local_78;
    local_78 = (undefined **)0x0;
    *(undefined4 *)(lVar4 + 0x30) = (undefined4)local_70;
    *(undefined4 *)(lVar4 + 0x34) = local_70._4_4_;
  }
  if (*(char *)(lVar4 + 0x49) == '\x01') {
    *(undefined1 *)(lVar4 + 0x49) = 0;
  }
  local_40 = '\0';
  cVar7 = (**(code **)(*plVar5 + 0x2a0))(plVar5,lVar4);
  if (cVar7 != '\0') {
    local_88 = 0;
    local_80 = 0xffffffff00000000;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    plVar5[6] = lVar4;
    local_d8[0] = 0;
    local_d8[1] = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&local_c8,local_d8,&local_88);
    FUN_1493cc988(&local_78,&local_c8);
    if (local_90 == '\x01') {
      local_c8 = &PTR_FUN_14bcb3bb0;
      if (local_98 == '\x01') {
        local_98 = '\0';
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_c0 + 3;
        lVar4 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (((uint)lVar4 & 0x3fffffff) == 1) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
          local_c0[1] = 0;
          local_c0[2] = 0;
          LOCK();
          puVar1 = (ulonglong *)(local_c0 + 3);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 0x40000000;
          UNLOCK();
          if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*local_c0)(local_c0,1);
          }
        }
      }
      local_90 = '\0';
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if ((iStack_7c != -1) && (local_88 != 0)) {
      FUN_1400020a8();
    }
  }
  plVar10 = local_70;
  if (local_40 == '\x01') {
    lVar4 = *(longlong *)param_1[2];
    lVar11 = lVar11 * 0x38;
    pppuVar2 = (undefined ***)(lVar4 + lVar11);
    plVar6 = *(longlong **)(lVar4 + 8 + lVar11);
    local_70 = (longlong *)0x0;
    *(longlong **)(lVar4 + 8 + lVar11) = plVar10;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar6 + 3;
      lVar4 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (((uint)lVar4 & 0x3fffffff) == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar6[1] = 0;
        plVar6[2] = 0;
        LOCK();
        puVar1 = (ulonglong *)(plVar6 + 3);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar6)(plVar6,1);
        }
      }
    }
    *(ulonglong *)((longlong)pppuVar2 + 0x19) =
         CONCAT17(uStack_58,CONCAT43(uStack_5c,uStack_60._1_3_));
    *(undefined8 *)((longlong)pppuVar2 + 0x21) = uStack_57;
    *(undefined4 *)(pppuVar2 + 2) = local_68;
    *(undefined4 *)((longlong)pppuVar2 + 0x14) = uStack_64;
    *(undefined4 *)(pppuVar2 + 3) = uStack_60;
    *(undefined4 *)((longlong)pppuVar2 + 0x1c) = uStack_5c;
    if (&local_78 != pppuVar2) {
      if (local_48 == '\x01') {
        *(undefined4 *)((longlong)pppuVar2 + 0x2c) = local_4c;
        uVar8 = 1;
      }
      else {
        if (*(char *)(pppuVar2 + 6) != '\x01') goto LAB_14450bfd3;
        uVar8 = 0;
      }
      *(undefined1 *)(pppuVar2 + 6) = uVar8;
    }
  }
LAB_14450bfd3:
  (**(code **)(*plVar5 + 0x2d8))(plVar5);
  plVar5 = local_70;
  if (local_40 == '\x01') {
    local_78 = &PTR_FUN_14bcb3bb0;
    if (local_48 == '\x01') {
      local_48 = '\0';
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 3;
      lVar4 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (((uint)lVar4 & 0x3fffffff) == 1) {
        (**(code **)(*local_70 + 0x10))(local_70);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar1 = (ulonglong *)(plVar5 + 3);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450c21d FUN_14450c21d body=1062 status=ok
// SIG undefined FUN_14450c21d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14450c21d(void)

{
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined **local_140;
  ulonglong *local_138;
  undefined *local_130;
  undefined4 *local_128;
  undefined *local_120;
  undefined4 *local_118;
  undefined *local_110;
  undefined4 *local_108;
  undefined *local_100;
  undefined4 *local_f8;
  undefined *local_f0;
  undefined4 *local_e8;
  undefined *local_e0;
  undefined4 *local_d8;
  undefined *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  undefined4 *local_b8;
  undefined *local_b0;
  undefined4 *local_a8;
  undefined *local_a0;
  undefined4 *local_98;
  undefined *local_90;
  undefined4 *local_88;
  undefined *local_80;
  undefined4 *local_78;
  undefined *local_70;
  undefined4 *local_68;
  undefined *local_60;
  undefined4 *local_58;
  undefined *local_50;
  undefined4 *local_48;
  undefined *local_40;
  undefined4 *local_38;
  ulonglong local_30 [4];
  
  local_30[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_188 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcb9530,1,0);
  local_188 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcba720,1,0);
  local_198 = local_198 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc14990,L"Interchange.FeatureFlags.Import.UEJPEG",&DAT_14c765138,
                L"Whether UEJPEG support is enabled.");
  atexit(FUN_14450bd1e);
  _DAT_14cc149a0 = 0xffffffff;
  _DAT_14cc149a4 = 0;
  local_188 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_14282b410(L"/Script/InterchangeImport",&PTR_FUN_14bcbb500,2,0);
  local_198 = local_198 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc149d8,L"Interchange.FeatureFlags.Import.USD",&DAT_14cc149e8,
                L"Whether USD support is enabled.");
  atexit(FUN_14450bd63);
  FUN_140056680(&DAT_14cc149f0,L"\\Animation\\");
  atexit((_func_5014 *)&LAB_14450bda8);
  FUN_140056680(&DAT_14cc14a00,L"\\AnimationTrack\\");
  atexit((_func_5014 *)&LAB_14450bdb9);
  FUN_140056680(&DAT_14cc14a10,L"\\Camera\\");
  atexit((_func_5014 *)&LAB_14450bdca);
  FUN_140056680(&DAT_14cc14a20,L"\\Light\\");
  atexit((_func_5014 *)&LAB_14450bddb);
  FUN_140056680(&DAT_14cc14a30,L"\\Material\\");
  atexit((_func_5014 *)&LAB_14450bdec);
  FUN_140056680(&DAT_14cc14a40,L"\\Mesh\\");
  atexit((_func_5014 *)&LAB_14450bdfd);
  FUN_140056680(&DAT_14cc14a50,L"\\MorphTarget\\");
  atexit((_func_5014 *)&LAB_14450be0e);
  FUN_140056680(&DAT_14cc14a60,L"\\Bone\\");
  atexit((_func_5014 *)&LAB_14450be1f);
  local_128 = &local_144;
  local_144 = 0x26;
  local_140 = &local_130;
  local_130 = &DAT_14cbfe938;
  local_118 = &local_148;
  local_148 = 0x76;
  local_120 = &DAT_14cbfe948;
  local_108 = &local_14c;
  local_14c = 0x7d;
  local_110 = &DAT_14cbfe950;
  local_f8 = &local_150;
  local_150 = 0x75;
  local_100 = &DAT_14cbfe958;
  local_e8 = &local_154;
  local_154 = 0x7b;
  local_f0 = &DAT_14cbfe960;
  local_d8 = &local_158;
  local_158 = 0x7a;
  local_e0 = &DAT_14cbfe968;
  local_c8 = &local_15c;
  local_15c = 0x3e;
  local_d0 = &DAT_14cbfe978;
  local_b8 = &local_160;
  local_160 = 0x6a;
  local_c0 = &DAT_14cbfe988;
  local_a8 = &local_164;
  local_164 = 0x6e;
  local_b0 = &DAT_14cbfe980;
  local_98 = &local_168;
  local_168 = 99;
  local_a0 = &DAT_14cbfe998;
  local_88 = &local_16c;
  local_16c = 0x67;
  local_90 = &DAT_14cbfe990;
  local_78 = &local_170;
  local_170 = 0x65;
  local_80 = &DAT_14cbfe9a0;
  local_68 = &local_174;
  local_174 = 0x57;
  local_70 = &DAT_14cbfe9a8;
  local_58 = &local_178;
  local_178 = 0x4b;
  local_60 = &DAT_14cbfe9b0;
  local_48 = &local_17c;
  local_17c = 0x61;
  local_50 = &DAT_14cbfe9b8;
  local_38 = &local_180;
  local_180 = 0x4c;
  local_40 = &DAT_14cbfe970;
  local_138 = local_30;
  FUN_1459a47e6();
  atexit(FUN_14450be30);
  if ((local_30[0] ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450c644 FUN_14450c644 body=55 status=ok
// SIG undefined FUN_14450c644(void)

void FUN_14450c644(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc14ac8 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc14ac8 = FUN_14171c317(FUN_14672e6d8,uVar1,L"EInterchangeForceMeshType");
  }
  return;
}



// FUNCTION 14450c67b FUN_14450c67b body=55 status=ok
// SIG undefined FUN_14450c67b(void)

void FUN_14450c67b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc14ae0 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc14ae0 = FUN_14171c317(FUN_14672e707,uVar1,L"EInterchangeVertexColorImportOption");
  }
  return;
}



// FUNCTION 14450c6b2 FUN_14450c6b2 body=55 status=ok
// SIG undefined FUN_14450c6b2(void)

void FUN_14450c6b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc14c00 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc14c00 = FUN_14171c317(FUN_14672e953,uVar1,L"EInterchangeAnimationRange");
  }
  return;
}



// FUNCTION 14450c6fa FUN_14450c6fa body=4199 status=ok
// SIG undefined FUN_14450c6fa(void)

void FUN_14450c6fa(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong ******ppppppuVar4;
  undefined8 ******_Src;
  undefined8 ***pppuVar5;
  void *_Src_00;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong *******pppppppuVar15;
  bool bVar16;
  longlong lVar17;
  int iVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 ****ppppuVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined8 *****local_1f8;
  longlong *local_1f0;
  undefined8 ******local_1e8;
  undefined8 *****local_1e0;
  undefined8 ******local_1d8;
  code *local_1d0;
  ulonglong ******local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0;
  uint local_1a8;
  longlong local_1a0;
  uint local_198;
  void *local_190;
  int local_188;
  undefined4 local_184;
  float local_17c;
  code *local_178;
  undefined8 ******local_170;
  longlong local_168 [2];
  void *local_158;
  undefined8 uStack_150;
  void *local_148;
  ulonglong uStack_140;
  longlong local_138 [2];
  longlong local_128;
  ulonglong uStack_120;
  code *local_118;
  undefined8 ******local_110;
  undefined8 ******local_108;
  ulonglong uStack_100;
  code *local_f8;
  undefined8 ******local_f0;
  undefined8 ****local_e8;
  undefined8 uStack_e0;
  ulonglong ******local_d8;
  longlong lStack_d0;
  uint local_c8 [4];
  uint *local_b8;
  uint local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 == 0) goto LAB_14450c7bd;
  *(longlong *)(param_1 + 0x1a0) = param_2;
  if (*(int *)(param_1 + 0x14c) == 0) {
LAB_14450cd83:
    lVar20 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x148);
    lVar20 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((int)plVar14[2] != *(int *)(param_1 + 0x14c) ||
          ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_14450cd83;
      lVar20 = *plVar14;
    }
  }
  if (*(char *)(lVar20 + 0x148) == '\x01') {
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  else if ((*(byte *)(param_1 + 0x158) & 1) == 0) goto LAB_14450c7bd;
  local_d8 = (ulonglong ******)&local_e8;
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  local_f8 = FUN_14450f33c;
  local_f0 = &local_d8;
  FUN_1493e8104(param_2,&local_f8);
  local_d8 = (ulonglong ******)&local_108;
  local_108 = (ulonglong *******)0x0;
  uStack_100 = 0;
  local_118 = FUN_14450f374;
  local_110 = &local_d8;
  FUN_1493e8256(*(undefined8 *)(param_1 + 0x1a0));
  local_200 = param_1;
  local_1f0 = param_3;
  if ((longlong)(int)uStack_100 != 0) {
    local_1e8 = local_108 + (int)uStack_100;
    pppppppuVar15 = (ulonglong *******)local_108;
    do {
      ppppppuVar4 = *pppppppuVar15;
      local_1d8 = pppppppuVar15;
      local_208 = FUN_1493c3328(*(undefined8 *)(param_1 + 0x1a0));
      FUN_1492ef9be(ppppppuVar4,&local_d8);
      FUN_1407ec8fc(&local_128,&DAT_14cc14c28,&local_d8);
      if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
        FUN_1400020a8();
      }
      FUN_1492ee7cc(ppppppuVar4,&local_d8);
      FUN_1444ba64e(local_208,&local_128,&local_d8,2);
      if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
        FUN_1400020a8();
      }
      lVar20 = local_208;
      local_d8 = (ulonglong ******)0x403e000000000000;
      FUN_1493388f8(local_208,&local_d8);
      local_d8 = (ulonglong ******)0x0;
      FUN_149338a36(lVar20,&local_d8);
      local_d8 = (ulonglong ******)0x3fa1111120000000;
      FUN_149338b76(lVar20,&local_d8);
      FUN_1492ef9be(ppppppuVar4,&local_d8);
      FUN_1493387bc(lVar20,&local_d8);
      if (local_d8 != (ulonglong ******)0x0) {
        FUN_1400020a8();
      }
      uVar22 = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_d8 = (ulonglong ******)0x0;
      lStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_1e0 = ppppppuVar4;
      FUN_1493414e2(ppppppuVar4,&local_d8);
      uVar25 = 1;
      iVar18 = 0;
      uVar7 = 0;
      if (local_b0 != 0) {
        puVar8 = local_b8;
        if (local_b8 == (uint *)0x0) {
          puVar8 = local_c8;
        }
        uVar7 = *puVar8;
        if (uVar7 == 0) {
          iVar18 = local_b0 + 0x1e;
          if (-1 < (int)(local_b0 - 1)) {
            iVar18 = local_b0 - 1;
          }
          uVar22 = 0;
          uVar25 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar25 = uVar22;
          }
          iVar18 = 0;
          do {
            if (uVar25 == uVar22) goto LAB_14450ca91;
            iVar18 = iVar18 + 0x20;
            uVar7 = puVar8[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar22 = 0;
        }
        uVar25 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar25 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar7 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)local_b0 <= (int)uVar7) {
          uVar7 = local_b0;
        }
      }
      if (uVar7 != local_b0) {
        uVar24 = 0xffffffff;
        local_1f8 = (ulonglong ******)(ulonglong)local_b0;
        do {
          ppppppuVar4 = local_d8;
          lVar20 = (longlong)(int)uVar7;
          FUN_140002266(&local_148,&DAT_149e02016,(double)*(float *)(local_d8 + lVar20 * 4 + 2));
          iVar21 = *(int *)(ppppppuVar4 + lVar20 * 4 + 1);
          lVar17 = (longlong)iVar21;
          local_158 = (void *)0x0;
          _Src = (undefined8 ******)ppppppuVar4[lVar20 * 4];
          uStack_150 = CONCAT44(uStack_150._4_4_,iVar21);
          FUN_1446dd670(&local_158,(uint)(lVar17 == 0) + iVar21 + 1,0);
          if (lVar17 != 0) {
            memcpy(local_158,_Src,lVar17 * 2);
          }
          FUN_1400020e8(&local_158,&DAT_149e31048,1);
          FUN_1401c7f3e(local_138,&local_158,&local_148);
          if (local_158 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_148 != (void *)0x0) {
            FUN_1400020a8();
          }
          local_148 = (void *)CONCAT71(local_148._1_7_,5);
          FUN_149339084(local_208,ppppppuVar4 + lVar20 * 4,local_138,&local_148);
          if (local_138[0] != 0) {
            FUN_1400020a8();
          }
          uVar24 = uVar24 & ~(uint)uVar25;
          puVar8 = local_b8;
          if (local_b8 == (uint *)0x0) {
            puVar8 = local_c8;
          }
          iVar21 = (int)uVar22;
          lVar20 = (longlong)iVar21;
          uVar7 = puVar8[lVar20] & uVar24;
          if (uVar7 == 0) {
            iVar12 = local_b0 + 0x1e;
            if (-1 < (int)(local_b0 - 1)) {
              iVar12 = local_b0 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar21) {
              iVar13 = iVar21;
            }
            if (iVar21 < iVar12) {
              lVar17 = 0;
              do {
                uVar7 = (puVar8 + lVar20 + 1)[lVar17];
                if (uVar7 != 0) {
                  uVar22 = (ulonglong)(iVar21 + (int)lVar17 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_14450ccd3;
                }
                iVar18 = iVar18 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar13 - lVar20 != lVar17);
              uVar24 = 0xffffffff;
              iVar21 = iVar13;
            }
            uVar22 = (ulonglong)(iVar21 + 1);
            uVar7 = local_b0;
          }
          else {
LAB_14450ccd3:
            uVar25 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar25 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar7 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)local_b0 <= (int)uVar7) {
              uVar7 = local_b0;
            }
          }
        } while (uVar7 != (uint)local_1f8);
      }
LAB_14450ca91:
      param_1 = local_200;
      FUN_1492f22b0(*(undefined8 *)(local_200 + 0x1a0),local_168,local_208);
      if (local_168[0] != 0) {
        FUN_1400020a8();
      }
      FUN_149341dfa(local_1e0,&local_128);
      param_3 = local_1f0;
      local_90 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_1459c7d26(&local_d8);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      pppppppuVar15 = (ulonglong *******)(local_1d8 + 1);
    } while (pppppppuVar15 != (ulonglong *******)local_1e8);
  }
  if ((ulonglong *******)local_108 != (ulonglong *******)0x0) {
    FUN_1400020a8();
  }
  ppppuVar23 = local_e8;
  if (*(char *)(param_1 + 0x198) == '\0') {
    local_108 = (ulonglong *******)0x0;
    uStack_100 = 0;
    local_d8 = (ulonglong ******)&local_108;
    local_170 = &local_d8;
    local_178 = FUN_14450f5c4;
    lStack_d0 = param_1;
    FUN_1493e83a8(*(undefined8 *)(param_1 + 0x1a0));
    if ((longlong)(int)uStack_e0 != 0) {
      ppppuVar19 = local_e8 + (int)uStack_e0;
      ppppuVar23 = local_e8;
      do {
        pppuVar5 = *ppppuVar23;
        if (pppuVar5 != (undefined8 ***)0x0) {
          local_128 = 0;
          uStack_120 = 0;
          FUN_1492f1448(pppuVar5 + 0xe,&local_128);
          if ((longlong)(int)uStack_120 == 0) {
LAB_14450cff0:
            uVar9 = FUN_1493c3328(*(undefined8 *)(local_200 + 0x1a0));
            FUN_1492ef9be(pppuVar5,&local_d8);
            FUN_1400b22c2(&local_148,"\\SkeletalAnimation\\ConvertedFromRigidAnimation\\");
            FUN_1401c7f3e(local_138,&local_148,&local_d8);
            if (local_148 != (void *)0x0) {
              FUN_1400020a8();
            }
            if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
              FUN_1400020a8();
            }
            FUN_1492ee7cc(pppuVar5,&local_d8);
            FUN_1444ba64e(uVar9,local_138,&local_d8,2);
            if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
              FUN_1400020a8();
            }
            cVar6 = FUN_14933722c(pppuVar5,&local_17c);
            if (cVar6 == '\0') {
              local_17c = 30.0;
            }
            local_d8 = (ulonglong ******)(double)local_17c;
            FUN_1493388f8(uVar9,&local_d8);
            local_d8 = (ulonglong ******)0x0;
            FUN_149338a36(uVar9,&local_d8);
            local_d8 = (ulonglong ******)(1.0 / (double)local_17c);
            FUN_149338b76(uVar9,&local_d8);
            if ((longlong)(int)uStack_120 != 0) {
              lVar17 = (longlong)(int)uStack_120 * 0x10 + local_128;
              bVar27 = false;
              lVar20 = local_128;
              do {
                lVar26 = FUN_1492f2ba8(*(undefined8 *)(local_200 + 0x1a0),lVar20);
                if (lVar26 != 0) {
                  lVar10 = FUN_145a931ec();
                  if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                    local_148 = (void *)0x0;
                    uStack_140 = 0;
                    cVar6 = FUN_1493374a4(lVar26,&local_148);
                    if ((cVar6 != '\0') &&
                       (local_208 = FUN_1492f2ba8(*(undefined8 *)(local_200 + 0x1a0),&local_148),
                       local_208 != 0)) {
                      lVar10 = FUN_1459238a6();
                      if ((*(int *)(lVar10 + 0x38) <=
                           *(int *)(*(longlong *)(local_208 + 0x10) + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(local_208 + 0x10) + 0x30) +
                           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                        FUN_1400b22c2(&local_d8,&DAT_149e02088);
                        local_c8[0]._0_1_ = 0;
                        cVar6 = FUN_1493375e0(lVar26,&local_d8);
                        _Src_00 = local_148;
                        if (cVar6 != '\0') {
                          if (!bVar27) {
                            local_158 = (void *)0x0;
                            uStack_150 = 0;
                            local_190 = (void *)0x0;
                            lVar26 = (longlong)(int)uStack_140;
                            local_188 = (int)uStack_140;
                            if (lVar26 == 0) {
                              local_184 = 0;
                            }
                            else {
                              FUN_1446dd670(&local_190,uStack_140 & 0xffffffff,0);
                              memcpy(local_190,_Src_00,lVar26 * 2);
                            }
                            FUN_1492ef4c6(local_208,&local_1a0);
                            while (1 < local_198) {
                              lVar26 = FUN_1492f2ba8(*(undefined8 *)(local_200 + 0x1a0),&local_1a0);
                              if (lVar26 != 0) {
                                lVar10 = FUN_1459238a6();
                                if ((*(int *)(lVar10 + 0x38) <=
                                     *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                                     (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                                  uVar11 = FUN_1493431a6();
                                  cVar6 = FUN_149341ac2(lVar26,uVar11);
                                  if (cVar6 != '\0') {
                                    iVar18 = local_198 - 1;
                                    if (local_198 == 0) {
                                      iVar18 = 0;
                                    }
                                    FUN_1402980a2(&local_158,local_1a0,iVar18);
                                  }
                                  iVar18 = local_198 - 1;
                                  if (local_198 == 0) {
                                    iVar18 = 0;
                                  }
                                  FUN_1402980a2(&local_190,local_1a0,iVar18);
                                  FUN_1492ef4c6(lVar26,&local_1b0);
                                  bVar27 = local_1a0 != 0;
                                  local_1a0 = local_1b0;
                                  local_198 = local_1a8;
                                  if (bVar27) {
                                    FUN_1400020a8();
                                    local_1a0 = local_1b0;
                                    local_198 = local_1a8;
                                  }
                                }
                              }
                            }
                            if ((int)uStack_150 < 2) {
                              iVar18 = local_188 + -1;
                              if (local_188 == 0) {
                                iVar18 = 0;
                              }
                              FUN_1402980a2(&local_158,local_190,iVar18);
                            }
                            if (local_1a0 != 0) {
                              FUN_1400020a8();
                            }
                            FUN_1493387bc(uVar9,&local_158);
                            if (local_190 != (void *)0x0) {
                              FUN_1400020a8();
                            }
                            if (local_158 != (void *)0x0) {
                              FUN_1400020a8();
                            }
                            bVar27 = true;
                          }
                          FUN_1492ef9be(local_208,&local_158);
                          FUN_149338ef4(uVar9,&local_158,&local_d8,local_c8);
                          if (local_158 != (void *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                    if (local_148 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
                lVar20 = lVar20 + 0x10;
              } while (lVar20 != lVar17);
              if ((bVar27) &&
                 (FUN_1492f22b0(*(undefined8 *)(local_200 + 0x1a0),local_1c0,uVar9),
                 local_1c0[0] != 0)) {
                FUN_1400020a8();
              }
            }
            if (local_138[0] != 0) {
              FUN_1400020a8();
            }
          }
          else {
            lVar17 = (longlong)(int)uStack_120 * 0x10 + local_128;
            bVar27 = false;
            lVar20 = local_128;
            do {
              lVar26 = FUN_1492f2ba8(*(undefined8 *)(local_200 + 0x1a0),lVar20);
              if (lVar26 != 0) {
                lVar10 = FUN_145a931ec();
                if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                  local_d8 = (ulonglong ******)0x0;
                  lStack_d0 = 0;
                  cVar6 = FUN_1493374a4(lVar26,&local_d8);
                  if (cVar6 == '\0') {
                    bVar16 = true;
                  }
                  else {
                    bVar16 = true;
                    if ((longlong)(int)uStack_100 != 0) {
                      local_208 = CONCAT44(local_208._4_4_,(int)lStack_d0);
                      pppppppuVar15 = (ulonglong *******)local_108;
LAB_14450cf04:
                      if (*(int *)(pppppppuVar15 + 1) == (int)lStack_d0) {
                        if (1 < (int)lStack_d0) {
                          local_1f8 = *pppppppuVar15;
                          lVar26 = 0;
                          do {
                            uVar2 = *(ushort *)((longlong)local_1f8 + lVar26);
                            uVar3 = *(ushort *)((longlong)local_d8 + lVar26);
                            if (uVar2 == uVar3) {
                              if (uVar2 == 0) break;
                            }
                            else {
                              if (0x7f < (uVar3 | uVar2)) {
                                iVar18 = (uint)uVar2 - (uint)uVar3;
                                goto LAB_14450cf83;
                              }
                              if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                              goto code_r0x00014450cf80;
                            }
                            lVar26 = lVar26 + 2;
                          } while( true );
                        }
                        goto LAB_14450cfad;
                      }
                      if (*(int *)(pppppppuVar15 + 1) + (int)lStack_d0 != 1) goto LAB_14450cf1e;
                      bVar27 = true;
                      bVar16 = false;
                    }
                  }
LAB_14450cf99:
                  if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
                    FUN_1400020a8();
                  }
                  if (!bVar16) break;
                }
              }
              lVar20 = lVar20 + 0x10;
            } while (lVar20 != lVar17);
            if (!bVar27) goto LAB_14450cff0;
          }
          FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
        }
        ppppuVar23 = ppppuVar23 + 1;
      } while (ppppuVar23 != ppppuVar19);
    }
    FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
    param_1 = local_200;
    param_3 = local_1f0;
    if ((ulonglong *******)local_108 != (ulonglong *******)0x0) {
      FUN_1400020a8();
      param_1 = local_200;
      param_3 = local_1f0;
    }
  }
  else {
    lVar20 = (longlong)(int)uStack_e0;
    if (lVar20 != 0) {
      lVar17 = 0;
      do {
        if (*(longlong *)((longlong)ppppuVar23 + lVar17) != 0) {
          FUN_1493e84fa(param_1);
        }
        lVar17 = lVar17 + 8;
      } while (lVar20 * 8 != lVar17);
    }
  }
  if ((((*(int *)(param_1 + 0x14c) != 0) && (uVar7 = *(uint *)(param_1 + 0x148), -1 < (int)uVar7))
      && ((int)uVar7 < DAT_14c9647dc)) &&
     (((plVar14 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x14c))) &&
      ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar14;
    }
    else {
      lVar20 = 0;
    }
    if (*(char *)(lVar20 + 0x148) == '\x01') {
      if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
        lVar20 = *plVar14;
      }
      else {
        lVar20 = 0;
      }
      if (((*(int *)(lVar20 + 0x150) == 0) || (uVar7 = *(uint *)(lVar20 + 0x14c), (int)uVar7 < 0))
         || ((DAT_14c9647dc <= (int)uVar7 ||
             (((lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar17 == 0
               || (*(int *)(lVar17 + 0x10) != *(int *)(lVar20 + 0x150))) ||
              ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))))) goto LAB_14450d611;
    }
    iVar18 = (int)param_3[1];
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    plVar14 = (longlong *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x1b4) != iVar18) {
      FUN_14940333e(plVar14);
    }
    lVar20 = param_3[1];
    if ((longlong)(int)lVar20 != 0) {
      lVar17 = *param_3;
      lVar26 = 0;
      do {
        uVar9 = *(undefined8 *)(lVar17 + lVar26);
        iVar18 = *(int *)(param_1 + 0x1b0);
        *(uint *)(param_1 + 0x1b0) = iVar18 + 1U;
        if (*(uint *)(param_1 + 0x1b4) < iVar18 + 1U) {
          FUN_14940339e(plVar14,iVar18);
        }
        *(undefined8 *)(*plVar14 + (longlong)iVar18 * 8) = uVar9;
        lVar26 = lVar26 + 8;
      } while ((longlong)(int)lVar20 * 8 != lVar26);
    }
    local_d8 = (ulonglong ******)0x0;
    lStack_d0 = 0;
    local_108 = &local_d8;
    local_1c8 = (ulonglong ******)&local_108;
    local_1d0 = FUN_14450f7aa;
    FUN_1493e83a8(*(undefined8 *)(param_1 + 0x1a0));
    ppppppuVar4 = local_d8;
    lVar20 = (longlong)(int)lStack_d0;
    if (lVar20 != 0) {
      lVar17 = 0;
      do {
        if (*(longlong *)((longlong)ppppppuVar4 + lVar17) != 0) {
          FUN_1493e87e6(param_1);
        }
        lVar17 = lVar17 + 8;
      } while (lVar20 * 8 != lVar17);
    }
    if ((undefined8 *******)local_d8 != (undefined8 *******)0x0) {
      FUN_1400020a8(local_d8);
    }
  }
LAB_14450d611:
  if (local_e8 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_14450c7bd:
  if ((local_80 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014450cf80:
  iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14450cf83:
  if (iVar18 == 0) {
LAB_14450cfad:
    bVar16 = false;
    bVar27 = true;
    goto LAB_14450cf99;
  }
LAB_14450cf1e:
  pppppppuVar15 = pppppppuVar15 + 2;
  if (pppppppuVar15 == (ulonglong *******)(local_108 + (longlong)(int)uStack_100 * 2))
  goto LAB_14450cf99;
  goto LAB_14450cf04;
}



// FUNCTION 14450d764 FUN_14450d764 body=973 status=ok
// SIG undefined FUN_14450d764(void)

void FUN_14450d764(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  int local_158;
  int local_154;
  longlong local_150 [2];
  undefined2 *local_140;
  int local_138;
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [16];
  longlong local_f0;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  ushort local_90;
  undefined6 uStack_8e;
  longlong *local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((longlong)(int)param_2[1] != 0) {
    lVar11 = *param_2;
    lVar12 = (longlong)(int)param_2[1] << 3;
    do {
      FUN_1400021e4(lVar11,&local_e0);
      local_118 = 0;
      uStack_110 = 0;
      FUN_141090af6(&local_d0,&local_e0);
      puVar10 = &DAT_149dfb77a;
      if (local_c8 != 0) {
        puVar10 = local_d0;
      }
      FUN_1446f470e(&local_120,puVar10,1);
      puVar10 = &DAT_149dfb77a;
      if (local_d8 != 0) {
        puVar10 = local_e0;
      }
      FUN_1446f470e(&local_128,puVar10,1);
      FUN_1403f0b60(local_100,local_128,local_120,&local_118);
      if (local_d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x40))();
      local_188 = 1;
      (**(code **)(*plVar7 + 0x98))(plVar7,&local_d0,local_100,0);
      lVar8 = FUN_146858078(&local_d0,0);
      if (lVar8 != 0) {
        uVar3 = *param_1;
        FUN_14685b736(&local_d0,local_150);
        lVar8 = FUN_146858078(&local_d0,0);
        local_140 = *(undefined2 **)(lVar8 + 0x18);
        FUN_1400021e4(&local_140);
        iVar4 = (int)local_168;
        iVar6 = ((int)local_168 == 0) + 1;
        local_160 = local_170;
        local_170 = 0;
        local_158 = (int)local_168;
        iVar5 = local_168._4_4_;
        local_154 = local_168._4_4_;
        local_168 = 0;
        iVar9 = iVar6 + iVar4;
        if (iVar9 < iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        local_178 = uVar3;
        if (iVar5 < iVar9) {
          FUN_1446f8c06();
        }
        FUN_1400020e8(&local_160,&DAT_149e001d8,1);
        FUN_1401c7f3e(&local_140,&local_160,local_150);
        puVar10 = &DAT_149dfb77a;
        if (local_138 != 0) {
          puVar10 = local_140;
        }
        FUN_1446f470e(local_130,puVar10,1);
        FUN_1409d9716(local_178,local_130);
        if (local_140 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        if (local_170 != 0) {
          FUN_1400020a8();
        }
        if (local_150[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if ((local_90 & 1) == 0) {
        if (CONCAT62(uStack_8e,local_90) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT62(uStack_8e,local_90) + 0x10);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) &&
             (plVar7 = (longlong *)CONCAT62(uStack_8e,local_90), plVar7 != (longlong *)0x0)) {
            FUN_140958ed1(*plVar7,(int)plVar7[1]);
            if (*plVar7 != 0) {
              FUN_1400020a8();
            }
            goto LAB_14450daab;
          }
        }
      }
      else {
        plVar7 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(local_90 & 0xfffffffc) * 2);
        LOCK();
        plVar2 = plVar7 + 0x18;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (plVar7 != (longlong *)0x0 && (int)*plVar2 == 0) {
          FUN_14587a8e6(plVar7);
LAB_14450daab:
          FUN_1400020a8(plVar7);
        }
      }
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 8;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14450db34 FUN_14450db34 body=1824 status=ok
// SIG undefined FUN_14450db34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14450db34(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  double _X;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined1 *local_210;
  wchar_t **local_208;
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  longlong *local_1f8 [2];
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  longlong *local_1c8 [2];
  undefined8 local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a0 [2];
  longlong *local_190 [2];
  undefined2 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined8 local_168;
  longlong *local_160;
  wchar_t **local_158;
  double *local_150;
  longlong local_148;
  undefined4 local_140;
  wchar_t *local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x1c8);
    if (lVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      *(longlong *)(lVar8 + 0x70) = lVar5;
    }
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    if (lVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      *(longlong *)(lVar8 + 0x70) = lVar5;
    }
    lVar8 = *(longlong *)(param_1 + 0x1c0);
    if (lVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      *(longlong *)(lVar8 + 0x70) = lVar5;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x148) == '\x01') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x158) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x158) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1b8) + 0x158) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1b8) + 0x1c0) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x1c4) = 0;
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x198) + 0x158) = 0;
    }
    if (*(float *)(param_1 + 0x1a0) <= 1e-08 && *(float *)(param_1 + 0x1a0) != 1e-08) {
      local_180 = 0x100;
      local_17c = 0x100000000;
      uStack_174 = 0x100000144;
      local_16c = 6;
      local_218 = FUN_14936b1b4(*(undefined8 *)(param_1 + 0x70));
      local_1b8 = 0;
      plStack_1b0 = (longlong *)0x0;
      FUN_140407a00(local_1a0);
      local_1d8 = 0;
      plStack_1d0 = (longlong *)0x0;
      FUN_140407a00(local_1c8);
      local_138 = L"BadImportOffsetUniformScale";
      dStack_130._0_4_ = 0x1b;
      FUN_1446e940c(local_1fc,&local_138);
      local_138 = L"UInterchangeGenericAssetsPipeline";
      dStack_130._0_4_ = 0x21;
      FUN_1446e940c(local_200,&local_138);
      local_138 = 
      L"Value [{0}] for ImportOffsetUniformScale setting is too small, we will use the default value [{1}]."
      ;
      dStack_130 = (double)CONCAT44(dStack_130._4_4_,99);
      FUN_140208c1e(local_1f8,local_200,local_1fc,&local_138);
      FUN_14023409e(&local_1e8,local_1f8,1);
      local_138 = (wchar_t *)CONCAT44(local_138._4_4_,4);
      FUN_14023423e(local_128,local_1c8);
      local_118 = CONCAT44(local_118._4_4_,4);
      FUN_14023423e(&local_108,local_1a0);
      local_150 = &local_f8;
      local_158 = &local_138;
      FUN_14010d304(&local_148);
      local_168 = local_1e8;
      local_160 = local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_190,&local_168,&local_148);
      FUN_14007f2db(local_148,local_140);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      lVar8 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_138 + lVar8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_138 + lVar8) + 0x10))();
          *(undefined8 *)((longlong)&local_138 + lVar8) = 0;
          *(undefined4 *)(local_128 + lVar8 + -8) = 0;
        }
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != -0x10);
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1e0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar3 = (int *)((longlong)local_1e0 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_1e0 + 0x10))(local_1e0);
          }
        }
      }
      if (local_1c8[0] != (longlong *)0x0) {
        (**(code **)(*local_1c8[0] + 0x10))();
      }
      if (local_1a0[0] != (longlong *)0x0) {
        (**(code **)(*local_1a0[0] + 0x10))();
      }
      FUN_140008f88(local_218 + 0x70,local_190);
      if (local_190[0] != (longlong *)0x0) {
        (**(code **)(*local_190[0] + 0x10))();
      }
      if (local_1f8[0] != (longlong *)0x0) {
        (**(code **)(*local_1f8[0] + 0x10))();
      }
      plVar2 = plStack_1d0;
      if (plStack_1d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_1d0)(plStack_1d0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = plStack_1b0;
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_1b0)(plStack_1b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
    }
    local_118 = *(undefined8 *)(param_1 + 0x170);
    uStack_110 = *(undefined8 *)(param_1 + 0x178);
    local_108 = *(undefined8 *)(param_1 + 0x180);
    uStack_100 = 0;
    auVar4 = *(undefined1 (*) [16])(param_1 + 0x188);
    auVar15 = divpd(auVar4,_DAT_1499387d0);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(double *)(param_1 + 0x198);
    auVar16 = divpd(auVar16,_DAT_1499387d0);
    auVar15 = roundpd(auVar15,auVar15,3);
    auVar16 = roundpd(auVar16,auVar16,3);
    dVar12 = (auVar4._0_8_ - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar13 = (auVar4._8_8_ - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar6 = (*(double *)(param_1 + 0x198) - auVar16._0_8_ * (double)DAT_1499387d0) *
            0.008726646259971648;
    _X = (0.0 - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar9 = sin(dVar12);
    dVar10 = sin(dVar13);
    dVar11 = sin(dVar6);
    sin(_X);
    dVar12 = cos(dVar12);
    dVar13 = cos(dVar13);
    dVar14 = cos(dVar6);
    cos(_X);
    dVar6 = dVar10 * dVar9 * dVar11 + dVar13 * dVar12 * dVar14;
    local_138 = (wchar_t *)(dVar9 * dVar10 * dVar14 - dVar12 * dVar13 * dVar11);
    dStack_130 = -(dVar9 * dVar13 * dVar14) - dVar12 * dVar10 * dVar11;
    local_128._8_4_ = SUB84(dVar6,0);
    local_128._0_8_ = -(dVar13 * dVar9 * dVar11) + dVar10 * dVar12 * dVar14;
    local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_f8 = (double)*(float *)(param_1 + 0x1a0);
    uStack_e0 = 0;
    dStack_f0 = local_f8;
    local_e8 = local_f8;
    uVar7 = FUN_1493804cc(param_2);
    FUN_14938035a(uVar7,param_2,&local_138);
    FUN_149380018(uVar7,*(longlong *)(param_1 + 0x1a8) + 0x14b);
    FUN_149380170(uVar7,*(longlong *)(param_1 + 0x1a8) + 0x14c);
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_1492eaa88(*(longlong *)(param_1 + 0x1c8),param_2,param_3,param_4);
    }
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_1492eaa88(*(longlong *)(param_1 + 0x1b8),param_2,param_3,param_4);
    }
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1492eaa88(*(longlong *)(param_1 + 0x1c0),param_2,param_3,param_4);
    }
    FUN_1493ec050(param_1,param_2,param_3);
    local_138 = (wchar_t *)CONCAT71(local_138._1_7_,*(undefined1 *)(param_1 + 0x158));
    local_210 = &LAB_14450fd84;
    local_208 = &local_138;
    FUN_149369aa4(param_2);
  }
  if ((local_d0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450e255 FUN_14450e255 body=55 status=ok
// SIG undefined FUN_14450e255(void)

void FUN_14450e255(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc154b8 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc154b8 = FUN_14171c317(FUN_14672e9ea,uVar1,L"EInterchangeMaterialImportOption");
  }
  return;
}



// FUNCTION 14450e28c FUN_14450e28c body=55 status=ok
// SIG undefined FUN_14450e28c(void)

void FUN_14450e28c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc154d0 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc154d0 = FUN_14171c317(FUN_14672ea19,uVar1,L"EInterchangeMaterialSearchLocation");
  }
  return;
}



// FUNCTION 14450e2c4 FUN_14450e2c4 body=277 status=ok
// SIG undefined FUN_14450e2c4(void)

ulonglong FUN_14450e2c4(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if ((longlong)(int)param_1[1] == 0) {
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 4;
    uVar3 = CONCAT71(uVar4,1);
    do {
      FUN_1459853a0(&local_80,lVar5);
      cVar1 = FUN_14166d522(&local_80,0,1);
      if (cVar1 == '\0') {
LAB_14450e380:
        uVar3 = 0;
      }
      else {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_70 = local_80;
        local_68 = local_78 + -1;
        if (local_78 == 0) {
          local_68 = 0;
        }
        FUN_14475bf92(&local_a8,&local_70);
        lVar2 = FUN_140081d40(&local_a8,0);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (lVar2 == 0) goto LAB_14450e380;
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14450e3da FUN_14450e3da body=53 status=ok
// SIG undefined FUN_14450e3da(void)

void FUN_14450e3da(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1492ebe2c();
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
  }
  FUN_1493f5a81();
  return;
}



// FUNCTION 14450e410 FUN_14450e410 body=3144 status=ok
// SIG undefined FUN_14450e410(void)

void FUN_14450e410(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *_Src;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  code *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined8 local_270;
  wchar_t *local_268;
  code *local_260;
  undefined1 *local_258;
  code **local_250;
  undefined1 *local_248;
  code *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  code *local_208;
  undefined8 ***local_200;
  longlong local_1f8 [2];
  undefined8 local_1e8;
  undefined1 *puStack_1e0;
  undefined1 *local_1d8 [2];
  longlong local_1c8 [2];
  code *local_1b8;
  ulonglong uStack_1b0;
  undefined8 **local_1a8 [2];
  undefined8 *local_198;
  undefined8 uStack_190;
  longlong **local_188;
  ulonglong uStack_180;
  code *local_178;
  longlong ***local_170;
  longlong *local_168;
  undefined8 uStack_160;
  code *local_158;
  longlong **local_150;
  byte local_141;
  code *local_140;
  longlong **local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_230 = param_4;
  local_130 = param_1;
  if (param_2 == 0) goto LAB_14450f00e;
  lVar9 = param_1[0x33];
  bVar5 = DAT_14c950c29;
  if (lVar9 != 0) {
    lVar2 = param_1[0xe];
    if (lVar2 != 0 && (~DAT_14c950c29 & 1) == 0) {
      FUN_1456cec3c(lVar2);
    }
    bVar5 = DAT_14c950c29;
    *(longlong *)(lVar9 + 0x70) = lVar2;
  }
  if ((bVar5 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x34] = param_2;
  iVar8 = (int)param_3[1];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  plVar12 = param_1 + 0x35;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (*(int *)((longlong)param_1 + 0x1b4) != iVar8) {
    FUN_14940333e(plVar12);
  }
  lVar9 = param_3[1];
  local_238 = param_3;
  if ((longlong)(int)lVar9 != 0) {
    lVar2 = *param_3;
    lVar15 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar15);
      iVar8 = (int)param_1[0x36];
      *(uint *)(param_1 + 0x36) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1b4) < iVar8 + 1U) {
        FUN_14940339e(plVar12,iVar8);
      }
      *(undefined8 *)(*plVar12 + (longlong)iVar8 * 8) = uVar3;
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar15);
  }
  if (param_1[0x33] != 0) {
    FUN_1492eaa88(param_1[0x33],param_2,local_238,local_230);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    FUN_1494329f2(param_1 + 0x37);
  }
  local_228 = param_1 + 0x39;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (*(int *)((longlong)param_1 + 0x1d4) != 0) {
    FUN_149432a22(local_228);
  }
  local_140 = FUN_1445102ac;
  local_168 = param_1;
  local_138 = &local_168;
  FUN_1492f3f94(param_1[0x34]);
  local_141 = *(byte *)(param_1 + 0x2b);
  lVar9 = FUN_1492f8190(param_1[0x34]);
  if (lVar9 != 0) {
    FUN_1492f691a(lVar9,&local_141);
    local_141 = local_141 | *(byte *)(param_1 + 0x2b);
  }
  lVar9 = FUN_146153af4();
  local_220 = *(longlong **)(lVar9 + 0x350);
  if (((local_220 != (longlong *)0x0) &&
      (cVar6 = (**(code **)(*local_220 + 0x2a8))(), cVar6 != '\0')) && ((char)param_1[0x2e] == '\0')
     ) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  if ((char)param_1[0x2e] == '\x01') {
    lVar9 = param_1[0x38];
    if ((longlong)(int)lVar9 != 0) {
      lVar2 = param_1[0x37];
      lVar15 = 0;
      do {
        lVar10 = FUN_1493f6bec(param_1,*(undefined8 *)(lVar2 + lVar15));
        if (lVar10 != 0) {
          FUN_1492f03f8(lVar10,local_141);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar9 * 8 != lVar15);
    }
  }
  else if (((char)param_1[0x2e] == '\0') && (lVar9 = param_1[0x38], (longlong)(int)lVar9 != 0)) {
    lVar2 = param_1[0x37];
    lVar15 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar15);
      cVar6 = FUN_1493470ca(uVar3,&local_168);
      if ((cVar6 == '\0') || ((char)local_168 != '\x01')) {
        if (*(char *)((longlong)param_1 + 0x171) == '\0') {
          FUN_1493f68e6(param_1,uVar3);
        }
        else {
          FUN_1493f6a60(&local_130);
          FUN_1493f6b20(&local_130,uVar3);
          param_1[0x3e] = local_d8;
          FUN_1493f6b86(&local_130,uVar3,local_141,*(undefined1 *)((longlong)param_1 + 0x172));
          param_1[0x3e] = 0;
        }
      }
      else {
        FUN_1493f674e(param_1,uVar3);
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar15);
  }
  local_168 = local_230;
  bVar5 = 1;
  if ((char)param_1[0x2b] == '\0') {
    bVar5 = local_141;
  }
  uStack_160._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_1 + 0x159),bVar5);
  local_158 = FUN_14451032c;
  local_150 = &local_168;
  FUN_1493f6ebe(param_1[0x34]);
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  local_170 = &local_188;
  local_178 = FUN_14451055a;
  local_188 = &local_168;
  FUN_1493f7010(param_1[0x34]);
  if ((longlong)(int)uStack_160 != 0) {
    plVar12 = local_168 + (int)uStack_160;
    plVar16 = local_168;
    local_218 = plVar12;
    do {
      plVar4 = (longlong *)*plVar16;
      local_188 = (longlong **)0x0;
      uStack_180 = 0;
      cVar6 = FUN_14933b50e(plVar4,&local_188);
      if ((cVar6 != '\0') && (1 < (int)uStack_180)) {
        FUN_1492ee7cc(plVar4,&local_198);
        FUN_1492ef9be(plVar4,&local_1b8);
        FUN_140b1283a(local_1a8,L"Factory_",&local_1b8);
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
        cVar6 = FUN_1492f3730(param_1[0x34],local_1a8);
        if (cVar6 == '\0') {
          plVar11 = (longlong *)FUN_1493f7161(param_1[0x34]);
          FUN_1444ba64e(plVar11,local_1a8,&local_198,3);
          FUN_1492f22b0(param_1[0x34],local_1c8,plVar11);
          if (local_1c8[0] != 0) {
            FUN_1400020a8();
          }
          iVar8 = (int)param_1[0x3a];
          *(uint *)(param_1 + 0x3a) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1d4) < iVar8 + 1U) {
            FUN_149432b5e(local_228,iVar8);
          }
          *(longlong **)(*local_228 + (longlong)iVar8 * 8) = plVar11;
          FUN_1492ef9be(plVar4,&local_1b8);
          FUN_1444bb06c(plVar11 + 8,&local_1b8);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          FUN_1492ef9be(plVar11,&local_1b8);
          FUN_1444bb06c(plVar4 + 8,&local_1b8);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
LAB_14450ea78:
          (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_1b8);
          FUN_1492f027e(plVar11,&local_1b8);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          FUN_14938bd94(plVar11,&local_188);
          if ((local_220 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*local_220 + 0x2a8))(), cVar6 == '\0')) {
            lVar9 = FUN_14129edf0();
          }
          else {
            lVar9 = DAT_14caec470;
            if (DAT_14caec470 == 0) {
              local_1b8 = FUN_1417df956;
              local_240 = FUN_14081d0ea;
              local_248 = &LAB_1463eaa20;
              local_258 = &LAB_147bbd9ea;
              local_260 = FUN_1401cf6d7;
              local_268 = L"Engine";
              local_270 = 0;
              local_278 = 0x10000000;
              local_280 = 8;
              local_288 = 0x330;
              local_250 = &local_1b8;
              FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                            FUN_1463eb22e);
              lVar9 = DAT_14caec470;
            }
          }
          local_1b8 = (code *)0x0;
          uStack_1b0 = 0;
          FUN_1401031ac(lVar9,0,&local_1b8);
          FUN_14938bc3a(plVar11,&local_1b8);
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_1b8 = (code *)0x0;
          uStack_1b0 = 0;
          FUN_149345138(plVar4,&local_1b8);
          uVar13 = 0;
          if ((longlong)(int)uStack_1b0 != 0) {
            local_210 = plVar11 + 0xc;
            lVar9 = (longlong)(int)uStack_1b0 << 4;
            pcVar14 = local_1b8;
            local_238 = plVar11;
            local_230 = plVar16;
            do {
              iVar8 = *(int *)(pcVar14 + 8) + -1;
              if (*(int *)(pcVar14 + 8) == 0) {
                iVar8 = 0;
              }
              FUN_1446f82e2(local_1d8,iVar8,*(undefined8 *)pcVar14,1);
              local_1e8 = local_1d8[0];
              uVar7 = FUN_1493458b8(plVar4,&local_1e8);
              if ((char)uVar7 == '\0') {
                FUN_14933bd24(local_1d8,pcVar14);
              }
              else {
                FUN_149346170();
              }
              iVar8 = FUN_149347f14(plVar4,pcVar14,uVar7);
              if (iVar8 < 0xc) {
                if (iVar8 == 1) {
                  local_1e8 = (undefined1 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
                  FUN_1492ee61c(plVar4,local_1d8,&local_1e8);
                  FUN_1492ed6b4(plVar11,local_1d8,&local_1e8);
                }
                else if (iVar8 == 8) {
                  local_1e8 = (undefined1 *)((ulonglong)local_1e8._4_4_ << 0x20);
                  FUN_1492eeb9c(plVar4,local_1d8,&local_1e8);
                  FUN_1492eda3c(plVar11,local_1d8,&local_1e8);
                }
              }
              else if (iVar8 == 0xc) {
                local_1e8 = (undefined1 *)((ulonglong)local_1e8._4_4_ << 0x20);
                FUN_1492ef004(plVar4,local_1d8,&local_1e8);
                FUN_1492eddc0(plVar11,local_1d8,&local_1e8);
              }
              else if (iVar8 == 0xf) {
                local_1e8 = &DAT_3f8000003f800000;
                puStack_1e0 = &DAT_3f8000003f800000;
                FUN_1492ef232(plVar4,local_1d8,&local_1e8);
                FUN_1492edf7c(plVar11,local_1d8,&local_1e8);
              }
              else if (iVar8 == 0x12) {
                local_1e8 = (undefined1 *)0x0;
                puStack_1e0 = (undefined1 *)0x0;
                FUN_1492ef716(plVar4,local_1d8,&local_1e8);
                FUN_140b1283a(local_1f8,L"Factory_",&local_1e8);
                FUN_1492ee142(plVar11,local_1d8,local_1f8);
                FUN_1444bb06c(local_210,local_1f8);
                if (local_1f8[0] != 0) {
                  FUN_1400020a8();
                }
                plVar11 = local_238;
                plVar16 = local_230;
                if (local_1e8 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                  plVar11 = local_238;
                  plVar16 = local_230;
                }
              }
              if (local_1d8[0] != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              pcVar14 = pcVar14 + 0x10;
              lVar9 = lVar9 + -0x10;
            } while (lVar9 != 0);
            uVar13 = uStack_1b0 & 0xffffffff;
          }
          FUN_1447a1747(local_1b8,uVar13);
          plVar12 = local_218;
          if (local_1b8 != (code *)0x0) {
            FUN_1400020a8();
            plVar12 = local_218;
          }
        }
        else {
          plVar11 = (longlong *)FUN_1492f2702(param_1[0x34],local_1a8);
          if (plVar11 != (longlong *)0x0) {
            lVar9 = FUN_145a95058();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)) goto LAB_14450ea78;
          }
        }
        if (local_1a8[0] != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        if (local_198 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_188 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar12);
  }
  plVar12 = (longlong *)FUN_1492ebf28(param_1);
  if (plVar12 == param_1) {
    local_188 = (longlong **)0x0;
    uVar1 = *(uint *)(param_1 + 6);
    _Src = (void *)param_1[5];
    uStack_180 = CONCAT44(uStack_180._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_180 = (ulonglong)uVar1;
      goto LAB_14450eee5;
    }
    FUN_1446dd670(&local_188,uVar1,0);
    memcpy(local_188,_Src,(longlong)(int)uVar1 * 2);
    if ((int)uStack_180 < 2) goto LAB_14450eee5;
  }
  else {
    local_188 = (longlong **)0x0;
    uStack_180 = 0;
LAB_14450eee5:
    plVar12 = (longlong *)FUN_1492ebf28(param_1);
    if (plVar12 == param_1) {
      iVar8 = (int)param_1[0x2d] + -1;
      if ((int)param_1[0x2d] == 0) {
        iVar8 = 0;
      }
      FUN_1402980a2(&local_188,param_1[0x2c],iVar8);
    }
  }
  plVar12 = (longlong *)FUN_1492ebf28(param_1);
  if ((plVar12 == param_1) && (1 < (int)uStack_180)) {
    local_1a8[0] = &local_198;
    local_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    local_200 = local_1a8;
    local_208 = FUN_144510592;
    FUN_1493f6ebe(param_1[0x34]);
    if ((int)uStack_190 == 1) {
      (**(code **)(*(longlong *)*local_198 + 0x2d0))((longlong *)*local_198,&local_188);
      FUN_1492f027e(*local_198,&local_188);
    }
    if (local_198 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_188 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14450f00e:
  FUN_1493f71f6(&local_130);
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14450f05a FUN_14450f05a body=721 status=ok
// SIG undefined FUN_14450f05a(void)

undefined8 FUN_14450f05a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_1492f1448(lVar7 + 0xf0,&local_58);
    bVar1 = true;
    if (0 < (longlong)(int)uStack_50) {
      iVar3 = (int)((longlong *)*param_1)[1];
      plVar9 = local_58;
LAB_14450f0f4:
      if ((int)plVar9[1] == iVar3) {
        if (1 < iVar3) {
          lVar4 = 0;
          do {
            uVar11 = *(ushort *)(*plVar9 + lVar4);
            uVar12 = (ulonglong)uVar11;
            uVar8 = *(ushort *)(*(longlong *)*param_1 + lVar4);
            if (uVar11 == uVar8) {
              if (uVar11 == 0) break;
            }
            else {
              if (0x7f < (uVar8 | uVar11)) goto LAB_14450f159;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar10 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar10]) goto LAB_14450f159;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
      }
      else if ((int)plVar9[1] + iVar3 != 1) goto LAB_14450f106;
      goto LAB_14450f177;
    }
    goto LAB_14450f2db;
  }
  goto LAB_14450f081;
LAB_14450f159:
  if (uVar11 == uVar8) goto LAB_14450f177;
LAB_14450f106:
  plVar9 = plVar9 + 2;
  if (plVar9 == local_58 + (longlong)(int)uStack_50 * 2) goto LAB_14450f163;
  goto LAB_14450f0f4;
LAB_14450f163:
  cVar2 = FUN_1492f28bc(*(undefined8 *)param_1[2]);
  if (cVar2 != '\0') {
LAB_14450f177:
    iVar3 = FUN_1492f125c(lVar7 + 0x150);
    if (iVar3 == 1) {
      local_68 = 0;
      uStack_60 = 0;
      FUN_1492f5d18(lVar7 + 0x150,0,&local_68);
      lVar4 = FUN_1492f2ba8(*(undefined8 *)param_1[2],&local_68);
      if (lVar4 == 0) {
LAB_14450f24b:
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14450f25a;
      }
      lVar5 = FUN_1459238a6();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_14450f24b;
      FUN_1492ee7cc(lVar4,local_88);
      FUN_140ba7826(&local_78,&DAT_149e01f60,local_88);
      plVar9 = (longlong *)param_1[1];
      if (plVar9 == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
        *plVar9 = local_78;
        local_78 = 0;
        *(undefined4 *)(plVar9 + 1) = (undefined4)local_70;
        *(undefined4 *)((longlong)plVar9 + 0xc) = local_70._4_4_;
        local_70 = 0;
      }
      lVar7 = local_68;
      if (local_88[0] != 0) {
        FUN_1400020a8();
        lVar7 = local_68;
      }
    }
    else {
LAB_14450f25a:
      FUN_1492ee7cc(lVar7,&local_78);
      FUN_140ba7826(&local_68,&DAT_149e01f60,&local_78);
      plVar9 = (longlong *)param_1[1];
      if (plVar9 == &local_68) {
        lVar7 = local_78;
        if (local_68 != 0) {
          FUN_1400020a8();
          lVar7 = local_78;
        }
      }
      else {
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
        *plVar9 = local_68;
        local_68 = 0;
        *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_60._4_4_;
        uStack_60 = 0;
        lVar7 = local_78;
      }
    }
    if (lVar7 != 0) {
      FUN_1400020a8();
    }
    bVar1 = false;
  }
LAB_14450f2db:
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = 1;
  if (!bVar1) goto LAB_14450f083;
LAB_14450f081:
  uVar6 = 0;
LAB_14450f083:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14450f33c FUN_14450f33c body=55 status=ok
// SIG undefined FUN_14450f33c(void)

void FUN_14450f33c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149403232(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14450f374 FUN_14450f374 body=591 status=ok
// SIG undefined FUN_14450f374(void)

void FUN_14450f374(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_3;
  uVar8 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1493414e2(uVar3);
  uVar14 = 1;
  iVar7 = 0;
  iVar15 = 0;
  if (local_70 != 0) {
    puVar6 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar6 = local_88;
    }
    uVar9 = *puVar6;
    if (uVar9 == 0) {
      iVar15 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar15 = local_70 + -1;
      }
      uVar8 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar8;
      }
      iVar7 = 0;
      do {
        if (uVar14 == uVar8) goto LAB_14450f572;
        iVar7 = iVar7 + 0x20;
        uVar9 = puVar6[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar15 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar15) {
      iVar15 = local_70;
    }
  }
  if (iVar15 != local_70) {
    puVar6 = local_88;
    if (local_78 != (uint *)0x0) {
      puVar6 = local_78;
    }
    iVar11 = local_70 + 0x1e;
    if (-1 < local_70 + -1) {
      iVar11 = local_70 + -1;
    }
    iVar11 = iVar11 >> 5;
    uVar9 = 0xffffffff;
    bVar5 = 0;
    do {
      bVar4 = bVar5;
      fVar2 = *(float *)(local_98[0] + 0x10 + (longlong)iVar15 * 0x20);
      if ((fVar2 != 0.0) || (NAN(fVar2))) goto LAB_14450f54f;
      uVar9 = uVar9 & ~(uint)uVar14;
      iVar15 = (int)uVar8;
      lVar12 = (longlong)iVar15;
      uVar16 = puVar6[lVar12] & uVar9;
      if (uVar16 == 0) {
        iVar10 = iVar11;
        if (iVar11 < iVar15) {
          iVar10 = iVar15;
        }
        if (iVar11 <= iVar15) break;
        lVar13 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar16 = puVar6[lVar12 + lVar13 + 1];
          if (uVar16 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar12 == lVar13) goto LAB_14450f549;
        }
        uVar8 = (ulonglong)(iVar15 + (int)lVar13 + 1);
        uVar9 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar15 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      bVar5 = bVar4 | fVar2 != 0.0;
    } while (iVar15 < local_70);
LAB_14450f549:
    if ((bool)(bVar4 | fVar2 != 0.0)) {
LAB_14450f54f:
      param_1 = (longlong *)*param_1;
      iVar15 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
        FUN_1494032b8(param_1,iVar15);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar15 * 8) = uVar3;
    }
  }
LAB_14450f572:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1459c7d26(local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450f5c4 FUN_14450f5c4 body=275 status=ok
// SIG undefined FUN_14450f5c4(void)

void FUN_14450f5c4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  longlong *local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_3 != 0) {
    lVar3 = param_1[1];
    local_48 = (void *)0x0;
    uStack_40 = 0;
    cVar6 = FUN_14933871e();
    if (cVar6 != '\0') {
      plVar4 = (longlong *)*param_1;
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(plVar4,iVar2);
      }
      _Src = local_48;
      lVar5 = *plVar4;
      lVar8 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      *(undefined8 *)(lVar5 + lVar8) = 0;
      lVar7 = (longlong)(int)uStack_40;
      *(int *)(lVar5 + 8 + lVar8) = (int)uStack_40;
      if (lVar7 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_40 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar7 * 2);
      }
      local_60 = *param_1;
      local_50 = &local_60;
      local_58 = FUN_14450f6d8;
      FUN_1493ea6fc(*(undefined8 *)(lVar3 + 0x1a0),&local_48);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14450f6d8 FUN_14450f6d8 body=208 status=ok
// SIG undefined FUN_14450f6d8(void)

/* WARNING: Removing unreachable block (ram,0x00014450f79f) */

void FUN_14450f6d8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = FUN_1459238a6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      param_1 = (longlong *)*param_1;
      FUN_1492ef9be(lVar2,&local_30);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_1,iVar1);
      }
      lVar2 = *param_1;
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = local_30;
      local_30 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
      local_28 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14450f7aa FUN_14450f7aa body=55 status=ok
// SIG undefined FUN_14450f7aa(void)

void FUN_14450f7aa(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149403424(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14450f7e2 FUN_14450f7e2 body=688 status=ok
// SIG undefined FUN_14450f7e2(void)

void FUN_14450f7e2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_88 [40];
  int local_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(int *)((longlong)param_1 + 0x14) == 0) ||
        (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 == 0 ||
       (*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x14))))) ||
     (uVar2 = *param_3, (*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_14450f847;
  uVar4 = FUN_1493431a6();
  cVar3 = FUN_149341ac2(uVar2,uVar4);
  if ((cVar3 == '\0') && (*(char *)(param_1 + 3) != '\x01')) goto LAB_14450f847;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_14450fa8b:
    lVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 2);
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_14450fa8b;
      lVar8 = *plVar9;
    }
  }
  FUN_1492ee7cc(uVar2,&local_60);
  if ((int)local_58 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)CONCAT44(uStack_5c,local_60);
  }
  FUN_1446f470e(&local_48,puVar10,1);
  iVar11 = -1;
  if ((local_48 != 0) && (*(int *)(lVar8 + 0xe8) != *(int *)(lVar8 + 0x114))) {
    uVar1 = (uint)((ulonglong)local_48 >> 0x10);
    uVar6 = (uint)local_48 & 0xffff;
    lVar5 = lVar8 + 0x118;
    if (*(longlong *)(lVar8 + 0x120) != 0) {
      lVar5 = *(longlong *)(lVar8 + 0x120);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar8 + 0x128) - 1U &
                             (int)((ulonglong)local_48 >> 0x20) + ((uint)local_48 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar7 * 0x14);
        if (*plVar9 == local_48) {
          if ((plVar9 != (longlong *)0x0) && (plVar9 + 1 != (longlong *)0x0)) {
            iVar11 = (int)plVar9[1];
          }
          break;
        }
        iVar7 = *(int *)((longlong)plVar9 + 0xc);
      } while (iVar7 != -1);
    }
  }
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  if (iVar11 != -1) {
    piVar12 = (int *)*param_1;
    if ((*piVar12 == -1) || (iVar11 < *piVar12)) {
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar8 = (longlong)local_50;
      _Src = (void *)*param_2;
      local_60 = iVar11;
      if (lVar8 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar8 * 2);
        piVar12 = (int *)*param_1;
      }
      *piVar12 = local_60;
      if (piVar12 == &local_60) {
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(piVar12 + 2) != 0) {
          FUN_1400020a8();
        }
        *(void **)(piVar12 + 2) = local_58;
        piVar12[4] = local_50;
        piVar12[5] = local_4c;
      }
    }
  }
LAB_14450f847:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14450fa94 FUN_14450fa94 body=751 status=ok
// SIG undefined FUN_14450fa94(void)

void FUN_14450fa94(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar3 = FUN_1459238a6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1492ee7cc(lVar9,&local_58);
      plVar4 = (longlong *)FUN_14143f0c0();
      lVar3 = plVar4[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 1000))(plVar4);
        lVar3 = plVar4[0x22];
      }
      uVar8 = 0;
      if ((longlong)*(int *)(lVar3 + 0xa8) != 0) {
        plVar4 = *(longlong **)(lVar3 + 0xa0);
        plVar7 = plVar4 + (longlong)*(int *)(lVar3 + 0xa8) * 2;
LAB_14450fd05:
        if ((int)plVar4[1] != local_50) {
          if ((int)plVar4[1] + local_50 == 1) goto LAB_14450fd7c;
          goto LAB_14450fd17;
        }
        if (1 < local_50) {
          lVar3 = 0;
          do {
            uVar12 = *(ushort *)(*plVar4 + lVar3);
            uVar5 = (ulonglong)uVar12;
            uVar14 = *(ushort *)(local_58 + lVar3);
            if (uVar12 == uVar14) {
              if (uVar12 == 0) break;
            }
            else {
              if (0x7f < (uVar14 | uVar12)) goto LAB_14450fd6c;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar15 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar15]) goto LAB_14450fd6c;
            }
            lVar3 = lVar3 + 2;
          } while( true );
        }
LAB_14450fd7c:
        uVar8 = 1;
      }
LAB_14450fb51:
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      FUN_1492fa9ca(lVar9,&local_68);
      uVar6 = 0;
      if ((longlong)(int)uStack_60 != 0) {
        plVar7 = local_68 + (longlong)(int)uStack_60 * 6;
        plVar4 = local_68;
        local_6c = uVar8;
        do {
          if (*(int *)((longlong)plVar4 + 0x24) != -1) {
            lVar9 = (longlong)(int)((longlong *)param_1[1])[1];
            if (lVar9 != 0) {
              plVar11 = *(longlong **)param_1[1];
              plVar10 = plVar11 + lVar9 * 2;
              iVar1 = (int)plVar4[1];
LAB_14450fbfc:
              if ((int)plVar11[1] == iVar1) {
                uVar5 = 0x270;
                uVar8 = local_6c;
                if (1 < iVar1) {
                  lVar9 = 0;
                  do {
                    uVar12 = *(ushort *)(*plVar11 + lVar9);
                    uVar14 = *(ushort *)(*plVar4 + lVar9);
                    if (uVar12 == uVar14) {
                      if (uVar12 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar14 | uVar12)) {
                        iVar13 = (uint)uVar12 - (uint)uVar14;
                        goto LAB_14450fc7b;
                      }
                      if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[(uint)uVar14])
                      goto code_r0x00014450fc78;
                    }
                    lVar9 = lVar9 + 2;
                  } while( true );
                }
              }
              else {
                if ((int)plVar11[1] + iVar1 != 1) goto LAB_14450fc11;
                uVar5 = 0x270;
              }
              goto LAB_14450fbd2;
            }
LAB_14450fbb0:
            bVar2 = 0x1d < *(uint *)(plVar4 + 2) |
                    (byte)(0x1ffffebf >> ((byte)*(uint *)(plVar4 + 2) & 0x1f));
            uVar5 = (ulonglong)((bVar2 & 1) << 5) | 0x250;
            if ((byte)uVar8 != 0) {
              uVar5 = 0x270;
            }
            if (((~bVar2 | (byte)uVar8) & 1) != 0) {
LAB_14450fbd2:
              FUN_1444bb06c(uVar5 + *(longlong *)*param_1,plVar4);
            }
          }
          plVar4 = plVar4 + 6;
        } while (plVar4 != plVar7);
        uVar6 = (int)uStack_60;
      }
      FUN_149306a38(local_68,uVar6);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14450fd6c:
  uVar8 = 1;
  if (uVar12 == uVar14) goto LAB_14450fb51;
LAB_14450fd17:
  plVar4 = plVar4 + 2;
  uVar8 = 0;
  if (plVar4 == plVar7) goto LAB_14450fb51;
  goto LAB_14450fd05;
code_r0x00014450fc78:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar14];
LAB_14450fc7b:
  if (iVar13 == 0) goto LAB_14450fbd2;
LAB_14450fc11:
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar10) goto LAB_14450fbb0;
  goto LAB_14450fbfc;
}



// FUNCTION 14450fd90 FUN_14450fd90 body=48 status=ok
// SIG undefined FUN_14450fd90(void)

longlong FUN_14450fd90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14940934e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14450fdd2 FUN_14450fdd2 body=563 status=ok
// SIG undefined FUN_14450fdd2(void)

void FUN_14450fdd2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14450ffb6;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 0x10 + (longlong)iVar7 * 0x28);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_14450ffb6;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_14450ffb6:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144510006 FUN_144510006 body=48 status=ok
// SIG undefined FUN_144510006(void)

longlong FUN_144510006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_149427e6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144510036 FUN_144510036 body=48 status=ok
// SIG undefined FUN_144510036(void)

longlong FUN_144510036(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14941f10e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144510066 FUN_144510066 body=563 status=ok
// SIG undefined FUN_144510066(void)

void FUN_144510066(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14451024a;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 0x10 + (longlong)iVar7 * 0x28);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_14451024a;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_14451024a:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445102ac FUN_1445102ac body=128 status=ok
// SIG undefined FUN_1445102ac(void)

void FUN_1445102ac(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar2 = *param_3;
  lVar3 = *param_1;
  cVar4 = FUN_1492ef37c(lVar2);
  if ((lVar2 != 0) && (cVar4 == '\x02')) {
    lVar5 = FUN_145a93c10();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      iVar1 = *(int *)(lVar3 + 0x1c0);
      *(uint *)(lVar3 + 0x1c0) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x1c4) < iVar1 + 1U) {
        FUN_149432a52((longlong *)(lVar3 + 0x1b8),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar3 + 0x1b8) + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 14451032c FUN_14451032c body=557 status=ok
// SIG undefined FUN_14451032c(void)

void FUN_14451032c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60 [2];
  longlong local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_3;
  if (lVar1 == 0) goto LAB_144510353;
  FUN_149384716(lVar1,param_1 + 1);
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_1492f03f8(lVar1,0);
  }
  FUN_1492ee7cc(lVar1,local_40);
  lVar2 = FUN_1493f63ec(local_40,*param_1,*(undefined1 *)((longlong)param_1 + 9));
  if (lVar2 != 0) {
    lVar3 = FUN_145a94f6c();
    bVar4 = true;
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_140a1dfd8();
      if (*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) {
        bVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30;
      }
    }
    lVar3 = FUN_145a95058();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
LAB_144510459:
      bVar5 = false;
    }
    else {
      if (DAT_14caec308 == 0) {
        local_80 = local_60;
        local_60[0] = FUN_1417df956;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_146386466;
        local_88 = &LAB_147bb408b;
        local_90 = &LAB_1463eaa15;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10000001;
        local_b0 = 8;
        local_b8 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14caec308 + 0x38))
      goto LAB_144510459;
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) == DAT_14caec308 + 0x30;
    }
    FUN_1400bbfc4(local_60,lVar2);
    FUN_1492f52ea(lVar1,local_60);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_60[0] = (code *)CONCAT71(local_60[0]._1_7_,bVar4 & bVar5);
    FUN_149384716(lVar1,local_60);
    FUN_1492f03f8(lVar1,(ulonglong)local_60[0] & 0xff);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_144510353:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451055a FUN_14451055a body=55 status=ok
// SIG undefined FUN_14451055a(void)

void FUN_14451055a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149432ad8(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144510592 FUN_144510592 body=55 status=ok
// SIG undefined FUN_144510592(void)

void FUN_144510592(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149432b5e(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1445105ca FUN_1445105ca body=183 status=ok
// SIG undefined FUN_1445105ca(void)

void FUN_1445105ca(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_50 [2];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1[3];
  local_68 = param_2;
  FUN_1493f7ac6(*param_1,&local_40,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2]);
  if (local_40 != 0) {
    FUN_1492ef9be(local_40,local_50);
    FUN_149344f46(*(undefined8 *)param_1[4],param_2,local_50,local_38);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144510682 FUN_144510682 body=78 status=ok
// SIG undefined FUN_144510682(void)

undefined8 * FUN_144510682(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bcc5730;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1445106d6 FUN_1445106d6 body=29 status=ok
// SIG undefined FUN_1445106d6(void)

void FUN_1445106d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445106f4 FUN_1445106f4 body=29 status=ok
// SIG undefined FUN_1445106f4(void)

undefined8 FUN_1445106f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144510712 FUN_144510712 body=1052 status=ok
// SIG undefined FUN_144510712(void)

void FUN_144510712(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  int local_80;
  int iStack_7c;
  void *local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  cVar5 = FUN_14934567c(uVar1,&DAT_14cc15198);
  cVar6 = FUN_14934567c(uVar1,&DAT_14cc151a0);
  pwVar8 = L"ThinTranslucentMaterial_";
  if ((cVar5 == '\0') && (cVar6 == '\0')) {
    cVar5 = FUN_14934567c(*(undefined8 *)(param_1 + 0x10),&DAT_14cc15180);
    if (cVar5 == '\0') {
      cVar5 = FUN_14934567c(*(undefined8 *)(param_1 + 0x10),&DAT_14cc151a8);
      if (cVar5 == '\0') {
        cVar5 = FUN_14934567c(*(undefined8 *)(param_1 + 0x10),&DAT_14cc151b8);
        pwVar8 = L"PBRSurfaceMaterial_";
        if (cVar5 != '\0') {
          pwVar8 = L"SubsurfaceMaterial_";
        }
      }
      else {
        pwVar8 = L"SheenMaterial_";
      }
    }
    else {
      pwVar8 = L"ClearCoatMaterial_";
    }
  }
  FUN_14020fad6(&local_48,pwVar8);
  FUN_140b1283a(&local_98,L"/InterchangeAssets/Materials/",&local_48);
  iVar4 = local_8c;
  iVar3 = local_90;
  if (local_90 < 2) {
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_80;
    pvVar2 = (void *)*param_2;
    if (lVar10 == 0) {
      iStack_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar9 = 0;
    }
    local_88 = local_98;
    local_98 = (void *)0x0;
    local_80 = local_90;
    local_80 = local_90;
    iStack_7c = local_8c;
    local_90 = 0;
    local_8c = 0;
    iVar7 = iVar9 + iVar3;
    if (iVar7 < iVar3) goto LAB_144510a2c;
    if (iVar4 < iVar7) {
      FUN_1446f8c06(&local_88);
    }
    FUN_1400020e8(&local_88,*param_2,iVar9);
  }
  iVar4 = iStack_7c;
  iVar3 = local_80;
  iVar9 = (local_80 == 0) + 1;
  local_78 = local_88;
  local_88 = (void *)0x0;
  uStack_70 = CONCAT44(iStack_7c,local_80);
  local_80 = 0;
  iStack_7c = 0;
  iVar7 = iVar9 + iVar3;
  if (iVar7 < iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar4 < iVar7) {
    FUN_1446f8c06(&local_78);
  }
  FUN_1400020e8(&local_78,&DAT_149e0635c,1);
  pvVar2 = local_48;
  local_60 = (int)uStack_70;
  if ((int)uStack_70 < 2) {
    local_68 = (void *)0x0;
    local_60 = (int)uStack_40;
    lVar10 = (longlong)(int)uStack_40;
    if (lVar10 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,uStack_40 & 0xffffffff,0);
      memcpy(local_68,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar9 = 0;
    }
    local_68 = local_78;
    local_5c = uStack_70._4_4_;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    if (iVar9 + local_60 < local_60) goto LAB_144510a2c;
    if (local_5c < iVar9 + local_60) {
      FUN_1446f8c06(&local_68);
    }
    FUN_1400020e8(&local_68,local_48,iVar9);
  }
  iVar4 = local_5c;
  iVar3 = local_60;
  if (local_60 < 2) {
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_2 + 1);
    lVar10 = (longlong)local_50;
    pvVar2 = (void *)*param_2;
    if (lVar10 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar9 = 0;
    }
    local_58 = local_68;
    local_68 = (void *)0x0;
    local_50 = local_60;
    local_4c = local_5c;
    local_60 = 0;
    local_5c = 0;
    iVar7 = iVar9 + iVar3;
    if (iVar7 < iVar3) {
LAB_144510a2c:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar9);
    }
    if (iVar4 < iVar7) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1400020e8(&local_58,*param_2,iVar9);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14938bd94(*(undefined8 *)(param_1 + 8),&local_58);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144510b50 FUN_144510b50 body=5 status=ok
// SIG undefined FUN_144510b50(void)

longlong FUN_144510b50(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144510b56 FUN_144510b56 body=12 status=ok
// SIG undefined FUN_144510b56(void)

void FUN_144510b56(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144510b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144510b62 FUN_144510b62 body=29 status=ok
// SIG undefined FUN_144510b62(void)

undefined8 FUN_144510b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144510b7f FUN_144510b7f body=7071 status=ok
// SIG undefined FUN_144510b7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144510b7f(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuStack_80 = &PTR_FUN_14bcbc8a0;
  local_88 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcbc8e0,2,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcbd1b0,2,0);
  _DAT_14cc14b50 = 0;
  uRam000000014cc14b58 = 0;
  _DAT_14cc14b60 = 0x3ff0000000000000;
  _DAT_14cc14b68 = 0;
  uRam000000014cc14b70 = 0;
  _DAT_14cc14b78 = 0x3ff0000000000000;
  _DAT_14cc14b80 = 0;
  _DAT_14cc14b88 = 0x3ff0000000000000;
  _DAT_14cc14b90 = 0;
  _DAT_14cc14b98 = 0;
  _DAT_14cc14ba0 = 0x3f800000;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcbde30,2,0);
  _DAT_14cc14bf0 = 0xffffffff;
  _DAT_14cc14bf4 = 0;
  ppuStack_80 = &PTR_FUN_14bcbeba0;
  local_88 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcbebc0,1,0);
  FUN_140056680(&DAT_14cc14c28,L"\\SkeletalAnimation\\ConvertedFromRigidAnimation\\");
  atexit((_func_5014 *)&LAB_14450c6e9);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cc14c38 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cc14c40,&DAT_149e97e80,1);
  FUN_1446f470e(&DAT_14cc14c48,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14c50,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc14c58,L"FlattenNormal",1);
  FUN_1446f470e(&DAT_14cc14c60,L"Normal",1);
  FUN_1446f470e(&DAT_14cc14c68,L"Flatness",1);
  FUN_1446f470e(&DAT_14cc14c70,L"Lerp",1);
  FUN_1446f470e(&DAT_14cc14c78,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14c80,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc14c88,L"Factor",1);
  FUN_1446f470e(&DAT_14cc14c90,L"ComponentMask",1);
  FUN_1446f470e(&DAT_14cc14c98,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc14ca0,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc14ca8,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc14cb0,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14cb8,L"Input",1);
  FUN_1446f470e(&DAT_14cc14cc0,L"Multiply",1);
  FUN_1446f470e(&DAT_14cc14cc8,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14cd0,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc14cd8,L"MakeFloat3",1);
  FUN_1446f470e(&DAT_14cc14ce0,&DAT_149e25cc8,1);
  FUN_1446f470e(&DAT_14cc14ce8,&DAT_149e25ccc,1);
  FUN_1446f470e(&DAT_14cc14cf0,&DAT_149e25cd0,1);
  FUN_1446f470e(&DAT_14cc14cf8,L"Noise",1);
  FUN_1446f470e(&DAT_14cc14d00,L"Position",1);
  FUN_1446f470e(&DAT_14cc14d08,L"FilterWidth",1);
  FUN_1446f470e(&DAT_14cc14d10,L"Scale",1);
  FUN_1446f470e(&DAT_14cc14d18,L"Quality",1);
  FUN_1446f470e(&DAT_14cc14d20,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc14d28,L"bTurbulence",1);
  FUN_1446f470e(&DAT_14cc14d30,L"Levels",1);
  FUN_1446f470e(&DAT_14cc14d38,L"OutputMin",1);
  FUN_1446f470e(&DAT_14cc14d40,L"OutputMax",1);
  FUN_1446f470e(&DAT_14cc14d48,L"LevelScale",1);
  FUN_1446f470e(&DAT_14cc14d50,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc14d58,L"RepeatSize",1);
  FUN_1446f470e(&DAT_14cc14d60,L"NormalFromHeightMap",1);
  FUN_1446f470e(&DAT_14cc14d68,L"Height Map",1);
  FUN_1446f470e(&DAT_14cc14d70,L"Normal Map Intensity",1);
  FUN_1446f470e(&DAT_14cc14d78,L"Height Map UV Offset",1);
  FUN_1446f470e(&DAT_14cc14d80,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc14d88,L"Height Map Channel Selector",1);
  FUN_1446f470e(&DAT_14cc14d90,L"OneMinus",1);
  FUN_1446f470e(&DAT_14cc14d98,L"Input",1);
  FUN_1446f470e(&DAT_14cc14da0,L"Rotator",1);
  FUN_1446f470e(&DAT_14cc14da8,L"CenterX",1);
  FUN_1446f470e(&DAT_14cc14db0,L"CenterY",1);
  FUN_1446f470e(&DAT_14cc14db8,L"Speed",1);
  FUN_1446f470e(&DAT_14cc14dc0,L"Coordinate",1);
  FUN_1446f470e(&DAT_14cc14dc8,L"Time",1);
  FUN_1446f470e(&DAT_14cc14dd0,L"MaterialXSwizzle",1);
  FUN_1446f470e(&DAT_14cc14dd8,L"Input",1);
  FUN_1446f470e(&DAT_14cc14de0,L"Channels",1);
  FUN_1446f470e(&DAT_14cc14de8,L"TextureCoordinate",1);
  FUN_1446f470e(&DAT_14cc14df0,L"Index",1);
  FUN_1446f470e(&DAT_14cc14df8,L"UTiling",1);
  FUN_1446f470e(&DAT_14cc14e00,L"VTiling",1);
  FUN_1446f470e(&DAT_14cc14e08,L"Offset",1);
  FUN_1446f470e(&DAT_14cc14e10,L"Scale",1);
  FUN_1446f470e(&DAT_14cc14e18,L"Rotate",1);
  FUN_1446f470e(&DAT_14cc14e20,L"RotationCenter",1);
  FUN_1446f470e(&DAT_14cc14e28,L"TextureObject",1);
  FUN_1446f470e(&DAT_14cc14e30,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc14e38,L"TextureSample",1);
  FUN_1446f470e(&DAT_14cc14e40,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc14e48,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc14e50,&DAT_14a9cf404,1);
  FUN_1446f470e(&DAT_14cc14e58,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc14e60,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc14e68,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc14e70,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc14e78,L"RGBA",1);
  FUN_1446f470e(&DAT_14cc14e80,L"KernelSize",1);
  FUN_1446f470e(&DAT_14cc14e88,L"FilterSize",1);
  FUN_1446f470e(&DAT_14cc14e90,L"FilterOffset",1);
  FUN_1446f470e(&DAT_14cc14e98,L"Filter",1);
  FUN_1446f470e(&DAT_14cc14ea0,L"Time",1);
  FUN_1446f470e(&DAT_14cc14ea8,L"bIgnorePause",1);
  FUN_1446f470e(&DAT_14cc14eb0,L"bOverride_Period",1);
  FUN_1446f470e(&DAT_14cc14eb8,L"Period",1);
  FUN_1446f470e(&DAT_14cc14ec0,L"TransformPosition",1);
  FUN_1446f470e(&DAT_14cc14ec8,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc14ed0,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc14ed8,L"Input",1);
  FUN_1446f470e(&DAT_14cc14ee0,L"Transform",1);
  FUN_1446f470e(&DAT_14cc14ee8,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc14ef0,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc14ef8,L"Input",1);
  FUN_1446f470e(&DAT_14cc14f00,L"VectorNoise",1);
  FUN_1446f470e(&DAT_14cc14f08,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc14f10,L"Quality",1);
  FUN_1446f470e(&DAT_14cc14f18,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc14f20,L"TileSize",1);
  FUN_1446f470e(&DAT_14cc14f28,L"Position",1);
  FUN_1446f470e(&DAT_14cc14f30,L"VertexColor",1);
  FUN_1446f470e(&DAT_14cc14f38,L"ScalarParameter",1);
  FUN_1446f470e(&DAT_14cc14f40,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14f48,L"VectorParameter",1);
  FUN_1446f470e(&DAT_14cc14f50,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14f58,L"StaticBoolParameter",1);
  FUN_1446f470e(&DAT_14cc14f60,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc14f68,L"EmissiveColor",1);
  FUN_1446f470e(&DAT_14cc14f70,L"Normal",1);
  FUN_1446f470e(&DAT_14cc14f78,L"Tangent",1);
  FUN_1446f470e(&DAT_14cc14f80,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc14f88,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc14f90,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc14f98,&DAT_14a2a7780,1);
  FUN_1446f470e(&DAT_14cc14fa0,L"BxDF",1);
  FUN_1446f470e(&DAT_14cc14fa8,L"Refraction",1);
  FUN_1446f470e(&DAT_14cc14fb0,L"Anisotropy",1);
  FUN_1446f470e(&DAT_14cc14fb8,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc14fc0,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc14fc8,L"open_pbr_surface",1);
  FUN_1446f470e(&DAT_14cc14fd0,L"base_weight",1);
  FUN_1446f470e(&DAT_14cc14fd8,L"base_color",1);
  FUN_1446f470e(&DAT_14cc14fe0,L"base_roughness",1);
  FUN_1446f470e(&DAT_14cc14fe8,L"base_metalness",1);
  FUN_1446f470e(&DAT_14cc14ff0,L"specular_weight",1);
  FUN_1446f470e(&DAT_14cc14ff8,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc15000,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc15008,L"specular_ior",1);
  FUN_1446f470e(&DAT_14cc15010,L"specular_ior_level",1);
  FUN_1446f470e(&DAT_14cc15018,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15020,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc15028,L"transmission_weight",1);
  FUN_1446f470e(&DAT_14cc15030,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15038,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc15040,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc15048,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15050,L"transmission_dispersion_scale",1);
  FUN_1446f470e(&DAT_14cc15058,L"transmission_dispersion_abbe_number",1);
  FUN_1446f470e(&DAT_14cc15060,L"subsurface_weight",1);
  FUN_1446f470e(&DAT_14cc15068,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc15070,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc15078,L"subsurface_radius_scale",1);
  FUN_1446f470e(&DAT_14cc15080,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15088,L"fuzz_weight",1);
  FUN_1446f470e(&DAT_14cc15090,L"fuzz_color",1);
  FUN_1446f470e(&DAT_14cc15098,L"fuzz_roughness",1);
  FUN_1446f470e(&DAT_14cc150a0,L"coat_weight",1);
  FUN_1446f470e(&DAT_14cc150a8,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc150b0,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc150b8,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc150c0,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc150c8,L"coat_ior",1);
  FUN_1446f470e(&DAT_14cc150d0,L"coat_ior_level",1);
  FUN_1446f470e(&DAT_14cc150d8,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc150e0,L"thin_film_ior",1);
  FUN_1446f470e(&DAT_14cc150e8,L"emission_luminance",1);
  FUN_1446f470e(&DAT_14cc150f0,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc150f8,L"geometry_opacity",1);
  FUN_1446f470e(&DAT_14cc15100,L"geometry_thin_walled",1);
  FUN_1446f470e(&DAT_14cc15108,L"geometry_normal",1);
  FUN_1446f470e(&DAT_14cc15110,L"geometry_coat_normal",1);
  FUN_1446f470e(&DAT_14cc15118,L"geometry_tangent",1);
  FUN_1446f470e(&DAT_14cc15120,L"OpenPBR_FrontMaterial",1);
  FUN_1446f470e(&DAT_14cc15128,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc15130,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc15138,L"Shininess",1);
  FUN_1446f470e(&DAT_14cc15140,L"AmbientColor",1);
  FUN_1446f470e(&DAT_14cc15148,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc15150,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc15158,L"Glossiness",1);
  FUN_1446f470e(&DAT_14cc15160,L"BaseColor",1);
  FUN_1446f470e(&DAT_14cc15168,L"Metallic",1);
  FUN_1446f470e(&DAT_14cc15170,L"Specular",1);
  FUN_1446f470e(&DAT_14cc15178,L"Roughness",1);
  FUN_1446f470e(&DAT_14cc15180,L"ClearCoat",1);
  FUN_1446f470e(&DAT_14cc15188,L"ClearCoatRoughness",1);
  FUN_1446f470e(&DAT_14cc15190,L"ClearCoatNormal",1);
  FUN_1446f470e(&DAT_14cc15198,L"TransmissionColor",1);
  FUN_1446f470e(&DAT_14cc151a0,L"SurfaceCoverage",1);
  FUN_1446f470e(&DAT_14cc151a8,L"SheenColor",1);
  FUN_1446f470e(&DAT_14cc151b0,L"SheenRoughness",1);
  FUN_1446f470e(&DAT_14cc151b8,L"SubsurfaceColor",1);
  FUN_1446f470e(&DAT_14cc151c0,L"standard_surface",1);
  FUN_1446f470e(&DAT_14cc151c8,L"base",1);
  FUN_1446f470e(&DAT_14cc151d0,L"base_color",1);
  FUN_1446f470e(&DAT_14cc151d8,L"diffuse_roughness",1);
  FUN_1446f470e(&DAT_14cc151e0,L"metalness",1);
  FUN_1446f470e(&DAT_14cc151e8,L"specular",1);
  FUN_1446f470e(&DAT_14cc151f0,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc151f8,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc15200,L"specular_IOR",1);
  FUN_1446f470e(&DAT_14cc15208,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15210,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc15218,L"transmission",1);
  FUN_1446f470e(&DAT_14cc15220,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15228,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc15230,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc15238,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15240,L"transmission_dispersion",1);
  FUN_1446f470e(&DAT_14cc15248,L"transmission_extra_roughness",1);
  FUN_1446f470e(&DAT_14cc15250,L"subsurface",1);
  FUN_1446f470e(&DAT_14cc15258,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc15260,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc15268,L"subsurface_scale",1);
  FUN_1446f470e(&DAT_14cc15270,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15278,L"sheen",1);
  FUN_1446f470e(&DAT_14cc15280,L"sheen_color",1);
  FUN_1446f470e(&DAT_14cc15288,L"sheen_roughness",1);
  FUN_1446f470e(&DAT_14cc15290,L"coat",1);
  FUN_1446f470e(&DAT_14cc15298,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc152a0,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc152a8,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc152b0,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc152b8,L"coat_IOR",1);
  FUN_1446f470e(&DAT_14cc152c0,L"coat_normal",1);
  FUN_1446f470e(&DAT_14cc152c8,L"coat_affect_color",1);
  FUN_1446f470e(&DAT_14cc152d0,L"coat_affect_roughness",1);
  FUN_1446f470e(&DAT_14cc152d8,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc152e0,L"thin_film_IOR",1);
  FUN_1446f470e(&DAT_14cc152e8,L"emission",1);
  FUN_1446f470e(&DAT_14cc152f0,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc152f8,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15300,L"thin_walled",1);
  FUN_1446f470e(&DAT_14cc15308,L"normal",1);
  FUN_1446f470e(&DAT_14cc15310,L"tangent",1);
  FUN_1446f470e(&DAT_14cc15318,L"Substrate StandardSurface Opaque",1);
  FUN_1446f470e(&DAT_14cc15320,L"Substrate StandardSurface Translucent",1);
  FUN_1446f470e(&DAT_14cc15328,L"Geometry Opacity",1);
  FUN_1446f470e(&DAT_14cc15330,L"surface",1);
  FUN_1446f470e(&DAT_14cc15338,L"bsdf",1);
  FUN_1446f470e(&DAT_14cc15340,&DAT_14bc6cbce,1);
  FUN_1446f470e(&DAT_14cc15348,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15350,L"Surface",1);
  FUN_1446f470e(&DAT_14cc15358,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc15360,L"surface_unlit",1);
  FUN_1446f470e(&DAT_14cc15368,L"emission",1);
  FUN_1446f470e(&DAT_14cc15370,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc15378,L"transmission",1);
  FUN_1446f470e(&DAT_14cc15380,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15388,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15390,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc15398,L"Surface Unlit",1);
  FUN_1446f470e(&DAT_14cc153a0,L"UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc153a8,L"diffuseColor",1);
  FUN_1446f470e(&DAT_14cc153b0,L"emissiveColor",1);
  FUN_1446f470e(&DAT_14cc153b8,L"specularColor",1);
  FUN_1446f470e(&DAT_14cc153c0,L"metallic",1);
  FUN_1446f470e(&DAT_14cc153c8,L"roughness",1);
  FUN_1446f470e(&DAT_14cc153d0,L"clearcoat",1);
  FUN_1446f470e(&DAT_14cc153d8,L"clearcoatRoughness",1);
  FUN_1446f470e(&DAT_14cc153e0,L"opacity",1);
  FUN_1446f470e(&DAT_14cc153e8,L"opacityThreshold",1);
  FUN_1446f470e(&DAT_14cc153f0,&DAT_14bc3072e,1);
  FUN_1446f470e(&DAT_14cc153f8,L"normal",1);
  FUN_1446f470e(&DAT_14cc15400,L"displacement",1);
  FUN_1446f470e(&DAT_14cc15408,L"occlusion",1);
  FUN_1446f470e(&DAT_14cc15410,L"Substrate UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc15418,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc15420,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc15428,L"UnlitColor",1);
  FUN_1446f470e(&DAT_14cc15430,L"Front Material",1);
  FUN_1446f470e(&DAT_14cc15438,L"Opacity Mask",1);
  FUN_1446f470e(&DAT_14cc15440,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc15448,L"Occlusion",1);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cc15450);
  if (cVar1 == '\0') {
    _DAT_14cc15450 = 0;
    uRam000000014cc15458 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcbf8e0,1,0);
  FUN_1446f470e(&DAT_14cc15478,L"Imported",1);
  FUN_1446f470e(&DAT_14cc15480,L"Asset",1);
  DAT_14cc15488 = 0x3f666666;
  DAT_14cc1548c = 0x3e800000;
  DAT_14cc15490 = 0;
  DAT_14cc15494 = 0x3f800000;
  DAT_14cc15498 = 0;
  DAT_14cc1549c = 0x3f333333;
  DAT_14cc154a0 = 0x3ee66666;
  DAT_14cc154a4 = 0x3dcccccd;
  DAT_14cc154a8 = 0x3f800000;
  ppuStack_80 = &PTR_FUN_14bcc0980;
  local_88 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcc09c0,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144512720 FUN_144512720 body=696 status=ok
// SIG undefined FUN_144512720(void)

void FUN_144512720(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == 0) {
    if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(longlong *)(param_1 + 0x220) = param_2;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  plVar6 = (longlong *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(int *)(param_1 + 0x234) != iVar1) {
    FUN_14940333e(plVar6);
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar5 = *param_3;
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar5 + lVar7);
      iVar1 = *(int *)(param_1 + 0x230);
      *(uint *)(param_1 + 0x230) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x234) < iVar1 + 1U) {
        FUN_14940339e(plVar6,iVar1);
      }
      *(undefined8 *)(*plVar6 + (longlong)iVar1 * 8) = uVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  lVar4 = FUN_149434c28(*(undefined8 *)(param_1 + 0x220),param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x1e8) = lVar4;
  if (*(char *)(param_1 + 0x1b8) != '\x01') goto LAB_1445129a4;
  iVar1 = *(int *)(param_1 + 0x14c);
  if ((((iVar1 == 0) || (uVar2 = *(uint *)(param_1 + 0x148), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     ((plVar6 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
      plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar1)))) {
    if (DAT_00000148 != '\0') {
LAB_1445129dc:
      lVar5 = 0;
      goto LAB_144512881;
    }
  }
  else {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar6;
    }
    else {
      lVar5 = 0;
    }
    if (*(char *)(lVar5 + 0x148) != '\0') {
      if (((int)plVar6[2] != iVar1) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))
      goto LAB_1445129dc;
      lVar5 = *plVar6;
LAB_144512881:
      if (*(char *)(lVar5 + 0x148) != '\x02') goto LAB_1445129a4;
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  if (*(char *)(param_1 + 0x1bb) == '\x01') {
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_149439474(lVar4,&local_e8);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140a49dbc(&local_e8);
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_149439a9e(lVar4,&local_e8);
    FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  local_50 = 0;
  FUN_140a49dbc();
LAB_1445129a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 1445129f4 FUN_1445129f4 body=55 status=ok
// SIG undefined FUN_1445129f4(void)

void FUN_1445129f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc15dd0 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc15dd0 = FUN_14171c317(FUN_14672ebed,uVar1,L"EInterchangeSceneHierarchyType");
  }
  return;
}



// FUNCTION 144512a2c FUN_144512a2c body=2658 status=ok
// SIG undefined FUN_144512a2c(void)

void FUN_144512a2c(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong **pplVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ushort uVar19;
  int iVar20;
  ushort uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  ulonglong *local_1d0;
  code *local_1c8;
  longlong ***local_1c0;
  longlong local_1b8 [2];
  longlong **local_1a8;
  ulonglong *puStack_1a0;
  code *local_190;
  longlong ***local_188;
  ulonglong local_180;
  code *local_178;
  ulonglong ***local_170;
  ulonglong *local_168;
  undefined8 uStack_160;
  longlong *local_158 [12];
  undefined1 *local_f8;
  longlong **local_f0;
  ulonglong *local_e8;
  void *pvStack_e0;
  int local_d8;
  ulonglong **local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_2 == 0) goto LAB_144512a66;
  param_1[0x2c] = param_2;
  local_f0 = local_158;
  local_f8 = &LAB_1445170f0;
  local_1d8 = param_2;
  local_158[0] = param_1;
  FUN_149369aa4(param_2);
  puVar18 = &DAT_14c846480;
  pplVar14 = local_158;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pplVar14 = (longlong *)*puVar18;
    puVar18 = puVar18 + 1;
    pplVar14 = pplVar14 + 1;
  }
  lVar11 = FUN_149380686(param_1[0x2c]);
  if (lVar11 != 0) {
    FUN_14937fec0(lVar11,local_158);
  }
  local_c8 = &local_168;
  local_168 = (ulonglong *)0x0;
  uStack_160 = 0;
  local_170 = &local_c8;
  local_178 = FUN_144517106;
  FUN_1492f3f94(param_1[0x2c]);
  local_1e8 = param_1;
  FUN_1494360fe(param_1);
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_c8 = (ulonglong **)0x0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  if ((longlong)(int)uStack_160 != 0) {
    puVar4 = local_168 + (int)uStack_160;
    puVar15 = local_168;
LAB_144512bb4:
    local_180 = *puVar15;
    if (local_180 != 0) {
      local_e8 = (ulonglong *)0x0;
      pvStack_e0 = (void *)0x0;
      FUN_1492f1448(local_180 + 0xd0,&local_e8);
      uVar12 = (ulonglong)pvStack_e0 & 0xffffffff;
      if (0 < (int)pvStack_e0) {
        plVar6 = (longlong *)FUN_14934321a();
        uVar12 = 0;
        if ((longlong)(int)pvStack_e0 != 0) {
          iVar20 = (int)plVar6[1];
          puVar13 = local_e8;
LAB_144512c48:
          if ((int)puVar13[1] == iVar20) {
            if (1 < iVar20) {
              lVar11 = 0;
              do {
                uVar21 = *(ushort *)(*puVar13 + lVar11);
                uVar19 = *(ushort *)(*plVar6 + lVar11);
                if (uVar21 == uVar19) {
                  if (uVar21 == 0) break;
                }
                else {
                  if (0x7f < (uVar19 | uVar21)) {
                    iVar23 = (uint)uVar21 - (uint)uVar19;
                    goto LAB_144512cb9;
                  }
                  if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[(uint)uVar19])
                  goto code_r0x000144512cb6;
                }
                lVar11 = lVar11 + 2;
              } while( true );
            }
            goto LAB_144512cd2;
          }
          if ((int)puVar13[1] + iVar20 == 1) goto LAB_144512cd2;
          goto LAB_144512c5a;
        }
      }
      goto LAB_144512bf4;
    }
    goto LAB_144512bc4;
  }
  goto LAB_144512d90;
code_r0x000144512cb6:
  iVar23 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
LAB_144512cb9:
  if (iVar23 == 0) {
LAB_144512cd2:
    uVar3 = ((uint)(local_180 >> 0x14) & 0xffff ^ (uint)(local_180 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_1a8 = (longlong **)FUN_149441ef6(&local_c8,uVar3 >> 0x10 ^ uVar3,&local_180);
    lVar11 = local_1e8[0x2c];
    local_188 = &local_1a8;
    local_190 = FUN_144517174;
    puStack_1a0 = &local_180;
    FUN_1492ef9be(local_180,local_1b8);
    FUN_1493ea6fc(lVar11,local_1b8,&local_190);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    uVar12 = (ulonglong)pvStack_e0 & 0xffffffff;
    goto LAB_144512bf4;
  }
LAB_144512c5a:
  puVar13 = puVar13 + 2;
  if (puVar13 == local_e8 + (longlong)(int)pvStack_e0 * 2) goto LAB_144512cc5;
  goto LAB_144512c48;
LAB_144512cc5:
  uVar12 = (ulonglong)pvStack_e0 & 0xffffffff;
LAB_144512bf4:
  FUN_1447a1747(local_e8,uVar12);
  if (local_e8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
LAB_144512bc4:
  puVar15 = puVar15 + 1;
  if (puVar15 == puVar4) goto LAB_144512d7f;
  goto LAB_144512bb4;
LAB_144513278:
  if (uVar21 == uVar19) goto LAB_144512e9a;
LAB_144513219:
  pplVar14 = pplVar14 + 2;
  if (pplVar14 == local_1a8 + (longlong)(int)puStack_1a0 * 2) goto LAB_144513135;
  goto LAB_144513203;
LAB_144513301:
  if (uVar21 == uVar19) {
LAB_144513309:
    FUN_1492ef9be(uVar12,&local_e8);
    if ((longlong)(int)local_1e8[0x2e] != 0) {
      plVar6 = (longlong *)local_1e8[0x2d];
      plVar7 = plVar6 + (longlong)(int)local_1e8[0x2e] * 2;
      goto LAB_1445133c1;
    }
    bVar26 = false;
    goto LAB_144513334;
  }
LAB_1445132aa:
  pplVar14 = pplVar14 + 2;
  if (pplVar14 == local_1a8 + (longlong)(int)puStack_1a0 * 2) goto LAB_144513148;
  goto LAB_144513298;
LAB_1445133c1:
  if ((int)plVar6[1] == (int)pvStack_e0) {
    bVar26 = true;
    if (1 < (int)pvStack_e0) {
      lVar11 = 0;
      do {
        uVar21 = *(ushort *)(*plVar6 + lVar11);
        uVar22 = (ulonglong)uVar21;
        uVar19 = *(ushort *)((longlong)local_e8 + lVar11);
        if (uVar21 == uVar19) {
          if (uVar21 == 0) break;
        }
        else {
          if (0x7f < (uVar19 | uVar21)) goto LAB_144513438;
          uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
          uVar17 = (ulonglong)uVar19;
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar17]) goto LAB_144513438;
        }
        lVar11 = lVar11 + 2;
      } while( true );
    }
  }
  else {
    if ((int)plVar6[1] + (int)pvStack_e0 != 1) goto LAB_1445133d3;
    bVar26 = true;
  }
  goto LAB_144513334;
LAB_144513438:
  if (uVar21 == uVar19) goto LAB_144513334;
LAB_1445133d3:
  plVar6 = plVar6 + 2;
  bVar26 = false;
  if (plVar6 == plVar7) goto LAB_144513334;
  goto LAB_1445133c1;
LAB_144513334:
  if (local_e8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (bVar26) {
    FUN_1492ef4c6(uVar12,&local_e8);
    lVar11 = FUN_1492f2ba8(local_1e8[0x2c],&local_e8);
    cVar2 = '\x01';
    if (lVar11 != 0) {
      lVar16 = FUN_1459238a6();
      if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) {
        uVar8 = FUN_1493431a6();
        cVar2 = FUN_149341ac2(lVar11,uVar8);
      }
    }
    if (local_e8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') goto LAB_144512f46;
  }
LAB_144512e9a:
  uVar22 = (ulonglong)local_a0;
  if (local_a0 == 0) {
    uVar17 = 1;
    uVar24 = 0;
    iVar20 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = local_a8;
    if (local_a8 == (uint *)0x0) {
      puVar5 = local_b8;
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar20 = local_a0 + 0x1e;
      if (-1 < (int)(local_a0 - 1)) {
        iVar20 = local_a0 - 1;
      }
      uVar24 = 0;
      uVar17 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar17 = uVar24;
      }
      iVar20 = 0;
      do {
        if (uVar17 == uVar24) goto LAB_144512f2d;
        iVar20 = iVar20 + 0x20;
        uVar3 = puVar5[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar24 = 0;
      iVar20 = 0;
    }
    uVar17 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar17 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar3 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)local_a0 <= (int)uVar3) {
      uVar3 = local_a0;
    }
  }
  if (uVar3 != local_a0) {
    uVar25 = 0xffffffff;
    local_1e0 = uVar22;
    do {
      lVar11 = (longlong)(int)uVar3;
      local_e8 = local_c8[lVar11 * 4];
      pvStack_e0 = (void *)0x0;
      local_d8 = *(int *)(local_c8 + lVar11 * 4 + 2);
      lVar16 = (longlong)local_d8;
      puVar4 = local_c8[lVar11 * 4 + 1];
      if (lVar16 != 0) {
        FUN_149440a12(&pvStack_e0,local_d8);
        memcpy(pvStack_e0,puVar4,lVar16 << 3);
        puVar4 = local_e8;
        if ((longlong)local_d8 == 0) {
          uVar22 = local_1e0;
          if (pvStack_e0 != (void *)0x0) {
            FUN_1400020a8();
            uVar22 = local_1e0;
          }
        }
        else {
          lVar11 = 0;
          do {
            uVar1 = *(ulonglong *)((longlong)pvStack_e0 + lVar11);
            if (uVar1 == uVar12) break;
            bVar26 = (longlong)local_d8 * 8 + -8 != lVar11;
            lVar11 = lVar11 + 8;
          } while (bVar26);
          if (pvStack_e0 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar22 = local_1e0;
          if (uVar1 == uVar12) {
            if (puVar4 != (ulonglong *)0x0) goto LAB_144512f46;
            break;
          }
        }
      }
      uVar25 = uVar25 & ~(uint)uVar17;
      puVar5 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar5 = local_b8;
      }
      iVar23 = (int)uVar24;
      lVar11 = (longlong)iVar23;
      uVar3 = puVar5[lVar11] & uVar25;
      if (uVar3 == 0) {
        iVar9 = local_a0 + 0x1e;
        if (-1 < (int)(local_a0 - 1)) {
          iVar9 = local_a0 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar23) {
          iVar10 = iVar23;
        }
        if (iVar23 < iVar9) {
          lVar16 = 0;
          do {
            uVar3 = puVar5[lVar11 + lVar16 + 1];
            if (uVar3 != 0) {
              uVar24 = (ulonglong)(iVar23 + (int)lVar16 + 1);
              uVar25 = 0xffffffff;
              goto LAB_144513046;
            }
            iVar20 = iVar20 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar11 != lVar16);
          uVar25 = 0xffffffff;
          iVar23 = iVar10;
        }
        uVar24 = (ulonglong)(iVar23 + 1);
        uVar3 = local_a0;
      }
      else {
LAB_144513046:
        uVar17 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar17 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar3 = (iVar20 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)local_a0 <= (int)uVar3) {
          uVar3 = local_a0;
        }
      }
    } while (uVar3 != (uint)uVar22);
  }
LAB_144512f2d:
  (**(code **)(*local_1e8 + 800))(local_1e8,local_158,uVar12);
LAB_144512f46:
  FUN_1447a1747(local_1a8,(ulonglong)puStack_1a0 & 0xffffffff);
  puVar4 = local_1d0;
  if (local_1a8 != (longlong **)0x0) {
    FUN_1400020a8();
    puVar4 = local_1d0;
  }
LAB_144512e6b:
  puVar15 = puVar15 + 1;
  if (puVar15 == puVar4) goto LAB_144512d90;
  goto LAB_144512e63;
LAB_1445131e3:
  if (uVar21 == uVar19) goto LAB_144512e9a;
LAB_144513184:
  pplVar14 = pplVar14 + 2;
  if (pplVar14 == local_1a8 + (longlong)(int)puStack_1a0 * 2) goto LAB_144512f46;
  goto LAB_14451316e;
LAB_144512d7f:
  if ((longlong)(int)uStack_160 != 0) {
    puVar4 = local_168 + (int)uStack_160;
    puVar15 = local_168;
    local_1d0 = puVar4;
LAB_144512e63:
    uVar12 = *puVar15;
    if (uVar12 != 0) {
      local_1a8 = (longlong **)0x0;
      puStack_1a0 = (ulonglong *)0x0;
      FUN_1492f1448(uVar12 + 0xd0,&local_1a8);
      if ((int)puStack_1a0 < 1) goto LAB_144512e9a;
      plVar6 = (longlong *)FUN_149343132();
      if ((longlong)(int)puStack_1a0 != 0) {
        iVar20 = (int)plVar6[1];
        pplVar14 = local_1a8;
LAB_144513203:
        if (*(int *)(pplVar14 + 1) == iVar20) {
          if (1 < iVar20) {
            lVar11 = 0;
            do {
              uVar21 = *(ushort *)((longlong)*pplVar14 + lVar11);
              uVar22 = (ulonglong)uVar21;
              uVar19 = *(ushort *)(*plVar6 + lVar11);
              if (uVar21 == uVar19) {
                if (uVar21 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar21)) goto LAB_144513278;
                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                uVar17 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar17]) goto LAB_144513278;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
        }
        else if (*(int *)(pplVar14 + 1) + iVar20 != 1) goto LAB_144513219;
        goto LAB_144512e9a;
      }
LAB_144513135:
      plVar6 = (longlong *)FUN_1493431a6();
      if ((longlong)(int)puStack_1a0 != 0) {
        iVar20 = (int)plVar6[1];
        pplVar14 = local_1a8;
LAB_144513298:
        if (*(int *)(pplVar14 + 1) == iVar20) {
          if (1 < iVar20) {
            lVar11 = 0;
            do {
              uVar21 = *(ushort *)((longlong)*pplVar14 + lVar11);
              uVar22 = (ulonglong)uVar21;
              uVar19 = *(ushort *)(*plVar6 + lVar11);
              if (uVar21 == uVar19) {
                if (uVar21 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar21)) goto LAB_144513301;
                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                uVar17 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar17]) goto LAB_144513301;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
          goto LAB_144513309;
        }
        if (*(int *)(pplVar14 + 1) + iVar20 == 1) goto LAB_144513309;
        goto LAB_1445132aa;
      }
LAB_144513148:
      plVar6 = (longlong *)FUN_14934321a();
      if ((longlong)(int)puStack_1a0 != 0) {
        iVar20 = (int)plVar6[1];
        pplVar14 = local_1a8;
LAB_14451316e:
        if (*(int *)(pplVar14 + 1) == iVar20) {
          if (1 < iVar20) {
            lVar11 = 0;
            do {
              uVar21 = *(ushort *)((longlong)*pplVar14 + lVar11);
              uVar22 = (ulonglong)uVar21;
              uVar19 = *(ushort *)(*plVar6 + lVar11);
              if (uVar21 == uVar19) {
                if (uVar21 == 0) break;
              }
              else {
                if (0x7f < (uVar19 | uVar21)) goto LAB_1445131e3;
                uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                uVar17 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar17]) goto LAB_1445131e3;
              }
              lVar11 = lVar11 + 2;
            } while( true );
          }
        }
        else if (*(int *)(pplVar14 + 1) + iVar20 != 1) goto LAB_144513184;
        goto LAB_144512e9a;
      }
      goto LAB_144512f46;
    }
    goto LAB_144512e6b;
  }
LAB_144512d90:
  local_1a8 = (longlong **)&local_e8;
  local_e8 = (ulonglong *)0x0;
  pvStack_e0 = (void *)0x0;
  local_1c0 = &local_1a8;
  local_1c8 = FUN_1445171de;
  FUN_149436198(local_1d8);
  puVar4 = local_e8;
  plVar6 = local_1e8;
  lVar11 = (longlong)(int)pvStack_e0;
  if (lVar11 != 0) {
    lVar16 = 0;
    do {
      if (*(longlong *)((longlong)puVar4 + lVar16) != 0) {
        (**(code **)(*plVar6 + 0x328))(plVar6);
      }
      lVar16 = lVar16 + 8;
    } while (lVar11 * 8 != lVar16);
  }
  if (local_e8 != (ulonglong *)0x0) {
    FUN_1400020a8(local_e8);
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_149440a6c(&local_c8);
  if (local_168 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
LAB_144512a66:
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144513490 FUN_144513490 body=2566 status=ok
// SIG undefined FUN_144513490(void)

/* WARNING: Removing unreachable block (ram,0x000144513ad4) */

ulonglong FUN_144513490(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  char local_189;
  ulonglong local_188;
  undefined8 *local_180;
  longlong local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  uint *local_150;
  longlong *local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined2 *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  void *pvStack_100;
  uint local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178 = *param_1;
  local_11c = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_189 = param_3;
  local_160 = param_2;
  if (*(char *)(local_178 + 0x17a) == '\x01') {
    local_188 = *(ulonglong *)(local_178 + 0x1e8);
    local_170 = *(undefined8 *)(local_178 + 0x220);
    if ((local_188 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_188);
    }
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar15 = (uint *)*param_2;
      local_150 = puVar15 + (longlong)*(int *)(param_2 + 1) * 4;
      do {
        local_130 = local_188;
        if ((local_188 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_188);
        }
        local_198 = param_2;
        FUN_144513e97(&local_108,&local_130,local_170,puVar15);
        pvVar2 = pvStack_100;
        if ((char)local_108 != -1) {
          local_118 = (undefined2 *)0x0;
          lVar19 = (longlong)(int)local_f8;
          uStack_110 = CONCAT44(uStack_110._4_4_,local_f8);
          if (lVar19 == 0) {
            uStack_110 = (ulonglong)local_f8;
            iVar13 = 0;
          }
          else {
            FUN_1446dd670(&local_118,local_f8,0);
            memcpy(local_118,pvVar2,lVar19 * 2);
            iVar13 = (int)uStack_110;
          }
          uVar17 = 0;
          iVar14 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar14 = 0;
          }
          if (0 < iVar14) {
            puVar5 = local_118;
            if (iVar13 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            lVar19 = 0;
            uVar17 = 0;
            do {
              uVar11 = ((uint)(0x19 < (ushort)puVar5[lVar19] - 0x61) * 0x20 +
                       (uint)(ushort)puVar5[lVar19]) - 0x20;
              uVar16 = (uint)(uVar17 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar17 ^ uVar11) & 0xff) * 4);
              uVar17 = (ulonglong)
                       (uVar16 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar16 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
              lVar19 = lVar19 + 1;
            } while (iVar14 != (int)lVar19);
          }
          plVar6 = (longlong *)FUN_140d07e54(local_b8,uVar17,&local_118);
          iVar13 = (int)plVar6[1];
          *(uint *)(plVar6 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar6 + 0xc) < iVar13 + 1U) {
            FUN_1447a1bd6(plVar6,iVar13);
          }
          lVar19 = *plVar6;
          lVar20 = (longlong)iVar13 * 0x10;
          puVar7 = (undefined8 *)(lVar19 + lVar20);
          *(undefined8 *)(lVar19 + lVar20) = 0;
          uVar11 = puVar15[2];
          pvVar2 = *(void **)puVar15;
          *(uint *)(lVar19 + 8 + lVar20) = uVar11;
          if ((longlong)(int)uVar11 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar7,uVar11,0);
            memcpy((void *)*puVar7,pvVar2,(longlong)(int)uVar11 * 2);
          }
          param_2 = local_160;
          if (local_118 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (pvStack_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 != local_150);
    }
  }
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    local_168 = 0;
  }
  else {
    puVar7 = (undefined8 *)*param_2;
    puVar23 = puVar7 + (longlong)*(int *)(param_2 + 1) * 2;
    local_148 = (longlong *)(local_178 + 0x210);
    local_168 = 0;
    lVar19 = local_178;
    do {
      puVar5 = *(undefined2 **)(lVar19 + 0x1e8);
      if (*(char *)(lVar19 + 0x17a) == '\x01') {
        uVar8 = *(undefined8 *)(lVar19 + 0x220);
        if ((puVar5 != (undefined2 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(puVar5);
        }
        local_118 = puVar5;
        if ((puVar5 != (undefined2 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(puVar5);
        }
        local_198 = param_2;
        FUN_144513e97(&local_108,&local_118,uVar8,puVar7);
        cVar4 = (char)local_108;
        if (pvStack_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar4 == -1) {
          puVar5 = *(undefined2 **)(lVar19 + 0x1e8);
          goto LAB_144513876;
        }
      }
      else {
LAB_144513876:
        local_118 = (undefined2 *)0x0;
        uStack_110 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        pvStack_100 = (void *)0x0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_180 = puVar7;
        if (local_189 == '\0') {
          puVar7 = (undefined8 *)FUN_14943a3b6(puVar5);
          plVar6 = (longlong *)FUN_1493c8322(&local_108,local_11c,&local_11c);
          iVar13 = (int)plVar6[1];
          *(uint *)(plVar6 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar6 + 0xc) < iVar13 + 1U) {
            FUN_1447a1bd6(plVar6,iVar13);
          }
          lVar20 = *plVar6;
          lVar22 = (longlong)iVar13 * 0x10;
          puVar1 = (undefined8 *)(lVar20 + lVar22);
          *(undefined8 *)(lVar20 + lVar22) = 0;
          iVar13 = *(int *)(puVar7 + 1);
          pvVar2 = (void *)*puVar7;
          *(int *)(lVar20 + 8 + lVar22) = iVar13;
          if ((longlong)iVar13 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar13,0);
            memcpy((void *)*puVar1,pvVar2,(longlong)iVar13 * 2);
          }
          FUN_140bee9ec(&local_118);
        }
        else {
          lVar20 = FUN_14943a61e();
          uVar11 = *(uint *)(lVar20 + 0x48);
          local_150 = (uint *)(lVar20 + 0x30);
          if (uVar11 == 0) {
            uVar12 = 1;
            local_188 = 0;
            iVar13 = 0;
            uVar16 = 0;
          }
          else {
            puVar15 = *(uint **)(lVar20 + 0x40);
            if (*(uint **)(lVar20 + 0x40) == (uint *)0x0) {
              puVar15 = local_150;
            }
            uVar16 = *puVar15;
            if (uVar16 == 0) {
              iVar13 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar13 = uVar11 - 1;
              }
              uVar17 = 0;
              uVar12 = (ulonglong)(uint)(iVar13 >> 5);
              if (iVar13 >> 5 < 1) {
                uVar12 = uVar17;
              }
              iVar13 = 0;
              do {
                if (uVar12 == uVar17) goto LAB_144513c3f;
                iVar13 = iVar13 + 0x20;
                uVar16 = puVar15[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar16 == 0);
            }
            else {
              local_188 = 0;
              iVar13 = 0;
              uVar17 = local_188;
            }
            local_188 = uVar17;
            uVar12 = (ulonglong)(-uVar16 & uVar16);
            uVar17 = uVar12 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar16 = (iVar13 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if ((int)uVar11 <= (int)uVar16) {
              uVar16 = uVar11;
            }
          }
          if (uVar16 != uVar11) {
            uVar18 = 0xffffffff;
            local_158 = puVar23;
            local_140 = (ulonglong)uVar11;
            local_138 = lVar20;
            do {
              local_170 = CONCAT44(local_170._4_4_,iVar13);
              lVar19 = *(longlong *)(local_138 + 0x20);
              lVar20 = (longlong)(int)uVar16 * 0x20;
              local_120 = *(undefined4 *)(lVar19 + lVar20);
              plVar6 = (longlong *)FUN_1493c8322(&local_108,local_120,&local_120);
              lVar22 = (longlong)*(int *)(lVar19 + 0x10 + lVar20);
              if (lVar22 != 0) {
                lVar19 = *(longlong *)(lVar19 + 8 + lVar20);
                lVar20 = 0;
                uVar17 = local_130;
                uVar8 = local_128;
                do {
                  local_128 = uVar8;
                  local_130 = uVar17;
                  FUN_1492ef9be(*(undefined8 *)(lVar19 + lVar20),&local_130);
                  iVar13 = (int)plVar6[1];
                  *(uint *)(plVar6 + 1) = iVar13 + 1U;
                  if (*(uint *)((longlong)plVar6 + 0xc) < iVar13 + 1U) {
                    FUN_1447a1bd6(plVar6,iVar13);
                  }
                  lVar3 = *plVar6;
                  lVar21 = (longlong)iVar13 * 0x10;
                  *(undefined8 *)(lVar3 + lVar21) = 0;
                  *(ulonglong *)(lVar3 + lVar21) = local_130;
                  local_130 = 0;
                  uVar17 = local_130;
                  *(undefined4 *)(lVar3 + 8 + lVar21) = (undefined4)local_128;
                  *(undefined4 *)(lVar3 + 0xc + lVar21) = local_128._4_4_;
                  local_128 = 0;
                  uVar8 = local_128;
                  local_128 = 0;
                  local_130 = 0;
                  lVar20 = lVar20 + 8;
                } while (lVar22 * 8 != lVar20);
              }
              uVar18 = uVar18 & ~(uint)uVar12;
              puVar15 = *(uint **)(local_138 + 0x40);
              if (*(uint **)(local_138 + 0x40) == (uint *)0x0) {
                puVar15 = local_150;
              }
              uVar11 = *(uint *)(local_138 + 0x48);
              iVar14 = (int)local_188;
              lVar19 = (longlong)iVar14;
              uVar16 = puVar15[lVar19] & uVar18;
              iVar13 = (int)local_170;
              if (uVar16 == 0) {
                iVar9 = uVar11 + 0x1e;
                if (-1 < (int)(uVar11 - 1)) {
                  iVar9 = uVar11 - 1;
                }
                iVar9 = iVar9 >> 5;
                iVar13 = (int)local_170 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar14) {
                  iVar10 = iVar14;
                }
                if (iVar14 < iVar9) {
                  lVar20 = 0;
                  do {
                    uVar16 = puVar15[lVar19 + lVar20 + 1];
                    if (uVar16 != 0) {
                      local_188 = (ulonglong)(iVar14 + (int)lVar20 + 1);
                      uVar18 = 0xffffffff;
                      goto LAB_144513b8a;
                    }
                    iVar13 = iVar13 + 0x20;
                    lVar20 = lVar20 + 1;
                  } while (iVar10 - lVar19 != lVar20);
                  uVar18 = 0xffffffff;
                  lVar19 = (longlong)iVar10;
                }
                local_188 = lVar19 + 1;
                uVar16 = uVar11;
              }
              else {
LAB_144513b8a:
                uVar12 = (ulonglong)(-uVar16 & uVar16);
                uVar17 = uVar12 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                uVar16 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if ((int)uVar11 <= (int)uVar16) {
                  uVar16 = uVar11;
                }
              }
              lVar19 = local_178;
              puVar23 = local_158;
            } while (uVar16 != (uint)local_140);
          }
        }
LAB_144513c3f:
        param_2 = local_160;
        if (local_d4 < (int)pvStack_100) {
          if ((*(char *)(lVar19 + 0x179) == '\x01') && (*(char *)(lVar19 + 0x17a) == '\x01')) {
            iVar13 = *(int *)(local_180 + 1);
            uVar17 = 0;
            uVar11 = iVar13 - 1;
            if (iVar13 == 0) {
              uVar11 = 0;
            }
            if (0 < (int)uVar11) {
              puVar5 = &DAT_149dfb77a;
              if (iVar13 != 0) {
                puVar5 = (undefined2 *)*local_180;
              }
              local_188 = (ulonglong)uVar11;
              lVar20 = 0;
              uVar17 = 0;
              do {
                uVar16 = ((uint)(0x19 < (ushort)puVar5[lVar20] - 0x61) * 0x20 +
                         (uint)(ushort)puVar5[lVar20]) - 0x20;
                uVar18 = (uint)(uVar17 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar17 ^ uVar16) & 0xff) * 4)
                ;
                uVar17 = (ulonglong)
                         (uVar18 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar18 & 0xff ^ uVar16 >> 8 & 0xff) * 4));
                lVar20 = lVar20 + 1;
              } while (uVar11 != (uint)lVar20);
            }
            iVar13 = FUN_140d080c0(local_b8,uVar17,local_180);
            lVar20 = (longlong)iVar13 * 0x28 + local_b8[0];
            if (lVar20 != 0 && iVar13 != -1) {
              uVar8 = FUN_1493c8322(&local_108,local_11c,&local_11c);
              FUN_140b7fa3a(uVar8,lVar20 + 0x10);
            }
          }
          uVar8 = FUN_14943a67c(lVar19,&local_108,&local_118);
          iVar13 = *(int *)(lVar19 + 0x218);
          *(uint *)(lVar19 + 0x218) = iVar13 + 1U;
          if (*(uint *)(lVar19 + 0x21c) < iVar13 + 1U) {
            FUN_1494425a6(local_148,iVar13);
          }
          lVar20 = *local_148;
          *(undefined8 *)(lVar20 + (longlong)iVar13 * 8) = uVar8;
          local_168 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
        }
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1493c4f08(&local_108);
        FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
        puVar7 = local_180;
        if (local_118 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar23);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(local_b8);
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_168 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144513e97 FUN_144513e97 body=2356 status=ok
// SIG undefined FUN_144513e97(void)

undefined1 *
FUN_144513e97(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined2 *puVar4;
  void *_Dst;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  uint uVar9;
  undefined1 uVar10;
  ushort uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_138 [40];
  undefined1 *local_110;
  undefined8 local_108;
  longlong *local_100;
  void *local_f8;
  ulonglong uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  int local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = *param_2;
  local_100 = param_2;
  if ((local_98 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_110 = param_1;
  FUN_14943a1bd(&local_90,&local_98,param_3);
  lVar17 = (longlong)local_88;
  puVar4 = local_90;
  if (lVar17 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  lVar6 = 4;
  lVar19 = 0;
  while( true ) {
    uVar20 = *(ushort *)((longlong)puVar4 + lVar19);
    uVar7 = (ulonglong)uVar20;
    uVar11 = *(ushort *)((longlong)&DAT_14bcca27c + lVar19);
    if (uVar20 != uVar11) break;
    uVar10 = 0;
    if ((uVar20 == 0) || (lVar6 == 1)) goto LAB_144513f86;
LAB_144513f50:
    lVar6 = lVar6 + -1;
    lVar19 = lVar19 + 2;
  }
  if ((uVar11 | uVar20) < 0x80) {
    uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar18 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
    if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar18]) goto LAB_144514347;
    if (lVar6 != 1) goto LAB_144513f50;
  }
  else {
LAB_144514347:
    if (uVar20 != uVar11) {
      lVar6 = 4;
      lVar19 = 0;
      goto LAB_144514362;
    }
  }
  uVar10 = 0;
LAB_144513f86:
  uVar14 = 0xffffffff;
  if (local_88 != 0) {
    lVar6 = lVar17 * 2;
    lVar19 = 0;
    do {
      if (local_90[lVar19] == 0x5f) {
        uVar14 = (uint)lVar19;
        break;
      }
      lVar19 = lVar19 + 1;
      lVar6 = lVar6 + -2;
    } while (lVar6 != 0);
  }
  uVar7 = lVar17 * 2;
  do {
    if (uVar7 == 0) {
      uVar9 = 0xffffffff;
      goto LAB_144513fcc;
    }
    uVar18 = uVar7 - 2;
    lVar17 = uVar7 - 2;
    uVar7 = uVar18;
  } while (*(short *)((longlong)local_90 + lVar17) != 0x5f);
  uVar9 = (uint)(uVar18 >> 1);
LAB_144513fcc:
  uVar12 = uVar14 + 1;
  uVar16 = local_88 - 1;
  if (local_88 == 0) {
    uVar16 = 0;
  }
  uVar5 = uVar16;
  if ((int)uVar12 < (int)uVar16) {
    uVar5 = uVar12;
  }
  uVar7 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  FUN_14006620a(&local_c8,puVar4 + uVar7,uVar16 - (int)uVar7);
  pvVar8 = local_c8;
  local_b8 = (void *)0x0;
  local_b0 = local_c0;
  if ((longlong)local_c0 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_c0,0);
    memcpy(local_b8,pvVar8,(longlong)local_c0 * 2);
  }
  local_a8 = local_100;
  local_108 = param_3;
  uStack_a0 = param_3;
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8(local_c8);
  }
  pvVar8 = local_b8;
  local_80 = (void *)0x0;
  lVar17 = (longlong)local_b0;
  local_78 = local_b0;
  if (lVar17 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_b0,0);
    memcpy(local_80,pvVar8,lVar17 * 2);
  }
  local_70 = (undefined4)local_a8;
  uStack_6c = local_a8._4_4_;
  uStack_68 = (undefined4)uStack_a0;
  uStack_64 = uStack_a0._4_4_;
  puVar21 = (undefined8 *)*param_5;
  if ((longlong)(int)param_5[1] == 0) {
    bVar1 = 1;
  }
  else {
    puVar22 = puVar21 + (longlong)(int)param_5[1] * 2;
    puVar15 = puVar21;
    do {
      uVar2 = CONCAT44(uStack_64,uStack_68);
      local_60 = *(longlong *)CONCAT44(uStack_6c,local_70);
      if ((local_60 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_14943a1bd(&local_58,&local_60,uVar2,puVar15);
      if (local_78 == local_50) {
        bVar23 = true;
        if (1 < local_78) {
          lVar17 = 0;
          while( true ) {
            uVar20 = *(ushort *)((longlong)local_80 + lVar17);
            uVar16 = (uint)uVar20;
            uVar11 = *(ushort *)(local_58 + lVar17);
            uVar5 = (uint)uVar11;
            if (uVar20 != uVar11) {
              if ((uVar11 | uVar20) < 0x80) {
                uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar11]) goto LAB_144514195;
              }
              iVar3 = uVar16 - uVar5;
              goto LAB_1445141da;
            }
            if (uVar20 == 0) break;
LAB_144514195:
            lVar17 = lVar17 + 2;
          }
          iVar3 = 0;
LAB_1445141da:
          bVar23 = iVar3 == 0;
        }
      }
      else {
        bVar23 = local_50 + local_78 == 1;
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      puVar21 = puVar15;
    } while ((!bVar23) && (puVar15 = puVar15 + 2, puVar21 = puVar22, puVar15 != puVar22));
    bVar1 = bVar23 ^ 1;
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = local_108;
  puVar13 = local_110;
  if ((bool)(bVar1 | puVar21 == (undefined8 *)0x0)) {
    if (uVar14 != uVar9) {
      if ((int)(uVar9 + ~uVar14) < 0) {
        local_f8 = (void *)0x0;
        uStack_f0 = 0;
        local_e0 = 0;
LAB_1445144c8:
        local_e8 = (void *)0x0;
        local_dc = 0;
      }
      else {
        uVar16 = local_88 - 1;
        if (local_88 == 0) {
          uVar16 = 0;
        }
        uVar5 = uVar16;
        if ((int)uVar12 < (int)uVar16) {
          uVar5 = uVar12;
        }
        uVar7 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar7 = 0;
        }
        uVar18 = (longlong)(int)uVar12 + (ulonglong)(uVar9 + ~uVar14);
        if ((longlong)(int)uVar16 <= (longlong)uVar18) {
          uVar18 = (longlong)(int)uVar16;
        }
        if ((longlong)uVar18 < (longlong)uVar7) {
          uVar18 = uVar7;
        }
        puVar4 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar4 = local_90;
        }
        FUN_14006620a(&local_f8,puVar4 + uVar7,(int)uVar18 - (int)uVar7);
        pvVar8 = local_f8;
        lVar17 = (longlong)(int)uStack_f0;
        local_e8 = (void *)0x0;
        local_e0 = (int)uStack_f0;
        if (lVar17 == 0) goto LAB_1445144c8;
        FUN_1446dd670(&local_e8,uStack_f0 & 0xffffffff,0);
        memcpy(local_e8,pvVar8,lVar17 * 2);
      }
      local_d8 = local_100;
      uStack_d0 = uVar2;
      if (local_f8 != (void *)0x0) {
        FUN_1400020a8(local_f8);
      }
      pvVar8 = local_e8;
      local_80 = (void *)0x0;
      lVar17 = (longlong)local_e0;
      local_78 = local_e0;
      if (lVar17 == 0) {
        local_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_e0,0);
        memcpy(local_80,pvVar8,lVar17 * 2);
      }
      local_70 = (undefined4)local_d8;
      uStack_6c = local_d8._4_4_;
      uStack_68 = (undefined4)uStack_d0;
      uStack_64 = uStack_d0._4_4_;
      puVar21 = (undefined8 *)*param_5;
      if ((longlong)(int)param_5[1] == 0) {
        bVar1 = 1;
      }
      else {
        puVar22 = puVar21 + (longlong)(int)param_5[1] * 2;
        puVar15 = puVar21;
        do {
          uVar2 = CONCAT44(uStack_64,uStack_68);
          local_60 = *(longlong *)CONCAT44(uStack_6c,local_70);
          if ((local_60 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_14943a1bd(&local_58,&local_60,uVar2,puVar15);
          if (local_78 == local_50) {
            bVar23 = true;
            if (1 < local_78) {
              lVar17 = 0;
              while( true ) {
                uVar20 = *(ushort *)((longlong)local_80 + lVar17);
                uVar14 = (uint)uVar20;
                uVar11 = *(ushort *)(local_58 + lVar17);
                uVar9 = (uint)uVar11;
                if (uVar20 != uVar11) {
                  if ((uVar11 | uVar20) < 0x80) {
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar11]) goto LAB_144514600;
                  }
                  iVar3 = uVar14 - uVar9;
                  goto LAB_144514645;
                }
                if (uVar20 == 0) break;
LAB_144514600:
                lVar17 = lVar17 + 2;
              }
              iVar3 = 0;
LAB_144514645:
              bVar23 = iVar3 == 0;
            }
          }
          else {
            bVar23 = local_50 + local_78 == 1;
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          puVar21 = puVar15;
        } while ((!bVar23) && (puVar15 = puVar15 + 2, puVar21 = puVar22, puVar15 != puVar22));
        bVar1 = bVar23 ^ 1;
      }
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar13 = local_110;
      if (!(bool)(bVar1 | puVar21 == (undefined8 *)0x0)) {
        *local_110 = uVar10;
        *(undefined8 *)(local_110 + 8) = 0;
        iVar3 = *(int *)(puVar21 + 1);
        lVar17 = (longlong)iVar3;
        pvVar8 = (void *)*puVar21;
        *(int *)(local_110 + 0x10) = iVar3;
        if (lVar17 == 0) goto LAB_1445146f4;
        puVar21 = (undefined8 *)(local_110 + 8);
        FUN_1446dd670(puVar21,iVar3,0);
        _Dst = (void *)*puVar21;
        goto LAB_14451433d;
      }
    }
LAB_14451469f:
    *local_110 = 0xff;
    *(undefined8 *)(local_110 + 8) = 0;
    *(undefined8 *)(local_110 + 0x10) = 0;
    puVar13 = local_110;
  }
  else {
    *local_110 = uVar10;
    *(undefined8 *)(local_110 + 8) = 0;
    iVar3 = *(int *)(puVar21 + 1);
    lVar17 = (longlong)iVar3;
    pvVar8 = (void *)*puVar21;
    *(int *)(local_110 + 0x10) = iVar3;
    if (lVar17 == 0) {
LAB_1445146f4:
      *(undefined4 *)(local_110 + 0x14) = 0;
      puVar13 = local_110;
      goto LAB_1445146fb;
    }
    puVar21 = (undefined8 *)(local_110 + 8);
    FUN_1446dd670(puVar21,iVar3,0);
    _Dst = (void *)*puVar21;
LAB_14451433d:
    memcpy(_Dst,pvVar8,lVar17 * 2);
  }
LAB_1445146fb:
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
LAB_144514362:
  uVar20 = *(ushort *)((longlong)puVar4 + lVar19);
  uVar7 = (ulonglong)uVar20;
  uVar11 = *(ushort *)((longlong)&DAT_14bcca286 + lVar19);
  if (uVar20 != uVar11) {
    if ((uVar11 | uVar20) < 0x80) {
      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar18 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar18]) {
        if (lVar6 != 1) goto LAB_144514387;
        uVar10 = 6;
        goto LAB_144513f86;
      }
    }
    uVar10 = 6;
    if (uVar20 != uVar11) {
      lVar6 = 6;
      lVar19 = 0;
      goto LAB_1445143d9;
    }
    goto LAB_144513f86;
  }
  uVar10 = 6;
  if ((uVar20 == 0) || (lVar6 == 1)) goto LAB_144513f86;
LAB_144514387:
  lVar6 = lVar6 + -1;
  lVar19 = lVar19 + 2;
  goto LAB_144514362;
LAB_1445143d9:
  uVar20 = *(ushort *)((longlong)puVar4 + lVar19);
  uVar7 = (ulonglong)uVar20;
  uVar11 = *(ushort *)((longlong)&DAT_14bcca290 + lVar19);
  if (uVar20 != uVar11) {
    if ((uVar11 | uVar20) < 0x80) {
      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar18 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar18]) goto LAB_1445143f2;
    }
    if (uVar20 != uVar11) {
      lVar6 = 4;
      lVar19 = 0;
      goto LAB_144514440;
    }
    goto LAB_144513f86;
  }
  if (uVar20 == 0) goto LAB_144513f86;
LAB_1445143f2:
  lVar6 = lVar6 + -1;
  if (lVar6 == 0) goto LAB_144513f86;
  lVar19 = lVar19 + 2;
  goto LAB_1445143d9;
LAB_144514440:
  uVar20 = *(ushort *)((longlong)puVar4 + lVar19);
  uVar7 = (ulonglong)uVar20;
  uVar11 = *(ushort *)((longlong)&DAT_14bcca29e + lVar19);
  if (uVar20 != uVar11) {
    if ((uVar11 | uVar20) < 0x80) {
      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar18 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar18]) {
        if (lVar6 != 1) goto LAB_144514468;
        uVar10 = 1;
        goto LAB_144513f86;
      }
    }
    if (uVar20 != uVar11) {
      lVar6 = 4;
      lVar19 = 0;
      goto LAB_144514755;
    }
    uVar10 = 1;
    goto LAB_144513f86;
  }
  uVar10 = 1;
  if ((uVar20 == 0) || (uVar10 = 1, lVar6 == 1)) goto LAB_144513f86;
LAB_144514468:
  lVar6 = lVar6 + -1;
  lVar19 = lVar19 + 2;
  goto LAB_144514440;
LAB_144514755:
  uVar20 = *(ushort *)((longlong)puVar4 + lVar19);
  uVar7 = (ulonglong)uVar20;
  uVar11 = *(ushort *)((longlong)&DAT_14bcca2a8 + lVar19);
  if (uVar20 != uVar11) {
    if ((uVar11 | uVar20) < 0x80) {
      uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar18 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar18]) {
        if (lVar6 != 1) goto LAB_144514779;
        uVar10 = 2;
        goto LAB_144513f86;
      }
    }
    if (uVar20 != uVar11) goto LAB_14451469f;
    uVar10 = 2;
    goto LAB_144513f86;
  }
  uVar10 = 2;
  if ((uVar20 == 0) || (uVar10 = 2, lVar6 == 1)) goto LAB_144513f86;
LAB_144514779:
  lVar6 = lVar6 + -1;
  lVar19 = lVar19 + 2;
  goto LAB_144514755;
}



// FUNCTION 1445147cc FUN_1445147cc body=587 status=ok
// SIG undefined FUN_1445147cc(void)

void FUN_1445147cc(void *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  ulonglong uStack_60;
  code *local_50;
  void **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_1445147ef;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)((longlong)param_1 + 0x178) = param_2;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  plVar5 = (longlong *)((longlong)param_1 + 0x180);
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != iVar1) {
    FUN_14940333e(plVar5);
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar8 = *param_3;
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar8 + lVar7);
      iVar1 = *(int *)((longlong)param_1 + 0x188);
      *(uint *)((longlong)param_1 + 0x188) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x18c) < iVar1 + 1U) {
        FUN_14940339e(plVar5,iVar1);
      }
      *(undefined8 *)(*plVar5 + (longlong)iVar1 * 8) = uVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  local_48 = &local_68;
  local_50 = FUN_144517994;
  local_68 = param_1;
  FUN_1492f3f94(*(undefined8 *)((longlong)param_1 + 0x178));
  if (*(char *)((longlong)param_1 + 0x158) == '\0') goto LAB_1445147ef;
  iVar1 = *(int *)((longlong)param_1 + 0x198);
  if ((longlong)iVar1 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)((longlong)param_1 + 400);
    lVar8 = 0;
    do {
      plVar5 = (longlong *)FUN_14943c7a0(param_1,*(undefined8 *)(lVar4 + lVar8));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  pvVar6 = (void *)FUN_1492ebf28(param_1);
  if (pvVar6 == param_1) {
    local_68 = (void *)0x0;
    uVar2 = *(uint *)((longlong)param_1 + 0x30);
    pvVar6 = *(void **)((longlong)param_1 + 0x28);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_60 = (ulonglong)uVar2;
      goto LAB_1445149dc;
    }
    FUN_1446dd670(&local_68,uVar2,0);
    memcpy(local_68,pvVar6,(longlong)(int)uVar2 * 2);
    if ((int)uStack_60 < 2) goto LAB_1445149dc;
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
LAB_1445149dc:
    pvVar6 = (void *)FUN_1492ebf28(param_1);
    if (pvVar6 == param_1) {
      iVar1 = *(int *)((longlong)param_1 + 0x168) + -1;
      if (*(int *)((longlong)param_1 + 0x168) == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(&local_68,*(undefined8 *)((longlong)param_1 + 0x160),iVar1);
    }
  }
  if ((((*(int *)((longlong)param_1 + 0x198) == 1) &&
       (pvVar6 = (void *)FUN_1492ebf28(param_1), pvVar6 == param_1)) && (plVar5 != (longlong *)0x0))
     && (1 < (int)uStack_60)) {
    (**(code **)(*plVar5 + 0x2d0))(plVar5,&local_68);
    FUN_1492f027e(plVar5,&local_68);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1445147ef:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445157c7 FUN_1445157c7 body=47 status=ok
// SIG undefined FUN_1445157c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445157c7(void)

{
  _DAT_14cc16b40 = 0;
  if (DAT_14cc16b38 != 0) {
    FUN_1400020a8();
  }
  FUN_145ec2b52(&DAT_14cc16af8);
  return;
}



// FUNCTION 1445157f6 FUN_1445157f6 body=49 status=ok
// SIG undefined FUN_1445157f6(void)

void FUN_1445157f6(void)

{
  FUN_1447a1747(DAT_14cc16b48,DAT_14cc16b50);
  if (DAT_14cc16b48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144515828 FUN_144515828 body=313 status=ok
// SIG undefined FUN_144515828(void)

void FUN_144515828(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14482b35e(*param_1,local_38,param_2,0);
  uVar1 = *param_1;
  FUN_140474144(local_38,param_2,&DAT_14cc15e98);
  FUN_140e830ae(uVar1,local_3c,local_38,0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = *param_1;
  FUN_140474144(local_38,param_2,&DAT_14cc15ea8);
  FUN_140e830ae(uVar1,local_3c,local_38,0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = *param_1;
  FUN_140474144(local_38,param_2,&DAT_14cc15e48);
  FUN_140e830ae(uVar1,local_3c,local_38,0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = *param_1;
  FUN_140474144(local_38,param_2,&DAT_14cc15eb8);
  FUN_140e830ae(uVar1,local_3c,local_38,0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144515962 FUN_144515962 body=2645 status=ok
// SIG undefined FUN_144515962(void)

void FUN_144515962(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  undefined2 **ppuVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  code *local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  undefined2 *local_f8;
  ulonglong uStack_f0;
  undefined2 *local_e8;
  ulonglong uStack_e0;
  undefined8 *local_d8;
  ulonglong uStack_d0;
  undefined2 **local_c8;
  undefined8 *puStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_150 = param_2;
  local_148 = param_3;
  FUN_1492f0b28(param_2[5],&local_d8);
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)(int)uStack_d0 != 0) {
    lVar18 = (longlong)(int)uStack_d0 << 4;
    puVar20 = local_d8;
    local_140 = param_1;
    do {
      local_c8 = (undefined2 **)0x0;
      uVar15 = *(uint *)(puVar20 + 1);
      pvVar3 = (void *)*puVar20;
      puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,uVar15);
      if ((longlong)(int)uVar15 == 0) {
        puStack_c0 = (undefined8 *)(ulonglong)uVar15;
      }
      else {
        FUN_1446dd670(&local_c8,uVar15,0);
        memcpy(local_c8,pvVar3,(longlong)(int)uVar15 * 2);
      }
      pwVar13 = L"";
      if (DAT_14cc15e20 != 0) {
        pwVar13 = DAT_14cc15e18;
      }
      if (pwVar13 == (wchar_t *)0x0) {
        bVar23 = false;
      }
      else {
        sVar7 = wcslen(pwVar13);
        local_1a0 = 0xffffffff;
        local_1a8 = 0;
        iVar6 = FUN_1447ee042(&local_c8,pwVar13,sVar7 & 0xffffffff,1);
        bVar23 = iVar6 != -1;
      }
      if (local_c8 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      if (bVar23) {
        local_f8 = (undefined2 *)0x0;
        uVar15 = *(uint *)(puVar20 + 1);
        pvVar3 = (void *)*puVar20;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar15);
        if ((longlong)(int)uVar15 == 0) {
          uStack_f0 = (ulonglong)uVar15;
        }
        else {
          FUN_1446dd670(&local_f8,uVar15,0);
          memcpy(local_f8,pvVar3,(longlong)(int)uVar15 * 2);
        }
        pwVar13 = L"";
        if (DAT_14cc15e20 != 0) {
          pwVar13 = DAT_14cc15e18;
        }
        FUN_1448097c4(&local_f8,pwVar13,&DAT_149dfb77a,0);
        local_e8 = local_f8;
        uStack_e0 = uStack_f0;
        local_f8 = (undefined2 *)0x0;
        uStack_f0 = 0;
        local_c8 = &local_e8;
        puStack_c0 = puVar20;
        FUN_149442738(&local_b8,local_108);
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar17 = local_140;
      pwVar13 = DAT_14cc15e18;
      puVar20 = puVar20 + 2;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
    if ((int)uStack_b0 != local_84) {
      local_c8 = (undefined2 **)0x0;
      puStack_c0 = (undefined8 *)0x0;
      lVar18 = (longlong)DAT_14cc15e20;
      local_f8 = (undefined2 *)0x0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,DAT_14cc15e20);
      FUN_1446dd670(&local_f8,DAT_14cc15e20 + (uint)(lVar18 == 0) + 0x10,0);
      if (lVar18 != 0) {
        memcpy(local_f8,pwVar13,lVar18 * 2);
      }
      FUN_1400020e8(&local_f8,L"ParentIdentifier",0x10);
      puVar14 = local_f8;
      if ((int)uStack_f0 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_140056680(&local_e8,puVar14);
      cVar5 = FUN_1492ef716(local_150,&local_e8);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar5 != '\0') {
        FUN_140056680(&local_e8,L"ParentIdentifier");
        FUN_149442d70(&local_b8);
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_e8 = (undefined2 *)0x0;
        uStack_e0 = 0;
        uVar16 = 0;
        iVar6 = (int)puStack_c0 + -1;
        if ((int)puStack_c0 == 0) {
          iVar6 = 0;
        }
        if (0 < iVar6) {
          ppuVar8 = local_c8;
          if ((int)puStack_c0 == 0) {
            ppuVar8 = (undefined2 **)&DAT_149dfb77a;
          }
          lVar18 = 0;
          uVar16 = 0;
          do {
            uVar2 = *(ushort *)((longlong)ppuVar8 + lVar18 * 2);
            uVar15 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
            uVar19 = (uint)(uVar16 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar15) & 0xff) * 4);
            uVar16 = (ulonglong)
                     (uVar19 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar15 >> 8 & 0xff) * 4)
                     );
            lVar18 = lVar18 + 1;
          } while (iVar6 != (int)lVar18);
        }
        iVar6 = FUN_1490d10fe((longlong *)(lVar17 + 0x38),uVar16,&local_c8);
        if ((iVar6 != -1) &&
           (lVar18 = (longlong)iVar6 * 0x38 + *(longlong *)(lVar17 + 0x38),
           plVar12 = (longlong *)(lVar18 + 0x10), plVar12 != (longlong *)0x0 && lVar18 != 0)) {
          if (*plVar12 == 0) {
            local_f8 = (undefined2 *)0x0;
            uStack_f0 = 0;
          }
          else {
            FUN_140ba791a(plVar12,&local_f8);
          }
          if (local_e8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_e8 = local_f8;
          uStack_e0 = uStack_f0;
          FUN_1492ef9be(local_150,local_108);
          FUN_140b1283a(&local_f8,L"Factory_",local_108);
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1492ee7cc(local_150,local_108);
          lVar18 = local_148;
          FUN_1444ba64e(local_148,&local_f8,local_108,3);
          FUN_14938bd94(lVar18,&local_e8);
          lVar18 = FUN_146153af4();
          if ((*(longlong **)(lVar18 + 0x350) == (longlong *)0x0) ||
             (cVar5 = (**(code **)(**(longlong **)(lVar18 + 0x350) + 0x2a8))(), cVar5 == '\0')) {
            lVar18 = FUN_14129edf0();
          }
          else {
            lVar18 = DAT_14caec470;
            if (DAT_14caec470 == 0) {
              local_170 = &local_118;
              local_118 = FUN_1417df956;
              local_160 = FUN_14081d0ea;
              local_168 = &LAB_1463eaa20;
              local_178 = &LAB_147bbd9ea;
              local_180 = FUN_1401cf6d7;
              local_188 = L"Engine";
              local_190 = 0;
              local_198 = 0x10000000;
              local_1a0 = 8;
              local_1a8 = 0x330;
              FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                            FUN_1463eb22e);
              lVar18 = DAT_14caec470;
            }
          }
          local_118 = (code *)0x0;
          uStack_110 = 0;
          uVar16 = 0;
          FUN_1401031ac(lVar18,0,&local_118);
          FUN_14938bc3a(local_148,&local_118);
          if (local_118 != (code *)0x0) {
            FUN_1400020a8();
          }
          iVar4 = local_90;
          uVar21 = 1;
          iVar22 = 0;
          iVar6 = 0;
          if (local_90 != 0) {
            puVar9 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar9 = local_a8;
            }
            uVar15 = *puVar9;
            if (uVar15 == 0) {
              iVar6 = local_90 + 0x1e;
              if (-1 < local_90 + -1) {
                iVar6 = local_90 + -1;
              }
              uVar16 = 0;
              uVar21 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar21 = uVar16;
              }
              iVar22 = 0;
              do {
                if (uVar21 == uVar16) goto LAB_14451604b;
                iVar22 = iVar22 + 0x20;
                uVar15 = puVar9[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar15 == 0);
            }
            else {
              uVar16 = 0;
            }
            uVar21 = (ulonglong)(-uVar15 & uVar15);
            uVar1 = uVar21 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar6 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (local_90 <= iVar6) {
              iVar6 = local_90;
            }
          }
          if (iVar6 != local_90) {
            local_140 = local_148 + 0x60;
            uVar15 = 0xffffffff;
            do {
              lVar18 = local_b8 + (longlong)iVar6 * 0x28;
              lVar17 = local_b8 + (longlong)iVar6 * 0x28 + 0x10;
              iVar6 = (**(code **)(*local_150 + 0x2b8))(local_150,lVar17);
              FUN_14933bd24(&local_118,lVar18);
              if (iVar6 < 0xf) {
                if (iVar6 == 1) {
                  cVar5 = FUN_1492ee61c(local_150,lVar17,local_128);
                  if (cVar5 != '\0') {
                    FUN_1492ed6b4(local_148,&local_118,local_128);
                  }
                }
                else if ((iVar6 == 8) &&
                        (cVar5 = FUN_1492eeb9c(local_150,lVar17,local_128), cVar5 != '\0')) {
                  FUN_1492eda3c(local_148,&local_118,local_128);
                }
              }
              else if (iVar6 == 0xf) {
                cVar5 = FUN_1492ef232(local_150,lVar17,local_128);
                if (cVar5 != '\0') {
                  FUN_1492edf7c(local_148,&local_118,local_128);
                }
              }
              else if (iVar6 == 0x12) {
                local_128[0] = 0;
                local_128[1] = 0;
                cVar5 = FUN_1492ef716(local_150,lVar17,local_128);
                if (cVar5 != '\0') {
                  FUN_140b1283a(local_138,L"Factory_",local_128);
                  FUN_1492ee142(local_148,&local_118,local_138);
                  FUN_1444bb06c(local_140,local_138);
                  if (local_138[0] != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_128[0] != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_118 != (code *)0x0) {
                FUN_1400020a8();
              }
              uVar15 = uVar15 & ~(uint)uVar21;
              puVar9 = local_98;
              if (local_98 == (uint *)0x0) {
                puVar9 = local_a8;
              }
              iVar6 = (int)uVar16;
              lVar18 = (longlong)iVar6;
              uVar19 = puVar9[lVar18] & uVar15;
              if (uVar19 == 0) {
                iVar10 = local_90 + 0x1e;
                if (-1 < local_90 + -1) {
                  iVar10 = local_90 + -1;
                }
                iVar10 = iVar10 >> 5;
                iVar22 = iVar22 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar6) {
                  iVar11 = iVar6;
                }
                if (iVar6 < iVar10) {
                  lVar17 = 0;
                  do {
                    uVar19 = puVar9[lVar18 + lVar17 + 1];
                    if (uVar19 != 0) {
                      uVar16 = (ulonglong)(iVar6 + (int)lVar17 + 1);
                      uVar15 = 0xffffffff;
                      goto LAB_144516370;
                    }
                    iVar22 = iVar22 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar11 - lVar18 != lVar17);
                  uVar15 = 0xffffffff;
                  iVar6 = iVar11;
                }
                uVar16 = (ulonglong)(iVar6 + 1);
                iVar6 = local_90;
              }
              else {
LAB_144516370:
                uVar21 = (ulonglong)(-uVar19 & uVar19);
                uVar1 = uVar21 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar6 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (local_90 <= iVar6) {
                  iVar6 = local_90;
                }
              }
            } while (iVar6 != iVar4);
          }
LAB_14451604b:
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          if (local_f8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_c8 != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_149440bda(&local_b8);
  FUN_149307011(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445163b8 FUN_1445163b8 body=100 status=ok
// SIG undefined FUN_1445163b8(void)

void FUN_1445163b8(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1492ebe2c();
  FUN_14943cdd8(*(undefined8 *)(param_1 + 0x158),&local_20);
  FUN_1447a1747(local_20,local_18);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451641d FUN_14451641d body=41 status=ok
// SIG undefined FUN_14451641d(void)

void FUN_14451641d(void)

{
  DAT_14cc16bf8 = 0;
  if (DAT_14cc16bf0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b4e08();
  return;
}



// FUNCTION 144516446 FUN_144516446 body=2141 status=ok
// SIG undefined FUN_144516446(void)

void FUN_144516446(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auStack_a8 [36];
  uint local_84;
  uint *local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1492ebe2c();
  lVar3 = *(longlong *)(param_1 + 0x148);
  puVar8 = (uint *)(lVar3 + 0x48);
  iVar2 = *(int *)(lVar3 + 0x60);
  if (iVar2 == 0) {
    uVar17 = 1;
    iVar15 = 0;
    uVar19 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar3 + 0x58);
    if (*(uint **)(lVar3 + 0x58) == (uint *)0x0) {
      puVar7 = puVar8;
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_14451666a;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      iVar15 = 0;
      uVar19 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar16 = 0xffffffff;
    local_84 = CONCAT31(local_84._1_3_,1);
    local_80 = puVar8;
    do {
      plVar14 = (longlong *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar5 * 0x30 + 8);
      lVar6 = FUN_140007850(plVar14);
      if (lVar6 == 0) {
        local_78[2] = *plVar14;
        if (local_78[2] == 0) {
          local_78[0] = 0;
          local_78[1] = 0;
        }
        else {
          FUN_1400021e4(local_78 + 2,local_78);
        }
        bVar20 = 0;
        cVar4 = FUN_14166d522(local_78,0,1);
        if (cVar4 != '\0') {
          lVar6 = FUN_140081d40(plVar14,0);
          bVar20 = lVar6 != 0 & (byte)local_84;
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        local_84 = CONCAT31(local_84._1_3_,bVar20);
        puVar8 = local_80;
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar7 = *(uint **)(lVar3 + 0x58);
      if (*(uint **)(lVar3 + 0x58) == (uint *)0x0) {
        puVar7 = puVar8;
      }
      iVar11 = *(int *)(lVar3 + 0x60);
      iVar5 = (int)uVar19;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar7[lVar6] & uVar16;
      if (uVar12 == 0) {
        iVar9 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar9 = iVar11 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar18 = 0;
          do {
            uVar12 = puVar7[lVar18 + lVar6 + 1];
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_144516621;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar6 != lVar18);
          uVar16 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        puVar8 = local_80;
        iVar5 = iVar11;
      }
      else {
LAB_144516621:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar17 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar5) {
          iVar5 = iVar11;
        }
      }
    } while (iVar5 != iVar2);
    if ((local_84 & 1) == 0) goto LAB_144516b02;
  }
LAB_14451666a:
  puVar8 = (uint *)(lVar3 + 0x98);
  iVar2 = *(int *)(lVar3 + 0xb0);
  if (iVar2 == 0) {
    uVar19 = 0;
    uVar17 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar3 + 0xa8);
    if (*(uint **)(lVar3 + 0xa8) == (uint *)0x0) {
      puVar7 = puVar8;
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_14451686d;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar16 = 0xffffffff;
    local_84 = CONCAT31(local_84._1_3_,1);
    local_80 = puVar8;
    do {
      plVar14 = (longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar5 * 0x30 + 8);
      lVar6 = FUN_140007850(plVar14);
      if (lVar6 == 0) {
        local_78[2] = *plVar14;
        if (local_78[2] == 0) {
          local_78[0] = 0;
          local_78[1] = 0;
        }
        else {
          FUN_1400021e4(local_78 + 2,local_78);
        }
        bVar20 = 0;
        cVar4 = FUN_14166d522(local_78,0,1);
        if (cVar4 != '\0') {
          lVar6 = FUN_140081d40(plVar14,0);
          bVar20 = lVar6 != 0 & (byte)local_84;
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        local_84 = CONCAT31(local_84._1_3_,bVar20);
        puVar8 = local_80;
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar7 = *(uint **)(lVar3 + 0xa8);
      if (*(uint **)(lVar3 + 0xa8) == (uint *)0x0) {
        puVar7 = puVar8;
      }
      iVar11 = *(int *)(lVar3 + 0xb0);
      iVar5 = (int)uVar19;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar7[lVar6] & uVar16;
      if (uVar12 == 0) {
        iVar9 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar9 = iVar11 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar18 = 0;
          do {
            uVar12 = puVar7[lVar18 + lVar6 + 1];
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_144516824;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar6 != lVar18);
          uVar16 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        puVar8 = local_80;
        iVar5 = iVar11;
      }
      else {
LAB_144516824:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar17 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar5) {
          iVar5 = iVar11;
        }
      }
    } while (iVar5 != iVar2);
    if ((local_84 & 1) == 0) goto LAB_144516b02;
  }
LAB_14451686d:
  puVar8 = (uint *)(lVar3 + 0xe8);
  iVar2 = *(int *)(lVar3 + 0x100);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar3 + 0xf8);
    if (*(uint **)(lVar3 + 0xf8) == (uint *)0x0) {
      puVar7 = puVar8;
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_144516a70;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar16 = 0xffffffff;
    local_84 = CONCAT31(local_84._1_3_,1);
    local_80 = puVar8;
    do {
      plVar14 = (longlong *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar5 * 0x30 + 8);
      lVar6 = FUN_140007850(plVar14);
      if (lVar6 == 0) {
        local_78[2] = *plVar14;
        if (local_78[2] == 0) {
          local_78[0] = 0;
          local_78[1] = 0;
        }
        else {
          FUN_1400021e4(local_78 + 2,local_78);
        }
        bVar20 = 0;
        cVar4 = FUN_14166d522(local_78,0,1);
        if (cVar4 != '\0') {
          lVar6 = FUN_140081d40(plVar14,0);
          bVar20 = lVar6 != 0 & (byte)local_84;
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        local_84 = CONCAT31(local_84._1_3_,bVar20);
        puVar8 = local_80;
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar7 = *(uint **)(lVar3 + 0xf8);
      if (*(uint **)(lVar3 + 0xf8) == (uint *)0x0) {
        puVar7 = puVar8;
      }
      iVar11 = *(int *)(lVar3 + 0x100);
      iVar5 = (int)uVar19;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar7[lVar6] & uVar16;
      if (uVar12 == 0) {
        iVar9 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar9 = iVar11 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar18 = 0;
          do {
            uVar12 = puVar7[lVar18 + lVar6 + 1];
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_144516a27;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar6 != lVar18);
          uVar16 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        puVar8 = local_80;
        iVar5 = iVar11;
      }
      else {
LAB_144516a27:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar17 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar5) {
          iVar5 = iVar11;
        }
      }
    } while (iVar5 != iVar2);
    if ((local_84 & 1) == 0) goto LAB_144516b02;
  }
LAB_144516a70:
  iVar2 = *(int *)(lVar3 + 0x150);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    uVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar3 + 0x148);
    if (*(uint **)(lVar3 + 0x148) == (uint *)0x0) {
      puVar8 = (uint *)(lVar3 + 0x138);
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      uVar16 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_144516b02;
        uVar16 = uVar16 + 0x20;
        uVar12 = puVar8[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar19 = 0;
      uVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (uVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      plVar14 = (longlong *)(*(longlong *)(lVar3 + 0x128) + (longlong)iVar5 * 0x30 + 8);
      lVar6 = FUN_140007850(plVar14);
      if (lVar6 == 0) {
        local_78[2] = *plVar14;
        local_84 = uVar16;
        if (local_78[2] == 0) {
          local_78[0] = 0;
          local_78[1] = 0;
        }
        else {
          FUN_1400021e4(local_78 + 2,local_78);
        }
        cVar4 = FUN_14166d522(local_78,0,1);
        if (cVar4 != '\0') {
          FUN_140081d40(plVar14,0);
        }
        uVar16 = local_84;
        if (local_78[0] != 0) {
          FUN_1400020a8();
          uVar16 = local_84;
        }
      }
      uVar12 = uVar12 & ~(uint)uVar17;
      puVar8 = *(uint **)(lVar3 + 0x148);
      if (*(uint **)(lVar3 + 0x148) == (uint *)0x0) {
        puVar8 = (uint *)(lVar3 + 0x138);
      }
      iVar15 = *(int *)(lVar3 + 0x150);
      iVar5 = (int)uVar19;
      lVar6 = (longlong)iVar5;
      uVar13 = puVar8[lVar6] & uVar12;
      if (uVar13 == 0) {
        iVar11 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar11 = iVar15 + -1;
        }
        iVar11 = iVar11 >> 5;
        uVar16 = uVar16 + 0x20;
        iVar9 = iVar11;
        if (iVar11 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar11) {
          lVar18 = 0;
          do {
            uVar13 = puVar8[lVar18 + lVar6 + 1];
            if (uVar13 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar12 = 0xffffffff;
              goto LAB_144516c40;
            }
            uVar16 = uVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar9 - lVar6 != lVar18);
          uVar12 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar15;
      }
      else {
LAB_144516c40:
        uVar17 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar17 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (uVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar5) {
          iVar5 = iVar15;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_144516b02:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144516ca4 FUN_144516ca4 body=266 status=ok
// SIG undefined FUN_144516ca4(void)

ulonglong FUN_144516ca4(undefined8 *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 **local_68;
  undefined1 local_59;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_14943fbbd(*(undefined8 *)*param_1,&local_58,&local_48);
  local_59 = 0;
  local_68 = &local_80;
  local_70 = FUN_144516de8;
  local_80 = &local_48;
  local_78 = &local_59;
  FUN_1493e7c82(*(undefined8 *)*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)&local_59 >> 8),local_59);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144516de8 FUN_144516de8 body=398 status=ok
// SIG undefined FUN_144516de8(void)

undefined8 FUN_144516de8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = *param_3;
  cVar6 = FUN_14933d60e(lVar10);
  if (cVar6 != '\0') {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_1492f1448(lVar10 + 0xf0,&local_58);
    uVar8 = (ulonglong)(int)uStack_50;
    bVar5 = true;
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      local_60 = *(longlong **)*param_1;
      iVar3 = (int)((longlong *)*param_1)[1];
      local_68 = local_58;
      plVar9 = local_58;
      do {
        if (iVar3 != 0) {
          iVar4 = (int)plVar9[1];
          plVar12 = local_60;
LAB_144516ec0:
          if ((int)plVar12[1] == iVar4) {
            if (1 < iVar4) {
              lVar10 = 0;
              do {
                uVar1 = *(ushort *)(*plVar12 + lVar10);
                uVar2 = *(ushort *)(*plVar9 + lVar10);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar11 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_144516f27;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x000144516f24;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
            goto LAB_144516f33;
          }
          if ((int)plVar12[1] + iVar4 == 1) goto LAB_144516f33;
          goto LAB_144516ed2;
        }
LAB_144516eaa:
        plVar9 = plVar9 + 2;
      } while (plVar9 != local_58 + uVar8 * 2);
      bVar5 = true;
    }
LAB_144516f53:
    FUN_1447a1747(local_58,uVar8);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = 1;
    if (!bVar5) goto LAB_144516e1b;
  }
  uVar7 = 0;
LAB_144516e1b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
code_r0x000144516f24:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_144516f27:
  if (iVar11 == 0) {
LAB_144516f33:
    *(undefined1 *)param_1[1] = 1;
    uVar8 = uStack_50 & 0xffffffff;
    bVar5 = false;
    goto LAB_144516f53;
  }
LAB_144516ed2:
  plVar12 = plVar12 + 2;
  if (plVar12 == local_60 + (longlong)iVar3 * 2) goto LAB_144516eaa;
  goto LAB_144516ec0;
}



// FUNCTION 144516f78 FUN_144516f78 body=176 status=ok
// SIG undefined FUN_144516f78(void)

void FUN_144516f78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  
  uVar3 = *param_3;
  cVar6 = FUN_14933d500(uVar3);
  if (cVar6 == '\0') {
    cVar6 = FUN_14933d60e(uVar3);
    if (cVar6 == '\0') {
      plVar4 = (longlong *)param_1[1];
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(plVar4,iVar2);
      }
      lVar5 = *plVar4;
      lVar7 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar2 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar5 + 8 + lVar7) = iVar2;
      if ((longlong)iVar2 != 0) {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        return;
      }
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      *(undefined1 *)*param_1 = 1;
    }
  }
  return;
}



// FUNCTION 144517028 FUN_144517028 body=199 status=ok
// SIG undefined FUN_144517028(void)

ulonglong FUN_144517028(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  cVar2 = FUN_1493374a4(*param_3);
  if (cVar2 != '\0') {
    lVar3 = FUN_1492f2ba8(*(undefined8 *)*param_1,local_38);
    if (lVar3 != 0) {
      lVar4 = FUN_1459238a6();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        cVar2 = FUN_149435c84(lVar3,*(undefined8 *)*param_1,param_1[2],param_1[3]);
        if (cVar2 != '\0') {
          *(undefined1 *)param_1[1] = 1;
        }
      }
    }
  }
  uVar1 = *(undefined1 *)param_1[1];
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144517106 FUN_144517106 body=109 status=ok
// SIG undefined FUN_144517106(void)

void FUN_144517106(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *param_3;
  cVar3 = FUN_1492ef37c(lVar2);
  if ((lVar2 != 0) && (cVar3 == '\x01')) {
    lVar4 = FUN_1459238a6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      param_1 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1494032b8(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 144517174 FUN_144517174 body=106 status=ok
// SIG undefined FUN_144517174(void)

void FUN_144517174(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = FUN_1459238a6();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (*(longlong *)param_1[1] != lVar2)) {
      param_1 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14944249a(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 1445171de FUN_1445171de body=55 status=ok
// SIG undefined FUN_1445171de(void)

void FUN_1445171de(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149442520(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144517216 FUN_144517216 body=655 status=ok
// SIG undefined FUN_144517216(void)

ulonglong FUN_144517216(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong local_a8;
  int local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  lVar10 = *param_3;
  uVar5 = FUN_1492f125c(lVar10 + 0x220);
  uVar8 = (ulonglong)uVar5;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1492f1448(lVar10 + 0x220);
  if (0 < (int)uVar5) {
    uVar11 = 0;
    do {
      local_88 = (void *)0x0;
      local_80 = *(int *)(local_78 + 8 + uVar11 * 0x10);
      lVar10 = (longlong)local_80;
      _Src = *(void **)(local_78 + uVar11 * 0x10);
      if (lVar10 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar10 * 2);
      }
      lVar10 = FUN_1492f2ba8(*(undefined8 *)(lVar3 + 0x160),&local_88);
      bVar4 = true;
      if (lVar10 != 0) {
        lVar6 = FUN_145a954f4();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          FUN_1492f1448(lVar10 + 0x160,&local_98);
          FUN_1492ef9be(*(undefined8 *)param_1[1],&local_a8);
          bVar4 = true;
          if ((longlong)(int)uStack_90 != 0) {
            plVar7 = local_98;
LAB_144517386:
            if ((int)plVar7[1] != local_a0) {
              if ((int)plVar7[1] + local_a0 == 1) goto LAB_144517408;
              goto LAB_1445173f8;
            }
            if (1 < local_a0) {
              local_ac = local_a0;
              lVar10 = 0;
              do {
                uVar1 = *(ushort *)(*plVar7 + lVar10);
                uVar2 = *(ushort *)(local_a8 + lVar10);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar9 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_1445173e3;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x0001445173e0;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
            goto LAB_144517408;
          }
LAB_14451740b:
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (!bVar4) {
            *(undefined1 *)param_1[2] = 1;
            uVar8 = CONCAT71((int7)(uVar8 >> 8),*(undefined1 *)param_1[2]);
          }
          FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar4) goto LAB_144517450;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar5);
  }
  uVar8 = 0;
LAB_144517450:
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffffffffff01;
code_r0x0001445173e0:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1445173e3:
  if (iVar9 == 0) {
LAB_144517408:
    bVar4 = false;
    goto LAB_14451740b;
  }
LAB_1445173f8:
  plVar7 = plVar7 + 2;
  if (plVar7 == local_98 + (longlong)(int)uStack_90 * 2) goto LAB_14451740b;
  goto LAB_144517386;
}



// FUNCTION 1445174a6 FUN_1445174a6 body=530 status=ok
// SIG undefined FUN_1445174a6(void)

ulonglong FUN_1445174a6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_3;
  lVar1 = *param_1;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1492f1448(lVar5 + 0x220,&local_48);
  if ((int)uStack_40 != 0) {
    lVar3 = FUN_1492f2702(*(undefined8 *)(lVar1 + 0x160),local_48);
    if (lVar3 != 0) {
      lVar4 = FUN_145a956cc();
      if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) {
        uVar7 = 0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30) goto LAB_1445174ee;
        local_68[2] = 0;
        uStack_50 = 0;
        FUN_1492f1448(lVar3 + 0x150,local_68 + 2);
        if ((int)uStack_50 != 0) {
          lVar3 = *(longlong *)(lVar1 + 0x160);
          FUN_1492ef9be(*(undefined8 *)param_1[2],local_68);
          cVar2 = FUN_1492f28bc(lVar3,local_68[2],local_68);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar2 != '\0') {
            *(longlong *)param_1[1] = lVar5;
            lVar5 = FUN_1492f2ba8(*(undefined8 *)(lVar1 + 0x160),local_68[2]);
            if (lVar5 == 0) {
LAB_144517662:
              uVar6 = FUN_1492f2ba8(*(undefined8 *)(lVar1 + 0x160),local_68[2]);
              *(undefined8 *)param_1[3] = uVar6;
            }
            else {
              lVar4 = FUN_1459238a6();
              lVar3 = lVar5;
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_144517662;
              local_68[0] = 0;
              local_68[1] = 0;
              cVar2 = FUN_14933ff3c(lVar5);
              if (cVar2 != '\0') {
                uVar6 = FUN_1492f2ba8(*(undefined8 *)(lVar1 + 0x160),local_68);
                *(undefined8 *)param_1[3] = uVar6;
              }
              if (local_68[0] != 0) {
                FUN_1400020a8();
              }
            }
            FUN_1447a1747(local_68[2],uStack_50 & 0xffffffff);
            if (local_68[2] != 0) {
              FUN_1400020a8();
            }
            uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_1445174ee;
          }
          uVar7 = uStack_50 & 0xffffffff;
        }
        FUN_1447a1747(local_68[2],uVar7);
        if (local_68[2] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar7 = 0;
LAB_1445174ee:
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445176ba FUN_1445176ba body=273 status=ok
// SIG undefined FUN_1445176ba(void)

void FUN_1445176ba(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  longlong *local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  cVar5 = FUN_149377cec(*param_3);
  if (cVar5 != '\0') {
    iVar2 = *(int *)(lVar3 + 0x170);
    *(uint *)(lVar3 + 0x170) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x174) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(lVar3 + 0x168),iVar2);
    }
    _Src = local_48;
    lVar4 = *(longlong *)(lVar3 + 0x168);
    lVar6 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar4 + lVar6);
    *(undefined8 *)(lVar4 + lVar6) = 0;
    lVar7 = (longlong)(int)uStack_40;
    *(int *)(lVar4 + 8 + lVar6) = (int)uStack_40;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,uStack_40 & 0xffffffff,0);
      memcpy((void *)*puVar1,_Src,lVar7 * 2);
    }
    local_50 = &local_60;
    local_58 = FUN_1445177cc;
    local_60 = lVar3;
    FUN_1493ea6fc(*(undefined8 *)(lVar3 + 0x160),&local_48);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445177cc FUN_1445177cc body=454 status=ok
// SIG undefined FUN_1445177cc(void)

/* WARNING: Removing unreachable block (ram,0x000144517963) */

void FUN_1445177cc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  if (lVar2 == 0) goto LAB_1445177f1;
  lVar7 = *param_1;
  lVar3 = FUN_1459238a6();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_1445177f1;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_1492f1448(lVar2 + 0xd0,&local_58);
  plVar4 = (longlong *)FUN_1493431a6();
  uVar5 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    iVar1 = (int)plVar4[1];
    plVar8 = local_58;
LAB_144517886:
    if ((int)plVar8[1] == iVar1) {
      if (1 < iVar1) {
        lVar3 = 0;
        do {
          uVar10 = *(ushort *)(*plVar8 + lVar3);
          uVar5 = (ulonglong)uVar10;
          uVar6 = *(ushort *)(*plVar4 + lVar3);
          if (uVar10 == uVar6) {
            if (uVar10 == 0) break;
          }
          else {
            if (0x7f < (uVar6 | uVar10)) goto LAB_1445178eb;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar9 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar9]) goto LAB_1445178eb;
          }
          lVar3 = lVar3 + 2;
        } while( true );
      }
      goto LAB_1445178f3;
    }
    if ((int)plVar8[1] + iVar1 == 1) goto LAB_1445178f3;
    goto LAB_144517897;
  }
  goto LAB_144517976;
LAB_1445178eb:
  if (uVar10 == uVar6) {
LAB_1445178f3:
    FUN_1492ef9be(lVar2,&local_68);
    iVar1 = *(int *)(lVar7 + 0x170);
    *(uint *)(lVar7 + 0x170) = iVar1 + 1U;
    if (*(uint *)(lVar7 + 0x174) < iVar1 + 1U) {
      FUN_1447a1bd6((longlong *)(lVar7 + 0x168),iVar1);
    }
    lVar2 = *(longlong *)(lVar7 + 0x168);
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined8 *)(lVar2 + lVar7) = local_68;
    *(undefined4 *)(lVar2 + 8 + lVar7) = (undefined4)local_60;
    *(undefined4 *)(lVar2 + 0xc + lVar7) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    uVar5 = uStack_50 & 0xffffffff;
    goto LAB_144517976;
  }
LAB_144517897:
  plVar8 = plVar8 + 2;
  if (plVar8 == local_58 + (longlong)(int)uStack_50 * 2) goto LAB_144517973;
  goto LAB_144517886;
LAB_144517973:
  uVar5 = uStack_50 & 0xffffffff;
LAB_144517976:
  FUN_1447a1747(local_58,uVar5);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1445177f1:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144517994 FUN_144517994 body=128 status=ok
// SIG undefined FUN_144517994(void)

void FUN_144517994(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar2 = *param_3;
  lVar3 = *param_1;
  cVar4 = FUN_1492ef37c(lVar2);
  if ((lVar2 != 0) && (cVar4 == '\x02')) {
    lVar5 = FUN_1458d6086();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      iVar1 = *(int *)(lVar3 + 0x198);
      *(uint *)(lVar3 + 0x198) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x19c) < iVar1 + 1U) {
        FUN_14944262c((longlong *)(lVar3 + 400),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar3 + 400) + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 144517a20 FUN_144517a20 body=522 status=ok
// SIG undefined FUN_144517a20(void)

void FUN_144517a20(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  void *local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1492f1448(param_3 + 0x40,&local_88);
  if ((longlong)(int)uStack_80 != 0) {
    lVar6 = (longlong)(int)uStack_80 << 4;
    lVar5 = local_88;
    do {
      lVar2 = FUN_1492f2ba8(*(undefined8 *)param_1[1],lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_145a93c10();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_c0 = (longlong)DAT_14cc15e20;
          local_b8 = (undefined2 *)0x0;
          local_c8 = DAT_14cc15e18;
          local_b0 = DAT_14cc15e20;
          local_90 = lVar2;
          FUN_1446dd670(&local_b8,DAT_14cc15e20 + (uint)(local_c0 == 0) + 0x10,0);
          if (local_c0 != 0) {
            memcpy(local_b8,local_c8,local_c0 * 2);
          }
          FUN_1400020e8(&local_b8,L"ParentIdentifier",0x10);
          puVar4 = &DAT_149dfb77a;
          if (local_b0 != 0) {
            puVar4 = local_b8;
          }
          FUN_140056680(&local_70,puVar4);
          cVar1 = FUN_1492ef716(lVar2,&local_70);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\0') {
            local_70 = param_2;
            local_68 = &local_90;
            FUN_149442f0a(*param_1,&local_b8);
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\0') break;
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144517c38 FUN_144517c38 body=1174 status=ok
// SIG undefined FUN_144517c38(void)

void FUN_144517c38(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  int local_70;
  void *local_68;
  int local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_3;
  cVar3 = FUN_1492ef37c(lVar1);
  if ((lVar1 != 0) && (cVar3 == '\x01')) {
    lVar6 = FUN_1459238a6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_58[0] = 0;
      local_58[1] = 0;
      cVar3 = FUN_14933ff3c(lVar1);
      if ((cVar3 != '\0') && (lVar6 = FUN_1492f2ba8(*(undefined8 *)*param_1,local_58), lVar6 != 0))
      {
        lVar7 = FUN_14599b312();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          FUN_1492ef4c6(lVar1,&local_68);
          lVar6 = FUN_1492f2ba8(*(undefined8 *)*param_1,&local_68);
          if (lVar6 != 0) {
            lVar7 = FUN_1459238a6();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              do {
                uVar8 = FUN_14934321a();
                cVar3 = FUN_149341ac2(lVar6,uVar8);
                if (cVar3 != '\0') goto LAB_144517d45;
                uVar8 = *(undefined8 *)*param_1;
                FUN_1492ef4c6(lVar6,&local_78);
                lVar6 = FUN_1492f2ba8(uVar8,&local_78);
                if (lVar6 == 0) {
LAB_144517dd6:
                  lVar6 = 0;
                }
                else {
                  lVar7 = FUN_1459238a6();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_144517dd6;
                }
                if (local_78 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              } while (lVar6 != 0);
              iVar4 = FUN_1492f2dde(*(undefined8 *)*param_1,&local_68);
              if (1 < iVar4) {
                FUN_1492ee7cc(lVar1,&local_78);
                pwVar2 = local_78;
                pwVar10 = pwVar2;
                if (local_70 - 7U < 0x7ffffffa) {
                  iVar4 = *(int *)((undefined8 *)param_1[2] + 1);
                  uVar5 = iVar4 - 1;
                  if (iVar4 == 0) {
                    uVar5 = 0;
                  }
                  if (0 < (int)uVar5) {
                    if (iVar4 == 0) {
                      pwVar10 = L"";
                    }
                    else {
                      pwVar10 = *(wchar_t **)param_1[2];
                    }
                    iVar4 = wcsncmp(local_78,pwVar10,(ulonglong)uVar5);
                    pwVar10 = local_78;
                    if ((iVar4 == 0) && (pwVar10 = pwVar2, pwVar2[4] == L'_')) {
                      FUN_14006620a(&local_98);
                      iVar4 = local_90 + -1;
                      if (local_90 == 0) {
                        iVar4 = 0;
                      }
                      uVar5 = iVar4 - (uint)(0 < iVar4);
                      if (0 < (int)uVar5) {
                        iVar13 = local_90 - ((0 < iVar4) + uVar5);
                        if (iVar13 != 0) {
                          memmove(local_98 + (0 < iVar4),local_98 + (0 < iVar4) + uVar5,
                                  (longlong)iVar13 * 2);
                        }
                        local_90 = local_90 - uVar5;
                      }
                      iVar4 = local_90;
                      pwVar2 = local_98;
                      local_88 = local_98;
                      local_7c = local_8c;
                      local_80 = local_90;
                      cVar3 = FUN_1405b43cc();
                      if (cVar3 != '\0') {
                        pwVar10 = pwVar2;
                        if (iVar4 == 0) {
                          pwVar10 = L"";
                        }
                        iVar4 = _wtoi(pwVar10);
                        _Src = local_68;
                        local_98 = (wchar_t *)0x0;
                        local_90 = local_60;
                        if ((longlong)local_60 == 0) {
                          local_8c = 0;
                          iVar13 = 0;
                        }
                        else {
                          FUN_1446dd670(&local_98,local_60,0);
                          memcpy(local_98,_Src,(longlong)local_60 * 2);
                          iVar13 = local_90;
                        }
                        uVar11 = 0;
                        iVar14 = iVar13 + -1;
                        if (iVar13 == 0) {
                          iVar14 = 0;
                        }
                        if (0 < iVar14) {
                          pwVar10 = local_98;
                          if (iVar13 == 0) {
                            pwVar10 = L"";
                          }
                          lVar6 = 0;
                          uVar11 = 0;
                          do {
                            uVar5 = ((uint)(ushort)pwVar10[lVar6] +
                                    (uint)(0x19 < (ushort)pwVar10[lVar6] - 0x61) * 0x20) - 0x20;
                            uVar12 = (uint)(uVar11 >> 8) ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(((uint)uVar11 ^ uVar5) & 0xff) * 4);
                            uVar11 = (ulonglong)
                                     (uVar12 >> 8 ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(uVar12 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
                            lVar6 = lVar6 + 1;
                          } while (iVar14 != (int)lVar6);
                        }
                        plVar9 = (longlong *)FUN_140e10654(param_1[1],uVar11,&local_98);
                        iVar13 = (int)plVar9[1];
                        if (iVar13 <= iVar4) {
                          *(int *)(plVar9 + 1) = iVar4 + 1;
                          uVar5 = (iVar4 + 1) - iVar13;
                          if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar13) < uVar5) {
                            FUN_1447a1bd6(plVar9);
                          }
                          memset((void *)((longlong)iVar13 * 0x10 + *plVar9),0,
                                 (longlong)(int)uVar5 << 4);
                        }
                        FUN_1492ef9be(lVar1,&local_a8);
                        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *plVar9);
                        if (plVar9 != &local_a8) {
                          if (*plVar9 != 0) {
                            FUN_1400020a8();
                          }
                          *plVar9 = local_a8;
                          local_a8 = 0;
                          *(undefined4 *)(plVar9 + 1) = (undefined4)local_a0;
                          *(undefined4 *)((longlong)plVar9 + 0xc) = local_a0._4_4_;
                          local_a0 = 0;
                        }
                        if (local_a8 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_98 != (wchar_t *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      pwVar10 = local_78;
                      if (pwVar2 != (wchar_t *)0x0) {
                        FUN_1400020a8(pwVar2);
                        pwVar10 = local_78;
                      }
                    }
                  }
                }
                if (pwVar10 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar10);
                }
              }
            }
          }
LAB_144517d45:
          if (local_68 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445180d0 FUN_1445180d0 body=327 status=ok
// SIG undefined FUN_1445180d0(void)

void FUN_1445180d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  lVar2 = *param_3;
  cVar3 = FUN_1492ef37c(lVar2);
  if ((lVar2 != 0) && (cVar3 == '\x02')) {
    lVar4 = FUN_14599b312();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      iVar1 = *(int *)(param_2 + 1);
      uVar7 = 0;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        if (iVar1 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        else {
          puVar5 = (undefined2 *)*param_2;
        }
        lVar4 = 0;
        uVar7 = 0;
        do {
          uVar8 = ((uint)(ushort)puVar5[lVar4] + (uint)(0x19 < (ushort)puVar5[lVar4] - 0x61) * 0x20)
                  - 0x20;
          uVar10 = (uint)(uVar7 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
          uVar7 = (ulonglong)
                  (uVar10 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
          lVar4 = lVar4 + 1;
        } while (iVar9 != (int)lVar4);
      }
      puVar6 = (undefined8 *)FUN_1494435a4(*(longlong *)*param_1 + 0x28,uVar7,param_2);
      if (puVar6 != param_2) {
        iVar1 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      puVar6[2] = lVar2;
    }
  }
  return;
}



// FUNCTION 144518218 FUN_144518218 body=2699 status=ok
// SIG undefined FUN_144518218(void)

/* WARNING: Removing unreachable block (ram,0x00014451839c) */

void FUN_144518218(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  bool bVar20;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pwVar3 = (wchar_t *)*param_3;
  cVar5 = FUN_1492ef37c(pwVar3);
  if ((pwVar3 == (wchar_t *)0x0) || (cVar5 != '\x01')) goto LAB_144518257;
  lVar7 = FUN_1459238a6();
  if ((*(int *)(*(longlong *)(pwVar3 + 8) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(pwVar3 + 8) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_144518257;
  uVar8 = FUN_1493431a6();
  cVar5 = FUN_149341ac2(pwVar3,uVar8);
  if (cVar5 != '\0') {
    uVar8 = *(undefined8 *)param_1[1];
    FUN_1492ef4c6(pwVar3,&local_58);
    lVar7 = FUN_1492f2ba8(uVar8,&local_58);
    if (lVar7 == 0) {
LAB_144518307:
      lVar7 = 0;
    }
    else {
      lVar9 = FUN_1459238a6();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) != lVar9 + 0x30)) goto LAB_144518307;
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      uVar8 = FUN_1493431a6();
      cVar5 = FUN_149341ac2(lVar7,uVar8);
      if (cVar5 != '\0') goto LAB_1445183a1;
    }
    plVar11 = (longlong *)param_1[3];
    FUN_1492ef9be(pwVar3,&local_58);
    iVar13 = (int)plVar11[1];
    *(uint *)(plVar11 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)plVar11 + 0xc) < iVar13 + 1U) {
      FUN_1447a1bd6(plVar11,iVar13);
    }
    lVar7 = *plVar11;
    lVar9 = (longlong)iVar13 * 0x10;
    *(undefined8 *)(lVar7 + lVar9) = 0;
    *(void **)(lVar7 + lVar9) = local_58;
    local_58 = (void *)0x0;
    *(int *)(lVar7 + 8 + lVar9) = (int)uStack_50;
    *(undefined4 *)(lVar7 + 0xc + lVar9) = uStack_50._4_4_;
    uStack_50 = 0;
  }
LAB_1445183a1:
  cVar5 = FUN_144518ca4(pwVar3);
  if (cVar5 != '\0') {
    *(undefined1 *)param_1[4] = 1;
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  cVar5 = FUN_14933ff3c(pwVar3);
  if ((cVar5 != '\0') && (lVar7 = FUN_1492f2ba8(*(undefined8 *)param_1[1],&local_58), lVar7 != 0)) {
    lVar9 = FUN_14599b312();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      lVar7 = *(longlong *)*param_1;
      iVar13 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar13 = 0;
      }
      if (0 < iVar13) {
        iVar17 = 0;
        do {
          iVar17 = iVar17 + 1;
        } while (iVar13 != iVar17);
      }
      iVar13 = FUN_149443632((longlong *)(lVar7 + 0x28));
      if (iVar13 == -1) {
        local_98 = 0;
      }
      else {
        local_98 = (longlong)iVar13 * 0x50 + *(longlong *)(lVar7 + 0x28);
      }
      uVar8 = *(undefined8 *)param_1[1];
      FUN_1492ef4c6(pwVar3,&local_68);
      local_a8 = FUN_1492f2ba8(uVar8);
      if (local_a8 == 0) {
LAB_144518525:
        local_a8 = 0;
      }
      else {
        lVar7 = FUN_1459238a6();
        if ((*(int *)(*(longlong *)(local_a8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_a8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_144518525;
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_6c = 0;
      if (local_a8 != 0) {
        uVar8 = param_1[2];
        FUN_1492ef9be(local_a8);
        iVar13 = iStack_60 + -1;
        if (iStack_60 == 0) {
          iVar13 = 0;
        }
        if (0 < iVar13) {
          iVar17 = 0;
          do {
            iVar17 = iVar17 + 1;
          } while (iVar13 != iVar17);
        }
        iVar13 = FUN_140d080c0(uVar8);
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar13 == -1) {
          FUN_1492ef9be(pwVar3,&local_68);
          do {
            uVar8 = FUN_14934321a();
            cVar5 = FUN_149341ac2(local_a8,uVar8);
            if (cVar5 != '\0') {
              uVar8 = *(undefined8 *)param_1[1];
              FUN_1492ef9be(local_a8,local_90);
              FUN_1492f2f34(uVar8,&local_80);
              if (local_90[0] != 0) {
                FUN_1400020a8();
              }
              iVar13 = iStack_60;
              pwVar12 = local_68;
              local_a0 = CONCAT44(uStack_7c,local_80);
              if ((longlong)iStack_78 < 1) goto LAB_144518906;
              piVar19 = (int *)(local_a0 + 8);
              lVar7 = 0;
              goto LAB_144518785;
            }
            FUN_1492ef9be(local_a8,&local_80);
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_68 = (wchar_t *)CONCAT44(uStack_7c,local_80);
            iStack_60 = iStack_78;
            uStack_5c = uStack_74;
            uVar8 = *(undefined8 *)param_1[1];
            FUN_1492ef4c6(local_a8,&local_80);
            local_a8 = FUN_1492f2ba8(uVar8);
            if (local_a8 == 0) {
LAB_1445186b0:
              local_a8 = 0;
            }
            else {
              lVar7 = FUN_1459238a6();
              if ((*(int *)(*(longlong *)(local_a8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(local_a8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1445186b0;
            }
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
          } while (local_a8 != 0);
          local_a8 = 0;
          goto LAB_144518922;
        }
        plVar11 = (longlong *)param_1[2];
        FUN_1492ef9be(local_a8);
        iVar13 = iStack_60 + -1;
        if (iStack_60 == 0) {
          iVar13 = 0;
        }
        if (0 < iVar13) {
          iVar17 = 0;
          do {
            iVar17 = iVar17 + 1;
          } while (iVar13 != iVar17);
        }
        iVar13 = FUN_140d080c0(plVar11);
        if (iVar13 == -1) {
          local_a0 = 0;
        }
        else {
          local_a0 = (longlong)iVar13 * 0x28 + *plVar11;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (0 < *(int *)(local_a0 + 0x18)) {
          lVar9 = 8;
          lVar7 = 0;
          do {
            lVar16 = *(longlong *)(local_a0 + 0x10);
            FUN_1492ef9be(pwVar3);
            pwVar12 = local_68;
            iVar13 = *(int *)(lVar16 + lVar9);
            if (iVar13 == iStack_60) {
              bVar20 = true;
              if (1 < iVar13) {
                iVar13 = wcscmp(*(wchar_t **)(lVar16 + -8 + lVar9),local_68);
                bVar20 = iVar13 == 0;
              }
            }
            else {
              bVar20 = iStack_60 + iVar13 == 1;
            }
            if (pwVar12 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar12);
            }
            if (bVar20) {
              local_6c = (undefined4)lVar7;
              break;
            }
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + 0x10;
          } while (lVar7 < *(int *)(local_a0 + 0x18));
        }
        goto LAB_144518931;
      }
      goto LAB_14451893d;
    }
  }
  goto LAB_1445183cb;
LAB_144518785:
  do {
    if (*piVar19 == iVar13) {
      if ((iVar13 < 2) || (iVar17 = wcscmp(*(wchar_t **)(piVar19 + -2),pwVar12), iVar17 == 0))
      goto LAB_144518901;
    }
    else if (*piVar19 + iVar13 == 1) {
LAB_144518901:
      local_6c = (undefined4)lVar7;
      break;
    }
    lVar7 = lVar7 + 1;
    piVar19 = piVar19 + 4;
  } while (iStack_78 != lVar7);
LAB_144518906:
  FUN_1447a1747(local_a0);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1400020a8();
  }
LAB_144518922:
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144518931:
  if (local_a8 == 0) {
LAB_14451893d:
    iVar13 = (int)param_2[1];
    uVar14 = 0;
    iVar17 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar17 = 0;
    }
    if (0 < iVar17) {
      if (iVar13 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*param_2;
      }
      lVar7 = 0;
      uVar14 = 0;
      do {
        uVar15 = ((uint)(ushort)puVar10[lVar7] + (uint)(0x19 < (ushort)puVar10[lVar7] - 0x61) * 0x20
                 ) - 0x20;
        uVar18 = (uint)(uVar14 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar15) & 0xff) * 4);
        uVar14 = (ulonglong)
                 (uVar18 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar17 != (int)lVar7);
    }
    plVar11 = (longlong *)FUN_149444d54(*(longlong *)*param_1 + 0x78,uVar14,param_2);
    plVar11[2] = 0;
    if (plVar11 != param_2) {
      iVar13 = (int)param_2[1];
      pvVar4 = (void *)*param_2;
      *(int *)(plVar11 + 1) = iVar13;
      if (iVar13 == 0 && *(int *)((longlong)plVar11 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar11,iVar13);
        if (iVar13 != 0) {
          memcpy((void *)*plVar11,pvVar4,(longlong)iVar13 * 2);
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)*param_1;
    FUN_1492ef9be(local_a8);
    uVar14 = 0;
    iVar13 = iStack_60 + -1;
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    if (0 < iVar13) {
      pwVar12 = local_68;
      if (iStack_60 == 0) {
        pwVar12 = L"";
      }
      lVar9 = 0;
      uVar14 = 0;
      do {
        uVar15 = ((uint)(0x19 < (ushort)pwVar12[lVar9] - 0x61) * 0x20 + (uint)(ushort)pwVar12[lVar9]
                 ) - 0x20;
        uVar18 = (uint)(uVar14 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar15) & 0xff) * 4);
        uVar14 = (ulonglong)
                 (uVar18 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
        lVar9 = lVar9 + 1;
      } while (iVar13 != (int)lVar9);
    }
    plVar11 = (longlong *)FUN_149443d16(lVar7 + 0x78,uVar14,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (plVar11[2] == 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(local_a8);
      }
      plVar11[2] = local_a8;
      FUN_1492ef9be(local_a8,&local_68);
      if (plVar11 == &local_68) {
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar11 != 0) {
          FUN_1400020a8();
        }
        *plVar11 = (longlong)local_68;
        local_68 = (wchar_t *)0x0;
        *(int *)(plVar11 + 1) = iStack_60;
        *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_5c;
      }
    }
  }
  uVar8 = FUN_1494446a6(plVar11 + 4,local_6c);
  local_68 = pwVar3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(pwVar3);
  }
  FUN_149444c10(uVar8,&local_68);
  plVar1 = (longlong *)(local_98 + 0x28);
  iVar13 = *(int *)(local_98 + 0x30);
  *(uint *)(local_98 + 0x30) = iVar13 + 1U;
  if (*(uint *)(local_98 + 0x34) < iVar13 + 1U) {
    FUN_1447a1bd6(plVar1,iVar13);
  }
  lVar7 = *plVar1;
  lVar9 = (longlong)iVar13 * 0x10;
  puVar2 = (undefined8 *)(lVar7 + lVar9);
  *(undefined8 *)(lVar7 + lVar9) = 0;
  iVar13 = (int)plVar11[1];
  pvVar4 = (void *)*plVar11;
  *(int *)(lVar7 + 8 + lVar9) = iVar13;
  if ((longlong)iVar13 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar13,0);
    memcpy((void *)*puVar2,pvVar4,(longlong)iVar13 * 2);
  }
  iVar13 = (int)plVar11[0xf];
  *(uint *)(plVar11 + 0xf) = iVar13 + 1U;
  if (*(uint *)((longlong)plVar11 + 0x7c) < iVar13 + 1U) {
    FUN_1447a1bd6(plVar11 + 0xe,iVar13);
  }
  pvVar4 = local_58;
  lVar7 = plVar11[0xe];
  lVar9 = (longlong)iVar13 * 0x10;
  puVar2 = (undefined8 *)(lVar7 + lVar9);
  *(undefined8 *)(lVar7 + lVar9) = 0;
  lVar16 = (longlong)(int)uStack_50;
  *(int *)(lVar7 + 8 + lVar9) = (int)uStack_50;
  if (lVar16 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_50 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar4,lVar16 * 2);
  }
  lVar7 = local_98;
  bVar6 = FUN_14933d60e(*(undefined8 *)(local_98 + 0x20));
  *(byte *)(plVar11 + 3) = *(byte *)(plVar11 + 3) | bVar6;
  bVar6 = FUN_14933d500(*(undefined8 *)(lVar7 + 0x20));
  *(byte *)((longlong)plVar11 + 0x19) = *(byte *)((longlong)plVar11 + 0x19) | bVar6;
  iVar13 = FUN_1492f125c(*(longlong *)(lVar7 + 0x20) + 0x130);
  *(byte *)((longlong)plVar11 + 0x1a) = *(byte *)((longlong)plVar11 + 0x1a) | 0 < iVar13;
LAB_1445183cb:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144518257:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144518ca4 FUN_144518ca4 body=200 status=ok
// SIG undefined FUN_144518ca4(void)

bool FUN_144518ca4(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1492ee7cc(param_1,&local_28);
  puVar3 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  lVar4 = 7;
  lVar6 = 0;
  do {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
    uVar2 = *(ushort *)((longlong)L"SOCKET_" + lVar6);
    if (uVar1 == uVar2) {
      iVar5 = 0;
      if ((uVar1 == 0) || (iVar5 = 0, lVar4 == 1)) goto LAB_144518d38;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
        iVar5 = (uint)uVar1 - (uint)uVar2;
LAB_144518d38:
        if (local_28 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
          return iVar5 == 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_144518d38;
      }
      if (lVar4 == 1) {
        iVar5 = 0;
        goto LAB_144518d38;
      }
    }
    lVar4 = lVar4 + -1;
    lVar6 = lVar6 + 2;
  } while( true );
}



// FUNCTION 144518d6e FUN_144518d6e body=221 status=ok
// SIG undefined FUN_144518d6e(void)

/* WARNING: Removing unreachable block (ram,0x000144518e42) */

void FUN_144518d6e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar5 = FUN_1459238a6();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (cVar4 = FUN_144518ca4(lVar2), cVar4 != '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x10);
      FUN_1492ef9be(lVar2,&local_30);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(plVar3,iVar1);
      }
      lVar2 = *plVar3;
      lVar5 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar5) = 0;
      *(undefined8 *)(lVar2 + lVar5) = local_30;
      local_30 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)local_28;
      *(undefined4 *)(lVar2 + 0xc + lVar5) = local_28._4_4_;
      local_28 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144518e4c FUN_144518e4c body=672 status=ok
// SIG undefined FUN_144518e4c(void)

/* WARNING: Removing unreachable block (ram,0x0001445190b3) */

void FUN_144518e4c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_3;
  if (lVar2 == 0) goto LAB_144518e70;
  lVar6 = FUN_1459238a6();
  if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) || (cVar4 = FUN_144518ca4(lVar2), cVar4 == '\0')) goto LAB_144518e70;
  local_48 = 0;
  uStack_40 = 0;
  cVar4 = FUN_14933ff3c(lVar2);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)param_1[1];
    FUN_1492ef4c6(lVar2,&local_58);
    lVar6 = FUN_1492f2ba8(uVar3);
    if (lVar6 == 0) {
LAB_144518f2b:
      lVar6 = 0;
    }
    else {
      lVar9 = FUN_1459238a6();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) != lVar9 + 0x30)) goto LAB_144518f2b;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (lVar6 != 0) {
      do {
        cVar4 = FUN_14933ff3c(lVar6);
        if (cVar4 != '\0') break;
        uVar3 = *(undefined8 *)param_1[1];
        FUN_1492ef4c6(lVar6,&local_58);
        lVar6 = FUN_1492f2ba8(uVar3);
        if (lVar6 == 0) {
LAB_144518f7c:
          lVar6 = 0;
        }
        else {
          lVar9 = FUN_1459238a6();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_144518f7c;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      } while (lVar6 != 0);
    }
  }
  if (1 < (int)uStack_40) {
    lVar6 = *(longlong *)*param_1;
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar1 = *(ushort *)(local_48 + lVar9 * 2);
      uVar8 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar10 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while ((int)uStack_40 + -1 != (int)lVar9);
    iVar5 = FUN_149443632((longlong *)(lVar6 + 0x28),uVar7,&local_48);
    if (iVar5 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar5 * 0x50 + *(longlong *)(lVar6 + 0x28);
    }
    FUN_1492ef9be(lVar2,&local_58);
    iVar5 = *(int *)(lVar6 + 0x40);
    *(uint *)(lVar6 + 0x40) = iVar5 + 1U;
    if (*(uint *)(lVar6 + 0x44) < iVar5 + 1U) {
      FUN_1447a1bd6((longlong *)(lVar6 + 0x38),iVar5);
    }
    lVar2 = *(longlong *)(lVar6 + 0x38);
    lVar6 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    *(longlong *)(lVar2 + lVar6) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)local_50;
    *(undefined4 *)(lVar2 + 0xc + lVar6) = local_50._4_4_;
    local_50 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_144518e70:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445190ed FUN_1445190ed body=17021 status=ok
// SIG undefined FUN_1445190ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445190ed(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_858 [32];
  undefined8 local_838;
  undefined **ppuStack_830;
  undefined8 local_828;
  longlong local_820 [2];
  longlong local_810 [2];
  undefined1 *local_800;
  undefined1 *local_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  longlong local_7e0 [2];
  longlong local_7d0;
  longlong local_7c0;
  undefined4 local_7b8;
  char local_7a9;
  longlong local_7a8 [2];
  longlong local_798 [2];
  undefined1 *local_788;
  char ***local_780;
  longlong local_778;
  undefined4 local_770;
  longlong local_768 [2];
  longlong local_758;
  longlong local_748;
  undefined4 local_740;
  undefined1 local_731;
  longlong local_730 [2];
  longlong local_720 [2];
  char ***local_710;
  longlong *local_708;
  longlong local_700;
  undefined4 local_6f8;
  longlong local_6f0 [2];
  longlong local_6e0;
  longlong local_6d0;
  undefined4 local_6c8;
  undefined1 local_6b9;
  longlong local_6b8 [2];
  longlong local_6a8 [2];
  char **local_698;
  undefined1 *local_690;
  longlong local_688;
  undefined4 local_680;
  longlong local_678 [2];
  longlong local_668;
  longlong local_658;
  undefined4 local_650;
  undefined1 local_641;
  longlong local_640 [2];
  longlong local_630 [2];
  longlong *local_620;
  undefined1 *local_618;
  longlong local_610;
  undefined4 local_608;
  longlong local_600 [2];
  longlong local_5f0;
  longlong local_5e0;
  undefined4 local_5d8;
  undefined1 local_5c9;
  longlong local_5c8 [2];
  longlong local_5b8 [2];
  undefined1 *local_5a8;
  undefined1 **local_5a0;
  longlong local_598;
  undefined4 local_590;
  longlong local_588 [2];
  longlong local_578;
  longlong local_568;
  undefined4 local_560;
  undefined1 local_551;
  char **local_550 [2];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [16];
  longlong local_4d0 [2];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  longlong local_440 [2];
  char **local_430;
  ulonglong *local_428;
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  longlong alStack_390 [4];
  undefined1 local_370 [16];
  longlong local_360 [2];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  char *local_2c0;
  longlong *local_2b8;
  undefined1 *local_2b0;
  longlong *local_2a8;
  undefined1 *local_2a0;
  longlong *local_298;
  undefined1 *local_290;
  longlong *local_288;
  undefined1 *local_280;
  longlong *local_278;
  char *local_270;
  longlong *local_268;
  char *local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_858;
  FUN_1446f470e(&DAT_14cc1557c,&DAT_149e97e80,1);
  FUN_1446f470e(&DAT_14cc15584,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc1558c,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc15594,L"FlattenNormal",1);
  FUN_1446f470e(&DAT_14cc1559c,L"Normal",1);
  FUN_1446f470e(&DAT_14cc155a4,L"Flatness",1);
  FUN_1446f470e(&DAT_14cc155ac,L"Lerp",1);
  FUN_1446f470e(&DAT_14cc155b4,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc155bc,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc155c4,L"Factor",1);
  FUN_1446f470e(&DAT_14cc155cc,L"ComponentMask",1);
  FUN_1446f470e(&DAT_14cc155d4,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc155dc,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc155e4,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc155ec,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc155f4,L"Input",1);
  FUN_1446f470e(&DAT_14cc155fc,L"Multiply",1);
  FUN_1446f470e(&DAT_14cc15604,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc1560c,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc15614,L"MakeFloat3",1);
  FUN_1446f470e(&DAT_14cc1561c,&DAT_149e25cc8,1);
  FUN_1446f470e(&DAT_14cc15624,&DAT_149e25ccc,1);
  FUN_1446f470e(&DAT_14cc1562c,&DAT_149e25cd0,1);
  FUN_1446f470e(&DAT_14cc15634,L"Noise",1);
  FUN_1446f470e(&DAT_14cc1563c,L"Position",1);
  FUN_1446f470e(&DAT_14cc15644,L"FilterWidth",1);
  FUN_1446f470e(&DAT_14cc1564c,L"Scale",1);
  FUN_1446f470e(&DAT_14cc15654,L"Quality",1);
  FUN_1446f470e(&DAT_14cc1565c,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc15664,L"bTurbulence",1);
  FUN_1446f470e(&DAT_14cc1566c,L"Levels",1);
  FUN_1446f470e(&DAT_14cc15674,L"OutputMin",1);
  FUN_1446f470e(&DAT_14cc1567c,L"OutputMax",1);
  FUN_1446f470e(&DAT_14cc15684,L"LevelScale",1);
  FUN_1446f470e(&DAT_14cc1568c,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc15694,L"RepeatSize",1);
  FUN_1446f470e(&DAT_14cc1569c,L"NormalFromHeightMap",1);
  FUN_1446f470e(&DAT_14cc156a4,L"Height Map",1);
  FUN_1446f470e(&DAT_14cc156ac,L"Normal Map Intensity",1);
  FUN_1446f470e(&DAT_14cc156b4,L"Height Map UV Offset",1);
  FUN_1446f470e(&DAT_14cc156bc,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc156c4,L"Height Map Channel Selector",1);
  FUN_1446f470e(&DAT_14cc156cc,L"OneMinus",1);
  FUN_1446f470e(&DAT_14cc156d4,L"Input",1);
  FUN_1446f470e(&DAT_14cc156dc,L"Rotator",1);
  FUN_1446f470e(&DAT_14cc156e4,L"CenterX",1);
  FUN_1446f470e(&DAT_14cc156ec,L"CenterY",1);
  FUN_1446f470e(&DAT_14cc156f4,L"Speed",1);
  FUN_1446f470e(&DAT_14cc156fc,L"Coordinate",1);
  FUN_1446f470e(&DAT_14cc15704,L"Time",1);
  FUN_1446f470e(&DAT_14cc1570c,L"MaterialXSwizzle",1);
  FUN_1446f470e(&DAT_14cc15714,L"Input",1);
  FUN_1446f470e(&DAT_14cc1571c,L"Channels",1);
  FUN_1446f470e(&DAT_14cc15724,L"TextureCoordinate",1);
  FUN_1446f470e(&DAT_14cc1572c,L"Index",1);
  FUN_1446f470e(&DAT_14cc15734,L"UTiling",1);
  FUN_1446f470e(&DAT_14cc1573c,L"VTiling",1);
  FUN_1446f470e(&DAT_14cc15744,L"Offset",1);
  FUN_1446f470e(&DAT_14cc1574c,L"Scale",1);
  FUN_1446f470e(&DAT_14cc15754,L"Rotate",1);
  FUN_1446f470e(&DAT_14cc1575c,L"RotationCenter",1);
  FUN_1446f470e(&DAT_14cc15764,L"TextureObject",1);
  FUN_1446f470e(&DAT_14cc1576c,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc15774,L"TextureSample",1);
  FUN_1446f470e(&DAT_14cc1577c,L"Coordinates",1);
  FUN_1446f470e(&DAT_14cc15784,L"TextureUid",1);
  FUN_1446f470e(&DAT_14cc1578c,&DAT_14a9cf404,1);
  FUN_1446f470e(&DAT_14cc15794,&DAT_149ebbc0e,1);
  FUN_1446f470e(&DAT_14cc1579c,&DAT_149ebbbea,1);
  FUN_1446f470e(&DAT_14cc157a4,&DAT_149e060e8,1);
  FUN_1446f470e(&DAT_14cc157ac,&DAT_149e71d50,1);
  FUN_1446f470e(&DAT_14cc157b4,L"RGBA",1);
  FUN_1446f470e(&DAT_14cc157bc,L"KernelSize",1);
  FUN_1446f470e(&DAT_14cc157c4,L"FilterSize",1);
  FUN_1446f470e(&DAT_14cc157cc,L"FilterOffset",1);
  FUN_1446f470e(&DAT_14cc157d4,L"Filter",1);
  FUN_1446f470e(&DAT_14cc157dc,L"Time",1);
  FUN_1446f470e(&DAT_14cc157e4,L"bIgnorePause",1);
  FUN_1446f470e(&DAT_14cc157ec,L"bOverride_Period",1);
  FUN_1446f470e(&DAT_14cc157f4,L"Period",1);
  FUN_1446f470e(&DAT_14cc157fc,L"TransformPosition",1);
  FUN_1446f470e(&DAT_14cc15804,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc1580c,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc15814,L"Input",1);
  FUN_1446f470e(&DAT_14cc1581c,L"Transform",1);
  FUN_1446f470e(&DAT_14cc15824,L"TransformSourceType",1);
  FUN_1446f470e(&DAT_14cc1582c,L"TransformType",1);
  FUN_1446f470e(&DAT_14cc15834,L"Input",1);
  FUN_1446f470e(&DAT_14cc1583c,L"VectorNoise",1);
  FUN_1446f470e(&DAT_14cc15844,L"NoiseFunction",1);
  FUN_1446f470e(&DAT_14cc1584c,L"Quality",1);
  FUN_1446f470e(&DAT_14cc15854,L"bTiling",1);
  FUN_1446f470e(&DAT_14cc1585c,L"TileSize",1);
  FUN_1446f470e(&DAT_14cc15864,L"Position",1);
  FUN_1446f470e(&DAT_14cc1586c,L"VertexColor",1);
  FUN_1446f470e(&DAT_14cc15874,L"ScalarParameter",1);
  FUN_1446f470e(&DAT_14cc1587c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc15884,L"VectorParameter",1);
  FUN_1446f470e(&DAT_14cc1588c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc15894,L"StaticBoolParameter",1);
  FUN_1446f470e(&DAT_14cc1589c,L"DefaultValue",1);
  FUN_1446f470e(&DAT_14cc158a4,L"EmissiveColor",1);
  FUN_1446f470e(&DAT_14cc158ac,L"Normal",1);
  FUN_1446f470e(&DAT_14cc158b4,L"Tangent",1);
  FUN_1446f470e(&DAT_14cc158bc,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc158c4,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc158cc,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc158d4,&DAT_14a2a7780,1);
  FUN_1446f470e(&DAT_14cc158dc,L"BxDF",1);
  FUN_1446f470e(&DAT_14cc158e4,L"Refraction",1);
  FUN_1446f470e(&DAT_14cc158ec,L"Anisotropy",1);
  FUN_1446f470e(&DAT_14cc158f4,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc158fc,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc15904,L"open_pbr_surface",1);
  FUN_1446f470e(&DAT_14cc1590c,L"base_weight",1);
  FUN_1446f470e(&DAT_14cc15914,L"base_color",1);
  FUN_1446f470e(&DAT_14cc1591c,L"base_roughness",1);
  FUN_1446f470e(&DAT_14cc15924,L"base_metalness",1);
  FUN_1446f470e(&DAT_14cc1592c,L"specular_weight",1);
  FUN_1446f470e(&DAT_14cc15934,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc1593c,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc15944,L"specular_ior",1);
  FUN_1446f470e(&DAT_14cc1594c,L"specular_ior_level",1);
  FUN_1446f470e(&DAT_14cc15954,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1595c,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc15964,L"transmission_weight",1);
  FUN_1446f470e(&DAT_14cc1596c,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15974,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc1597c,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc15984,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc1598c,L"transmission_dispersion_scale",1);
  FUN_1446f470e(&DAT_14cc15994,L"transmission_dispersion_abbe_number",1);
  FUN_1446f470e(&DAT_14cc1599c,L"subsurface_weight",1);
  FUN_1446f470e(&DAT_14cc159a4,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc159ac,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc159b4,L"subsurface_radius_scale",1);
  FUN_1446f470e(&DAT_14cc159bc,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc159c4,L"fuzz_weight",1);
  FUN_1446f470e(&DAT_14cc159cc,L"fuzz_color",1);
  FUN_1446f470e(&DAT_14cc159d4,L"fuzz_roughness",1);
  FUN_1446f470e(&DAT_14cc159dc,L"coat_weight",1);
  FUN_1446f470e(&DAT_14cc159e4,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc159ec,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc159f4,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc159fc,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc15a04,L"coat_ior",1);
  FUN_1446f470e(&DAT_14cc15a0c,L"coat_ior_level",1);
  FUN_1446f470e(&DAT_14cc15a14,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc15a1c,L"thin_film_ior",1);
  FUN_1446f470e(&DAT_14cc15a24,L"emission_luminance",1);
  FUN_1446f470e(&DAT_14cc15a2c,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc15a34,L"geometry_opacity",1);
  FUN_1446f470e(&DAT_14cc15a3c,L"geometry_thin_walled",1);
  FUN_1446f470e(&DAT_14cc15a44,L"geometry_normal",1);
  FUN_1446f470e(&DAT_14cc15a4c,L"geometry_coat_normal",1);
  FUN_1446f470e(&DAT_14cc15a54,L"geometry_tangent",1);
  FUN_1446f470e(&DAT_14cc15a5c,L"OpenPBR_FrontMaterial",1);
  FUN_1446f470e(&DAT_14cc15a64,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc15a6c,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc15a74,L"Shininess",1);
  FUN_1446f470e(&DAT_14cc15a7c,L"AmbientColor",1);
  FUN_1446f470e(&DAT_14cc15a84,L"DiffuseColor",1);
  FUN_1446f470e(&DAT_14cc15a8c,L"SpecularColor",1);
  FUN_1446f470e(&DAT_14cc15a94,L"Glossiness",1);
  FUN_1446f470e(&DAT_14cc15a9c,L"BaseColor",1);
  FUN_1446f470e(&DAT_14cc15aa4,L"Metallic",1);
  FUN_1446f470e(&DAT_14cc15aac,L"Specular",1);
  FUN_1446f470e(&DAT_14cc15ab4,L"Roughness",1);
  FUN_1446f470e(&DAT_14cc15abc,L"ClearCoat",1);
  FUN_1446f470e(&DAT_14cc15ac4,L"ClearCoatRoughness",1);
  FUN_1446f470e(&DAT_14cc15acc,L"ClearCoatNormal",1);
  FUN_1446f470e(&DAT_14cc15ad4,L"TransmissionColor",1);
  FUN_1446f470e(&DAT_14cc15adc,L"SurfaceCoverage",1);
  FUN_1446f470e(&DAT_14cc15ae4,L"SheenColor",1);
  FUN_1446f470e(&DAT_14cc15aec,L"SheenRoughness",1);
  FUN_1446f470e(&DAT_14cc15af4,L"SubsurfaceColor",1);
  FUN_1446f470e(&DAT_14cc15afc,L"standard_surface",1);
  FUN_1446f470e(&DAT_14cc15b04,L"base",1);
  FUN_1446f470e(&DAT_14cc15b0c,L"base_color",1);
  FUN_1446f470e(&DAT_14cc15b14,L"diffuse_roughness",1);
  FUN_1446f470e(&DAT_14cc15b1c,L"metalness",1);
  FUN_1446f470e(&DAT_14cc15b24,L"specular",1);
  FUN_1446f470e(&DAT_14cc15b2c,L"specular_color",1);
  FUN_1446f470e(&DAT_14cc15b34,L"specular_roughness",1);
  FUN_1446f470e(&DAT_14cc15b3c,L"specular_IOR",1);
  FUN_1446f470e(&DAT_14cc15b44,L"specular_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15b4c,L"specular_rotation",1);
  FUN_1446f470e(&DAT_14cc15b54,L"transmission",1);
  FUN_1446f470e(&DAT_14cc15b5c,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15b64,L"transmission_depth",1);
  FUN_1446f470e(&DAT_14cc15b6c,L"transmission_scatter",1);
  FUN_1446f470e(&DAT_14cc15b74,L"transmission_scatter_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15b7c,L"transmission_dispersion",1);
  FUN_1446f470e(&DAT_14cc15b84,L"transmission_extra_roughness",1);
  FUN_1446f470e(&DAT_14cc15b8c,L"subsurface",1);
  FUN_1446f470e(&DAT_14cc15b94,L"subsurface_color",1);
  FUN_1446f470e(&DAT_14cc15b9c,L"subsurface_radius",1);
  FUN_1446f470e(&DAT_14cc15ba4,L"subsurface_scale",1);
  FUN_1446f470e(&DAT_14cc15bac,L"subsurface_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15bb4,L"sheen",1);
  FUN_1446f470e(&DAT_14cc15bbc,L"sheen_color",1);
  FUN_1446f470e(&DAT_14cc15bc4,L"sheen_roughness",1);
  FUN_1446f470e(&DAT_14cc15bcc,L"coat",1);
  FUN_1446f470e(&DAT_14cc15bd4,L"coat_color",1);
  FUN_1446f470e(&DAT_14cc15bdc,L"coat_roughness",1);
  FUN_1446f470e(&DAT_14cc15be4,L"coat_anisotropy",1);
  FUN_1446f470e(&DAT_14cc15bec,L"coat_rotation",1);
  FUN_1446f470e(&DAT_14cc15bf4,L"coat_IOR",1);
  FUN_1446f470e(&DAT_14cc15bfc,L"coat_normal",1);
  FUN_1446f470e(&DAT_14cc15c04,L"coat_affect_color",1);
  FUN_1446f470e(&DAT_14cc15c0c,L"coat_affect_roughness",1);
  FUN_1446f470e(&DAT_14cc15c14,L"thin_film_thickness",1);
  FUN_1446f470e(&DAT_14cc15c1c,L"thin_film_IOR",1);
  FUN_1446f470e(&DAT_14cc15c24,L"emission",1);
  FUN_1446f470e(&DAT_14cc15c2c,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc15c34,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15c3c,L"thin_walled",1);
  FUN_1446f470e(&DAT_14cc15c44,L"normal",1);
  FUN_1446f470e(&DAT_14cc15c4c,L"tangent",1);
  FUN_1446f470e(&DAT_14cc15c54,L"Substrate StandardSurface Opaque",1);
  FUN_1446f470e(&DAT_14cc15c5c,L"Substrate StandardSurface Translucent",1);
  FUN_1446f470e(&DAT_14cc15c64,L"Geometry Opacity",1);
  FUN_1446f470e(&DAT_14cc15c6c,L"surface",1);
  FUN_1446f470e(&DAT_14cc15c74,L"bsdf",1);
  FUN_1446f470e(&DAT_14cc15c7c,&DAT_14bc6cbce,1);
  FUN_1446f470e(&DAT_14cc15c84,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15c8c,L"Surface",1);
  FUN_1446f470e(&DAT_14cc15c94,L"Opacity",1);
  FUN_1446f470e(&DAT_14cc15c9c,L"surface_unlit",1);
  FUN_1446f470e(&DAT_14cc15ca4,L"emission",1);
  FUN_1446f470e(&DAT_14cc15cac,L"emission_color",1);
  FUN_1446f470e(&DAT_14cc15cb4,L"transmission",1);
  FUN_1446f470e(&DAT_14cc15cbc,L"transmission_color",1);
  FUN_1446f470e(&DAT_14cc15cc4,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15ccc,L"OpacityMask",1);
  FUN_1446f470e(&DAT_14cc15cd4,L"Surface Unlit",1);
  FUN_1446f470e(&DAT_14cc15cdc,L"UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc15ce4,L"diffuseColor",1);
  FUN_1446f470e(&DAT_14cc15cec,L"emissiveColor",1);
  FUN_1446f470e(&DAT_14cc15cf4,L"specularColor",1);
  FUN_1446f470e(&DAT_14cc15cfc,L"metallic",1);
  FUN_1446f470e(&DAT_14cc15d04,L"roughness",1);
  FUN_1446f470e(&DAT_14cc15d0c,L"clearcoat",1);
  FUN_1446f470e(&DAT_14cc15d14,L"clearcoatRoughness",1);
  FUN_1446f470e(&DAT_14cc15d1c,L"opacity",1);
  FUN_1446f470e(&DAT_14cc15d24,L"opacityThreshold",1);
  FUN_1446f470e(&DAT_14cc15d2c,&DAT_14bc3072e,1);
  FUN_1446f470e(&DAT_14cc15d34,L"normal",1);
  FUN_1446f470e(&DAT_14cc15d3c,L"displacement",1);
  FUN_1446f470e(&DAT_14cc15d44,L"occlusion",1);
  FUN_1446f470e(&DAT_14cc15d4c,L"Substrate UsdPreviewSurface",1);
  FUN_1446f470e(&DAT_14cc15d54,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc15d5c,L"Occlusion",1);
  FUN_1446f470e(&DAT_14cc15d64,L"UnlitColor",1);
  FUN_1446f470e(&DAT_14cc15d6c,L"Front Material",1);
  FUN_1446f470e(&DAT_14cc15d74,L"Opacity Mask",1);
  FUN_1446f470e(&DAT_14cc15d7c,L"Displacement",1);
  FUN_1446f470e(&DAT_14cc15d84,L"Occlusion",1);
  FUN_1400b22c2(&local_260,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_260,&DAT_14cc15d8c);
  if (cVar1 == '\0') {
    _DAT_14cc15d8c = 0;
    uRam000000014cc15d94 = 0;
  }
  if (local_260 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_828 = 0;
  local_838 = 0;
  ppuStack_830 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcc6e00,1,0);
  ppuStack_830 = &PTR_FUN_14bcc7630;
  local_838 = 0;
  local_828 = 1;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcc7650,1,0);
  local_260 = "AssetRegistry";
  local_258 = 0xd;
  local_254 = 0;
  uVar2 = FUN_14001a6c0(&local_260,1);
  _DAT_14cc15df8 = (ulonglong)uVar2;
  local_828 = 0;
  local_838 = 0;
  ppuStack_830 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcc7c20,1,0);
  FUN_140056680(&DAT_14cc15e18,L"Gltf_MI_AttributeIdentifier_");
  atexit((_func_5014 *)&LAB_144514a19);
  FUN_140056680(&DAT_14cc15e28,L"_RGB");
  atexit((_func_5014 *)&LAB_144514a2a);
  FUN_140056680(&DAT_14cc15e38,&DAT_14bca5032);
  atexit((_func_5014 *)&LAB_144514a3b);
  FUN_140056680(&DAT_14cc15e48,L"_TexCoord");
  atexit((_func_5014 *)&LAB_144514a4c);
  FUN_140056680(&DAT_14cc15e58,L"_Offset_X");
  atexit((_func_5014 *)&LAB_144514a5d);
  FUN_140056680(&DAT_14cc15e68,L"_Offset_Y");
  atexit((_func_5014 *)&LAB_144514a6e);
  FUN_140056680(&DAT_14cc15e78,L"_Scale_X");
  atexit((_func_5014 *)&LAB_144514a7f);
  FUN_140056680(&DAT_14cc15e88,L"_Scale_Y");
  atexit((_func_5014 *)&LAB_144514a90);
  FUN_140056680(&DAT_14cc15e98,L"_OffsetScale");
  atexit((_func_5014 *)&LAB_144514aa1);
  FUN_140056680(&DAT_14cc15ea8,L"_Rotation");
  atexit((_func_5014 *)&LAB_144514ab2);
  FUN_140056680(&DAT_14cc15eb8,L"_TilingMethod");
  atexit((_func_5014 *)&LAB_144514ac3);
  FUN_140056680(&DAT_14cc15ec8,L"BaseColorTexture");
  atexit((_func_5014 *)&LAB_144514ad4);
  FUN_140056680(&DAT_14cc15ed8,L"BaseColorTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514ae5);
  FUN_140056680(&DAT_14cc15ee8,L"BaseColorTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514af6);
  FUN_140056680(&DAT_14cc15ef8,L"BaseColorTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514b07);
  FUN_140056680(&DAT_14cc15f08,L"BaseColorTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514b18);
  FUN_140056680(&DAT_14cc15f18,L"BaseColorTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514b29);
  FUN_140056680(&DAT_14cc15f28,L"BaseColorTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514b3a);
  FUN_140056680(&DAT_14cc15f38,L"BaseColorTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514b4b);
  FUN_140056680(&DAT_14cc15f48,L"BaseColorTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514b5c);
  FUN_140056680(&DAT_14cc15f58,L"BaseColorFactor");
  atexit((_func_5014 *)&LAB_144514b6d);
  FUN_140474144(&DAT_14cc15f68,&DAT_14cc15f58,&DAT_14cc15e28);
  atexit((_func_5014 *)&LAB_144514b7e);
  FUN_140474144(&DAT_14cc15f78,&DAT_14cc15f58,&DAT_14cc15e38);
  atexit((_func_5014 *)&LAB_144514b8f);
  FUN_140056680(&DAT_14cc15f88,L"MetallicRoughnessTexture");
  atexit((_func_5014 *)&LAB_144514ba0);
  FUN_140056680(&DAT_14cc15f98,L"MetallicRoughnessTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514bb1);
  FUN_140056680(&DAT_14cc15fa8,L"MetallicRoughnessTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514bc2);
  FUN_140056680(&DAT_14cc15fb8,L"MetallicRoughnessTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514bd3);
  FUN_140056680(&DAT_14cc15fc8,L"MetallicRoughnessTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514be4);
  FUN_140056680(&DAT_14cc15fd8,L"MetallicRoughnessTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514bf5);
  FUN_140056680(&DAT_14cc15fe8,L"MetallicRoughnessTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514c06);
  FUN_140056680(&DAT_14cc15ff8,L"MetallicRoughnessTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514c17);
  FUN_140056680(&DAT_14cc16008,L"MetallicRoughnessTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514c28);
  FUN_140056680(&DAT_14cc16018,L"MetallicFactor");
  atexit((_func_5014 *)&LAB_144514c39);
  FUN_140056680(&DAT_14cc16028,L"RoughnessFactor");
  atexit((_func_5014 *)&LAB_144514c4a);
  FUN_140056680(&DAT_14cc16038,L"SpecularTexture");
  atexit((_func_5014 *)&LAB_144514c5b);
  FUN_140056680(&DAT_14cc16048,L"SpecularTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514c6c);
  FUN_140056680(&DAT_14cc16058,L"SpecularTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514c7d);
  FUN_140056680(&DAT_14cc16068,L"SpecularTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514c8e);
  FUN_140056680(&DAT_14cc16078,L"SpecularTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514c9f);
  FUN_140056680(&DAT_14cc16088,L"SpecularTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514cb0);
  FUN_140056680(&DAT_14cc16098,L"SpecularTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514cc1);
  FUN_140056680(&DAT_14cc160a8,L"SpecularTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514cd2);
  FUN_140056680(&DAT_14cc160b8,L"SpecularTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514ce3);
  FUN_140056680(&DAT_14cc160c8,L"SpecularFactor");
  atexit((_func_5014 *)&LAB_144514cf4);
  FUN_140056680(&DAT_14cc160d8,L"DiffuseTexture");
  atexit((_func_5014 *)&LAB_144514d05);
  FUN_140056680(&DAT_14cc160e8,L"DiffuseTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514d16);
  FUN_140056680(&DAT_14cc160f8,L"DiffuseTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514d27);
  FUN_140056680(&DAT_14cc16108,L"DiffuseTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514d38);
  FUN_140056680(&DAT_14cc16118,L"DiffuseTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514d49);
  FUN_140056680(&DAT_14cc16128,L"DiffuseTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514d5a);
  FUN_140056680(&DAT_14cc16138,L"DiffuseTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514d6b);
  FUN_140056680(&DAT_14cc16148,L"DiffuseTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514d7c);
  FUN_140056680(&DAT_14cc16158,L"DiffuseTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514d8d);
  FUN_140056680(&DAT_14cc16168,L"DiffuseFactor");
  atexit((_func_5014 *)&LAB_144514d9e);
  FUN_140474144(&DAT_14cc16178,&DAT_14cc16168,&DAT_14cc15e28);
  atexit((_func_5014 *)&LAB_144514daf);
  FUN_140474144(&DAT_14cc16188,&DAT_14cc16168,&DAT_14cc15e38);
  atexit((_func_5014 *)&LAB_144514dc0);
  FUN_140056680(&DAT_14cc16198,L"SpecularGlossinessTexture");
  atexit((_func_5014 *)&LAB_144514dd1);
  FUN_140056680(&DAT_14cc161a8,L"SpecularGlossinessTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514de2);
  FUN_140056680(&DAT_14cc161b8,L"SpecularGlossinessTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514df3);
  FUN_140056680(&DAT_14cc161c8,L"SpecularGlossinessTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514e04);
  FUN_140056680(&DAT_14cc161d8,L"SpecularGlossinessTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514e15);
  FUN_140056680(&DAT_14cc161e8,L"SpecularGlossinessTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514e26);
  FUN_140056680(&DAT_14cc161f8,L"SpecularGlossinessTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514e37);
  FUN_140056680(&DAT_14cc16208,L"SpecularGlossinessTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514e48);
  FUN_140056680(&DAT_14cc16218,L"SpecularGlossinessTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514e59);
  FUN_140056680(&DAT_14cc16228,L"SpecFactor");
  atexit((_func_5014 *)&LAB_144514e6a);
  FUN_140056680(&DAT_14cc16238,L"GlossinessFactor");
  atexit((_func_5014 *)&LAB_144514e7b);
  FUN_140056680(&DAT_14cc16248,L"NormalTexture");
  atexit((_func_5014 *)&LAB_144514e8c);
  FUN_140056680(&DAT_14cc16258,L"NormalTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514e9d);
  FUN_140056680(&DAT_14cc16268,L"NormalTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514eae);
  FUN_140056680(&DAT_14cc16278,L"NormalTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514ebf);
  FUN_140056680(&DAT_14cc16288,L"NormalTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514ed0);
  FUN_140056680(&DAT_14cc16298,L"NormalTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514ee1);
  FUN_140056680(&DAT_14cc162a8,L"NormalTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514ef2);
  FUN_140056680(&DAT_14cc162b8,L"NormalTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514f03);
  FUN_140056680(&DAT_14cc162c8,L"NormalTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514f14);
  FUN_140056680(&DAT_14cc162d8,L"NormalScale");
  atexit((_func_5014 *)&LAB_144514f25);
  FUN_140056680(&DAT_14cc162e8,L"EmissiveTexture");
  atexit((_func_5014 *)&LAB_144514f36);
  FUN_140056680(&DAT_14cc162f8,L"EmissiveTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144514f47);
  FUN_140056680(&DAT_14cc16308,L"EmissiveTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144514f58);
  FUN_140056680(&DAT_14cc16318,L"EmissiveTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144514f69);
  FUN_140056680(&DAT_14cc16328,L"EmissiveTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144514f7a);
  FUN_140056680(&DAT_14cc16338,L"EmissiveTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144514f8b);
  FUN_140056680(&DAT_14cc16348,L"EmissiveTexture_Rotation");
  atexit((_func_5014 *)&LAB_144514f9c);
  FUN_140056680(&DAT_14cc16358,L"EmissiveTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144514fad);
  FUN_140056680(&DAT_14cc16368,L"EmissiveTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144514fbe);
  FUN_140056680(&DAT_14cc16378,L"EmissiveFactor");
  atexit((_func_5014 *)&LAB_144514fcf);
  FUN_140056680(&DAT_14cc16388,L"EmissiveStrength");
  atexit((_func_5014 *)&LAB_144514fe0);
  FUN_140056680(&DAT_14cc16398,L"OcclusionTexture");
  atexit((_func_5014 *)&LAB_144514ff1);
  FUN_140056680(&DAT_14cc163a8,L"OcclusionTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515002);
  FUN_140056680(&DAT_14cc163b8,L"OcclusionTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144515013);
  FUN_140056680(&DAT_14cc163c8,L"OcclusionTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144515024);
  FUN_140056680(&DAT_14cc163d8,L"OcclusionTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515035);
  FUN_140056680(&DAT_14cc163e8,L"OcclusionTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515046);
  FUN_140056680(&DAT_14cc163f8,L"OcclusionTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515057);
  FUN_140056680(&DAT_14cc16408,L"OcclusionTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515068);
  FUN_140056680(&DAT_14cc16418,L"OcclusionTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144515079);
  FUN_140056680(&DAT_14cc16428,L"OcclusionStrength");
  atexit((_func_5014 *)&LAB_14451508a);
  FUN_140056680(&DAT_14cc16438,&DAT_14a2a7780);
  atexit((_func_5014 *)&LAB_14451509b);
  FUN_140056680(&DAT_14cc16448,L"AlphaCutoff");
  atexit((_func_5014 *)&LAB_1445150ac);
  FUN_140056680(&DAT_14cc16458,L"AlphaMode");
  atexit((_func_5014 *)&LAB_1445150bd);
  FUN_140056680(&DAT_14cc16468,L"ClearCoatTexture");
  atexit((_func_5014 *)&LAB_1445150ce);
  FUN_140056680(&DAT_14cc16478,L"ClearCoatTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_1445150df);
  FUN_140056680(&DAT_14cc16488,L"ClearCoatTexture_Offset_X");
  atexit((_func_5014 *)&LAB_1445150f0);
  FUN_140056680(&DAT_14cc16498,L"ClearCoatTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144515101);
  FUN_140056680(&DAT_14cc164a8,L"ClearCoatTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515112);
  FUN_140056680(&DAT_14cc164b8,L"ClearCoatTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515123);
  FUN_140056680(&DAT_14cc164c8,L"ClearCoatTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515134);
  FUN_140056680(&DAT_14cc164d8,L"ClearCoatTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515145);
  FUN_140056680(&DAT_14cc164e8,L"ClearCoatTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144515156);
  FUN_140056680(&DAT_14cc164f8,L"ClearCoatFactor");
  atexit((_func_5014 *)&LAB_144515167);
  FUN_140056680(&DAT_14cc16508,L"ClearCoatRoughnessTexture");
  atexit((_func_5014 *)&LAB_144515178);
  FUN_140056680(&DAT_14cc16518,L"ClearCoatRoughnessTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515189);
  FUN_140056680(&DAT_14cc16528,L"ClearCoatRoughnessTexture_Offset_X");
  atexit((_func_5014 *)&LAB_14451519a);
  FUN_140056680(&DAT_14cc16538,L"ClearCoatRoughnessTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_1445151ab);
  FUN_140056680(&DAT_14cc16548,L"ClearCoatRoughnessTexture_Scale_X");
  atexit((_func_5014 *)&LAB_1445151bc);
  FUN_140056680(&DAT_14cc16558,L"ClearCoatRoughnessTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_1445151cd);
  FUN_140056680(&DAT_14cc16568,L"ClearCoatRoughnessTexture_Rotation");
  atexit((_func_5014 *)&LAB_1445151de);
  FUN_140056680(&DAT_14cc16578,L"ClearCoatRoughnessTexture_TexCoord");
  atexit((_func_5014 *)&LAB_1445151ef);
  FUN_140056680(&DAT_14cc16588,L"ClearCoatRoughnessTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144515200);
  FUN_140056680(&DAT_14cc16598,L"ClearCoatRoughnessFactor");
  atexit((_func_5014 *)&LAB_144515211);
  FUN_140056680(&DAT_14cc165a8,L"ClearCoatNormalTexture");
  atexit((_func_5014 *)&LAB_144515222);
  FUN_140056680(&DAT_14cc165b8,L"ClearCoatNormalTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515233);
  FUN_140056680(&DAT_14cc165c8,L"ClearCoatNormalTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144515244);
  FUN_140056680(&DAT_14cc165d8,L"ClearCoatNormalTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144515255);
  FUN_140056680(&DAT_14cc165e8,L"ClearCoatNormalTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515266);
  FUN_140056680(&DAT_14cc165f8,L"ClearCoatNormalTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515277);
  FUN_140056680(&DAT_14cc16608,L"ClearCoatNormalTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515288);
  FUN_140056680(&DAT_14cc16618,L"ClearCoatNormalTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515299);
  FUN_140056680(&DAT_14cc16628,L"ClearCoatNormalTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_1445152aa);
  FUN_140056680(&DAT_14cc16638,L"ClearCoatNormalScale");
  atexit((_func_5014 *)&LAB_1445152bb);
  FUN_140056680(&DAT_14cc16648,L"SheenColorTexture");
  atexit((_func_5014 *)&LAB_1445152cc);
  FUN_140056680(&DAT_14cc16658,L"SheenColorTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_1445152dd);
  FUN_140056680(&DAT_14cc16668,L"SheenColorTexture_Offset_X");
  atexit((_func_5014 *)&LAB_1445152ee);
  FUN_140056680(&DAT_14cc16678,L"SheenColorTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_1445152ff);
  FUN_140056680(&DAT_14cc16688,L"SheenColorTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515310);
  FUN_140056680(&DAT_14cc16698,L"SheenColorTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515321);
  FUN_140056680(&DAT_14cc166a8,L"SheenColorTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515332);
  FUN_140056680(&DAT_14cc166b8,L"SheenColorTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515343);
  FUN_140056680(&DAT_14cc166c8,L"SheenColorTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144515354);
  FUN_140056680(&DAT_14cc166d8,L"SheenColorFactor");
  atexit((_func_5014 *)&LAB_144515365);
  FUN_140056680(&DAT_14cc166e8,L"SheenRoughnessTexture");
  atexit((_func_5014 *)&LAB_144515376);
  FUN_140056680(&DAT_14cc166f8,L"SheenRoughnessTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515387);
  FUN_140056680(&DAT_14cc16708,L"SheenRoughnessTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144515398);
  FUN_140056680(&DAT_14cc16718,L"SheenRoughnessTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_1445153a9);
  FUN_140056680(&DAT_14cc16728,L"SheenRoughnessTexture_Scale_X");
  atexit((_func_5014 *)&LAB_1445153ba);
  FUN_140056680(&DAT_14cc16738,L"SheenRoughnessTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_1445153cb);
  FUN_140056680(&DAT_14cc16748,L"SheenRoughnessTexture_Rotation");
  atexit((_func_5014 *)&LAB_1445153dc);
  FUN_140056680(&DAT_14cc16758,L"SheenRoughnessTexture_TexCoord");
  atexit((_func_5014 *)&LAB_1445153ed);
  FUN_140056680(&DAT_14cc16768,L"SheenRoughnessTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_1445153fe);
  FUN_140056680(&DAT_14cc16778,L"SheenRoughnessFactor");
  atexit((_func_5014 *)&LAB_14451540f);
  FUN_140056680(&DAT_14cc16788,L"TransmissionTexture");
  atexit((_func_5014 *)&LAB_144515420);
  FUN_140056680(&DAT_14cc16798,L"TransmissionTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515431);
  FUN_140056680(&DAT_14cc167a8,L"TransmissionTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144515442);
  FUN_140056680(&DAT_14cc167b8,L"TransmissionTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144515453);
  FUN_140056680(&DAT_14cc167c8,L"TransmissionTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515464);
  FUN_140056680(&DAT_14cc167d8,L"TransmissionTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515475);
  FUN_140056680(&DAT_14cc167e8,L"TransmissionTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515486);
  FUN_140056680(&DAT_14cc167f8,L"TransmissionTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515497);
  FUN_140056680(&DAT_14cc16808,L"TransmissionTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_1445154a8);
  FUN_140056680(&DAT_14cc16818,L"TransmissionFactor");
  atexit((_func_5014 *)&LAB_1445154b9);
  FUN_140056680(&DAT_14cc16828,L"IridescenceIOR");
  atexit((_func_5014 *)&LAB_1445154ca);
  FUN_140056680(&DAT_14cc16838,L"IridescenceTexture");
  atexit((_func_5014 *)&LAB_1445154db);
  FUN_140056680(&DAT_14cc16848,L"IridescenceTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_1445154ec);
  FUN_140056680(&DAT_14cc16858,L"IridescenceTexture_Offset_X");
  atexit((_func_5014 *)&LAB_1445154fd);
  FUN_140056680(&DAT_14cc16868,L"IridescenceTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_14451550e);
  FUN_140056680(&DAT_14cc16878,L"IridescenceTexture_Scale_X");
  atexit((_func_5014 *)&LAB_14451551f);
  FUN_140056680(&DAT_14cc16888,L"IridescenceTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515530);
  FUN_140056680(&DAT_14cc16898,L"IridescenceTexture_Rotation");
  atexit((_func_5014 *)&LAB_144515541);
  FUN_140056680(&DAT_14cc168a8,L"IridescenceTexture_TexCoord");
  atexit((_func_5014 *)&LAB_144515552);
  FUN_140056680(&DAT_14cc168b8,L"IridescenceTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_144515563);
  FUN_140056680(&DAT_14cc168c8,L"IridescenceFactor");
  atexit((_func_5014 *)&LAB_144515574);
  FUN_140056680(&DAT_14cc168d8,L"IridescenceThicknessTexture");
  atexit((_func_5014 *)&LAB_144515585);
  FUN_140056680(&DAT_14cc168e8,L"IridescenceThicknessTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515596);
  FUN_140056680(&DAT_14cc168f8,L"IridescenceThicknessTexture_Offset_X");
  atexit((_func_5014 *)&LAB_1445155a7);
  FUN_140056680(&DAT_14cc16908,L"IridescenceThicknessTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_1445155b8);
  FUN_140056680(&DAT_14cc16918,L"IridescenceThicknessTexture_Scale_X");
  atexit((_func_5014 *)&LAB_1445155c9);
  FUN_140056680(&DAT_14cc16928,L"IridescenceThicknessTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_1445155da);
  FUN_140056680(&DAT_14cc16938,L"IridescenceThicknessTexture_Rotation");
  atexit((_func_5014 *)&LAB_1445155eb);
  FUN_140056680(&DAT_14cc16948,L"IridescenceThicknessTexture_TexCoord");
  atexit((_func_5014 *)&LAB_1445155fc);
  FUN_140056680(&DAT_14cc16958,L"IridescenceThicknessTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_14451560d);
  FUN_140056680(&DAT_14cc16968,L"IridescenceThicknessMinimum");
  atexit((_func_5014 *)&LAB_14451561e);
  FUN_140056680(&DAT_14cc16978,L"IridescenceThicknessMaximum");
  atexit((_func_5014 *)&LAB_14451562f);
  FUN_140056680(&DAT_14cc16988,L"AnisotropyTexture");
  atexit((_func_5014 *)&LAB_144515640);
  FUN_140056680(&DAT_14cc16998,L"AnisotropyTexture_OffsetScale");
  atexit((_func_5014 *)&LAB_144515651);
  FUN_140056680(&DAT_14cc169a8,L"AnisotropyTexture_Offset_X");
  atexit((_func_5014 *)&LAB_144515662);
  FUN_140056680(&DAT_14cc169b8,L"AnisotropyTexture_Offset_Y");
  atexit((_func_5014 *)&LAB_144515673);
  FUN_140056680(&DAT_14cc169c8,L"AnisotropyTexture_Scale_X");
  atexit((_func_5014 *)&LAB_144515684);
  FUN_140056680(&DAT_14cc169d8,L"AnisotropyTexture_Scale_Y");
  atexit((_func_5014 *)&LAB_144515695);
  FUN_140056680(&DAT_14cc169e8,L"AnisotropyTexture_Rotation");
  atexit((_func_5014 *)&LAB_1445156a6);
  FUN_140056680(&DAT_14cc169f8,L"AnisotropyTexture_TexCoord");
  atexit((_func_5014 *)&LAB_1445156b7);
  FUN_140056680(&DAT_14cc16a08,L"AnisotropyTexture_TilingMethod");
  atexit((_func_5014 *)&LAB_1445156c8);
  FUN_140056680(&DAT_14cc16a18,L"AnisotropyStrength");
  atexit((_func_5014 *)&LAB_1445156d9);
  FUN_140056680(&DAT_14cc16a28,L"AnisotropyRotation");
  atexit((_func_5014 *)&LAB_1445156ea);
  FUN_140056680(&DAT_14cc16a38,L"bHasBaseColorTexture");
  atexit((_func_5014 *)&LAB_1445156fb);
  FUN_140056680(&DAT_14cc16a48,L"bHasMetallicRoughnessTexture");
  atexit((_func_5014 *)&LAB_14451570c);
  FUN_140056680(&DAT_14cc16a58,L"bHasDiffuseSpecGlossTexture");
  atexit((_func_5014 *)&LAB_14451571d);
  FUN_140056680(&DAT_14cc16a68,L"bHasEmissiveTexture");
  atexit((_func_5014 *)&LAB_14451572e);
  FUN_140056680(&DAT_14cc16a78,L"bHasNormalTexture");
  atexit((_func_5014 *)&LAB_14451573f);
  FUN_140056680(&DAT_14cc16a88,L"bHasOcclusionTexture");
  atexit((_func_5014 *)&LAB_144515750);
  FUN_140056680(&DAT_14cc16a98,L"bHasSpecularTexture");
  atexit((_func_5014 *)&LAB_144515761);
  FUN_140056680(&DAT_14cc16aa8,L"bHasClearCoatTexture");
  atexit((_func_5014 *)&LAB_144515772);
  FUN_140056680(&DAT_14cc16ab8,L"bHasSheenTexture");
  atexit((_func_5014 *)&LAB_144515783);
  FUN_140056680(&DAT_14cc16ac8,L"bHasTransmissionTexture");
  atexit((_func_5014 *)&LAB_144515794);
  FUN_140056680(&DAT_14cc16ad8,L"bHasIridescence");
  atexit((_func_5014 *)&LAB_1445157a5);
  FUN_140056680(&DAT_14cc16ae8,L"bHasAnisotropyTextureAndOrRotation");
  atexit((_func_5014 *)&LAB_1445157b6);
  local_551 = 0;
  FUN_140056680(local_350,L"BaseColor");
  FUN_140056680(local_340,L"Metallic");
  FUN_140056680(local_330,L"Specular");
  FUN_140056680(local_320,L"Roughness");
  FUN_140056680(local_310,L"EmissiveColor");
  FUN_140056680(local_300,L"Opacity");
  FUN_140056680(local_2f0,L"OpacityMask");
  FUN_140056680(local_2e0,L"Normal");
  FUN_140056680(local_2d0,L"Occlusion");
  local_5a0 = &local_2c0;
  local_5a8 = local_350;
  FUN_141469cae(&local_598);
  FUN_140056680(local_5b8,L"/InterchangeAssets/gltf/M_Default.M_Default");
  FUN_140056680(local_5c8,L"/InterchangeAssets/gltf/MaterialBodies/MF_Default_Body.MF_Default_Body")
  ;
  FUN_14190779c(local_588,local_5c8,local_5b8,&local_598);
  local_5c9 = 1;
  local_2c0 = &local_551;
  local_2b8 = local_588;
  FUN_140056680(alStack_390 + 2,L"UnlitColor");
  FUN_140056680(local_370,L"Opacity");
  FUN_140056680(local_360,L"OpacityMask");
  local_618 = local_350;
  local_620 = alStack_390 + 2;
  FUN_141469cae(&local_610);
  FUN_140056680(local_630,L"/InterchangeAssets/gltf/M_Unlit.M_Unlit");
  FUN_140056680(local_640,L"/InterchangeAssets/gltf/MaterialBodies/MF_Unlit_Body.MF_Unlit_Body");
  FUN_14190779c(local_600,local_640,local_630,&local_610);
  local_641 = 2;
  local_2b0 = &local_5c9;
  local_2a8 = local_600;
  FUN_140056680(&local_260,L"ClearCoatNormal");
  FUN_140056680(local_250,L"BaseColor");
  FUN_140056680(local_240,L"Metallic");
  FUN_140056680(local_230,L"Specular");
  FUN_140056680(local_220,L"Roughness");
  FUN_140056680(local_210,L"EmissiveColor");
  FUN_140056680(local_200,L"Opacity");
  FUN_140056680(local_1f0,L"OpacityMask");
  FUN_140056680(local_1e0,L"Normal");
  FUN_140056680(local_1d0,L"ClearCoat");
  FUN_140056680(local_1c0,L"ClearCoatRoughness");
  FUN_140056680(local_1b0,L"Occlusion");
  local_690 = local_1a0;
  local_698 = &local_260;
  FUN_141469cae(&local_688);
  FUN_140056680(local_6a8,L"/InterchangeAssets/gltf/M_ClearCoat.M_ClearCoat");
  FUN_140056680(local_6b8,
                L"/InterchangeAssets/gltf/MaterialBodies/MF_ClearCoat_Body.MF_ClearCoat_Body");
  FUN_14190779c(local_678,local_6b8,local_6a8,&local_688);
  local_2a0 = &local_641;
  local_6b9 = 3;
  local_298 = local_678;
  FUN_140056680(&local_430,L"BaseColor");
  FUN_140056680(local_420,L"Metallic");
  FUN_140056680(local_410,L"Specular");
  FUN_140056680(local_400,L"Roughness");
  FUN_140056680(local_3f0,L"EmissiveColor");
  FUN_140056680(local_3e0,L"Opacity");
  FUN_140056680(local_3d0,L"OpacityMask");
  FUN_140056680(local_3c0,L"Normal");
  FUN_140056680(local_3b0,L"SheenColor");
  FUN_140056680(local_3a0,L"SheenRoughness");
  FUN_140056680(alStack_390,L"Occlusion");
  local_708 = alStack_390 + 2;
  local_710 = &local_430;
  FUN_141469cae(&local_700);
  FUN_140056680(local_720,L"/InterchangeAssets/gltf/M_Sheen.M_Sheen");
  FUN_140056680(local_730,L"/InterchangeAssets/gltf/MaterialBodies/MF_Sheen_Body.MF_Sheen_Body");
  FUN_14190779c(local_6f0,local_730,local_720,&local_700);
  local_290 = &local_6b9;
  local_731 = 4;
  local_288 = local_6f0;
  FUN_140056680(local_4c0,L"TransmissionColor");
  FUN_140056680(local_4b0,L"BaseColor");
  FUN_140056680(local_4a0,L"Metallic");
  FUN_140056680(local_490,L"Specular");
  FUN_140056680(local_480,L"Roughness");
  FUN_140056680(local_470,L"EmissiveColor");
  FUN_140056680(local_460,L"Opacity");
  FUN_140056680(local_450,L"Normal");
  FUN_140056680(local_440,L"Occlusion");
  local_780 = &local_430;
  local_788 = local_4c0;
  FUN_141469cae(&local_778);
  FUN_140056680(local_798,L"/InterchangeAssets/gltf/M_Transmission.M_Transmission");
  FUN_140056680(local_7a8,
                L"/InterchangeAssets/gltf/MaterialBodies/MF_Transmission_Body.MF_Transmission_Body")
  ;
  FUN_14190779c(local_768,local_7a8,local_798,&local_778);
  local_280 = &local_731;
  local_7a9 = '\x05';
  local_278 = local_768;
  FUN_140056680(local_540,L"BaseColor");
  FUN_140056680(local_530,L"Metallic");
  FUN_140056680(local_520,L"Roughness");
  FUN_140056680(local_510,L"EmissiveColor");
  FUN_140056680(local_500,L"Opacity");
  FUN_140056680(local_4f0,L"OpacityMask");
  FUN_140056680(local_4e0,L"Normal");
  FUN_140056680(local_4d0,L"Occlusion");
  local_7f8 = local_4c0;
  local_800 = local_540;
  FUN_141469cae(&local_7f0);
  FUN_140056680(local_810,L"/InterchangeAssets/gltf/M_SpecularGlossiness.M_SpecularGlossiness");
  FUN_140056680(local_820,
                L"/InterchangeAssets/gltf/MaterialBodies/MF_SpecularGlossiness_Body.MF_SpecularGlossiness_Body"
               );
  FUN_14190779c(local_7e0,local_820,local_810,&local_7f0);
  local_550[1] = &local_260;
  local_550[0] = &local_2c0;
  local_270 = &local_7a9;
  local_268 = local_7e0;
  FUN_1413f8b0a(&DAT_14cc16af8);
  FUN_1447a1747(local_7c0,local_7b8);
  if (local_7c0 != 0) {
    FUN_1400020a8();
  }
  if (local_7d0 != 0) {
    FUN_1400020a8();
  }
  if (local_7e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_820[0] != 0) {
    FUN_1400020a8();
  }
  if (local_810[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_7f0,local_7e8);
  if (local_7f0 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x80;
  do {
    if (*(longlong *)((longlong)local_550 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  FUN_1447a1747(local_748,local_740);
  if (local_748 != 0) {
    FUN_1400020a8();
  }
  if (local_758 != 0) {
    FUN_1400020a8();
  }
  if (local_768[0] != 0) {
    FUN_1400020a8();
  }
  if (local_7a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_798[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_778,local_770);
  if (local_778 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x90;
  do {
    if (*(longlong *)((longlong)local_4d0 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  FUN_1447a1747(local_6d0,local_6c8);
  if (local_6d0 != 0) {
    FUN_1400020a8();
  }
  if (local_6e0 != 0) {
    FUN_1400020a8();
  }
  if (local_6f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_730[0] != 0) {
    FUN_1400020a8();
  }
  if (local_720[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_700,local_6f8);
  if (local_700 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0xb0;
  do {
    if (*(longlong *)((longlong)local_440 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  FUN_1447a1747(local_658,local_650);
  if (local_658 != 0) {
    FUN_1400020a8();
  }
  if (local_668 != 0) {
    FUN_1400020a8();
  }
  if (local_678[0] != 0) {
    FUN_1400020a8();
  }
  if (local_6b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_6a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_688,local_680);
  if (local_688 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0xc0;
  do {
    if (*(longlong *)((longlong)&local_270 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  FUN_1447a1747(local_5e0,local_5d8);
  if (local_5e0 != 0) {
    FUN_1400020a8();
  }
  if (local_5f0 != 0) {
    FUN_1400020a8();
  }
  if (local_600[0] != 0) {
    FUN_1400020a8();
  }
  if (local_640[0] != 0) {
    FUN_1400020a8();
  }
  if (local_630[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_610,local_608);
  if (local_610 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x30;
  do {
    if (*(longlong *)((longlong)alStack_390 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  FUN_1447a1747(local_568,local_560);
  if (local_568 != 0) {
    FUN_1400020a8();
  }
  if (local_578 != 0) {
    FUN_1400020a8();
  }
  if (local_588[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5b8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_598,local_590);
  if (local_598 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x90;
  do {
    if (*(longlong *)((longlong)local_360 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  atexit(FUN_1445157c7);
  FUN_140056680(&local_260,L"MI_Default_Opaque");
  FUN_140056680(local_250,L"MI_Default_Mask");
  FUN_140056680(local_240,L"MI_Default_Blend");
  FUN_140056680(local_230,L"MI_Unlit_Opaque");
  FUN_140056680(local_220,L"MI_Unlit_Mask");
  FUN_140056680(local_210,L"MI_Unlit_Blend");
  FUN_140056680(local_200,L"MI_ClearCoat_Opaque");
  FUN_140056680(local_1f0,L"MI_ClearCoat_Mask");
  FUN_140056680(local_1e0,L"MI_ClearCoat_Blend");
  FUN_140056680(local_1d0,L"MI_Sheen_Opaque");
  FUN_140056680(local_1c0,L"MI_Sheen_Mask");
  FUN_140056680(local_1b0,L"MI_Sheen_Blend");
  FUN_140056680(local_1a0,L"MI_Transmission");
  FUN_140056680(local_190,L"MI_SpecularGlossiness_Opaque");
  FUN_140056680(local_180,L"MI_SpecularGlossiness_Mask");
  FUN_140056680(local_170,L"MI_SpecularGlossiness_Blend");
  FUN_140056680(local_160,L"MI_Default_Opaque_DS");
  FUN_140056680(local_150,L"MI_Default_Mask_DS");
  FUN_140056680(local_140,L"MI_Default_Blend_DS");
  FUN_140056680(local_130,L"MI_Unlit_Opaque_DS");
  FUN_140056680(local_120,L"MI_Unlit_Mask_DS");
  FUN_140056680(local_110,L"MI_Unlit_Blend_DS");
  FUN_140056680(local_100,L"MI_ClearCoat_Opaque_DS");
  FUN_140056680(local_f0,L"MI_ClearCoat_Mask_DS");
  FUN_140056680(local_e0,L"MI_ClearCoat_Blend_DS");
  FUN_140056680(local_d0,L"MI_Sheen_Opaque_DS");
  FUN_140056680(local_c0,L"MI_Sheen_Mask_DS");
  FUN_140056680(local_b0,L"MI_Sheen_Blend_DS");
  FUN_140056680(local_a0,L"MI_Transmission_DS");
  FUN_140056680(local_90,L"MI_SpecularGlossiness_Opaque_DS");
  FUN_140056680(local_80,L"MI_SpecularGlossiness_Mask_DS");
  FUN_140056680(local_70,L"MI_SpecularGlossiness_Blend_DS");
  local_428 = local_60;
  local_430 = &local_260;
  FUN_141469cae(&DAT_14cc16b48);
  lVar3 = 0x200;
  do {
    if (*(longlong *)((longlong)&local_270 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  atexit(FUN_1445157f6);
  _DAT_14cc16b58 = 0;
  uRam000000014cc16b60 = 0;
  _DAT_14cc16b68 = 0x3ff0000000000000;
  _DAT_14cc16b70 = 0;
  uRam000000014cc16b78 = 0;
  _DAT_14cc16b80 = 0x3ff0000000000000;
  _DAT_14cc16b88 = 0;
  _DAT_14cc16b90 = 0x3ff0000000000000;
  _DAT_14cc16b98 = 0;
  _DAT_14cc16ba0 = 0;
  _DAT_14cc16ba8 = 0x3f800000;
  DAT_14cc16bd0 = 0;
  DAT_14cc16bd8 = 0;
  DAT_14cc16bb0 = 0;
  _DAT_14cc16bb8 = 0;
  _DAT_14cc16bdc = 0xffffffff00000080;
  DAT_14cc16be4 = 0;
  DAT_14cc16bf0 = 0;
  DAT_14cc16bf8 = 0;
  atexit(FUN_14451641d);
  ppuStack_830 = (undefined **)0x0;
  local_828 = 0;
  local_838 = 4;
  FUN_14282b410(L"/Script/InterchangePipelines",&PTR_FUN_14bcca180,1,&PTR_FUN_14bcca0e0);
  local_260 = (char *)0x800000014bcca1a8;
  local_430 = (char **)CONCAT44(local_430._4_4_,0x14);
  local_258 = FUN_14577453c();
  local_254 = 1;
  FUN_14672f1f2(&local_260);
  if ((local_60[0] ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451d388 FUN_14451d388 body=456 status=ok
// SIG undefined FUN_14451d388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d388(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = &DAT_14a19662d;
  local_50 = 4;
  local_4c = 0;
  FUN_14001a6c0(&local_58,1);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cc16d18);
  if (cVar1 == '\0') {
    _DAT_14cc16d18 = 0;
    uRam000000014cc16d20 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkAnimationCore",0,0,&PTR_FUN_14bccac10);
  local_58 = (undefined *)0x800000014bccad66;
  local_44 = 0x15;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14171c728(&DAT_14cc16d40,&local_58);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkAnimationCore",&PTR_FUN_14bccb550,1,&PTR_FUN_14bccb520);
  FUN_1446f470e(&DAT_14cc16d90,L"GetRemappedBoneName",1);
  FUN_1446f470e(&DAT_14cc16da0,L"GetRemappedCurveName",1);
  FUN_1446f470e(&DAT_14cc16db0,L"RemapCurveElements",1);
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkAnimationCore",&PTR_FUN_14bccbcb0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkAnimationCore",&PTR_FUN_14bccc030,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451d554 FUN_14451d554 body=69 status=ok
// SIG undefined FUN_14451d554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d554(void)

{
  _DAT_14cc16e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451d596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16e08,1);
  return;
}



// FUNCTION 14451d599 FUN_14451d599 body=69 status=ok
// SIG undefined FUN_14451d599(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d599(void)

{
  _DAT_14cc16e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451d5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16e18,1);
  return;
}



// FUNCTION 14451d5de FUN_14451d5de body=69 status=ok
// SIG undefined FUN_14451d5de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d5de(void)

{
  _DAT_14cc16e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451d620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16e28,1);
  return;
}



// FUNCTION 14451d623 FUN_14451d623 body=69 status=ok
// SIG undefined FUN_14451d623(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d623(void)

{
  _DAT_14cc16e30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451d665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16e38,1);
  return;
}



// FUNCTION 14451d668 FUN_14451d668 body=91 status=ok
// SIG undefined FUN_14451d668(void)

undefined1 FUN_14451d668(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x70));
    FUN_149448b0e(param_2,lVar1 + 0x20);
    FUN_1494490fa(param_2,lVar1);
    FUN_149447ffa(param_2,lVar1 + 0x10);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x70));
  }
  return 1;
}



// FUNCTION 14451d6c4 FUN_14451d6c4 body=141 status=ok
// SIG undefined FUN_14451d6c4(void)

void FUN_14451d6c4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 0xe));
  FUN_145d6c6cb(*puVar1,*(undefined4 *)(puVar1 + 1));
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    FUN_14944948e(puVar1,0);
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  if (*(int *)((longlong)puVar1 + 0x1c) != 0) {
    FUN_1448f21ac(puVar1 + 2,0);
  }
  FUN_1494494fe(puVar1 + 4,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 0xe));
  FUN_149447710(puVar1);
  FUN_149447678(param_1);
  return;
}



// FUNCTION 14451d751 FUN_14451d751 body=346 status=ok
// SIG undefined FUN_14451d751(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d751(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_20,&DAT_14cc16df0);
  if (cVar1 == '\0') {
    _DAT_14cc16df0 = 0;
    uRam000000014cc16df8 = 0;
  }
  if (local_20 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_20 = &DAT_14a19662d;
  local_18 = 4;
  local_14 = 0;
  FUN_14001a6c0(&local_20,1);
  local_28 = 0;
  FUN_141471170(&DAT_14cc16e00,L"USD.MaxNumVerticesCollapsedMesh",&DAT_14c76513c,
                L"Maximum number of vertices that a combined Mesh can have for us to collapse it into a single StaticMesh"
               );
  atexit(FUN_14451d554);
  local_28 = 0;
  FUN_14153156c(&DAT_14cc16e10,L"USD.GeometryCache.Enable",&DAT_14c765140,
                L"Use GeometryCache instead of static meshes for loading animated meshes");
  atexit(FUN_14451d599);
  local_28 = 0;
  FUN_141471170(&DAT_14cc16e20,L"USD.GeometryCache.MaxDepth",&DAT_14c765144,
                L"Maximum distance between an animated mesh prim to its collapsed geometry cache root"
               );
  atexit(FUN_14451d5de);
  local_28 = 0;
  FUN_141471170(&DAT_14cc16e30,L"USD.NumPerPrimLocks",&DAT_14c765148,
                L"Maximum number of locks that are distributed between all the prim info structs that the USDInfoCache keeps internally. More locks can imply better performance for the info cache build, but the total number of locks available on the system is finite"
               );
  atexit(FUN_14451d623);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451d8ac FUN_14451d8ac body=85 status=ok
// SIG undefined FUN_14451d8ac(void)

void FUN_14451d8ac(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  FUN_1494499bc(param_2,lVar1);
  FUN_14944a0fc(param_2,lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00014451d8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 14451d902 FUN_14451d902 body=77 status=ok
// SIG undefined FUN_14451d902(void)

void FUN_14451d902(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  FUN_14944a94c(lVar1,0);
  FUN_14944aafe(lVar1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00014451d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 14451d94f FUN_14451d94f body=69 status=ok
// SIG undefined FUN_14451d94f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d94f(void)

{
  _DAT_14cc16e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451d991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16e50,1);
  return;
}



// FUNCTION 14451d994 FUN_14451d994 body=264 status=ok
// SIG undefined FUN_14451d994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451d994(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_24;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = (char *)0x800000014bccc954;
  local_24 = 10;
  local_18 = FUN_14577453c();
  local_14 = 1;
  FUN_14672f788(&local_20);
  local_38 = 0;
  FUN_14153156c(&DAT_14cc16e48,L"USD.InstancingAwareTranslation",&DAT_14c765178,
                L"Enabling this lets the USDImporter skip some extra steps during translation when it encounters multiple instance prims of the same (static) Mesh prototype prim."
               );
  atexit(FUN_14451d94f);
  FUN_1400b22c2(&local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_20,&DAT_14cc16e58);
  if (cVar1 == '\0') {
    _DAT_14cc16e58 = 0;
    uRam000000014cc16e60 = 0;
  }
  if (local_20 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_20 = "AssetRegistry";
  local_18 = 0xd;
  local_14 = 0;
  uVar2 = FUN_14001a6c0(&local_20,1);
  _DAT_14cc16e68 = (ulonglong)uVar2;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451daa2 FUN_14451daa2 body=1422 status=ok
// SIG undefined FUN_14451daa2(void)

void FUN_14451daa2(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *in_stack_00000028;
  undefined1 auStack_1e8 [32];
  undefined **local_1c8;
  undefined1 local_1c0 [56];
  longlong local_188;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_130;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1c8 = &PTR_FUN_14bccedc0;
  FUN_14944c8dc(local_1c0,param_1 + 0x20);
  local_178 = *(undefined8 *)(param_1 + 0x68);
  puVar11 = (undefined8 *)&local_170;
  local_130 = 0;
  FUN_14944d080(puVar11,&local_1c8);
  local_118 = (int)in_stack_00000028[0x24];
  local_128 = in_stack_00000028[0x22];
  lStack_120 = in_stack_00000028[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20)
  ;
  uStack_10c = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
  local_100 = (int)in_stack_00000028[0x27];
  uStack_fc = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
  uStack_f8 = (int)in_stack_00000028[0x28];
  uStack_f4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
  local_f0 = (int)in_stack_00000028[0x29];
  uStack_ec = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
  uStack_e8 = (int)in_stack_00000028[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
  local_e0 = in_stack_00000028[0x2b];
  local_d0 = (int)in_stack_00000028[0x2d];
  local_d8 = in_stack_00000028[0x2c];
  local_c8 = 0;
  iVar4 = (int)in_stack_00000028[0x2f];
  lVar8 = in_stack_00000028[0x2e];
  local_c0 = CONCAT44(local_c0._4_4_,iVar4);
  if (iVar4 == 0) {
    local_c0 = 0;
  }
  else {
    FUN_14753cf4a(&local_c8,iVar4,0);
    FUN_14753cfbd(local_c8,lVar8,iVar4);
  }
  local_b8 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x31);
  pvVar6 = (void *)in_stack_00000028[0x30];
  local_b0 = CONCAT44(local_b0._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_b0 = (ulonglong)uVar5;
  }
  else {
    FUN_1456c5740(&local_b8,uVar5,0);
    memcpy(local_b8,pvVar6,(longlong)(int)uVar5 << 3);
  }
  local_a8 = (char)in_stack_00000028[0x32];
  local_a0 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x34);
  pvVar6 = (void *)in_stack_00000028[0x33];
  local_98 = CONCAT44(local_98._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_98 = (ulonglong)uVar5;
  }
  else {
    FUN_1447bda9e(&local_a0,uVar5,0);
    memcpy(local_a0,pvVar6,(longlong)(int)uVar5 << 2);
  }
  bVar3 = local_130;
  puVar10 = (undefined8 *)&local_80;
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
  uStack_90 = (undefined5)in_stack_00000028[0x35];
  local_8b = (undefined3)((ulonglong)in_stack_00000028[0x35] >> 0x28);
  bVar7 = local_40 & 0xfc;
  local_40 = bVar7 + 2;
  if ((local_130 & 1) != 0) {
    local_130 = local_130 & 0xfe;
    local_40 = bVar7 | bVar3 & 2 | 1;
    local_50 = local_140;
    uStack_48 = uStack_138;
    local_60 = local_150;
    uStack_58 = uStack_148;
    local_70 = local_160;
    uStack_68 = uStack_158;
    local_80 = local_170;
    uStack_7c = uStack_16c;
    uStack_78 = uStack_168;
    uStack_74 = uStack_164;
  }
  iVar4 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar4 + 1U) {
    FUN_140ac5684(in_stack_00000028,iVar4);
  }
  lVar8 = *in_stack_00000028;
  lVar9 = (longlong)iVar4 * 0xf0;
  *(undefined4 *)(lVar8 + 0x20 + lVar9) = uStack_108;
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
  *puVar1 = CONCAT44(uStack_114,local_118);
  puVar1[1] = CONCAT44(uStack_10c,uStack_110);
  *(longlong *)(lVar8 + lVar9) = local_128;
  ((longlong *)(lVar8 + lVar9))[1] = lStack_120;
  *(longlong *)(lVar8 + 0x48 + lVar9) = local_e0;
  puVar2 = (undefined4 *)(lVar8 + 0x38 + lVar9);
  *puVar2 = local_f0;
  puVar2[1] = uStack_ec;
  puVar2[2] = uStack_e8;
  puVar2[3] = uStack_e4;
  puVar2 = (undefined4 *)(lVar8 + 0x28 + lVar9);
  *puVar2 = local_100;
  puVar2[1] = uStack_fc;
  puVar2[2] = uStack_f8;
  puVar2[3] = uStack_f4;
  *(longlong *)(lVar8 + 0x50 + lVar9) = local_d8;
  *(undefined4 *)(lVar8 + 0x58 + lVar9) = local_d0;
  *(undefined8 *)(lVar8 + 0x60 + lVar9) = 0;
  *(longlong *)(lVar8 + 0x60 + lVar9) = local_c8;
  local_c8 = 0;
  *(undefined4 *)(lVar8 + 0x68 + lVar9) = (undefined4)local_c0;
  *(undefined4 *)(lVar8 + 0x6c + lVar9) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined8 *)(lVar8 + 0x70 + lVar9) = 0;
  *(void **)(lVar8 + 0x70 + lVar9) = local_b8;
  local_b8 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x78 + lVar9) = (undefined4)local_b0;
  *(undefined4 *)(lVar8 + 0x7c + lVar9) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(lVar8 + 0x80 + lVar9) = local_a8;
  *(undefined8 *)(lVar8 + 0x88 + lVar9) = 0;
  *(void **)(lVar8 + 0x88 + lVar9) = local_a0;
  local_a0 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x90 + lVar9) = (undefined4)local_98;
  *(undefined4 *)(lVar8 + 0x94 + lVar9) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)(lVar8 + 0x9d + lVar9) = CONCAT53(uStack_88,local_8b);
  *(ulonglong *)(lVar8 + 0x98 + lVar9) = CONCAT35(local_8b,uStack_90);
  bVar3 = *(byte *)(lVar8 + 0xe8 + lVar9);
  *(byte *)(lVar8 + 0xe8 + lVar9) = bVar3 & 0xfc | 2;
  if ((local_40 & 1) != 0) {
    lVar8 = lVar8 + lVar9;
    *(byte *)(lVar8 + 0xe8) = bVar3 | 3;
    *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) & 0xfd | local_40 & 2;
    *(undefined8 *)(lVar8 + 0xd8) = local_50;
    *(undefined8 *)(lVar8 + 0xe0) = uStack_48;
    *(undefined8 *)(lVar8 + 200) = local_60;
    *(undefined8 *)(lVar8 + 0xd0) = uStack_58;
    *(undefined4 *)(lVar8 + 0xb8) = (undefined4)local_70;
    *(undefined4 *)(lVar8 + 0xbc) = local_70._4_4_;
    *(undefined4 *)(lVar8 + 0xc0) = (undefined4)uStack_68;
    *(undefined4 *)(lVar8 + 0xc4) = uStack_68._4_4_;
    *(undefined4 *)(lVar8 + 0xa8) = local_80;
    *(undefined4 *)(lVar8 + 0xac) = uStack_7c;
    *(undefined4 *)(lVar8 + 0xb0) = uStack_78;
    *(undefined4 *)(lVar8 + 0xb4) = uStack_74;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    if ((local_40 & 2) == 0) {
      puVar10 = (undefined8 *)CONCAT44(uStack_7c,local_80);
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*puVar10)(puVar10,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_7c,local_80));
    }
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_130 & 1) != 0) {
    if ((local_130 & 2) == 0) {
      puVar11 = (undefined8 *)CONCAT44(uStack_16c,local_170);
    }
    local_130 = local_130 & 0xfe;
    (**(code **)*puVar11)(puVar11,0);
    if ((local_130 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_16c,local_170));
    }
  }
  local_1c8 = &PTR_FUN_14bccedc0;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451e05c FUN_14451e05c body=583 status=ok
// SIG undefined FUN_14451e05c(void)

void FUN_14451e05c(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong *local_78;
  uint *local_70;
  uint *local_68;
  undefined **local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 4);
    if ((longlong)local_50 != 0) {
      plVar8 = (longlong *)(param_1 + 8);
      lVar9 = 0;
      local_68 = (uint *)(param_2 + 4);
      local_70 = (uint *)(param_2 + 0x10);
      do {
        uVar4 = *(ulonglong *)(local_58 + lVar9);
        if (((((uVar4 >> 0x20 != 0) && (uVar6 = (uint)uVar4, -1 < (int)uVar6)) &&
             ((int)uVar6 < DAT_14c9647dc)) &&
            (((plVar7 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
              plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(uVar4 >> 0x20))) &&
             (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
              ((*plVar7 != 0 && (lVar1 = FUN_14944cd38(), lVar1 != 0)))))))) &&
           ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
          lVar2 = *(longlong *)(lVar1 + 0x650);
          local_78 = plVar8;
          if ((*plVar8 == 0) || (*plVar8 == lVar2)) {
            if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar2);
            }
            *local_78 = lVar2;
          }
          else {
            FUN_149063ee0(lVar1);
          }
          local_60 = &PTR_FUN_14bccedd0;
          lVar2 = DAT_14cc16f10;
          if (DAT_14cc16f10 == 0) {
            lVar2 = FUN_14570767c(&DAT_14cc16f10,0);
          }
          lVar3 = FUN_14027385c(param_5 + 0x110);
          if (lVar3 != 0) {
            FUN_14027378e(lVar3,lVar1,lVar2,&local_60);
          }
          plVar8 = local_78;
          *(undefined1 *)(lVar1 + 0x6c0) = 1;
          uVar6 = *(uint *)(param_2 + 0x24);
          uVar4 = 0;
          if (SBORROW4(0,uVar6)) {
            puVar5 = local_68;
            if (*(int *)(param_2 + 0x20) == 0) {
              puVar5 = local_70;
            }
            uVar6 = *puVar5;
            uVar4 = (ulonglong)puVar5[1];
          }
          uVar10 = FUN_14944bd54(local_78,*(undefined4 *)(lVar1 + 0x6bc),
                                 (ulonglong)uVar6 | uVar4 << 0x20,*(undefined8 *)(param_2 + 0x18));
          if (((*(char *)(lVar1 + 0x6c0) == '\x01') && (*(longlong *)(lVar1 + 0x650) != 0)) &&
             (*(char *)(lVar1 + 0x658) == '\x01')) {
            local_88 = 1;
            FUN_144404370(lVar1,uVar10,1,*(uint *)(param_1 + 0x20) & 0xffffff01);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)local_50 * 8 != lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14451e2a4 FUN_14451e2a4 body=256 status=ok
// SIG undefined FUN_14451e2a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451e2a4(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x800000014bccd994;
  local_24 = 0x13;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14672f8a8(&local_38);
  _DAT_14cc16e8c = 0xffffffff;
  _DAT_14cc16e90 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCacheTracks",&PTR_FUN_14bcce170,1,&PTR_FUN_14bcce140);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GeometryCacheTracks",0,0,&PTR_FUN_14bcce400);
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GeometryCacheTracks",&PTR_FUN_14bcce960,1,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451e3a8 FUN_14451e3a8 body=69 status=ok
// SIG undefined FUN_14451e3a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451e3a8(void)

{
  _DAT_14cc16f30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451e3ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16f38,1);
  return;
}



// FUNCTION 14451e3ed FUN_14451e3ed body=69 status=ok
// SIG undefined FUN_14451e3ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451e3ed(void)

{
  _DAT_14cc16f40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451e42f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc16f48,1);
  return;
}



// FUNCTION 14451e432 FUN_14451e432 body=4188 status=ok
// SIG undefined FUN_14451e432(void)

void FUN_14451e432(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  ulonglong uVar3;
  float fVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong *plVar8;
  uint *puVar9;
  wchar_t **ppwVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  wchar_t **ppwVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_2e8 [44];
  int local_2bc;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  longlong *local_2a0 [2];
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  longlong *local_288 [2];
  undefined8 local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong *plStack_260;
  longlong *local_258 [2];
  wchar_t *local_248;
  undefined4 local_240;
  undefined8 local_238;
  longlong *local_230;
  wchar_t **local_228;
  ulonglong *local_220;
  wchar_t *local_218;
  longlong *plStack_210;
  wchar_t *local_208;
  undefined8 uStack_200;
  wchar_t **local_1f8;
  undefined8 local_1f0;
  ulonglong auStack_1e8 [12];
  undefined2 local_183;
  undefined1 local_17c;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_2b8 = param_1 + 0x18;
  puVar1 = (uint *)(param_1 + 0x28);
  do {
    iVar21 = *(int *)(param_1 + 0x40);
    uVar26 = 1;
    uVar28 = 0;
    iVar19 = 0;
    iVar13 = 0;
    if (iVar21 != 0) {
      puVar9 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar27 = *puVar9;
      if (uVar27 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        uVar28 = 0;
        uVar26 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar26 = 0;
        }
        iVar19 = 0;
        do {
          if (uVar26 == uVar28) {
            fVar31 = 0.0;
            fVar32 = 0.0;
            fVar29 = 0.0;
            goto LAB_14451e569;
          }
          iVar19 = iVar19 + 0x20;
          uVar27 = puVar9[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar28 = 0;
      }
      uVar26 = (ulonglong)(-uVar27 & uVar27);
      uVar3 = uVar26 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar13 = (iVar19 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar13) {
        iVar13 = iVar21;
      }
    }
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar29 = 0.0;
    if (iVar13 != iVar21) {
      uVar27 = 0xffffffff;
      do {
        lVar23 = (**(code **)(**(longlong **)
                                (*(longlong *)
                                  (*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar13 * 0x18) +
                                0x10) + 0x38))();
        uVar27 = ~(uint)uVar26 & uVar27;
        puVar9 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar20 = *(int *)(param_1 + 0x40);
        iVar13 = (int)uVar28;
        lVar22 = (longlong)iVar13;
        uVar25 = puVar9[lVar22] & uVar27;
        if (uVar25 == 0) {
          iVar17 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar17 = iVar20 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar14 = iVar17;
          if (iVar17 < iVar13) {
            iVar14 = iVar13;
          }
          if (iVar13 < iVar17) {
            lVar24 = 0;
            do {
              uVar25 = puVar9[lVar22 + lVar24 + 1];
              if (uVar25 != 0) {
                uVar28 = (ulonglong)(iVar13 + (int)lVar24 + 1);
                uVar27 = 0xffffffff;
                goto LAB_14451e6ea;
              }
              iVar19 = iVar19 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar14 - lVar22 != lVar24);
            uVar27 = 0xffffffff;
            iVar13 = iVar14;
          }
          uVar28 = (ulonglong)(iVar13 + 1);
          iVar13 = iVar20;
        }
        else {
LAB_14451e6ea:
          uVar26 = (ulonglong)(-uVar25 & uVar25);
          uVar3 = uVar26 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar13 = (iVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar13) {
            iVar13 = iVar20;
          }
        }
        fVar32 = fVar32 + *(float *)(lVar23 + 8);
        if (fVar31 <= *(float *)(lVar23 + 4)) {
          fVar31 = *(float *)(lVar23 + 4);
        }
        fVar29 = fVar29 + *(float *)(lVar23 + 0xc);
      } while (iVar13 != iVar21);
    }
LAB_14451e569:
    plVar8 = (longlong *)FUN_145ba34fa();
    lVar23 = plVar8[0x22];
    if (lVar23 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar23 = plVar8[0x22];
    }
    fVar4 = *(float *)(lVar23 + 0x38);
    fVar30 = *(float *)(lVar23 + 0x3c);
    if (((fVar30 < fVar32) || (fVar4 < fVar31)) ||
       (((fVar32 < fVar30 * 0.75 || (fVar31 < fVar4)) && (*(int *)(param_1 + 0x6c) == 0)))) {
      iVar21 = *(int *)(param_1 + 0x40);
      if (iVar21 == 0) {
        uVar26 = 1;
        uVar28 = 0;
        iVar19 = 0;
        iVar13 = 0;
      }
      else {
        puVar9 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar9 = puVar1;
        }
        uVar27 = *puVar9;
        if (uVar27 == 0) {
          iVar13 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar13 = iVar21 + -1;
          }
          uVar28 = 0;
          uVar26 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar26 = uVar28;
          }
          iVar19 = 0;
          do {
            if (uVar26 == uVar28) goto LAB_14451e75b;
            iVar19 = iVar19 + 0x20;
            uVar27 = puVar9[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar27 == 0);
        }
        else {
          uVar28 = 0;
          iVar19 = 0;
        }
        uVar26 = (ulonglong)(-uVar27 & uVar27);
        uVar3 = uVar26 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar13 = (iVar19 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar13) {
          iVar13 = iVar21;
        }
      }
      if (iVar13 != iVar21) {
        fVar30 = fVar30 / fVar29;
        fVar31 = fVar30;
        if (fVar4 <= fVar30) {
          fVar31 = fVar4;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        uVar27 = 0xffffffff;
        do {
          plVar8 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar13 * 0x18) +
                    0x10);
          lVar23 = (**(code **)(*plVar8 + 0x38))(plVar8);
          (**(code **)(*plVar8 + 0x40))(plVar8,*(float *)(lVar23 + 0xc) * fVar30,fVar31);
          uVar27 = ~(uint)uVar26 & uVar27;
          puVar9 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar9 = puVar1;
          }
          iVar20 = *(int *)(param_1 + 0x40);
          iVar13 = (int)uVar28;
          lVar23 = (longlong)iVar13;
          uVar25 = puVar9[lVar23] & uVar27;
          if (uVar25 == 0) {
            iVar17 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar17 = iVar20 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar19 = iVar19 + 0x20;
            iVar14 = iVar17;
            if (iVar17 < iVar13) {
              iVar14 = iVar13;
            }
            if (iVar13 < iVar17) {
              lVar22 = 0;
              do {
                uVar25 = puVar9[lVar23 + lVar22 + 1];
                if (uVar25 != 0) {
                  uVar28 = (ulonglong)(iVar13 + (int)lVar22 + 1);
                  uVar27 = 0xffffffff;
                  goto LAB_14451ea16;
                }
                iVar19 = iVar19 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar14 - lVar23 != lVar22);
              uVar27 = 0xffffffff;
              iVar13 = iVar14;
            }
            uVar28 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar20;
          }
          else {
LAB_14451ea16:
            uVar26 = (ulonglong)(-uVar25 & uVar25);
            uVar3 = uVar26 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            iVar13 = (iVar19 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar13) {
              iVar13 = iVar20;
            }
          }
        } while (iVar13 != iVar21);
      }
    }
LAB_14451e75b:
    iVar21 = *(int *)(param_1 + 0x40);
    iVar13 = 0;
    if (iVar21 == 0) {
      uVar26 = 1;
      uVar28 = 0;
      iVar20 = 0;
      iVar19 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar27 = *puVar9;
      if (uVar27 == 0) {
        iVar19 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar19 = iVar21 + -1;
        }
        uVar28 = 0;
        uVar26 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar26 = uVar28;
        }
        iVar20 = 0;
        do {
          if (uVar26 == uVar28) {
            iVar13 = 0;
            goto LAB_14451e7e8;
          }
          iVar20 = iVar20 + 0x20;
          uVar27 = puVar9[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar28 = 0;
        iVar20 = 0;
      }
      uVar26 = (ulonglong)(-uVar27 & uVar27);
      uVar3 = uVar26 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar19 = (iVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar19) {
        iVar19 = iVar21;
      }
    }
    if (iVar19 != iVar21) {
      uVar27 = 0xffffffff;
      iVar13 = 0;
      do {
        local_2bc = iVar13;
        local_208 = (wchar_t *)0x0;
        uStack_200 = 0;
        plVar8 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar19 * 0x18) + 0x10
                  );
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_208);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - (int)uStack_200;
        iVar13 = (**(code **)(*plVar8 + 0x10))(plVar8);
        if (local_208 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar27 = uVar27 & ~(uint)uVar26;
        puVar9 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar17 = *(int *)(param_1 + 0x40);
        iVar19 = (int)uVar28;
        lVar23 = (longlong)iVar19;
        uVar25 = puVar9[lVar23] & uVar27;
        if (uVar25 == 0) {
          iVar14 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar14 = iVar17 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar19) {
            iVar15 = iVar19;
          }
          if (iVar19 < iVar14) {
            lVar22 = 0;
            do {
              uVar25 = puVar9[lVar23 + lVar22 + 1];
              if (uVar25 != 0) {
                uVar28 = (ulonglong)(iVar19 + (int)lVar22 + 1);
                uVar27 = 0xffffffff;
                goto LAB_14451e906;
              }
              iVar20 = iVar20 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar15 - lVar23 != lVar22);
            uVar27 = 0xffffffff;
            iVar19 = iVar15;
          }
          uVar28 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar17;
        }
        else {
LAB_14451e906:
          uVar26 = (ulonglong)(-uVar25 & uVar25);
          uVar3 = uVar26 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar19 = (iVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar19) {
            iVar19 = iVar17;
          }
        }
        iVar13 = local_2bc + iVar13;
      } while (iVar19 != iVar21);
    }
LAB_14451e7e8:
    iVar21 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x6c);
    uVar27 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
    if ((uVar27 != 0 && *(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x20)) && 0 < iVar21) {
      local_218 = (wchar_t *)0x0;
      plStack_210 = (longlong *)0x0;
      ppwVar10 = &local_218;
      FUN_14944d380(local_2b8,ppwVar10);
      local_1f8 = (wchar_t **)0x0;
      local_1f0 = (undefined8 *)CONCAT44(0x80,uVar27);
      uVar25 = uVar27 + 0x1f;
      ppwVar16 = &local_208;
      if (uVar27 < 0x81) {
LAB_14451eb2a:
        uVar25 = uVar25 >> 3 & 0xfffffffc;
        iVar19 = (int)CONCAT71((int7)((ulonglong)ppwVar10 >> 8),0xff);
      }
      else {
        ppwVar10 = (wchar_t **)0x0;
        FUN_1446efa72(&local_1f8,0,uVar25 >> 5,4);
        local_1f0 = (undefined8 *)(CONCAT44(uVar25,(int)local_1f0) & 0xffffffe0ffffffff);
        ppwVar16 = local_1f8;
        if (local_1f8 == (wchar_t **)0x0) {
          ppwVar16 = &local_208;
        }
        if (uVar27 < 0x101) goto LAB_14451eb2a;
        uVar25 = (uVar25 >> 5) << 2;
        iVar19 = (int)CONCAT71((int7)((ulonglong)ppwVar10 >> 8),0xff);
      }
      memset(ppwVar16,iVar19,(ulonglong)uVar25);
      iVar19 = (int)local_1f0 + 0x1f;
      if (-1 < (int)local_1f0) {
        iVar19 = (int)local_1f0;
      }
      if ((int)local_1f0 % 0x20 != 0) {
        ppwVar10 = local_1f8;
        if (local_1f8 == (wchar_t **)0x0) {
          ppwVar10 = &local_208;
        }
        bVar12 = -(char)((int)local_1f0 % 0x20);
        *(uint *)((longlong)ppwVar10 + (longlong)(iVar19 >> 5) * 4) =
             (*(uint *)((longlong)ppwVar10 + (longlong)(iVar19 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
      while( true ) {
        ppwVar10 = local_1f8;
        if (local_1f8 == (wchar_t **)0x0) {
          ppwVar10 = &local_208;
        }
        if ((int)local_1f0 + 0x1fU < 0x20) break;
        lVar23 = 0;
        ppwVar16 = ppwVar10;
        while (uVar25 = *(uint *)ppwVar16, uVar25 == 0) {
          lVar23 = lVar23 + -0x20;
          ppwVar16 = (wchar_t **)((longlong)ppwVar16 + 4);
          if ((ulonglong)((int)local_1f0 + 0x1fU & 0xffffffe0) + lVar23 == 0) goto LAB_14451ec9a;
        }
        iVar19 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar19 & 1) == 0; iVar19 = iVar19 + 1) {
          }
        }
        if (((int)local_1f0 <= iVar19 - (int)lVar23) || (iVar19 + 1 == (int)lVar23)) break;
        uVar25 = *(uint *)(param_1 + 0x70);
        if ((int)uVar27 <= (int)uVar25) {
          *(undefined4 *)(param_1 + 0x70) = 0;
          uVar25 = 0;
        }
        uVar18 = uVar25 + 0x1f;
        if (-1 < (int)uVar25) {
          uVar18 = uVar25;
        }
        if ((*(uint *)((longlong)ppwVar10 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar25 & 0x1f) & 1
            ) != 0) {
          plVar8 = *(longlong **)(*(longlong *)(local_218 + (longlong)(int)uVar25 * 4) + 0x10);
          iVar19 = (**(code **)(*plVar8 + 0x10))(plVar8);
          if ((iVar19 == 0) || (cVar7 = (**(code **)(*plVar8 + 0x18))(plVar8), cVar7 == '\0')) {
            iVar19 = *(int *)(param_1 + 0x70);
            ppwVar10 = local_1f8;
            if (local_1f8 == (wchar_t **)0x0) {
              ppwVar10 = &local_208;
            }
            iVar20 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar20 = iVar19;
            }
            bVar12 = (byte)iVar19 & 0x1f;
            puVar9 = (uint *)((longlong)ppwVar10 + (longlong)(iVar20 >> 5) * 4);
            *puVar9 = *puVar9 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
          }
          else {
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            iVar21 = iVar21 + -1;
          }
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        if (iVar21 < 1) break;
      }
LAB_14451ec9a:
      if (local_1f8 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if (local_218 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((DAT_14cc16f50 != '\x01') || (iVar13 < 1)) break;
    FUN_14000f986(0x3dcccccd);
  } while( true );
  if ((DAT_14c765ce0 == '\x01') && ((*(longlong *)(param_1 + 0x78) == 0 && (0x17 < iVar13)))) {
    local_268 = 0;
    plStack_260 = (longlong *)0x0;
    FUN_1413a454c(local_258,iVar13,0);
    local_208 = L"GeoCacheStreamingUpdate";
    uStack_200._0_4_ = 0x17;
    FUN_1446e940c(local_28c,&local_208);
    local_208 = L"GeometryCacheStreamer";
    uStack_200._0_4_ = 0x15;
    FUN_1446e940c(local_290,&local_208);
    local_208 = L"Streaming GeometryCache: {0} frames remaining";
    uStack_200 = CONCAT44(uStack_200._4_4_,0x2d);
    FUN_140208c1e(local_288,local_290,local_28c,&local_208);
    FUN_14023409e(&local_278,local_288,1);
    local_208 = (wchar_t *)CONCAT44(local_208._4_4_,4);
    FUN_14023423e(&local_1f8,local_258);
    local_220 = auStack_1e8;
    local_228 = &local_208;
    FUN_14010d304(&local_218);
    local_238 = local_278;
    local_230 = local_270;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_270 + 1) = (int)local_270[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_248,&local_238,&local_218);
    FUN_14007f2db(local_218,(ulonglong)plStack_210 & 0xffffffff);
    if (local_218 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (wchar_t **)0x0) {
      (**(code **)(*local_1f8 + 8))();
    }
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_270 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_270 + 0x10))(local_270);
        }
      }
    }
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    if (local_288[0] != (longlong *)0x0) {
      (**(code **)(*local_288[0] + 0x10))();
    }
    plVar8 = plStack_260;
    if (plStack_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_260)(plStack_260);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_1469b1e6a(&local_208,&local_248);
    local_17c = 0;
    local_183 = 0;
    uVar11 = FUN_1413f66b6();
    FUN_146a1e072(uVar11,&local_218,&local_208);
    plVar8 = plStack_210;
    if ((wchar_t **)(param_1 + 0x78) != &local_218) {
      *(wchar_t **)(param_1 + 0x78) = local_218;
      local_218 = (wchar_t *)0x0;
      plVar5 = *(longlong **)(param_1 + 0x80);
      if (plStack_210 != plVar5) {
        plStack_210 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x80) = plVar8;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar5 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
    }
    plVar8 = plStack_210;
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_210 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_210)(plStack_210);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    pwVar6 = *(wchar_t **)(param_1 + 0x78);
    if (pwVar6 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar6 + 0x278))(pwVar6,1);
    }
    FUN_1469b2018(&local_208);
    if (local_248 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_248 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_14451f125;
  if (iVar13 < 1) {
    local_208 = L"GeoCacheStreamingFinished";
    uStack_200._0_4_ = 0x19;
    FUN_1446e940c(&local_228,&local_208);
    local_208 = L"GeometryCacheStreamer";
    uStack_200._0_4_ = 0x15;
    FUN_1446e940c(&local_238,&local_208);
    local_208 = L"Finished streaming GeometryCache";
    uStack_200 = CONCAT44(uStack_200._4_4_,0x20);
    FUN_140208c1e(&local_218,&local_238,&local_228,&local_208);
    plVar8 = *(longlong **)(param_1 + 0x78);
    local_208 = local_218;
    if (local_218 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_218 + 8))();
    }
    uStack_200 = CONCAT44(uStack_200._4_4_,plStack_210._0_4_);
    local_1f8 = (wchar_t **)CONCAT71(local_1f8._1_7_,1);
    local_1f0 = (undefined8 *)0x0;
    auStack_1e8[0] = 0;
    (**(code **)(*plVar8 + 0x240))(plVar8,&local_208);
    if ((int)auStack_1e8[0] == 0) {
LAB_14451f093:
      if (local_1f0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1f0 != (undefined8 *)0x0) {
      (**(code **)*local_1f0)(local_1f0,0);
      FUN_1446efa72(&local_1f0,0,0,0x10);
      auStack_1e8[0] = auStack_1e8[0] & 0xffffffff00000000;
      goto LAB_14451f093;
    }
    if (local_208 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_208 + 0x10))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x278))(*(longlong **)(param_1 + 0x78),2);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x280))();
    *(undefined8 *)(param_1 + 0x78) = 0;
    plVar8 = *(longlong **)(param_1 + 0x80);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (local_218 == (wchar_t *)0x0) goto LAB_14451f125;
    lVar23 = *(longlong *)local_218;
    local_248 = local_218;
  }
  else {
    local_268 = 0;
    plStack_260 = (longlong *)0x0;
    FUN_1413a454c(local_2a0,iVar13,0);
    local_208 = L"GeoCacheStreamingUpdate";
    uStack_200._0_4_ = 0x17;
    FUN_1446e940c(local_28c,&local_208);
    local_208 = L"GeometryCacheStreamer";
    uStack_200._0_4_ = 0x15;
    FUN_1446e940c(local_290,&local_208);
    local_208 = L"Streaming GeometryCache: {0} frames remaining";
    uStack_200 = CONCAT44(uStack_200._4_4_,0x2d);
    FUN_140208c1e(local_288,local_290,local_28c,&local_208);
    FUN_14023409e(&local_2b0,local_288,1);
    local_208 = (wchar_t *)CONCAT44(local_208._4_4_,4);
    FUN_14023423e(&local_1f8,local_2a0);
    local_220 = auStack_1e8;
    local_228 = &local_208;
    FUN_14010d304(&local_218);
    local_238 = local_2b0;
    local_230 = local_2a8;
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_248,&local_238,&local_218);
    FUN_14007f2db(local_218,(ulonglong)plStack_210 & 0xffffffff);
    if (local_218 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (wchar_t **)0x0) {
      (**(code **)(*local_1f8 + 8))();
    }
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2a8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_2a8)(local_2a8);
        LOCK();
        piVar2 = (int *)((longlong)local_2a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2a8 + 0x10))(local_2a8);
        }
      }
    }
    if (local_2a0[0] != (longlong *)0x0) {
      (**(code **)(*local_2a0[0] + 0x10))();
    }
    if (local_288[0] != (longlong *)0x0) {
      (**(code **)(*local_288[0] + 0x10))();
    }
    plVar8 = plStack_260;
    if (plStack_260 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_260 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_260)(plStack_260);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar8 = *(longlong **)(param_1 + 0x78);
    local_208 = local_248;
    if (local_248 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_248 + 8))(local_248);
    }
    uStack_200 = CONCAT44(uStack_200._4_4_,local_240);
    local_1f8 = (wchar_t **)CONCAT71(local_1f8._1_7_,1);
    local_1f0 = (undefined8 *)0x0;
    auStack_1e8[0] = 0;
    (**(code **)(*plVar8 + 0x240))(plVar8,&local_208);
    if ((int)auStack_1e8[0] == 0) {
LAB_14451ef53:
      if (local_1f0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1f0 != (undefined8 *)0x0) {
      (**(code **)*local_1f0)(local_1f0,0);
      FUN_1446efa72(&local_1f0,0,0,0x10);
      auStack_1e8[0] = auStack_1e8[0] & 0xffffffff00000000;
      goto LAB_14451ef53;
    }
    if (local_208 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_208 + 0x10))();
    }
    if (local_248 == (wchar_t *)0x0) goto LAB_14451f125;
    lVar23 = *(longlong *)local_248;
  }
  (**(code **)(lVar23 + 0x10))(local_248);
LAB_14451f125:
  if ((local_d0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14451f49c FUN_14451f49c body=29 status=ok
// SIG undefined FUN_14451f49c(void)

undefined8 FUN_14451f49c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14451f4ce FUN_14451f4ce body=93 status=ok
// SIG undefined FUN_14451f4ce(void)

void FUN_14451f4ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bccf710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14451f52c FUN_14451f52c body=93 status=ok
// SIG undefined FUN_14451f52c(void)

void FUN_14451f52c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bccf710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14451f58a FUN_14451f58a body=126 status=ok
// SIG undefined FUN_14451f58a(void)

void FUN_14451f58a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bccf710;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014451f5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14451f608 FUN_14451f608 body=20 status=ok
// SIG undefined FUN_14451f608(void)

undefined1 FUN_14451f608(longlong param_1)

{
  FUN_14451e432(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14451f61c FUN_14451f61c body=20 status=ok
// SIG undefined FUN_14451f61c(void)

undefined1 FUN_14451f61c(longlong param_1)

{
  FUN_14451e432(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14451f630 FUN_14451f630 body=247 status=ok
// SIG undefined FUN_14451f630(void)

void FUN_14451f630(void)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc16f30,L"GeometryCache.Streamer.ShowNotification",&DAT_14c765ce0,
                L"Show notification while the GeometryCache streamer is streaming data");
  atexit(FUN_14451e3a8);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc16f40,L"GeometryCache.Streamer.BlockTillFinishStreaming",&DAT_14cc16f50,
                L"Force the GeometryCache streamer to block until it has finished streaming all the requested frames"
               );
  atexit(FUN_14451e3ed);
  local_28 = 0x800000014bccf212;
  local_14 = 0x15;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14672fd44(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/GeometryCacheStreamer",&PTR_FUN_14bccf6c0,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451f728 FUN_14451f728 body=69 status=ok
// SIG undefined FUN_14451f728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451f728(void)

{
  _DAT_14cc17048 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451f76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc17050,1);
  return;
}



// FUNCTION 14451f76e FUN_14451f76e body=226 status=ok
// SIG undefined FUN_14451f76e(void)

void FUN_14451f76e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x358);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_145ba35e4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      local_58 = &local_48;
      local_48 = 0;
      cVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,param_3,param_4);
      if (cVar2 != '\0') {
        FUN_149068560(param_5,local_48);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_149066896(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451f864 FUN_14451f864 body=105 status=ok
// SIG undefined FUN_14451f864(void)

void FUN_14451f864(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar2 = FUN_145ba35e4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14944e60c(lVar1,param_2,param_3);
      return;
    }
  }
  FUN_1444081b4(param_1,param_2,param_3);
  return;
}



// FUNCTION 14451f8ce FUN_14451f8ce body=122 status=ok
// SIG undefined FUN_14451f8ce(void)

bool FUN_14451f8ce(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x358);
  if (lVar4 != 0) {
    lVar3 = FUN_145ba35e4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_14944e6dc(lVar4,param_2);
      iVar1 = *(int *)(lVar3 + 0x40);
      lVar4 = FUN_14944e6dc(lVar4,param_3);
      return iVar1 == *(int *)(lVar4 + 0x40);
    }
  }
  uVar2 = FUN_149066914(param_1,param_2,param_3);
  return (bool)uVar2;
}



// FUNCTION 14451f948 FUN_14451f948 body=224 status=ok
// SIG undefined FUN_14451f948(void)

void FUN_14451f948(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 != 0) {
    lVar4 = FUN_145ba35e4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_14944e8ce(lVar3,param_2,param_3,param_5,param_7);
      iVar1 = *param_5;
      *param_6 = iVar1 + 1;
      if ((char)param_4 != '\0') {
        iVar2 = *param_5;
        *param_5 = iVar1 + 1;
        *param_6 = iVar2;
        *param_7 = 1.0 - *param_7;
      }
      return;
    }
  }
  FUN_149066a78(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14451fa28 FUN_14451fa28 body=69 status=ok
// SIG undefined FUN_14451fa28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451fa28(void)

{
  _DAT_14cc17070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014451fa6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc17078,1);
  return;
}



// FUNCTION 14451fa6e FUN_14451fa6e body=65 status=ok
// SIG undefined FUN_14451fa6e(void)

undefined8 * FUN_14451fa6e(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x4a0,0x10);
  FUN_14906cd4e(puVar2,*(undefined4 *)(*(longlong *)(lVar1 + 0x210) + 8));
  *puVar2 = &PTR_FUN_14bcd0e50;
  return puVar2;
}



// FUNCTION 14451fada FUN_14451fada body=29 status=ok
// SIG undefined FUN_14451fada(void)

undefined8 FUN_14451fada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14451faf7 FUN_14451faf7 body=361 status=ok
// SIG undefined FUN_14451faf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451faf7(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GeometryCacheUSD",&PTR_FUN_14bccfbd0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GeometryCacheUSD",&PTR_FUN_14bcd08d0,1,0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc17048,L"USD.DisableGeoCacheTracks",&DAT_14cc17058,
                L"Set to true to disable geometry cache tracks in Sequencer and drive them by the Time property instead. The stage must be reloaded after changing this value."
               );
  atexit(FUN_14451f728);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc1705c);
  if (cVar1 == '\0') {
    _DAT_14cc1705c = 0;
    uRam000000014cc17064 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = -0x7ffffffeb432f59a;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14672ffaa(&local_48);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc17070,L"GeometryCache.Streamer.UsdStream.CacheInDDC",&DAT_14c765ce4,
                L"Cache the streamed USD mesh data in the DDC");
  atexit(FUN_14451fa28);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14451fc88 FUN_14451fc88 body=57 status=ok
// SIG undefined FUN_14451fc88(void)

void FUN_14451fc88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc17128 == 0) {
    uVar1 = FUN_146029d39();
    DAT_14cc17128 = FUN_14171c317(FUN_14673028c,uVar1,L"EUsdStageState");
  }
  return;
}



// FUNCTION 14451fcd0 FUN_14451fcd0 body=902 status=ok
// SIG undefined FUN_14451fcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14451fcd0(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cc17080 = 0xffffffff;
  _DAT_14cc17084 = 0;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd1420,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd1790,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/USDStage",0,0,&PTR_FUN_14bcd18d0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd1c20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd2110,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14bcd50f0;
  local_58 = 0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd5110,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDStage",&PTR_FUN_14bcd51c0,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc17270);
  if (cVar1 == '\0') {
    _DAT_14cc17270 = 0;
    uRam000000014cc17278 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  FUN_1446f470e(&local_40,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_40,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_40,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_40,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_40,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_40,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_40,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_40,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_40,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_40,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_40,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_40,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FString>_14c764ef8,1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144520078 FUN_144520078 body=982 status=ok
// SIG undefined FUN_144520078(void)

void FUN_144520078(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar16 = 0;
  FUN_1412d55ee(0);
  iVar2 = *(int *)(param_1 + 0x80);
  uVar14 = 1;
  iVar12 = 0;
  iVar8 = 0;
  if (iVar2 != 0) {
    puVar4 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x68);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_14452013b;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 != iVar2) {
    uVar15 = 0xffffffff;
    iVar3 = iVar2;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10 + (longlong)iVar8 * 0x20) != 0) {
        FUN_144520078();
        iVar3 = *(int *)(param_1 + 0x80);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x68);
      }
      iVar8 = (int)uVar16;
      lVar13 = (longlong)iVar8;
      uVar9 = puVar4[lVar13] & uVar15;
      if (uVar9 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar6 = 0;
          do {
            uVar9 = (puVar4 + lVar13 + 1)[lVar6];
            if (uVar9 != 0) {
              uVar16 = (ulonglong)(iVar8 + (int)lVar6 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14452034b;
            }
            iVar12 = iVar12 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar11 - lVar13 != lVar6);
          uVar15 = 0xffffffff;
          iVar8 = iVar11;
        }
        uVar16 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar3;
      }
      else {
LAB_14452034b:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar2);
  }
LAB_14452013b:
  FUN_149453442((longlong *)(param_1 + 0x58));
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1494535ca(param_1 + 0x28,param_1);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar15 = *(uint *)(param_1 + 0x50);
    if ((((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)) &&
       (((int)plVar5[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))
       ) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar13 = *plVar5;
      }
      else {
        lVar13 = 0;
      }
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar5;
      }
      else {
        lVar6 = 0;
      }
      if (*(longlong *)(*(longlong *)(lVar13 + 0xa8) + 0x1c8) == lVar6) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar13 = *plVar5;
        }
        else {
          lVar13 = 0;
        }
        lVar13 = *(longlong *)(lVar13 + 0xa8);
        if (lVar13 != 0) {
          lVar6 = FUN_145a960f0();
          if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) &&
             (((*(byte *)(lVar13 + 0x65) & 2) == 0 && (lVar6 = FUN_1447210f0(lVar13), lVar6 != 0))))
          {
            local_58[0] = 0;
            local_58[1] = 0;
            FUN_140611a6c(lVar13,local_58,0);
            uVar7 = FUN_1447210f0(lVar13);
            FUN_1412f3774(uVar7,lVar13,0,1);
            if (local_58[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_14452027f;
          }
        }
      }
    }
    if (((((*(int *)(param_1 + 0x54) != 0) && (uVar15 = *(uint *)(param_1 + 0x50), -1 < (int)uVar15)
          ) && ((int)uVar15 < DAT_14c9647dc)) &&
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x54))))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar13 = *plVar5;
      }
      else {
        lVar13 = 0;
      }
      if ((*(byte *)(lVar13 + 0x9f) & 0x40) == 0) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          plVar5 = (longlong *)*plVar5;
        }
        else {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x420))(plVar5,0);
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
    }
  }
LAB_14452027f:
  FUN_1412d5698(0);
  if ((local_58[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14452044f FUN_14452044f body=69 status=ok
// SIG undefined FUN_14452044f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14452044f(void)

{
  _DAT_14cc172b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144520491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc172c0,1);
  return;
}



// FUNCTION 144520494 FUN_144520494 body=69 status=ok
// SIG undefined FUN_144520494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144520494(void)

{
  _DAT_14cc172d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445204d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc172d8,1);
  return;
}



// FUNCTION 1445204d9 FUN_1445204d9 body=69 status=ok
// SIG undefined FUN_1445204d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445204d9(void)

{
  _DAT_14cc172e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014452051b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc172e8,1);
  return;
}



// FUNCTION 14452051e FUN_14452051e body=69 status=ok
// SIG undefined FUN_14452051e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14452051e(void)

{
  _DAT_14cc172f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144520560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc172f8,1);
  return;
}



// FUNCTION 144520563 FUN_144520563 body=49 status=ok
// SIG undefined FUN_144520563(void)

void FUN_144520563(void)

{
  FUN_144760e21(DAT_14cc17308,DAT_14cc17310);
  if (DAT_14cc17308 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144520594 FUN_144520594 body=49 status=ok
// SIG undefined FUN_144520594(void)

void FUN_144520594(void)

{
  FUN_144760e21(DAT_14cc17320,DAT_14cc17328);
  if (DAT_14cc17320 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1445205c8 FUN_1445205c8 body=171 status=ok
// SIG undefined FUN_1445205c8(void)

void FUN_1445205c8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_2 + 8) < 2) {
    puVar1 = &local_68;
    FUN_1490d6bd2(puVar1);
    FUN_144520674(param_1);
  }
  else {
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
    puVar1 = &local_70;
    FUN_1490d6bd2(puVar1);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    FUN_1407a3a68(&local_68);
  }
  FUN_1490d6b4a(puVar1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144520674 FUN_144520674 body=188 status=ok
// SIG undefined FUN_144520674(void)

void FUN_144520674(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_145b9e748();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) goto LAB_1445206bc;
  }
  uVar1 = *(undefined1 *)(lVar3 + 0x9b);
  *(undefined1 *)(lVar3 + 0x9b) = 0;
  FUN_1447f69b6(param_1 + 0x418);
  FUN_1458b0bbe(local_38);
  FUN_14603997e(param_1 + 0x688,local_38);
  FUN_145d37a3e(local_38);
  FUN_144520732(param_1);
  *(undefined1 *)(lVar3 + 0x9b) = uVar1;
LAB_1445206bc:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144520732 FUN_144520732 body=160 status=ok
// SIG undefined FUN_144520732(void)

void FUN_144520732(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x398) < 2) {
    if (*(longlong *)(param_1 + 0x3a8) == 0) goto LAB_144520755;
  }
  else {
    FUN_149451ea4(param_1);
    if (*(longlong *)(param_1 + 0x3a8) == 0) {
      *(undefined4 *)(param_1 + 0x398) = 0;
      if (*(int *)(param_1 + 0x39c) == 0) {
        return;
      }
      FUN_1446f8c06(param_1 + 0x390,0);
      return;
    }
  }
  FUN_1490cb2b2();
LAB_144520755:
  uVar1 = DAT_14c868730;
  if (DAT_14cc17300 != '\0') {
    DAT_14c868730 = 0;
    FUN_1445209ac(param_1);
    DAT_14c868730 = uVar1;
    return;
  }
  FUN_1445209ac(param_1);
  return;
}



// FUNCTION 1445207d2 FUN_1445207d2 body=100 status=ok
// SIG undefined FUN_1445207d2(void)

void FUN_1445207d2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cac9a28);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_149451a5a(param_1);
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (*(int *)((longlong)param_1 + 0x39c) == 0) {
    return;
  }
  FUN_1446f8c06(param_1 + 0x72,0);
  return;
}



// FUNCTION 144520836 FUN_144520836 body=373 status=ok
// SIG undefined FUN_144520836(void)

void FUN_144520836(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  
  cVar2 = DAT_14cc17300;
  uVar1 = DAT_14c868730;
  if (DAT_14c872bd8 == '\0') {
    if (DAT_14cc17300 == '\x01') {
      DAT_14c868730 = 0;
      unaff_RBX = uVar1;
    }
    if (*(longlong *)(param_1 + 0x4d0) != 0) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
      FUN_149454166(param_1 + 0x530);
      FUN_1494542aa(param_1 + 0x530);
    }
    if (*(int *)(param_1 + 0x698) != *(int *)(param_1 + 0x6c4)) {
      FUN_1494543c8(param_1 + 0x690);
      FUN_149454512(param_1 + 0x690);
    }
    if (*(int *)(param_1 + 0x6e8) != *(int *)(param_1 + 0x714)) {
      FUN_149454646(param_1 + 0x6e0);
      FUN_14945478a(param_1 + 0x6e0);
    }
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      FUN_144520078();
      FUN_14020fad6(*(longlong *)(param_1 + 0x4d8) + 0x40,&DAT_149e065c6);
    }
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      FUN_1490caeac(*(longlong *)(param_1 + 0x3a8),param_1);
      FUN_1490cb8f8(*(undefined8 *)(param_1 + 0x3a8));
    }
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      FUN_14451d902(*(undefined8 *)(*(longlong *)(param_1 + 0x3b8) + 0x28));
    }
    if (*(longlong *)(param_1 + 0x3b0) != 0) {
      FUN_14451d6c4(*(undefined8 *)(*(longlong *)(param_1 + 0x3b0) + 0x28));
    }
    FUN_1447f69b6(param_1 + 0x478);
    if (cVar2 != '\0') {
      DAT_14c868730 = unaff_RBX;
    }
  }
  return;
}



// FUNCTION 1445209ac FUN_1445209ac body=1066 status=ok
// SIG undefined FUN_1445209ac(void)

void FUN_1445209ac(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined8 unaff_R12;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  undefined1 *local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  cVar4 = DAT_14cc17300;
  uVar7 = DAT_14c868730;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = *(int *)(param_1 + 0x398);
  if ((1 < iVar6) && (*(char *)(param_1 + 0x3a0) != '\0')) {
    plVar2 = (longlong *)(param_1 + 0x390);
    if (DAT_14cc17300 == '\x01') {
      DAT_14c868730 = 0;
      unaff_R12 = uVar7;
    }
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    lVar8 = 0xc;
    lVar9 = 0;
    while( true ) {
      uVar10 = *(ushort *)(*plVar2 + lVar9);
      uVar11 = (ulonglong)uVar10;
      uVar12 = *(ushort *)((longlong)L"@identifier:" + lVar9);
      if (uVar10 != uVar12) {
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_144520a7a;
        }
        if (uVar10 != uVar12) {
          cVar5 = FUN_1401aeb9c(plVar2);
          if (cVar5 != '\0') {
            uVar7 = FUN_140d6afb0();
            FUN_140056680(&local_68,uVar7);
            FUN_140aa5ef8(&local_78,&local_68);
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_68 = local_78;
            iVar6 = local_70 + -1;
            if (local_70 == 0) {
              iVar6 = 0;
            }
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar6);
            local_58 = *(longlong **)(param_1 + 0x390);
            local_50 = *(int *)(param_1 + 0x398) + -1;
            if (*(int *)(param_1 + 0x398) == 0) {
              local_50 = 0;
            }
            FUN_140bee87a(&local_88,&local_68,2);
            FUN_140aa5ef8(&local_68,&local_88);
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            local_68 = (wchar_t *)0x0;
            uStack_60 = 0;
            if (local_88 != (wchar_t **)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_144520baf;
          }
          iVar6 = *(int *)(param_1 + 0x398);
        }
        break;
      }
      if (uVar10 == 0) break;
LAB_144520a7a:
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) break;
      lVar9 = lVar9 + 2;
    }
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(&local_a8,*plVar2,iVar3);
LAB_144520baf:
    FUN_1447f69b6(param_1 + 0x418);
    FUN_1458b0bbe(&local_68);
    FUN_14603997e(param_1 + 0x680,&local_68);
    FUN_145d37a3e(&local_68);
    FUN_1458b0bbe(&local_68);
    FUN_14603997e(param_1 + 0x688,&local_68);
    FUN_145d37a3e(&local_68);
    FUN_1447f69b6(param_1 + 0x430);
    FUN_140009b9a(local_c8,plVar2);
    local_68 = L"USDOpenError";
    uStack_60._0_4_ = 0xc;
    FUN_1446e940c(local_ec,&local_68);
    local_68 = L"USDStageActor";
    uStack_60._0_4_ = 0xd;
    FUN_1446e940c(local_f0,&local_68);
    local_68 = 
    L"Encountered some errors opening USD file at path \'{0}!\nCheck the Output Log for details.";
    uStack_60 = CONCAT44(uStack_60._4_4_,0x58);
    FUN_140208c1e(local_e8,local_f0,local_ec,&local_68);
    FUN_14023409e(&local_d8,local_e8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,local_c8);
    local_80 = local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_d8;
    local_90 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar4 != '\0') {
      DAT_14c868730 = unaff_R12;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144520dd8 FUN_144520dd8 body=724 status=ok
// SIG undefined FUN_144520dd8(void)

void FUN_144520dd8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_b8;
  longlong *local_b0;
  undefined1 local_a8 [12];
  undefined1 local_9c [4];
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_50;
  char local_4c;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1490d6de6();
  FUN_1494522ca(&local_b8,param_1);
  *(undefined1 *)(local_b8 + 0x11) = 1;
  FUN_1490d6de6();
  uVar3 = DAT_14c872be8;
  local_88 = L"UpdatingUSDPrim";
  local_80 = 0xf;
  FUN_1446e940c(local_a8,&local_88);
  local_88 = L"USDStageActor";
  local_80 = 0xd;
  FUN_1446e940c(local_9c,&local_88);
  local_88 = L"Updating USD Prim";
  local_80 = 0x11;
  FUN_140208c1e(&local_98,local_9c,local_a8,&local_88);
  local_c8 = uVar3;
  FUN_140997f46(&local_88,0x3f800000,&local_98,1);
  FUN_140997a0e(&local_88);
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  local_50 = 0x3e800000;
  local_4c = '\x01';
  local_38 = local_38 & 0xfc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  local_98 = DAT_14c844840;
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
  local_90 = 0;
  FUN_140997b30(&local_88,0x3f800000,&local_98);
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  local_98 = (longlong *)0x0;
  FUN_1490d6c70(local_a8);
  FUN_1490d6cb0(&local_98,local_a8);
  FUN_1490d6cf4(local_a8);
  FUN_1490d6cf4(&local_98);
  FUN_140997a5c(&local_88);
  if (local_4c == '\x01') {
    local_4c = '\0';
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445210c2 FUN_1445210c2 body=29 status=ok
// SIG undefined FUN_1445210c2(void)

undefined8 FUN_1445210c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445210f4 FUN_1445210f4 body=93 status=ok
// SIG undefined FUN_1445210f4(void)

void FUN_1445210f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcd6270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcd6200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144521152 FUN_144521152 body=93 status=ok
// SIG undefined FUN_144521152(void)

void FUN_144521152(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcd6270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcd6200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1445211b0 FUN_1445211b0 body=126 status=ok
// SIG undefined FUN_1445211b0(void)

void FUN_1445211b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bcd6270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd6200;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014452121f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144521247 FUN_144521247 body=729 status=ok
// SIG undefined FUN_144521247(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144521247(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_48 [4];
  undefined4 local_44;
  wchar_t *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14cc17280 = 0xff;
  FUN_140056680(&DAT_14cc17288,L"!actor!");
  atexit((_func_5014 *)&LAB_144520058);
  local_40 = L"SMInstance";
  local_38 = 10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cc17298 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc172a0);
  if (cVar1 == '\0') {
    _DAT_14cc172a0 = 0;
    uRam000000014cc172a8 = 0;
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_40 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  _DAT_14cc172b0 = 0xffffffff;
  _DAT_14cc172b4 = 0;
  local_58 = 0;
  FUN_14153156c(&DAT_14cc172b8,L"USD.HandleNoticesImmediately",&DAT_14cc172c8,
                L"When this is false, we will collect all USD notices emitted during a UE transaction and handle them in one pass, potentially eliminating some unnecessary updates. When this is true, we respond to each USD notice immediately"
               );
  atexit(FUN_14452044f);
  local_58 = 0;
  FUN_14153156c(&DAT_14cc172d0,L"USD.RegenerateSkeletalAssetsOnControlRigBake",&DAT_14c765ce8,
                L"Whether to regenerate the assets associated with a SkelRoot (mesh, skeleton, anim sequence, etc.) whenever we modify Control Rig tracks. The USD Stage itself is always updated however."
               );
  atexit(FUN_144520494);
  local_58 = 0;
  FUN_14153156c(&DAT_14cc172e0,L"USD.TranslateOnlyUsedMaterialsWhenOpeningStage",&DAT_14c765ce9,
                L"If enabled, only Material prims bound by at least one Mesh are translated into Unreal material assets. If disabled, all Material prims are translated into Unreal material assets."
               );
  atexit(FUN_1445204d9);
  local_58 = 0;
  FUN_14153156c(&DAT_14cc172f0,L"USD.DiscardUndoBufferOnStageOpenClose",&DAT_14cc17300,
                L"Enabling this will prevent the recording of open/close stage transactions, but also discard the undo buffer after they happen. This can help load times and also reduce memory usage, as sometimes recording all created assets and actors in the undo buffer can be expensive."
               );
  atexit(FUN_14452051e);
  DAT_14cc17308 = 0;
  _DAT_14cc17310 = 0;
  _DAT_14cc17318 = 2;
  atexit(FUN_144520563);
  DAT_14cc17320 = 0;
  _DAT_14cc17328 = 0;
  _DAT_14cc17330 = 2;
  atexit(FUN_144520594);
  local_40 = (wchar_t *)0x800000014bcd5d2c;
  local_44 = 8;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_146730a52(&local_40);
  FUN_1446f470e(&DAT_14cc1733c,L"EnableConcertSync",1);
  local_40 = L"ConcertTransactionEvent";
  local_38 = 0x17;
  FUN_1446e940c(&local_44,&local_40);
  local_40 = L"USDTransactor";
  local_38 = 0xd;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Concert Transaction Event";
  local_38 = 0x19;
  FUN_140208c1e(&DAT_14cc17348,local_48,&local_44,&local_40);
  atexit((_func_5014 *)&LAB_1445210ad);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144521524 FUN_144521524 body=69 status=ok
// SIG undefined FUN_144521524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144521524(void)

{
  _DAT_14cc173e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144521566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc173e8,1);
  return;
}



// FUNCTION 144521569 FUN_144521569 body=69 status=ok
// SIG undefined FUN_144521569(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144521569(void)

{
  _DAT_14cc173f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445215ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc173f8,1);
  return;
}



// FUNCTION 1445215ae FUN_1445215ae body=69 status=ok
// SIG undefined FUN_1445215ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445215ae(void)

{
  _DAT_14cc17400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001445215f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc17408,1);
  return;
}



// FUNCTION 1445215f3 FUN_1445215f3 body=1382 status=ok
// SIG undefined FUN_1445215f3(void)

void FUN_1445215f3(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_708 [32];
  code **local_6e8;
  code **local_6e0;
  undefined4 local_6d8;
  undefined1 local_6d0 [24];
  undefined1 local_6b8 [16];
  code *local_6a8 [2];
  undefined ***local_698;
  undefined **local_688;
  longlong *local_680;
  undefined8 local_678;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_708;
  if ((DAT_14cc17420 == 0) ||
     (plVar9 = (longlong *)FUN_149456f96(DAT_14cc17420,param_1), plVar9 == (longlong *)0x0))
  goto LAB_144521625;
  local_6a8[0] = (code *)&DAT_14cb00c08;
  local_6d8 = 1;
  local_6e0 = local_6a8;
  FUN_143223078(local_6d0);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1445216a6;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1445216ab;
      goto LAB_144521708;
    }
LAB_1445216ab:
    FUN_1407779ba(local_6a8,&DAT_14ca85100);
    (**(code **)(*plVar9 + 0x10))(plVar9,local_6a8,param_2,DAT_14c760db4);
    FUN_140779360(local_6a8);
    FUN_140778010(local_6a8);
  }
  else {
LAB_1445216a6:
    if (iVar6 == 0x10) goto LAB_1445216ab;
LAB_144521708:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1445216ab;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1445216ab;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_144521872;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_144524619);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_144521872:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
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
          puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1445218f2;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1445218f2:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14bcdccb0;
      puVar16[0x15] = plVar9;
      puVar16[0x16] = param_2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar16[0xf] = uVar12;
      puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar6;
      if (puVar16 == (undefined8 *)0x0) {
        local_6a8[0] = (code *)CONCAT71(local_6a8[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_6a8[0] = (code *)CONCAT71(local_6a8[0]._1_7_,1);
        FUN_1447439e4(puVar16);
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
    }
    else {
      local_698 = (undefined ***)0x0;
      local_688 = &PTR_LAB_14bcdcc50;
      local_6a8[0] = FUN_14452456c;
      local_6e8 = local_6a8;
      local_680 = plVar9;
      local_678 = param_2;
      FUN_14005a792(&DAT_14ca9a440,L"ComputeFrameworkFlushCommand",&DAT_14cc1ad18);
      if (local_6a8[0] != (code *)0x0) {
        pppuVar14 = local_698;
        if (local_698 == (undefined ***)0x0) {
          pppuVar14 = &local_688;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_6d0);
  FUN_14004710c(local_6b8);
LAB_144521625:
  if ((local_30 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144521b5a FUN_144521b5a body=1257 status=ok
// SIG undefined FUN_144521b5a(void)

void FUN_144521b5a(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14cc17420 == 0) || (lVar9 = FUN_149456f96(DAT_14cc17420,param_1), lVar9 == 0))
  goto LAB_144521b84;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_144521fa5;
    if (iVar6 != 1) goto LAB_144521bd9;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_144521fa5;
  }
  else {
LAB_144521bd9:
    if (iVar6 == 0x10) goto LAB_144521fa5;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_144521fa5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_144521fa5;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_144521d2a;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_144524619);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_144521d2a:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
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
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_144521daa;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_144521daa:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14bcdcd20;
    puVar16[0x15] = lVar9;
    puVar16[0x16] = param_2;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar6 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar9 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar9 == 0) {
      uVar5 = 1;
      if ((char)uVar17 != '\x06') {
        uVar5 = uVar17;
      }
      uVar17 = uVar5;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar9 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14bcdccc0;
    local_68[0] = &LAB_144524808;
    local_40 = lVar9;
    local_38 = param_2;
    FUN_14005a792(&DAT_14ca9a440,L"ComputeFrameworkAbortCommand",&DAT_14cc1ad1c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_144521b84:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144522064 FUN_144522064 body=2445 status=ok
// SIG undefined FUN_144522064(void)

ulonglong FUN_144522064(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,longlong *param_6,longlong param_7,byte param_8)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  code **ppcVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_168 [32];
  code **local_148;
  void **local_140;
  code **local_138;
  longlong local_130;
  longlong local_128;
  code **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int iStack_100;
  undefined4 uStack_fc;
  code **local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  longlong local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_3 == 0 || param_2 == 0) || (DAT_14cc17420 == 0 || DAT_14c765cec < 1)) {
LAB_144522218:
    uVar21 = 0;
  }
  else {
    iVar7 = *(int *)(param_2 + 0x40);
    if (iVar7 != (int)param_1[1]) goto LAB_144522218;
    if (0 < iVar7) {
      lVar15 = 0;
      do {
        if ((*(longlong *)(*param_1 + lVar15 * 8) == 0) &&
           (*(longlong *)(*(longlong *)(param_2 + 0x38) + lVar15 * 8) != 0)) goto LAB_144522218;
        lVar15 = lVar15 + 1;
      } while (iVar7 != lVar15);
    }
    lVar15 = FUN_149456f96();
    if (lVar15 == 0) goto LAB_144522218;
    ppcVar18 = *(code ***)(param_2 + 0xd8);
    if (ppcVar18 == (code **)0x0) {
      uVar10 = FUN_140b48e42(param_2);
      *(undefined8 *)(param_2 + 0xd8) = uVar10;
      goto LAB_144522218;
    }
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    if (iVar7 == 0) {
      uVar19 = 0;
      uVar13 = 0;
      local_f0 = (void *)0x0;
    }
    else {
      lVar3 = *param_1;
      lVar20 = 0;
      local_128 = lVar15;
      local_120 = ppcVar18;
      do {
        if (*(longlong **)(lVar3 + lVar20) == (longlong *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(**(longlong **)(lVar3 + lVar20) + 0x2a8))();
        }
        uVar21 = uStack_c0;
        lVar15 = (longlong)(int)uStack_c0;
        uVar6 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
        if (uStack_c0._4_4_ < uVar6) {
          FUN_14945b9a4(&local_c8,uVar21 & 0xffffffff);
        }
        *(undefined8 *)((longlong)local_c8 + lVar15 * 8) = uVar10;
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar7 * 8 != lVar20);
      lVar15 = local_128;
      local_f0 = local_c8;
      ppcVar18 = local_120;
      uVar13 = (int)uStack_c0;
      uVar19 = uStack_c0._4_4_;
    }
    local_108 = param_5;
    iStack_100 = (uint)*(byte *)(param_1 + 2) + (uint)param_8;
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    local_e8 = CONCAT44(uVar19,uVar13);
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    local_118 = lVar15;
    uStack_110 = param_4;
    local_f8 = ppcVar18;
    FUN_14009d848(&local_e0,param_6);
    local_d0 = param_7;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar15 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_144522313;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_144522923;
        goto LAB_14452231c;
      }
LAB_144522923:
      lVar3 = local_d0;
      lVar15 = local_118;
      local_a8 = (code *)0x0;
      local_a0 = 0;
      FUN_14009d848(&local_a8,&local_e0);
      _Src = local_f0;
      local_b8 = (void *)0x0;
      lVar20 = (longlong)(int)local_e8;
      local_b0 = (int)local_e8;
      if (lVar20 == 0) {
        local_ac = 0;
      }
      else {
        FUN_14945ba2a(&local_b8,local_e8 & 0xffffffff);
        memcpy(local_b8,_Src,lVar20 << 3);
      }
      local_140 = &local_b8;
      local_148 = local_f8;
      local_138 = &local_a8;
      local_130 = lVar3;
      FUN_149457568(lVar15,uStack_110,local_108,(undefined1)iStack_100);
    }
    else {
LAB_144522313:
      if (iVar7 == 0x10) goto LAB_144522923;
LAB_14452231c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar15 + 0xc60), iVar7 == 2))
        goto LAB_144522923;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_144522923;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar4 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar4;
        if (puVar12 != (uint *)0x0) goto LAB_144522572;
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar6 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar6 | 1;
            __tlregdtor(&LAB_144524619);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar4 = puVar11;
          FUN_140217a48(puVar4);
          puVar12 = (uint *)*puVar4;
LAB_144522572:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x1f);
          uVar6 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar2 = *puVar12;
            *puVar12 = *puVar12 + uVar6 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar6) != 0xffffffff) break;
            puVar12 = (uint *)*puVar4;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar4 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x1f);
            uVar6 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar6 = 1;
              goto LAB_1445225f2;
            }
          }
        }
        uVar6 = uVar6 + 1;
LAB_1445225f2:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar6;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14bcdceb0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_118;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_118._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_110._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_108._4_4_;
        *(int *)(puVar17 + 0x18) = iStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_fc;
        puVar17[0x19] = local_f8;
        puVar17[0x1a] = local_f0;
        local_f0 = (void *)0x0;
        *(int *)(puVar17 + 0x1b) = (int)local_e8;
        *(undefined4 *)((longlong)puVar17 + 0xdc) = local_e8._4_4_;
        local_e8 = 0;
        puVar17[0x1c] = local_e0;
        local_e0 = (undefined8 *)0x0;
        *(int *)(puVar17 + 0x1d) = local_d8;
        local_d8 = 0;
        puVar17[0x1e] = local_d0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar6 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
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
        lVar15 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar15 == 0) {
          uVar5 = 1;
          if ((char)uVar21 != '\x06') {
            uVar5 = uVar21;
          }
          uVar21 = uVar5;
          uVar10 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar15 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
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
        local_a8 = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x58,8);
        *local_98 = (longlong)&PTR_LAB_14bcdce40;
        local_98[5] = (longlong)local_f8;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_108._4_4_;
        *(int *)(local_98 + 4) = iStack_100;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_fc;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_118;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_118._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_110._4_4_;
        local_98[6] = (longlong)local_f0;
        local_f0 = (void *)0x0;
        *(int *)(local_98 + 7) = (int)local_e8;
        *(undefined4 *)((longlong)local_98 + 0x3c) = local_e8._4_4_;
        local_e8 = 0;
        local_98[8] = (longlong)local_e0;
        local_e0 = (undefined8 *)0x0;
        *(int *)(local_98 + 9) = local_d8;
        local_d8 = 0;
        local_98[10] = local_d0;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8 = FUN_144524baa;
        }
        local_148 = &local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"ComputeFrameworkEnqueueExecutionCommand",&DAT_14cc1ad24);
        if (local_a8 != (code *)0x0) {
          plVar14 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar14 = local_88;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
    if (local_d8 == 0) {
LAB_144522498:
      if (local_e0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e0 != (undefined8 *)0x0) {
      (**(code **)*local_e0)(local_e0,0);
      FUN_1446efa72(&local_e0,0,0,0x10);
      local_d8 = 0;
      goto LAB_144522498;
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar21 = CONCAT71((int7)((ulonglong)&local_e0 >> 8),1);
  }
  if ((int)param_6[1] != 0) {
    puVar4 = (undefined8 *)*param_6;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144522255;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_144522255:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445229f2 FUN_1445229f2 body=69 status=ok
// SIG undefined FUN_1445229f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445229f2(void)

{
  _DAT_14cc174a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144522a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc174b0,1);
  return;
}



// FUNCTION 144522a37 FUN_144522a37 body=69 status=ok
// SIG undefined FUN_144522a37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144522a37(void)

{
  _DAT_14cc174c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144522a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc174c8,1);
  return;
}



// FUNCTION 144522b26 FUN_144522b26 body=4584 status=ok
// SIG undefined FUN_144522b26(void)

void FUN_144522b26(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint **ppuVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  int *piVar22;
  longlong *plVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  longlong lVar32;
  uint *puVar33;
  longlong *plVar34;
  longlong lVar35;
  uint *puVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  undefined1 auStack_478 [32];
  uint **local_458;
  uint local_450;
  longlong local_440;
  uint local_434;
  longlong *local_430;
  longlong *local_428;
  uint *local_420;
  uint *local_418;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  longlong *local_3f0;
  longlong local_3e8;
  uint *local_3e0;
  longlong *local_3d8;
  undefined4 local_3d0;
  int local_3cc;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b1;
  uint local_3b0;
  int local_3ac;
  byte local_3a8;
  undefined8 local_3a4;
  int local_39c;
  uint *local_398;
  uint *local_390;
  int local_388;
  undefined1 local_380 [24];
  uint *local_368;
  uint *puStack_360;
  longlong local_358;
  undefined8 local_350;
  int local_348;
  int local_344;
  uint local_340;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_458 = (uint **)0x0;
  local_440 = param_1;
  local_408 = param_2;
  FUN_1404609f2(local_380,0 < DAT_14cc174d0,param_2,L"FComputeGraphTaskWorker::SubmitWork");
  iVar26 = 1;
  if (1 < DAT_14cc174d0) {
    iVar26 = DAT_14cc174d0;
  }
  DAT_14cc174d0 = iVar26 + -1;
  local_3c8 = param_3;
  if ((DAT_14cad3ba0 == param_3) &&
     (uVar19 = (ulonglong)*(int *)(local_440 + 0xb0), 0 < (longlong)uVar19)) {
    plVar23 = (longlong *)(local_440 + 0xa8);
    lVar31 = uVar19 * 0x60;
    do {
      lVar11 = *(longlong *)(*plVar23 + -0x60 + lVar31);
      if (lVar11 != 0) {
        uVar8 = *(uint *)(*plVar23 + -0x58 + lVar31);
        if ((*(longlong *)(lVar11 + 8) == 0) ||
           ((*(int *)(*(longlong *)(lVar11 + 8) + 0x10) == 0 &&
            (cVar6 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x18))(), cVar6 != '\0')))) {
          uVar9 = *(uint *)(lVar11 + 0x10);
          uVar16 = 0x20;
          if ((uVar9 != 0) && (uVar16 = 0, uVar9 != 0)) {
            for (; (uVar9 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
            }
          }
          lVar37 = *(longlong *)(lVar11 + 0x18 + (ulonglong)uVar16 * 8);
          if (lVar37 != 0) {
            *(uint *)(lVar11 + 0x14) = uVar16;
            local_458 = (uint **)((ulonglong)local_458 & 0xffffffff00000000);
            local_450 = uVar8;
            puVar21 = (uint *)(**(code **)(*DAT_14ca83900 + 0xf8))
                                        (DAT_14ca83900,&DAT_14ca85100,lVar37,
                                         *(undefined8 *)(lVar11 + 8));
            if (puVar21 != (uint *)0x0) {
              lVar11 = *plVar23 + lVar31;
              pcVar3 = *(code **)(lVar11 + -0x40);
              plVar34 = *(longlong **)(lVar11 + -0x30);
              if (*(longlong **)(lVar11 + -0x30) == (longlong *)0x0) {
                plVar34 = (longlong *)(lVar11 + -0x20);
              }
              local_3b0 = uVar8;
              local_368 = puVar21;
              uVar10 = (**(code **)(*plVar34 + 8))();
              (*pcVar3)(uVar10,&local_368,&local_3b0);
            }
          }
          FUN_14945c0de(plVar23);
          FUN_14945c152(plVar23);
        }
      }
      lVar31 = lVar31 + -0x60;
      bVar38 = 1 < uVar19;
      uVar19 = uVar19 - 1;
    } while (bVar38);
  }
  lVar31 = local_440;
  local_430 = (longlong *)(local_440 + 0x58);
  *(undefined4 *)(local_440 + 0x60) = 0;
  if (*(int *)(local_440 + 100) < 0) {
    FUN_14945c200(local_430);
  }
  local_428 = (longlong *)(lVar31 + 0x68);
  *(undefined4 *)(lVar31 + 0x70) = 0;
  if (*(int *)(lVar31 + 0x74) < 0) {
    FUN_14945c260(local_428);
  }
  if (*(int *)(lVar31 + 0x10) != *(int *)(lVar31 + 0x3c)) {
    uVar8 = (uint)((ulonglong)local_3c8 >> 0x10);
    uVar9 = (uint)local_3c8 & 0xffff;
    lVar11 = lVar31 + 0x40;
    if (*(longlong *)(lVar31 + 0x48) != 0) {
      lVar11 = *(longlong *)(lVar31 + 0x48);
    }
    iVar26 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(lVar31 + 0x50) - 1U &
                               (int)((ulonglong)local_3c8 >> 0x20) +
                               ((uint)local_3c8 << 0x10 | uVar9) + (uVar8 << 0x13 | uVar8 & 0xffff)
                               + (uVar9 >> 4)) * 4);
    if (iVar26 != -1) {
      do {
        local_3e8 = *(longlong *)(lVar31 + 8) + (longlong)iVar26 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar31 + 8) + (longlong)iVar26 * 0x20) == local_3c8)
        goto LAB_144522d9b;
        iVar26 = *(int *)(local_3e8 + 0x18);
      } while (iVar26 != -1);
    }
  }
  local_3e8 = 0;
LAB_144522d9b:
  lVar11 = local_408;
  if (0 < *(int *)(local_3e8 + 0x10)) {
    plVar23 = (longlong *)(lVar31 + 0x78);
    local_400 = lVar31 + 0x88;
    puVar21 = (uint *)0x0;
    local_3d8 = plVar23;
    do {
      lVar37 = *(longlong *)(local_3e8 + 8);
      local_410 = *(longlong *)(lVar37 + 0x18 + (longlong)puVar21 * 0x40);
      local_418 = (uint *)(ulonglong)*(uint *)(local_410 + 0x10);
      iVar26 = *(int *)(lVar31 + 0x60);
      iVar14 = iVar26 + *(uint *)(local_410 + 0x10);
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar14);
      }
      local_3cc = iVar26;
      if (*(int *)(lVar31 + 100) < iVar14) {
        FUN_14945c200(local_430);
      }
      lVar37 = lVar37 + (longlong)puVar21 * 0x40;
      if ((int)local_418 < 1) {
LAB_144523265:
        local_368 = (uint *)CONCAT44(local_368._4_4_,(int)local_418);
        iVar26 = *(int *)(lVar37 + 0x28);
        if (0 < iVar26) {
          lVar20 = 0;
          do {
            plVar34 = *(longlong **)(*(longlong *)(lVar37 + 0x20) + lVar20 * 8);
            if (plVar34 != (longlong *)0x0) {
              (**(code **)(*plVar34 + 0x20))(plVar34,lVar11,&local_368);
              iVar26 = *(int *)(lVar37 + 0x28);
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar26);
        }
      }
      else {
        local_3d0 = *(undefined4 *)(lVar31 + 0x70);
        local_434 = (uint)puVar21 & 0xfff;
        bVar7 = 1;
        puVar17 = (uint *)0x0;
        local_3e0 = puVar21;
        do {
          iVar26 = *(int *)(lVar31 + 0x60);
          plVar34 = (longlong *)(longlong)iVar26;
          *(uint *)(lVar31 + 0x60) = iVar26 + 1U;
          if (*(uint *)(lVar31 + 100) < iVar26 + 1U) {
            FUN_14945c290(local_430,iVar26);
          }
          lVar11 = *(longlong *)(lVar31 + 0x58);
          *(undefined8 *)(lVar11 + (longlong)plVar34 * 8) = 0;
          uVar8 = ((uint)puVar17 & 0xfff) * 0x1000 + local_434;
          *(uint *)(lVar11 + (longlong)plVar34 * 8) = uVar8;
          *(uint *)(lVar11 + (longlong)plVar34 * 8) = *(int *)(lVar37 + 0x10) << 0x18 | uVar8;
          *(uint *)(lVar11 + 4 + (longlong)plVar34 * 8) = *(uint *)(lVar31 + 0x70) & 0x7fff;
          lVar20 = (longlong)puVar17 * 0x68 + *(longlong *)(local_410 + 8);
          *(undefined4 *)(lVar31 + 0x80) = 0;
          if (*(int *)(lVar31 + 0x84) < 0) {
            FUN_14481578e(plVar23,0);
          }
          *(undefined4 *)(lVar31 + 0x90) = 0;
          local_3f8 = lVar11;
          local_3f0 = plVar34;
          if (*(int *)(lVar31 + 0x94) < 0) {
            FUN_146ea3024(local_400,0);
          }
          uVar8 = (**(code **)(**(longlong **)
                                 (*(longlong *)(lVar37 + 0x20) +
                                 (longlong)*(int *)(lVar20 + 0x60) * 8) + 8))();
          uVar19 = (ulonglong)uVar8;
          lVar11 = *(longlong *)(lVar20 + 0x28);
          local_368 = (uint *)CONCAT44(local_368._4_4_,uVar8);
          puStack_360 = (uint *)((longlong)puVar17 * 0x58 + *(longlong *)(local_410 + 0x18));
          local_358 = *(longlong *)(lVar31 + 0x78);
          *(undefined8 *)(lVar31 + 0x78) = 0;
          iVar26 = *(int *)(lVar31 + 0x80);
          lVar35 = *(longlong *)(lVar31 + 0x80);
          *(undefined8 *)(lVar31 + 0x80) = 0;
          local_350._4_4_ = (undefined4)((ulonglong)lVar35 >> 0x20);
          local_420 = puVar17;
          if (iVar26 < (int)uVar8) {
            local_350 = CONCAT44(local_350._4_4_,uVar8);
            if ((uint)(*(int *)(lVar31 + 0x84) - iVar26) < uVar8 - iVar26) {
              FUN_1446f48e2(&local_358);
            }
            memset((void *)(local_358 + (longlong)iVar26 * 4),0,(longlong)(int)(uVar8 - iVar26) << 2
                  );
            lVar35 = local_350;
          }
          else {
            if ((int)uVar8 < 0) {
              local_350 = lVar35;
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar19);
            }
            if ((int)uVar8 < iVar26) {
              local_350 = CONCAT44(local_350._4_4_,uVar8);
              FUN_14479f406(&local_358);
              lVar35 = local_350;
            }
          }
          local_350 = lVar35;
          if ((bVar7 & 1) != 0) {
            lVar31 = 10;
            lVar35 = 0;
            do {
              if (*(int *)(lVar11 + 0x58) <= lVar35) break;
              lVar32 = *(longlong *)(lVar11 + 0x50);
              if ((*(char *)(lVar32 + -0x10 + lVar31 * 4) == '\x14') &&
                 (plVar23 = *(longlong **)
                             (*(longlong *)(lVar37 + 0x20) +
                             (longlong)*(int *)(*(longlong *)(lVar20 + 0x30) + lVar35 * 4) * 8),
                 plVar23 != (longlong *)0x0)) {
                local_3ac = *(int *)(*(longlong *)(lVar32 + lVar31 * 4) + 0x3c);
                local_3b0 = uVar8;
                bVar7 = (**(code **)(*plVar23 + 0x10))(plVar23);
                if (bVar7 != 0) {
                  (**(code **)(*plVar23 + 0x18))(plVar23);
                }
              }
              lVar35 = lVar35 + 1;
              lVar31 = lVar31 + 0xc;
            } while ((bVar7 & 1) != 0);
          }
          if (((int)uVar8 < 1) || ((bVar7 & 1) == 0)) {
            puVar17 = local_420;
            lVar31 = local_440;
            if ((bVar7 & 1) != 0) goto LAB_1445230cf;
          }
          else {
            uVar29 = 1;
            do {
              uVar2 = *(undefined4 *)(local_358 + -4 + uVar29 * 4);
              lVar31 = *(longlong *)(*(longlong *)(lVar20 + 0x20) + 0x20);
              uVar10 = *(undefined8 *)(lVar31 + 0x28);
              FUN_145ece0c6();
              lVar11 = FUN_144b1d0c2(uVar10,&DAT_14cc17628,uVar2);
              iVar26 = *(int *)(local_440 + 0x70);
              uVar9 = iVar26 + 1;
              *(uint *)(local_440 + 0x70) = uVar9;
              if (*(uint *)(local_440 + 0x74) < uVar9) {
                FUN_14945c316(local_428);
              }
              lVar32 = (longlong)iVar26 * 0x10;
              lVar35 = *local_428;
              *(longlong *)(lVar35 + lVar32) = lVar11;
              *(longlong *)(lVar35 + 8 + lVar32) = lVar31;
            } while ((lVar11 != 0) && (bVar38 = uVar29 < uVar19, uVar29 = uVar29 + 1, bVar38));
            bVar7 = 1;
            if (lVar11 == 0) {
              bVar7 = 0;
              puVar17 = local_420;
              lVar31 = local_440;
            }
            else {
LAB_1445230cf:
              puVar17 = local_420;
              lVar31 = local_440;
              if ((1 < (int)uVar8) && (*(char *)(lVar20 + 100) != '\0')) {
                uVar8 = *(uint *)(local_3f8 + 4 + (longlong)local_3f0 * 8);
                plVar23 = (longlong *)((ulonglong)((uVar8 & 0x7fff) << 4) + *local_428);
                lVar11 = *plVar23;
                uVar29 = 2;
                do {
                  plVar23 = plVar23 + 2;
                  if (*plVar23 != lVar11) break;
                  bVar38 = uVar29 < uVar19;
                  uVar29 = uVar29 + 1;
                } while (bVar38);
                if (*plVar23 == lVar11) {
                  *(uint *)(local_3f8 + 4 + (longlong)local_3f0 * 8) = uVar8 | 0x8000;
                  FUN_1494578dc(local_428);
                }
              }
            }
          }
          plVar23 = local_3d8;
          if (local_3d8 == &local_358) {
            if (local_358 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*local_3d8 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar31 + 0x78) = local_358;
            local_358 = 0;
            *(undefined4 *)(lVar31 + 0x80) = (undefined4)local_350;
            *(undefined4 *)(lVar31 + 0x84) = local_350._4_4_;
          }
          puVar21 = local_3e0;
          lVar11 = local_408;
        } while (((bVar7 & 1) != 0) &&
                (puVar17 = (uint *)((longlong)puVar17 + 1), puVar17 < local_418));
        if ((bVar7 & 1) != 0) goto LAB_144523265;
        FUN_14945793c(local_430,local_3cc);
        FUN_1494578dc(local_428,local_3d0);
        if ((*(int *)(lVar37 + 0x38) != 0) && (*(longlong **)(lVar37 + 0x30) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(lVar37 + 0x30) + 0x60))();
        }
      }
      puVar21 = (uint *)((longlong)puVar21 + 1);
    } while ((longlong)puVar21 < (longlong)*(int *)(local_3e8 + 0x10));
  }
  uVar8 = *(uint *)(lVar31 + 0x60);
  if (1 < (int)uVar8 && *(int *)(DAT_14cc174b8 + 4) != 0) {
    puVar21 = (uint *)*local_430;
    memset(&local_358,0,0x2f0);
    puStack_360 = puVar21 + (ulonglong)uVar8 * 2 + -2;
    local_368 = puVar21;
    fVar39 = logf((float)(int)uVar8);
    local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar39 + fVar39));
    ppuVar13 = &local_368;
    do {
      puVar17 = *ppuVar13;
      puVar18 = ppuVar13[1];
      iVar26 = *(int *)(ppuVar13 + 2);
      iVar14 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
      uVar8 = iVar14 + 1;
      puVar24 = puVar17;
      puVar21 = puVar18;
      if (iVar26 != 0) {
LAB_1445233aa:
        if (8 < (int)uVar8) {
          uVar10 = *(undefined8 *)(puVar24 + (ulonglong)(uVar8 >> 1) * 2);
          *(undefined8 *)(puVar24 + (ulonglong)(uVar8 >> 1) * 2) = *(undefined8 *)puVar24;
          *(undefined8 *)puVar24 = uVar10;
          puVar30 = puVar21 + 2;
          puVar15 = puVar24;
          do {
            puVar5 = puVar15 + 2;
            puVar25 = puVar15 + 2;
            do {
              puVar15 = puVar25;
              puVar36 = puVar5;
              if (puVar21 < puVar15) break;
              puVar5 = puVar36 + 2;
              puVar25 = puVar15 + 2;
            } while (*puVar15 <= *puVar24);
            puVar5 = puVar30 + -4;
            do {
              puVar25 = puVar30;
              puVar33 = puVar5;
              puVar30 = puVar25 + -2;
              if (puVar30 <= puVar24) break;
              puVar5 = puVar33 + -2;
            } while (*puVar24 <= *puVar30);
            if (puVar30 < puVar15) goto LAB_144523429;
            uVar10 = *(undefined8 *)puVar15;
            *(undefined8 *)puVar15 = *(undefined8 *)puVar30;
            *(undefined8 *)puVar30 = uVar10;
          } while( true );
        }
        if (puVar24 < puVar21) {
          do {
            puVar17 = puVar24;
            if (puVar24 + 2 <= puVar21) {
              uVar8 = *puVar24;
              puVar18 = puVar24 + 2;
              do {
                uVar9 = *puVar18;
                bVar38 = uVar8 < uVar9;
                if (uVar8 <= uVar9) {
                  uVar8 = uVar9;
                }
                if (bVar38) {
                  puVar17 = puVar18;
                }
                puVar18 = puVar18 + 2;
              } while (puVar18 <= puVar21);
            }
            uVar10 = *(undefined8 *)puVar17;
            *(undefined8 *)puVar17 = *(undefined8 *)puVar21;
            *(undefined8 *)puVar21 = uVar10;
            puVar21 = puVar21 + -2;
          } while (puVar24 < puVar21);
        }
        goto LAB_144523644;
      }
LAB_1445234c6:
      if (uVar8 != 0) {
        iVar26 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
        iVar14 = iVar26;
joined_r0x0001445234ed:
        do {
          iVar28 = iVar26 * 2 + 1;
          if (iVar28 < (int)uVar8) {
            iVar27 = iVar26 * 2 + 2;
            if ((iVar27 < (int)uVar8) &&
               (puVar24[(longlong)iVar28 * 2] <= puVar24[(longlong)iVar27 * 2])) {
              iVar28 = iVar27;
            }
            lVar37 = (longlong)iVar26;
            lVar31 = (longlong)iVar28;
            if (puVar24[lVar37 * 2] < puVar24[lVar31 * 2]) {
              uVar10 = *(undefined8 *)(puVar24 + lVar37 * 2);
              *(undefined8 *)(puVar24 + lVar37 * 2) = *(undefined8 *)(puVar24 + lVar31 * 2);
              *(undefined8 *)(puVar24 + lVar31 * 2) = uVar10;
              iVar26 = iVar28;
              goto joined_r0x0001445234ed;
            }
          }
          bVar38 = iVar14 != 0;
          iVar26 = iVar14 + -1;
          iVar14 = iVar26;
        } while (bVar38);
        if (1 < (int)uVar8) {
          uVar19 = (ulonglong)uVar8;
          uVar10 = *(undefined8 *)puVar24;
          *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + uVar19 * 2 + -2);
          *(undefined8 *)(puVar24 + uVar19 * 2 + -2) = uVar10;
          if (uVar8 != 2) {
            do {
              uVar19 = uVar19 - 1;
              iVar26 = 0;
              iVar28 = 1;
              iVar14 = 0;
              do {
                iVar26 = iVar26 + 2;
                iVar27 = iVar28;
                if (((longlong)iVar26 < (longlong)uVar19) &&
                   (puVar24[(longlong)iVar28 * 2] <= puVar24[(longlong)iVar26 * 2])) {
                  iVar27 = iVar26;
                }
                lVar31 = (longlong)iVar14;
                lVar37 = (longlong)iVar27;
                if (puVar24[lVar37 * 2] <= puVar24[lVar31 * 2]) break;
                uVar10 = *(undefined8 *)(puVar24 + lVar31 * 2);
                *(undefined8 *)(puVar24 + lVar31 * 2) = *(undefined8 *)(puVar24 + lVar37 * 2);
                *(undefined8 *)(puVar24 + lVar37 * 2) = uVar10;
                iVar26 = iVar27 * 2;
                iVar28 = iVar27 * 2 + 1;
                iVar14 = iVar27;
              } while ((longlong)iVar28 < (longlong)uVar19);
              uVar10 = *(undefined8 *)puVar24;
              *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + uVar19 * 2 + -2);
              *(undefined8 *)(puVar24 + uVar19 * 2 + -2) = uVar10;
            } while (2 < uVar19);
          }
        }
      }
LAB_144523644:
      ppuVar13 = ppuVar13 + -3;
    } while (&local_368 <= ppuVar13);
    uVar8 = *(uint *)(local_440 + 0x60);
  }
  if (uVar8 != 0) {
    puVar21 = (uint *)*local_430;
    local_3e0 = puVar21 + (longlong)(int)uVar8 * 2;
    plVar23 = (longlong *)(local_440 + 0x88);
    local_3f8 = local_440 + 0x98;
    local_3f0 = (longlong *)(local_440 + 0xa8);
    do {
      lVar31 = *(longlong *)(local_3e8 + 8);
      uVar19 = (ulonglong)((*puVar21 & 0xfff) << 6);
      uVar8 = *puVar21 >> 0xc & 0xfff;
      local_420 = (uint *)((ulonglong)uVar8 * 0x68 +
                          *(longlong *)(*(longlong *)(lVar31 + 0x18 + uVar19) + 8));
      *(undefined4 *)(local_440 + 0x90) = 0;
      if (*(int *)(local_440 + 0x94) < 0) {
        FUN_146ea3024(plVar23,0);
      }
      local_410 = lVar31 + uVar19;
      plVar34 = *(longlong **)(*(longlong *)(local_410 + 0x20) + (longlong)(int)local_420[0x18] * 8)
      ;
      uVar9 = (**(code **)(*plVar34 + 8))(plVar34,plVar23);
      uVar19 = (ulonglong)uVar9;
      uVar16 = puVar21[1] & 0x8000;
      if (uVar16 != 0) {
        if (1 < (int)uVar9) {
          lVar31 = 0xc;
          do {
            piVar4 = (int *)*plVar23;
            *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar31);
            lVar31 = lVar31 + 0xc;
          } while ((ulonglong)uVar9 * 0xc != lVar31);
        }
        uVar19 = 1;
        FUN_140da13d2(plVar23,1,1);
      }
      puVar17 = local_420;
      iVar14 = (int)uVar19;
      local_418 = puVar21;
      FUN_14945799c(lVar11,&local_390,*(undefined8 *)(local_420 + 10),uVar19);
      puVar21 = local_390;
      local_3a8 = (byte)(uVar16 >> 0xf);
      local_3a4 = 0;
      local_3d8 = (longlong *)(longlong)local_388;
      local_39c = local_388;
      local_398 = local_390;
      lVar31 = *(longlong *)(puVar17 + 10);
      iVar26 = *(int *)(lVar31 + 0x58);
      local_3b0 = uVar8;
      local_3ac = iVar14;
      if (0 < iVar26) {
        lVar11 = 5;
        lVar37 = 0;
        do {
          lVar20 = *(longlong *)(lVar31 + 0x50);
          if ((*(char *)(lVar20 + 4 + lVar11 * 4) == '\x14') &&
             (plVar34 = *(longlong **)
                         (*(longlong *)(local_410 + 0x20) +
                         (longlong)*(int *)(*(longlong *)(puVar17 + 0xc) + lVar37 * 4) * 8),
             plVar34 != (longlong *)0x0)) {
            local_3a8 = *(byte *)(*(longlong *)(puVar17 + 0x14) + lVar37) ^ 1 | uVar16 != 0;
            local_3a4 = CONCAT44(*(undefined4 *)(lVar20 + lVar11 * 4),
                                 *(undefined4 *)(*(longlong *)(lVar20 + 0x14 + lVar11 * 4) + 0x3c));
            (**(code **)(*plVar34 + 0x38))();
            iVar26 = *(int *)(lVar31 + 0x58);
            puVar17 = local_420;
          }
          lVar37 = lVar37 + 1;
          lVar11 = lVar11 + 0xc;
        } while (lVar37 < iVar26);
      }
      if (0 < iVar14) {
        local_430 = (longlong *)(uVar19 * 0xc);
        lVar31 = 8;
        plVar34 = (longlong *)0x0;
        do {
          iVar14 = (int)(*(int *)(*plVar23 + (longlong)plVar34) + puVar17[4] + -1) / (int)puVar17[4]
          ;
          iVar26 = 1;
          if (DAT_14ca84f24 < iVar14) {
            iVar26 = iVar14 + 0xfe;
            if (-1 < iVar14 + 0x7f) {
              iVar26 = iVar14 + 0x7f;
            }
            iVar26 = iVar26 >> 7;
            iVar14 = 0x80;
          }
          lVar37 = (ulonglong)((local_418[1] & 0x7fff) << 4) + *local_428;
          lVar11 = *(longlong *)(lVar31 + -8 + lVar37);
          local_400 = *(longlong *)(lVar31 + lVar37);
          if (DAT_14ca84f28 < iVar26) {
            iVar28 = iVar26 + 0xfe;
            if (-1 < iVar26 + 0x7f) {
              iVar28 = iVar26 + 0x7f;
            }
            local_434 = iVar28 >> 7;
            iVar26 = 0x80;
          }
          else {
            local_434 = 1;
          }
          puVar17 = *(uint **)(puVar17 + 10);
          local_368 = (uint *)0x0;
          puStack_360 = (uint *)0x0;
          FUN_1448f70da(lVar11,puVar17,puVar21,&local_368);
          local_350 = local_400;
          local_340 = local_434;
          local_458 = &local_368;
          local_368 = puVar17;
          puStack_360 = puVar21;
          local_358 = lVar11;
          local_348 = iVar14;
          local_344 = iVar26;
          FUN_14945c4f2(local_408,&local_3b1,puVar17,puVar21);
          plVar34 = (longlong *)((longlong)plVar34 + 0xc);
          puVar21 = (uint *)((longlong)puVar21 + (longlong)local_3d8);
          lVar31 = lVar31 + 0x10;
          puVar17 = local_420;
        } while (local_430 != plVar34);
      }
      if ((longlong)(int)puVar17[0x12] != 0) {
        piVar22 = *(int **)(puVar17 + 0x10);
        piVar4 = piVar22 + (int)puVar17[0x12];
        lVar31 = local_3f8;
        do {
          lVar11 = local_440;
          plVar34 = *(longlong **)(*(longlong *)(local_410 + 0x20) + (longlong)*piVar22 * 8);
          if (plVar34 != (longlong *)0x0) {
            *(undefined4 *)(local_440 + 0xa0) = 0;
            if (*(int *)(local_440 + 0xa4) < 0) {
              FUN_14945c892(lVar31);
            }
            (**(code **)(*plVar34 + 0x40))(plVar34);
            iVar26 = *(int *)(lVar11 + 0xa0);
            if ((longlong)iVar26 != 0) {
              lVar11 = *(longlong *)(local_440 + 0x98);
              lVar37 = 0;
              do {
                if (((*(longlong *)(lVar11 + lVar37) != 0) && (*(int *)(lVar11 + 8 + lVar37) != 0))
                   && (*(longlong *)(lVar11 + 0x10 + lVar37) != 0)) {
                  puVar12 = (undefined8 *)FUN_14001cc68(0x58,0x10);
                  FUN_1446f470e(&local_3c0,L"ComputeFrameworkBuffer",1);
                  FUN_14047abb0(puVar12,local_3c0);
                  *puVar12 = &PTR_FUN_14a37f800;
                  puVar12[3] = 0;
                  puVar12[4] = 0;
                  puVar12[5] = 0;
                  puVar12[6] = 0;
                  puVar12[7] = 0;
                  puVar12[8] = 0;
                  puVar12[9] = 0;
                  puVar12[10] = 0;
                  iVar14 = *(int *)(local_440 + 0xb0);
                  *(uint *)(local_440 + 0xb0) = iVar14 + 1U;
                  if (*(uint *)(local_440 + 0xb4) < iVar14 + 1U) {
                    FUN_14945c8c2(local_3f0,iVar14);
                  }
                  puVar1 = (undefined8 *)(*local_3f0 + (longlong)iVar14 * 0x60);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[10] = 0;
                  puVar1[0xb] = 0;
                  puVar1[8] = 0;
                  puVar1[9] = 0;
                  puVar1[6] = 0;
                  puVar1[7] = 0;
                  puVar1[4] = 0;
                  puVar1[5] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                  *puVar1 = puVar12;
                  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar11 + 8 + lVar37);
                  puVar1[2] = *(undefined8 *)(local_410 + 8);
                  FUN_149457ab6(puVar1 + 4,*(undefined8 *)(lVar11 + 0x10 + lVar37));
                  FUN_1401e3a19(local_408,*puVar1,*(undefined8 *)(lVar11 + lVar37),
                                *(undefined4 *)(puVar1 + 1));
                  lVar31 = local_3f8;
                }
                lVar37 = lVar37 + 0x18;
              } while ((longlong)iVar26 * 0x18 != lVar37);
            }
          }
          piVar22 = piVar22 + 1;
        } while (piVar22 != piVar4);
      }
      puVar21 = local_418 + 2;
      lVar11 = local_408;
    } while (puVar21 != local_3e0);
  }
  if ((longlong)*(int *)(local_3e8 + 0x10) != 0) {
    lVar31 = *(longlong *)(local_3e8 + 8);
    lVar37 = (longlong)*(int *)(local_3e8 + 0x10) * 0x40 + lVar31;
    do {
      iVar26 = *(int *)(lVar31 + 0x28);
      if ((longlong)iVar26 != 0) {
        lVar20 = *(longlong *)(lVar31 + 0x20);
        lVar35 = 0;
        do {
          plVar23 = *(longlong **)(lVar20 + lVar35);
          if (plVar23 != (longlong *)0x0) {
            (**(code **)(*plVar23 + 0x48))(plVar23,lVar11);
          }
          lVar35 = lVar35 + 8;
        } while ((longlong)iVar26 * 8 != lVar35);
      }
      lVar31 = lVar31 + 0x40;
    } while (lVar31 != lVar37);
  }
  iVar26 = *(int *)(lVar11 + 0x610);
  *(uint *)(lVar11 + 0x610) = iVar26 + 1U;
  if (*(uint *)(lVar11 + 0x614) < iVar26 + 1U) {
    FUN_140184790((longlong *)(lVar11 + 0x608),iVar26);
  }
  lVar31 = *(longlong *)(lVar11 + 0x608);
  lVar11 = (longlong)iVar26 * 0x40;
  *(code **)(lVar31 + lVar11) = FUN_1445252e8;
  *(undefined8 *)(lVar31 + 0x10 + lVar11) = 0;
  *(undefined ***)(lVar31 + 0x20 + lVar11) = &PTR_LAB_14bcdcef0;
  *(longlong *)(lVar31 + 0x28 + lVar11) = local_440;
  *(longlong *)(lVar31 + 0x30 + lVar11) = local_3c8;
  FUN_140460f52(local_380);
  if ((local_60 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144523429:
  uVar10 = *(undefined8 *)puVar24;
  *(undefined8 *)puVar24 = *(undefined8 *)puVar30;
  *(undefined8 *)puVar30 = uVar10;
  iVar26 = iVar26 + -1;
  puVar25 = puVar25 + -4;
  if ((longlong)puVar33 - (longlong)puVar17 < (longlong)puVar18 - (longlong)puVar36) {
    if (puVar15 < puVar21) {
      *ppuVar13 = puVar15;
      ppuVar13[1] = puVar21;
      *(int *)(ppuVar13 + 2) = iVar26;
      ppuVar13 = ppuVar13 + 3;
    }
    puVar17 = puVar24;
    puVar18 = puVar33;
    if (puVar30 <= puVar24 + 2) goto LAB_144523644;
  }
  else {
    if (puVar24 + 2 < puVar30) {
      *ppuVar13 = puVar24;
      ppuVar13[1] = puVar25;
      *(int *)(ppuVar13 + 2) = iVar26;
      ppuVar13 = ppuVar13 + 3;
    }
    puVar17 = puVar36;
    puVar24 = puVar15;
    puVar25 = puVar21;
    puVar18 = puVar21;
    if (puVar21 <= puVar15) goto LAB_144523644;
  }
  iVar14 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
  uVar8 = iVar14 + 1;
  puVar21 = puVar25;
  if (iVar26 == 0) goto LAB_1445234c6;
  goto LAB_1445233aa;
}



// FUNCTION 144523d10 FUN_144523d10 body=55 status=ok
// SIG undefined FUN_144523d10(void)

void FUN_144523d10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc174e0 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc174e0 = FUN_14171c317(FUN_1467311d0,uVar1,L"EComputeKernelFlags");
  }
  return;
}



// FUNCTION 144523d53 FUN_144523d53 body=69 status=ok
// SIG undefined FUN_144523d53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144523d53(void)

{
  _DAT_14cc17758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144523d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc17760,1);
  return;
}



// FUNCTION 144523d98 FUN_144523d98 body=562 status=ok
// SIG undefined FUN_144523d98(void)

void FUN_144523d98(void)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  plVar16 = &DAT_14cc1a7e0;
  do {
    *(undefined4 *)(plVar16 + -1) = 0;
    if (plVar16[-2] != 0) {
      FUN_1400020a8();
    }
    puVar1 = (uint *)(plVar16 + -8);
    iVar3 = (int)plVar16[-5];
    if (iVar3 == 0) {
      uVar10 = 0;
      uVar15 = 1;
      iVar9 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)plVar16[-6];
      if ((uint *)plVar16[-6] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      uVar14 = *puVar6;
      if (uVar14 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar10 = 0;
        uVar7 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar7 = uVar10;
        }
        iVar9 = 0;
        do {
          if (uVar7 == uVar10) goto LAB_144523df1;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar6[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar10 = 0;
        iVar9 = 0;
      }
      uVar15 = (ulonglong)(-uVar14 & uVar14);
      uVar7 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 < iVar3) {
      uVar14 = 0xffffffff;
      do {
        FUN_144a886ae((longlong)iVar5 * 0x38 + plVar16[-10] + 0x10);
        uVar14 = ~(uint)uVar15 & uVar14;
        puVar6 = (uint *)plVar16[-6];
        if ((uint *)plVar16[-6] == (uint *)0x0) {
          puVar6 = puVar1;
        }
        iVar3 = (int)plVar16[-5];
        iVar5 = (int)uVar10;
        lVar13 = (longlong)iVar5;
        uVar4 = puVar6[lVar13] & uVar14;
        if (uVar4 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar12 = iVar11 >> 5;
          if (iVar11 >> 5 < iVar5) {
            iVar12 = iVar5;
          }
          lVar8 = 0;
          do {
            if (iVar12 - lVar13 == lVar8) goto LAB_144523df1;
            iVar9 = iVar9 + 0x20;
            uVar4 = puVar6[lVar13 + lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar4 == 0);
          uVar10 = (ulonglong)(uint)(iVar5 + (int)lVar8);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar4 & uVar4);
        uVar7 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar3);
    }
LAB_144523df1:
    plVar2 = plVar16 + -10;
    *(undefined4 *)(plVar16 + -9) = 0;
    if (*(int *)((longlong)plVar16 + -0x44) != 0) {
      FUN_144748838(plVar2,0);
    }
    plVar16[-4] = 0xffffffff;
    *(undefined4 *)(plVar16 + -5) = 0;
    if (0x80 < *(uint *)((longlong)plVar16 + -0x24)) {
      *(undefined4 *)((longlong)plVar16 + -0x24) = 0x80;
      FUN_1446efbd8(puVar1);
    }
    if (plVar16[-6] != 0) {
      FUN_1400020a8();
    }
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    plVar16 = plVar2;
    if (plVar2 == (longlong *)&DAT_14cc17770) {
      return;
    }
  } while( true );
}



// FUNCTION 144523fdc FUN_144523fdc body=234 status=ok
// SIG undefined FUN_144523fdc(void)

void FUN_144523fdc(longlong param_1,void **param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  void *local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0xffffffff;
  local_68[0] = 1;
  if (&local_60 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    uStack_58 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&local_60,uVar1,0);
      memcpy(local_60,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_14945cc10(param_1 + 8,iVar2);
  }
  FUN_14945cb0a((longlong)iVar2 * 0x48 + *(longlong *)(param_1 + 8),local_68);
  if ((*(int *)(param_1 + 0x178) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x170), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
  }
  FUN_149457f4a(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445240c8 FUN_1445240c8 body=171 status=ok
// SIG undefined FUN_1445240c8(void)

void FUN_1445240c8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x144) & 2) == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_149457f88(param_1,param_2,local_38);
    *param_4 = *(undefined4 *)(param_1 + 0x140);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_4 + 8) = 0x500000008;
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar2 = *(undefined4 *)(param_1 + 0x150);
    uVar3 = *(undefined4 *)(param_1 + 0x154);
    *param_4 = *(undefined4 *)(param_1 + 0x148);
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    FUN_14945a656(param_4 + 4,param_1 + 0x158);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_1 + 0x168);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144524174 FUN_144524174 body=41 status=ok
// SIG undefined FUN_144524174(void)

void FUN_144524174(void)

{
  DAT_14cc1a988 = 0;
  if (DAT_14cc1a980 != 0) {
    FUN_1400020a8();
  }
  FUN_146179164();
  return;
}



// FUNCTION 14452419d FUN_14452419d body=49 status=ok
// SIG undefined FUN_14452419d(void)

void FUN_14452419d(void)

{
  FUN_1447a1747(DAT_14cc1a998,DAT_14cc1a9a0);
  if (DAT_14cc1a998 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1445241ce FUN_1445241ce body=55 status=ok
// SIG undefined FUN_1445241ce(void)

void FUN_1445241ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1a9d0 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc1a9d0 = FUN_14171c317(FUN_1467315db,uVar1,L"EShaderFundamentalType");
  }
  return;
}



// FUNCTION 144524205 FUN_144524205 body=55 status=ok
// SIG undefined FUN_144524205(void)

void FUN_144524205(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1a9e8 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc1a9e8 = FUN_14171c317(FUN_14673160a,uVar1,L"EShaderFundamentalDimensionType");
  }
  return;
}



// FUNCTION 14452423c FUN_14452423c body=55 status=ok
// SIG undefined FUN_14452423c(void)

void FUN_14452423c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1aa00 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc1aa00 = FUN_14171c317(FUN_146731639,uVar1,L"EShaderParamBindingType");
  }
  return;
}



// FUNCTION 144524273 FUN_144524273 body=55 status=ok
// SIG undefined FUN_144524273(void)

void FUN_144524273(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1aa18 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc1aa18 = FUN_14171c317(FUN_146731668,uVar1,L"EShaderResourceType");
  }
  return;
}



// FUNCTION 1445242aa FUN_1445242aa body=55 status=ok
// SIG undefined FUN_1445242aa(void)

void FUN_1445242aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1aa30 == 0) {
    uVar1 = FUN_141022b47();
    DAT_14cc1aa30 = FUN_14171c317(FUN_146731697,uVar1,L"EShaderParamModifier");
  }
  return;
}



// FUNCTION 1445242e1 FUN_1445242e1 body=41 status=ok
// SIG undefined FUN_1445242e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445242e1(void)

{
  _DAT_14cc1ab18 = 0;
  if (DAT_14cc1ab10 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6a07e();
  return;
}



// FUNCTION 14452430a FUN_14452430a body=325 status=ok
// SIG undefined FUN_14452430a(void)

void FUN_14452430a(longlong *param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x10);
    lVar8 = (longlong)*(int *)(param_2 + 0x18) * 0x10 + lVar7;
    do {
      pcVar1 = *(char **)(lVar7 + 8);
      if (*pcVar1 == '\x04') {
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          lVar2 = *(longlong *)(pcVar1 + 4);
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar5 = (uint)lVar2 & 0xffff;
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = param_1 + 7;
          }
          iVar6 = *(int *)((longlong)plVar4 +
                          (ulonglong)
                          ((int)param_1[9] - 1U &
                          (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x10) == lVar2) goto LAB_14452440d;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *param_1 + 8);
            } while (iVar6 != -1);
          }
        }
        FUN_14452430a(param_1,pcVar1,param_3);
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_14945b542(param_3,iVar6);
        }
        lVar2 = *(longlong *)(lVar7 + 8);
        *(longlong *)(*param_3 + (longlong)iVar6 * 8) = lVar2;
        FUN_144a13f80(param_1,local_44,lVar2 + 4,0);
      }
LAB_14452440d:
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144524450 FUN_144524450 body=46 status=ok
// SIG undefined FUN_144524450(void)

void FUN_144524450(void)

{
  longlong lVar1;
  
  lVar1 = 0xa8;
  do {
    if (*(longlong *)((longlong)&DAT_14cc1ab10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14452456c FUN_14452456c body=120 status=ok
// SIG undefined FUN_14452456c(void)

void FUN_14452456c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_1407779ba(local_688,param_2,param_3,0);
  (**(code **)(*(longlong *)*param_1 + 0x10))
            ((longlong *)*param_1,local_688,param_1[1],DAT_14c760db4);
  FUN_140779360(local_688);
  FUN_140778010(local_688);
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445245f0 FUN_1445245f0 body=12 status=ok
// SIG undefined FUN_1445245f0(void)

void FUN_1445245f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445245f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445245fc FUN_1445245fc body=29 status=ok
// SIG undefined FUN_1445245fc(void)

undefined8 FUN_1445245fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144524640 FUN_144524640 body=282 status=ok
// SIG undefined FUN_144524640(void)

undefined8 * FUN_144524640(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144524619);
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



// FUNCTION 14452475a FUN_14452475a body=173 status=ok
// SIG undefined FUN_14452475a(void)

void FUN_14452475a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1407779ba(local_688,&DAT_14ca85100,param_3,0);
  (**(code **)(*(longlong *)param_1[0x15] + 0x10))
            ((longlong *)param_1[0x15],local_688,param_1[0x16],DAT_14c760db4);
  FUN_140779360(local_688);
  FUN_140778010(local_688);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144524822 FUN_144524822 body=12 status=ok
// SIG undefined FUN_144524822(void)

void FUN_144524822(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014452482b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14452482e FUN_14452482e body=29 status=ok
// SIG undefined FUN_14452482e(void)

undefined8 FUN_14452482e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14452484c FUN_14452484c body=282 status=ok
// SIG undefined FUN_14452484c(void)

undefined8 * FUN_14452484c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144524619);
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



// FUNCTION 144524966 FUN_144524966 body=109 status=ok
// SIG undefined FUN_144524966(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144524966(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1494576c4(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1494576c4(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001445249c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1445249d4 FUN_1445249d4 body=40 status=ok
// SIG undefined FUN_1445249d4(void)

void FUN_1445249d4(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_145973e44(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 144524a06 FUN_144524a06 body=12 status=ok
// SIG undefined FUN_144524a06(void)

void FUN_144524a06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144524a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144524a12 FUN_144524a12 body=29 status=ok
// SIG undefined FUN_144524a12(void)

undefined8 FUN_144524a12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144524a30 FUN_144524a30 body=282 status=ok
// SIG undefined FUN_144524a30(void)

undefined8 * FUN_144524a30(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144524619);
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


