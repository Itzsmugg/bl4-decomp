// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14725bc34 FUN_14725bc34 body=145 status=ok
// SIG undefined FUN_14725bc34(void)

void FUN_14725bc34(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 14725bcc6 FUN_14725bcc6 body=29 status=ok
// SIG undefined FUN_14725bcc6(void)

undefined8 FUN_14725bcc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725bce4 FUN_14725bce4 body=38 status=ok
// SIG undefined FUN_14725bce4(void)

undefined8 FUN_14725bce4(undefined8 param_1,int param_2)

{
  FUN_1462eee1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725bd10 FUN_14725bd10 body=38 status=ok
// SIG undefined FUN_14725bd10(void)

undefined8 FUN_14725bd10(undefined8 param_1,int param_2)

{
  FUN_1462eee62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725bd3c FUN_14725bd3c body=38 status=ok
// SIG undefined FUN_14725bd3c(void)

undefined8 FUN_14725bd3c(undefined8 param_1,int param_2)

{
  FUN_1462eeeaa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725bd68 FUN_14725bd68 body=258 status=ok
// SIG undefined FUN_14725bd68(void)

void FUN_14725bd68(void)

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
              0x110) < DAT_14ca18970) {
    FUN_144b3d300(&DAT_14ca18970);
    if (DAT_14ca18970 == -1) {
      FUN_14725c17e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLocalLightBufferPrepassParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca188f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e29db0);
      _Init_thread_footer(&DAT_14ca18970);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725be6c FUN_14725be6c body=323 status=ok
// SIG undefined FUN_14725be6c(void)

longlong FUN_14725be6c(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_1471d08a5();
  FUN_142cdedaa(&local_158,param_2 + 0x500,param_3);
  *(undefined4 *)(param_1 + 0x68) = uStack_150;
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_154,local_158);
  FUN_14057c610(&local_158,param_3,param_4);
  *(undefined4 *)(param_1 + 0x40) = local_158;
  *(undefined4 *)(param_1 + 0x44) = uStack_154;
  *(undefined4 *)(param_1 + 0x48) = uStack_150;
  *(undefined4 *)(param_1 + 0x4c) = uStack_14c;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x1b8);
  local_168 = 0;
  FUN_1449e488f(&local_158,param_2,param_3,0);
  FUN_142ca69a4(&local_160,&local_158,1,1);
  lVar3 = FUN_1449dab10();
  cVar4 = '\x02';
  if (*(char *)(lVar3 + 0x41) != '\x03') {
    cVar4 = *(char *)(lVar3 + 0x41);
  }
  *(longlong *)(param_1 + 0x70) = local_160;
  *(char *)(param_1 + 0x78) = cVar4;
  if (local_160 != 0) {
    LOCK();
    puVar1 = (uint *)(local_160 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725bfb0 FUN_14725bfb0 body=295 status=ok
// SIG undefined FUN_14725bfb0(void)

void FUN_14725bfb0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_14725c0d7(lVar11,param_2,param_4,param_5,param_6,param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14725c0d7 FUN_14725c0d7 body=130 status=ok
// SIG undefined FUN_14725c0d7(void)

void FUN_14725c0d7(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_147254bd0();
  FUN_14725c159(param_1,param_2,param_3);
  uVar1 = *param_2;
  uVar2 = *param_5;
  FUN_144ab89ca(uVar1,param_1,param_4,param_4 + 0x18);
  FUN_14303dd62(uVar1,param_1,uVar2,param_6,*(undefined8 *)(*(longlong *)(param_4 + 8) + 0x40));
  return;
}



// FUNCTION 14725c159 FUN_14725c159 body=36 status=ok
// SIG undefined FUN_14725c159(void)

void FUN_14725c159(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)uRam000000014ca16f54;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = uRam000000014ca16f54;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14725c17e FUN_14725c17e body=226 status=ok
// SIG undefined FUN_14725c17e(void)

longlong * FUN_14725c17e(longlong *param_1)

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
  pcVar13 = FUN_14725c262;
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



// FUNCTION 14725c262 FUN_14725c262 body=136 status=ok
// SIG undefined FUN_14725c262(void)

code * FUN_14725c262(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725c2ea;
}



// FUNCTION 14725c2ea FUN_14725c2ea body=142 status=ok
// SIG undefined FUN_14725c2ea(void)

code * FUN_14725c2ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725c378;
}



// FUNCTION 14725c378 FUN_14725c378 body=144 status=ok
// SIG undefined FUN_14725c378(void)

code * FUN_14725c378(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145edd9dc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLocalLightBufferPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca16e90;
  return FUN_14725c408;
}



// FUNCTION 14725c408 FUN_14725c408 body=138 status=ok
// SIG undefined FUN_14725c408(void)

undefined1 * FUN_14725c408(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e8ad08();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLocalLightBufferVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x65;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca16e08;
  return &LAB_14725c492;
}



// FUNCTION 14725c496 FUN_14725c496 body=29 status=ok
// SIG undefined FUN_14725c496(void)

undefined8 FUN_14725c496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725c4b4 FUN_14725c4b4 body=354 status=ok
// SIG undefined FUN_14725c4b4(void)

void FUN_14725c4b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca16fe8;
  if (DAT_14ca16fe8 != 0) {
    LOCK();
    *(int *)(DAT_14ca16fe8 + 8) = *(int *)(DAT_14ca16fe8 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca16fa0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a299610;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725c618 FUN_14725c618 body=38 status=ok
// SIG undefined FUN_14725c618(void)

undefined8 FUN_14725c618(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725c63e FUN_14725c63e body=163 status=ok
// SIG undefined FUN_14725c63e(void)

void FUN_14725c63e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 14725c6e2 FUN_14725c6e2 body=29 status=ok
// SIG undefined FUN_14725c6e2(void)

undefined8 FUN_14725c6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725c700 FUN_14725c700 body=258 status=ok
// SIG undefined FUN_14725c700(void)

void FUN_14725c700(void)

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
              0x110) < DAT_14ca18a28) {
    FUN_144b3d300(&DAT_14ca18a28);
    if (DAT_14ca18a28 == -1) {
      FUN_14725c804(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileSeparateTranslucencyPassParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca189a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2a668);
      _Init_thread_footer(&DAT_14ca18a28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725c804 FUN_14725c804 body=226 status=ok
// SIG undefined FUN_14725c804(void)

longlong * FUN_14725c804(longlong *param_1)

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
  pcVar13 = FUN_14725c8e8;
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



// FUNCTION 14725c8e8 FUN_14725c8e8 body=136 status=ok
// SIG undefined FUN_14725c8e8(void)

code * FUN_14725c8e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725c970;
}



// FUNCTION 14725c970 FUN_14725c970 body=142 status=ok
// SIG undefined FUN_14725c970(void)

code * FUN_14725c970(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725c9fe;
}



// FUNCTION 14725c9fe FUN_14725c9fe body=142 status=ok
// SIG undefined FUN_14725c9fe(void)

code * FUN_14725c9fe(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725ca8c;
}



// FUNCTION 14725ca8c FUN_14725ca8c body=136 status=ok
// SIG undefined FUN_14725ca8c(void)

undefined1 * FUN_14725ca8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14725cb14;
}



// FUNCTION 14725cb18 FUN_14725cb18 body=141 status=ok
// SIG undefined FUN_14725cb18(void)

void FUN_14725cb18(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  uVar2 = *(int *)((longlong)param_2 + 0x18) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < (int)uVar2 || 0x80 < *(int *)((longlong)param_1 + 0x1c))
  {
    uVar3 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar3;
    FUN_1401f5dc4(param_1,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x18);
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  if (iVar1 != 0) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 14725cba6 FUN_14725cba6 body=240 status=ok
// SIG undefined FUN_14725cba6(void)

void FUN_14725cba6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x16) = 4;
  *(undefined1 (*) [16])(param_1 + 0x1b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x19) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x17) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  lVar1 = 0xf0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1b0);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  return;
}



// FUNCTION 14725cc96 FUN_14725cc96 body=29 status=ok
// SIG undefined FUN_14725cc96(void)

undefined8 FUN_14725cc96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ccb4 FUN_14725ccb4 body=258 status=ok
// SIG undefined FUN_14725ccb4(void)

void FUN_14725ccb4(void)

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
              0x110) < DAT_14ca18ab0) {
    FUN_144b3d300(&DAT_14ca18ab0);
    if (DAT_14ca18ab0 == -1) {
      FUN_14725cdb8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileRenderPassParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0xbf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2a8ec);
      _Init_thread_footer(&DAT_14ca18ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725cdb8 FUN_14725cdb8 body=226 status=ok
// SIG undefined FUN_14725cdb8(void)

longlong * FUN_14725cdb8(longlong *param_1)

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
  pcVar13 = FUN_14725ce9c;
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



// FUNCTION 14725ce9c FUN_14725ce9c body=136 status=ok
// SIG undefined FUN_14725ce9c(void)

code * FUN_14725ce9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf0000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725cf24;
}



// FUNCTION 14725cf24 FUN_14725cf24 body=136 status=ok
// SIG undefined FUN_14725cf24(void)

code * FUN_14725cf24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorGradingLUT";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725cfac;
}



// FUNCTION 14725cfac FUN_14725cfac body=136 status=ok
// SIG undefined FUN_14725cfac(void)

code * FUN_14725cfac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResLocalFogVolumeDepthSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d034;
}



// FUNCTION 14725d034 FUN_14725d034 body=136 status=ok
// SIG undefined FUN_14725d034(void)

code * FUN_14725d034(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResLocalFogVolumeViewSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d0bc;
}



// FUNCTION 14725d0bc FUN_14725d0bc body=136 status=ok
// SIG undefined FUN_14725d0bc(void)

code * FUN_14725d0bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeTileDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d144;
}



// FUNCTION 14725d144 FUN_14725d144 body=136 status=ok
// SIG undefined FUN_14725d144(void)

code * FUN_14725d144(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeTileDataTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d1cc;
}



// FUNCTION 14725d1cc FUN_14725d1cc body=136 status=ok
// SIG undefined FUN_14725d1cc(void)

code * FUN_14725d1cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeTileDrawIndirectBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d254;
}



// FUNCTION 14725d254 FUN_14725d254 body=136 status=ok
// SIG undefined FUN_14725d254(void)

code * FUN_14725d254(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeInstances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725d2dc;
}



// FUNCTION 14725d2dc FUN_14725d2dc body=142 status=ok
// SIG undefined FUN_14725d2dc(void)

code * FUN_14725d2dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionCapture";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileReflectionCaptureShaderData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000000c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725d36a;
}



// FUNCTION 14725d36a FUN_14725d36a body=142 status=ok
// SIG undefined FUN_14725d36a(void)

code * FUN_14725d36a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725d3f8;
}



// FUNCTION 14725d3f8 FUN_14725d3f8 body=142 status=ok
// SIG undefined FUN_14725d3f8(void)

code * FUN_14725d3f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14725d486;
}



// FUNCTION 14725d486 FUN_14725d486 body=136 status=ok
// SIG undefined FUN_14725d486(void)

undefined1 * FUN_14725d486(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14725d50e;
}



// FUNCTION 14725d512 FUN_14725d512 body=110 status=ok
// SIG undefined FUN_14725d512(void)

void FUN_14725d512(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014725d549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 14725d580 FUN_14725d580 body=38 status=ok
// SIG undefined FUN_14725d580(void)

undefined8 FUN_14725d580(undefined8 param_1,int param_2)

{
  FUN_1462eeef2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725d5ac FUN_14725d5ac body=474 status=ok
// SIG undefined FUN_14725d5ac(void)

void FUN_14725d5ac(longlong *param_1)

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



// FUNCTION 14725d788 FUN_14725d788 body=230 status=ok
// SIG undefined FUN_14725d788(void)

int * FUN_14725d788(longlong *param_1,int *param_2)

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



// FUNCTION 14725d86e FUN_14725d86e body=148 status=ok
// SIG undefined FUN_14725d86e(void)

void FUN_14725d86e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14725d902((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14725d8d8;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14725d8d8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14725d902 FUN_14725d902 body=138 status=ok
// SIG undefined FUN_14725d902(void)

void FUN_14725d902(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14725d98c FUN_14725d98c body=29 status=ok
// SIG undefined FUN_14725d98c(void)

undefined8 FUN_14725d98c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725d9aa FUN_14725d9aa body=384 status=ok
// SIG undefined FUN_14725d9aa(void)

void FUN_14725d9aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17208;
  if (DAT_14ca17208 != 0) {
    LOCK();
    *(int *)(DAT_14ca17208 + 8) = *(int *)(DAT_14ca17208 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca171c0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a299950;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725db2c FUN_14725db2c body=38 status=ok
// SIG undefined FUN_14725db2c(void)

undefined8 FUN_14725db2c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725db52 FUN_14725db52 body=163 status=ok
// SIG undefined FUN_14725db52(void)

void FUN_14725db52(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e2d7f4();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e2d8dc(param_1,param_2);
  return;
}



// FUNCTION 14725dbf5 FUN_14725dbf5 body=374 status=ok
// SIG undefined FUN_14725dbf5(void)

void FUN_14725dbf5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14725dd6c FUN_14725dd6c body=29 status=ok
// SIG undefined FUN_14725dd6c(void)

undefined8 FUN_14725dd6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725dd8a FUN_14725dd8a body=384 status=ok
// SIG undefined FUN_14725dd8a(void)

void FUN_14725dd8a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17290;
  if (DAT_14ca17290 != 0) {
    LOCK();
    *(int *)(DAT_14ca17290 + 8) = *(int *)(DAT_14ca17290 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17248;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a299970;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725df0c FUN_14725df0c body=38 status=ok
// SIG undefined FUN_14725df0c(void)

undefined8 FUN_14725df0c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725df32 FUN_14725df32 body=163 status=ok
// SIG undefined FUN_14725df32(void)

void FUN_14725df32(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e2db10();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e2dbf8(param_1,param_2);
  return;
}



// FUNCTION 14725dfd5 FUN_14725dfd5 body=374 status=ok
// SIG undefined FUN_14725dfd5(void)

void FUN_14725dfd5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14725e14c FUN_14725e14c body=29 status=ok
// SIG undefined FUN_14725e14c(void)

undefined8 FUN_14725e14c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e16a FUN_14725e16a body=38 status=ok
// SIG undefined FUN_14725e16a(void)

undefined8 FUN_14725e16a(undefined8 param_1,int param_2)

{
  FUN_1462eef3a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e196 FUN_14725e196 body=354 status=ok
// SIG undefined FUN_14725e196(void)

void FUN_14725e196(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca170f8;
  if (DAT_14ca170f8 != 0) {
    LOCK();
    *(int *)(DAT_14ca170f8 + 8) = *(int *)(DAT_14ca170f8 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca170b0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a299990;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725e2fa FUN_14725e2fa body=38 status=ok
// SIG undefined FUN_14725e2fa(void)

undefined8 FUN_14725e2fa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e320 FUN_14725e320 body=29 status=ok
// SIG undefined FUN_14725e320(void)

undefined8 FUN_14725e320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e33e FUN_14725e33e body=29 status=ok
// SIG undefined FUN_14725e33e(void)

undefined8 FUN_14725e33e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e35c FUN_14725e35c body=258 status=ok
// SIG undefined FUN_14725e35c(void)

void FUN_14725e35c(void)

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
              0x110) < DAT_14ca18e98) {
    FUN_144b3d300(&DAT_14ca18e98);
    if (DAT_14ca18e98 == -1) {
      FUN_14725e460(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDummyDepthDecompressParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18e18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2ec32);
      _Init_thread_footer(&DAT_14ca18e98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725e460 FUN_14725e460 body=226 status=ok
// SIG undefined FUN_14725e460(void)

longlong * FUN_14725e460(longlong *param_1)

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
  pcVar13 = FUN_14725e544;
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



// FUNCTION 14725e544 FUN_14725e544 body=130 status=ok
// SIG undefined FUN_14725e544(void)

undefined1 * FUN_14725e544(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14725e5c6;
}



// FUNCTION 14725e5ca FUN_14725e5ca body=29 status=ok
// SIG undefined FUN_14725e5ca(void)

undefined8 FUN_14725e5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e5e8 FUN_14725e5e8 body=384 status=ok
// SIG undefined FUN_14725e5e8(void)

void FUN_14725e5e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17538;
  if (DAT_14ca17538 != 0) {
    LOCK();
    *(int *)(DAT_14ca17538 + 8) = *(int *)(DAT_14ca17538 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca174f0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a299a30;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725e76a FUN_14725e76a body=38 status=ok
// SIG undefined FUN_14725e76a(void)

undefined8 FUN_14725e76a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725e790 FUN_14725e790 body=163 status=ok
// SIG undefined FUN_14725e790(void)

void FUN_14725e790(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e2ee20();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e2ef08(param_1,param_2);
  return;
}



// FUNCTION 14725e833 FUN_14725e833 body=374 status=ok
// SIG undefined FUN_14725e833(void)

void FUN_14725e833(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14725e9aa FUN_14725e9aa body=38 status=ok
// SIG undefined FUN_14725e9aa(void)

undefined8 FUN_14725e9aa(undefined8 param_1,int param_2)

{
  FUN_1462eef82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ea04 FUN_14725ea04 body=38 status=ok
// SIG undefined FUN_14725ea04(void)

undefined8 FUN_14725ea04(undefined8 param_1,int param_2)

{
  FUN_1462eefca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ea5e FUN_14725ea5e body=38 status=ok
// SIG undefined FUN_14725ea5e(void)

undefined8 FUN_14725ea5e(undefined8 param_1,int param_2)

{
  FUN_1462ef012();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725eab8 FUN_14725eab8 body=38 status=ok
// SIG undefined FUN_14725eab8(void)

undefined8 FUN_14725eab8(undefined8 param_1,int param_2)

{
  FUN_1462ef05a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725eb12 FUN_14725eb12 body=38 status=ok
// SIG undefined FUN_14725eb12(void)

undefined8 FUN_14725eb12(undefined8 param_1,int param_2)

{
  FUN_1462ef0a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725eb3e FUN_14725eb3e body=38 status=ok
// SIG undefined FUN_14725eb3e(void)

undefined8 FUN_14725eb3e(undefined8 param_1,int param_2)

{
  FUN_1462ef0ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725eb98 FUN_14725eb98 body=38 status=ok
// SIG undefined FUN_14725eb98(void)

undefined8 FUN_14725eb98(undefined8 param_1,int param_2)

{
  FUN_1462ef132();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ebc4 FUN_14725ebc4 body=38 status=ok
// SIG undefined FUN_14725ebc4(void)

undefined8 FUN_14725ebc4(undefined8 param_1,int param_2)

{
  FUN_1462ef17a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ebf0 FUN_14725ebf0 body=38 status=ok
// SIG undefined FUN_14725ebf0(void)

undefined8 FUN_14725ebf0(undefined8 param_1,int param_2)

{
  FUN_1462ef1c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ec1c FUN_14725ec1c body=38 status=ok
// SIG undefined FUN_14725ec1c(void)

undefined8 FUN_14725ec1c(undefined8 param_1,int param_2)

{
  FUN_1462ef20a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ec48 FUN_14725ec48 body=38 status=ok
// SIG undefined FUN_14725ec48(void)

undefined8 FUN_14725ec48(undefined8 param_1,int param_2)

{
  FUN_1462ef252();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ec74 FUN_14725ec74 body=38 status=ok
// SIG undefined FUN_14725ec74(void)

undefined8 FUN_14725ec74(undefined8 param_1,int param_2)

{
  FUN_1462ef29a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725eca0 FUN_14725eca0 body=38 status=ok
// SIG undefined FUN_14725eca0(void)

undefined8 FUN_14725eca0(undefined8 param_1,int param_2)

{
  FUN_145b2120c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ecc6 FUN_14725ecc6 body=69 status=ok
// SIG undefined FUN_14725ecc6(void)

undefined8 * FUN_14725ecc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a299f60;
  FUN_1414c31c2(param_1 + 5);
  FUN_1414c31c2(param_1 + 2);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725ed0b FUN_14725ed0b body=554 status=ok
// SIG undefined FUN_14725ed0b(void)

void FUN_14725ed0b(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar8 = &local_348;
    do {
      puVar2 = (uint *)*plVar8;
      puVar9 = (uint *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 2);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_14725edcc:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_14725ee42;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                uVar5 = *puVar13;
                bVar16 = uVar12 < uVar5;
                if (uVar12 <= uVar5) {
                  uVar12 = uVar5;
                }
                if (bVar16) {
                  puVar7 = puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_14725ef14;
      }
LAB_14725ef29:
      FUN_14725ef36(puVar2);
LAB_14725ef14:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14725ee42:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_14725ef14;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_14725ef14;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 2);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_14725ef29;
  goto LAB_14725edcc;
}



// FUNCTION 14725ef36 FUN_14725ef36 body=279 status=ok
// SIG undefined FUN_14725ef36(void)

void FUN_14725ef36(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x00014725ef57:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((uint)param_1[iVar6] <= (uint)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar1 = param_1[iVar3];
        if (uVar1 < (uint)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar3 = iVar6;
          goto joined_r0x00014725ef57;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((uint)param_1[iVar6] <= (uint)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar1 = param_1[iVar8];
            if ((uint)param_1[iVar7] <= uVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 14725f04e FUN_14725f04e body=29 status=ok
// SIG undefined FUN_14725f04e(void)

undefined8 FUN_14725f04e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725f06c FUN_14725f06c body=384 status=ok
// SIG undefined FUN_14725f06c(void)

void FUN_14725f06c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca176d0;
  if (DAT_14ca176d0 != 0) {
    LOCK();
    *(int *)(DAT_14ca176d0 + 8) = *(int *)(DAT_14ca176d0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17688;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a299fa0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725f1ee FUN_14725f1ee body=38 status=ok
// SIG undefined FUN_14725f1ee(void)

undefined8 FUN_14725f1ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725f214 FUN_14725f214 body=163 status=ok
// SIG undefined FUN_14725f214(void)

void FUN_14725f214(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e34178();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e34260(param_1,param_2);
  return;
}



// FUNCTION 14725f2b7 FUN_14725f2b7 body=374 status=ok
// SIG undefined FUN_14725f2b7(void)

void FUN_14725f2b7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14725f42e FUN_14725f42e body=384 status=ok
// SIG undefined FUN_14725f42e(void)

void FUN_14725f42e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17ca8;
  if (DAT_14ca17ca8 != 0) {
    LOCK();
    *(int *)(DAT_14ca17ca8 + 8) = *(int *)(DAT_14ca17ca8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17c60;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a29a020;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725f5b0 FUN_14725f5b0 body=38 status=ok
// SIG undefined FUN_14725f5b0(void)

undefined8 FUN_14725f5b0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725f5d6 FUN_14725f5d6 body=163 status=ok
// SIG undefined FUN_14725f5d6(void)

void FUN_14725f5d6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e35b56();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e35922(param_1,param_2);
  return;
}



// FUNCTION 14725f67a FUN_14725f67a body=29 status=ok
// SIG undefined FUN_14725f67a(void)

undefined8 FUN_14725f67a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725f698 FUN_14725f698 body=384 status=ok
// SIG undefined FUN_14725f698(void)

void FUN_14725f698(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17c20;
  if (DAT_14ca17c20 != 0) {
    LOCK();
    *(int *)(DAT_14ca17c20 + 8) = *(int *)(DAT_14ca17c20 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17bd8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a29a040;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725f81a FUN_14725f81a body=38 status=ok
// SIG undefined FUN_14725f81a(void)

undefined8 FUN_14725f81a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725f840 FUN_14725f840 body=163 status=ok
// SIG undefined FUN_14725f840(void)

void FUN_14725f840(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e36002();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e360ea(param_1,param_2);
  return;
}



// FUNCTION 14725f8e3 FUN_14725f8e3 body=374 status=ok
// SIG undefined FUN_14725f8e3(void)

void FUN_14725f8e3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14725fa5a FUN_14725fa5a body=75 status=ok
// SIG undefined FUN_14725fa5a(void)

void FUN_14725fa5a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x7fffffffffffe00U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_14017f4ac();
      return;
    }
  }
  return;
}



// FUNCTION 14725faa6 FUN_14725faa6 body=135 status=ok
// SIG undefined FUN_14725faa6(void)

longlong * FUN_14725faa6(longlong param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_1460ae02c();
  lVar9 = FUN_144b1d0c2(*(undefined8 *)(param_1 + 0x28),&DAT_14ca16338,
                        (uint)bVar1 + (uint)bVar2 * 2 +
                        ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                         (uint)bVar8 << 5 | (uint)bVar3) * 4);
  if (lVar9 == 0) {
    param_1 = 0;
  }
  *param_2 = lVar9;
  param_2[1] = param_1;
  return param_2;
}



// FUNCTION 14725fb2e FUN_14725fb2e body=85 status=ok
// SIG undefined FUN_14725fb2e(void)

void FUN_14725fb2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_140164c18();
  return;
}



// FUNCTION 14725fb84 FUN_14725fb84 body=122 status=ok
// SIG undefined FUN_14725fb84(void)

void FUN_14725fb84(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
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



// FUNCTION 14725fbfe FUN_14725fbfe body=132 status=ok
// SIG undefined FUN_14725fbfe(void)

void FUN_14725fbfe(longlong param_1,int param_2)

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



// FUNCTION 14725fc83 FUN_14725fc83 body=28 status=ok
// SIG undefined FUN_14725fc83(void)

void FUN_14725fc83(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x70);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14725fca0 thunk_FUN_142e3bf18 body=5 status=ok
// SIG undefined thunk_FUN_142e3bf18(void)

void thunk_FUN_142e3bf18(void)

{
  FUN_142e3bf18();
  return;
}



// FUNCTION 14725fca6 FUN_14725fca6 body=86 status=ok
// SIG undefined FUN_14725fca6(void)

undefined8 * FUN_14725fca6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14a29a160;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 14725fcfc FUN_14725fcfc body=5 status=ok
// SIG undefined FUN_14725fcfc(void)

longlong FUN_14725fcfc(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14725fd02 FUN_14725fd02 body=29 status=ok
// SIG undefined FUN_14725fd02(void)

void FUN_14725fd02(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14725fd20 FUN_14725fd20 body=29 status=ok
// SIG undefined FUN_14725fd20(void)

undefined8 FUN_14725fd20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14725fd3e FUN_14725fd3e body=175 status=ok
// SIG undefined FUN_14725fd3e(void)

void FUN_14725fd3e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14725fdee(param_1,iVar1);
    }
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x88 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0xffffffff;
      *(undefined1 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      puVar2 = puVar2 + 0x22;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_14725fe86(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_14725fef8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14725fdee FUN_14725fdee body=150 status=ok
// SIG undefined FUN_14725fdee(void)

void FUN_14725fdee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14725fe86 FUN_14725fe86 body=113 status=ok
// SIG undefined FUN_14725fe86(void)

void FUN_14725fe86(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x88 + *param_1);
  FUN_14725fc83(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x88 + (longlong)_Dst),(longlong)iVar2 * 0x88);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14725fef8 FUN_14725fef8 body=63 status=ok
// SIG undefined FUN_14725fef8(void)

void FUN_14725fef8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14725ff38(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 14725ff38 FUN_14725ff38 body=123 status=ok
// SIG undefined FUN_14725ff38(void)

ulonglong FUN_14725ff38(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x88) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
      uVar1 = uVar1 / 0x88;
    }
  }
  return uVar1;
}



// FUNCTION 14725ffb3 FUN_14725ffb3 body=414 status=ok
// SIG undefined FUN_14725ffb3(void)

void FUN_14725ffb3(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca18560) {
    FUN_144b3d300(&DAT_14ca18560);
    if (DAT_14ca18560 == -1) {
      FUN_1415909ac(local_48);
      local_50 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_90 = 0;
      uStack_88 = 0;
      local_98 = L"FRasterizePassParameters";
      local_58 = 0;
      local_70 = 0x120;
      local_78 = 0x5c0;
      local_68 = local_48;
      FUN_140b49562(&DAT_14ca184e0,0,1);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2772f);
      _Init_thread_footer(&DAT_14ca18560);
    }
  }
  if ((byte)((*(byte *)(*param_2 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c(param_1,*param_2,&DAT_14ca184e0,param_3);
  }
  else {
    FUN_1446fe2ba();
  }
  lVar1 = *param_2;
  uVar2 = *param_5;
  FUN_144ab89ca(lVar1,param_1,param_4,param_4 + 0x18);
  local_98 = *(wchar_t **)(*(longlong *)(param_4 + 8) + 0x40);
  FUN_14303dd62(lVar1,param_1,uVar2,param_6);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147260152 FUN_147260152 body=41 status=ok
// SIG undefined FUN_147260152(void)

void FUN_147260152(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x188);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-0x50] == '\x01') {
        pcVar1[-0x50] = '\0';
      }
      pcVar1 = pcVar1 + 0x1a0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14726017c thunk_FUN_14726020c body=5 status=ok
// SIG undefined thunk_FUN_14726020c(void)

void thunk_FUN_14726020c(void)

{
  FUN_14726020c();
  return;
}



// FUNCTION 147260182 FUN_147260182 body=71 status=ok
// SIG undefined FUN_147260182(void)

void FUN_147260182(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a29a1c0;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1472601ca FUN_1472601ca body=5 status=ok
// SIG undefined FUN_1472601ca(void)

longlong FUN_1472601ca(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1472601d0 FUN_1472601d0 body=29 status=ok
// SIG undefined FUN_1472601d0(void)

void FUN_1472601d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1472601ee FUN_1472601ee body=29 status=ok
// SIG undefined FUN_1472601ee(void)

undefined8 FUN_1472601ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726020c FUN_14726020c body=1182 status=ok
// SIG undefined FUN_14726020c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14726020c(longlong *param_1,longlong param_2)

{
  undefined4 *_Dst;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(local_c8 + 0x58);
  *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)param_1[1];
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(*(longlong *)(param_1[2] + 0xd8) + 0x10);
  puVar9 = (undefined8 *)param_1[3];
  *(undefined8 *)(param_2 + 0x20) = *puVar9;
  *(undefined8 *)(param_2 + 0x28) = puVar9[1];
  *(uint *)(param_2 + 0x48) = (uint)(*(char *)param_1[4] == '\x01') << 2;
  local_d0 = (longlong *)(param_2 + 0x60);
  FUN_1472606ac(local_d0,*(undefined4 *)(*(longlong *)(local_c8 + 0x58) + 0x10));
  auVar5 = _DAT_149931e80;
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    puVar17 = *(undefined4 **)(param_2 + 0x60);
    uVar7 = (longlong)*(int *)(param_2 + 0x68) * 0x1a0 - 0x1a0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar7;
    uVar19 = SUB164(auVar22 * ZEXT816(0x4ec4ec4ec4ec4ec5),8);
    uVar21 = (undefined4)(uVar7 / 0x340000000);
    auVar23._0_8_ = CONCAT44(uVar21,uVar19);
    auVar23._8_4_ = uVar19;
    auVar23._12_4_ = uVar21;
    auVar20._0_8_ = auVar23._0_8_ >> 7;
    auVar20._8_8_ = auVar23._8_8_ >> 7;
    uVar8 = 0;
    auVar22 = pmovsxbq(in_XMM1,0x302);
    auVar23 = pmovsxbq(in_XMM2,0x100);
    auVar20 = auVar20 | _DAT_149931e80;
    lVar18 = auVar20._0_8_;
    do {
      lVar16 = auVar20._8_8_;
      if ((bool)(~(lVar18 < (longlong)(uVar8 ^ auVar5._0_8_)) & 1)) {
        *puVar17 = 0xffffffff;
      }
      auVar24._8_4_ = (int)uVar8;
      auVar24._0_8_ = uVar8;
      auVar24._12_4_ = (int)(uVar8 >> 0x20);
      if ((longlong)((auVar24._8_8_ | auVar23._8_8_) ^ auVar5._8_8_) <= lVar16) {
        puVar17[0x68] = 0xffffffff;
      }
      auVar24 = (auVar24 | auVar22) ^ auVar5;
      if (auVar24._0_8_ <= lVar18) {
        puVar17[0xd0] = 0xffffffff;
      }
      if (auVar24._8_8_ <= lVar16) {
        puVar17[0x138] = 0xffffffff;
      }
      uVar8 = uVar8 + 4;
      puVar17 = puVar17 + 0x1a0;
    } while ((uVar7 / 0x1a0 + 4 & 0xfffffffffffffffc) != uVar8);
  }
  puVar9 = (undefined8 *)FUN_144821ef4(param_1[5]);
  cVar6 = DAT_14ca84f62;
  uVar2 = *puVar9;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c0 = uVar2;
  if (DAT_14ca84f62 == '\x01') {
    lVar18 = param_1[2];
    FUN_145c7735c();
    local_68 = (longlong)DAT_14ca1851c;
    local_78 = &local_c0;
    local_70 = lVar18;
    FUN_143236328(&DAT_14ca184e0,0);
    *(undefined8 *)(param_2 + 0x50) = local_88;
    *(undefined4 *)(param_2 + 0x58) = local_80;
  }
  lVar18 = (longlong)(int)((longlong *)param_1[6])[1];
  if (lVar18 != 0) {
    local_d8 = *(longlong *)param_1[6];
    lVar16 = 0;
    do {
      lVar3 = *(longlong *)(local_c8 + 0x30);
      lVar10 = (longlong)*(int *)(local_d8 + lVar16) * 0xc0;
      lVar12 = param_1[2];
      *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(lVar3 + 0xb8 + lVar10);
      *(undefined8 *)(lVar12 + 0x54) = 0;
      *(undefined4 *)(lVar12 + 0x5c) = 0;
      iVar1 = *(int *)(lVar3 + 0xb8 + lVar10);
      lVar4 = *local_d0;
      lVar15 = (longlong)iVar1 * 0x1a0;
      *(int *)(lVar4 + lVar15) = iVar1;
      uVar13 = *(undefined8 *)(param_1[2] + 0x58);
      puVar9 = (undefined8 *)(lVar4 + 400 + lVar15);
      *puVar9 = *(undefined8 *)(param_1[2] + 0x50);
      puVar9[1] = uVar13;
      lVar12 = lVar3 + lVar10;
      puVar11 = &DAT_14ca16b40;
      if ((*(byte *)(lVar3 + 0x68 + lVar10) & 1) == 0) {
        puVar11 = &DAT_14ca16b10;
      }
      *(undefined8 *)(param_1[7] + 0x38) = *(undefined8 *)(puVar11 + 0x10);
      FUN_142e3ecd4(param_1[8],lVar12);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)param_1[9]);
        local_f8 = 0;
        FUN_14365edea(param_1[7],0,*(undefined8 *)(lVar12 + 0x50),&DAT_14cb00c58);
      }
      puVar17 = (undefined4 *)(lVar4 + lVar15);
      local_e8 = *(undefined8 *)(lVar12 + 0x78);
      local_e0 = *(undefined8 *)(lVar12 + 0x90);
      local_f0 = param_1[10];
      if ((byte)(*(char *)param_1[4] - 2U) < 3) {
        local_f8 = CONCAT71(local_f8._1_7_,cVar6);
        FUN_147260726(puVar17 + 0x3c,uVar2,lVar12 + 0x20);
      }
      else {
        local_f8 = CONCAT71(local_f8._1_7_,cVar6);
        FUN_1472607d9(puVar17 + 0x3c,uVar2,lVar12 + 0x10,param_1[2]);
      }
      local_e8 = *(undefined8 *)(lVar12 + 0x80);
      local_e0 = *(undefined8 *)(lVar12 + 0x98);
      local_f0 = param_1[10];
      local_f8 = CONCAT71(local_f8._1_7_,cVar6);
      FUN_14726088e(puVar17 + 0x50,uVar2,lVar12,param_1[2]);
      _Dst = puVar17 + 6;
      memcpy(_Dst,(void *)param_1[7],0xd8);
      lVar12 = FUN_147405136(_Dst,1);
      *(longlong *)(puVar17 + 2) = lVar12;
      if (lVar12 == 0) {
        bVar14 = DAT_14c760d84 != 0 & DAT_14ca84f5a;
        uVar13 = thunk_FUN_140028f18(param_1[5],_Dst,
                                     CONCAT71((int7)((ulonglong)lVar15 >> 8),bVar14) & 0xffffffff);
        *(undefined8 *)(puVar17 + 2) = uVar13;
        if (bVar14 == 0) {
          *puVar17 = 0xffffffff;
        }
      }
      lVar16 = lVar16 + 4;
    } while (lVar18 * 4 != lVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472606ac FUN_1472606ac body=121 status=ok
// SIG undefined FUN_1472606ac(void)

void FUN_1472606ac(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472609c4(param_1,iVar1);
    }
    FUN_147260941((longlong)iVar1 * 0x1a0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147260a58(param_1,param_2,iVar1 - param_2);
    FUN_147260aba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147260726 FUN_147260726 body=179 status=ok
// SIG undefined FUN_147260726(void)

void FUN_147260726(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_5 == '\0') {
    FUN_145c7735c();
    FUN_147260b66(param_1,param_3,param_4);
  }
  uVar1 = *param_3;
  FUN_144ab89ca(uVar1,param_1,param_6,param_6 + 0x18);
  FUN_14303dd62(uVar1,param_1,param_7,param_8,*(undefined8 *)(*(longlong *)(param_6 + 8) + 0x40));
  return;
}



// FUNCTION 1472607d9 FUN_1472607d9 body=181 status=ok
// SIG undefined FUN_1472607d9(void)

void FUN_1472607d9(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_5 == '\0') {
    FUN_145c7735c();
    FUN_147260b8a(param_1,param_3,param_4);
  }
  uVar1 = *param_3;
  FUN_144ab89ca(uVar1,param_1,param_6,param_6 + 0x18);
  FUN_14303dd62(uVar1,param_1,param_7,param_8,*(undefined8 *)(*(longlong *)(param_6 + 8) + 0x40));
  return;
}



// FUNCTION 14726088e FUN_14726088e body=179 status=ok
// SIG undefined FUN_14726088e(void)

void FUN_14726088e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_5 == '\0') {
    FUN_145c7735c();
    FUN_147260bae(param_1,param_3,param_4);
  }
  uVar1 = *param_3;
  FUN_144ab89ca(uVar1,param_1,param_6,param_6 + 0x18);
  FUN_14303dd62(uVar1,param_1,param_7,param_8,*(undefined8 *)(*(longlong *)(param_6 + 8) + 0x40));
  return;
}



// FUNCTION 147260941 FUN_147260941 body=130 status=ok
// SIG undefined FUN_147260941(void)

void FUN_147260941(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1d) = 0;
    *(undefined8 *)(param_1 + 0x1f) = 0;
    *(undefined8 *)(param_1 + 0x21) = 0;
    *(undefined8 *)(param_1 + 0x23) = 0;
    *(undefined8 *)(param_1 + 0x25) = 0;
    *(undefined8 *)(param_1 + 0x27) = 0;
    *(undefined8 *)(param_1 + 0x29) = 0;
    *(undefined8 *)(param_1 + 0x2b) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    param_1[0x38] = 1;
    *(undefined8 *)(param_1 + 0x3a) = 0;
    *(undefined1 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1472609c4 FUN_1472609c4 body=146 status=ok
// SIG undefined FUN_1472609c4(void)

void FUN_1472609c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1a0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a0)) {
      uVar5 = uVar4 / 0x1a0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147260a58 FUN_147260a58 body=98 status=ok
// SIG undefined FUN_147260a58(void)

void FUN_147260a58(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1a0 + *param_1);
  FUN_147260152(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1a0 + (longlong)_Dst),(longlong)iVar2 * 0x1a0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147260aba FUN_147260aba body=62 status=ok
// SIG undefined FUN_147260aba(void)

void FUN_147260aba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147260af8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1a0,8);
  }
  return;
}



// FUNCTION 147260af8 FUN_147260af8 body=110 status=ok
// SIG undefined FUN_147260af8(void)

ulonglong FUN_147260af8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1a0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147260b31;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1a0,8);
      param_2 = param_2 / 0x1a0;
    }
  }
LAB_147260b31:
  return param_2 & 0xffffffff;
}



// FUNCTION 147260b66 FUN_147260b66 body=36 status=ok
// SIG undefined FUN_147260b66(void)

void FUN_147260b66(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)DAT_14ca1851c;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = DAT_14ca1851c;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147260b8a FUN_147260b8a body=36 status=ok
// SIG undefined FUN_147260b8a(void)

void FUN_147260b8a(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)DAT_14ca1851c;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = DAT_14ca1851c;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147260bae FUN_147260bae body=36 status=ok
// SIG undefined FUN_147260bae(void)

void FUN_147260bae(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  void *_Dst_00;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong _Size;
  undefined1 auStack_a8 [46];
  undefined2 uStack_7a;
  undefined2 uStack_78;
  ushort uStack_76;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_2 = (undefined8 *)*param_2;
  if ((byte)((*(byte *)(param_2 + 0x1a) & 0xe) - 6) < 4) {
    FUN_143236b9c();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = (ulonglong)DAT_14ca1851c;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = DAT_14ca1851c;
    lStack_70 = param_3;
    do {
      uVar2 = puVar11[2];
      uStack_76 = puVar11[3];
      _Size = (ulonglong)uStack_76;
      uStack_7a = *puVar11;
      uStack_78 = puVar11[1];
      uVar3 = *(uint *)(param_1 + 2);
      uStack_68 = (ulonglong)uVar3;
      iVar12 = uVar3 + uStack_76;
      lVar5 = *param_1;
      puVar1 = (ulonglong *)(lVar5 + 0x10);
      _Dst_00 = *(void **)(lVar5 + 0x10);
      uVar6 = *(ulonglong *)(lVar5 + 0x18);
      uVar13 = (longlong)_Dst_00 + _Size;
      if (uVar3 == 0) {
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,uStack_76 + 1);
          _Dst_00 = (void *)*puVar1;
          uVar13 = (longlong)_Dst_00 + _Size;
        }
        *puVar1 = uVar13;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar13) {
        uVar13 = (longlong)_Dst_00 + (longlong)iVar12;
        _Dst = _Dst_00;
        if (uVar6 < uVar13) {
          FUN_140023dd8(puVar1,iVar12 + 1);
          _Dst = (void *)*puVar1;
          uVar13 = (longlong)iVar12 + (longlong)_Dst;
        }
        *puVar1 = uVar13;
        memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
        _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)param_1[1];
        *puVar1 = uVar13;
      }
      param_3 = lStack_70;
      memcpy(_Dst_00,(void *)((ulonglong)uVar2 + lStack_70),_Size);
      param_1[1] = (longlong)_Dst;
      *(int *)(param_1 + 2) = iVar12;
      lVar10 = *param_1;
      puVar1 = (ulonglong *)(lVar10 + 0x38);
      lVar5 = (longlong)(int)param_1[4] + 1;
      puVar7 = *(undefined8 **)(lVar10 + 0x38);
      if ((longlong)(int)param_1[4] == 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar9 = puVar7 + 1;
        puVar8 = puVar7;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar9) {
          FUN_140023dd8(puVar1,10);
          puVar7 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar9 = puVar7 + 1;
          puVar8 = puVar7;
        }
LAB_1446fe406:
        *puVar1 = (ulonglong)puVar9;
        uVar13 = (ulonglong)uStack_74;
      }
      else {
        puVar9 = puVar7 + 1;
        if (puVar9 <= *(undefined8 **)(lVar10 + 0x40)) {
          puVar8 = (undefined8 *)param_1[3];
          goto LAB_1446fe406;
        }
        puVar8 = (undefined8 *)((longlong)puVar7 + 1U & 0xfffffffffffffffe);
        puVar7 = puVar8 + lVar5;
        if (*(undefined8 **)(lVar10 + 0x40) < puVar7) {
          FUN_140023dd8(puVar1);
          puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
          puVar7 = puVar8 + lVar5;
        }
        *puVar1 = (ulonglong)puVar7;
        param_3 = lStack_70;
        puVar7 = puVar8;
        if ((int)param_1[4] < 1) {
          uVar13 = (ulonglong)uStack_74;
        }
        else {
          lVar10 = 0;
          uVar13 = (ulonglong)uStack_74;
          do {
            *puVar7 = *(undefined8 *)(param_1[3] + lVar10 * 8);
            lVar10 = lVar10 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar10 < (int)param_1[4]);
        }
      }
      *(undefined2 *)puVar7 = uStack_7a;
      *(undefined2 *)((longlong)puVar7 + 2) = uStack_78;
      *(short *)((longlong)puVar7 + 4) = (short)uStack_68;
      *(ushort *)((longlong)puVar7 + 6) = uStack_76;
      param_1[3] = (longlong)puVar8;
      *(int *)(param_1 + 4) = (int)lVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 != puStack_60);
  }
  uStack_50 = (undefined4)uVar13;
  lStack_58 = param_3;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147260bd2 FUN_147260bd2 body=295 status=ok
// SIG undefined FUN_147260bd2(void)

void FUN_147260bd2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147260cf9(lVar11,param_2,param_4,param_5,param_6,param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147260cf9 FUN_147260cf9 body=130 status=ok
// SIG undefined FUN_147260cf9(void)

void FUN_147260cf9(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_145c7735c();
  FUN_147260b8a(param_1,param_2,param_3);
  uVar1 = *param_2;
  uVar2 = *param_5;
  FUN_144ab89ca(uVar1,param_1,param_4,param_4 + 0x18);
  FUN_14303dd62(uVar1,param_1,uVar2,param_6,*(undefined8 *)(*(longlong *)(param_4 + 8) + 0x40));
  return;
}



// FUNCTION 147260d7b FUN_147260d7b body=161 status=ok
// SIG undefined FUN_147260d7b(void)

void FUN_147260d7b(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_144a91d42();
  FUN_142e3fd2b(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142e3fcda(param_1,param_2);
  return;
}



// FUNCTION 147260e1c FUN_147260e1c body=374 status=ok
// SIG undefined FUN_147260e1c(void)

void FUN_147260e1c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147260f92 FUN_147260f92 body=152 status=ok
// SIG undefined FUN_147260f92(void)

void FUN_147260f92(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e40114();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e401f9(param_1,param_2);
  return;
}



// FUNCTION 14726102a FUN_14726102a body=374 status=ok
// SIG undefined FUN_14726102a(void)

void FUN_14726102a(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472611a0 FUN_1472611a0 body=85 status=ok
// SIG undefined FUN_1472611a0(void)

void FUN_1472611a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((0x3fff < (ulonglong)((longlong)(iVar2 - iVar1) * 0x390)) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1400dd044(param_1,iVar1,iVar1,0x390);
      return;
    }
  }
  return;
}



// FUNCTION 1472611f6 FUN_1472611f6 body=108 status=ok
// SIG undefined FUN_1472611f6(void)

undefined4 * FUN_1472611f6(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e58a0e();
  FUN_145e58a0e();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca152e0,0);
  FUN_145e58a0e();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147261263 FUN_147261263 body=177 status=ok
// SIG undefined FUN_147261263(void)

void FUN_147261263(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e58c7c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca17df8,param_4);
  local_78 = &DAT_14ca17df8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147261454(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147261316 FUN_147261316 body=108 status=ok
// SIG undefined FUN_147261316(void)

undefined4 * FUN_147261316(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e584a4();
  FUN_145e584a4();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca151b8,0);
  FUN_145e584a4();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147261383 FUN_147261383 body=177 status=ok
// SIG undefined FUN_147261383(void)

void FUN_147261383(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e58712();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca17d70,param_4);
  local_78 = &DAT_14ca17d70;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147261834(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147261436 FUN_147261436 body=29 status=ok
// SIG undefined FUN_147261436(void)

undefined8 FUN_147261436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147261454 FUN_147261454 body=384 status=ok
// SIG undefined FUN_147261454(void)

void FUN_147261454(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17e40;
  if (DAT_14ca17e40 != 0) {
    LOCK();
    *(int *)(DAT_14ca17e40 + 8) = *(int *)(DAT_14ca17e40 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17df8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a29a430;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472615d6 FUN_1472615d6 body=38 status=ok
// SIG undefined FUN_1472615d6(void)

undefined8 FUN_1472615d6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472615fc FUN_1472615fc body=163 status=ok
// SIG undefined FUN_1472615fc(void)

void FUN_1472615fc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e41848();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e41930(param_1,param_2);
  return;
}



// FUNCTION 14726169f FUN_14726169f body=374 status=ok
// SIG undefined FUN_14726169f(void)

void FUN_14726169f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147261816 FUN_147261816 body=29 status=ok
// SIG undefined FUN_147261816(void)

undefined8 FUN_147261816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147261834 FUN_147261834 body=384 status=ok
// SIG undefined FUN_147261834(void)

void FUN_147261834(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca17db8;
  if (DAT_14ca17db8 != 0) {
    LOCK();
    *(int *)(DAT_14ca17db8 + 8) = *(int *)(DAT_14ca17db8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca17d70;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a29a450;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472619b6 FUN_1472619b6 body=38 status=ok
// SIG undefined FUN_1472619b6(void)

undefined8 FUN_1472619b6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472619dc FUN_1472619dc body=163 status=ok
// SIG undefined FUN_1472619dc(void)

void FUN_1472619dc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e41b64();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e41c4c(param_1,param_2);
  return;
}



// FUNCTION 147261a7f FUN_147261a7f body=374 status=ok
// SIG undefined FUN_147261a7f(void)

void FUN_147261a7f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147261bf6 FUN_147261bf6 body=29 status=ok
// SIG undefined FUN_147261bf6(void)

undefined8 FUN_147261bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147261c14 FUN_147261c14 body=384 status=ok
// SIG undefined FUN_147261c14(void)

void FUN_147261c14(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca185c8;
  if (DAT_14ca185c8 != 0) {
    LOCK();
    *(int *)(DAT_14ca185c8 + 8) = *(int *)(DAT_14ca185c8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca18580;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a29a480;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147261d96 FUN_147261d96 body=38 status=ok
// SIG undefined FUN_147261d96(void)

undefined8 FUN_147261d96(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147261dbc FUN_147261dbc body=163 status=ok
// SIG undefined FUN_147261dbc(void)

void FUN_147261dbc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e41ea0();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142e41f88(param_1,param_2);
  return;
}



// FUNCTION 147261e5f FUN_147261e5f body=374 status=ok
// SIG undefined FUN_147261e5f(void)

void FUN_147261e5f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147261fd6 FUN_147261fd6 body=29 status=ok
// SIG undefined FUN_147261fd6(void)

undefined8 FUN_147261fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147261ff3 FUN_147261ff3 body=309 status=ok
// SIG undefined FUN_147261ff3(void)

void FUN_147261ff3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f51716();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14ca18608,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145f51716();
  FUN_14726212a(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14726212a FUN_14726212a body=258 status=ok
// SIG undefined FUN_14726212a(void)

void FUN_14726212a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_14726222c(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 14726222c FUN_14726222c body=229 status=ok
// SIG undefined FUN_14726222c(void)

undefined8 *
FUN_14726222c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca18650;
  if (DAT_14ca18650 != 0) {
    LOCK();
    *(int *)(DAT_14ca18650 + 8) = *(int *)(DAT_14ca18650 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca18608;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a29a4a0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147262312 FUN_147262312 body=88 status=ok
// SIG undefined FUN_147262312(void)

undefined8 * FUN_147262312(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a4a0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726236a FUN_14726236a body=90 status=ok
// SIG undefined FUN_14726236a(void)

void FUN_14726236a(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_1472623c4(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1472623c4 FUN_1472623c4 body=161 status=ok
// SIG undefined FUN_1472623c4(void)

void FUN_1472623c4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f51716();
  FUN_142e421ee(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142e4219d(param_1,param_2);
  return;
}



// FUNCTION 147262465 FUN_147262465 body=374 status=ok
// SIG undefined FUN_147262465(void)

void FUN_147262465(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472625dc FUN_1472625dc body=106 status=ok
// SIG undefined FUN_1472625dc(void)

undefined8 * FUN_1472625dc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a4c0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 147262646 FUN_147262646 body=106 status=ok
// SIG undefined FUN_147262646(void)

undefined8 * FUN_147262646(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a4e0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1472626b0 FUN_1472626b0 body=106 status=ok
// SIG undefined FUN_1472626b0(void)

undefined8 * FUN_1472626b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a500;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 14726271a FUN_14726271a body=106 status=ok
// SIG undefined FUN_14726271a(void)

undefined8 * FUN_14726271a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a580;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 147262784 FUN_147262784 body=106 status=ok
// SIG undefined FUN_147262784(void)

undefined8 * FUN_147262784(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a5a0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1472627ee FUN_1472627ee body=106 status=ok
// SIG undefined FUN_1472627ee(void)

undefined8 * FUN_1472627ee(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a29a5c0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 147262858 FUN_147262858 body=72 status=ok
// SIG undefined FUN_147262858(void)

void FUN_147262858(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14726b05a();
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
      FUN_14726b0e0();
      return;
    }
  }
  return;
}



// FUNCTION 1472628a2 FUN_1472628a2 body=42 status=ok
// SIG undefined FUN_1472628a2(void)

void FUN_1472628a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472628d4 FUN_1472628d4 body=96 status=ok
// SIG undefined FUN_1472628d4(void)

undefined8 FUN_1472628d4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7278e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b2a8,1);
  return uVar3;
}



// FUNCTION 147262934 FUN_147262934 body=52 status=ok
// SIG undefined FUN_147262934(void)

void FUN_147262934(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147262968 FUN_147262968 body=42 status=ok
// SIG undefined FUN_147262968(void)

void FUN_147262968(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14726299a FUN_14726299a body=96 status=ok
// SIG undefined FUN_14726299a(void)

undefined8 FUN_14726299a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7481e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b330,1);
  return uVar3;
}



// FUNCTION 1472629fa FUN_1472629fa body=52 status=ok
// SIG undefined FUN_1472629fa(void)

void FUN_1472629fa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147262a2e FUN_147262a2e body=646 status=ok
// SIG undefined FUN_147262a2e(void)

void FUN_147262a2e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = param_2;
  cVar2 = FUN_144a7ebcb();
  if ((cVar2 != '\0') && (DAT_14caff4f8 != '\0')) {
    plVar1 = *(longlong **)(param_2 + 8);
    local_64 = 0xffffffff;
    local_68 = 0xffffffff;
    local_6c = 0xffffffff;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_64);
    local_a8 = 0xffffffff;
    piVar3 = (int *)FUN_14726b53a(param_1 + 0x10,local_64,&local_64);
    if ((longlong)*piVar3 == -1) {
      (**(code **)(*plVar1 + 0x240))(plVar1,&local_a8);
      puVar4 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      puVar4[0x14] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x8c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x94) = 0;
      *(undefined4 *)(puVar4 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0xac) = 0;
      *(undefined4 *)(puVar4 + 0x16) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0xb4) = 0xffffffff;
      *(undefined1 *)(puVar4 + 0x17) = 0;
      *(undefined4 *)(puVar4 + 10) = local_64;
      *(undefined4 *)((longlong)puVar4 + 0x54) = local_68;
      *(undefined4 *)(puVar4 + 0xb) = local_98;
      *(undefined4 *)((longlong)puVar4 + 0x5c) = local_94;
      *(undefined4 *)(puVar4 + 0xc) = local_90;
      *(undefined4 *)((longlong)puVar4 + 100) = local_8c;
      *(undefined4 *)(puVar4 + 0xd) = local_88;
      *(undefined4 *)((longlong)puVar4 + 0x6c) = local_84;
      _Src = (void *)CONCAT44(uStack_a4,local_a8);
      *(int *)(puVar4 + 0x11) = local_a0;
      if ((longlong)local_a0 != 0) {
        FUN_1447bda9e(puVar4 + 0x10,local_a0,0);
        memcpy((void *)puVar4[0x10],_Src,(longlong)local_a0 << 2);
      }
      *(undefined4 *)(puVar4 + 0x13) = local_74;
      puVar4[0x12] = local_7c;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x74) = local_80;
      *(undefined4 *)(puVar4 + 0xf) = 0xffffffff;
      FUN_14726b72a(param_1 + 0x60,local_58);
      *local_50 = puVar4;
      *piVar3 = local_58[0];
      if (*(int *)((longlong)puVar4 + 0x74) != 0) {
        FUN_144980568(param_1 + 0x98,local_58,piVar3,0);
      }
      if (CONCAT44(uStack_a4,local_a8) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar3 * 8);
    }
    FUN_14492737e(puVar4,&local_a8,&local_60,0);
    FUN_144b016d0(param_1 + 0x138,*piVar3);
    *(int *)(plVar1 + 0x58) = *piVar3;
    *(undefined4 *)((longlong)plVar1 + 0x2c4) = *(undefined4 *)(puVar4 + 0x15);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147262cb6 FUN_147262cb6 body=158 status=ok
// SIG undefined FUN_147262cb6(void)

void FUN_147262cb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144b1ce18();
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_2 + 8);
    local_2c = *(int *)(lVar1 + 0x2c0);
    if ((longlong)local_2c != -1) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)local_2c * 8);
      FUN_144a42734(lVar2,param_2);
      if (*(int *)(lVar2 + 8) == *(int *)(lVar2 + 0x34)) {
        FUN_144980568(param_1 + 0x138,local_30,&local_2c,0);
      }
      *(undefined8 *)(lVar1 + 0x2c0) = 0xffffffffffffffff;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147262d56 FUN_147262d56 body=102 status=ok
// SIG undefined FUN_147262d56(void)

void FUN_147262d56(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *(int *)(*(longlong *)(param_2 + 8) + 0x2c0);
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)local_c * 8) + 0x78) =
       *(undefined4 *)(param_2 + 0x15c);
  FUN_144980568(param_1 + 0xe8,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147262dbe FUN_147262dbe body=96 status=ok
// SIG undefined FUN_147262dbe(void)

void FUN_147262dbe(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1);
  return;
}



// FUNCTION 147262e1e FUN_147262e1e body=122 status=ok
// SIG undefined FUN_147262e1e(void)

void FUN_147262e1e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1471b2628(param_1,iVar1);
    }
    FUN_14726b909((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14726b938(param_1,param_2,iVar1 - param_2);
    FUN_14726b99a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147262e9a FUN_147262e9a body=36 status=ok
// SIG undefined FUN_147262e9a(void)

undefined8 FUN_147262e9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x2c0);
  if (lVar1 != -1) {
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar1 * 8) + 0xa0);
  }
  return 0;
}



// FUNCTION 147262ebe FUN_147262ebe body=146 status=ok
// SIG undefined FUN_147262ebe(void)

undefined8 FUN_147262ebe(uint param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca19cd4) {
    FUN_144b3d300(&DAT_14ca19cd4);
    if (DAT_14ca19cd4 == -1) {
      DAT_14ca19cd0 = FUN_1406ae7de();
      _Init_thread_footer(&DAT_14ca19cd4);
    }
  }
  cVar1 = FUN_1414c39f7();
  if (((cVar1 == '\0') || (DAT_14ca19cd0 != '\x01')) || (DAT_14ca84f60 != '\x01')) {
    uVar4 = 0;
  }
  else {
    lVar2 = ((ulonglong)param_1 & 0xffff) * 0x3c;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814d8 + lVar2 + 3)) & 0xffffffffffffff08;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
  }
  return uVar4;
}



// FUNCTION 147262f50 FUN_147262f50 body=42 status=ok
// SIG undefined FUN_147262f50(void)

void FUN_147262f50(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147262fa2 FUN_147262fa2 body=39 status=ok
// SIG undefined FUN_147262fa2(void)

void FUN_147262fa2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147265e80(uVar1,param_1);
  return;
}



// FUNCTION 147262fca FUN_147262fca body=75 status=ok
// SIG undefined FUN_147262fca(void)

void * FUN_147262fca(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_147432e26(_Dst);
  *(undefined4 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined2 *)((longlong)_Dst + 0xe4) = 0;
  return _Dst;
}



// FUNCTION 147263016 FUN_147263016 body=42 status=ok
// SIG undefined FUN_147263016(void)

void FUN_147263016(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147263044 FUN_147263044 body=39 status=ok
// SIG undefined FUN_147263044(void)

void FUN_147263044(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_14726627a(uVar1,param_1);
  return;
}



// FUNCTION 14726306c FUN_14726306c body=77 status=ok
// SIG undefined FUN_14726306c(void)

void * FUN_14726306c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_147432e26(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined4 *)((longlong)_Dst + 0xe8) = 0;
  return _Dst;
}



// FUNCTION 1472630ba FUN_1472630ba body=42 status=ok
// SIG undefined FUN_1472630ba(void)

void FUN_1472630ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472630ec FUN_1472630ec body=96 status=ok
// SIG undefined FUN_1472630ec(void)

undefined8 FUN_1472630ec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157406c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b558,1);
  return uVar3;
}



// FUNCTION 14726314c FUN_14726314c body=52 status=ok
// SIG undefined FUN_14726314c(void)

void FUN_14726314c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263180 FUN_147263180 body=42 status=ok
// SIG undefined FUN_147263180(void)

void FUN_147263180(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472631b2 FUN_1472631b2 body=96 status=ok
// SIG undefined FUN_1472631b2(void)

undefined8 FUN_1472631b2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed4b28();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b5e0,1);
  return uVar3;
}



// FUNCTION 147263212 FUN_147263212 body=52 status=ok
// SIG undefined FUN_147263212(void)

void FUN_147263212(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263246 FUN_147263246 body=108 status=ok
// SIG undefined FUN_147263246(void)

undefined4 * FUN_147263246(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ed48ba();
  FUN_145ed48ba();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1a0b8,0);
  FUN_145ed48ba();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472632b3 FUN_1472632b3 body=177 status=ok
// SIG undefined FUN_1472632b3(void)

void FUN_1472632b3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ed4b28();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca1b5e0,param_4);
  local_78 = &DAT_14ca1b5e0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14726c52e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263366 FUN_147263366 body=108 status=ok
// SIG undefined FUN_147263366(void)

undefined4 * FUN_147263366(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14612bef0();
  FUN_14612bef0();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca19d40,0);
  FUN_14612bef0();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472633d4 FUN_1472633d4 body=164 status=ok
// SIG undefined FUN_1472633d4(void)

uint FUN_1472633d4(ulonglong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  undefined4 local_1c;
  ulonglong local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)((longlong)param_1 + 0x19);
  local_20 = (bVar1 & 8) << 5 |
             (uint)(byte)((bVar1 & 2) << 6 | (bVar1 & 4) << 4 | (byte)param_1[3] & 0x3f);
  local_1c = (undefined4)(*param_1 >> 4);
  local_18 = param_1[1];
  local_10 = param_1[2];
  uVar2 = FUN_1447addd0(&local_20,0x18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)(uVar2 >> 2) & 0x3fffffff) + (uint)uVar2 * 0x40 + (int)(uVar2 >> 0x20) +
           0x9e3779b9 ^ (uint)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14726347a FUN_14726347a body=410 status=ok
// SIG undefined FUN_14726347a(void)

void FUN_14726347a(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x120);
  }
  iVar2 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar2 != 0) {
    lVar10 = 0;
    do {
      bVar1 = *(byte *)(lVar9 + 8 + lVar10);
      uStack_78 = 0x3f00000040800000;
      uStack_70 = 0x3f80000040800000;
      bVar8 = uStack_68._1_1_ & 0xf0;
      FUN_14003fbd6();
      local_80 = (**(code **)(*DAT_14caea080 + 0x2f0))();
      uStack_68._0_2_ = CONCAT11(bVar1 >> 1 & 4 | bVar8,bVar1 * '\b' & 0x30 | bVar1 & 1);
      lVar6 = FUN_147263616(param_1 + 0x60,&local_80);
      *(undefined4 *)(lVar6 + 0x50) = (undefined4)local_80;
      *(undefined4 *)(lVar6 + 0x54) = local_80._4_4_;
      *(undefined4 *)(lVar6 + 0x58) = (undefined4)uStack_78;
      *(undefined4 *)(lVar6 + 0x5c) = uStack_78._4_4_;
      *(undefined4 *)(lVar6 + 0x60) = (undefined4)uStack_70;
      *(undefined4 *)(lVar6 + 100) = uStack_70._4_4_;
      *(undefined4 *)(lVar6 + 0x68) = uStack_68;
      *(undefined4 *)(lVar6 + 0x6c) = uStack_64;
      lVar10 = lVar10 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar10);
  }
  uVar3 = *(uint *)(param_1 + 0x68);
  uVar5 = 0;
  do {
    uVar11 = uVar5;
    if (uVar3 == uVar11) goto LAB_14726357d;
    uVar5 = uVar11 + 1;
  } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)uVar11 * 4)));
  uVar5 = uVar3;
  if (uVar3 + 1 != uVar11 + 1) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x60);
      lVar10 = (longlong)(int)uVar11 * 0x98;
      if (*(int *)(lVar9 + 0x28 + lVar10) != *(int *)(lVar9 + 0x54 + lVar10)) {
        lVar9 = lVar9 + lVar10 + 0x20;
        FUN_14726cd34(lVar9);
        FUN_14726ce7e(lVar9);
        uVar5 = *(uint *)(param_1 + 0x68);
      }
      uVar7 = uVar11 + 1;
      if (uVar11 + 1 < uVar5) {
        uVar7 = uVar5;
      }
      do {
        uVar4 = uVar7;
        if (uVar7 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar4 = uVar11;
      } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)uVar11 * 4)));
      uVar11 = uVar4;
    } while (uVar11 != uVar3);
  }
LAB_14726357d:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147263616 FUN_147263616 body=123 status=ok
// SIG undefined FUN_147263616(void)

longlong FUN_147263616(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1472633d4(param_2);
  FUN_14726cc52(param_1,&local_24,uVar1 & 0x7fffffff,param_2);
  if ((longlong)local_24 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)local_24 * 0x98 + *param_1 + 0x20;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263692 FUN_147263692 body=42 status=ok
// SIG undefined FUN_147263692(void)

void FUN_147263692(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472636c4 FUN_1472636c4 body=96 status=ok
// SIG undefined FUN_1472636c4(void)

undefined8 FUN_1472636c4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8b704();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b678,1);
  return uVar3;
}



// FUNCTION 147263724 FUN_147263724 body=52 status=ok
// SIG undefined FUN_147263724(void)

void FUN_147263724(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263758 FUN_147263758 body=138 status=ok
// SIG undefined FUN_147263758(void)

longlong * FUN_147263758(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_140504644(param_2);
      iVar3 = *(int *)(param_1 + 0x10);
      if ((longlong)iVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar9 = 0;
        do {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_140c60952(param_2,iVar4);
          }
          puVar1 = (undefined4 *)(lVar5 + lVar9);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          lVar9 = lVar9 + 0x20;
        } while ((longlong)iVar3 * 0x20 != lVar9);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1472637e4 FUN_1472637e4 body=108 status=ok
// SIG undefined FUN_1472637e4(void)

undefined4 * FUN_1472637e4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e8b496();
  FUN_145e8b496();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1a590,0);
  FUN_145e8b496();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263851 FUN_147263851 body=177 status=ok
// SIG undefined FUN_147263851(void)

void FUN_147263851(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e8b704();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca1b678,param_4);
  local_78 = &DAT_14ca1b678;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14726df5e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263904 FUN_147263904 body=42 status=ok
// SIG undefined FUN_147263904(void)

void FUN_147263904(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147263936 FUN_147263936 body=96 status=ok
// SIG undefined FUN_147263936(void)

undefined8 FUN_147263936(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e591e6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b700,1);
  return uVar3;
}



// FUNCTION 147263996 FUN_147263996 body=52 status=ok
// SIG undefined FUN_147263996(void)

void FUN_147263996(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472639ca FUN_1472639ca body=42 status=ok
// SIG undefined FUN_1472639ca(void)

void FUN_1472639ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472639fc FUN_1472639fc body=96 status=ok
// SIG undefined FUN_1472639fc(void)

undefined8 FUN_1472639fc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e59750();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b788,1);
  return uVar3;
}



// FUNCTION 147263a5c FUN_147263a5c body=52 status=ok
// SIG undefined FUN_147263a5c(void)

void FUN_147263a5c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263a90 FUN_147263a90 body=42 status=ok
// SIG undefined FUN_147263a90(void)

void FUN_147263a90(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147263ac2 FUN_147263ac2 body=96 status=ok
// SIG undefined FUN_147263ac2(void)

undefined8 FUN_147263ac2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f51d0c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b810,1);
  return uVar3;
}



// FUNCTION 147263b22 FUN_147263b22 body=52 status=ok
// SIG undefined FUN_147263b22(void)

void FUN_147263b22(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263b56 FUN_147263b56 body=42 status=ok
// SIG undefined FUN_147263b56(void)

void FUN_147263b56(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147263b88 FUN_147263b88 body=96 status=ok
// SIG undefined FUN_147263b88(void)

undefined8 FUN_147263b88(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f52302();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b920,1);
  return uVar3;
}



// FUNCTION 147263be8 FUN_147263be8 body=52 status=ok
// SIG undefined FUN_147263be8(void)

void FUN_147263be8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263c1c FUN_147263c1c body=42 status=ok
// SIG undefined FUN_147263c1c(void)

void FUN_147263c1c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147263c4e FUN_147263c4e body=96 status=ok
// SIG undefined FUN_147263c4e(void)

undefined8 FUN_147263c4e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f317f2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1b9a8,1);
  return uVar3;
}



// FUNCTION 147263cae FUN_147263cae body=52 status=ok
// SIG undefined FUN_147263cae(void)

void FUN_147263cae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263ce2 FUN_147263ce2 body=42 status=ok
// SIG undefined FUN_147263ce2(void)

void FUN_147263ce2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147263d14 FUN_147263d14 body=96 status=ok
// SIG undefined FUN_147263d14(void)

undefined8 FUN_147263d14(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8bc74();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1ba30,1);
  return uVar3;
}



// FUNCTION 147263d74 FUN_147263d74 body=52 status=ok
// SIG undefined FUN_147263d74(void)

void FUN_147263d74(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147263da8 FUN_147263da8 body=177 status=ok
// SIG undefined FUN_147263da8(void)

void FUN_147263da8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f52302();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca1b920,param_4);
  local_78 = &DAT_14ca1b920;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14726e394(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263e5a FUN_147263e5a body=108 status=ok
// SIG undefined FUN_147263e5a(void)

undefined4 * FUN_147263e5a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f31584();
  FUN_145f31584();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1abe8,0);
  FUN_145f31584();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263ec7 FUN_147263ec7 body=177 status=ok
// SIG undefined FUN_147263ec7(void)

void FUN_147263ec7(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f317f2();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca1b9a8,param_4);
  local_78 = &DAT_14ca1b9a8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14726e774(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263f7a FUN_147263f7a body=108 status=ok
// SIG undefined FUN_147263f7a(void)

undefined4 * FUN_147263f7a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e8ba06();
  FUN_145e8ba06();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1ad10,0);
  FUN_145e8ba06();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147263fe8 FUN_147263fe8 body=69 status=ok
// SIG undefined FUN_147263fe8(void)

bool FUN_147263fe8(longlong param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = true;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    uVar1 = *(uint *)(param_1 + 0xa0);
    uVar2 = ~(uint)param_2 + uVar1;
    if (param_2 <= uVar1 && uVar1 != param_2) {
      uVar2 = (uint)param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar2 >> 3 & 0x1ffc)) >> (uVar2 & 0x1f) & 1) != 0;
  }
  return bVar4;
}



// FUNCTION 14726402e FUN_14726402e body=321 status=ok
// SIG undefined FUN_14726402e(void)

longlong FUN_14726402e(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 local_6d;
  int local_6c;
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_50;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_2;
  if (DAT_14ca1ade0 == 0) {
    lVar3 = 0;
  }
  else {
    local_88 = local_68;
    local_68[0] = 0;
    local_58 = 0;
    local_50 = 0x100000000;
    local_40 = 0;
    local_38 = 0x100000000;
    local_30 = 0;
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_80 = &local_6d;
    FUN_14726fc2a(param_1 + 0x128,&local_6c,uVar2 & 0x7fffffff ^ uVar2 >> 0x10,&local_78);
    lVar1 = *(longlong *)(param_1 + 0x128);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + (longlong)local_6c * 0x48;
    lVar3 = lVar1 + 8;
    if (((*(longlong *)(param_2 + 8) != 0) && (DAT_14c761ae8 - 1U < 3)) &&
       ((*(byte *)(*(longlong *)(param_2 + 8) + 0x78) & 0x40) != 0)) {
      *(undefined1 *)(lVar1 + 0x40) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147264170 FUN_147264170 body=42 status=ok
// SIG undefined FUN_147264170(void)

void FUN_147264170(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472641a2 FUN_1472641a2 body=96 status=ok
// SIG undefined FUN_1472641a2(void)

undefined8 FUN_1472641a2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7fea2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1bab8,1);
  return uVar3;
}



// FUNCTION 147264202 FUN_147264202 body=52 status=ok
// SIG undefined FUN_147264202(void)

void FUN_147264202(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147264236 FUN_147264236 body=42 status=ok
// SIG undefined FUN_147264236(void)

void FUN_147264236(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147264268 FUN_147264268 body=96 status=ok
// SIG undefined FUN_147264268(void)

undefined8 FUN_147264268(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f74e1a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1bb40,1);
  return uVar3;
}



// FUNCTION 1472642c8 FUN_1472642c8 body=52 status=ok
// SIG undefined FUN_1472642c8(void)

void FUN_1472642c8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472642fc FUN_1472642fc body=42 status=ok
// SIG undefined FUN_1472642fc(void)

void FUN_1472642fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14726432e FUN_14726432e body=96 status=ok
// SIG undefined FUN_14726432e(void)

undefined8 FUN_14726432e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8c1e4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca1bbc8,1);
  return uVar3;
}



// FUNCTION 14726438e FUN_14726438e body=52 status=ok
// SIG undefined FUN_14726438e(void)

void FUN_14726438e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472643c2 FUN_1472643c2 body=4532 status=ok
// SIG undefined FUN_1472643c2(void)

void FUN_1472643c2(longlong param_1,undefined4 *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78 [2];
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caf1b90 == '\0') {
    FUN_145e7ba6a(&DAT_14caf1948);
  }
  if (DAT_14caf1998 != 0x1d) goto LAB_14726461a;
  switch(DAT_14ca1ae90) {
  case 0:
    pwVar7 = L"Domain [Triangle]";
    break;
  case 1:
    pwVar7 = L"Domain [Cluster]";
    break;
  case 2:
    pwVar7 = L"Domain [Instance]";
    break;
  case 3:
    pwVar7 = L"Domain [Primitive]";
    break;
  default:
    goto switchD_147264425_default;
  }
  local_4c = 0x3f800000;
  local_50 = DAT_14c758c60;
  local_58 = DAT_14c75905c;
  local_54 = local_58;
  FUN_140056680(local_78,pwVar7);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
switchD_147264425_default:
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Pixel [%d:%d]",*param_2,param_2[1]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  iVar2 = param_2[2];
  if (((longlong)iVar2 == -1) || (*(int *)(param_1 + 0x3538) <= iVar2)) goto LAB_14726461a;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x3530) + (longlong)iVar2 * 4);
  if (((longlong)iVar2 < 0) ||
     ((*(int *)(param_1 + 0x3360) <= iVar2 ||
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3358) + (longlong)iVar2 * 8),
      (*(byte *)(lVar3 + 0x74) & 8) == 0)))) goto LAB_14726461a;
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 0xe;
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  local_80 = lVar3;
  FUN_140002266(local_78,L"Persistent Index: %d",param_2[4]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Primitive Id: %d",iVar2);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Instance Id: %d",param_2[3]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  lVar3 = local_80;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
  lVar3 = FUN_144b26bec(lVar3,0);
  if (lVar3 != 0) {
    puVar5 = (undefined4 *)(lVar3 + 0x110);
    if ((*(byte *)(lVar3 + 0x11a) & 1) == 0) {
      puVar5 = (undefined4 *)(lVar3 + 0xd8);
    }
    uVar8 = *puVar5;
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Instance Count: %d",uVar8);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 0xe;
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Page Index: %d",param_2[7]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Group Index: %d",param_2[6]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Cluster Index: %d",param_2[5]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Triangle Index: %d",param_2[8]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Hierarchy Offset: %d",param_2[0x10]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Runtime Resource Id: %d",param_2[0x11]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 0xe;
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Raster Depth: %.6f",(double)(float)param_2[9]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2[10] == 2) {
    pwVar7 = L"Raster Mode: Software";
LAB_147264ce2:
    local_4c = 0x3f800000;
    local_50 = DAT_14c758c60;
    local_58 = DAT_14c75905c;
    local_54 = local_58;
    FUN_140002266(local_78,pwVar7);
    FUN_140233b1a(local_68,local_78);
    FUN_147d8f2b0(param_4,local_68,10,&local_58);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (param_2[10] == 1) {
    pwVar7 = L"Raster Mode: Hardware";
    goto LAB_147264ce2;
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Raster Bin: %d",param_2[0xb]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 0xe;
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Shading Bin: %d",param_2[0xc]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2[0xf] == 1) {
    pwVar7 = L"Material Mode: Slow";
LAB_147264ec2:
    local_4c = 0x3f800000;
    local_50 = DAT_14c758c60;
    local_58 = DAT_14c75905c;
    local_54 = local_58;
    FUN_140002266(local_78,pwVar7);
    FUN_140233b1a(local_68,local_78);
    FUN_147d8f2b0(param_4,local_68,10,&local_58);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (param_2[0xf] == 0) {
    pwVar7 = L"Material Mode: Fast";
    goto LAB_147264ec2;
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Material Index: %d",param_2[0xd]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  local_4c = 0x3f800000;
  FUN_140002266(local_78,L"Material Count: %d",param_2[0xe]);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  lVar3 = local_80;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_4 + 8) + 0xe;
  *(int *)(param_4 + 8) = iVar2;
  if (*(int *)(lVar3 + 0x2a0) <= (int)param_2[0xd]) goto LAB_14726461a;
  lVar6 = (longlong)(int)param_2[0xd] * 0x60;
  plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x298) + lVar6);
  if (*(longlong *)(*(longlong *)(lVar3 + 0x298) + 8 + lVar6) != 0) {
    local_58 = DAT_14c75905c;
    local_54 = DAT_14c75905c;
    local_50 = DAT_14c758c60;
    local_4c = 0x3f800000;
    if (*(int *)(plVar4[1] + 0xa0) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(plVar4[1] + 0x98);
    }
    FUN_140002266(local_78,L"Shading Material [%s]",puVar9);
    FUN_140233b1a(local_68,local_78);
    FUN_147d8f2b0(param_4,local_68,10,&local_58);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    iVar2 = *(int *)(param_4 + 8);
  }
  *(int *)(param_4 + 8) = iVar2 + 0xe;
  FUN_14003fbd6();
  lVar6 = (**(code **)(*DAT_14caea080 + 0x2f0))();
  if ((((param_3 & 1) == 0) && (*plVar4 != 0)) && (*plVar4 != lVar6)) {
    local_58 = DAT_14c75905c;
    local_54 = DAT_14c75905c;
    local_50 = DAT_14c758c60;
    local_4c = 0x3f800000;
    if (*(int *)(*plVar4 + 0xa0) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(*plVar4 + 0x98);
    }
    FUN_140002266(local_78,L"Raster Material [%s]",puVar9);
    FUN_140233b1a(local_68,local_78);
    FUN_147d8f2b0(param_4,local_68,10,&local_58);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    plVar4 = (longlong *)FUN_14485b2b4(*plVar4,*(undefined4 *)(param_1 + 8));
    local_58 = DAT_14c75905c;
    local_54 = DAT_14c75905c;
    local_50 = DAT_14c758c60;
    local_4c = 0x3f800000;
    FUN_140002266(local_78,L"  Programmable:");
    FUN_140233b1a(local_68,local_78);
    FUN_147d8f2b0(param_4,local_68,10,&local_58);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    lVar6 = plVar4[3];
    if (lVar6 != 0) {
      if ((*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x247) & 0x20) != 0) {
        local_58 = DAT_14c75905c;
        local_54 = DAT_14c75905c;
        local_50 = DAT_14c758c60;
        local_4c = 0x3f800000;
        FUN_140002266(local_78,L"  - Displacement Mapping");
        FUN_140233b1a(local_68,local_78);
        FUN_147d8f2b0(param_4,local_68,10,&local_58);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        lVar6 = plVar4[3];
        if (lVar6 == 0) goto LAB_14726532e;
      }
      if ((*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x246) & 0x10) != 0) {
        if ((*(byte *)(lVar3 + 0x75) & 4) == 0) {
          pwVar7 = L"  - World Position Offset [Disabled]";
        }
        else {
          pwVar7 = L"  - World Position Offset";
        }
        local_4c = 0x3f800000;
        local_50 = DAT_14c758c60;
        local_58 = DAT_14c75905c;
        local_54 = local_58;
        FUN_140002266(local_78,pwVar7);
        FUN_140233b1a(local_68,local_78);
        FUN_147d8f2b0(param_4,local_68,10,&local_58);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((plVar4[3] != 0) && ((*(byte *)(*(longlong *)(plVar4[3] + 0x28) + 0x246) & 0x40) != 0)) {
        local_58 = DAT_14c75905c;
        local_54 = DAT_14c75905c;
        local_50 = DAT_14c758c60;
        local_4c = 0x3f800000;
        FUN_140002266(local_78,L"   - Pixel Depth Offset");
        FUN_140233b1a(local_68,local_78);
        FUN_147d8f2b0(param_4,local_68,10,&local_58);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_14726532e:
    cVar1 = (**(code **)(*plVar4 + 600))(plVar4);
    if (cVar1 == '\0') goto LAB_14726461a;
    pwVar7 = L"   - Alpha Masking";
  }
  else {
    pwVar7 = L"Raster Material [Fixed Function]";
  }
  local_4c = 0x3f800000;
  local_58 = DAT_14c75905c;
  local_54 = DAT_14c75905c;
  local_50 = DAT_14c758c60;
  FUN_140002266(local_78,pwVar7);
  FUN_140233b1a(local_68,local_78);
  FUN_147d8f2b0(param_4,local_68,10,&local_58);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
LAB_14726461a:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


