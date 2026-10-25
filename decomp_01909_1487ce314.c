// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487ce314 FUN_1487ce314 body=522 status=ok
// SIG undefined FUN_1487ce314(void)

void FUN_1487ce314(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_2d8 [32];
  byte *local_2b8;
  byte local_2a8 [32];
  undefined1 local_288;
  byte local_280 [32];
  byte local_260 [32];
  byte abStack_240 [120];
  undefined1 local_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0 [16];
  longlong local_190;
  undefined1 local_180 [32];
  byte local_160;
  undefined1 local_158 [144];
  char local_c8 [8];
  undefined1 local_c0 [144];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_145c6695c(param_2);
  FUN_146024696(param_2);
  if (0.0 < *(double *)(param_2 + 0xb0) || *(double *)(param_2 + 0xb0) == 0.0) {
    local_1a8 = 0;
    FUN_14101bd16(local_1c8,&DAT_149dfb77a);
    local_2b8 = local_1c8;
    FUN_140d767d6(local_1a0,&DAT_14cb71db0,DAT_14cb71de8,L"IdleStop");
    cVar1 = FUN_140e27f2c(local_1a0);
    if (cVar1 == '\0') {
      local_288 = 0;
      FUN_14101bd16(local_2a8,&DAT_149dfb77a);
      pbVar3 = local_280;
      local_2b8 = local_2a8;
    }
    else {
      abStack_240[0x28] = 0;
      FUN_14101bd16(abStack_240 + 8,&DAT_149dfb77a);
      pbVar3 = abStack_240 + 0x30;
      local_2b8 = abStack_240 + 8;
    }
    FUN_140d767d6(pbVar3,&DAT_14cb71db0,DAT_14cb71de8,L"IdleStop");
    FUN_140d76846(local_158,pbVar3);
    FUN_14027c224(local_c8,local_158);
    uVar2 = FUN_14479d2ce(param_2);
    if (local_c8[0] == '\x01') {
      FUN_140f3f840(local_c0,uVar2);
    }
    FUN_14027c198(local_c8);
    FUN_1404eeb8e(local_158);
    if (cVar1 == '\0') {
      pbVar3 = local_260;
    }
    else {
      pbVar3 = abStack_240 + 0x50;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[pbVar3[0x20]])(pbVar3);
    if (*(longlong *)(pbVar3 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_160])(local_180);
    if (local_190 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1415beab4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ce520 FUN_1487ce520 body=150 status=ok
// SIG undefined FUN_1487ce520(void)

undefined8 FUN_1487ce520(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1 + 0x30,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  pwVar1 = L"Hide";
  if (*(char *)(param_1 + 0x38) != '\0') {
    pwVar1 = L"Show";
  }
  FUN_140002266(param_2,L"%s: %s",pwVar1,puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487ce684 FUN_1487ce684 body=126 status=ok
// SIG undefined FUN_1487ce684(void)

ulonglong FUN_1487ce684(longlong param_1)

{
  byte bVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x1dc);
  if ((bVar1 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1cc) = 0x3f80000000000000;
    memcpy((void *)(param_1 + 0x1f0),(void *)(param_1 + 0x60),0x90);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_1 + 0x108);
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffffffffff04;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2) & 0xffffffff;
}



// FUNCTION 1487cea4c FUN_1487cea4c body=301 status=ok
// SIG undefined FUN_1487cea4c(void)

undefined4
FUN_1487cea4c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,undefined1 param_7)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_50;
  undefined1 local_41;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 8))();
  if (lVar4 != 0) {
    uVar5 = FUN_1407ca880();
    plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      local_50 = &local_41;
      local_41 = 1;
      local_58 = param_7;
      lVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
      if (lVar4 != 0) {
        pcVar1 = (code *)*param_6;
        plVar7 = param_6 + 4;
        if ((longlong *)param_6[2] != (longlong *)0x0) {
          plVar7 = (longlong *)param_6[2];
        }
        local_40 = lVar4;
        uVar5 = (**(code **)(*plVar7 + 8))();
        cVar2 = (*pcVar1)(uVar5,&local_40);
        if (cVar2 != '\0') {
          uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
          uVar3 = FUN_14096df60(uVar5,lVar4,local_41,param_5);
          goto LAB_1487ceb35;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1487ceb35:
  if (*param_6 != 0) {
    plVar6 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ceb7a FUN_1487ceb7a body=407 status=ok
// SIG undefined FUN_1487ceb7a(void)

void FUN_1487ceb7a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_1 + 0x30);
  FUN_1487ced12(param_2,&local_60);
  FUN_140002266(&local_70,L"(Num Poses: %i)",uVar1);
  iVar3 = local_68 + -1;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(&local_60,local_70,iVar3);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  _Src = local_60;
  local_80 = (void *)0x0;
  local_78 = local_58;
  if ((longlong)local_58 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_58,0);
    memcpy(local_80,_Src,(longlong)local_58 * 2);
  }
  FUN_147906d4c(param_2,&local_80,0);
  local_98 = 0;
  uStack_90 = 0;
  uVar4 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar4);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      local_a8 = 0;
      uStack_a0 = 0;
      uVar4 = FUN_147906f5e(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x128) + uVar6 * 4),
                            &local_a8);
      FUN_147906d38(lVar2 + lVar5,uVar4);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar1 != uVar6);
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ced12 FUN_1487ced12 body=208 status=ok
// SIG undefined FUN_1487ced12(void)

undefined8 FUN_1487ced12(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c6508();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cede4 FUN_1487cede4 body=61 status=ok
// SIG undefined FUN_1487cede4(void)

void FUN_1487cede4(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1487cee22 FUN_1487cee22 body=47 status=ok
// SIG undefined FUN_1487cee22(void)

void FUN_1487cee22(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(param_1 + 8) = param_3;
  }
  return;
}



// FUNCTION 1487cee52 FUN_1487cee52 body=291 status=ok
// SIG undefined FUN_1487cee52(void)

void FUN_1487cee52(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1487cef76(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_140002266(&local_50,&DAT_149e06144);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cef76 FUN_1487cef76 body=208 status=ok
// SIG undefined FUN_1487cef76(void)

undefined8 FUN_1487cef76(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c5c44();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf048 FUN_1487cf048 body=93 status=ok
// SIG undefined FUN_1487cf048(void)

void FUN_1487cf048(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_140890cca();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_1487cf08d;
  }
  lVar3 = 0;
LAB_1487cf08d:
  *(longlong *)(param_1 + 0x68) = lVar3;
  FUN_140893f9e(param_1,param_2);
  return;
}



// FUNCTION 1487cf0b0 FUN_1487cf0b0 body=26 status=ok
// SIG undefined FUN_1487cf0b0(void)

void FUN_1487cf0b0(undefined8 param_1)

{
  FUN_140893f9e();
  FUN_1487cf0ca(param_1);
  return;
}



// FUNCTION 1487cf0ca FUN_1487cf0ca body=150 status=ok
// SIG undefined FUN_1487cf0ca(void)

void FUN_1487cf0ca(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((ulonglong)*(byte *)(param_1 + 0x58) < 6) {
    iVar1 = *(int *)(&DAT_14b3ed038 + (ulonglong)*(byte *)(param_1 + 0x58) * 4);
    if (*(int *)(param_1 + 0x68) != 2) {
      FUN_1446efa72((undefined8 *)(param_1 + 0x60),0,2,0x10);
      *(undefined4 *)(param_1 + 0x68) = 2;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    *puVar2 = &DAT_149efe500;
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
    puVar2[2] = lVar4;
    *puVar2 = &DAT_14b3ed038 + iVar1;
    puVar2[3] = param_1;
  }
  return;
}



// FUNCTION 1487cf160 FUN_1487cf160 body=439 status=ok
// SIG undefined FUN_1487cf160(void)

void FUN_1487cf160(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_64;
  int *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407058ce(param_1 + 0x18);
  lVar2 = FUN_144966fba(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a78c84();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar3 = FUN_14479d2ce(lVar2 + 0x1888), lVar3 != 0)) {
      lVar4 = (**(code **)(*(longlong *)(lVar2 + 0x1240) + 0x10))(lVar2 + 0x1240);
      lVar5 = (**(code **)(*(longlong *)(lVar3 + 0x1240) + 0x10))(lVar3 + 0x1240);
      lVar2 = FUN_140418574(lVar2);
      plVar6 = (longlong *)FUN_140418574(lVar3);
      if ((plVar6 != (longlong *)0x0 && (lVar2 != 0 && lVar4 != 0)) && lVar5 != 0) {
        uVar7 = FUN_144b20792();
        lVar2 = FUN_14481774e(uVar7,lVar5,lVar4);
        local_64 = 0;
        lVar3 = (**(code **)(*plVar6 + 0x310))(plVar6);
        if (0 < *(int *)(lVar3 + 0x28)) {
          do {
            uVar1 = FUN_14793cb3c(lVar5,plVar6,local_64,0);
            local_68 = 0xffffffff;
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x18))) {
              local_68 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar1 * 4);
            }
            local_60 = &local_64;
            local_58 = &local_68;
            FUN_140263e2a(param_1 + 0x18,local_4c,&local_60);
            iVar8 = local_64 + 1;
            local_64 = iVar8;
            lVar3 = (**(code **)(*plVar6 + 0x310))(plVar6);
          } while (iVar8 < *(int *)(lVar3 + 0x28));
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487cf318 FUN_1487cf318 body=245 status=ok
// SIG undefined FUN_1487cf318(void)

void FUN_1487cf318(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) {
      FUN_1487cf160(param_1,param_2);
    }
    lVar1 = FUN_144966fba(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78c84();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar1 = FUN_14479d2ce(lVar1 + 0x1888);
        if (lVar1 != 0) {
          FUN_147a0d636(lVar1,&local_28);
          if ((longlong *)(param_1 + 0x68) == &local_28) {
            if (local_28 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_1 + 0x68) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0x68) = local_28;
            *(undefined4 *)(param_1 + 0x70) = local_20;
            *(undefined4 *)(param_1 + 0x74) = local_1c;
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf40e FUN_1487cf40e body=287 status=ok
// SIG undefined FUN_1487cf40e(void)

void FUN_1487cf40e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c) == *(int *)(param_1 + 0x70)) &&
     (lVar2 = *param_2, lVar2 != 0)) {
    plVar1 = param_2 + 4;
    if ((char)param_2[0x13] == '\x01') {
      FUN_1433edd58(plVar1);
    }
    else {
      FUN_1448859f0(plVar1);
    }
    if (0 < *(int *)(param_1 + 0x70)) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
          lVar4 = *(longlong *)(param_1 + 0x58);
          if (*(longlong *)(param_1 + 0x58) == 0) {
            lVar4 = param_1 + 0x50;
          }
          iVar8 = *(int *)(lVar4 + (ulonglong)((uint)uVar5 & *(int *)(param_1 + 0x60) + 0x7fffffffU)
                                   * 4);
          if (iVar8 != -1) {
            do {
              lVar4 = *(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 0x10;
              if (uVar5 == *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 0x10))
              goto LAB_1487cf47b;
              iVar8 = *(int *)(lVar4 + 8);
            } while (iVar8 != -1);
          }
        }
        lVar4 = 0;
LAB_1487cf47b:
        iVar8 = *(int *)(lVar4 + 4);
        iVar3 = -1;
        if ((-1 < (longlong)iVar8) &&
           (lVar4 = *(longlong *)(lVar2 + 0x6a0), iVar8 < *(int *)(lVar4 + 0x88))) {
          iVar3 = *(int *)(*(longlong *)(lVar4 + 0x80) + (longlong)iVar8 * 4);
        }
        puVar6 = (undefined8 *)(uVar5 * 0x60 + *(longlong *)(param_1 + 0x68));
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x60 + *plVar1);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x70));
    }
  }
  return;
}



// FUNCTION 1487cf52e FUN_1487cf52e body=194 status=ok
// SIG undefined FUN_1487cf52e(void)

void FUN_1487cf52e(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487cf5f2(param_2,&local_40);
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
  FUN_147acfca8(param_1,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf5f2 FUN_1487cf5f2 body=208 status=ok
// SIG undefined FUN_1487cf5f2(void)

undefined8 FUN_1487cf5f2(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c659e();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf6f6 FUN_1487cf6f6 body=198 status=ok
// SIG undefined FUN_1487cf6f6(void)

void FUN_1487cf6f6(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487cf7be(param_2,&local_40);
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
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf7be FUN_1487cf7be body=208 status=ok
// SIG undefined FUN_1487cf7be(void)

undefined8 FUN_1487cf7be(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c6732();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cf890 FUN_1487cf890 body=520 status=ok
// SIG undefined FUN_1487cf890(void)

void FUN_1487cf890(longlong param_1,undefined8 param_2)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined2 *local_a0;
  int local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1487cfa9a(param_2,&local_70);
  pvVar2 = local_70;
  local_80 = (void *)0x0;
  lVar4 = (longlong)local_68;
  local_78 = local_68;
  if (lVar4 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_68,0);
    memcpy(local_80,pvVar2,lVar4 * 2);
  }
  FUN_147906d4c(param_2,&local_80,0);
  local_b8 = param_1;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar6 = (longlong)*(int *)(param_1 + 0xe0) * 0x14;
    do {
      fVar1 = *(float *)(lVar4 + 0x10);
      FUN_1400021e4(lVar4,&local_a0);
      puVar5 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar5 = local_a0;
      }
      FUN_140002266(&local_90,L"  Bone : %s (%0.2f) ",puVar5,SUB84((double)fVar1,0));
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_70 = local_90;
      local_90 = (void *)0x0;
      local_68 = (int)local_88;
      local_64 = local_88._4_4_;
      local_88 = 0;
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar3 = local_68;
      pvVar2 = local_70;
      local_b0 = (void *)0x0;
      local_a8 = local_68;
      if (local_68 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_68,0);
        memcpy(local_b0,pvVar2,(longlong)iVar3 * 2);
      }
      FUN_147906d4c(param_2,&local_b0,0);
      lVar4 = lVar4 + 0x14;
      lVar6 = lVar6 + -0x14;
    } while (lVar6 != 0);
  }
  FUN_147906d38(local_b8 + 0x18,param_2);
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487cfa9a FUN_1487cfa9a body=208 status=ok
// SIG undefined FUN_1487cfa9a(void)

undefined8 FUN_1487cfa9a(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c6a8a();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cfb6c FUN_1487cfb6c body=2978 status=ok
// SIG undefined FUN_1487cfb6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487cfb6c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  ulonglong uVar31;
  double dVar33;
  undefined1 auVar32 [16];
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar41;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  double dVar52;
  undefined1 auVar50 [16];
  double dVar53;
  double dVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  undefined1 auStack_318 [44];
  int local_2ec;
  longlong *local_2e8;
  longlong local_2e0;
  undefined1 local_2d8 [16];
  longlong *local_2c8;
  longlong local_2c0;
  undefined1 local_2b8 [24];
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  iVar22 = *(int *)(param_1 + 0xf0);
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar22);
  }
  lVar19 = *(longlong *)(param_2 + 0x30);
  if (*(int *)((longlong)param_3 + 0xc) < iVar22) {
    FUN_1403d6c30(param_3);
    iVar22 = *(int *)(param_1 + 0xf0);
  }
  if (iVar22 != 0) {
    local_2e8 = (longlong *)(param_2 + 0x20);
    lVar6 = *(longlong *)(param_1 + 0xe8);
    local_2a0 = lVar19 + 0x10;
    lVar24 = 0;
    local_2e0 = param_2;
    local_2c8 = param_3;
    local_2c0 = lVar19;
    do {
      iVar21 = *(int *)(lVar6 + lVar24);
      lVar17 = (longlong)iVar21;
      if (((-1 < lVar17) && (iVar21 < *(int *)(param_1 + 0xe0))) &&
         (1e-05 < *(float *)(*(longlong *)(param_1 + 0xd8) + 0x10 + lVar17 * 0x14))) {
        lVar17 = *(longlong *)(param_1 + 0xd8) + lVar17 * 0x14;
        uVar23 = *(uint *)(lVar17 + 8);
        if ((~uVar23 & 0x7fffffff) != 0) {
          lVar18 = *(longlong *)(lVar19 + 0x20);
          if (*(longlong *)(lVar19 + 0x20) == 0) {
            lVar18 = local_2a0;
          }
          if ((*(uint *)(lVar18 + (ulonglong)(uVar23 >> 3 & 0x1ffc)) >> (uVar23 & 0x1f) & 1) != 0) {
            if ((int)uVar23 < 0) {
              uVar23 = (int)(uVar23 * 2) >> 1;
              if ((int)uVar23 < 0) {
                iVar21 = -1;
              }
              else {
                iVar21 = -1;
                if ((int)uVar23 < *(int *)(lVar19 + 0x88)) {
                  piVar20 = (int *)((ulonglong)uVar23 * 4 + *(longlong *)(lVar19 + 0x80));
                  goto LAB_1487cfce4;
                }
              }
            }
            else {
              piVar20 = (int *)(lVar17 + 0xc);
LAB_1487cfce4:
              iVar21 = *piVar20;
            }
            lVar18 = *(longlong *)(lVar19 + 0x48);
            FUN_1479398b0(lVar17,&local_178,lVar19);
            plVar16 = local_2c8;
            lVar19 = *(longlong *)(lVar18 + 0x30);
            lVar18 = (longlong)local_178._0_4_ * 0x60;
            auVar37 = *(undefined1 (*) [16])(lVar19 + lVar18);
            dVar35 = auVar37._0_8_;
            dVar8 = auVar37._8_8_;
            auVar68 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar18);
            dVar39 = auVar68._0_8_;
            dVar9 = auVar68._8_8_;
            pauVar1 = (undefined1 (*) [16])(lVar19 + 0x20 + lVar18);
            dVar49 = *(double *)*pauVar1;
            dVar52 = *(double *)(*pauVar1 + 8);
            pdVar2 = (double *)(lVar19 + 0x30 + lVar18);
            dVar14 = *pdVar2;
            dVar41 = pdVar2[1];
            auVar44 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar18);
            dVar7 = auVar44._0_8_;
            dVar30 = auVar44._8_8_;
            auVar42 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar18);
            dVar12 = auVar42._0_8_;
            dVar40 = auVar42._8_8_;
            lVar19 = *(longlong *)(param_2 + 0x38);
            lVar18 = (longlong)iVar21;
            iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x90) + lVar18 * 4);
            lVar25 = (longlong)iVar5;
            local_2ec = iVar21;
            if (lVar25 != -1) {
              local_2b8._0_16_ = *pauVar1;
              if (*(char *)(lVar19 + lVar25) == '\0') {
                FUN_1447d5d8e(local_2e8,iVar5);
              }
              auVar45 = _DAT_149934d80;
              lVar19 = *local_2e8;
              lVar25 = lVar25 * 0x60;
              pauVar1 = (undefined1 (*) [16])(lVar19 + lVar25);
              auVar37 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar25);
              dVar65 = auVar37._0_8_;
              dVar33 = auVar37._8_8_;
              auVar43 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar25);
              dVar66 = auVar43._0_8_;
              local_2d8._8_8_ = auVar43._8_8_;
              auVar37 = minpd(auVar44,auVar37);
              auVar42 = minpd(auVar42,auVar43);
              auVar44._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
              auVar44._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
              iVar21 = movmskpd((int)lVar19,auVar44);
              auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
              auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
              uVar23 = movmskpd((int)lVar25,auVar43);
              if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
                dVar53 = SUB168(*pauVar1,0);
                dVar55 = SUB168(*pauVar1,8);
                dVar52 = *(double *)pauVar1[1];
                dVar15 = *(double *)(pauVar1[1] + 8);
                dVar36 = *(double *)(pauVar1[1] + 8);
                dVar46 = *(double *)(pauVar1[1] + 8);
                auVar42._8_4_ = auVar68._0_4_;
                auVar42._0_8_ = dVar9;
                auVar42._12_4_ = auVar68._4_4_;
                dVar47 = *(double *)(*pauVar1 + 8);
                dVar48 = *(double *)(*pauVar1 + 8);
                dVar64 = *(double *)pauVar1[1];
                dVar51 = *(double *)pauVar1[1];
                dVar49 = (double)local_2b8._0_8_ * dVar65;
                dVar70 = (double)local_2b8._8_8_ * dVar33;
                dVar14 = dVar14 * dVar66;
                dVar41 = dVar41 * (double)local_2d8._8_8_;
                dVar56 = dVar70 * dVar53 - dVar49 * dVar55;
                dVar59 = dVar14 * dVar55 - dVar70 * dVar52;
                dVar67 = dVar49 * dVar52 - dVar14 * dVar53;
                dVar69 = dVar41 * dVar15 - dVar41 * dVar15;
                dVar59 = dVar59 + dVar59;
                dVar67 = dVar67 + dVar67;
                dVar56 = dVar56 + dVar56;
                dVar69 = dVar69 + dVar69;
                dVar49 = (dVar56 * dVar55 - dVar52 * dVar67) + dVar36 * dVar59 + dVar49 +
                         *(double *)pauVar1[2];
                dVar52 = (dVar59 * dVar52 - dVar56 * dVar53) + dVar46 * dVar67 + dVar70 +
                         *(double *)(pauVar1[2] + 8);
                dVar14 = (dVar67 * dVar53 - dVar55 * dVar59) + dVar36 * dVar56 + dVar14 +
                         *(double *)pauVar1[3];
                dVar41 = (dVar69 * dVar15 - dVar69 * dVar15) + dVar46 * dVar69 + dVar41 +
                         *(double *)(pauVar1[3] + 8);
                dVar12 = dVar12 * dVar66;
                dVar40 = dVar40 * (double)local_2d8._8_8_;
                auVar68._8_8_ =
                     auVar42._8_8_ * dVar51 * -1.0 +
                     ((*(double *)*pauVar1 * dVar35 * -1.0 + dVar46 * dVar9) - dVar48 * dVar8);
                auVar68._0_8_ =
                     dVar9 * dVar64 * 1.0 +
                     ((*(double *)*pauVar1 * dVar8 * 1.0 + dVar36 * dVar39) - dVar47 * dVar35);
                auVar37._8_8_ =
                     (ulonglong)
                     (dVar35 * dVar51 * 1.0 +
                     dVar9 * dVar48 + auVar42._8_8_ * *(double *)*pauVar1 * -1.0 + dVar46 * dVar8);
                auVar37._0_8_ =
                     (ulonglong)
                     (dVar8 * dVar64 * -1.0 +
                     dVar39 * dVar47 + dVar9 * *(double *)*pauVar1 * 1.0 + dVar36 * dVar35);
              }
              else {
                local_2d8._0_8_ = dVar12 * dVar66;
                local_2d8._8_8_ = dVar40 * (double)local_2d8._8_8_;
                dVar49 = *(double *)*pauVar1;
                dVar52 = *(double *)(*pauVar1 + 8);
                dVar36 = *(double *)pauVar1[1];
                dVar46 = dVar52 + dVar52;
                dVar47 = dVar36 + dVar36;
                dVar41 = dVar49 * (dVar49 + dVar49);
                local_1a8 = (1.0 - (dVar41 + dVar52 * dVar46)) * dVar66;
                dVar64 = *(double *)*pauVar1 * dVar47;
                dVar40 = *(double *)(pauVar1[1] + 8);
                dVar48 = dVar47 * dVar40;
                dVar51 = (dVar49 + dVar49) * *(double *)(pauVar1[1] + 8);
                dVar40 = dVar46 * dVar40;
                local_1b8 = (dVar40 + dVar64) * dVar66;
                local_1d8 = (dVar46 * dVar49 - dVar48) * dVar33;
                dStack_1b0 = (dVar47 * dVar52 - dVar51) * dVar66;
                local_1f8 = (1.0 - (dVar36 * dVar47 + dVar52 * dVar46)) * dVar65;
                dStack_1d0 = (1.0 - (dVar36 * dVar47 + dVar41)) * dVar33;
                dStack_1f0 = (dVar46 * dVar49 + dVar48) * dVar65;
                local_1c8 = (dVar47 * dVar52 + dVar51) * dVar33;
                local_1e8 = (dVar64 - dVar40) * dVar65;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = *(undefined8 *)pauVar1[2];
                uStack_190 = *(undefined8 *)(pauVar1[2] + 8);
                local_188 = *(undefined8 *)pauVar1[3];
                uStack_180 = 0x3ff0000000000000;
                dVar40 = dVar8 + dVar8;
                dVar49 = dVar39 + dVar39;
                dVar41 = (dVar35 + dVar35) * dVar35;
                local_228 = (1.0 - (dVar41 + dVar40 * dVar8)) * dVar12;
                auVar57._8_4_ = auVar68._8_4_;
                auVar57._0_8_ = dVar9;
                auVar57._12_4_ = auVar68._12_4_;
                dVar52 = (dVar35 + dVar35) * auVar57._8_8_;
                local_238 = (dVar40 * dVar9 + dVar35 * dVar49) * dVar12;
                local_258 = (dVar40 * dVar35 - dVar49 * dVar9) * dVar30;
                dStack_230 = (dVar49 * dVar8 - dVar52) * dVar12;
                local_278 = ((double)DAT_149934d80 - (dVar49 * dVar39 + dVar40 * dVar8)) * dVar7;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar49 * dVar39 + dVar41)) * dVar30;
                dStack_270 = (dVar40 * dVar35 + dVar49 * dVar9) * dVar7;
                local_248 = (dVar49 * dVar8 + dVar52) * dVar30;
                local_268 = (dVar35 * dVar49 - dVar40 * dVar9) * dVar7;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = (double)local_2b8._0_8_;
                dStack_210 = (double)local_2b8._8_8_;
                local_208._8_4_ = 0;
                local_208._0_8_ = dVar14;
                local_208._12_4_ = 0x3ff00000;
                FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                dVar40 = (double)local_2d8._8_8_;
                dVar12 = (double)local_2d8._0_8_;
                auVar26._8_8_ = -(ulonglong)(0.0 <= dVar30 * dVar33);
                auVar26._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar65);
                auVar37 = blendvpd(_DAT_149936790,auVar45,auVar26);
                dVar35 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0xbff0000000000000
                                 | -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000
                                 );
                dVar39 = auVar37._0_8_;
                local_168 = local_168 * dVar39;
                local_170 = local_170 * dVar39;
                local_178 = local_178 * dVar39;
                dVar39 = auVar37._8_8_;
                local_148 = local_148 * dVar39;
                local_150 = local_150 * dVar39;
                local_158 = dVar39 * local_158;
                local_128 = local_128 * dVar35;
                local_130 = local_130 * dVar35;
                local_138 = dVar35 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar35 = local_288 * local_288 + local_298 * local_298;
                dVar39 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar38._0_8_ = dVar35 + dVar39;
                auVar38._8_8_ = dVar35 + dVar39;
                auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                auVar37 = sqrtpd(auVar38,auVar38);
                auVar44 = divpd(auVar45,auVar37);
                auVar45._0_8_ = auVar44._0_8_ * local_288;
                auVar45._8_8_ = auVar44._8_8_ * dStack_280;
                auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar27);
                auVar37._0_8_ =
                     (ulonglong)(local_298 * auVar44._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                auVar37._8_8_ =
                     (ulonglong)(dStack_290 * auVar44._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                dVar41 = 0.0;
                dVar14 = local_108;
                dVar49 = local_118;
                dVar52 = dStack_110;
              }
              dVar30 = dVar30 * dVar33;
              dVar7 = dVar7 * dVar65;
              lVar19 = *(longlong *)(local_2e0 + 0x38);
            }
            param_2 = local_2e0;
            local_2d8._8_4_ = SUB84(dVar40,0);
            local_2d8._0_8_ = dVar12;
            local_2d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            if (*(char *)(lVar19 + lVar18) == '\0') {
              FUN_1447d5d8e(local_2e8,local_2ec);
            }
            lVar19 = local_2c0;
            lVar25 = *local_2e8;
            lVar18 = lVar18 * 0x60;
            auVar44 = *(undefined1 (*) [16])(lVar25 + lVar18);
            uVar60 = auVar44._0_4_;
            uVar61 = auVar44._4_4_;
            uVar62 = auVar44._8_4_;
            uVar63 = auVar44._12_4_;
            auVar42 = *(undefined1 (*) [16])(lVar25 + 0x10 + lVar18);
            pdVar2 = (double *)(lVar25 + 0x20 + lVar18);
            dVar12 = *pdVar2;
            dVar8 = pdVar2[1];
            pdVar2 = (double *)(lVar25 + 0x30 + lVar18);
            dVar65 = *pdVar2;
            dVar66 = pdVar2[1];
            pdVar2 = (double *)(lVar25 + 0x40 + lVar18);
            dVar35 = *pdVar2;
            dVar39 = pdVar2[1];
            pdVar2 = (double *)(lVar25 + 0x50 + lVar18);
            dVar9 = *pdVar2;
            dVar40 = pdVar2[1];
            fVar4 = *(float *)(lVar17 + 0x10);
            if (1e-05 < fVar4) {
              if (0.99999 <= fVar4) {
                uVar60 = auVar37._0_4_;
                uVar61 = auVar37._4_4_;
                uVar62 = auVar37._8_4_;
                uVar63 = auVar37._12_4_;
                auVar42 = auVar68;
                dVar35 = dVar7;
                dVar39 = dVar30;
                dVar12 = dVar49;
                dVar8 = dVar52;
                dVar9 = (double)local_2d8._0_8_;
                dVar40 = (double)local_2d8._8_8_;
                dVar65 = dVar14;
                dVar66 = dVar41;
              }
              else {
                local_2b8._8_4_ = SUB84(dVar30,0);
                local_2b8._0_8_ = dVar7;
                local_2b8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                dVar30 = auVar68._0_8_ * auVar42._0_8_ + auVar37._0_8_ * auVar44._0_8_;
                dVar33 = auVar68._8_8_ * auVar42._8_8_ + auVar37._8_8_ * auVar44._8_8_;
                auVar28._8_8_ = -(ulonglong)(0.0 <= dVar30 + dVar33);
                auVar28._0_8_ = -(ulonglong)(0.0 <= dVar30 + dVar33);
                auVar32._0_8_ = 0.0 - auVar44._0_8_;
                auVar32._8_8_ = 0.0 - auVar44._8_8_;
                auVar44 = blendvpd(auVar32,auVar44,auVar28);
                dVar36 = (double)fVar4;
                dVar46 = (double)fVar4;
                auVar50._0_8_ = 0.0 - auVar42._0_8_;
                auVar50._8_8_ = 0.0 - auVar42._8_8_;
                auVar42 = blendvpd(auVar50,auVar42,auVar28);
                dVar47 = (double)DAT_149934d80 - dVar36;
                dVar48 = DAT_149934d80._8_8_ - dVar46;
                dVar30 = auVar44._0_8_ * dVar47 + auVar37._0_8_ * dVar36;
                dVar33 = auVar44._8_8_ * dVar48 + auVar37._8_8_ * dVar46;
                dVar51 = auVar42._0_8_ * dVar47 + auVar68._0_8_ * dVar36;
                dVar64 = auVar42._8_8_ * dVar48 + auVar68._8_8_ * dVar46;
                dVar53 = dVar51 * dVar51 + dVar30 * dVar30;
                dVar55 = dVar64 * dVar64 + dVar33 * dVar33;
                auVar54._0_8_ = dVar53 + dVar55;
                auVar54._8_8_ = dVar53 + dVar55;
                auVar29._8_8_ = -(ulonglong)(1e-08 <= auVar54._8_8_);
                auVar29._0_8_ = -(ulonglong)(1e-08 <= auVar54._0_8_);
                auVar37 = sqrtpd(auVar54,auVar54);
                auVar37 = divpd(_DAT_149934d80,auVar37);
                auVar58._0_8_ = auVar37._0_8_ * dVar51;
                auVar58._8_8_ = auVar37._8_8_ * dVar64;
                auVar42 = blendvpd(_DAT_149935300,auVar58,auVar29);
                uVar31 = (ulonglong)(dVar30 * auVar37._0_8_) & -(ulonglong)(1e-08 <= auVar54._0_8_);
                uVar34 = (ulonglong)(dVar33 * auVar37._8_8_) & -(ulonglong)(1e-08 <= auVar54._8_8_);
                uVar60 = (undefined4)uVar31;
                uVar61 = (undefined4)(uVar31 >> 0x20);
                uVar62 = (undefined4)uVar34;
                uVar63 = (undefined4)(uVar34 >> 0x20);
                dVar35 = dVar35 * dVar47 + dVar7 * dVar36;
                dVar39 = dVar39 * dVar48 + (double)local_2b8._8_8_ * dVar46;
                dVar12 = dVar12 * dVar47 + dVar49 * dVar36;
                dVar8 = dVar8 * dVar48 + dVar52 * dVar46;
                dVar9 = dVar9 * dVar47 + (double)local_2d8._0_8_ * dVar36;
                dVar40 = dVar40 * dVar48 + (double)local_2d8._8_8_ * dVar46;
                dVar65 = dVar65 * dVar47 + dVar14 * dVar36;
                dVar66 = dVar66 * dVar48 + dVar41 * dVar46;
              }
            }
            iVar21 = (int)plVar16[1];
            *(uint *)(plVar16 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)plVar16 + 0xc) < iVar21 + 1U) {
              FUN_1400c28ea(plVar16,iVar21);
            }
            lVar17 = *plVar16;
            lVar18 = (longlong)iVar21 * 0x70;
            *(int *)(lVar17 + lVar18) = local_2ec;
            puVar3 = (undefined4 *)(lVar17 + 0x10 + lVar18);
            *puVar3 = uVar60;
            puVar3[1] = uVar61;
            puVar3[2] = uVar62;
            puVar3[3] = uVar63;
            *(undefined1 (*) [16])(lVar17 + 0x20 + lVar18) = auVar42;
            auVar13._8_4_ = SUB84(dVar8,0);
            auVar13._0_8_ = dVar12;
            auVar13._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0x30 + lVar18) = auVar13;
            pdVar2 = (double *)(lVar17 + 0x40 + lVar18);
            *pdVar2 = dVar65;
            pdVar2[1] = dVar66;
            auVar11._8_4_ = SUB84(dVar39,0);
            auVar11._0_8_ = dVar35;
            auVar11._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0x50 + lVar18) = auVar11;
            auVar10._8_4_ = SUB84(dVar40,0);
            auVar10._0_8_ = dVar9;
            auVar10._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            *(undefined1 (*) [16])(lVar17 + 0x60 + lVar18) = auVar10;
          }
        }
      }
      lVar24 = lVar24 + 4;
    } while ((longlong)iVar22 * 4 != lVar24);
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d0710 FUN_1487d0710 body=1309 status=ok
// SIG undefined FUN_1487d0710(void)

void FUN_1487d0710(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  uVar15 = *(uint *)(param_1 + 0xe0);
  plVar3 = (longlong *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar18 = (ulonglong)uVar15;
  if (*(int *)(param_1 + 0xf4) < 0) {
    FUN_14481578e(plVar3,0);
    uVar18 = (ulonglong)*(uint *)(param_1 + 0xe0);
  }
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar18);
  }
  if (*(int *)(param_1 + 0xf4) < (int)uVar18) {
    FUN_14481578e(plVar3);
  }
  if (0 < (int)uVar15) {
    lVar17 = 0;
    uVar18 = 0;
    do {
      FUN_14019c9f2(*(longlong *)(param_1 + 0xd8) + lVar17);
      if ((~*(uint *)(*(longlong *)(param_1 + 0xd8) + 8 + lVar17) & 0x7fffffff) != 0) {
        iVar11 = *(int *)(param_1 + 0xf0);
        uVar2 = iVar11 + 1;
        *(uint *)(param_1 + 0xf0) = uVar2;
        if (*(uint *)(param_1 + 0xf4) < uVar2) {
          FUN_1446f48e2(plVar3);
        }
        *(int *)(*plVar3 + (longlong)iVar11 * 4) = (int)uVar18;
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x14;
    } while (uVar15 != uVar18);
  }
  iVar11 = *(int *)(param_1 + 0xf0);
  if (1 < (longlong)iVar11) {
    lVar17 = *plVar3;
    memset(local_338,0,0x2f0);
    local_340 = lVar17 + (longlong)iVar11 * 4 + -4;
    local_348 = lVar17;
    fVar23 = logf((float)iVar11);
    local_338[0] = (int)(longlong)(fVar23 + fVar23);
    plVar3 = &local_348;
    do {
      piVar4 = (int *)*plVar3;
      piVar5 = (int *)plVar3[1];
      iVar11 = (int)plVar3[2];
      iVar7 = (int)((ulonglong)((longlong)piVar5 - (longlong)piVar4) >> 2);
      uVar18 = (ulonglong)(iVar7 + 1);
      piVar9 = piVar5;
      piVar20 = piVar4;
      if (iVar11 != 0) {
LAB_1487d08a7:
        piVar6 = piVar4;
        if (8 < (int)(uint)uVar18) {
          uVar15 = (uint)uVar18 >> 1;
          iVar7 = piVar6[uVar15];
          piVar6[uVar15] = *piVar6;
          *piVar6 = iVar7;
          piVar16 = piVar9 + 1;
          piVar4 = piVar6;
          do {
            piVar1 = piVar4 + 1;
            piVar10 = piVar4 + 1;
            do {
              piVar21 = piVar10;
              piVar4 = piVar1;
              if (piVar9 < piVar4) break;
              piVar1 = piVar4 + 1;
              piVar10 = piVar21 + 1;
            } while (*(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*piVar4 * 0x14) * 2 <=
                     *(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*piVar6 * 0x14) * 2);
            piVar1 = piVar16 + -2;
            do {
              piVar10 = piVar16;
              piVar19 = piVar1;
              piVar16 = piVar10 + -1;
              if (piVar16 <= piVar6) break;
              piVar1 = piVar19 + -1;
            } while (*(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*piVar6 * 0x14) * 2 <=
                     *(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*piVar16 * 0x14) * 2);
            if (piVar16 < piVar4) goto LAB_1487d0968;
            iVar7 = *piVar4;
            *piVar4 = *piVar16;
            *piVar16 = iVar7;
          } while( true );
        }
        if (piVar6 < piVar9) {
          do {
            piVar4 = piVar6;
            if (piVar6 + 1 <= piVar9) {
              iVar11 = *piVar6;
              piVar5 = piVar6 + 1;
              do {
                piVar20 = piVar5;
                iVar7 = *piVar5;
                if (*(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)*piVar5 * 0x14) * 2 <=
                    *(int *)(*(longlong *)(param_1 + 0xd8) + 8 + (longlong)iVar11 * 0x14) * 2) {
                  piVar20 = piVar4;
                  iVar7 = iVar11;
                }
                iVar11 = iVar7;
                piVar4 = piVar20;
                piVar5 = piVar5 + 1;
              } while (piVar5 <= piVar9);
            }
            iVar11 = *piVar4;
            *piVar4 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar6 < piVar9);
        }
        goto LAB_1487d0c17;
      }
LAB_1487d09fc:
      iVar11 = (int)uVar18;
      if (iVar11 != 0) {
        iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        iVar14 = iVar7;
joined_r0x0001487d0a23:
        do {
          iVar13 = iVar7 * 2 + 1;
          if (iVar13 < iVar11) {
            iVar12 = iVar7 * 2 + 2;
            lVar17 = *(longlong *)(param_1 + 0xd8);
            if ((iVar12 < iVar11) &&
               (*(int *)(lVar17 + 8 + (longlong)piVar4[iVar13] * 0x14) * 2 <=
                *(int *)(lVar17 + 8 + (longlong)piVar4[iVar12] * 0x14) * 2)) {
              iVar13 = iVar12;
            }
            iVar12 = piVar4[iVar7];
            if (*(int *)(lVar17 + 8 + (longlong)iVar12 * 0x14) * 2 <
                *(int *)(lVar17 + 8 + (longlong)piVar4[iVar13] * 0x14) * 2) {
              piVar4[iVar7] = piVar4[iVar13];
              piVar4[iVar13] = iVar12;
              iVar7 = iVar13;
              goto joined_r0x0001487d0a23;
            }
          }
          bVar22 = iVar14 != 0;
          iVar7 = iVar14 + -1;
          iVar14 = iVar7;
        } while (bVar22);
        if (1 < iVar11) {
          iVar7 = *piVar4;
          *piVar4 = piVar4[uVar18 - 1];
          piVar4[uVar18 - 1] = iVar7;
          if (iVar11 != 2) {
            do {
              uVar8 = uVar18 - 1;
              iVar11 = 0;
              iVar14 = 1;
              iVar7 = 0;
              do {
                iVar11 = iVar11 + 2;
                lVar17 = *(longlong *)(param_1 + 0xd8);
                iVar13 = iVar14;
                if (((longlong)iVar11 < (longlong)uVar8) &&
                   (*(int *)(lVar17 + 8 + (longlong)piVar4[iVar14] * 0x14) * 2 <=
                    *(int *)(lVar17 + 8 + (longlong)piVar4[iVar11] * 0x14) * 2)) {
                  iVar13 = iVar11;
                }
                iVar11 = piVar4[iVar7];
                if (*(int *)(lVar17 + 8 + (longlong)piVar4[iVar13] * 0x14) * 2 <=
                    *(int *)(lVar17 + 8 + (longlong)iVar11 * 0x14) * 2) break;
                piVar4[iVar7] = piVar4[iVar13];
                piVar4[iVar13] = iVar11;
                iVar11 = iVar13 * 2;
                iVar14 = iVar13 * 2 + 1;
                iVar7 = iVar13;
              } while ((longlong)iVar14 < (longlong)uVar8);
              iVar11 = *piVar4;
              *piVar4 = piVar4[uVar18 - 2];
              piVar4[uVar18 - 2] = iVar11;
              uVar18 = uVar8;
            } while (2 < uVar8);
          }
        }
      }
LAB_1487d0c17:
      plVar3 = plVar3 + -3;
    } while (&local_348 <= plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487d0968:
  iVar7 = *piVar6;
  *piVar6 = *piVar16;
  *piVar16 = iVar7;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar19 - (longlong)piVar20 < (longlong)piVar5 - (longlong)piVar21) {
    if (piVar4 < piVar9) {
      *plVar3 = (longlong)piVar4;
      plVar3[1] = (longlong)piVar9;
      *(int *)(plVar3 + 2) = iVar11;
      plVar3 = plVar3 + 3;
    }
    piVar4 = piVar6;
    piVar5 = piVar19;
    if (piVar16 <= piVar6 + 1) goto LAB_1487d0c17;
  }
  else {
    if (piVar6 + 1 < piVar16) {
      *plVar3 = (longlong)piVar6;
      plVar3[1] = (longlong)piVar10;
      *(int *)(plVar3 + 2) = iVar11;
      plVar3 = plVar3 + 3;
    }
    piVar6 = piVar21;
    piVar10 = piVar9;
    piVar5 = piVar9;
    if (piVar9 <= piVar4) goto LAB_1487d0c17;
  }
  iVar7 = (int)((ulonglong)((longlong)piVar5 - (longlong)piVar6) >> 2);
  uVar18 = (ulonglong)(iVar7 + 1);
  piVar9 = piVar10;
  piVar20 = piVar6;
  if (iVar11 == 0) goto LAB_1487d09fc;
  goto LAB_1487d08a7;
}



// FUNCTION 1487d0c2e FUN_1487d0c2e body=316 status=ok
// SIG undefined FUN_1487d0c2e(void)

void FUN_1487d0c2e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  float fVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar2 = (float)FUN_144b20854(param_1 + 0x38,*(undefined4 *)(param_1 + 0x34));
  FUN_1487d0d6c(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%% RemainingTime: %.3f)",(double)(fVar2 * 100.0),
                (double)*(float *)(param_1 + 0x160));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d0d6c FUN_1487d0d6c body=208 status=ok
// SIG undefined FUN_1487d0d6c(void)

undefined8 FUN_1487d0d6c(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_145887a34();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d0e3e FUN_1487d0e3e body=347 status=ok
// SIG undefined FUN_1487d0e3e(void)

void FUN_1487d0e3e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1487d0f9a(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_1400021e4(param_1 + 0xe0,&local_60);
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L" Target: %s)",puVar2);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d0f9a FUN_1487d0f9a body=208 status=ok
// SIG undefined FUN_1487d0f9a(void)

undefined8 FUN_1487d0f9a(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c74d6();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d106c FUN_1487d106c body=387 status=ok
// SIG undefined FUN_1487d106c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487d106c(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(byte *)(param_1 + 0x45c) = *(byte *)(param_1 + 0x45c) & 0xf7;
    local_40 = (undefined8 *)(param_1 + 0x308);
    local_48 = *(undefined4 *)(param_1 + 0xf4);
    lVar5 = param_1 + 0x360;
LAB_1487d10ac:
    local_38 = param_1 + 0x458;
    FUN_1405a158a(param_2,param_1 + 0x430,*(undefined4 *)(param_1 + 0x3f0),lVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)(param_1 + 0x460) & 1) != 0) {
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      if (1 < (byte)(*(char *)(param_1 + 0x360) - 3U)) {
        *(undefined8 *)(param_1 + 0x440) = DAT_14cb71d78;
        uVar3 = uRam000000014cb71d74;
        uVar2 = _DAT_14cb71d70;
        uVar1 = uRam000000014cb71d6c;
        *(undefined4 *)(param_1 + 0x430) = _DAT_14cb71d68;
        *(undefined4 *)(param_1 + 0x434) = uVar1;
        *(undefined4 *)(param_1 + 0x438) = uVar2;
        *(undefined4 *)(param_1 + 0x43c) = uVar3;
      }
    }
    else {
      *(byte *)(param_1 + 0x45c) = *(byte *)(param_1 + 0x45c) | 8;
    }
  }
  if ((*(byte *)(param_1 + 0x45c) & 8) == 0) {
    if (*(char *)(param_1 + 800) != '\0') {
      lVar5 = param_1 + 800;
      local_40 = (undefined8 *)(param_1 + 0x2f0);
      local_48 = *(undefined4 *)(param_1 + 0xf0);
      goto LAB_1487d10ac;
    }
  }
  else {
    puVar4 = (undefined8 *)&DAT_14cb71d68;
    if (*(char *)(param_1 + 0x1b0) != '\x02') {
      puVar4 = (undefined8 *)(param_1 + 0x118);
    }
    local_18 = puVar4[2];
    local_40 = &local_28;
    local_28 = *puVar4;
    uStack_20 = puVar4[1];
    local_48 = *(undefined4 *)(param_1 + 0xf8);
    local_38 = param_1 + 0x458;
    FUN_1405a158a(param_2,param_1 + 0x430,*(undefined4 *)(param_1 + 0x3f0),param_1 + 0x3a0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d11f0 FUN_1487d11f0 body=38 status=ok
// SIG undefined FUN_1487d11f0(void)

undefined8 FUN_1487d11f0(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d121a FUN_1487d121a body=62 status=ok
// SIG undefined FUN_1487d121a(void)

void FUN_1487d121a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487d1306(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 1487d1258 FUN_1487d1258 body=112 status=ok
// SIG undefined FUN_1487d1258(void)

void FUN_1487d1258(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 200 + lVar1);
  FUN_1487d12c8(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 200),(longlong)iVar3 * 200);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1487d12c8 FUN_1487d12c8 body=62 status=ok
// SIG undefined FUN_1487d12c8(void)

void FUN_1487d12c8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487d1306 FUN_1487d1306 body=114 status=ok
// SIG undefined FUN_1487d1306(void)

ulonglong FUN_1487d1306(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 200) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487d133f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 200,8);
      param_2 = param_2 / 200;
    }
  }
LAB_1487d133f:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487d1378 FUN_1487d1378 body=500 status=ok
// SIG undefined FUN_1487d1378(void)

void FUN_1487d1378(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_2d8 [32];
  byte *local_2b8;
  byte local_2a8 [32];
  undefined1 local_288;
  byte local_280 [32];
  byte local_260 [32];
  byte abStack_240 [120];
  undefined1 local_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0 [16];
  longlong local_190;
  undefined1 local_180 [32];
  byte local_160;
  undefined1 local_158 [144];
  char local_c8 [8];
  undefined1 local_c0 [144];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x360);
  }
  lVar2 = FUN_1457fadf6(param_1,uVar3,0);
  if (lVar2 != 0) {
    local_1a8 = 0;
    FUN_14101bd16(local_1c8,&DAT_149dfb77a);
    local_2b8 = local_1c8;
    FUN_140d767d6(local_1a0,&DAT_14cb71db0,2,L"LeaveGameplay");
    cVar1 = FUN_140e27f2c(local_1a0);
    if (cVar1 == '\0') {
      local_288 = 0;
      FUN_14101bd16(local_2a8,&DAT_149dfb77a);
      pbVar4 = local_280;
      local_2b8 = local_2a8;
    }
    else {
      abStack_240[0x28] = 0;
      FUN_14101bd16(abStack_240 + 8,&DAT_149dfb77a);
      pbVar4 = abStack_240 + 0x30;
      local_2b8 = abStack_240 + 8;
    }
    FUN_140d767d6(pbVar4,&DAT_14cb71db0,2,L"LeaveGameplay");
    FUN_140d76846(local_158,pbVar4);
    FUN_14027c224(local_c8,local_158);
    if (local_c8[0] == '\x01') {
      FUN_140f3f840(local_c0,param_2);
    }
    FUN_14027c198(local_c8);
    FUN_1404eeb8e(local_158);
    if (cVar1 == '\0') {
      pbVar4 = local_260;
    }
    else {
      pbVar4 = abStack_240 + 0x50;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[pbVar4[0x20]])(pbVar4);
    if (*(longlong *)(pbVar4 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_160])(local_180);
    if (local_190 != 0) {
      FUN_1400020a8();
    }
    FUN_1487ce28a(lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d156e FUN_1487d156e body=167 status=ok
// SIG undefined FUN_1487d156e(void)

void FUN_1487d156e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  local_28 = (LARGE_INTEGER)((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0);
  FUN_145c669b2(param_1 + 8,&local_28);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 200;
    do {
      cVar1 = FUN_145c6695c(lVar3);
      if (cVar1 != '\0') {
        FUN_1415beab4(param_1,lVar3);
      }
      lVar3 = lVar3 + 200;
      lVar2 = lVar2 + -200;
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d1616 FUN_1487d1616 body=31 status=ok
// SIG undefined FUN_1487d1616(void)

undefined8 FUN_1487d1616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1646 FUN_1487d1646 body=93 status=ok
// SIG undefined FUN_1487d1646(void)

void FUN_1487d1646(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebe90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d16a4 FUN_1487d16a4 body=93 status=ok
// SIG undefined FUN_1487d16a4(void)

void FUN_1487d16a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebe90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d1702 FUN_1487d1702 body=126 status=ok
// SIG undefined FUN_1487d1702(void)

void FUN_1487d1702(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ebe90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d1771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d1790 FUN_1487d1790 body=31 status=ok
// SIG undefined FUN_1487d1790(void)

undefined8 FUN_1487d1790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d17c8 FUN_1487d17c8 body=93 status=ok
// SIG undefined FUN_1487d17c8(void)

void FUN_1487d17c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d1826 FUN_1487d1826 body=93 status=ok
// SIG undefined FUN_1487d1826(void)

void FUN_1487d1826(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d1884 FUN_1487d1884 body=126 status=ok
// SIG undefined FUN_1487d1884(void)

void FUN_1487d1884(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ebf30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d18f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d1912 FUN_1487d1912 body=31 status=ok
// SIG undefined FUN_1487d1912(void)

undefined8 FUN_1487d1912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1942 FUN_1487d1942 body=93 status=ok
// SIG undefined FUN_1487d1942(void)

void FUN_1487d1942(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d19a0 FUN_1487d19a0 body=93 status=ok
// SIG undefined FUN_1487d19a0(void)

void FUN_1487d19a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ebff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d19fe FUN_1487d19fe body=126 status=ok
// SIG undefined FUN_1487d19fe(void)

void FUN_1487d19fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ebff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d1a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d1a8a FUN_1487d1a8a body=31 status=ok
// SIG undefined FUN_1487d1a8a(void)

undefined8 FUN_1487d1a8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1ac2 FUN_1487d1ac2 body=93 status=ok
// SIG undefined FUN_1487d1ac2(void)

void FUN_1487d1ac2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d1b20 FUN_1487d1b20 body=93 status=ok
// SIG undefined FUN_1487d1b20(void)

void FUN_1487d1b20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d1b7e FUN_1487d1b7e body=126 status=ok
// SIG undefined FUN_1487d1b7e(void)

void FUN_1487d1b7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec080;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d1bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d1c0a FUN_1487d1c0a body=21 status=ok
// SIG undefined FUN_1487d1c0a(void)

undefined8 FUN_1487d1c0a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487d1c22 FUN_1487d1c22 body=38 status=ok
// SIG undefined FUN_1487d1c22(void)

undefined8 FUN_1487d1c22(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1c48 FUN_1487d1c48 body=38 status=ok
// SIG undefined FUN_1487d1c48(void)

undefined8 FUN_1487d1c48(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1c6e FUN_1487d1c6e body=62 status=ok
// SIG undefined FUN_1487d1c6e(void)

void FUN_1487d1c6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487d1cac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1487d1cac FUN_1487d1cac body=112 status=ok
// SIG undefined FUN_1487d1cac(void)

ulonglong FUN_1487d1cac(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487d1ce6;
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
LAB_1487d1ce6:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487d1d1c FUN_1487d1d1c body=68 status=ok
// SIG undefined FUN_1487d1d1c(void)

undefined8 * FUN_1487d1d1c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec1d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d1d64 FUN_1487d1d64 body=81 status=ok
// SIG undefined FUN_1487d1d64(void)

undefined8 FUN_1487d1d64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d1dbc FUN_1487d1dbc body=91 status=ok
// SIG undefined FUN_1487d1dbc(void)

bool FUN_1487d1dbc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d1dec;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d1dec:
  return lVar6 == param_2;
}



// FUNCTION 1487d1e18 FUN_1487d1e18 body=118 status=ok
// SIG undefined FUN_1487d1e18(void)

void FUN_1487d1e18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d1e8e FUN_1487d1e8e body=118 status=ok
// SIG undefined FUN_1487d1e8e(void)

void FUN_1487d1e8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d1f04 FUN_1487d1f04 body=156 status=ok
// SIG undefined FUN_1487d1f04(void)

void FUN_1487d1f04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec1d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d1f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d1fa0 FUN_1487d1fa0 body=104 status=ok
// SIG undefined FUN_1487d1fa0(void)

void FUN_1487d1fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487d1fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d1ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1487d2008 FUN_1487d2008 body=68 status=ok
// SIG undefined FUN_1487d2008(void)

undefined8 * FUN_1487d2008(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec240;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d2050 FUN_1487d2050 body=81 status=ok
// SIG undefined FUN_1487d2050(void)

undefined8 FUN_1487d2050(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d20a8 FUN_1487d20a8 body=89 status=ok
// SIG undefined FUN_1487d20a8(void)

bool FUN_1487d20a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d20f3;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d20f3:
  return lVar6 == param_2;
}



// FUNCTION 1487d2102 FUN_1487d2102 body=118 status=ok
// SIG undefined FUN_1487d2102(void)

void FUN_1487d2102(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec2b0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d2178 FUN_1487d2178 body=118 status=ok
// SIG undefined FUN_1487d2178(void)

void FUN_1487d2178(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec2b0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d21ee FUN_1487d21ee body=156 status=ok
// SIG undefined FUN_1487d21ee(void)

void FUN_1487d21ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec2b0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d227a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d228a FUN_1487d228a body=227 status=ok
// SIG undefined FUN_1487d228a(void)

void FUN_1487d228a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar9 = *(longlong **)(param_1 + 0x20);
  bVar5 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar7 = (int)plVar9[1];
    lVar8 = 0;
    do {
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1487d22d3;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar5 = false;
  }
LAB_1487d22d3:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar7 + lVar8,&local_30,uVar4);
  if (!bVar5) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d2370 FUN_1487d2370 body=68 status=ok
// SIG undefined FUN_1487d2370(void)

undefined8 * FUN_1487d2370(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec320;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d23b8 FUN_1487d23b8 body=81 status=ok
// SIG undefined FUN_1487d23b8(void)

undefined8 FUN_1487d23b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d2410 FUN_1487d2410 body=89 status=ok
// SIG undefined FUN_1487d2410(void)

bool FUN_1487d2410(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d245b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d245b:
  return lVar6 == param_2;
}



// FUNCTION 1487d2486 FUN_1487d2486 body=118 status=ok
// SIG undefined FUN_1487d2486(void)

void FUN_1487d2486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d24fc FUN_1487d24fc body=118 status=ok
// SIG undefined FUN_1487d24fc(void)

void FUN_1487d24fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d2572 FUN_1487d2572 body=156 status=ok
// SIG undefined FUN_1487d2572(void)

void FUN_1487d2572(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab672c0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec320;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d25fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d260e FUN_1487d260e body=112 status=ok
// SIG undefined FUN_1487d260e(void)

void FUN_1487d260e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x0001487d265f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d2674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1487d267e FUN_1487d267e body=276 status=ok
// SIG undefined FUN_1487d267e(void)

void FUN_1487d267e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar4 + uVar6 * 4);
    if (lVar3 != -1) {
      lVar7 = *param_1;
      lVar3 = lVar3 * 0x90;
      local_40 = *(undefined8 *)(lVar7 + lVar3);
      local_48 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar3 = lVar7 + lVar3;
        do {
          lVar7 = lVar3;
          lVar3 = (longlong)*(int *)(lVar7 + 0x88);
          if (lVar3 == -1) goto LAB_1487d26a2;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x90;
          local_40 = *(undefined8 *)(lVar1 + lVar3);
          local_48 = param_2;
          cVar2 = FUN_14472d054(&local_40,&local_48);
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar5 = (undefined4 *)(lVar7 + 0x88);
      }
      else {
        puVar5 = (undefined4 *)((longlong)plVar4 + uVar6 * 4);
      }
      FUN_1457e76aa(param_1,*puVar5);
    }
  }
LAB_1487d26a2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d2794 FUN_1487d2794 body=64 status=ok
// SIG undefined FUN_1487d2794(void)

undefined8 * FUN_1487d2794(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec390;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d27d8 FUN_1487d27d8 body=81 status=ok
// SIG undefined FUN_1487d27d8(void)

undefined8 FUN_1487d27d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d2830 FUN_1487d2830 body=89 status=ok
// SIG undefined FUN_1487d2830(void)

bool FUN_1487d2830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d287b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d287b:
  return lVar6 == param_2;
}



// FUNCTION 1487d28b2 FUN_1487d28b2 body=118 status=ok
// SIG undefined FUN_1487d28b2(void)

void FUN_1487d28b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec400;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d2928 FUN_1487d2928 body=118 status=ok
// SIG undefined FUN_1487d2928(void)

void FUN_1487d2928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec400;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b3ec390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d299e FUN_1487d299e body=156 status=ok
// SIG undefined FUN_1487d299e(void)

void FUN_1487d299e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec400;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec390;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d2a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d2a3a FUN_1487d2a3a body=112 status=ok
// SIG undefined FUN_1487d2a3a(void)

void FUN_1487d2a3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x0001487d2a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d2aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1487d2aaa FUN_1487d2aaa body=105 status=ok
// SIG undefined FUN_1487d2aaa(void)

ulonglong FUN_1487d2aaa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1487d2b08:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1487d2b08;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1487d2b1a FUN_1487d2b1a body=83 status=ok
// SIG undefined FUN_1487d2b1a(void)

undefined8 FUN_1487d2b1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x28);
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
  return uVar6;
}



// FUNCTION 1487d2b74 FUN_1487d2b74 body=89 status=ok
// SIG undefined FUN_1487d2b74(void)

bool FUN_1487d2b74(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d2bbf;
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
    lVar6 = *(longlong *)(param_1 + 0x28);
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
LAB_1487d2bbf:
  return lVar6 == param_2;
}



// FUNCTION 1487d2bf6 FUN_1487d2bf6 body=151 status=ok
// SIG undefined FUN_1487d2bf6(void)

void FUN_1487d2bf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec4e0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3ec470;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 1487d2c8e FUN_1487d2c8e body=189 status=ok
// SIG undefined FUN_1487d2c8e(void)

void FUN_1487d2c8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec4e0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec470;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  lVar4 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar4 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar5;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d2d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d2d4c FUN_1487d2d4c body=179 status=ok
// SIG undefined FUN_1487d2d4c(void)

ulonglong FUN_1487d2d4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_1487d2dde:
    uVar9 = 0;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1487d2dde;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      iVar8 = *(int *)(param_1 + 0x40);
      pcVar5 = *(code **)(param_1 + 0x38);
      local_28 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      local_20 = *(longlong *)(param_1 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar8,&local_28,uVar6);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1487d2e02 FUN_1487d2e02 body=147 status=ok
// SIG undefined FUN_1487d2e02(void)

void FUN_1487d2e02(longlong param_1,int param_2)

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



// FUNCTION 1487d2e96 FUN_1487d2e96 body=68 status=ok
// SIG undefined FUN_1487d2e96(void)

undefined8 * FUN_1487d2e96(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec550;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d2ede FUN_1487d2ede body=81 status=ok
// SIG undefined FUN_1487d2ede(void)

undefined8 FUN_1487d2ede(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d2f36 FUN_1487d2f36 body=89 status=ok
// SIG undefined FUN_1487d2f36(void)

bool FUN_1487d2f36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d2f81;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d2f81:
  return lVar6 == param_2;
}



// FUNCTION 1487d2f90 FUN_1487d2f90 body=118 status=ok
// SIG undefined FUN_1487d2f90(void)

void FUN_1487d2f90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d3006 FUN_1487d3006 body=118 status=ok
// SIG undefined FUN_1487d3006(void)

void FUN_1487d3006(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d307c FUN_1487d307c body=156 status=ok
// SIG undefined FUN_1487d307c(void)

void FUN_1487d307c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d3108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d3140 FUN_1487d3140 body=144 status=ok
// SIG undefined FUN_1487d3140(void)

void FUN_1487d3140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec630;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar4)(puVar4,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_14b3ec5c0;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar1[0xe] = uVar3;
  return;
}



// FUNCTION 1487d31d0 FUN_1487d31d0 body=182 status=ok
// SIG undefined FUN_1487d31d0(void)

void FUN_1487d31d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec630;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = *(undefined4 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar7)(puVar7,p_Var1 + 1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  p_Var1[2].Type = (short)uVar3;
  p_Var1[2].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[2].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec5c0;
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  uVar6 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)&p_Var1[2].CriticalSection = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((longlong)&p_Var1[2].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var1[2].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[2].ProcessLocksList.Flink + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d3276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d3286 FUN_1487d3286 body=126 status=ok
// SIG undefined FUN_1487d3286(void)

undefined8 FUN_1487d3286(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  pcVar2 = *(code **)(param_1 + 0x70);
  local_68[0] = *(longlong *)(param_1 + 0x20);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  (*pcVar2)(uVar1,*(undefined4 *)(param_1 + 0x10),local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d3308 FUN_1487d3308 body=31 status=ok
// SIG undefined FUN_1487d3308(void)

undefined8 FUN_1487d3308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d334a FUN_1487d334a body=93 status=ok
// SIG undefined FUN_1487d334a(void)

void FUN_1487d334a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1487d33a8 FUN_1487d33a8 body=93 status=ok
// SIG undefined FUN_1487d33a8(void)

void FUN_1487d33a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1487d3406 FUN_1487d3406 body=126 status=ok
// SIG undefined FUN_1487d3406(void)

void FUN_1487d3406(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec6e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d3475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d3490 FUN_1487d3490 body=68 status=ok
// SIG undefined FUN_1487d3490(void)

undefined8 * FUN_1487d3490(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec7c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d34d8 FUN_1487d34d8 body=81 status=ok
// SIG undefined FUN_1487d34d8(void)

undefined8 FUN_1487d34d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d3530 FUN_1487d3530 body=118 status=ok
// SIG undefined FUN_1487d3530(void)

void FUN_1487d3530(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec7c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d35a6 FUN_1487d35a6 body=118 status=ok
// SIG undefined FUN_1487d35a6(void)

void FUN_1487d35a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec7c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d361c FUN_1487d361c body=156 status=ok
// SIG undefined FUN_1487d361c(void)

void FUN_1487d361c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec7c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d36a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d36b8 FUN_1487d36b8 body=104 status=ok
// SIG undefined FUN_1487d36b8(void)

void FUN_1487d36b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487d3705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d3716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1487d3720 FUN_1487d3720 body=68 status=ok
// SIG undefined FUN_1487d3720(void)

undefined8 * FUN_1487d3720(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ec830;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d3768 FUN_1487d3768 body=81 status=ok
// SIG undefined FUN_1487d3768(void)

undefined8 FUN_1487d3768(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1487d37c0 FUN_1487d37c0 body=91 status=ok
// SIG undefined FUN_1487d37c0(void)

bool FUN_1487d37c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1487d37f0;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1487d37f0:
  return lVar6 == param_2;
}



// FUNCTION 1487d381c FUN_1487d381c body=118 status=ok
// SIG undefined FUN_1487d381c(void)

void FUN_1487d381c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d3892 FUN_1487d3892 body=118 status=ok
// SIG undefined FUN_1487d3892(void)

void FUN_1487d3892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1487d3908 FUN_1487d3908 body=156 status=ok
// SIG undefined FUN_1487d3908(void)

void FUN_1487d3908(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d3994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d39a4 FUN_1487d39a4 body=104 status=ok
// SIG undefined FUN_1487d39a4(void)

void FUN_1487d39a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487d39f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d3a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1487d3a0c FUN_1487d3a0c body=74 status=ok
// SIG undefined FUN_1487d3a0c(void)

undefined8 * FUN_1487d3a0c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3ec8a0;
  puVar1 = TlsGetValue(DAT_14c763874);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c763874,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d3a56 FUN_1487d3a56 body=48 status=ok
// SIG undefined FUN_1487d3a56(void)

void FUN_1487d3a56(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1487d3b9c FUN_1487d3b9c body=96 status=ok
// SIG undefined FUN_1487d3b9c(void)

void FUN_1487d3b9c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457f7140(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  if (DAT_14c950c29 != '\x01') {
    return;
  }
  FUN_1456cec3c(param_2);
  return;
}



// FUNCTION 1487d3bfc FUN_1487d3bfc body=31 status=ok
// SIG undefined FUN_1487d3bfc(void)

undefined8 FUN_1487d3bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d3c30 FUN_1487d3c30 body=85 status=ok
// SIG undefined FUN_1487d3c30(void)

void FUN_1487d3c30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ecec0;
  return;
}



// FUNCTION 1487d3c86 FUN_1487d3c86 body=118 status=ok
// SIG undefined FUN_1487d3c86(void)

void FUN_1487d3c86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecec0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d3ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d3cfc FUN_1487d3cfc body=105 status=ok
// SIG undefined FUN_1487d3cfc(void)

undefined8 FUN_1487d3cfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145e3a334(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d3d66 FUN_1487d3d66 body=31 status=ok
// SIG undefined FUN_1487d3d66(void)

undefined8 FUN_1487d3d66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d3da2 FUN_1487d3da2 body=101 status=ok
// SIG undefined FUN_1487d3da2(void)

void FUN_1487d3da2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d3e08 FUN_1487d3e08 body=101 status=ok
// SIG undefined FUN_1487d3e08(void)

void FUN_1487d3e08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ec920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d3e6e FUN_1487d3e6e body=134 status=ok
// SIG undefined FUN_1487d3e6e(void)

void FUN_1487d3e6e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec920;
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
                    /* WARNING: Could not recover jumptable at 0x0001487d3ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d3f06 FUN_1487d3f06 body=31 status=ok
// SIG undefined FUN_1487d3f06(void)

undefined8 FUN_1487d3f06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d3f36 FUN_1487d3f36 body=101 status=ok
// SIG undefined FUN_1487d3f36(void)

void FUN_1487d3f36(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ec990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d3f9c FUN_1487d3f9c body=101 status=ok
// SIG undefined FUN_1487d3f9c(void)

void FUN_1487d3f9c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3ec990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d4002 FUN_1487d4002 body=134 status=ok
// SIG undefined FUN_1487d4002(void)

void FUN_1487d4002(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ec990;
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
                    /* WARNING: Could not recover jumptable at 0x0001487d4079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d40b0 FUN_1487d40b0 body=31 status=ok
// SIG undefined FUN_1487d40b0(void)

undefined8 FUN_1487d40b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d40e4 FUN_1487d40e4 body=85 status=ok
// SIG undefined FUN_1487d40e4(void)

void FUN_1487d40e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ece20;
  return;
}



// FUNCTION 1487d413a FUN_1487d413a body=118 status=ok
// SIG undefined FUN_1487d413a(void)

void FUN_1487d413a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ece20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d41a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d41b0 FUN_1487d41b0 body=105 status=ok
// SIG undefined FUN_1487d41b0(void)

undefined8 FUN_1487d41b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145f8f1ac(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d421a FUN_1487d421a body=24 status=ok
// SIG undefined FUN_1487d421a(void)

void FUN_1487d421a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d422e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1487d4232 FUN_1487d4232 body=31 status=ok
// SIG undefined FUN_1487d4232(void)

undefined8 FUN_1487d4232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d4266 FUN_1487d4266 body=85 status=ok
// SIG undefined FUN_1487d4266(void)

void FUN_1487d4266(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ecd80;
  return;
}



// FUNCTION 1487d42bc FUN_1487d42bc body=118 status=ok
// SIG undefined FUN_1487d42bc(void)

void FUN_1487d42bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecd80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d4323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d4332 FUN_1487d4332 body=105 status=ok
// SIG undefined FUN_1487d4332(void)

undefined8 FUN_1487d4332(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145dab994(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d439c FUN_1487d439c body=24 status=ok
// SIG undefined FUN_1487d439c(void)

void FUN_1487d439c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d43b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1487d43b4 FUN_1487d43b4 body=95 status=ok
// SIG undefined FUN_1487d43b4(void)

void FUN_1487d43b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487d4414 FUN_1487d4414 body=119 status=ok
// SIG undefined FUN_1487d4414(void)

void FUN_1487d4414(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1487d448c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487d448c FUN_1487d448c body=141 status=ok
// SIG undefined FUN_1487d448c(void)

void FUN_1487d448c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 1487d451a FUN_1487d451a body=141 status=ok
// SIG undefined FUN_1487d451a(void)

void FUN_1487d451a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 * 0x18,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 / 0x18)) {
    uVar3 = uVar2 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x18,8);
  return;
}



// FUNCTION 1487d45a8 FUN_1487d45a8 body=110 status=ok
// SIG undefined FUN_1487d45a8(void)

void FUN_1487d45a8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x108 + *param_1);
  FUN_140f5e6cd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x108 + (longlong)_Dst),(longlong)iVar2 * 0x108);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487d4616 FUN_1487d4616 body=62 status=ok
// SIG undefined FUN_1487d4616(void)

void FUN_1487d4616(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487d4654(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x108,8);
  }
  return;
}



// FUNCTION 1487d4654 FUN_1487d4654 body=118 status=ok
// SIG undefined FUN_1487d4654(void)

ulonglong FUN_1487d4654(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x108) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487d4691;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x108,8);
      param_2 = param_2 / 0x108;
    }
  }
LAB_1487d4691:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487d46ca FUN_1487d46ca body=89 status=ok
// SIG undefined FUN_1487d46ca(void)

void FUN_1487d46ca(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x100 + *param_1);
  FUN_140f5e6cc(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x100 + (longlong)_Dst),(longlong)iVar2 << 8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487d4724 FUN_1487d4724 body=62 status=ok
// SIG undefined FUN_1487d4724(void)

void FUN_1487d4724(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487d4762(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 1487d4762 FUN_1487d4762 body=93 status=ok
// SIG undefined FUN_1487d4762(void)

ulonglong FUN_1487d4762(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc0U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 8,8);
      uVar1 = uVar1 >> 8;
    }
  }
  return uVar1;
}



// FUNCTION 1487d47c0 FUN_1487d47c0 body=1138 status=ok
// SIG undefined FUN_1487d47c0(void)

longlong * FUN_1487d47c0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar6 = (longlong *)FUN_1413f119e();
  uVar4 = local_80;
  if (plVar6 != (longlong *)0x0) {
    local_68 = param_1 + 0x88;
    local_70 = 0x100000000;
    local_60._0_4_ = 0xffffffff;
    local_60._4_4_ = 0;
    local_58 = 0;
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80._0_4_ = (uint)local_60;
    local_80._4_4_ = local_60._4_4_;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_98 = (longlong *)(param_1 + 0x78);
    if (local_60._4_4_ < *(int *)(local_68 + 0x18)) {
      do {
        (**(code **)(*plVar6 + 0xa08))
                  (plVar6,*(undefined8 *)(*local_98 + (longlong)local_80._4_4_ * 0x14),
                   *(undefined4 *)(*local_98 + 8 + (longlong)local_80._4_4_ * 0x14));
        local_80._0_4_ = (uint)local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
    local_68 = param_1 + 0xd8;
    local_70 = 0x100000000;
    local_60._0_4_ = 0xffffffff;
    local_60._4_4_ = 0;
    local_58 = 0;
    if (*(int *)(param_1 + 0xf0) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80._0_4_ = (uint)local_60;
    local_80._4_4_ = local_60._4_4_;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_98 = (longlong *)(param_1 + 200);
    if (local_60._4_4_ < *(int *)(local_68 + 0x18)) {
      do {
        (**(code **)(*plVar6 + 0x9f8))
                  (plVar6,*(undefined8 *)(*local_98 + (longlong)local_80._4_4_ * 0x14),
                   *(undefined1 *)(*local_98 + 8 + (longlong)local_80._4_4_ * 0x14));
        local_80._0_4_ = (uint)local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
    local_68 = param_1 + 0x128;
    local_70 = 0x100000000;
    local_60._0_4_ = 0xffffffff;
    local_60._4_4_ = 0;
    local_58 = 0;
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80._0_4_ = (uint)local_60;
    local_80._4_4_ = local_60._4_4_;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_98 = (longlong *)(param_1 + 0x118);
    if (local_60._4_4_ < *(int *)(local_68 + 0x18)) {
      do {
        lVar2 = *local_98;
        lVar3 = (longlong)local_80._4_4_ * 0x14;
        local_a8 = (&DAT_14c758c60)[*(byte *)(lVar2 + 10 + lVar3)];
        local_a4 = (&DAT_14c758c60)[*(byte *)(lVar2 + 9 + lVar3)];
        local_a0 = (&DAT_14c758c60)[*(byte *)(lVar2 + 8 + lVar3)];
        local_9c = (float)*(byte *)(lVar2 + 0xb + lVar3) * 0.003921569;
        (**(code **)(*plVar6 + 0xa18))(plVar6,*(undefined8 *)(*local_98 + lVar3),&local_a8);
        local_80._0_4_ = (uint)local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
    local_68 = param_1 + 0x178;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if (*(int *)(param_1 + 400) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80 = local_60;
    uVar4 = local_80;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = (longlong *)(param_1 + 0x168);
    if (local_80._4_4_ < *(int *)(local_68 + 0x18)) {
      iVar5 = local_80._4_4_;
      local_80 = uVar4;
      do {
        lVar2 = (longlong)iVar5 * 0x28;
        puVar1 = (undefined4 *)(*local_98 + 8 + lVar2);
        local_c8 = *puVar1;
        uStack_c4 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        local_b8 = *(undefined8 *)(*local_98 + 0x18 + lVar2);
        (**(code **)(*plVar6 + 0xa10))(plVar6,*(undefined8 *)(*local_98 + lVar2),&local_c8);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar5 = local_80._4_4_;
        uVar4 = local_80;
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
  }
  local_80 = uVar4;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d4c34 FUN_1487d4c34 body=259 status=ok
// SIG undefined FUN_1487d4c34(void)

void FUN_1487d4c34(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  byte local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(param_1 + 0x38));
    if (cVar1 == '\0') {
      iVar2 = FUN_144909502(param_2,*(undefined8 *)(param_1 + 0x38));
      if (iVar2 == -1) goto LAB_1487d4cf3;
    }
    local_98 = *(byte *)(param_1 + 0x70) ^ 1;
    local_48 = *(undefined8 *)(param_1 + 0x68);
    local_a8 = &local_58;
    local_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    local_78 = *(undefined4 *)(param_1 + 0x40);
    uStack_74 = *(undefined4 *)(param_1 + 0x44);
    uStack_70 = *(undefined4 *)(param_1 + 0x48);
    uStack_6c = *(undefined4 *)(param_1 + 0x4c);
    local_68 = *(undefined8 *)(param_1 + 0x50);
    local_88 = 1;
    local_90 = 0;
    local_a0 = 0;
    FUN_140a44468(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));
  }
LAB_1487d4cf3:
  local_a8 = (undefined8 *)param_5;
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d4d3e FUN_1487d4d3e body=301 status=ok
// SIG undefined FUN_1487d4d3e(void)

void FUN_1487d4d3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = param_3;
  local_60 = param_4;
  FUN_1407329d4(param_2,0,&local_58);
  lVar3 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + lVar6);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = FUN_140288b94();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              == lVar4 + 0x30)) &&
            (lVar4 = plVar1[0x25], lVar2 = *(longlong *)(param_1 + 0x38),
            lVar5 = (**(code **)(*plVar1 + 0xa70))(plVar1), lVar4 == lVar2)) &&
           (*(longlong *)(param_1 + 0x30) == lVar5)) {
          if (*(char *)(param_1 + 0x70) == '\x01') {
            (**(code **)(*plVar1 + 0x420))(plVar1,0);
          }
          else {
            (**(code **)(*plVar1 + 0x2b0))(plVar1);
          }
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  local_78 = param_5;
  FUN_140bc0c12(param_1,param_2,local_68,local_60);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d4e6c FUN_1487d4e6c body=104 status=ok
// SIG undefined FUN_1487d4e6c(void)

undefined8 FUN_1487d4e6c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_147921a8e(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487d4f1e FUN_1487d4f1e body=96 status=ok
// SIG undefined FUN_1487d4f1e(void)

void FUN_1487d4f1e(longlong param_1)

{
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
  switchD_143c3d4dc::caseD_1b();
  FUN_144a7484c(param_1 + 0x58,&local_38);
  *(undefined4 *)(param_1 + 0xa0) = local_28;
  *(undefined4 *)(param_1 + 0xa4) = uStack_24;
  *(undefined4 *)(param_1 + 0xa8) = uStack_20;
  *(undefined4 *)(param_1 + 0xac) = uStack_1c;
  *(undefined4 *)(param_1 + 0x90) = local_38;
  *(undefined4 *)(param_1 + 0x94) = uStack_34;
  *(undefined4 *)(param_1 + 0x98) = uStack_30;
  *(undefined4 *)(param_1 + 0x9c) = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d4f8e FUN_1487d4f8e body=104 status=ok
// SIG undefined FUN_1487d4f8e(void)

undefined8 FUN_1487d4f8e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  switchD_143c3d4dc::caseD_5b(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487d4ff8 FUN_1487d4ff8 body=875 status=ok
// SIG undefined FUN_1487d4ff8(void)

undefined8 FUN_1487d4ff8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))();
    if (cVar4 == '\0') {
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        (**(code **)(*param_2 + 0x4a8))(param_2,&local_118,*(undefined8 *)(param_1 + 0xb4),0);
        local_d8 = *(double *)(param_1 + 0x40) * local_d8;
        dStack_d0 = *(double *)(param_1 + 0x48) * dStack_d0;
        local_c8 = *(double *)(param_1 + 0x50) * local_c8;
        dVar7 = dStack_d0 * local_118 - local_d8 * dStack_110;
        dVar1 = local_c8 * dStack_110 - dStack_d0 * local_108;
        dVar2 = local_d8 * local_108 - local_118 * local_c8;
        dVar1 = dVar1 + dVar1;
        dVar2 = dVar2 + dVar2;
        dVar7 = dVar7 + dVar7;
        local_158 = (dVar7 * dStack_110 - dVar2 * local_108) + dStack_100 * dVar1 + local_d8 +
                    local_f8;
        dStack_150 = (local_108 * dVar1 - local_118 * dVar7) + dStack_100 * dVar2 + dStack_d0 +
                     dStack_f0;
        local_148 = dVar7 * dStack_100 + local_c8 + (dVar2 * local_118 - dVar1 * dStack_110) +
                    local_e8;
        uStack_140 = 0;
        dVar7 = *(double *)(param_1 + 0x90);
        dVar1 = *(double *)(param_1 + 0x98);
        dVar2 = *(double *)(param_1 + 0xa0);
        dVar3 = *(double *)(param_1 + 0xa8);
        local_178 = dVar1 * local_108 * -1.0 +
                    dVar2 * dStack_110 + local_118 * dVar3 * 1.0 + dStack_100 * dVar7;
        dStack_170 = dVar7 * local_108 * 1.0 +
                     dVar3 * dStack_110 + local_118 * dVar2 * -1.0 + dStack_100 * dVar1;
        local_168 = dVar3 * local_108 * 1.0 +
                    ((local_118 * dVar1 * 1.0 + dStack_100 * dVar2) - dStack_110 * dVar7);
        dStack_160 = dVar2 * local_108 * -1.0 +
                     ((local_118 * dVar7 * -1.0 + dStack_100 * dVar3) - dStack_110 * dVar1);
        local_138 = *(undefined4 *)(param_1 + 0x70);
        uStack_134 = *(undefined4 *)(param_1 + 0x74);
        uStack_130 = *(undefined4 *)(param_1 + 0x78);
        uStack_12c = *(undefined4 *)(param_1 + 0x7c);
        local_128 = *(undefined8 *)(param_1 + 0x80);
        uStack_120 = 0;
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        lVar5 = param_2[0x16];
        if (lVar5 == 0) {
          lVar5 = FUN_1448abda6(param_2);
        }
        local_1c0 = (undefined8 *)CONCAT71(local_1c0._1_7_,1);
        local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
        uVar6 = FUN_1405837ac(lVar5,uVar6,&local_178,1);
      }
      else {
        local_68 = *(undefined8 *)(param_1 + 0x80);
        local_1b8 = &local_78;
        local_78 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x78);
        local_88 = *(undefined8 *)(param_1 + 0x68);
        local_1c0 = &local_98;
        local_98 = *(undefined8 *)(param_1 + 0x58);
        uStack_90 = *(undefined8 *)(param_1 + 0x60);
        local_b8 = *(undefined8 *)(param_1 + 0x40);
        uStack_b0 = *(undefined8 *)(param_1 + 0x48);
        local_1c8 = &local_b8;
        local_a8 = *(undefined8 *)(param_1 + 0x50);
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_188 = 0;
        local_190 = 0;
        local_198 = 1;
        local_1a0 = 0;
        local_1a8 = 1;
        local_1b0 = 0;
        uVar6 = FUN_140a44d48(*(undefined8 *)(param_1 + 0x38),&local_118,param_2,
                              *(undefined8 *)(param_1 + 0xb4));
        if (local_118 != 0.0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1487d5058;
    }
  }
  uVar6 = 0;
LAB_1487d5058:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d536c FUN_1487d536c body=32 status=ok
// SIG undefined FUN_1487d536c(void)

undefined8 FUN_1487d536c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Teleport Clothing Simulation");
  return param_2;
}



// FUNCTION 1487d5396 FUN_1487d5396 body=32 status=ok
// SIG undefined FUN_1487d5396(void)

undefined8 FUN_1487d5396(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Teleport Dynamics");
  return param_2;
}



// FUNCTION 1487d5404 FUN_1487d5404 body=199 status=ok
// SIG undefined FUN_1487d5404(void)

void FUN_1487d5404(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14b3edc00;
  *(undefined4 *)(puVar3 + 1) = *param_4;
  FUN_1487d6fcc(puVar3 + 2,param_5);
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[4] = lVar5;
  *puVar3 = &PTR_FUN_14b3edb90;
  puVar3[5] = 0;
  FUN_14485c47a(puVar3 + 5,param_2);
  *(undefined4 *)(puVar3 + 7) = uVar1;
  puVar3[6] = uVar2;
  return;
}



// FUNCTION 1487d54cc FUN_1487d54cc body=58 status=ok
// SIG undefined FUN_1487d54cc(void)

void FUN_1487d54cc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,longlong *param_6)

{
  FUN_147ad00b4(param_1 + 0x720,*(undefined4 *)(param_2 + 0x18),param_5,param_6);
  if (*param_6 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487d5506 FUN_1487d5506 body=56 status=ok
// SIG undefined FUN_1487d5506(void)

void FUN_1487d5506(longlong param_1)

{
  longlong *in_stack_00000028;
  
  if (0 < (int)in_stack_00000028[1]) {
    FUN_147ad0388(param_1 + 0x720,in_stack_00000028);
  }
  if (*in_stack_00000028 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487d553e FUN_1487d553e body=825 status=ok
// SIG undefined FUN_1487d553e(void)

void FUN_1487d553e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 *_Dst;
  int iVar16;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar16 = (int)param_2[5];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = param_2;
  if ((iStack_5c != iVar16) || (uStack_68 != plVar1)) {
    local_a0 = param_1 + 0x610;
    do {
      lVar2 = *local_98 + (longlong)iStack_7c * 0x38;
      if (*(int *)(param_1 + 0x5e0) != *(int *)(param_1 + 0x60c)) {
        lVar6 = *(longlong *)(*local_98 + (longlong)iStack_7c * 0x38);
        uVar9 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar14 = (uint)lVar6 & 0xffff;
        lVar12 = *(longlong *)(param_1 + 0x618);
        if (*(longlong *)(param_1 + 0x618) == 0) {
          lVar12 = local_a0;
        }
        iVar15 = *(int *)(lVar12 + (ulonglong)
                                   (*(int *)(param_1 + 0x620) - 1U &
                                   (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar14)
                                   + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar15 != -1) {
          lVar12 = *(longlong *)(param_1 + 0x5d8);
          do {
            lVar3 = lVar12 + (longlong)iVar15 * 0x38;
            if (*(longlong *)(lVar12 + (longlong)iVar15 * 0x38) == lVar6) {
              _Dst = (undefined8 *)(lVar3 + 8);
              if (_Dst != (undefined8 *)0x0 && lVar3 != 0) {
                local_b0 = (undefined8 *)(lVar2 + 8);
                cVar8 = FUN_144a43716(_Dst);
                if (cVar8 != '\0') goto LAB_1487d5661;
                bVar4 = *(byte *)(lVar3 + 0x28);
                if (bVar4 == *(byte *)(lVar2 + 0x28)) {
                  puVar13 = local_b0;
                  if (0x18 < *(ushort *)(lVar2 + 0x20)) {
                    puVar13 = *(undefined8 **)(lVar2 + 8);
                  }
                  if (0x18 < *(ushort *)(lVar3 + 0x20)) {
                    _Dst = (undefined8 *)*_Dst;
                  }
                  uVar10 = (ulonglong)((uint)bVar4 * 0x120);
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
                  if (pcVar7 == (code *)0x0) {
                    memcpy(_Dst,puVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
                  }
                  else {
                    (*pcVar7)(_Dst);
                  }
                }
                else {
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
                  if (pcVar7 != (code *)0x0) {
                    puVar13 = _Dst;
                    if (0x18 < *(ushort *)(lVar3 + 0x20)) {
                      puVar13 = (undefined8 *)*_Dst;
                    }
                    (*pcVar7)(puVar13);
                  }
                  if (0x18 < *(ushort *)(lVar3 + 0x20)) {
                    FUN_1400020a8(*_Dst);
                  }
                  bVar4 = *(byte *)(lVar2 + 0x28);
                  uVar9 = (uint)bVar4;
                  uVar5 = *(ushort *)(lVar2 + 0x20);
                  *(ushort *)(lVar3 + 0x20) = uVar5;
                  puVar13 = local_b0;
                  if (0x18 < uVar5) {
                    local_a8 = (ulonglong)bVar4;
                    puVar11 = (undefined8 *)FUN_14001cc68(uVar5,0);
                    *_Dst = puVar11;
                    uVar9 = (uint)local_a8;
                    puVar13 = (undefined8 *)*local_b0;
                    _Dst = puVar11;
                  }
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
                  if (pcVar7 == (code *)0x0) {
                    memcpy(_Dst,puVar13,
                           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120))
                          );
                  }
                  else {
                    (*pcVar7)(_Dst);
                  }
                  *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar2 + 0x28);
                }
                goto LAB_1487d565a;
              }
              break;
            }
            iVar15 = *(int *)(lVar3 + 0x30);
          } while (iVar15 != -1);
        }
      }
      uStack_68 = (longlong *)(lVar2 + 8);
      local_70 = lVar2;
      FUN_14088374e((longlong *)(param_1 + 0x5d8),local_4c,&local_70,0);
LAB_1487d565a:
      *(undefined1 *)(param_1 + 0x628) = 1;
LAB_1487d5661:
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || iStack_7c != iVar16));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487d587c FUN_1487d587c body=76 status=ok
// SIG undefined FUN_1487d587c(void)

undefined8 FUN_1487d587c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a78c84();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_148810cf8(lVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1487d58c8 FUN_1487d58c8 body=571 status=ok
// SIG undefined FUN_1487d58c8(void)

void FUN_1487d58c8(float param_1,float *param_2,float param_3,undefined1 *param_4,undefined4 param_5
                  ,float param_6,float *param_7)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_6;
  if ((param_4[0x3c] & 1) != 0) {
    fVar6 = param_3 * param_6;
  }
  *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfd;
  FUN_1405a144c(param_1,param_3,param_4,param_5,param_7);
  switch(*param_4) {
  case 1:
    fVar6 = fVar6 * param_3;
  default:
    *param_2 = fVar6;
    bVar2 = *(byte *)(param_7 + 1) & 0xf5 | 2;
    goto LAB_1487d5963;
  case 2:
    if (*param_7 <= 0.0) {
      *param_2 = fVar6;
      bVar2 = *(byte *)(param_7 + 1) | 2;
    }
    else {
      fVar4 = fVar6 - *param_2;
      fVar5 = fVar6;
      if (1e-08 <= fVar4 * fVar4) {
        param_1 = *param_7 * param_1;
        if (param_1 <= fVar4) {
          fVar4 = param_1;
        }
        if (fVar4 <= -param_1) {
          fVar4 = -param_1;
        }
        fVar5 = *param_2 + fVar4;
      }
      *param_2 = fVar5;
      bVar2 = *(byte *)(param_7 + 1) & 0xfd | (fVar5 == fVar6) * '\x02';
    }
    *(byte *)(param_7 + 1) = bVar2;
    bVar1 = ~bVar2 & 10;
    goto joined_r0x0001487d59b5;
  case 3:
    fVar6 = param_1 * *param_7 * param_6 + *param_2;
    *param_2 = fVar6;
    if (0.0 < param_6) {
      fVar6 = (float)FUN_1447c7e44(fVar6,param_6);
      *param_2 = fVar6;
    }
LAB_1487d59ab:
    bVar2 = *(byte *)(param_7 + 1);
    break;
  case 4:
    fVar4 = *param_2;
    if (((uint)param_7[1] & 1) == 0) {
      fVar5 = fVar6 - fVar4;
      fVar3 = fVar6;
      if (1e-08 <= fVar5 * fVar5) {
        param_1 = param_1 * *param_7;
        if (param_1 <= fVar5) {
          fVar5 = param_1;
        }
        if (fVar5 <= -param_1) {
          fVar5 = -param_1;
        }
        fVar3 = fVar4 + fVar5;
      }
      *param_2 = fVar3;
      bVar2 = *(byte *)(param_7 + 1);
      if ((fVar3 != fVar6) || (NAN(fVar3) || NAN(fVar6))) break;
      bVar2 = bVar2 | 1;
    }
    else {
      fVar6 = 0.0 - fVar4;
      if (fVar6 * fVar6 < 1e-08) {
        *param_2 = 0.0;
      }
      else {
        param_1 = param_1 * *param_7;
        if (param_1 <= fVar6) {
          fVar6 = param_1;
        }
        if (fVar6 <= -param_1) {
          fVar6 = -param_1;
        }
        fVar4 = fVar4 + fVar6;
        *param_2 = fVar4;
        if ((fVar4 != 0.0) || (NAN(fVar4))) goto LAB_1487d59ab;
      }
      bVar2 = *(byte *)(param_7 + 1) & 0xfe;
    }
    *(byte *)(param_7 + 1) = bVar2;
  }
  bVar1 = ~bVar2 & 0xc;
joined_r0x0001487d59b5:
  if (bVar1 == 0) {
    bVar2 = bVar2 & 0xf7;
LAB_1487d5963:
    *(byte *)(param_7 + 1) = bVar2;
  }
  return;
}



// FUNCTION 1487d5b03 FUN_1487d5b03 body=136 status=ok
// SIG undefined FUN_1487d5b03(void)

void FUN_1487d5b03(float *param_1,float param_2,char *param_3,undefined4 param_4,float param_5,
                  longlong param_6)

{
  char cVar1;
  
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xf5;
  if ((param_3[0x3c] & 1U) != 0) {
    param_5 = param_5 * param_2;
  }
  FUN_140784897(param_2,param_3,param_4,param_6);
  cVar1 = *param_3;
  if (cVar1 != '\x02') {
    if (cVar1 != '\x01') goto LAB_1487d5b65;
    param_5 = param_5 * param_2;
  }
  *param_1 = param_5;
  cVar1 = *param_3;
LAB_1487d5b65:
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xfd | (1 < (byte)(cVar1 - 3U)) * '\x02';
  return;
}



// FUNCTION 1487d5b8b thunk_FUN_1487d5b90 body=5 status=ok
// SIG undefined thunk_FUN_1487d5b90(void)

longlong * thunk_FUN_1487d5b90(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  while( true ) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar1 = FUN_144a74fb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_1;
    }
    lVar1 = FUN_140e1d66a();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) break;
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
  }
  lVar1 = FUN_144a7cacc();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     ((*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && ((longlong *)param_1[0x85] != (longlong *)0x0)))) {
    return (longlong *)param_1[0x85];
  }
  lVar1 = FUN_140a3aef4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return (longlong *)param_1[0x355];
  }
  lVar1 = FUN_144a6c4d8();
  if (*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) {
    return (longlong *)0x0;
  }
  if (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_1487d78ec(param_1);
  return plVar2;
}



// FUNCTION 1487d5b90 FUN_1487d5b90 body=260 status=ok
// SIG undefined FUN_1487d5b90(void)

longlong * FUN_1487d5b90(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  while( true ) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar1 = FUN_144a74fb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      return param_1;
    }
    lVar1 = FUN_140e1d66a();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) break;
    param_1 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
  }
  lVar1 = FUN_144a7cacc();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     ((*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && ((longlong *)param_1[0x85] != (longlong *)0x0)))) {
    return (longlong *)param_1[0x85];
  }
  lVar1 = FUN_140a3aef4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return (longlong *)param_1[0x355];
  }
  lVar1 = FUN_144a6c4d8();
  if (*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) {
    return (longlong *)0x0;
  }
  if (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_1487d78ec(param_1);
  return plVar2;
}



// FUNCTION 1487d5c94 FUN_1487d5c94 body=94 status=ok
// SIG undefined FUN_1487d5c94(void)

undefined1 FUN_1487d5c94(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else if ((longlong)*(int *)(param_1 + 0x1a0) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x198);
    lVar3 = (longlong)*(int *)(param_1 + 0x1a0) * 0x28;
    do {
      lVar3 = lVar3 + -0x28;
      lVar2 = FUN_1408c3c8e(lVar4);
      if (lVar2 == param_2) {
        return 1;
      }
      lVar4 = lVar4 + 0x28;
      uVar1 = 0;
    } while (lVar3 != 0);
  }
  return uVar1;
}



// FUNCTION 1487d5cf8 FUN_1487d5cf8 body=353 status=ok
// SIG undefined FUN_1487d5cf8(void)

void FUN_1487d5cf8(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  uint uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
  if (DAT_14cb720c0 != DAT_14cb720ec) {
    lVar7 = *param_1;
    lVar3 = param_1[1];
    uVar6 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar10 = (uint)lVar7 & 0xffff;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    uVar6 = (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar10) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4);
    puVar8 = &DAT_14cb720f0;
    if (DAT_14cb720f8 != (undefined *)0x0) {
      puVar8 = DAT_14cb720f8;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14cb72100 - 1U &
                              ((uVar6 >> 2) +
                               ((uint)lVar3 << 0x10 | uVar5) + (int)((ulonglong)lVar3 >> 0x20) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4) + uVar6 * 0x40 +
                               0x9e3779b9 ^ uVar6)) * 4);
    while (iVar2 != -1) {
      lVar9 = (longlong)iVar2 * 0x98;
      lVar1 = DAT_14cb720b8 + lVar9;
      if ((*(longlong *)(DAT_14cb720b8 + lVar9) == lVar7) &&
         (*(longlong *)(DAT_14cb720b8 + 8 + lVar9) == lVar3)) {
        lVar7 = lVar1 + 0x10;
        if ((lVar7 != 0 && lVar1 != 0) && (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44))) {
          FUN_1487d7fe0(lVar7);
          FUN_1487d8128(lVar7);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x90);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487d5d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
  return;
}



// FUNCTION 1487d5ec0 FUN_1487d5ec0 body=183 status=ok
// SIG undefined FUN_1487d5ec0(void)

void FUN_1487d5ec0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    uVar1 = FUN_144a853d0();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_3;
      }
      FUN_1446f470e(&local_28,puVar4,1);
      if (local_28 == 0) {
        local_28 = DAT_14cb72130;
      }
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (param_2 == '\0') {
        FUN_1400bc96c(lVar3 + 0xe0,&local_28);
      }
      else {
        FUN_1400bc8c2();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d5f78 FUN_1487d5f78 body=194 status=ok
// SIG undefined FUN_1487d5f78(void)

void FUN_1487d5f78(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487d603c(param_2,&local_40);
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
  FUN_147acfca8(param_1,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d603c FUN_1487d603c body=208 status=ok
// SIG undefined FUN_1487d603c(void)

undefined8 FUN_1487d603c(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1464c6472();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d6114 FUN_1487d6114 body=106 status=ok
// SIG undefined FUN_1487d6114(void)

void FUN_1487d6114(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_140a87838();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_1487d616f;
  }
  lVar3 = 0;
LAB_1487d616f:
  *(longlong *)(param_1 + 0xd8) = lVar3;
  return;
}



// FUNCTION 1487d6184 FUN_1487d6184 body=111 status=ok
// SIG undefined FUN_1487d6184(void)

void FUN_1487d6184(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14019c9f2(param_1 + 0xe0);
  FUN_1411ba834(param_1 + 0xf0,param_2);
  FUN_14019c9f2(param_1 + 0x118,param_2);
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    lVar1 = (longlong)*(int *)(param_1 + 0x138) * 0x24;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x24;
      lVar1 = lVar1 + -0x24;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1487d625c FUN_1487d625c body=83 status=ok
// SIG undefined FUN_1487d625c(void)

undefined8 * FUN_1487d625c(undefined8 *param_1)

{
  FUN_140bf2984();
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0x201;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x145) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = &PTR_FUN_14b3ed7c0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 1487d62b6 FUN_1487d62b6 body=163 status=ok
// SIG undefined FUN_1487d62b6(void)

void FUN_1487d62b6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  local_20 = param_2[1];
  plVar3 = local_28;
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)*param_2;
  }
  cVar2 = (**(code **)(*plVar3 + 0x20))();
  if (cVar2 != '\0') {
    FUN_1487d636a(param_1 + 0x810,&local_28);
  }
  FUN_1487d636a(param_1 + 0x7f0,&local_28);
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d636a FUN_1487d636a body=104 status=ok
// SIG undefined FUN_1487d636a(void)

void FUN_1487d636a(longlong param_1)

{
  void *_Dst;
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1487d84bc();
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    _Dst = (void *)(lVar2 + (longlong)(int)uVar1 * 0x10);
    FUN_1407a80a2(_Dst,1);
    memmove(_Dst,(void *)(lVar2 + (longlong)(int)uVar1 * 0x10 + 0x10),
            (longlong)(int)(~uVar1 + *(int *)(param_1 + 0x18)) << 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}



// FUNCTION 1487d63d2 FUN_1487d63d2 body=480 status=ok
// SIG undefined FUN_1487d63d2(void)

undefined8 * FUN_1487d63d2(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar3;
  double dVar5;
  
  uVar15 = DAT_14c8463e8;
  puVar1 = (undefined8 *)(param_1 + 0x510);
  if (*(char *)(param_1 + 0x530) == '\0') {
    lVar7 = *(longlong *)(param_1 + 0xd0);
    if (lVar7 == 0) {
      if (puVar1 == &DAT_14c8463d0) {
        return puVar1;
      }
      *(undefined8 *)(param_1 + 0x520) = DAT_14c8463e0;
      *(undefined8 *)(param_1 + 0x528) = uVar15;
      uVar15 = DAT_14c8463d8;
      *puVar1 = DAT_14c8463d0;
      *(undefined8 *)(param_1 + 0x518) = uVar15;
    }
    else {
      pdVar16 = (double *)FUN_1447c6d68(lVar7);
      dVar11 = *(double *)(lVar7 + 0x450);
      dVar12 = *(double *)(lVar7 + 0x458);
      dVar13 = *(double *)(lVar7 + 0x460);
      dVar14 = *(double *)(lVar7 + 0x468);
      dVar2 = pdVar16[3];
      dVar3 = pdVar16[3];
      dVar4 = pdVar16[1];
      dVar5 = pdVar16[1];
      dVar6 = pdVar16[2];
      dVar18 = pdVar16[2];
      dVar8 = dVar12 * dVar6 * -1.0 + dVar13 * dVar4 + *pdVar16 * dVar14 * 1.0 + dVar2 * dVar11;
      dVar9 = dVar11 * dVar18 * 1.0 + dVar14 * dVar5 + *pdVar16 * dVar13 * -1.0 + dVar3 * dVar12;
      dVar17 = (dVar14 * dVar6 * 1.0 + ((*pdVar16 * dVar12 * 1.0 + dVar2 * dVar13) - dVar4 * dVar11)
               ) * -1.0;
      dVar18 = (dVar13 * dVar18 * -1.0 +
               ((*pdVar16 * dVar11 * -1.0 + dVar3 * dVar14) - dVar5 * dVar12)) * 1.0;
      dVar2 = *(double *)(param_1 + 0x3c0);
      dVar4 = *(double *)(param_1 + 0x3c8);
      dVar5 = *(double *)(param_1 + 0x3d0);
      dVar6 = *(double *)(param_1 + 0x3d8);
      dVar3 = dVar5 * dVar17 * -1.0 + dVar9 * dVar4 + (dVar18 * dVar6 - dVar8 * dVar2 * -1.0);
      *(double *)(param_1 + 0x510) =
           dVar4 * dVar17 * -1.0 + ((dVar2 * dVar18 - dVar6 * dVar8 * 1.0) - dVar5 * dVar9);
      *(double *)(param_1 + 0x518) =
           dVar2 * dVar17 * 1.0 + ((dVar4 * dVar18 - dVar5 * dVar8 * -1.0) - dVar6 * dVar9);
      auVar10._8_4_ = SUB84(dVar3,0);
      auVar10._0_8_ = dVar6 * dVar17 * 1.0 + dVar9 * dVar2 + (dVar18 * dVar5 - dVar8 * dVar4 * 1.0);
      auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x520) = auVar10;
    }
    *(undefined1 *)(param_1 + 0x530) = 1;
  }
  return puVar1;
}



// FUNCTION 1487d65b2 FUN_1487d65b2 body=190 status=ok
// SIG undefined FUN_1487d65b2(void)

void FUN_1487d65b2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  puVar4 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 * 0xc;
    do {
      if (*(longlong *)(puVar4 + 1) == *param_2) {
        if (puVar4 != (undefined4 *)0x0) goto LAB_1487d65fb;
        break;
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1487d8646(puVar1,iVar2);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 3 + 2] = 0;
  *(undefined8 *)(puVar3 + lVar6 * 3) = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 3;
  *(longlong *)(puVar3 + lVar6 * 3 + 1) = *param_2;
LAB_1487d65fb:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 1487d6670 FUN_1487d6670 body=171 status=ok
// SIG undefined FUN_1487d6670(void)

void FUN_1487d6670(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 << 4;
    do {
      if (puVar4[1] == *param_2) {
        if (puVar4 != (undefined8 *)0x0) goto LAB_1487d66f1;
        break;
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1487d86d8(puVar1,iVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 2] = 0;
  (puVar3 + lVar6 * 2)[1] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 2;
  puVar3[lVar6 * 2 + 1] = *param_2;
LAB_1487d66f1:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 1487d671c FUN_1487d671c body=192 status=ok
// SIG undefined FUN_1487d671c(void)

void FUN_1487d671c(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined1 *)(param_1 + 8);
  puVar3 = *(undefined1 **)(param_1 + 0x18);
  puVar4 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 * 0xc;
    do {
      if (*(longlong *)(puVar4 + 4) == *param_2) {
        if (puVar4 != (undefined1 *)0x0) goto LAB_1487d678f;
        break;
      }
      puVar4 = puVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1487d87e0(puVar1,iVar2);
    puVar3 = *(undefined1 **)(param_1 + 0x18);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  lVar6 = lVar6 * 0xc;
  *(undefined4 *)(puVar3 + lVar6 + 8) = 0;
  *(undefined8 *)(puVar3 + lVar6) = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x18);
  if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6;
  *(longlong *)(puVar3 + lVar6 + 4) = *param_2;
LAB_1487d678f:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 1487d67dc FUN_1487d67dc body=87 status=ok
// SIG undefined FUN_1487d67dc(void)

void FUN_1487d67dc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43340000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b3eda80;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f0000003f000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42960000;
  return;
}



// FUNCTION 1487d6834 FUN_1487d6834 body=29 status=ok
// SIG undefined FUN_1487d6834(void)

undefined8 FUN_1487d6834(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d6858 FUN_1487d6858 body=38 status=ok
// SIG undefined FUN_1487d6858(void)

undefined8 FUN_1487d6858(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d6884 FUN_1487d6884 body=38 status=ok
// SIG undefined FUN_1487d6884(void)

undefined8 FUN_1487d6884(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d68b0 FUN_1487d68b0 body=38 status=ok
// SIG undefined FUN_1487d68b0(void)

undefined8 FUN_1487d68b0(undefined8 param_1,int param_2)

{
  FUN_145abd6fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d68f6 FUN_1487d68f6 body=29 status=ok
// SIG undefined FUN_1487d68f6(void)

bool FUN_1487d68f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487d6914 FUN_1487d6914 body=101 status=ok
// SIG undefined FUN_1487d6914(void)

void FUN_1487d6914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d697a FUN_1487d697a body=101 status=ok
// SIG undefined FUN_1487d697a(void)

void FUN_1487d697a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d69e0 FUN_1487d69e0 body=134 status=ok
// SIG undefined FUN_1487d69e0(void)

void FUN_1487d69e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3edab0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487d6a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d6a66 FUN_1487d6a66 body=44 status=ok
// SIG undefined FUN_1487d6a66(void)

void FUN_1487d6a66(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487d6a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487d6aac FUN_1487d6aac body=29 status=ok
// SIG undefined FUN_1487d6aac(void)

bool FUN_1487d6aac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487d6aca FUN_1487d6aca body=101 status=ok
// SIG undefined FUN_1487d6aca(void)

void FUN_1487d6aca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3edb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d6b30 FUN_1487d6b30 body=101 status=ok
// SIG undefined FUN_1487d6b30(void)

void FUN_1487d6b30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3edb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487d6b96 FUN_1487d6b96 body=134 status=ok
// SIG undefined FUN_1487d6b96(void)

void FUN_1487d6b96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3edb20;
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
                    /* WARNING: Could not recover jumptable at 0x0001487d6c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d6c1c FUN_1487d6c1c body=39 status=ok
// SIG undefined FUN_1487d6c1c(void)

void FUN_1487d6c1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487d6c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487d6c44 FUN_1487d6c44 body=57 status=ok
// SIG undefined FUN_1487d6c44(void)

undefined8 * FUN_1487d6c44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b3edc00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d6c98 FUN_1487d6c98 body=29 status=ok
// SIG undefined FUN_1487d6c98(void)

bool FUN_1487d6c98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1487d6cb6 FUN_1487d6cb6 body=26 status=ok
// SIG undefined FUN_1487d6cb6(void)

bool FUN_1487d6cb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 1487d6cd0 FUN_1487d6cd0 body=24 status=ok
// SIG undefined FUN_1487d6cd0(void)

bool FUN_1487d6cd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 != 0;
}



// FUNCTION 1487d6cf4 FUN_1487d6cf4 body=120 status=ok
// SIG undefined FUN_1487d6cf4(void)

void FUN_1487d6cf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3edc00;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  FUN_1487d701a(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3edb90;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 1487d6d6c FUN_1487d6d6c body=120 status=ok
// SIG undefined FUN_1487d6d6c(void)

void FUN_1487d6d6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3edc00;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  FUN_1487d701a(puVar1 + 2,param_1 + 0x10);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3edb90;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar2;
  return;
}



// FUNCTION 1487d6de4 FUN_1487d6de4 body=156 status=ok
// SIG undefined FUN_1487d6de4(void)

void FUN_1487d6de4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3edc00;
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  FUN_1487d701a(&p_Var1->ProcessLocksList,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3edb90;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d6e80 FUN_1487d6e80 body=124 status=ok
// SIG undefined FUN_1487d6e80(void)

void FUN_1487d6e80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  local_2c = param_4;
  local_38 = FUN_14479d2ce(param_1 + 0x28);
  local_48 = &local_30;
  local_40 = &local_2c;
  FUN_1487d7068(param_1 + 8,param_1 + 0x30,&local_38,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d6efe FUN_1487d6efe body=202 status=ok
// SIG undefined FUN_1487d6efe(void)

bool FUN_1487d6efe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_3;
  local_34 = param_4;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    local_40 = &local_34;
    local_48 = &local_38;
    local_30 = lVar2;
    FUN_1487d7068(param_1 + 8,param_1 + 0x30,&local_30,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d6fcc FUN_1487d6fcc body=77 status=ok
// SIG undefined FUN_1487d6fcc(void)

undefined8 * FUN_1487d6fcc(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14580e690(param_1,iVar1,0);
    FUN_14580e635(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1487d701a FUN_1487d701a body=77 status=ok
// SIG undefined FUN_1487d701a(void)

undefined8 * FUN_1487d701a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14580e690(param_1,iVar1,0);
    FUN_14580e635(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1487d7068 FUN_1487d7068 body=216 status=ok
// SIG undefined FUN_1487d7068(void)

void FUN_1487d7068(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_2 + 1);
  pcVar3 = (code *)*param_2;
  lVar4 = *param_3;
  local_58 = 0;
  iVar2 = param_1[4];
  uVar5 = *(undefined8 *)(param_1 + 2);
  local_50 = iVar2;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_14580e690(&local_58,iVar2,0);
    FUN_14580e635(local_58,uVar5,iVar2);
  }
  local_68 = *param_1;
  local_60 = &local_58;
  (*pcVar3)(lVar4 + iVar1,param_4,*param_5,*param_6);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d7142 FUN_1487d7142 body=147 status=ok
// SIG undefined FUN_1487d7142(void)

undefined8 * FUN_1487d7142(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14b3edce0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
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
  param_1[3] = lVar3;
  return param_1;
}



// FUNCTION 1487d71d6 FUN_1487d71d6 body=57 status=ok
// SIG undefined FUN_1487d71d6(void)

undefined8 * FUN_1487d71d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b3edce0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d722a FUN_1487d722a body=29 status=ok
// SIG undefined FUN_1487d722a(void)

bool FUN_1487d722a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 1487d7248 FUN_1487d7248 body=26 status=ok
// SIG undefined FUN_1487d7248(void)

bool FUN_1487d7248(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 1487d7262 FUN_1487d7262 body=24 status=ok
// SIG undefined FUN_1487d7262(void)

bool FUN_1487d7262(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 1487d7286 FUN_1487d7286 body=64 status=ok
// SIG undefined FUN_1487d7286(void)

void FUN_1487d7286(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1487d74b4(*param_2,param_1);
  return;
}



// FUNCTION 1487d72c6 FUN_1487d72c6 body=64 status=ok
// SIG undefined FUN_1487d72c6(void)

void FUN_1487d72c6(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1487d74b4(*param_2,param_1);
  return;
}



// FUNCTION 1487d7306 FUN_1487d7306 body=98 status=ok
// SIG undefined FUN_1487d7306(void)

void FUN_1487d7306(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1487d74b4(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d7359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d7368 FUN_1487d7368 body=124 status=ok
// SIG undefined FUN_1487d7368(void)

void FUN_1487d7368(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  local_2c = param_4;
  local_38 = FUN_14479d2ce(param_1 + 0x20);
  local_48 = &local_30;
  local_40 = &local_2c;
  FUN_1487d7544(param_1 + 8,param_1 + 0x28,&local_38,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d73e6 FUN_1487d73e6 body=202 status=ok
// SIG undefined FUN_1487d73e6(void)

bool FUN_1487d73e6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_3;
  local_34 = param_4;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 != 0) {
    local_40 = &local_34;
    local_48 = &local_38;
    local_30 = lVar2;
    FUN_1487d7544(param_1 + 8,param_1 + 0x28,&local_30,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d74b4 FUN_1487d74b4 body=144 status=ok
// SIG undefined FUN_1487d74b4(void)

undefined8 * FUN_1487d74b4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14b3edce0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14b3edc70;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar2;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1487d7544 FUN_1487d7544 body=209 status=ok
// SIG undefined FUN_1487d7544(void)

void FUN_1487d7544(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_88 [32];
  void **local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_50;
  _Src = (void *)*param_1;
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar4 << 2);
  }
  local_68 = &local_58;
  (*pcVar2)(lVar3 + iVar1,param_4,*param_5,*param_6);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d7616 FUN_1487d7616 body=58 status=ok
// SIG undefined FUN_1487d7616(void)

void FUN_1487d7616(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487d7650(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_144b287d6(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,4);
  return;
}



// FUNCTION 1487d7650 FUN_1487d7650 body=108 status=ok
// SIG undefined FUN_1487d7650(void)

ulonglong FUN_1487d7650(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
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



// FUNCTION 1487d76bc FUN_1487d76bc body=114 status=ok
// SIG undefined FUN_1487d76bc(void)

void FUN_1487d76bc(longlong *param_1,int param_2)

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



// FUNCTION 1487d77c8 FUN_1487d77c8 body=48 status=ok
// SIG undefined FUN_1487d77c8(void)

void FUN_1487d77c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1487d77f8 FUN_1487d77f8 body=110 status=ok
// SIG undefined FUN_1487d77f8(void)

void FUN_1487d77f8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1487d7868(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487d7868 FUN_1487d7868 body=132 status=ok
// SIG undefined FUN_1487d7868(void)

void FUN_1487d7868(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1487d78ec FUN_1487d78ec body=102 status=ok
// SIG undefined FUN_1487d78ec(void)

void FUN_1487d78ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_144a74fb4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d7954 FUN_1487d7954 body=132 status=ok
// SIG undefined FUN_1487d7954(void)

void FUN_1487d7954(longlong param_1,int param_2)

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



// FUNCTION 1487d79da FUN_1487d79da body=13 status=ok
// SIG undefined FUN_1487d79da(void)

void FUN_1487d79da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001487d79e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x308))();
  return;
}



// FUNCTION 1487d79e8 FUN_1487d79e8 body=147 status=ok
// SIG undefined FUN_1487d79e8(void)

void FUN_1487d79e8(longlong param_1,int param_2)

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



// FUNCTION 1487d7a7c FUN_1487d7a7c body=143 status=ok
// SIG undefined FUN_1487d7a7c(void)

void FUN_1487d7a7c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x34,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x34)) {
      uVar5 = uVar4 / 0x34 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x34,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d7b0c FUN_1487d7b0c body=146 status=ok
// SIG undefined FUN_1487d7b0c(void)

void FUN_1487d7b0c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x4d0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4d0)) {
      uVar5 = uVar4 / 0x4d0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x4d0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487d7ba0 FUN_1487d7ba0 body=31 status=ok
// SIG undefined FUN_1487d7ba0(void)

undefined8 FUN_1487d7ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d7bd0 FUN_1487d7bd0 body=93 status=ok
// SIG undefined FUN_1487d7bd0(void)

void FUN_1487d7bd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3eddf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d7c2e FUN_1487d7c2e body=93 status=ok
// SIG undefined FUN_1487d7c2e(void)

void FUN_1487d7c2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3eddf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3edd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487d7c8c FUN_1487d7c8c body=126 status=ok
// SIG undefined FUN_1487d7c8c(void)

void FUN_1487d7c8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3eddf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3edd80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d7cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d7d1a FUN_1487d7d1a body=138 status=ok
// SIG undefined FUN_1487d7d1a(void)

void FUN_1487d7d1a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487d7da4 FUN_1487d7da4 body=134 status=ok
// SIG undefined FUN_1487d7da4(void)

void FUN_1487d7da4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb720b8;
  if (DAT_14cb720ec != 0) {
    *(int *)(DAT_14cb720b8 + (longlong)DAT_14cb720e8 * 0x98) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x98) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb720ec) {
    iVar4 = DAT_14cb720e8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x98) = iVar4;
  DAT_14cb720ec = DAT_14cb720ec + 1;
  puVar3 = &DAT_14cb720c8;
  if (DAT_14cb720d8 != (undefined *)0x0) {
    puVar3 = DAT_14cb720d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb720e8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1487d7e2a FUN_1487d7e2a body=31 status=ok
// SIG undefined FUN_1487d7e2a(void)

undefined8 FUN_1487d7e2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487d7e6c FUN_1487d7e6c body=101 status=ok
// SIG undefined FUN_1487d7e6c(void)

void FUN_1487d7e6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3eded0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3ede60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1487d7ed2 FUN_1487d7ed2 body=134 status=ok
// SIG undefined FUN_1487d7ed2(void)

void FUN_1487d7ed2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3eded0;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar3;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar4;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar5;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ede60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487d7f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487d7f58 FUN_1487d7f58 body=64 status=ok
// SIG undefined FUN_1487d7f58(void)

void FUN_1487d7f58(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d7f9a FUN_1487d7f9a body=66 status=ok
// SIG undefined FUN_1487d7f9a(void)

undefined8 FUN_1487d7f9a(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487d7fe0 FUN_1487d7fe0 body=326 status=ok
// SIG undefined FUN_1487d7fe0(void)

void FUN_1487d7fe0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 1487d8128 FUN_1487d8128 body=319 status=ok
// SIG undefined FUN_1487d8128(void)

void FUN_1487d8128(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_140c85ee4(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


