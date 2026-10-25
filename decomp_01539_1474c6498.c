// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474c6498 FUN_1474c6498 body=418 status=ok
// SIG undefined FUN_1474c6498(void)

bool FUN_1474c6498(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa71c) {
    FUN_144b3d300(&DAT_14caaa71c);
    if (DAT_14caaa71c == -1) {
      DAT_14caaa710 = 0;
      DAT_14caaa718 = -1;
      _Init_thread_footer(&DAT_14caaa71c);
    }
  }
  if (DAT_14caaa718 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa728) {
      FUN_144b3d300(&DAT_14caaa728);
      if (DAT_14caaa728 == -1) {
        FUN_1446ddc76(&DAT_14caaa720,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaa728);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa720,param_1,DAT_14caaa198);
    DAT_14caaa710 = local_30;
    DAT_14caaa718 = local_28;
  }
  local_28 = DAT_14caaa718;
  local_30 = DAT_14caaa710;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c663c FUN_1474c663c body=418 status=ok
// SIG undefined FUN_1474c663c(void)

bool FUN_1474c663c(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa73c) {
    FUN_144b3d300(&DAT_14caaa73c);
    if (DAT_14caaa73c == -1) {
      DAT_14caaa730 = 0;
      DAT_14caaa738 = -1;
      _Init_thread_footer(&DAT_14caaa73c);
    }
  }
  if (DAT_14caaa738 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa748) {
      FUN_144b3d300(&DAT_14caaa748);
      if (DAT_14caaa748 == -1) {
        FUN_1446ddc76(&DAT_14caaa740,"bResetPlayTimeWhenBlendSpaceChanges",1);
        _Init_thread_footer(&DAT_14caaa748);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa740,param_1,DAT_14caaa198);
    DAT_14caaa730 = local_30;
    DAT_14caaa738 = local_28;
  }
  local_28 = DAT_14caaa738;
  local_30 = DAT_14caaa730;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c67e0 FUN_1474c67e0 body=49 status=ok
// SIG undefined FUN_1474c67e0(void)

undefined1 FUN_1474c67e0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x70) = param_2;
  return 1;
}



// FUNCTION 1474c6812 FUN_1474c6812 body=429 status=ok
// SIG undefined FUN_1474c6812(void)

bool FUN_1474c6812(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa7fc) {
    FUN_144b3d300(&DAT_14caaa7fc);
    if (DAT_14caaa7fc == -1) {
      DAT_14caaa7f0 = 0;
      DAT_14caaa7f8 = -1;
      _Init_thread_footer(&DAT_14caaa7fc);
    }
  }
  if (DAT_14caaa7f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa808) {
      FUN_144b3d300(&DAT_14caaa808);
      if (DAT_14caaa808 == -1) {
        FUN_1446ddc76(&DAT_14caaa800,"PlayRate",1);
        _Init_thread_footer(&DAT_14caaa808);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_40,DAT_14caaa800,param_1,DAT_14caaa198);
    DAT_14caaa7f0 = local_40;
    DAT_14caaa7f8 = local_38;
  }
  local_38 = DAT_14caaa7f8;
  local_40 = DAT_14caaa7f0;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c69c0 FUN_1474c69c0 body=418 status=ok
// SIG undefined FUN_1474c69c0(void)

bool FUN_1474c69c0(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa83c) {
    FUN_144b3d300(&DAT_14caaa83c);
    if (DAT_14caaa83c == -1) {
      DAT_14caaa830 = 0;
      DAT_14caaa838 = -1;
      _Init_thread_footer(&DAT_14caaa83c);
    }
  }
  if (DAT_14caaa838 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa848) {
      FUN_144b3d300(&DAT_14caaa848);
      if (DAT_14caaa848 == -1) {
        FUN_1446ddc76(&DAT_14caaa840,"bLoop",1);
        _Init_thread_footer(&DAT_14caaa848);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar2,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaa840,param_1,DAT_14caaa198);
    DAT_14caaa830 = local_30;
    DAT_14caaa838 = local_28;
  }
  local_28 = DAT_14caaa838;
  local_30 = DAT_14caaa830;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c6b7c FUN_1474c6b7c body=107 status=ok
// SIG undefined FUN_1474c6b7c(void)

void FUN_1474c6b7c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"CallFunction");
  FUN_147906d4c(param_2,local_30,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c6be8 FUN_1474c6be8 body=401 status=ok
// SIG undefined FUN_1474c6be8(void)

void FUN_1474c6be8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa89c) {
    FUN_144b3d300(&DAT_14caaa89c);
    if (DAT_14caaa89c == -1) {
      DAT_14caaa890 = 0;
      DAT_14caaa898 = -1;
      _Init_thread_footer(&DAT_14caaa89c);
    }
  }
  if (DAT_14caaa898 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa8a8) {
      FUN_144b3d300(&DAT_14caaa8a8);
      if (DAT_14caaa8a8 == -1) {
        FUN_1446ddc76(&DAT_14caaa8a0,"Function",1);
        _Init_thread_footer(&DAT_14caaa8a8);
      }
    }
    if (DAT_14caaa1e0 == 0) {
      uVar1 = FUN_140c6b56d();
      DAT_14caaa1e0 = FUN_140002ddd(FUN_146330bcf,uVar1,L"AnimNode_CallFunction");
    }
    FUN_14094e66e(&local_28,DAT_14caaa8a0,param_1,DAT_14caaa1e0);
    DAT_14caaa890 = local_28;
    DAT_14caaa898 = local_20;
  }
  local_20 = DAT_14caaa898;
  local_28 = DAT_14caaa890;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c6d7a FUN_1474c6d7a body=537 status=ok
// SIG undefined FUN_1474c6d7a(void)

void FUN_1474c6d7a(longlong param_1,longlong *param_2)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
  }
  sVar2 = *(short *)(param_1 + 0x30);
  if ((sVar2 == -1) || (*(longlong *)(param_1 + 0x28) == -1)) {
LAB_1474c6ddc:
    *(undefined4 *)(param_1 + 0x38) = 0;
    bVar4 = true;
    if (*(int *)(param_1 + 0x3c) == 2) {
      uVar7 = FUN_1474c6be8(param_1);
      FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
    }
  }
  else {
    if (sVar2 != *(short *)(*param_2 + 0x5e8)) {
      sVar5 = sVar2 + 2;
      if ((short)(sVar2 + 1) != -1) {
        sVar5 = sVar2 + 1;
      }
      if (((sVar5 != *(short *)(*param_2 + 0x5e8)) || (sVar5 == -1)) || (DAT_14c872be0 == -1))
      goto LAB_1474c6ddc;
    }
    bVar4 = false;
  }
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_1 + 0x38);
  if (((0.99999 <= fVar8) && (fVar1 < 0.99999)) && (*(int *)(param_1 + 0x3c) == 8)) {
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
    fVar8 = *(float *)(param_1 + 0x38);
  }
  if (((fVar8 <= 1e-05) && (1e-05 < fVar1)) && (*(int *)(param_1 + 0x3c) == 9)) {
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
    fVar8 = *(float *)(param_1 + 0x38);
  }
  if (((fVar8 < 0.99999) && (0.99999 <= fVar1)) && (*(int *)(param_1 + 0x3c) == 0xb)) {
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
  }
  FUN_14474897c(param_1 + 0x18,param_2);
  if (bVar4) {
    iVar6 = *(int *)(param_1 + 0x3c);
    if (iVar6 != 6) goto LAB_1474c6e85;
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
  }
  iVar6 = *(int *)(param_1 + 0x3c);
LAB_1474c6e85:
  if (iVar6 == 5) {
    uVar7 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar7,*(undefined8 *)(*param_2 + 0x130),0);
  }
  lVar3 = *param_2;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(lVar3 + 0x5e8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar3 + 0x5e0);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(lVar3 + 0x5ea);
  *(float *)(param_1 + 0x38) = fVar1;
  return;
}



// FUNCTION 1474c6f94 FUN_1474c6f94 body=109 status=ok
// SIG undefined FUN_1474c6f94(void)

void FUN_1474c6f94(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar1 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar1,*(undefined8 *)(*param_2 + 0x130),0);
  }
  FUN_1447139fe(param_1 + 0x18,param_2);
  if (*(int *)(param_1 + 0x3c) != 7) {
    return;
  }
  uVar1 = FUN_1474c6be8(param_1);
  FUN_140fbde72(uVar1,*(undefined8 *)(*param_2 + 0x130),0);
  return;
}



// FUNCTION 1474c7002 FUN_1474c7002 body=116 status=ok
// SIG undefined FUN_1474c7002(void)

void FUN_1474c7002(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = FUN_1474c6be8(param_1);
    FUN_140fbde72(uVar1,*(undefined8 *)(*param_2 + 0x130),0);
  }
  FUN_140320438(param_1 + 0x18,param_2);
  if (*(int *)(param_1 + 0x3c) != 4) {
    return;
  }
  uVar1 = FUN_1474c6be8(param_1);
  FUN_140fbde72(uVar1,*(undefined8 *)(*param_2 + 0x130),0);
  return;
}



// FUNCTION 1474c70aa FUN_1474c70aa body=353 status=ok
// SIG undefined FUN_1474c70aa(void)

void FUN_1474c70aa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474c720c(param_2,&local_38);
  cVar2 = FUN_144729dda(param_1 + 0x2c);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x2c);
    lVar4 = FUN_144a81888(uVar3);
    if (lVar4 != 0) {
      local_48 = *(longlong *)(lVar4 + 0x18);
      FUN_1400021e4(&local_48,&local_58);
      goto LAB_1474c7123;
    }
  }
  FUN_140056680(&local_58,&DAT_149e01fe8);
LAB_1474c7123:
  puVar5 = local_58;
  if (local_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_48,L"(\'%s\')",puVar5);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_68 = (void *)0x0;
  local_60 = local_30;
  if ((longlong)local_30 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_30,0);
    memcpy(local_68,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_68,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c720c FUN_1474c720c body=256 status=ok
// SIG undefined FUN_1474c720c(void)

undefined8 FUN_1474c720c(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa1f8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa1f8 = FUN_140002ddd(FUN_146330c65,uVar2,L"AnimNode_CopyPoseFromMesh");
  }
  local_48 = *(undefined8 *)(DAT_14caaa1f8 + 0x18);
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



// FUNCTION 1474c7314 FUN_1474c7314 body=662 status=ok
// SIG undefined FUN_1474c7314(void)

void FUN_1474c7314(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    uVar8 = FUN_1459e924a();
    FUN_144718840(lVar5,uVar8);
    FUN_14793ac0e(&local_a0,*(undefined8 *)(param_1 + 0x38));
    uVar8 = local_88;
    if (local_a0 == *(longlong **)(param_1 + 0x28)) goto LAB_1474c738f;
  }
  local_78 = &local_70;
  local_70 = 0;
  lVar5 = FUN_144b1fae4(param_2);
  uVar8 = local_88;
  if (lVar5 != 0) {
    lVar1 = param_1 + 0x38;
    param_1 = param_1 + 0x28;
    cVar3 = FUN_143284ab2(&local_78,lVar5,param_1,lVar1);
    uVar8 = local_88;
    if (cVar3 == '\0') {
      local_a0 = *(longlong **)(lVar5 + 0x10);
      if (local_a0 == (longlong *)0x0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)local_a0[10];
      }
      uStack_90 = 0xffffffff;
      uStack_8c = 0x101;
      uStack_8a = 0;
      FUN_14328982a(&local_a0);
      if (local_98 != (longlong *)0x0) {
        do {
          lVar6 = (**(code **)(*local_98 + 0x210))
                            (local_98,*(int *)((longlong)local_98 + 0x44) + lVar5);
          if (lVar6 == 0) {
LAB_1474c7443:
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_144a78d6a();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1474c7443;
          }
          cVar3 = FUN_143284ab2(&local_78,lVar6,param_1,lVar1);
          uVar8 = local_88;
          if (cVar3 != '\0') goto LAB_1474c738f;
          local_98 = (longlong *)local_98[3];
          FUN_14328982a(&local_a0);
        } while (local_98 != (longlong *)0x0);
      }
      plVar2 = (longlong *)(lVar5 + 0x240);
      lVar6 = lVar5 + 0x250;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      lStack_60 = lVar6;
      if (*(int *)(lVar5 + 0x268) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar9 = *(int *)(lVar5 + 0x268);
      }
      uStack_90 = (undefined4)lStack_60;
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar8 = local_88;
      local_98 = local_68;
      uStack_8c = (undefined2)((ulonglong)lStack_60 >> 0x20);
      uStack_8a = (undefined1)((ulonglong)lStack_60 >> 0x30);
      uStack_89 = (undefined1)((ulonglong)lStack_60 >> 0x38);
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_a0 = plVar2;
      if ((local_88._4_4_ != iVar9) || (lStack_60 != lVar6)) {
        iVar4 = local_88._4_4_;
        local_88 = uVar8;
        do {
          cVar3 = FUN_143284ab2(&local_78,*(undefined8 *)(*local_a0 + (longlong)iVar4 * 0x10),
                                param_1,lVar1);
          uVar8 = local_88;
          if (cVar3 != '\0') break;
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
          FUN_1449c0562(&local_98);
          iVar4 = local_88._4_4_;
          uVar8 = local_88;
        } while (local_a0 != plVar2 ||
                 (CONCAT17(uStack_89,CONCAT16(uStack_8a,CONCAT24(uStack_8c,uStack_90))) != lVar6 ||
                 local_88._4_4_ != iVar9));
      }
    }
  }
LAB_1474c738f:
  local_88 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c75ac FUN_1474c75ac body=384 status=ok
// SIG undefined FUN_1474c75ac(void)

void FUN_1474c75ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447139fe(param_1 + 0x18);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    uStack_80 = &local_64;
    local_88 = FUN_1474d98bc;
    lVar7 = FUN_144a773aa(&local_88,&DAT_14c760f80);
    plVar1 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    if (*(int *)(lVar7 + 0x1c) < 0) {
      FUN_1474d99ca(plVar1);
    }
    FUN_14793ad04(*(undefined8 *)(param_1 + 0x38),plVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    local_70 = 0;
    local_88 = (code *)0x0;
    uStack_80 = (undefined4 *)0x0;
    uVar8 = (ulonglong)*(uint *)(lVar7 + 0x18);
    local_78 = 0;
    if ((int)*(uint *)(lVar7 + 0x18) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    if (uVar8 != 0) {
      FUN_14480ffb8(&local_88,uVar8);
      lVar7 = 0;
      do {
        uVar5 = (ulonglong)uStack_80;
        uVar3 = *(undefined4 *)(*plVar1 + 8 + lVar7);
        uVar4 = *(undefined8 *)(*plVar1 + lVar7);
        lVar9 = (longlong)(int)uStack_80;
        uVar6 = (int)uStack_80 + 1;
        uStack_80 = (undefined4 *)CONCAT44(uStack_80._4_4_,uVar6);
        if (uStack_80._4_4_ < uVar6) {
          FUN_1406de67a(&local_88,uVar5 & 0xffffffff);
        }
        lVar9 = lVar9 * 0x10;
        *(undefined8 *)(local_88 + lVar9) = uVar4;
        *(undefined4 *)(local_88 + lVar9 + 8) = uVar3;
        local_88[lVar9 + 0xc] = (code)0x0;
        lVar7 = lVar7 + 0xc;
      } while (uVar8 * 0xc != lVar7);
    }
    local_64 = uVar2;
    FUN_1474d9c66(param_2 + 0x38,&local_88);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c772e FUN_1474c772e body=91 status=ok
// SIG undefined FUN_1474c772e(void)

void FUN_1474c772e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  fVar2 = *(float *)(param_1 + 0x30);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    fVar2 = 1.0 - fVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  FUN_14474897c(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 1474c77ac FUN_1474c77ac body=104 status=ok
// SIG undefined FUN_1474c77ac(void)

void FUN_1474c77ac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1474c7816();
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c7816 FUN_1474c7816 body=141 status=ok
// SIG undefined FUN_1474c7816(void)

void FUN_1474c7816(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1474d4e1a(param_2,&local_38,param_1);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(local_28,L"Non Overriden GatherDebugData! (%s)",puVar1);
  FUN_147906d4c(param_2,local_28,0);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c78bc FUN_1474c78bc body=404 status=ok
// SIG undefined FUN_1474c78bc(void)

void FUN_1474c78bc(longlong param_1,undefined8 param_2)

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
  FUN_1474c7a52(param_2,&local_60);
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
      uVar4 = FUN_147906f5e(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x60) + uVar6 * 4),
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



// FUNCTION 1474c7a52 FUN_1474c7a52 body=256 status=ok
// SIG undefined FUN_1474c7a52(void)

undefined8 FUN_1474c7a52(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa240 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa240 = FUN_140002ddd(FUN_146330de3,uVar2,L"AnimNode_LayeredBoneBlend");
  }
  local_48 = *(undefined8 *)(DAT_14caaa240 + 0x18);
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



// FUNCTION 1474c7b60 FUN_1474c7b60 body=392 status=ok
// SIG undefined FUN_1474c7b60(void)

void FUN_1474c7b60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  wchar_t *pwVar3;
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
  FUN_1474c7cea(param_2,&local_60);
  pwVar3 = L"false";
  if (*(char *)(param_1 + 0x38) != '\0') {
    pwVar3 = L"true";
  }
  FUN_140002266(&local_70,L"(Mesh Space Additive: %s)",pwVar3);
  iVar1 = local_68 + -1;
  if (local_68 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_60,local_70,iVar1);
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
  uVar2 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x18,uVar2);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar2 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x28,uVar2);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c7cea FUN_1474c7cea body=256 status=ok
// SIG undefined FUN_1474c7cea(void)

undefined8 FUN_1474c7cea(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa258 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa258 = FUN_140002ddd(FUN_146330e79,uVar2,L"AnimNode_MakeDynamicAdditive");
  }
  local_48 = *(undefined8 *)(DAT_14caaa258 + 0x18);
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



// FUNCTION 1474c7e4c FUN_1474c7e4c body=167 status=ok
// SIG undefined FUN_1474c7e4c(void)

void FUN_1474c7e4c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467e96f6(local_40);
  FUN_1446ddc76(&local_30,"Evaluate",1);
  FUN_14790683a(param_1,local_30,local_40);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c7ef4 FUN_1474c7ef4 body=281 status=ok
// SIG undefined FUN_1474c7ef4(void)

void FUN_1474c7ef4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  wchar_t *pwVar2;
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
  FUN_1474c800e(param_2,&local_40);
  pwVar2 = L"false";
  if (*(char *)(param_1 + 0x28) != '\0') {
    pwVar2 = L"true";
  }
  FUN_140002266(&local_50,L"(Mirrored: %s)",pwVar2);
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



// FUNCTION 1474c800e FUN_1474c800e body=256 status=ok
// SIG undefined FUN_1474c800e(void)

undefined8 FUN_1474c800e(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa270 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa270 = FUN_140002ddd(FUN_146330f0f,uVar2,L"AnimNode_MirrorBase");
  }
  local_48 = *(undefined8 *)(DAT_14caaa270 + 0x18);
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



// FUNCTION 1474c8110 FUN_1474c8110 body=454 status=ok
// SIG undefined FUN_1474c8110(void)

bool FUN_1474c8110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa8dc) {
    FUN_144b3d300(&DAT_14caaa8dc);
    if (DAT_14caaa8dc == -1) {
      DAT_14caaa8d0 = 0;
      DAT_14caaa8d8 = -1;
      _Init_thread_footer(&DAT_14caaa8dc);
    }
  }
  if (DAT_14caaa8d8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa8e8) {
      FUN_144b3d300(&DAT_14caaa8e8);
      if (DAT_14caaa8e8 == -1) {
        FUN_1446ddc76(&DAT_14caaa8e0,"MirrorDataTable",1);
        _Init_thread_footer(&DAT_14caaa8e8);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaa8e0,param_1,DAT_14caaa288);
    DAT_14caaa8d0 = local_30;
    DAT_14caaa8d8 = local_28;
  }
  local_28 = DAT_14caaa8d8;
  local_30 = DAT_14caaa8d0;
  plVar1 = (longlong *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (plVar1 != (longlong *)0x0) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *plVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c82d8 FUN_1474c82d8 body=405 status=ok
// SIG undefined FUN_1474c82d8(void)

void FUN_1474c82d8(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa91c) {
    FUN_144b3d300(&DAT_14caaa91c);
    if (DAT_14caaa91c == -1) {
      DAT_14caaa910 = 0;
      DAT_14caaa918 = -1;
      _Init_thread_footer(&DAT_14caaa91c);
    }
  }
  if (DAT_14caaa918 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa928) {
      FUN_144b3d300(&DAT_14caaa928);
      if (DAT_14caaa928 == -1) {
        FUN_1446ddc76(&DAT_14caaa920,"BlendTime",1);
        _Init_thread_footer(&DAT_14caaa928);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_28,DAT_14caaa920,param_1,DAT_14caaa288);
    DAT_14caaa910 = local_28;
    DAT_14caaa918 = local_20;
  }
  local_20 = DAT_14caaa918;
  local_28 = DAT_14caaa910;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*puVar1);
}



// FUNCTION 1474c846e FUN_1474c846e body=403 status=ok
// SIG undefined FUN_1474c846e(void)

undefined1 FUN_1474c846e(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa99c) {
    FUN_144b3d300(&DAT_14caaa99c);
    if (DAT_14caaa99c == -1) {
      DAT_14caaa990 = 0;
      DAT_14caaa998 = -1;
      _Init_thread_footer(&DAT_14caaa99c);
    }
  }
  if (DAT_14caaa998 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa9a8) {
      FUN_144b3d300(&DAT_14caaa9a8);
      if (DAT_14caaa9a8 == -1) {
        FUN_1446ddc76(&DAT_14caaa9a0,"bResetChild",1);
        _Init_thread_footer(&DAT_14caaa9a8);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_28,DAT_14caaa9a0,param_1,DAT_14caaa288);
    DAT_14caaa990 = local_28;
    DAT_14caaa998 = local_20;
  }
  local_20 = DAT_14caaa998;
  local_28 = DAT_14caaa990;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c8602 FUN_1474c8602 body=418 status=ok
// SIG undefined FUN_1474c8602(void)

bool FUN_1474c8602(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa9bc) {
    FUN_144b3d300(&DAT_14caaa9bc);
    if (DAT_14caaa9bc == -1) {
      DAT_14caaa9b0 = 0;
      DAT_14caaa9b8 = -1;
      _Init_thread_footer(&DAT_14caaa9bc);
    }
  }
  if (DAT_14caaa9b8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa9c8) {
      FUN_144b3d300(&DAT_14caaa9c8);
      if (DAT_14caaa9c8 == -1) {
        FUN_1446ddc76(&DAT_14caaa9c0,"bMirror",1);
        _Init_thread_footer(&DAT_14caaa9c8);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaa9c0,param_1,DAT_14caaa288);
    DAT_14caaa9b0 = local_30;
    DAT_14caaa9b8 = local_28;
  }
  local_28 = DAT_14caaa9b8;
  local_30 = DAT_14caaa9b0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c87a6 FUN_1474c87a6 body=429 status=ok
// SIG undefined FUN_1474c87a6(void)

bool FUN_1474c87a6(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa9dc) {
    FUN_144b3d300(&DAT_14caaa9dc);
    if (DAT_14caaa9dc == -1) {
      DAT_14caaa9d0 = 0;
      DAT_14caaa9d8 = -1;
      _Init_thread_footer(&DAT_14caaa9dc);
    }
  }
  if (DAT_14caaa9d8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa9e8) {
      FUN_144b3d300(&DAT_14caaa9e8);
      if (DAT_14caaa9e8 == -1) {
        FUN_1446ddc76(&DAT_14caaa9e0,"BlendTime",1);
        _Init_thread_footer(&DAT_14caaa9e8);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_40,DAT_14caaa9e0,param_1,DAT_14caaa288);
    DAT_14caaa9d0 = local_40;
    DAT_14caaa9d8 = local_38;
  }
  local_38 = DAT_14caaa9d8;
  local_40 = DAT_14caaa9d0;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c8954 FUN_1474c8954 body=418 status=ok
// SIG undefined FUN_1474c8954(void)

bool FUN_1474c8954(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa9fc) {
    FUN_144b3d300(&DAT_14caaa9fc);
    if (DAT_14caaa9fc == -1) {
      DAT_14caaa9f0 = 0;
      DAT_14caaa9f8 = -1;
      _Init_thread_footer(&DAT_14caaa9fc);
    }
  }
  if (DAT_14caaa9f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaa08) {
      FUN_144b3d300(&DAT_14caaaa08);
      if (DAT_14caaaa08 == -1) {
        FUN_1446ddc76(&DAT_14caaaa00,"bBoneMirroring",1);
        _Init_thread_footer(&DAT_14caaaa08);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaaa00,param_1,DAT_14caaa288);
    DAT_14caaa9f0 = local_30;
    DAT_14caaa9f8 = local_28;
  }
  local_28 = DAT_14caaa9f8;
  local_30 = DAT_14caaa9f0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c8af8 FUN_1474c8af8 body=418 status=ok
// SIG undefined FUN_1474c8af8(void)

bool FUN_1474c8af8(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaa1c) {
    FUN_144b3d300(&DAT_14caaaa1c);
    if (DAT_14caaaa1c == -1) {
      DAT_14caaaa10 = 0;
      DAT_14caaaa18 = -1;
      _Init_thread_footer(&DAT_14caaaa1c);
    }
  }
  if (DAT_14caaaa18 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaa28) {
      FUN_144b3d300(&DAT_14caaaa28);
      if (DAT_14caaaa28 == -1) {
        FUN_1446ddc76(&DAT_14caaaa20,"bCurveMirroring",1);
        _Init_thread_footer(&DAT_14caaaa28);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaaa20,param_1,DAT_14caaa288);
    DAT_14caaaa10 = local_30;
    DAT_14caaaa18 = local_28;
  }
  local_28 = DAT_14caaaa18;
  local_30 = DAT_14caaaa10;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c8c9c FUN_1474c8c9c body=418 status=ok
// SIG undefined FUN_1474c8c9c(void)

bool FUN_1474c8c9c(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaa3c) {
    FUN_144b3d300(&DAT_14caaaa3c);
    if (DAT_14caaaa3c == -1) {
      DAT_14caaaa30 = 0;
      DAT_14caaaa38 = -1;
      _Init_thread_footer(&DAT_14caaaa3c);
    }
  }
  if (DAT_14caaaa38 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaa48) {
      FUN_144b3d300(&DAT_14caaaa48);
      if (DAT_14caaaa48 == -1) {
        FUN_1446ddc76(&DAT_14caaaa40,"bAttributeMirroring",1);
        _Init_thread_footer(&DAT_14caaaa48);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaaa40,param_1,DAT_14caaa288);
    DAT_14caaaa30 = local_30;
    DAT_14caaaa38 = local_28;
  }
  local_28 = DAT_14caaaa38;
  local_30 = DAT_14caaaa30;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c8e40 FUN_1474c8e40 body=418 status=ok
// SIG undefined FUN_1474c8e40(void)

bool FUN_1474c8e40(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaa5c) {
    FUN_144b3d300(&DAT_14caaaa5c);
    if (DAT_14caaaa5c == -1) {
      DAT_14caaaa50 = 0;
      DAT_14caaaa58 = -1;
      _Init_thread_footer(&DAT_14caaaa5c);
    }
  }
  if (DAT_14caaaa58 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaa68) {
      FUN_144b3d300(&DAT_14caaaa68);
      if (DAT_14caaaa68 == -1) {
        FUN_1446ddc76(&DAT_14caaaa60,"bResetChild",1);
        _Init_thread_footer(&DAT_14caaaa68);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar2,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_30,DAT_14caaaa60,param_1,DAT_14caaa288);
    DAT_14caaaa50 = local_30;
    DAT_14caaaa58 = local_28;
  }
  local_28 = DAT_14caaaa58;
  local_30 = DAT_14caaaa50;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474c90d0 FUN_1474c90d0 body=88 status=ok
// SIG undefined FUN_1474c90d0(void)

void FUN_1474c90d0(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  if (*(char *)(param_1 + 0x124) == '\x03') {
    if (*(int *)(param_1 + 0x10c) < 0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      FUN_140507fc4(param_1 + 0x100,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1474c913c FUN_1474c913c body=2768 status=ok
// SIG undefined FUN_1474c913c(void)

void FUN_1474c913c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  char local_168;
  ulonglong local_160;
  longlong local_158;
  undefined8 uStack_150;
  char local_148;
  undefined8 local_140;
  undefined1 local_130 [88];
  undefined1 local_d8 [72];
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144ade07e(local_130,param_2,0);
  FUN_1447139fe(param_1 + 0x18,local_130);
  FUN_140341844(param_2);
  local_1b0 = param_2;
  if (*(char *)(param_1 + 0x124) == '\x03') {
    local_158 = 0;
    uStack_150 = 0;
    local_148 = '\0';
    local_140 = CONCAT71(local_140._1_7_,2);
    iVar9 = *(int *)(param_1 + 0x90);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    uVar10 = 0;
    if (iVar9 != 0) {
      FUN_1474da402(&local_158,iVar9);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x90);
      if (0 < (int)*(uint *)(param_1 + 0x90)) {
        lVar17 = 0;
        do {
          uVar10 = uStack_150;
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar17 * 8);
          lVar16 = (longlong)(int)(uint)uStack_150;
          uVar4 = (uint)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar4);
          if (uStack_150._4_4_ < uVar4) {
            FUN_1474d5ad8(&local_158,uVar10 & 0xffffffff);
          }
          *(undefined8 *)(local_158 + lVar16 * 0xc) = uVar2;
          *(undefined1 *)(local_158 + 8 + lVar16 * 0xc) = 2;
          local_148 = '\0';
          lVar17 = lVar17 + 1;
          uVar10 = (ulonglong)*(int *)(param_1 + 0x90);
          param_2 = local_1b0;
        } while (lVar17 < (longlong)uVar10);
      }
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x30)) {
      local_160 = local_160 & 0xffffffffffffff00;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = '\0';
      if ((int)uVar10 < 0) {
LAB_1474c9c06:
        local_168 = 0;
        uStack_170 = 0;
        local_178 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar10 & 0xffffffff);
      }
      if ((int)uVar10 != 0) {
        FUN_1474da402(&local_178);
      }
      plVar8 = (longlong *)(param_1 + 0x28);
      lVar17 = param_1 + 0x38;
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      iVar9 = 0;
      lStack_88 = lVar17;
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_1449c0562(&local_90);
        iVar9 = *(int *)(param_1 + 0x50);
      }
      local_188 = local_80;
      uVar2 = local_188;
      uStack_180 = CONCAT44(uStack_74,uStack_78);
      local_198 = local_90;
      lStack_190 = lStack_88;
      local_188._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iVar5 = local_188._4_4_;
      local_1a0 = plVar8;
      if ((local_188._4_4_ != iVar9) || (local_188 = uVar2, lStack_88 != lVar17)) {
        do {
          local_188 = uVar2;
          uVar10 = uStack_170;
          uVar2 = *(undefined8 *)(*local_1a0 + (longlong)iVar5 * 0x14);
          lVar16 = (longlong)(int)uStack_170;
          uVar4 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
          if (uStack_170._4_4_ < uVar4) {
            FUN_1474d5ad8(&local_178,uVar10 & 0xffffffff);
          }
          *(undefined8 *)(local_178 + lVar16 * 0xc) = uVar2;
          *(undefined1 *)(local_178 + 8 + lVar16 * 0xc) = 2;
          local_168 = '\0';
          local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
          FUN_1449c0562(&local_198);
          iVar5 = local_188._4_4_;
          uVar2 = local_188;
        } while (local_1a0 != plVar8 || (lStack_190 != lVar17 || local_188._4_4_ != iVar9));
      }
      iVar5 = (int)uStack_170;
      if ((int)uStack_170 != 0) {
        iVar3 = (uint)uStack_150;
        uVar10 = uStack_150 & 0xffffffff;
        if (local_148 == '\0') {
          FUN_146264839(local_158,uVar10);
          local_148 = '\x01';
        }
        if (local_168 == '\0') {
          FUN_146264839(local_178,uStack_170 & 0xffffffff);
          local_168 = '\x01';
        }
        iVar9 = iVar3;
        if (iVar3 < iVar5) {
          iVar9 = iVar5;
        }
        iVar9 = iVar9 / 2 + iVar9;
        if (iVar9 < 0) goto LAB_1474c9bef;
        if ((int)uStack_150._4_4_ < iVar9) {
          FUN_1474da402(&local_158);
        }
        iVar12 = 0;
        if (iVar3 != 0 || iVar5 < 1) {
          lVar17 = 0;
          uVar18 = 0;
          iVar12 = 0;
          do {
            if ((iVar12 == iVar5) && ((longlong)uVar18 <= (longlong)(int)uVar10))
            goto LAB_1474c9817;
            plVar8 = (longlong *)(local_178 + (longlong)iVar12 * 0xc);
            lVar16 = *plVar8;
            lVar1 = *(longlong *)(local_158 + lVar17);
            if (lVar1 == lVar16) {
              plVar7 = (longlong *)(local_158 + lVar17);
LAB_1474c9b91:
              *(char *)(plVar7 + 1) = (char)plVar8[1];
              iVar12 = iVar12 + 1;
            }
            else {
              iVar9 = (int)lVar1 - (int)lVar16;
              if (iVar9 == 0) {
                iVar9 = (int)((ulonglong)lVar1 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
              }
              if (-1 < iVar9) {
                plVar7 = (longlong *)FUN_1474da4b4(&local_158,uVar18 & 0xffffffff);
                uVar10 = uStack_150 & 0xffffffff;
                *plVar7 = *plVar8;
                goto LAB_1474c9b91;
              }
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0xc;
          } while (uVar18 != uVar10 || iVar5 <= iVar12);
        }
        iVar9 = (iVar5 - iVar12) + (uint)uStack_150;
        if (iVar9 < 0) goto LAB_1474c9bef;
        if ((int)uStack_150._4_4_ < iVar9) {
          FUN_1474da402(&local_158);
        }
        iVar9 = iVar5 - iVar12;
        if (iVar9 != 0 && iVar12 <= iVar5) {
          lVar17 = (longlong)iVar12 * 0xc + 8;
          do {
            lVar16 = local_178;
            puVar13 = (undefined8 *)FUN_1474da474(&local_158);
            *puVar13 = *(undefined8 *)(lVar16 + -8 + lVar17);
            *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(lVar16 + lVar17);
            lVar17 = lVar17 + 0xc;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
LAB_1474c9817:
      param_2 = local_1b0;
      if (local_178 != 0) {
        FUN_1400020a8();
        param_2 = local_1b0;
      }
    }
    local_1a8 = (longlong *)(param_1 + 0x100);
    FUN_1474c9c0e(local_1a8,&local_158);
    lVar17 = local_1b0;
    plVar8 = (longlong *)(param_2 + 0x38);
    uVar4 = *(uint *)(param_1 + 0x108);
    if (uVar4 != 0) {
      uVar11 = *(uint *)(local_1b0 + 0x40);
      if (*(char *)(local_1b0 + 0x48) == '\0') {
        FUN_144716af1(*(undefined8 *)(local_1b0 + 0x38),uVar11);
        *(undefined1 *)(lVar17 + 0x48) = 1;
      }
      if (*(char *)(param_1 + 0x110) == '\0') {
        FUN_140102786(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
        *(undefined1 *)(param_1 + 0x110) = 1;
      }
      uVar14 = uVar11;
      if ((int)uVar11 < (int)uVar4) {
        uVar14 = uVar4;
      }
      iVar9 = (int)uVar14 / 2 + uVar14;
      if (iVar9 < 0) {
LAB_1474c9bef:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (*(int *)(local_1b0 + 0x44) < iVar9) {
        FUN_14480ffb8(plVar8);
      }
      uVar14 = 0;
      if (uVar11 != 0 || (int)uVar4 < 1) {
        lVar17 = 0;
        uVar10 = 0;
        uVar14 = 0;
        do {
          if ((uVar14 == uVar4) && ((longlong)uVar10 <= (longlong)(int)uVar11)) goto LAB_1474c9964;
          puVar13 = (undefined8 *)(*local_1a8 + (longlong)(int)uVar14 * 0x10);
          lVar16 = *(longlong *)(*local_1a8 + (longlong)(int)uVar14 * 0x10);
          lVar1 = *(longlong *)(*plVar8 + lVar17);
          if (lVar1 == lVar16) {
            puVar6 = (undefined8 *)(*plVar8 + lVar17);
LAB_1474c99d2:
            fVar20 = *(float *)(param_1 + 0x128);
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            *(float *)(puVar6 + 1) =
                 fVar20 * *(float *)(puVar6 + 1) + (1.0 - fVar20) * *(float *)(puVar13 + 1);
            uVar14 = uVar14 + 1;
          }
          else {
            iVar9 = (int)lVar1 - (int)lVar16;
            if (iVar9 == 0) {
              iVar9 = (int)((ulonglong)lVar1 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
            }
            if (-1 < iVar9) {
              puVar6 = (undefined8 *)FUN_144a1cc74(plVar8,uVar10 & 0xffffffff);
              uVar11 = *(uint *)(local_1b0 + 0x40);
              *puVar6 = *puVar13;
              goto LAB_1474c99d2;
            }
          }
          uVar10 = uVar10 + 1;
          lVar17 = lVar17 + 0x10;
        } while (uVar10 != uVar11 || (int)uVar4 <= (int)uVar14);
      }
      iVar9 = (uVar4 - uVar14) + *(int *)(local_1b0 + 0x40);
      if (iVar9 < 0) goto LAB_1474c9bef;
      if (*(int *)(local_1b0 + 0x44) < iVar9) {
        FUN_14480ffb8(plVar8);
      }
      iVar9 = uVar4 - uVar14;
      if (iVar9 != 0 && (int)uVar14 <= (int)uVar4) {
        uVar10 = (longlong)(int)uVar14 << 4 | 8;
        do {
          lVar17 = *(longlong *)(param_1 + 0x100);
          puVar13 = (undefined8 *)FUN_14470c6b2(plVar8);
          *puVar13 = *(undefined8 *)(lVar17 + -8 + uVar10);
          fVar20 = *(float *)(param_1 + 0x128);
          if (1.0 <= fVar20) {
            fVar20 = 1.0;
          }
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          *(float *)(puVar13 + 1) =
               fVar20 * *(float *)(puVar13 + 1) + (1.0 - fVar20) * *(float *)(lVar17 + uVar10);
          uVar10 = uVar10 + 0x10;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
LAB_1474c9964:
    FUN_140101796(local_1a8,plVar8);
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = '\0';
    iVar9 = *(int *)(param_1 + 0x90);
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 == 0) {
      uVar10 = 0;
    }
    else {
      FUN_14480ffb8(&local_158);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x90);
      if (0 < (int)*(uint *)(param_1 + 0x90)) {
        lVar17 = 0;
        do {
          uVar10 = uStack_150;
          lVar16 = *(longlong *)(param_1 + 0x78);
          lVar1 = *(longlong *)(param_1 + 0x88);
          lVar15 = (longlong)(int)(uint)uStack_150;
          uVar4 = (uint)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar4);
          if (uStack_150._4_4_ < uVar4) {
            FUN_1406de67a(&local_158,uVar10 & 0xffffffff);
          }
          lVar15 = lVar15 * 0x10;
          uVar19 = *(undefined4 *)(lVar16 + lVar17 * 4);
          *(undefined8 *)(local_158 + lVar15) = *(undefined8 *)(lVar1 + lVar17 * 8);
          *(undefined4 *)(local_158 + 8 + lVar15) = uVar19;
          *(undefined1 *)(local_158 + 0xc + lVar15) = 0;
          local_148 = '\0';
          lVar17 = lVar17 + 1;
          uVar10 = (ulonglong)*(int *)(param_1 + 0x90);
        } while (lVar17 < (longlong)uVar10);
      }
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x30)) {
      local_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = '\0';
      if ((int)uVar10 < 0) goto LAB_1474c9c06;
      if ((int)uVar10 != 0) {
        FUN_14480ffb8(&local_178);
      }
      plVar8 = (longlong *)(param_1 + 0x28);
      lVar17 = param_1 + 0x38;
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      lStack_88 = lVar17;
      if (*(int *)(param_1 + 0x50) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        iVar9 = *(int *)(param_1 + 0x50);
      }
      uStack_180 = CONCAT44(uStack_74,uStack_78);
      local_188 = local_80;
      uVar2 = local_188;
      local_198 = local_90;
      lStack_190 = lStack_88;
      local_188._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iVar5 = local_188._4_4_;
      local_1a0 = plVar8;
      if ((local_188._4_4_ != iVar9) || (local_188 = uVar2, lStack_88 != lVar17)) {
        do {
          local_188 = uVar2;
          uVar10 = uStack_170;
          puVar13 = (undefined8 *)((longlong)iVar5 * 0x14 + *local_1a0);
          lVar16 = (longlong)(int)uStack_170;
          uVar4 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar4);
          if (uStack_170._4_4_ < uVar4) {
            FUN_1406de67a(&local_178,uVar10 & 0xffffffff);
          }
          lVar16 = lVar16 * 0x10;
          uVar19 = *(undefined4 *)(puVar13 + 1);
          *(undefined8 *)(local_178 + lVar16) = *puVar13;
          *(undefined4 *)(local_178 + 8 + lVar16) = uVar19;
          *(undefined1 *)(local_178 + 0xc + lVar16) = 0;
          local_168 = '\0';
          local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
          FUN_1449c0562(&local_198);
          iVar5 = local_188._4_4_;
          uVar2 = local_188;
        } while (local_1a0 != plVar8 || (lStack_190 != lVar17 || local_188._4_4_ != iVar9));
      }
      FUN_1449802a2(&local_158,&local_178);
    }
    lVar17 = local_1b0;
    uVar4 = (uint)uStack_150;
    if ((uint)uStack_150 != 0) {
      uVar11 = *(uint *)(local_1b0 + 0x40);
      if (*(char *)(local_1b0 + 0x48) == '\0') {
        FUN_144716af1(*(undefined8 *)(local_1b0 + 0x38),uVar11);
        *(undefined1 *)(lVar17 + 0x48) = 1;
      }
      if (local_148 == '\0') {
        FUN_144716af1(local_158,uStack_150 & 0xffffffff);
        local_148 = '\x01';
      }
      uVar14 = uVar11;
      if ((int)uVar11 < (int)uVar4) {
        uVar14 = uVar4;
      }
      iVar9 = (int)uVar14 / 2 + uVar14;
      if (-1 < iVar9) {
        local_1a8 = (longlong *)(lVar17 + 0x38);
        if (*(int *)(lVar17 + 0x44) < iVar9) {
          FUN_14480ffb8();
        }
        uVar14 = 0;
        plVar8 = local_1a8;
        if (uVar11 != 0 || (int)uVar4 < 1) {
          lVar17 = 0;
          uVar10 = 0;
          uVar14 = 0;
          do {
            if ((uVar14 == uVar4) && ((longlong)uVar10 <= (longlong)(int)uVar11))
            goto LAB_1474c94ed;
            puVar13 = (undefined8 *)(local_158 + (longlong)(int)uVar14 * 0x10);
            lVar16 = *(longlong *)(local_158 + (longlong)(int)uVar14 * 0x10);
            lVar1 = *(longlong *)(*plVar8 + lVar17);
            if (lVar1 == lVar16) {
              puVar6 = (undefined8 *)(*plVar8 + lVar17);
LAB_1474c95b4:
              uVar19 = FUN_1474c9e08(param_1,*(undefined4 *)(puVar6 + 1),
                                     *(undefined4 *)(puVar13 + 1));
              *(undefined4 *)(puVar6 + 1) = uVar19;
              uVar14 = uVar14 + 1;
              plVar8 = local_1a8;
            }
            else {
              iVar9 = (int)lVar1 - (int)lVar16;
              if (iVar9 == 0) {
                iVar9 = (int)((ulonglong)lVar1 >> 0x20) - (int)((ulonglong)lVar16 >> 0x20);
              }
              if (-1 < iVar9) {
                puVar6 = (undefined8 *)FUN_144a1cc74(plVar8,uVar10 & 0xffffffff);
                uVar11 = *(uint *)(local_1b0 + 0x40);
                *puVar6 = *puVar13;
                goto LAB_1474c95b4;
              }
            }
            uVar10 = uVar10 + 1;
            lVar17 = lVar17 + 0x10;
          } while (uVar10 != uVar11 || (int)uVar4 <= (int)uVar14);
        }
        iVar9 = (uVar4 - uVar14) + *(int *)(local_1b0 + 0x40);
        if (-1 < iVar9) {
          if (*(int *)(local_1b0 + 0x44) < iVar9) {
            FUN_14480ffb8();
            plVar8 = local_1a8;
          }
          iVar9 = uVar4 - uVar14;
          if (iVar9 != 0 && (int)uVar14 <= (int)uVar4) {
            uVar10 = (longlong)(int)uVar14 << 4 | 8;
            do {
              lVar17 = local_158;
              puVar13 = (undefined8 *)FUN_14470c6b2(plVar8);
              *puVar13 = *(undefined8 *)(lVar17 + -8 + uVar10);
              uVar19 = FUN_1474c9e08(param_1,*(undefined4 *)(puVar13 + 1),
                                     *(undefined4 *)(lVar17 + uVar10));
              *(undefined4 *)(puVar13 + 1) = uVar19;
              uVar10 = uVar10 + 0x10;
              iVar9 = iVar9 + -1;
              plVar8 = local_1a8;
            } while (iVar9 != 0);
          }
          goto LAB_1474c94ed;
        }
      }
      goto LAB_1474c9bef;
    }
  }
LAB_1474c94ed:
  FUN_1447166b4(local_d8);
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474c9c0e FUN_1474c9c0e body=506 status=ok
// SIG undefined FUN_1474c9c0e(void)

void FUN_1474c9c0e(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  cVar1 = (char)param_2[3];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x02') {
    if ((int)param_2[1] != 0) goto LAB_1474c9c52;
  }
  else if (cVar1 != '\x01') {
LAB_1474c9c52:
    if ((char)param_1[2] == '\0') {
      FUN_140102786(*param_1,(int)param_1[1]);
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if ((char)param_2[2] == '\0') {
      FUN_146264839(*param_2,(int)param_2[1]);
      *(undefined1 *)(param_2 + 2) = 1;
    }
    uVar6 = *(uint *)(param_1 + 1);
    iVar3 = (int)param_2[1];
    bVar10 = uVar6 == 0;
    if (bVar10 && 0 < iVar3) {
      return;
    }
    uVar8 = 0;
    iVar9 = 0;
    do {
      if ((int)uVar8 < (int)uVar6 && iVar9 == iVar3) {
        do {
          if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
            uVar8 = uVar8 + 1;
          }
          else {
            if (~uVar8 + uVar6 != 0) {
              memmove((void *)(*param_1 + (longlong)(int)uVar8 * 0x10),
                      (void *)((longlong)(int)uVar8 * 0x10 + *param_1 + 0x10),
                      (longlong)(int)(~uVar8 + uVar6) << 4);
              uVar6 = *(uint *)(param_1 + 1);
            }
            uVar6 = uVar6 - 1;
            *(uint *)(param_1 + 1) = uVar6;
          }
        } while ((int)uVar8 < (int)uVar6);
        return;
      }
      if ((bool)(bVar10 & iVar9 == iVar3)) {
        return;
      }
      _Dst = (void *)(*param_1 + (longlong)(int)uVar8 * 0x10);
      lVar4 = *(longlong *)(*param_2 + (longlong)iVar9 * 0xc);
      lVar5 = *(longlong *)(*param_1 + (longlong)(int)uVar8 * 0x10);
      if (lVar5 == lVar4) {
        bVar2 = *(byte *)(*param_2 + (longlong)iVar9 * 0xc + 8);
        if ((bVar2 & 1) != 0) goto LAB_1474c9cf9;
        cVar1 = (char)param_2[3];
        if (cVar1 == '\0') {
LAB_1474c9d69:
          uVar8 = uVar8 + 1;
        }
        else {
          if (cVar1 == '\x02') {
            if ((bVar2 & 2) != 0) goto LAB_1474c9d69;
          }
          else if ((cVar1 == '\x03') && ((bVar2 & 2) == 0)) goto LAB_1474c9d69;
LAB_1474c9cf9:
          if (~uVar8 + uVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar8 + uVar6) << 4);
            uVar6 = *(uint *)(param_1 + 1);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(param_1 + 1) = uVar6;
        }
LAB_1474c9d1c:
        iVar9 = iVar9 + 1;
      }
      else {
        iVar7 = (int)lVar5 - (int)lVar4;
        if (iVar7 == 0) {
          iVar7 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar4 >> 0x20);
        }
        if (-1 < iVar7) goto LAB_1474c9d1c;
        if (((char)param_2[3] == '\0') || ((char)param_2[3] == '\x03')) {
          uVar8 = uVar8 + 1;
        }
        else {
          if (~uVar8 + uVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar8 + uVar6) << 4);
            uVar6 = *(uint *)(param_1 + 1);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(param_1 + 1) = uVar6;
        }
      }
      bVar10 = uVar8 == uVar6;
      if (bVar10 && iVar9 < iVar3) {
        return;
      }
    } while( true );
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    return;
  }
  FUN_140507fc4(param_1,0);
  return;
}



// FUNCTION 1474c9e08 FUN_1474c9e08 body=154 status=ok
// SIG undefined FUN_1474c9e08(void)

float FUN_1474c9e08(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2;
  switch(*(undefined1 *)(param_1 + 0x124)) {
  case 0:
    fVar1 = param_3 + param_2;
    break;
  case 1:
    fVar1 = param_3 * param_2;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x128);
    goto LAB_1474c9e5f;
  case 4:
    fVar1 = 1.0 - param_3;
    if (fVar1 <= 0.01) {
      fVar1 = 0.01;
    }
    param_3 = param_2 - param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    fVar1 = param_3 * (1.0 / fVar1);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  param_3 = fVar1;
  fVar1 = *(float *)(param_1 + 0x120);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
LAB_1474c9e5f:
  return (param_3 - param_2) * fVar1 + param_2;
}



// FUNCTION 1474c9ea2 FUN_1474c9ea2 body=98 status=ok
// SIG undefined FUN_1474c9ea2(void)

void FUN_1474c9ea2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_14474897c(param_1 + 0x18);
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  fVar2 = *(float *)(param_1 + 0x120);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    fVar2 = 1.0 - fVar2;
  }
  *(float *)(param_1 + 0x128) = fVar2;
  return;
}



// FUNCTION 1474c9f04 FUN_1474c9f04 body=272 status=ok
// SIG undefined FUN_1474c9f04(void)

void FUN_1474c9f04(longlong param_1,undefined8 param_2)

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
  FUN_1474ca016(param_2,&local_40);
  FUN_140002266(&local_50,L"(Alpha: %.2f)",(double)*(float *)(param_1 + 0x120));
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



// FUNCTION 1474ca016 FUN_1474ca016 body=256 status=ok
// SIG undefined FUN_1474ca016(void)

undefined8 FUN_1474ca016(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa2d0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa2d0 = FUN_140002ddd(FUN_1463310cd,uVar2,L"AnimNode_ModifyCurve");
  }
  local_48 = *(undefined8 *)(DAT_14caaa2d0 + 0x18);
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



// FUNCTION 1474ca124 FUN_1474ca124 body=138 status=ok
// SIG undefined FUN_1474ca124(void)

void FUN_1474ca124(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x30)) {
    local_24 = 0;
    FUN_1448158c6(param_1 + 0x28);
  }
  FUN_140739bbe(param_1);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar1 = (longlong)*(int *)(param_1 + 0x20) << 4;
    do {
      FUN_140320438(lVar2,param_2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ca1b0 FUN_1474ca1b0 body=69 status=ok
// SIG undefined FUN_1474ca1b0(void)

void FUN_1474ca1b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 1474ca1f6 FUN_1474ca1f6 body=284 status=ok
// SIG undefined FUN_1474ca1f6(void)

void FUN_1474ca1f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474ca314(param_2,&local_60);
  _Src = local_60;
  local_70 = (void *)0x0;
  local_68 = local_58;
  if ((longlong)local_58 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_58,0);
    memcpy(local_70,_Src,(longlong)local_58 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      local_88 = 0;
      uStack_80 = 0;
      uVar2 = FUN_147906f5e(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4),
                            &local_88);
      FUN_147906d38(lVar1 + lVar4,uVar2);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ca314 FUN_1474ca314 body=256 status=ok
// SIG undefined FUN_1474ca314(void)

undefined8 FUN_1474ca314(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa2e8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa2e8 = FUN_140002ddd(FUN_146331163,uVar2,L"AnimNode_MultiWayBlend");
  }
  local_48 = *(undefined8 *)(DAT_14caaa2e8 + 0x18);
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



// FUNCTION 1474ca416 FUN_1474ca416 body=63 status=ok
// SIG undefined FUN_1474ca416(void)

void FUN_1474ca416(longlong param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(undefined4 *)(param_1 + 0x18) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  FUN_1401e7a20(param_1,*param_2);
  FUN_140320438(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 1474ca472 FUN_1474ca472 body=59 status=ok
// SIG undefined FUN_1474ca472(void)

void FUN_1474ca472(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  FUN_1408bce38(param_1,*param_2);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474ca4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1474ca4b6 FUN_1474ca4b6 body=41 status=ok
// SIG undefined FUN_1474ca4b6(void)

void FUN_1474ca4b6(longlong param_1,undefined8 param_2)

{
  FUN_1401e7996();
  FUN_14474897c(param_1 + 0xa8,param_2);
  return;
}



// FUNCTION 1474ca4e0 FUN_1474ca4e0 body=107 status=ok
// SIG undefined FUN_1474ca4e0(void)

void FUN_1474ca4e0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1474ca54c();
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0xa8,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ca54c FUN_1474ca54c body=332 status=ok
// SIG undefined FUN_1474ca54c(void)

void FUN_1474ca54c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474cad32(param_2,&local_38);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
    local_48 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
    FUN_1400021e4(&local_48,&local_58);
  }
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_48,L"(\'%s\')",puVar2);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_68 = (void *)0x0;
  local_60 = local_30;
  if ((longlong)local_30 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_30,0);
    memcpy(local_68,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_68,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ca69a FUN_1474ca69a body=183 status=ok
// SIG undefined FUN_1474ca69a(void)

void FUN_1474ca69a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1474ca752();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1474dad28(param_1 + 200);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x70);
      iVar1 = *(int *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
        FUN_1474dad58(param_1 + 200,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 200);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + lVar4);
      *(int *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = iVar1;
      *(undefined1 *)(param_1 + 0xd8) = 0;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 1474ca752 FUN_1474ca752 body=150 status=ok
// SIG undefined FUN_1474ca752(void)

void FUN_1474ca752(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1474dadec(plVar1);
  }
  if (0 < *(int *)(param_3 + 0x90)) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x88) + lVar6 * 8);
      iVar2 = *(int *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
        FUN_1408bd198(plVar1,iVar2);
      }
      lVar4 = *plVar1;
      lVar5 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar4 + lVar5) = uVar3;
      *(int *)(lVar4 + 8 + lVar5) = (int)lVar6;
      *(undefined4 *)(lVar4 + 0xc + lVar5) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x90));
  }
  return;
}



// FUNCTION 1474ca804 FUN_1474ca804 body=154 status=ok
// SIG undefined FUN_1474ca804(void)

void FUN_1474ca804(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1474dadec(plVar1);
  }
  if (0 < (longlong)*(int *)(param_3 + 0x90)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_3 + 0x88) + lVar6 * 8) == *(longlong *)(param_1 + 0xa8))
      {
        uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x88) + lVar6 * 8);
        iVar2 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
          FUN_1408bd198(plVar1,iVar2);
        }
        lVar4 = *plVar1;
        lVar5 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar4 + lVar5) = uVar3;
        *(int *)(lVar4 + 8 + lVar5) = (int)lVar6;
        *(undefined4 *)(lVar4 + 0xc + lVar5) = 0;
        return;
      }
      lVar6 = lVar6 + 1;
    } while (*(int *)(param_3 + 0x90) != lVar6);
  }
  return;
}



// FUNCTION 1474ca89e FUN_1474ca89e body=80 status=ok
// SIG undefined FUN_1474ca89e(void)

void FUN_1474ca89e(longlong *param_1,longlong *param_2)

{
  FUN_1401e7996();
  if (*(longlong *)((longlong)param_1 + 0xb4) != param_1[0x15]) {
    (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined8 *)(*param_2 + 0x6a0),param_1[8]);
    *(longlong *)((longlong)param_1 + 0xb4) = param_1[0x15];
  }
  return;
}



// FUNCTION 1474ca8ee FUN_1474ca8ee body=228 status=ok
// SIG undefined FUN_1474ca8ee(void)

void FUN_1474ca8ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x48;
  lVar2 = FUN_14479d2ce(lVar1);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x78))) {
    lVar2 = FUN_14479d2ce(lVar1);
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xc) = *(undefined4 *)(param_1 + 0xb0);
      local_40 = param_2 + 0x20;
      local_38 = param_2 + 0x38;
      local_30 = param_2 + 0x58;
      uVar3 = FUN_14479d2ce(lVar1);
      FUN_1433eeed2(uVar3,&local_40,param_1 + 0x50);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68,*(undefined8 *)(param_2 + 0x30));
}



// FUNCTION 1474ca9f2 FUN_1474ca9f2 body=443 status=ok
// SIG undefined FUN_1474ca9f2(void)

void FUN_1474ca9f2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474cabae(param_2,&local_38);
  FUN_1400021e4(param_1 + 0xa8,&local_58);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = FUN_144729dda(param_1 + 0x48);
  if (cVar2 == '\0') {
    FUN_140002266(&local_48,L"(\'%s\' Pose: %s)",&DAT_149e01fe8,puVar4);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    local_68 = local_48;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x48);
    local_48 = *(undefined2 **)(lVar3 + 0x18);
    FUN_1400021e4(&local_48,&local_68);
    puVar5 = local_68;
    if (local_60 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_48,L"(\'%s\' Pose: %s)",puVar5,puVar4);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_78 = (void *)0x0;
  local_70 = local_30;
  if ((longlong)local_30 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_30,0);
    memcpy(local_78,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_78,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474cabae FUN_1474cabae body=256 status=ok
// SIG undefined FUN_1474cabae(void)

undefined8 FUN_1474cabae(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa318 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa318 = FUN_140002ddd(FUN_1463312c1,uVar2,L"AnimNode_PoseByName");
  }
  local_48 = *(undefined8 *)(DAT_14caaa318 + 0x18);
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



// FUNCTION 1474cacc6 FUN_1474cacc6 body=107 status=ok
// SIG undefined FUN_1474cacc6(void)

void FUN_1474cacc6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1474ca54c();
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0xa8,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cad32 FUN_1474cad32 body=256 status=ok
// SIG undefined FUN_1474cad32(void)

undefined8 FUN_1474cad32(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa3c0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa3c0 = FUN_140002ddd(FUN_146331228,uVar2,L"AnimNode_PoseHandler");
  }
  local_48 = *(undefined8 *)(DAT_14caaa3c0 + 0x18);
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



// FUNCTION 1474cae34 FUN_1474cae34 body=282 status=ok
// SIG undefined FUN_1474cae34(void)

void FUN_1474cae34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(longlong *)(param_2 + 0x20) == 0) ||
      ((*(byte *)(*(longlong *)(param_2 + 0x20) + 0x9c) & 1) == 0)) ||
     (plVar4 = (longlong *)FUN_144a81888(), plVar4 == (longlong *)0x0)) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x90) != plVar4[3]) {
      plVar1 = (longlong *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x7c) < 0) {
        FUN_1402191ca(plVar1);
      }
      lVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
      uVar2 = *(uint *)(lVar5 + 0x28);
      iVar3 = *(int *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = iVar3 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x7c) - iVar3) < uVar2) {
        FUN_1446f84a2(plVar1);
      }
      memset((void *)((longlong)iVar3 * 8 + *plVar1),0,(longlong)(int)uVar2 << 3);
      lVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
      if (0 < *(int *)(lVar5 + 0x28)) {
        lVar5 = 0;
        lVar7 = 0;
        do {
          lVar6 = (**(code **)(*plVar4 + 0x310))(plVar4);
          *(undefined8 *)(*plVar1 + lVar7 * 8) =
               *(undefined8 *)(*(longlong *)(lVar6 + 0x20) + lVar5);
          lVar7 = lVar7 + 1;
          lVar6 = (**(code **)(*plVar4 + 0x310))(plVar4);
          lVar5 = lVar5 + 0xc;
        } while (lVar7 < *(int *)(lVar6 + 0x28));
      }
    }
    *(longlong *)(param_1 + 0x90) = plVar4[3];
  }
  return;
}



// FUNCTION 1474caf4e FUN_1474caf4e body=29 status=ok
// SIG undefined FUN_1474caf4e(void)

void FUN_1474caf4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  return;
}



// FUNCTION 1474caf6c FUN_1474caf6c body=97 status=ok
// SIG undefined FUN_1474caf6c(void)

void FUN_1474caf6c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_1448859f0(param_2 + 4,param_2[6]);
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar1 = FUN_14790315a(*param_2,*(undefined8 *)(param_1 + 0x18));
    if (lVar1 != 0) goto LAB_1474cafbe;
  }
  else if (*(char *)(param_1 + 0x58) == '\x01') {
    lVar1 = param_1 + 0x20;
LAB_1474cafbe:
    FUN_1474cafce(param_1,lVar1,param_2 + 4);
    return;
  }
  return;
}



// FUNCTION 1474cafce FUN_1474cafce body=224 status=ok
// SIG undefined FUN_1474cafce(void)

void FUN_1474cafce(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)param_3[2];
  if (*(longlong *)(param_1 + 0x90) == param_2[4]) {
    uVar2 = *(uint *)(param_3 + 1);
    if ((ulonglong)uVar2 != 0) {
      lVar6 = 0;
      uVar9 = 0;
      do {
        uVar1 = *(ushort *)(*plVar4 + uVar9 * 2);
        if ((int)(uint)uVar1 < (int)param_2[1]) {
          puVar7 = (undefined8 *)((ulonglong)((uint)uVar1 * 0x60) + *param_2);
          puVar8 = (undefined8 *)(*param_3 + lVar6);
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar9);
    }
  }
  else {
    FUN_1474cb0ae();
    uVar2 = *(uint *)(param_3 + 1);
    if ((ulonglong)uVar2 != 0) {
      lVar6 = 0;
      uVar9 = 0;
      do {
        uVar1 = *(ushort *)(*plVar4 + uVar9 * 2);
        if ((int)(uint)uVar1 < *(int *)(param_1 + 0x68)) {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar1 * 4);
          if ((-1 < (longlong)iVar3) && (iVar3 < (int)param_2[1])) {
            puVar7 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_2);
            puVar8 = (undefined8 *)(*param_3 + lVar6);
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar9);
    }
  }
  return;
}



// FUNCTION 1474cb0ae FUN_1474cb0ae body=231 status=ok
// SIG undefined FUN_1474cb0ae(void)

void FUN_1474cb0ae(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x80) != param_2) || (*(longlong *)(param_1 + 0x88) != param_3)) {
    plVar1 = (longlong *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_14481578e(plVar1,0);
    }
    if (0 < (int)param_5[1]) {
      lVar4 = 0;
      do {
        uVar5 = 0xffffffff;
        if ((longlong)(int)param_4[1] != 0) {
          lVar3 = (longlong)(int)param_4[1] << 3;
          lVar6 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar6 * 8) == *(longlong *)(*param_5 + lVar4 * 8)) {
              uVar5 = (undefined4)lVar6;
              break;
            }
            lVar6 = lVar6 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
        iVar2 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_5[1]);
    }
    *(longlong *)(param_1 + 0x80) = param_2;
    *(longlong *)(param_1 + 0x88) = param_3;
  }
  return;
}



// FUNCTION 1474cb196 FUN_1474cb196 body=328 status=ok
// SIG undefined FUN_1474cb196(void)

void FUN_1474cb196(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_b8 [40];
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400021e4(param_1 + 0x18,local_50);
  FUN_1400b22c2(local_70," Snapshot Name:");
  FUN_1474cb2e0(param_2,local_80);
  FUN_1401c7f3e(local_60,local_80,local_70);
  FUN_1401c7f3e(&local_40,local_60,local_50);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_90 = (void *)0x0;
  local_88 = local_38;
  if ((longlong)local_38 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_38,0);
    memcpy(local_90,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_90,1);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cb2e0 FUN_1474cb2e0 body=256 status=ok
// SIG undefined FUN_1474cb2e0(void)

undefined8 FUN_1474cb2e0(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa3f0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa3f0 = FUN_140002ddd(FUN_14633163f,uVar2,L"AnimNode_PoseSnapshot");
  }
  local_48 = *(undefined8 *)(DAT_14caaa3f0 + 0x18);
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



// FUNCTION 1474cb3e8 FUN_1474cb3e8 body=666 status=ok
// SIG undefined FUN_1474cb3e8(void)

void FUN_1474cb3e8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  uVar8 = FUN_14477dc2a();
  FUN_14477dadc(uVar8,param_2);
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 < 0) {
LAB_1474cb67b:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != iVar10) {
    FUN_1474dae7c(plVar1);
    iVar10 = *(int *)(param_1 + 0x20);
  }
  if (0 < iVar10) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if ((*(longlong *)(lVar4 + lVar11) != 0) &&
         ((*(char *)(param_1 + 0x7c) != '\0' || (1e-08 < *(float *)(lVar4 + 8 + lVar11))))) {
        iVar10 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar10 + 1U) {
          FUN_1474daedc(plVar1,iVar10);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 8) = lVar4 + lVar11;
        iVar10 = *(int *)(param_1 + 0x20);
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x50;
    } while (lVar12 < iVar10);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((ulonglong)uVar3 != 0) {
    iVar10 = *(int *)(param_1 + 0x40);
    if (iVar10 < 0) goto LAB_1474cb67b;
    plVar2 = (longlong *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar5 = 0;
    if (*(int *)(param_1 + 0x44) != iVar10) {
      FUN_14482f6fa(plVar2);
      iVar5 = *(int *)(param_1 + 0x40);
      iVar10 = *(int *)(param_1 + 0x44);
    }
    *(uint *)(param_1 + 0x40) = uVar3 + iVar5;
    if ((uint)(iVar10 - iVar5) < uVar3) {
      FUN_14475e4ac(plVar2,iVar5);
    }
    iVar10 = *(int *)(param_1 + 0x30);
    fVar14 = 0.0;
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      lVar12 = 0;
      do {
        lVar4 = *(longlong *)(lVar11 + lVar12);
        iVar5 = *(int *)(lVar4 + 0x10);
        if (iVar5 < *(int *)(lVar4 + 0xc)) {
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0xc);
          *(int *)(lVar4 + 0xc) = iVar5;
        }
        fVar13 = *(float *)(lVar4 + 0x18);
        if (fVar13 < *(float *)(lVar4 + 0x14)) {
          *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x14);
          *(float *)(lVar4 + 0x14) = fVar13;
        }
        fVar14 = fVar14 + *(float *)(lVar4 + 8);
        FUN_1404163bc();
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar10 * 8 != lVar12);
    }
    if (*(char *)(param_1 + 0x7c) == '\0') {
      if (0 < (int)uVar3) {
        fVar13 = 0.0;
        uVar9 = 0;
        do {
          fVar13 = fVar13 + *(float *)(*(longlong *)(*plVar1 + uVar9 * 8) + 8) / fVar14;
          *(float *)(*plVar2 + uVar9 * 4) = fVar13;
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
      }
      *(undefined4 *)(*plVar2 + -4 + (longlong)(int)uVar3 * 4) = 0x3f800000;
    }
    else {
      FUN_1474cb684(param_1,0xffffffff);
    }
    QueryPerformanceCounter(&local_58);
    *(DWORD *)(param_1 + 0x70) = local_58.s.LowPart;
    *(DWORD *)(param_1 + 0x74) = local_58.s.LowPart;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 2) {
      FUN_1474daf62(param_1 + 0x48);
    }
    FUN_1474cb7c0(param_1 + 0x48);
    uVar6 = FUN_1474cb7fa(param_1);
    uVar7 = FUN_1474cb7fa(param_1);
    FUN_1474cb886(param_1,(longlong)*(int *)(param_1 + 0x58) * 0x38 + *(longlong *)(param_1 + 0x48),
                  uVar6,0x3f800000);
    iVar10 = *(int *)(param_1 + 0x58);
    FUN_1474cb886(param_1,(longlong)
                          (int)((iVar10 - ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1)
                          * 0x38 + *(longlong *)(param_1 + 0x48),uVar7,0);
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474cb684 FUN_1474cb684 body=315 status=ok
// SIG undefined FUN_1474cb684(void)

void FUN_1474cb684(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  FUN_144a9ff88(plVar1);
  iVar6 = *(int *)(param_1 + 0x30);
  if (0 < iVar6) {
    iVar11 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x68);
      uVar5 = iVar2 + 1;
      *(uint *)(param_1 + 0x68) = uVar5;
      if (*(uint *)(param_1 + 0x6c) < uVar5) {
        FUN_1446f48e2(plVar1);
      }
      *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar11;
      iVar11 = iVar11 + 1;
    } while (iVar6 != iVar11);
  }
  iVar6 = *(int *)(param_1 + 0x68);
  if (1 < iVar6) {
    uVar7 = (ulonglong)(iVar6 - 1);
    lVar9 = 0;
    do {
      if (-1 < (longlong)uVar7) {
        uVar5 = *(int *)(param_1 + 0x74) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x74) = uVar5;
        iVar11 = (int)((float)iVar6 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
        if (iVar11 != 0) {
          lVar4 = *plVar1;
          lVar10 = (longlong)(iVar11 + (int)lVar9);
          uVar3 = *(undefined4 *)(lVar4 + lVar9 * 4);
          *(undefined4 *)(lVar4 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
          *(undefined4 *)(lVar4 + lVar10 * 4) = uVar3;
        }
      }
      lVar9 = lVar9 + 1;
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (1 < *(int *)(param_1 + 0x68)) {
      lVar9 = *plVar1;
      uVar5 = *(int *)(param_1 + 0x68) - 1;
      uVar7 = (ulonglong)uVar5;
      if (*(int *)(lVar9 + uVar7 * 4) == param_2) {
        uVar8 = *(int *)(param_1 + 0x74) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x74) = uVar8;
        uVar8 = (uint)((float)(int)uVar5 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0));
        if (uVar8 != uVar5) {
          uVar3 = *(undefined4 *)(lVar9 + (longlong)(int)uVar8 * 4);
          *(undefined4 *)(lVar9 + (longlong)(int)uVar8 * 4) = *(undefined4 *)(lVar9 + uVar7 * 4);
          *(undefined4 *)(lVar9 + uVar7 * 4) = uVar3;
        }
      }
    }
  }
  return;
}



// FUNCTION 1474cb7c0 FUN_1474cb7c0 body=57 status=ok
// SIG undefined FUN_1474cb7c0(void)

void FUN_1474cb7c0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_1474db034(param_1,iVar1);
  }
  FUN_1474db004((longlong)iVar1 * 0x38 + *param_1);
  return;
}



// FUNCTION 1474cb7fa FUN_1474cb7fa body=140 status=ok
// SIG undefined FUN_1474cb7fa(void)

int FUN_1474cb7fa(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x60) + -4 + (longlong)*(int *)(param_1 + 0x68) * 4);
    iVar3 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar3;
    if (iVar3 == 0) {
      FUN_1474cb684(param_1,iVar6);
    }
  }
  else {
    uVar4 = *(int *)(param_1 + 0x74) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x74) = uVar4;
    if ((int)*(uint *)(param_1 + 0x40) < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      uVar5 = *(uint *)(param_1 + 0x40);
      do {
        uVar1 = (uVar5 >> 1) + iVar6;
        if (*(float *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar1 * 4) <=
            (float)(uVar4 >> 9 | 0x3f800000) + -1.0) {
          iVar6 = uVar1 + (uVar5 & 1);
        }
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar2);
    }
  }
  return iVar6;
}



// FUNCTION 1474cb886 FUN_1474cb886 body=220 status=ok
// SIG undefined FUN_1474cb886(void)

void FUN_1474cb886(longlong param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 8);
  *param_2 = lVar4;
  *(undefined4 *)(param_2 + 4) = param_4;
  fVar1 = *(float *)(lVar4 + 0x18);
  fVar2 = *(float *)(lVar4 + 0x14);
  uVar5 = *(int *)(param_1 + 0x74) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x74) = uVar5;
  *(float *)((longlong)param_2 + 0x1c) =
       ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar2) + fVar2;
  iVar3 = *(int *)(lVar4 + 0xc);
  iVar6 = *(int *)(lVar4 + 0x10) - iVar3;
  iVar7 = 0;
  if (-1 < iVar6) {
    uVar5 = *(int *)(param_1 + 0x74) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x74) = uVar5;
    iVar7 = (int)((float)(iVar6 + 1) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
  }
  iVar7 = iVar7 + iVar3;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  *(int *)((longlong)param_2 + 0x24) = iVar7;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 5) = 0xfffffffe;
  *(undefined4 *)(param_2 + 6) = 0xfffffffe;
  return;
}



// FUNCTION 1474cb962 FUN_1474cb962 body=1083 status=ok
// SIG undefined FUN_1474cb962(void)

void FUN_1474cb962(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  float local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined6 local_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  undefined1 *local_1a0;
  undefined6 *local_198;
  longlong *local_168;
  longlong *local_140;
  undefined1 local_118 [56];
  longlong *local_e0;
  longlong *local_b8;
  undefined8 *local_90;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 4);
  uVar7 = FUN_14477dc2a();
  FUN_14477dadc(uVar7,param_2);
  if (*(int *)(param_1 + 0x30) == 0) goto LAB_1474cbc36;
  iVar3 = *(int *)(param_1 + 0x58);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar9 = (longlong)iVar3 * 0x38;
  plVar10 = (longlong *)(lVar4 + lVar9);
  plVar5 = (longlong *)**(undefined8 **)(lVar4 + lVar9);
  fVar15 = *(float *)(lVar4 + 0x14 + lVar9);
  fVar12 = *(float *)(lVar4 + 0xc + lVar9);
  if (fVar12 < fVar15) {
    fVar12 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
    fVar15 = fVar15 - fVar12;
    fVar12 = *(float *)((longlong)plVar10 + 0xc);
  }
  fVar2 = *(float *)(plVar10 + 1);
  iVar8 = *(int *)((longlong)plVar10 + 0x24);
  if (fVar2 <= fVar12 && fVar15 < fVar2) {
    iVar8 = iVar8 + -1;
    *(int *)((longlong)plVar10 + 0x24) = iVar8;
  }
  plVar11 = (longlong *)
            (lVar4 + (longlong)
                     (int)((iVar3 + 1) - ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1U & 0xfffffffe)) * 0x38);
  if (iVar8 < 1) {
    lVar4 = *plVar11;
    if (*plVar10 == lVar4) {
      if (iVar8 < 0) {
        *(float *)((longlong)plVar11 + 0xc) = fVar12;
        goto LAB_1474cbd42;
      }
      goto LAB_1474cba4f;
    }
    if ((*(float *)(lVar4 + 0x28) <= 0.0) || (*(float *)(lVar4 + 0x2c) <= 1e-05)) {
      fVar14 = fVar12 - fVar2;
      if (fVar14 < 0.0) {
        fVar13 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
        fVar14 = fVar14 + fVar13;
      }
      fVar13 = (float)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      if ((bool)(~(fVar2 <= fVar12 && fVar15 < fVar2) & *(float *)(lVar4 + 0x28) < fVar13 - fVar14))
      goto LAB_1474cba4f;
    }
    FUN_14470c566(lVar4 + 0x20,*(undefined4 *)(param_2 + 5));
    cVar6 = FUN_1417b384c(lVar4 + 0x20);
    if (cVar6 == '\0') {
      fVar15 = *(float *)(lVar4 + 0x38);
      if (fVar15 < 1.0) {
        *(float *)(plVar11 + 4) = fVar15;
        *(float *)(plVar10 + 4) = 1.0 - fVar15;
      }
      goto LAB_1474cba4f;
    }
    fVar12 = *(float *)((longlong)plVar11 + 0xc);
LAB_1474cbd42:
    *(float *)(plVar11 + 1) = fVar12;
    *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0xc);
    *(undefined1 *)(plVar10 + 3) = 1;
    *(float *)((longlong)plVar11 + 0x14) = fVar12;
    *(undefined1 *)(plVar11 + 3) = 1;
    FUN_1474cbd9e(param_1);
    iVar3 = *(int *)(param_1 + 0x58);
    plVar10 = (longlong *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x48));
    plVar11 = (longlong *)
              ((longlong)(int)((iVar3 + 1) - ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1U & 0xfffffffe)) *
               0x38 + *(longlong *)(param_1 + 0x48));
  }
  else {
LAB_1474cba4f:
    *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0xc);
    *(undefined1 *)(plVar10 + 3) = 1;
    *(undefined4 *)((longlong)plVar11 + 0x14) = *(undefined4 *)((longlong)plVar11 + 0xc);
    *(undefined1 *)(plVar11 + 3) = 1;
  }
  local_1c0 = plVar10 + 5;
  local_1c8 = (longlong)plVar10 + 0xc;
  local_1d0 = *(float *)(plVar10 + 4);
  local_1d8 = 0;
  FUN_144b1f644(local_118,*(undefined8 *)*plVar10,1,*(undefined4 *)((longlong)plVar10 + 0x1c));
  local_b8 = plVar10 + 2;
  FUN_1447aa98e(local_118,param_2);
  local_90 = &local_78;
  local_78 = 0;
  local_80 = SUB84(&local_90,0);
  uStack_7c = (undefined2)((ulonglong)&local_90 >> 0x20);
  uStack_7a = (undefined2)((ulonglong)&local_90 >> 0x30);
  local_88 = 0x1474d978e;
  uStack_82 = 0;
  local_198 = &local_1b0;
  local_1b0 = SUB86(&local_88,0);
  uStack_1aa = (undefined2)((ulonglong)&local_88 >> 0x30);
  local_1a0 = &LAB_144b1e5de;
  FUN_14015e554(param_2[1] + 0x148,DAT_14caccb08,&local_1a0);
  uVar7 = local_78;
  local_1a0 = (undefined1 *)*param_2;
  local_198 = (undefined6 *)CONCAT44(local_198._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
  local_80 = 0;
  uStack_7c = 0;
  local_88 = 0;
  uStack_82 = 0;
  FUN_14486b6e0(local_78,local_118,&local_88,&local_1a0);
  if (1e-05 < *(float *)(plVar11 + 4)) {
    local_1c0 = plVar11 + 5;
    local_1c8 = (longlong)plVar11 + 0xc;
    local_1d8 = 0;
    local_1d0 = *(float *)(plVar11 + 4);
    FUN_144b1f644(&local_1a0,*(undefined8 *)*plVar11,1,*(undefined4 *)((longlong)plVar11 + 0x1c));
    local_140 = plVar11 + 2;
    FUN_1447aa98e(&local_1a0,param_2);
    local_88 = (undefined6)*param_2;
    uStack_82 = (undefined2)((ulonglong)*param_2 >> 0x30);
    local_80 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_1aa = 0;
    FUN_14486b6e0(uVar7,&local_1a0);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_168 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))(local_168);
        }
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_e0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
LAB_1474cbc36:
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cbd9e FUN_1474cbd9e body=121 status=ok
// SIG undefined FUN_1474cbd9e(void)

void FUN_1474cbd9e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_1474cb7fa();
  iVar3 = *(int *)(param_1 + 0x58) + 1;
  iVar3 = iVar3 - ((*(int *)(param_1 + 0x58) - (iVar3 >> 0x1f)) + 1U & 0xfffffffe);
  *(int *)(param_1 + 0x58) = iVar3;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar4 = iVar3 - 1;
  if (iVar3 + 1U < 2) {
    uVar4 = iVar3 + 1U;
  }
  *(undefined4 *)(lVar1 + 0x20 + (longlong)iVar3 * 0x38) = 0x3f800000;
  FUN_1404163bc(*(longlong *)(lVar1 + (longlong)iVar3 * 0x38) + 0x20);
  FUN_1474cb886(param_1,(longlong)(int)uVar4 * 0x38 + lVar1,uVar2,0);
  return;
}



// FUNCTION 1474cbe18 FUN_1474cbe18 body=1207 status=ok
// SIG undefined FUN_1474cbe18(void)

void FUN_1474cbe18(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_278 [32];
  longlong **local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 *local_238;
  undefined4 local_230;
  undefined8 *local_228;
  undefined4 local_220;
  double *local_218;
  undefined4 local_210;
  undefined4 *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  char local_167;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
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
  undefined1 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_278);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar5 = (longlong)iVar1 * 0x38;
  lVar6 = lVar2 + lVar5;
  plVar3 = (longlong *)**(undefined8 **)(lVar2 + lVar5);
  cVar4 = FUN_144b1e4d0(*(undefined4 *)(lVar2 + 0x20 + lVar5),0x3f800000,4);
  if (cVar4 == '\0') {
    puVar7 = (undefined8 *)
             (lVar2 + (longlong)
                      (int)((iVar1 + 1) - ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1U & 0xfffffffe)) * 0x38)
    ;
    lVar2 = *param_2;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
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
    local_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_158 = 0.0;
    uStack_150 = 0;
    uStack_14c = 0;
    lVar5 = *(longlong *)(lVar2 + 0x6a0);
    local_250 = plVar3;
    FUN_144717630(&local_98,lVar5);
    FUN_144717630(&uStack_80,lVar5);
    local_c0 = lVar5 + 0xb0;
    local_160 = *(undefined4 *)(lVar6 + 0x20);
    local_15c = *(undefined4 *)(puVar7 + 4);
    plVar3 = *(longlong **)*puVar7;
    local_a0 = local_c0;
    FUN_1447166a4(local_1c0,&local_98,&local_d8,&local_158);
    FUN_1447166a4(local_1d8,&uStack_80,&local_b8,&local_118);
    local_1e0 = *(undefined4 *)(lVar6 + 0x18);
    local_1e8 = *(undefined8 *)(lVar6 + 0x10);
    local_1a8 = (longlong *)(double)*(float *)(lVar6 + 0xc);
    local_190 = 0 < *(int *)(lVar6 + 0x24);
    local_1a0._0_4_ = CONCAT31(local_1a0._1_3_,*(byte *)(lVar2 + 0x7e1) >> 1) & 0xffffff01;
    local_1a0._4_4_ = (undefined4)local_1e8;
    local_198._0_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
    local_167 = '\0';
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_198._4_4_ = local_1e0;
    (**(code **)(*local_250 + 0x328))(local_250,local_1c0,&local_1a8);
    if (local_167 == '\x01') {
      local_167 = '\0';
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    local_1f0 = *(undefined4 *)(puVar7 + 3);
    local_1f8 = puVar7[2];
    local_1a8 = (longlong *)(double)*(float *)((longlong)puVar7 + 0xc);
    local_190 = 0 < *(int *)((longlong)puVar7 + 0x24);
    local_1a0._0_4_ = CONCAT31(local_1a0._1_3_,*(byte *)(lVar2 + 0x7e1) >> 1) & 0xffffff01;
    local_1a0._4_4_ = (undefined4)local_1f8;
    local_198._0_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
    local_167 = '\0';
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_198._4_4_ = local_1f0;
    (**(code **)(*plVar3 + 0x328))(plVar3,local_1d8,&local_1a8);
    if (local_167 == '\x01') {
      local_167 = '\0';
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    local_1a8 = param_2 + 4;
    local_1a0 = param_2 + 7;
    local_198 = param_2 + 0xb;
    local_208 = &local_160;
    local_200 = 2;
    local_218 = &local_158;
    local_210 = 2;
    local_228 = &local_d8;
    local_220 = 2;
    local_238 = &local_98;
    local_230 = 2;
    local_258 = &local_1a8;
    FUN_1400cc932();
    lVar6 = 0x40;
    do {
      FUN_1447166b4((longlong)&local_158 + lVar6);
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != -0x40);
  }
  else {
    local_1a8 = param_2 + 4;
    local_1a0 = param_2 + 7;
    local_198 = param_2 + 0xb;
    local_240 = *(undefined4 *)(lVar6 + 0x18);
    local_248 = *(undefined8 *)(lVar6 + 0x10);
    local_158 = (double)*(float *)(lVar6 + 0xc);
    uStack_140 = CONCAT71(uStack_140._1_7_,0 < *(int *)(lVar6 + 0x24));
    uStack_150 = CONCAT31(uStack_150._1_3_,*(byte *)(*param_2 + 0x7e1) >> 1) & 0xffffff01;
    uStack_14c = (undefined4)local_248;
    uStack_148 = (undefined4)((ulonglong)local_248 >> 0x20);
    local_118._0_2_ = (ushort)(byte)local_118;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_144 = local_240;
    (**(code **)(*plVar3 + 0x328))(plVar3,&local_1a8,&local_158);
    if (local_118._1_1_ == '\x01') {
      local_118._0_2_ = (ushort)(byte)local_118;
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cc31c FUN_1474cc31c body=176 status=ok
// SIG undefined FUN_1474cc31c(void)

void FUN_1474cc31c(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1474cc3ce(param_2,&local_38);
  _Src = local_38;
  local_48 = (void *)0x0;
  local_40 = local_30;
  if ((longlong)local_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_48,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cc3ce FUN_1474cc3ce body=256 status=ok
// SIG undefined FUN_1474cc3ce(void)

undefined8 FUN_1474cc3ce(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa420 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa420 = FUN_140002ddd(FUN_14633176b,uVar2,L"AnimNode_RandomPlayer");
  }
  local_48 = *(undefined8 *)(DAT_14caaa420 + 0x18);
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



// FUNCTION 1474cc4d0 FUN_1474cc4d0 body=70 status=ok
// SIG undefined FUN_1474cc4d0(void)

longlong FUN_1474cc4d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x30) < 1) ||
     (plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x58) * 0x38),
     plVar1 == (longlong *)0x0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1;
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 1474cc534 FUN_1474cc534 body=403 status=ok
// SIG undefined FUN_1474cc534(void)

undefined1 FUN_1474cc534(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaa7c) {
    FUN_144b3d300(&DAT_14caaaa7c);
    if (DAT_14caaaa7c == -1) {
      DAT_14caaaa70 = 0;
      DAT_14caaaa78 = -1;
      _Init_thread_footer(&DAT_14caaaa7c);
    }
  }
  if (DAT_14caaaa78 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaa88) {
      FUN_144b3d300(&DAT_14caaaa88);
      if (DAT_14caaaa88 == -1) {
        FUN_1446ddc76(&DAT_14caaaa80,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaaa88);
      }
    }
    if (DAT_14caaa420 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa420 = FUN_140002ddd(FUN_14633176b,uVar2,L"AnimNode_RandomPlayer");
    }
    FUN_14094e66e(&local_28,DAT_14caaaa80,param_1,DAT_14caaa420);
    DAT_14caaaa70 = local_28;
    DAT_14caaaa78 = local_20;
  }
  local_20 = DAT_14caaaa78;
  local_28 = DAT_14caaaa70;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cc6c8 FUN_1474cc6c8 body=418 status=ok
// SIG undefined FUN_1474cc6c8(void)

bool FUN_1474cc6c8(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaa9c) {
    FUN_144b3d300(&DAT_14caaaa9c);
    if (DAT_14caaaa9c == -1) {
      DAT_14caaaa90 = 0;
      DAT_14caaaa98 = -1;
      _Init_thread_footer(&DAT_14caaaa9c);
    }
  }
  if (DAT_14caaaa98 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaaa8) {
      FUN_144b3d300(&DAT_14caaaaa8);
      if (DAT_14caaaaa8 == -1) {
        FUN_1446ddc76(&DAT_14caaaaa0,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaaaa8);
      }
    }
    if (DAT_14caaa420 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa420 = FUN_140002ddd(FUN_14633176b,uVar2,L"AnimNode_RandomPlayer");
    }
    FUN_14094e66e(&local_30,DAT_14caaaaa0,param_1,DAT_14caaa420);
    DAT_14caaaa90 = local_30;
    DAT_14caaaa98 = local_28;
  }
  local_28 = DAT_14caaaa98;
  local_30 = DAT_14caaaa90;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cc8a0 FUN_1474cc8a0 body=282 status=ok
// SIG undefined FUN_1474cc8a0(void)

void FUN_1474cc8a0(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474cc9bc(param_2,&local_38);
  iVar1 = FUN_14017e5c8(param_1);
  pwVar2 = L"Unknown Ref Pose Type";
  if (iVar1 == 1) {
    pwVar2 = L"EIT_Additive";
  }
  pwVar3 = L"EIT_LocalSpace";
  if (iVar1 != 0) {
    pwVar3 = pwVar2;
  }
  FUN_140002266(&local_48,L"(Ref Pose Type: %s)",pwVar3);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  _Src = local_38;
  local_58 = (void *)0x0;
  local_50 = local_30;
  if ((longlong)local_30 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_30,0);
    memcpy(local_58,_Src,(longlong)local_30 * 2);
  }
  FUN_147906d4c(param_2,&local_58,1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cc9bc FUN_1474cc9bc body=256 status=ok
// SIG undefined FUN_1474cc9bc(void)

undefined8 FUN_1474cc9bc(float *param_1,undefined8 param_2)

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
  if (DAT_14caa9d68 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caa9d68 = FUN_140002ddd(FUN_14632f48b,uVar2,L"AnimNode_RefPose");
  }
  local_48 = *(undefined8 *)(DAT_14caa9d68 + 0x18);
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



// FUNCTION 1474ccac6 FUN_1474ccac6 body=35 status=ok
// SIG undefined FUN_1474ccac6(void)

void FUN_1474ccac6(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  return;
}



// FUNCTION 1474ccafe FUN_1474ccafe body=101 status=ok
// SIG undefined FUN_1474ccafe(void)

void FUN_1474ccafe(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  FUN_14474897c(param_1 + 0x18,param_2);
  uVar2 = FUN_144a85682(param_1 + 0x30,*(undefined4 *)(param_1 + 0x28),
                        *(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = FUN_144a85682(param_1 + 0x60,*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  return;
}



// FUNCTION 1474ccb64 FUN_1474ccb64 body=1274 status=ok
// SIG undefined FUN_1474ccb64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474ccb64(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1447139fe(param_1 + 0x18);
  if ((0.0001 < ABS(*(float *)(param_1 + 0xac))) || (0.0001 < ABS(*(float *)(param_1 + 0xb0)))) {
    local_b0 = (double)*(float *)(param_1 + 0xb0);
    local_b8 = (double)*(float *)(param_1 + 0xac);
    local_a8 = 0;
    FUN_144a7484c(&local_b8,&local_118);
    dVar21 = dStack_100;
    dVar11 = local_108;
    dVar9 = dStack_110;
    dVar20 = local_118;
    FUN_144a7484c(param_1 + 0x90,&local_118);
    dVar10 = local_108 * -1.0;
    dVar12 = dStack_100 * 1.0;
    dVar13 = dVar9 * dVar10 * -1.0 +
             ((dVar20 * dVar12 - dVar21 * local_118 * 1.0) - dVar11 * dStack_110);
    dVar16 = dVar20 * dVar10 * 1.0 +
             ((dVar9 * dVar12 - dVar11 * local_118 * -1.0) - dVar21 * dStack_110);
    dVar17 = dVar21 * dVar10 * 1.0 +
             dVar20 * dStack_110 + (dVar12 * dVar11 - local_118 * dVar9 * 1.0);
    dVar20 = dVar11 * dVar10 * -1.0 +
             dVar9 * dStack_110 + (dVar12 * dVar21 - local_118 * dVar20 * -1.0);
    dVar2 = dStack_110 * dVar17 * -1.0 +
            local_108 * dVar16 + dStack_100 * dVar13 * 1.0 + local_118 * dVar20;
    dVar3 = local_118 * dVar17 * 1.0 +
            dStack_100 * dVar16 + local_108 * dVar13 * -1.0 + dStack_110 * dVar20;
    dVar4 = dStack_100 * dVar17 * 1.0 +
            ((dVar13 * dStack_110 * 1.0 + dVar20 * local_108) - dVar16 * local_118);
    dVar17 = local_108 * dVar17 * -1.0 +
             ((dVar13 * local_118 * -1.0 + dVar20 * dStack_100) - dVar16 * dStack_110);
    pdVar1 = *(double **)(param_2 + 0x20);
    dVar9 = pdVar1[3];
    dVar20 = pdVar1[3];
    dVar11 = *pdVar1;
    dVar21 = *pdVar1;
    dVar12 = pdVar1[1];
    dVar10 = pdVar1[1];
    dVar13 = pdVar1[2];
    dVar16 = pdVar1[2];
    *pdVar1 = dVar3 * dVar13 * -1.0 + dVar12 * dVar4 + dVar11 * dVar17 * 1.0 + dVar9 * dVar2;
    pdVar1[1] = dVar2 * dVar16 * 1.0 + dVar10 * dVar17 + dVar21 * dVar4 * -1.0 + dVar20 * dVar3;
    pdVar1[2] = dVar17 * dVar13 * 1.0 + ((dVar11 * dVar3 * 1.0 + dVar9 * dVar4) - dVar12 * dVar2);
    pdVar1[3] = dVar4 * dVar16 * -1.0 + ((dVar21 * dVar2 * -1.0 + dVar20 * dVar17) - dVar10 * dVar3)
    ;
    auVar5 = _DAT_149934d80;
    pdVar1 = *(double **)(param_2 + 0x20);
    dVar20 = *pdVar1;
    dVar9 = pdVar1[1];
    dVar11 = pdVar1[2];
    dVar21 = pdVar1[3];
    dVar10 = dVar11 * dVar11 + dVar20 * dVar20;
    dVar12 = dVar21 * dVar21 + dVar9 * dVar9;
    auVar14._0_8_ = dVar10 + dVar12;
    auVar14._8_8_ = dVar10 + dVar12;
    uVar8 = -(ulonglong)(1e-08 <= auVar14._8_8_);
    auVar15 = sqrtpd(auVar14,auVar14);
    auVar18 = divpd(_DAT_149934d80,auVar15);
    auVar19._0_8_ = auVar18._0_8_ * dVar11;
    auVar19._8_8_ = auVar18._8_8_ * dVar21;
    auVar15._8_4_ = (int)uVar8;
    auVar15._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
    auVar15._12_4_ = (int)(uVar8 >> 0x20);
    auVar15 = blendvpd(_DAT_149935300,auVar19,auVar15);
    *pdVar1 = (double)((ulonglong)(dVar20 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_));
    pdVar1[1] = (double)((ulonglong)(dVar9 * auVar18._8_8_) & uVar8);
    *(undefined1 (*) [16])(pdVar1 + 2) = auVar15;
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      plVar7 = (longlong *)FUN_14010173e();
      if (plVar7 != (longlong *)0x0) {
        param_2 = param_2 + 0x58;
        cVar6 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        if (cVar6 != '\0') {
          local_118 = 0.0;
          dStack_110 = 0.0;
          local_108 = 0.0;
          dStack_100 = 1.0;
          local_f8 = ZEXT816(0);
          local_e8 = 0.0;
          uStack_e0 = 0;
          local_d8 = auVar5;
          local_c8 = 0x3ff0000000000000;
          uStack_c0 = 0;
          cVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
          if (cVar6 != '\0') {
            dVar21 = dVar3 * local_e8 - (double)local_f8._8_8_ * dVar4;
            dVar21 = dVar21 + dVar21;
            dVar20 = dVar2 * (double)local_f8._8_8_ - (double)local_f8._0_8_ * dVar3;
            dVar20 = dVar20 + dVar20;
            dVar9 = dVar4 * (double)local_f8._0_8_ - local_e8 * dVar2;
            dVar9 = dVar9 + dVar9;
            local_e8 = (dVar2 * dVar9 - dVar21 * dVar3) + dVar17 * dVar20 + local_e8;
            dVar11 = (dVar4 * dVar21 - dVar20 * dVar2) + dVar17 * dVar9 + (double)local_f8._8_8_;
            local_f8._8_4_ = SUB84(dVar11,0);
            local_f8._0_8_ =
                 (dVar3 * dVar20 - dVar9 * dVar4) + dVar17 * dVar21 + (double)local_f8._0_8_;
            local_f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            uStack_e0 = 0;
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_118,param_2);
          }
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cd060 FUN_1474cd060 body=285 status=ok
// SIG undefined FUN_1474cd060(void)

void FUN_1474cd060(longlong param_1,undefined8 param_2)

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
  FUN_1474cd17e(param_2,&local_40);
  FUN_140002266(&local_50,L"Pitch(%.2f) Yaw(%.2f)",(double)*(float *)(param_1 + 0xac),
                (double)*(float *)(param_1 + 0xb0));
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



// FUNCTION 1474cd17e FUN_1474cd17e body=256 status=ok
// SIG undefined FUN_1474cd17e(void)

undefined8 FUN_1474cd17e(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa438 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa438 = FUN_140002ddd(FUN_146331801,uVar2,L"AnimNode_RotateRootBone");
  }
  local_48 = *(undefined8 *)(DAT_14caaa438 + 0x18);
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



// FUNCTION 1474cd322 FUN_1474cd322 body=294 status=ok
// SIG undefined FUN_1474cd322(void)

void FUN_1474cd322(longlong param_1,undefined8 param_2)

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
  FUN_1474cd44a(param_2,&local_40);
  FUN_140002266(&local_50,L"Alpha (%.1f%%) PlayTime (%.3f)",
                (double)(*(float *)(param_1 + 0x118) * 100.0),(double)*(float *)(param_1 + 0x2c));
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
  FUN_147906d38(param_1 + 0x78,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cd44a FUN_1474cd44a body=256 status=ok
// SIG undefined FUN_1474cd44a(void)

undefined8 FUN_1474cd44a(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa450 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa450 = FUN_140002ddd(FUN_146331897,uVar2,L"AnimNode_RotationOffsetBlendSpace");
  }
  local_48 = *(undefined8 *)(DAT_14caaa450 + 0x18);
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



// FUNCTION 1474cd554 FUN_1474cd554 body=38 status=ok
// SIG undefined FUN_1474cd554(void)

void FUN_1474cd554(longlong param_1,undefined8 param_2)

{
  FUN_141797956();
  FUN_140320438(param_1 + 0x70,param_2);
  return;
}



// FUNCTION 1474cd57a FUN_1474cd57a body=108 status=ok
// SIG undefined FUN_1474cd57a(void)

void FUN_1474cd57a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined4 *)(param_1 + 0x110) = 0;
  cVar2 = FUN_144a64422(param_1,*param_2);
  *(char *)(param_1 + 0x116) = cVar2;
  if (cVar2 != '\0') {
    uVar1 = FUN_14477dc2a(param_1);
    FUN_14477dadc(uVar1,param_2);
    cVar2 = FUN_1474cd5e6(param_1,param_2);
    if (cVar2 != '\0') {
      FUN_1401e07f0(param_1,param_2);
    }
  }
  FUN_14474897c(param_1 + 0x70,param_2);
  return;
}



// FUNCTION 1474cd5e6 FUN_1474cd5e6 body=283 status=ok
// SIG undefined FUN_1474cd5e6(void)

bool FUN_1474cd5e6(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float extraout_XMM0_Da_00;
  undefined4 uVar5;
  float extraout_XMM0_Da_01;
  
  cVar1 = *(char *)(param_1 + 0x114);
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(*param_2 + 0x130);
    if (lVar2 == 0) goto LAB_1474cd66c;
    lVar3 = FUN_1402e44f4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1474cd66c;
    lVar3 = param_2[5];
    uVar5 = FUN_144945460(lVar2,*(undefined8 *)(param_1 + 0xd8));
    FUN_144a85682(param_1 + 0xe0,uVar5,(int)lVar3);
    fVar4 = extraout_XMM0_Da_01;
  }
  else if (cVar1 == '\x01') {
    FUN_1447f0fd6(param_1 + 0x90,*(undefined1 *)(param_1 + 0x115),(int)param_2[5]);
    fVar4 = extraout_XMM0_Da_00;
  }
  else {
    if (cVar1 != '\0') goto LAB_1474cd66c;
    FUN_144a85682(param_1 + 0xe0,*(undefined4 *)(param_1 + 0x84),(int)param_2[5]);
    fVar4 = extraout_XMM0_Da * *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x8c);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  *(float *)(param_1 + 0x110) = fVar4;
LAB_1474cd66c:
  fVar4 = *(float *)(param_1 + 0x110);
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x110) = fVar4;
  return 1e-05 < fVar4;
}



// FUNCTION 1474cd702 FUN_1474cd702 body=241 status=ok
// SIG undefined FUN_1474cd702(void)

void FUN_1474cd702(longlong param_1,longlong param_2)

{
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [24];
  undefined1 local_88 [32];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1447139fe(param_1 + 0x70);
  if ((*(char *)(param_1 + 0x116) == '\x01') && (1e-05 < *(float *)(param_1 + 0x110))) {
    FUN_144ade07e(local_c0,param_2,0);
    FUN_141797a0e(param_1,local_c0);
    local_d8 = param_2 + 0x20;
    local_d0 = param_2 + 0x38;
    local_c8 = param_2 + 0x58;
    local_f0 = local_a0;
    local_e8 = local_88;
    local_e0 = local_68;
    FUN_1401b1c56(&local_d8,&local_f0,*(undefined4 *)(param_1 + 0x110));
    FUN_142400cf0(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
    FUN_1447166b4(local_68);
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cd7f4 FUN_1474cd7f4 body=284 status=ok
// SIG undefined FUN_1474cd7f4(void)

void FUN_1474cd7f4(longlong param_1,undefined8 param_2)

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
  FUN_1474cd912(param_2,&local_40);
  FUN_140002266(&local_50,L"Alpha (%.1f%%)",(double)(*(float *)(param_1 + 0x110) * 100.0));
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
  FUN_147906d38(param_1 + 0x70,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cd912 FUN_1474cd912 body=256 status=ok
// SIG undefined FUN_1474cd912(void)

undefined8 FUN_1474cd912(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa468 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa468 = FUN_140002ddd(FUN_14633192d,uVar2,L"AnimNode_RotationOffsetBlendSpaceGraph");
  }
  local_48 = *(undefined8 *)(DAT_14caaa468 + 0x18);
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



// FUNCTION 1474cda36 FUN_1474cda36 body=418 status=ok
// SIG undefined FUN_1474cda36(void)

void FUN_1474cda36(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1474cdbda(param_2,&local_60);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  fVar5 = (float)(**(code **)(*param_1 + 0x1c8))(param_1);
  lVar3 = (**(code **)(*param_1 + 0x1c0))(param_1);
  if (lVar3 == 0) {
    FUN_140056680(&local_80,&DAT_149e01fe8);
  }
  else {
    local_70 = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(&local_70,&local_80);
  }
  puVar4 = local_80;
  if (local_78 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_98 = (double)fVar1;
  FUN_140002266(&local_70,L"(\'%s\' InputTime: %.3f, Time: %.3f)",puVar4,(double)fVar5);
  iVar2 = local_68 + -1;
  if (local_68 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_60,local_70,iVar2);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_60;
  local_90 = (void *)0x0;
  local_88 = local_58;
  if ((longlong)local_58 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_58,0);
    memcpy(local_90,_Src,(longlong)local_58 * 2);
  }
  FUN_147906d4c(param_2,&local_90,1);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474cdbda FUN_1474cdbda body=256 status=ok
// SIG undefined FUN_1474cdbda(void)

undefined8 FUN_1474cdbda(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa498 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa498 = FUN_140002ddd(FUN_1463319f3,uVar2,L"AnimNode_SequenceEvaluatorBase");
  }
  local_48 = *(undefined8 *)(DAT_14caaa498 + 0x18);
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



// FUNCTION 1474cdcdc FUN_1474cdcdc body=454 status=ok
// SIG undefined FUN_1474cdcdc(void)

bool FUN_1474cdcdc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaadc) {
    FUN_144b3d300(&DAT_14caaaadc);
    if (DAT_14caaaadc == -1) {
      DAT_14caaaad0 = 0;
      DAT_14caaaad8 = -1;
      _Init_thread_footer(&DAT_14caaaadc);
    }
  }
  if (DAT_14caaaad8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaae8) {
      FUN_144b3d300(&DAT_14caaaae8);
      if (DAT_14caaaae8 == -1) {
        FUN_1446ddc76(&DAT_14caaaae0,"Sequence",1);
        _Init_thread_footer(&DAT_14caaaae8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaaae0,param_1,DAT_14caaa4b0);
    DAT_14caaaad0 = local_30;
    DAT_14caaaad8 = local_28;
  }
  local_28 = DAT_14caaaad8;
  local_30 = DAT_14caaaad0;
  plVar1 = (longlong *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (plVar1 != (longlong *)0x0) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *plVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cdea4 FUN_1474cdea4 body=404 status=ok
// SIG undefined FUN_1474cdea4(void)

undefined8 FUN_1474cdea4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaafc) {
    FUN_144b3d300(&DAT_14caaaafc);
    if (DAT_14caaaafc == -1) {
      DAT_14caaaaf0 = 0;
      DAT_14caaaaf8 = -1;
      _Init_thread_footer(&DAT_14caaaafc);
    }
  }
  if (DAT_14caaaaf8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaab08) {
      FUN_144b3d300(&DAT_14caaab08);
      if (DAT_14caaab08 == -1) {
        FUN_1446ddc76(&DAT_14caaab00,"Sequence",1);
        _Init_thread_footer(&DAT_14caaab08);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaab00,param_1,DAT_14caaa4b0);
    DAT_14caaaaf0 = local_28;
    DAT_14caaaaf8 = local_20;
  }
  local_20 = DAT_14caaaaf8;
  local_28 = DAT_14caaaaf0;
  puVar1 = (undefined8 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ce03a FUN_1474ce03a body=403 status=ok
// SIG undefined FUN_1474ce03a(void)

undefined1 FUN_1474ce03a(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaab1c) {
    FUN_144b3d300(&DAT_14caaab1c);
    if (DAT_14caaab1c == -1) {
      DAT_14caaab10 = 0;
      DAT_14caaab18 = -1;
      _Init_thread_footer(&DAT_14caaab1c);
    }
  }
  if (DAT_14caaab18 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaab28) {
      FUN_144b3d300(&DAT_14caaab28);
      if (DAT_14caaab28 == -1) {
        FUN_1446ddc76(&DAT_14caaab20,"bUseExplicitFrame",1);
        _Init_thread_footer(&DAT_14caaab28);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaab20,param_1,DAT_14caaa4b0);
    DAT_14caaab10 = local_28;
    DAT_14caaab18 = local_20;
  }
  local_20 = DAT_14caaab18;
  local_28 = DAT_14caaab10;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ce1ce FUN_1474ce1ce body=418 status=ok
// SIG undefined FUN_1474ce1ce(void)

bool FUN_1474ce1ce(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaab3c) {
    FUN_144b3d300(&DAT_14caaab3c);
    if (DAT_14caaab3c == -1) {
      DAT_14caaab30 = 0;
      DAT_14caaab38 = -1;
      _Init_thread_footer(&DAT_14caaab3c);
    }
  }
  if (DAT_14caaab38 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaab48) {
      FUN_144b3d300(&DAT_14caaab48);
      if (DAT_14caaab48 == -1) {
        FUN_1446ddc76(&DAT_14caaab40,"ExplicitFrame",1);
        _Init_thread_footer(&DAT_14caaab48);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaab40,param_1,DAT_14caaa4b0);
    DAT_14caaab30 = local_30;
    DAT_14caaab38 = local_28;
  }
  local_28 = DAT_14caaab38;
  local_30 = DAT_14caaab30;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ce372 FUN_1474ce372 body=870 status=ok
// SIG undefined FUN_1474ce372(void)

void FUN_1474ce372(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1474ce03a();
  if (cVar2 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaab7c) {
      FUN_144b3d300(&DAT_14caaab7c);
      if (DAT_14caaab7c == -1) {
        DAT_14caaab70 = 0;
        DAT_14caaab78 = -1;
        _Init_thread_footer(&DAT_14caaab7c);
      }
    }
    if (DAT_14caaab78 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caaab88) {
        FUN_144b3d300(&DAT_14caaab88);
        if (DAT_14caaab88 == -1) {
          FUN_1446ddc76(&DAT_14caaab80,"ExplicitTime",1);
          _Init_thread_footer(&DAT_14caaab88);
        }
      }
      if (DAT_14caaa4b0 == 0) {
        uVar6 = FUN_140c6b56d();
        DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar6,L"AnimNode_SequenceEvaluator");
      }
      FUN_14094e66e(&local_30,DAT_14caaab80,param_1,DAT_14caaa4b0);
      DAT_14caaab70 = local_30;
      DAT_14caaab78 = local_28;
    }
    local_28 = DAT_14caaab78;
    local_30 = DAT_14caaab70;
    pfVar5 = (float *)FUN_144b20046(param_1[1],&local_30,param_1,0);
    fVar7 = *pfVar5;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x1c0))(param_1);
    if (plVar3 == (longlong *)0x0) {
      fVar7 = 0.0;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caaab5c) {
        FUN_144b3d300(&DAT_14caaab5c);
        if (DAT_14caaab5c == -1) {
          DAT_14caaab50 = 0;
          DAT_14caaab58 = -1;
          _Init_thread_footer(&DAT_14caaab5c);
        }
      }
      if (DAT_14caaab58 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14caaab68) {
          FUN_144b3d300(&DAT_14caaab68);
          if (DAT_14caaab68 == -1) {
            FUN_1446ddc76(&DAT_14caaab60,"ExplicitFrame",1);
            _Init_thread_footer(&DAT_14caaab68);
          }
        }
        if (DAT_14caaa4b0 == 0) {
          uVar6 = FUN_140c6b56d();
          DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar6,L"AnimNode_SequenceEvaluator");
        }
        FUN_14094e66e(&local_30,DAT_14caaab60,param_1,DAT_14caaa4b0);
        DAT_14caaab50 = local_30;
        DAT_14caaab58 = local_28;
      }
      local_28 = DAT_14caaab58;
      local_30 = DAT_14caaab50;
      piVar4 = (int *)FUN_144b20046(param_1[1],&local_30,param_1,0);
      iVar1 = *piVar4;
      (**(code **)(*plVar3 + 0x318))(plVar3,&local_30);
      fVar7 = (float)(((double)((longlong)iVar1 * (longlong)local_30._4_4_) +
                      (double)((ulonglong)(double)local_30._4_4_ & 0x8000000000000000)) /
                     (double)(int)local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar7);
}



// FUNCTION 1474ce6da FUN_1474ce6da body=429 status=ok
// SIG undefined FUN_1474ce6da(void)

bool FUN_1474ce6da(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaab9c) {
    FUN_144b3d300(&DAT_14caaab9c);
    if (DAT_14caaab9c == -1) {
      DAT_14caaab90 = 0;
      DAT_14caaab98 = -1;
      _Init_thread_footer(&DAT_14caaab9c);
    }
  }
  if (DAT_14caaab98 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaba8) {
      FUN_144b3d300(&DAT_14caaaba8);
      if (DAT_14caaaba8 == -1) {
        FUN_1446ddc76(&DAT_14caaaba0,"ExplicitTime",1);
        _Init_thread_footer(&DAT_14caaaba8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_40,DAT_14caaaba0,param_1,DAT_14caaa4b0);
    DAT_14caaab90 = local_40;
    DAT_14caaab98 = local_38;
  }
  local_38 = DAT_14caaab98;
  local_40 = DAT_14caaab90;
  puVar1 = (undefined4 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_40,param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ce888 FUN_1474ce888 body=418 status=ok
// SIG undefined FUN_1474ce888(void)

bool FUN_1474ce888(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaabbc) {
    FUN_144b3d300(&DAT_14caaabbc);
    if (DAT_14caaabbc == -1) {
      DAT_14caaabb0 = 0;
      DAT_14caaabb8 = -1;
      _Init_thread_footer(&DAT_14caaabbc);
    }
  }
  if (DAT_14caaabb8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaabc8) {
      FUN_144b3d300(&DAT_14caaabc8);
      if (DAT_14caaabc8 == -1) {
        FUN_1446ddc76(&DAT_14caaabc0,"bShouldLoop",1);
        _Init_thread_footer(&DAT_14caaabc8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaabc0,param_1,DAT_14caaa4b0);
    DAT_14caaabb0 = local_30;
    DAT_14caaabb8 = local_28;
  }
  local_28 = DAT_14caaabb8;
  local_30 = DAT_14caaabb0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cea2c FUN_1474cea2c body=403 status=ok
// SIG undefined FUN_1474cea2c(void)

undefined1 FUN_1474cea2c(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaabdc) {
    FUN_144b3d300(&DAT_14caaabdc);
    if (DAT_14caaabdc == -1) {
      DAT_14caaabd0 = 0;
      DAT_14caaabd8 = -1;
      _Init_thread_footer(&DAT_14caaabdc);
    }
  }
  if (DAT_14caaabd8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaabe8) {
      FUN_144b3d300(&DAT_14caaabe8);
      if (DAT_14caaabe8 == -1) {
        FUN_1446ddc76(&DAT_14caaabe0,"bShouldLoop",1);
        _Init_thread_footer(&DAT_14caaabe8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaabe0,param_1,DAT_14caaa4b0);
    DAT_14caaabd0 = local_28;
    DAT_14caaabd8 = local_20;
  }
  local_20 = DAT_14caaabd8;
  local_28 = DAT_14caaabd0;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cebc0 FUN_1474cebc0 body=403 status=ok
// SIG undefined FUN_1474cebc0(void)

undefined1 FUN_1474cebc0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaabfc) {
    FUN_144b3d300(&DAT_14caaabfc);
    if (DAT_14caaabfc == -1) {
      DAT_14caaabf0 = 0;
      DAT_14caaabf8 = -1;
      _Init_thread_footer(&DAT_14caaabfc);
    }
  }
  if (DAT_14caaabf8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaac08) {
      FUN_144b3d300(&DAT_14caaac08);
      if (DAT_14caaac08 == -1) {
        FUN_1446ddc76(&DAT_14caaac00,"bTeleportToExplicitTime",1);
        _Init_thread_footer(&DAT_14caaac08);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaac00,param_1,DAT_14caaa4b0);
    DAT_14caaabf0 = local_28;
    DAT_14caaabf8 = local_20;
  }
  local_20 = DAT_14caaabf8;
  local_28 = DAT_14caaabf0;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ced54 FUN_1474ced54 body=413 status=ok
// SIG undefined FUN_1474ced54(void)

undefined1 * FUN_1474ced54(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaac1c) {
    FUN_144b3d300(&DAT_14caaac1c);
    if (DAT_14caaac1c == -1) {
      DAT_14caaac10 = 0;
      DAT_14caaac18 = -1;
      _Init_thread_footer(&DAT_14caaac1c);
    }
  }
  if (DAT_14caaac18 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaac28) {
      FUN_144b3d300(&DAT_14caaac28);
      if (DAT_14caaac28 == -1) {
        FUN_1446ddc76(&DAT_14caaac20,"ReinitializationBehavior",1);
        _Init_thread_footer(&DAT_14caaac28);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaac20,param_1,DAT_14caaa4b0);
    DAT_14caaac10 = local_30;
    DAT_14caaac18 = local_28;
  }
  local_28 = DAT_14caaac18;
  local_30 = DAT_14caaac10;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  *param_2 = *puVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ceef2 FUN_1474ceef2 body=405 status=ok
// SIG undefined FUN_1474ceef2(void)

void FUN_1474ceef2(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaac3c) {
    FUN_144b3d300(&DAT_14caaac3c);
    if (DAT_14caaac3c == -1) {
      DAT_14caaac30 = 0;
      DAT_14caaac38 = -1;
      _Init_thread_footer(&DAT_14caaac3c);
    }
  }
  if (DAT_14caaac38 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaac48) {
      FUN_144b3d300(&DAT_14caaac48);
      if (DAT_14caaac48 == -1) {
        FUN_1446ddc76(&DAT_14caaac40,"StartPosition",1);
        _Init_thread_footer(&DAT_14caaac48);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaac40,param_1,DAT_14caaa4b0);
    DAT_14caaac30 = local_28;
    DAT_14caaac38 = local_20;
  }
  local_20 = DAT_14caaac38;
  local_28 = DAT_14caaac30;
  puVar1 = (undefined4 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*puVar1);
}



// FUNCTION 1474cf088 FUN_1474cf088 body=415 status=ok
// SIG undefined FUN_1474cf088(void)

undefined8 * FUN_1474cf088(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaac5c) {
    FUN_144b3d300(&DAT_14caaac5c);
    if (DAT_14caaac5c == -1) {
      DAT_14caaac50 = 0;
      DAT_14caaac58 = -1;
      _Init_thread_footer(&DAT_14caaac5c);
    }
  }
  if (DAT_14caaac58 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaac68) {
      FUN_144b3d300(&DAT_14caaac68);
      if (DAT_14caaac68 == -1) {
        FUN_1446ddc76(&DAT_14caaac60,"GroupName",1);
        _Init_thread_footer(&DAT_14caaac68);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaac60,param_1,DAT_14caaa4b0);
    DAT_14caaac50 = local_30;
    DAT_14caaac58 = local_28;
  }
  local_28 = DAT_14caaac58;
  local_30 = DAT_14caaac50;
  puVar1 = (undefined8 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  *param_2 = *puVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cf228 FUN_1474cf228 body=404 status=ok
// SIG undefined FUN_1474cf228(void)

undefined1 FUN_1474cf228(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaac7c) {
    FUN_144b3d300(&DAT_14caaac7c);
    if (DAT_14caaac7c == -1) {
      DAT_14caaac70 = 0;
      DAT_14caaac78 = -1;
      _Init_thread_footer(&DAT_14caaac7c);
    }
  }
  if (DAT_14caaac78 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaac88) {
      FUN_144b3d300(&DAT_14caaac88);
      if (DAT_14caaac88 == -1) {
        FUN_1446ddc76(&DAT_14caaac80,"GroupRole",1);
        _Init_thread_footer(&DAT_14caaac88);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaac80,param_1,DAT_14caaa4b0);
    DAT_14caaac70 = local_28;
    DAT_14caaac78 = local_20;
  }
  local_20 = DAT_14caaac78;
  local_28 = DAT_14caaac70;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cf3be FUN_1474cf3be body=403 status=ok
// SIG undefined FUN_1474cf3be(void)

undefined1 FUN_1474cf3be(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaac9c) {
    FUN_144b3d300(&DAT_14caaac9c);
    if (DAT_14caaac9c == -1) {
      DAT_14caaac90 = 0;
      DAT_14caaac98 = -1;
      _Init_thread_footer(&DAT_14caaac9c);
    }
  }
  if (DAT_14caaac98 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaca8) {
      FUN_144b3d300(&DAT_14caaaca8);
      if (DAT_14caaaca8 == -1) {
        FUN_1446ddc76(&DAT_14caaaca0,"Method",1);
        _Init_thread_footer(&DAT_14caaaca8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaaca0,param_1,DAT_14caaa4b0);
    DAT_14caaac90 = local_28;
    DAT_14caaac98 = local_20;
  }
  local_20 = DAT_14caaac98;
  local_28 = DAT_14caaac90;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cf552 FUN_1474cf552 body=403 status=ok
// SIG undefined FUN_1474cf552(void)

undefined1 FUN_1474cf552(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaacbc) {
    FUN_144b3d300(&DAT_14caaacbc);
    if (DAT_14caaacbc == -1) {
      DAT_14caaacb0 = 0;
      DAT_14caaacb8 = -1;
      _Init_thread_footer(&DAT_14caaacbc);
    }
  }
  if (DAT_14caaacb8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaacc8) {
      FUN_144b3d300(&DAT_14caaacc8);
      if (DAT_14caaacc8 == -1) {
        FUN_1446ddc76(&DAT_14caaacc0,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaacc8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaacc0,param_1,DAT_14caaa4b0);
    DAT_14caaacb0 = local_28;
    DAT_14caaacb8 = local_20;
  }
  local_20 = DAT_14caaacb8;
  local_28 = DAT_14caaacb0;
  puVar1 = (undefined1 *)FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cf6e6 FUN_1474cf6e6 body=420 status=ok
// SIG undefined FUN_1474cf6e6(void)

bool FUN_1474cf6e6(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaacdc) {
    FUN_144b3d300(&DAT_14caaacdc);
    if (DAT_14caaacdc == -1) {
      DAT_14caaacd0 = 0;
      DAT_14caaacd8 = -1;
      _Init_thread_footer(&DAT_14caaacdc);
    }
  }
  if (DAT_14caaacd8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaace8) {
      FUN_144b3d300(&DAT_14caaace8);
      if (DAT_14caaace8 == -1) {
        FUN_1446ddc76(&DAT_14caaace0,"GroupName",1);
        _Init_thread_footer(&DAT_14caaace8);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaace0,param_1,DAT_14caaa4b0);
    DAT_14caaacd0 = local_30;
    DAT_14caaacd8 = local_28;
  }
  local_28 = DAT_14caaacd8;
  local_30 = DAT_14caaacd0;
  puVar1 = (undefined8 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined8 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cf88c FUN_1474cf88c body=419 status=ok
// SIG undefined FUN_1474cf88c(void)

bool FUN_1474cf88c(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaacfc) {
    FUN_144b3d300(&DAT_14caaacfc);
    if (DAT_14caaacfc == -1) {
      DAT_14caaacf0 = 0;
      DAT_14caaacf8 = -1;
      _Init_thread_footer(&DAT_14caaacfc);
    }
  }
  if (DAT_14caaacf8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaad08) {
      FUN_144b3d300(&DAT_14caaad08);
      if (DAT_14caaad08 == -1) {
        FUN_1446ddc76(&DAT_14caaad00,"GroupRole",1);
        _Init_thread_footer(&DAT_14caaad08);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaad00,param_1,DAT_14caaa4b0);
    DAT_14caaacf0 = local_30;
    DAT_14caaacf8 = local_28;
  }
  local_28 = DAT_14caaacf8;
  local_30 = DAT_14caaacf0;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cfa30 FUN_1474cfa30 body=418 status=ok
// SIG undefined FUN_1474cfa30(void)

bool FUN_1474cfa30(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaad1c) {
    FUN_144b3d300(&DAT_14caaad1c);
    if (DAT_14caaad1c == -1) {
      DAT_14caaad10 = 0;
      DAT_14caaad18 = -1;
      _Init_thread_footer(&DAT_14caaad1c);
    }
  }
  if (DAT_14caaad18 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaad28) {
      FUN_144b3d300(&DAT_14caaad28);
      if (DAT_14caaad28 == -1) {
        FUN_1446ddc76(&DAT_14caaad20,"Method",1);
        _Init_thread_footer(&DAT_14caaad28);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaad20,param_1,DAT_14caaa4b0);
    DAT_14caaad10 = local_30;
    DAT_14caaad18 = local_28;
  }
  local_28 = DAT_14caaad18;
  local_30 = DAT_14caaad10;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cfbd4 FUN_1474cfbd4 body=418 status=ok
// SIG undefined FUN_1474cfbd4(void)

bool FUN_1474cfbd4(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaad3c) {
    FUN_144b3d300(&DAT_14caaad3c);
    if (DAT_14caaad3c == -1) {
      DAT_14caaad30 = 0;
      DAT_14caaad38 = -1;
      _Init_thread_footer(&DAT_14caaad3c);
    }
  }
  if (DAT_14caaad38 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaad48) {
      FUN_144b3d300(&DAT_14caaad48);
      if (DAT_14caaad48 == -1) {
        FUN_1446ddc76(&DAT_14caaad40,"bIgnoreForRelevancyTest",1);
        _Init_thread_footer(&DAT_14caaad48);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar2,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_30,DAT_14caaad40,param_1,DAT_14caaa4b0);
    DAT_14caaad30 = local_30;
    DAT_14caaad38 = local_28;
  }
  local_28 = DAT_14caaad38;
  local_30 = DAT_14caaad30;
  puVar1 = (undefined1 *)FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_30,param_1,0);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1 != (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cfd78 FUN_1474cfd78 body=401 status=ok
// SIG undefined FUN_1474cfd78(void)

void FUN_1474cfd78(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaad5c) {
    FUN_144b3d300(&DAT_14caaad5c);
    if (DAT_14caaad5c == -1) {
      DAT_14caaad50 = 0;
      DAT_14caaad58 = -1;
      _Init_thread_footer(&DAT_14caaad5c);
    }
  }
  if (DAT_14caaad58 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaad68) {
      FUN_144b3d300(&DAT_14caaad68);
      if (DAT_14caaad68 == -1) {
        FUN_1446ddc76(&DAT_14caaad60,"Sequence",1);
        _Init_thread_footer(&DAT_14caaad68);
      }
    }
    if (DAT_14caaa4b0 == 0) {
      uVar1 = FUN_140c6b56d();
      DAT_14caaa4b0 = FUN_140002ddd(FUN_146331a89,uVar1,L"AnimNode_SequenceEvaluator");
    }
    FUN_14094e66e(&local_28,DAT_14caaad60,param_1,DAT_14caaa4b0);
    DAT_14caaad50 = local_28;
    DAT_14caaad58 = local_20;
  }
  local_20 = DAT_14caaad58;
  local_28 = DAT_14caaad50;
  FUN_144b201d0(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474cff10 FUN_1474cff10 body=964 status=ok
// SIG undefined FUN_1474cff10(void)

void FUN_1474cff10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *pvVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 *local_e0;
  int local_d8;
  float local_cc [7];
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined2 *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1474d02d6(param_2,&local_80);
  fVar2 = *(float *)(param_1 + 0x38);
  puVar1 = (undefined8 *)(param_1 + 0x28);
  FUN_1400021e4(puVar1,&local_a0);
  puVar12 = local_a0;
  if (local_98 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_90,L"(Slot Name: \'%s\' Weight:%.1f%%)",puVar12,(double)(fVar2 * 100.0));
  iVar5 = local_88 + -1;
  if (local_88 == 0) {
    iVar5 = 0;
  }
  FUN_1400020e8(&local_80,local_90,iVar5);
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  pvVar6 = local_80;
  fVar2 = *(float *)(param_1 + 0x34);
  local_b0 = (void *)0x0;
  local_a8 = local_78;
  if ((longlong)local_78 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_78,0);
    memcpy(local_b0,pvVar6,(longlong)local_78 * 2);
  }
  FUN_147906d4c(param_2,&local_b0,fVar2 <= 1e-05);
  local_cc[1] = 0.0;
  local_cc[2] = 0.0;
  local_cc[3] = 0.0;
  local_cc[4] = 0.0;
  uVar8 = FUN_147906f5e(param_2,*(undefined4 *)(param_1 + 0x34));
  FUN_147906d38(param_1 + 0x18,uVar8);
  lVar13 = (longlong)*(int *)(*(longlong *)(param_2 + 0x40) + 0x90);
  if (lVar13 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x88);
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      if ((((*plVar4 != 0) && (cVar7 = FUN_14790116e(*plVar4,*puVar1), cVar7 != '\0')) &&
          (lVar9 = FUN_1456b2ecc(*plVar4,*puVar1), lVar9 != 0)) &&
         ((lVar9 = FUN_1478df46e(lVar9,(int)plVar4[0x29]), lVar9 != 0 &&
          (lVar9 = FUN_140cc2e50(lVar9,(int)plVar4[0x29],local_cc), lVar9 != 0)))) {
        fVar2 = *(float *)(param_1 + 0x38);
        local_90 = *(void **)(lVar9 + 0x18);
        FUN_1400021e4(&local_90,&local_a0);
        puVar12 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar12 = local_a0;
        }
        local_90 = *(void **)(*plVar4 + 0x18);
        FUN_1400021e4(&local_90,&local_e0);
        puVar10 = &DAT_149dfb77a;
        if (local_d8 != 0) {
          puVar10 = local_e0;
        }
        local_110 = (double)(fVar2 * 100.0);
        local_118 = (double)local_cc[0];
        FUN_140002266(&local_90,L"Montage(\'%s\') Anim(\'%s\') P(%.2f) W(%.0f%%)",puVar10,puVar12);
        if (local_e0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_f8 = 0;
        uStack_f0 = 0;
        uVar8 = FUN_147906f5e(param_2,0x3f800000);
        pvVar6 = local_90;
        local_108 = (void *)0x0;
        local_100 = local_88;
        if ((longlong)local_88 == 0) {
          local_fc = 0;
        }
        else {
          FUN_1446dd670(&local_108,local_88,0);
          memcpy(local_108,pvVar6,(longlong)local_88 * 2);
        }
        FUN_147906d4c(uVar8,&local_108,1);
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar11 = lVar11 + 8;
    } while (lVar13 * 8 != lVar11);
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474d02d6 FUN_1474d02d6 body=256 status=ok
// SIG undefined FUN_1474d02d6(void)

undefined8 FUN_1474d02d6(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa4e0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa4e0 = FUN_140002ddd(FUN_146331b7f,uVar2,L"AnimNode_Slot");
  }
  local_48 = *(undefined8 *)(DAT_14caaa4e0 + 0x18);
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



// FUNCTION 1474d03d8 FUN_1474d03d8 body=38 status=ok
// SIG undefined FUN_1474d03d8(void)

undefined8 FUN_1474d03d8(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d03fe FUN_1474d03fe body=55 status=ok
// SIG undefined FUN_1474d03fe(void)

void FUN_1474d03fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa030 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa030 = FUN_140002ddd(FUN_146330361,uVar1,L"AnimNode_AimOffsetLookAt");
  }
  return;
}



// FUNCTION 1474d045a FUN_1474d045a body=38 status=ok
// SIG undefined FUN_1474d045a(void)

undefined8 FUN_1474d045a(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d0480 FUN_1474d0480 body=55 status=ok
// SIG undefined FUN_1474d0480(void)

void FUN_1474d0480(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa138 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa138 = FUN_140002ddd(FUN_146330875,uVar1,L"AnimNode_BlendSpaceEvaluator");
  }
  return;
}



// FUNCTION 1474d04c0 FUN_1474d04c0 body=38 status=ok
// SIG undefined FUN_1474d04c0(void)

undefined8 FUN_1474d04c0(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d04e6 FUN_1474d04e6 body=55 status=ok
// SIG undefined FUN_1474d04e6(void)

void FUN_1474d04e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa150 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa150 = FUN_140002ddd(FUN_14633090b,uVar1,L"AnimNode_BlendSpaceEvaluator_Standalone");
  }
  return;
}



// FUNCTION 1474d0556 FUN_1474d0556 body=38 status=ok
// SIG undefined FUN_1474d0556(void)

undefined8 FUN_1474d0556(undefined8 param_1,int param_2)

{
  FUN_145956d70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d057c FUN_1474d057c body=55 status=ok
// SIG undefined FUN_1474d057c(void)

void FUN_1474d057c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa1f8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa1f8 = FUN_140002ddd(FUN_146330c65,uVar1,L"AnimNode_CopyPoseFromMesh");
  }
  return;
}



// FUNCTION 1474d05b8 FUN_1474d05b8 body=29 status=ok
// SIG undefined FUN_1474d05b8(void)

undefined8 FUN_1474d05b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d05d6 FUN_1474d05d6 body=55 status=ok
// SIG undefined FUN_1474d05d6(void)

void FUN_1474d05d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa210 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa210 = FUN_140002ddd(FUN_146330d1d,uVar1,L"AnimNode_CurveSource");
  }
  return;
}



// FUNCTION 1474d0612 FUN_1474d0612 body=55 status=ok
// SIG undefined FUN_1474d0612(void)

void FUN_1474d0612(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa258 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa258 = FUN_140002ddd(FUN_146330e79,uVar1,L"AnimNode_MakeDynamicAdditive");
  }
  return;
}



// FUNCTION 1474d064a FUN_1474d064a body=38 status=ok
// SIG undefined FUN_1474d064a(void)

undefined8 FUN_1474d064a(undefined8 param_1,int param_2)

{
  FUN_140280aac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d0670 FUN_1474d0670 body=55 status=ok
// SIG undefined FUN_1474d0670(void)

void FUN_1474d0670(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa270 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa270 = FUN_140002ddd(FUN_146330f0f,uVar1,L"AnimNode_MirrorBase");
  }
  return;
}



// FUNCTION 1474d06a8 FUN_1474d06a8 body=55 status=ok
// SIG undefined FUN_1474d06a8(void)

void FUN_1474d06a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa288 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar1,L"AnimNode_Mirror");
  }
  return;
}



// FUNCTION 1474d06e0 FUN_1474d06e0 body=55 status=ok
// SIG undefined FUN_1474d06e0(void)

void FUN_1474d06e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa2a0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa2a0 = FUN_140002ddd(FUN_146331004,uVar1,L"AnimNode_Mirror_Standalone");
  }
  return;
}



// FUNCTION 1474d0718 FUN_1474d0718 body=38 status=ok
// SIG undefined FUN_1474d0718(void)

undefined8 FUN_1474d0718(undefined8 param_1,int param_2)

{
  FUN_1474d592a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d073e FUN_1474d073e body=55 status=ok
// SIG undefined FUN_1474d073e(void)

void FUN_1474d073e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa2d0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa2d0 = FUN_140002ddd(FUN_1463310cd,uVar1,L"AnimNode_ModifyCurve");
  }
  return;
}



// FUNCTION 1474d0776 FUN_1474d0776 body=68 status=ok
// SIG undefined FUN_1474d0776(void)

undefined8 * FUN_1474d0776(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a423190;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1474d64f6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d07ba FUN_1474d07ba body=55 status=ok
// SIG undefined FUN_1474d07ba(void)

void FUN_1474d07ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa300 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa300 = FUN_140002ddd(FUN_1463311f9,uVar1,L"AnimNode_PoseBlendNode");
  }
  return;
}



// FUNCTION 1474d0830 FUN_1474d0830 body=38 status=ok
// SIG undefined FUN_1474d0830(void)

undefined8 FUN_1474d0830(undefined8 param_1,int param_2)

{
  FUN_14328827e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d0856 FUN_1474d0856 body=55 status=ok
// SIG undefined FUN_1474d0856(void)

void FUN_1474d0856(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa3f0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa3f0 = FUN_140002ddd(FUN_14633163f,uVar1,L"AnimNode_PoseSnapshot");
  }
  return;
}



// FUNCTION 1474d0892 FUN_1474d0892 body=38 status=ok
// SIG undefined FUN_1474d0892(void)

undefined8 FUN_1474d0892(undefined8 param_1,int param_2)

{
  FUN_1474d774e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d08b8 FUN_1474d08b8 body=55 status=ok
// SIG undefined FUN_1474d08b8(void)

void FUN_1474d08b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa420 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa420 = FUN_140002ddd(FUN_14633176b,uVar1,L"AnimNode_RandomPlayer");
  }
  return;
}



// FUNCTION 1474d08f0 FUN_1474d08f0 body=29 status=ok
// SIG undefined FUN_1474d08f0(void)

undefined8 FUN_1474d08f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d090e FUN_1474d090e body=55 status=ok
// SIG undefined FUN_1474d090e(void)

void FUN_1474d090e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa438 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa438 = FUN_140002ddd(FUN_146331801,uVar1,L"AnimNode_RotateRootBone");
  }
  return;
}



// FUNCTION 1474d0946 FUN_1474d0946 body=57 status=ok
// SIG undefined FUN_1474d0946(void)

void FUN_1474d0946(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa450 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa450 = FUN_140002ddd(FUN_146331897,uVar1,L"AnimNode_RotationOffsetBlendSpace");
  }
  return;
}



// FUNCTION 1474d0980 FUN_1474d0980 body=55 status=ok
// SIG undefined FUN_1474d0980(void)

void FUN_1474d0980(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa4e0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa4e0 = FUN_140002ddd(FUN_146331b7f,uVar1,L"AnimNode_Slot");
  }
  return;
}



// FUNCTION 1474d0a30 FUN_1474d0a30 body=59 status=ok
// SIG undefined FUN_1474d0a30(void)

undefined8 FUN_1474d0a30(longlong *param_1)

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



// FUNCTION 1474d0a76 FUN_1474d0a76 body=32 status=ok
// SIG undefined FUN_1474d0a76(void)

void FUN_1474d0a76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1474d7d72(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1474d0ae4 FUN_1474d0ae4 body=55 status=ok
// SIG undefined FUN_1474d0ae4(void)

void FUN_1474d0ae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9cf0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9cf0 = FUN_140002ddd(FUN_14632f26f,uVar1,L"AnimNode_BlendSpaceGraph");
  }
  return;
}



// FUNCTION 1474d0b1c FUN_1474d0b1c body=38 status=ok
// SIG undefined FUN_1474d0b1c(void)

undefined8 FUN_1474d0b1c(undefined8 param_1,int param_2)

{
  FUN_1474d7d72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d0b42 FUN_1474d0b42 body=55 status=ok
// SIG undefined FUN_1474d0b42(void)

void FUN_1474d0b42(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa168 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa168 = FUN_140002ddd(FUN_14632f29e,uVar1,L"AnimNode_BlendSpaceGraphBase");
  }
  return;
}



// FUNCTION 1474d0b7a FUN_1474d0b7a body=134 status=ok
// SIG undefined FUN_1474d0b7a(void)

longlong FUN_1474d0b7a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar4;
  FUN_1404306dc(param_1 + 0x38,param_2 + 0x38);
  FUN_140472d3c(param_1 + 0x48,param_2 + 0x48);
  FUN_140472cde(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 1474d0c00 FUN_1474d0c00 body=111 status=ok
// SIG undefined FUN_1474d0c00(void)

void FUN_1474d0c00(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d0c6f FUN_1474d0c6f body=143 status=ok
// SIG undefined FUN_1474d0c6f(void)

void FUN_1474d0c6f(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar9[-1] = *(undefined8 *)(param_2 + 8);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      *(undefined4 *)(puVar9 + -3) = param_2[4];
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar6;
      *(undefined4 *)(puVar9 + -2) = uVar7;
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar8;
      *(undefined4 *)(puVar9 + -5) = uVar2;
      *(undefined4 *)((longlong)puVar9 + -0x24) = uVar3;
      *(undefined4 *)(puVar9 + -4) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar5;
      *puVar9 = 0;
      iVar1 = param_2[0xc];
      _Src = *(void **)(param_2 + 10);
      *(int *)(puVar9 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        FUN_1474d0cfe(puVar9,iVar1,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar1 << 3);
      }
      param_2 = param_2 + 0xe;
      puVar9 = puVar9 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d0cfe FUN_1474d0cfe body=98 status=ok
// SIG undefined FUN_1474d0cfe(void)

void FUN_1474d0cfe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d0dc4 FUN_1474d0dc4 body=59 status=ok
// SIG undefined FUN_1474d0dc4(void)

undefined8 FUN_1474d0dc4(longlong *param_1)

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



// FUNCTION 1474d0e64 FUN_1474d0e64 body=55 status=ok
// SIG undefined FUN_1474d0e64(void)

void FUN_1474d0e64(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d08 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d08 = FUN_140002ddd(FUN_14632f335,uVar1,L"AnimNode_BlendSpaceSampleResult");
  }
  return;
}



// FUNCTION 1474d0ee2 FUN_1474d0ee2 body=59 status=ok
// SIG undefined FUN_1474d0ee2(void)

undefined8 FUN_1474d0ee2(longlong *param_1)

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



// FUNCTION 1474d0f2e FUN_1474d0f2e body=57 status=ok
// SIG undefined FUN_1474d0f2e(void)

void FUN_1474d0f2e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  return;
}



// FUNCTION 1474d0fb8 FUN_1474d0fb8 body=60 status=ok
// SIG undefined FUN_1474d0fb8(void)

undefined8 * FUN_1474d0fb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d105a FUN_1474d105a body=59 status=ok
// SIG undefined FUN_1474d105a(void)

undefined8 FUN_1474d105a(longlong *param_1)

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



// FUNCTION 1474d10fa FUN_1474d10fa body=55 status=ok
// SIG undefined FUN_1474d10fa(void)

void FUN_1474d10fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d68 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d68 = FUN_140002ddd(FUN_14632f48b,uVar1,L"AnimNode_RefPose");
  }
  return;
}



// FUNCTION 1474d11d6 FUN_1474d11d6 body=59 status=ok
// SIG undefined FUN_1474d11d6(void)

undefined8 FUN_1474d11d6(longlong *param_1)

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



// FUNCTION 1474d1276 FUN_1474d1276 body=29 status=ok
// SIG undefined FUN_1474d1276(void)

undefined8 FUN_1474d1276(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d1294 FUN_1474d1294 body=55 status=ok
// SIG undefined FUN_1474d1294(void)

void FUN_1474d1294(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d80 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d80 = FUN_140002ddd(FUN_14632f521,uVar1,L"AnimNode_MeshSpaceRefPose");
  }
  return;
}



// FUNCTION 1474d1338 FUN_1474d1338 body=59 status=ok
// SIG undefined FUN_1474d1338(void)

undefined8 FUN_1474d1338(longlong *param_1)

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



// FUNCTION 1474d140e FUN_1474d140e body=226 status=ok
// SIG undefined FUN_1474d140e(void)

undefined8 FUN_1474d140e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
    do {
      *(undefined2 *)(param_2 + -0xb0) = *(undefined2 *)(param_3 + -0xb0);
      *(undefined8 *)(param_2 + -0xb8) = *(undefined8 *)(param_3 + -0xb8);
      uVar1 = *(undefined4 *)(param_3 + -0xa4);
      uVar2 = *(undefined4 *)(param_3 + -0xa0);
      uVar3 = *(undefined4 *)(param_3 + -0x9c);
      uVar4 = *(undefined4 *)(param_3 + -0x98);
      uVar5 = *(undefined4 *)(param_3 + -0x94);
      uVar6 = *(undefined4 *)(param_3 + -0x90);
      uVar7 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0xa8) = *(undefined4 *)(param_3 + -0xa8);
      *(undefined4 *)(param_2 + -0xa4) = uVar1;
      *(undefined4 *)(param_2 + -0xa0) = uVar2;
      *(undefined4 *)(param_2 + -0x9c) = uVar3;
      *(undefined4 *)(param_2 + -0x98) = uVar4;
      *(undefined4 *)(param_2 + -0x94) = uVar5;
      *(undefined4 *)(param_2 + -0x90) = uVar6;
      *(undefined4 *)(param_2 + -0x8c) = uVar7;
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      FUN_14123bd80(param_2 + -0x80,param_3 + -0x80);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140d2c6ac(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_3 + 0x36);
      uVar12 = *(undefined8 *)(param_3 + 0x18);
      uVar13 = *(undefined8 *)(param_3 + 0x20);
      uVar14 = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = uVar14;
      *(undefined8 *)(param_2 + 0x18) = uVar12;
      *(undefined8 *)(param_2 + 0x20) = uVar13;
      param_3 = param_3 + 0x100;
      param_2 = param_2 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d1518 FUN_1474d1518 body=59 status=ok
// SIG undefined FUN_1474d1518(void)

undefined8 FUN_1474d1518(longlong *param_1)

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



// FUNCTION 1474d1564 FUN_1474d1564 body=57 status=ok
// SIG undefined FUN_1474d1564(void)

void FUN_1474d1564(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1474d165a FUN_1474d165a body=59 status=ok
// SIG undefined FUN_1474d165a(void)

undefined8 FUN_1474d165a(longlong *param_1)

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



// FUNCTION 1474d16fc FUN_1474d16fc body=175 status=ok
// SIG undefined FUN_1474d16fc(void)

void FUN_1474d16fc(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xd0] = 4;
  *(undefined8 *)(param_2 + 0xd8) = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  param_2[0xf0] = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0x42340000;
  *(undefined4 *)(param_2 + 0x100) = 0x42340000;
  param_2[0x104] = 0;
  FUN_14109baa4(param_2 + 0x108);
  param_2[400] = 0;
  *(undefined4 *)(param_2 + 0x194) = 0x3f800000;
  param_2[0x198] = 0;
  return;
}



// FUNCTION 1474d17ac FUN_1474d17ac body=175 status=ok
// SIG undefined FUN_1474d17ac(void)

void FUN_1474d17ac(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xd0] = 4;
  *(undefined8 *)(param_2 + 0xd8) = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  param_2[0xf0] = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0x42340000;
  *(undefined4 *)(param_2 + 0x100) = 0x42340000;
  param_2[0x104] = 0;
  FUN_14109baa4(param_2 + 0x108);
  param_2[400] = 0;
  *(undefined4 *)(param_2 + 0x194) = 0x3f800000;
  param_2[0x198] = 0;
  return;
}



// FUNCTION 1474d185c FUN_1474d185c body=73 status=ok
// SIG undefined FUN_1474d185c(void)

void FUN_1474d185c(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x108) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x178) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x108) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x110);
  return;
}



// FUNCTION 1474d18bc FUN_1474d18bc body=141 status=ok
// SIG undefined FUN_1474d18bc(void)

undefined8 FUN_1474d18bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x105);
      FUN_14115e0ba(param_2 + lVar1 + 0x108,param_3 + lVar1 + 0x108);
      *(undefined8 *)(param_2 + 400 + lVar1) = *(undefined8 *)(param_3 + 400 + lVar1);
      *(undefined1 *)(param_2 + 0x198 + lVar1) = *(undefined1 *)(param_3 + 0x198 + lVar1);
      lVar1 = lVar1 + 0x1a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d1972 FUN_1474d1972 body=59 status=ok
// SIG undefined FUN_1474d1972(void)

undefined8 FUN_1474d1972(longlong *param_1)

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



// FUNCTION 1474d1a16 FUN_1474d1a16 body=87 status=ok
// SIG undefined FUN_1474d1a16(void)

void FUN_1474d1a16(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    *(undefined **)(param_1 + 0x108) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x108) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1474d1a6e FUN_1474d1a6e body=37 status=ok
// SIG undefined FUN_1474d1a6e(void)

void FUN_1474d1a6e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe28);
  FUN_14160f952(param_2);
  return;
}



// FUNCTION 1474d1ac0 FUN_1474d1ac0 body=63 status=ok
// SIG undefined FUN_1474d1ac0(void)

undefined1 FUN_1474d1ac0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1404725ea(param_2,param_3);
    param_3 = param_3 + 0xe28;
    param_2 = param_2 + 0xe28;
  }
  return 1;
}



// FUNCTION 1474d1b28 FUN_1474d1b28 body=59 status=ok
// SIG undefined FUN_1474d1b28(void)

undefined8 FUN_1474d1b28(longlong *param_1)

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



// FUNCTION 1474d1b74 FUN_1474d1b74 body=38 status=ok
// SIG undefined FUN_1474d1b74(void)

void FUN_1474d1b74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe28) == '\x01') {
    FUN_140280878(param_2);
    *(undefined1 *)(param_2 + 0xe28) = 0;
  }
  return;
}



// FUNCTION 1474d1be8 FUN_1474d1be8 body=98 status=ok
// SIG undefined FUN_1474d1be8(void)

void FUN_1474d1be8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474d1c4a FUN_1474d1c4a body=201 status=ok
// SIG undefined FUN_1474d1c4a(void)

undefined4 * FUN_1474d1c4a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *_Src;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar2 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0xe] = param_2[0xe];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar9 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  puVar10 = *(undefined4 **)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1b] = 8;
  }
  else {
    _Src = param_2 + 0x10;
    if (puVar10 != (undefined4 *)0x0) {
      _Src = puVar10;
    }
    FUN_140320716(param_1 + 0x10,iVar1,0);
    puVar10 = *(undefined4 **)(param_1 + 0x18);
    if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
      puVar10 = param_1 + 0x10;
    }
    memcpy(puVar10,_Src,(longlong)iVar1 << 2);
  }
  FUN_140f7ece8(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1474d1d14 FUN_1474d1d14 body=131 status=ok
// SIG undefined FUN_1474d1d14(void)

longlong FUN_1474d1d14(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  FUN_140472df2(param_1 + 0x30,param_2 + 0x30);
  FUN_140472d9a(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  lVar4 = *(longlong *)(param_2 + 0x58);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x58);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar4;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 1474d1d98 FUN_1474d1d98 body=131 status=ok
// SIG undefined FUN_1474d1d98(void)

longlong FUN_1474d1d98(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  FUN_140472d3c(param_1 + 0x40,param_2 + 0x40);
  FUN_140472cde(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  lVar8 = *(longlong *)(param_2 + 0x68);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x68);
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar8;
  return param_1;
}



// FUNCTION 1474d1e1c FUN_1474d1e1c body=38 status=ok
// SIG undefined FUN_1474d1e1c(void)

undefined8 FUN_1474d1e1c(undefined8 param_1,int param_2)

{
  FUN_140280878();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d1e42 FUN_1474d1e42 body=55 status=ok
// SIG undefined FUN_1474d1e42(void)

void FUN_1474d1e42(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9ea8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9ea8 = FUN_140002ddd(FUN_14632fad7,uVar1,L"GbxAnimNode_Slot");
  }
  return;
}



// FUNCTION 1474d1e7a FUN_1474d1e7a body=67 status=ok
// SIG undefined FUN_1474d1e7a(void)

undefined8 * FUN_1474d1e7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a427bc0;
  FUN_140280aac(param_1 + 0x30);
  FUN_140f5e6f8(param_1 + 0x1d);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d1ec4 FUN_1474d1ec4 body=38 status=ok
// SIG undefined FUN_1474d1ec4(void)

undefined8 FUN_1474d1ec4(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d1eea FUN_1474d1eea body=55 status=ok
// SIG undefined FUN_1474d1eea(void)

void FUN_1474d1eea(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa180 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa180 = FUN_140002ddd(FUN_146330a39,uVar1,L"AnimNode_BlendSpacePlayerBase");
  }
  return;
}



// FUNCTION 1474d1f22 FUN_1474d1f22 body=42 status=ok
// SIG undefined FUN_1474d1f22(void)

undefined8 FUN_1474d1f22(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x3d,
                L"Pure virtual not implemented (%s)",
                L"FAnimNode_BlendSpacePlayerBase::GetBlendSpace");
  return 0;
}



// FUNCTION 1474d1f4c FUN_1474d1f4c body=69 status=ok
// SIG undefined FUN_1474d1f4c(void)

undefined8 * FUN_1474d1f4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x40,
                L"Pure virtual not implemented (%s)",L"FAnimNode_BlendSpacePlayerBase::GetPosition")
  ;
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1474d1f92 FUN_1474d1f92 body=43 status=ok
// SIG undefined FUN_1474d1f92(void)

undefined8 FUN_1474d1f92(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x43,
                L"Pure virtual not implemented (%s)",
                L"FAnimNode_BlendSpacePlayerBase::GetStartPosition");
  return 0;
}



// FUNCTION 1474d1fbe FUN_1474d1fbe body=48 status=ok
// SIG undefined FUN_1474d1fbe(void)

undefined8 FUN_1474d1fbe(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x46,
                L"Pure virtual not implemented (%s)",L"FAnimNode_BlendSpacePlayerBase::GetPlayRate")
  ;
  return 0x3f800000;
}



// FUNCTION 1474d1fee FUN_1474d1fee body=42 status=ok
// SIG undefined FUN_1474d1fee(void)

undefined1 FUN_1474d1fee(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x4d,
                L"Pure virtual not implemented (%s)",
                L"FAnimNode_BlendSpacePlayerBase::ShouldResetPlayTimeWhenBlendSpaceChanges");
  return 1;
}



// FUNCTION 1474d2018 FUN_1474d2018 body=42 status=ok
// SIG undefined FUN_1474d2018(void)

undefined8 FUN_1474d2018(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x50,
                L"Pure virtual not implemented (%s)",
                L"FAnimNode_BlendSpacePlayerBase::SetResetPlayTimeWhenBlendSpaceChanges");
  return 0;
}



// FUNCTION 1474d2042 FUN_1474d2042 body=42 status=ok
// SIG undefined FUN_1474d2042(void)

undefined8 FUN_1474d2042(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x59,
                L"Pure virtual not implemented (%s)",
                L"FAnimNode_BlendSpacePlayerBase::SetBlendSpace");
  return 0;
}



// FUNCTION 1474d206c FUN_1474d206c body=42 status=ok
// SIG undefined FUN_1474d206c(void)

undefined8 FUN_1474d206c(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x5c,
                L"Pure virtual not implemented (%s)",L"FAnimNode_BlendSpacePlayerBase::SetPosition")
  ;
  return 0;
}



// FUNCTION 1474d2096 FUN_1474d2096 body=42 status=ok
// SIG undefined FUN_1474d2096(void)

undefined8 FUN_1474d2096(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x5f,
                L"Pure virtual not implemented (%s)",L"FAnimNode_BlendSpacePlayerBase::SetPlayRate")
  ;
  return 0;
}



// FUNCTION 1474d20c0 FUN_1474d20c0 body=42 status=ok
// SIG undefined FUN_1474d20c0(void)

undefined8 FUN_1474d20c0(void)

{
  FUN_140033559("Runtime\\AnimGraphRuntime\\Public\\AnimNodes/AnimNode_BlendSpacePlayer.h",0x62,
                L"Pure virtual not implemented (%s)",L"FAnimNode_BlendSpacePlayerBase::SetLoop");
  return 0;
}



// FUNCTION 1474d20ee FUN_1474d20ee body=38 status=ok
// SIG undefined FUN_1474d20ee(void)

undefined8 FUN_1474d20ee(undefined8 param_1,int param_2)

{
  FUN_141798144();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d2142 FUN_1474d2142 body=47 status=ok
// SIG undefined FUN_1474d2142(void)

void FUN_1474d2142(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d2188 FUN_1474d2188 body=83 status=ok
// SIG undefined FUN_1474d2188(void)

undefined8 FUN_1474d2188(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405b70a4(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_144a67f5c(param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1474d2204 FUN_1474d2204 body=59 status=ok
// SIG undefined FUN_1474d2204(void)

undefined8 FUN_1474d2204(longlong *param_1)

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



// FUNCTION 1474d22a2 FUN_1474d22a2 body=51 status=ok
// SIG undefined FUN_1474d22a2(void)

void FUN_1474d22a2(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1474d2342 FUN_1474d2342 body=59 status=ok
// SIG undefined FUN_1474d2342(void)

undefined8 FUN_1474d2342(longlong *param_1)

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



// FUNCTION 1474d2450 FUN_1474d2450 body=59 status=ok
// SIG undefined FUN_1474d2450(void)

undefined8 FUN_1474d2450(longlong *param_1)

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



// FUNCTION 1474d2526 FUN_1474d2526 body=63 status=ok
// SIG undefined FUN_1474d2526(void)

undefined1 FUN_1474d2526(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d264e(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 1474d258e FUN_1474d258e body=59 status=ok
// SIG undefined FUN_1474d258e(void)

undefined8 FUN_1474d258e(longlong *param_1)

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



// FUNCTION 1474d25da FUN_1474d25da body=38 status=ok
// SIG undefined FUN_1474d25da(void)

void FUN_1474d25da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1474d264e FUN_1474d264e body=88 status=ok
// SIG undefined FUN_1474d264e(void)

longlong FUN_1474d264e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1474d1d98();
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  memcpy((void *)(param_1 + 0x80),(void *)(param_2 + 0x80),0x160);
  return param_1;
}



// FUNCTION 1474d26a8 FUN_1474d26a8 body=38 status=ok
// SIG undefined FUN_1474d26a8(void)

undefined8 FUN_1474d26a8(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d26ce FUN_1474d26ce body=55 status=ok
// SIG undefined FUN_1474d26ce(void)

void FUN_1474d26ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa198 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar1,L"AnimNode_BlendSpacePlayer");
  }
  return;
}



// FUNCTION 1474d274c FUN_1474d274c body=59 status=ok
// SIG undefined FUN_1474d274c(void)

undefined8 FUN_1474d274c(longlong *param_1)

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



// FUNCTION 1474d27fa FUN_1474d27fa body=29 status=ok
// SIG undefined FUN_1474d27fa(void)

undefined8 FUN_1474d27fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d28d4 FUN_1474d28d4 body=59 status=ok
// SIG undefined FUN_1474d28d4(void)

undefined8 FUN_1474d28d4(longlong *param_1)

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



// FUNCTION 1474d2a32 FUN_1474d2a32 body=121 status=ok
// SIG undefined FUN_1474d2a32(void)

undefined8 FUN_1474d2a32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined2 *)(param_2 + -0x28) = *(undefined2 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x10);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x10) = uVar4;
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      FUN_1474d2c22(param_2,param_3);
      FUN_1474d2c22(param_2 + 0x10,param_3 + 0x10);
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x28) = uVar8;
      *(undefined4 *)(param_2 + 0x2f) = *(undefined4 *)(param_3 + 0x2f);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d2ad4 FUN_1474d2ad4 body=59 status=ok
// SIG undefined FUN_1474d2ad4(void)

undefined8 FUN_1474d2ad4(longlong *param_1)

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



// FUNCTION 1474d2b1a FUN_1474d2b1a body=34 status=ok
// SIG undefined FUN_1474d2b1a(void)

void FUN_1474d2b1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1474d2be8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1474d2b8a FUN_1474d2b8a body=38 status=ok
// SIG undefined FUN_1474d2b8a(void)

undefined8 FUN_1474d2b8a(undefined8 param_1,int param_2)

{
  FUN_1474d2be8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d2bb0 FUN_1474d2bb0 body=55 status=ok
// SIG undefined FUN_1474d2bb0(void)

void FUN_1474d2bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa0a8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa0a8 = FUN_140002ddd(FUN_146330555,uVar1,L"AnimNode_BlendBoneByChannel");
  }
  return;
}



// FUNCTION 1474d2be8 FUN_1474d2be8 body=58 status=ok
// SIG undefined FUN_1474d2be8(void)

void FUN_1474d2be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a428860;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474d2c22 FUN_1474d2c22 body=89 status=ok
// SIG undefined FUN_1474d2c22(void)

undefined8 * FUN_1474d2c22(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d2c7c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474d2c7c FUN_1474d2c7c body=115 status=ok
// SIG undefined FUN_1474d2c7c(void)

void FUN_1474d2c7c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d2d74 FUN_1474d2d74 body=144 status=ok
// SIG undefined FUN_1474d2d74(void)

undefined8 FUN_1474d2d74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x18 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_3 + lVar2 + 0x10);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      FUN_140472cde(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      *(undefined4 *)(param_2 + lVar2 + 0x48) = *(undefined4 *)(param_3 + lVar2 + 0x48);
      lVar2 = lVar2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d2e2c FUN_1474d2e2c body=59 status=ok
// SIG undefined FUN_1474d2e2c(void)

undefined8 FUN_1474d2e2c(longlong *param_1)

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



// FUNCTION 1474d2e72 FUN_1474d2e72 body=32 status=ok
// SIG undefined FUN_1474d2e72(void)

void FUN_1474d2e72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d2ee0 FUN_1474d2ee0 body=38 status=ok
// SIG undefined FUN_1474d2ee0(void)

undefined8 FUN_1474d2ee0(undefined8 param_1,int param_2)

{
  FUN_141798252();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d2f06 FUN_1474d2f06 body=55 status=ok
// SIG undefined FUN_1474d2f06(void)

void FUN_1474d2f06(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa0d8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa0d8 = FUN_140002ddd(FUN_14633061b,uVar1,L"AnimNode_BlendListBase");
  }
  return;
}



// FUNCTION 1474d2f42 FUN_1474d2f42 body=31 status=ok
// SIG undefined FUN_1474d2f42(void)

undefined8 FUN_1474d2f42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1474d2f62(param_3,param_2,param_1);
  return param_2;
}



// FUNCTION 1474d2f62 FUN_1474d2f62 body=256 status=ok
// SIG undefined FUN_1474d2f62(void)

undefined8 FUN_1474d2f62(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa0d8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa0d8 = FUN_140002ddd(FUN_14633061b,uVar2,L"AnimNode_BlendListBase");
  }
  local_48 = *(undefined8 *)(DAT_14caaa0d8 + 0x18);
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



// FUNCTION 1474d3064 FUN_1474d3064 body=98 status=ok
// SIG undefined FUN_1474d3064(void)

void FUN_1474d3064(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474d30c6 FUN_1474d30c6 body=132 status=ok
// SIG undefined FUN_1474d30c6(void)

void FUN_1474d30c6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
      lVar11 = lVar11 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1474d31bc FUN_1474d31bc body=59 status=ok
// SIG undefined FUN_1474d31bc(void)

undefined8 FUN_1474d31bc(longlong *param_1)

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



// FUNCTION 1474d3202 FUN_1474d3202 body=32 status=ok
// SIG undefined FUN_1474d3202(void)

void FUN_1474d3202(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d3270 FUN_1474d3270 body=55 status=ok
// SIG undefined FUN_1474d3270(void)

void FUN_1474d3270(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa0f0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa0f0 = FUN_140002ddd(FUN_1463306b3,uVar1,L"AnimNode_BlendListByBool");
  }
  return;
}



// FUNCTION 1474d32a8 FUN_1474d32a8 body=25 status=ok
// SIG undefined FUN_1474d32a8(void)

undefined8 FUN_1474d32a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1474d32c2(param_3);
  return param_2;
}



// FUNCTION 1474d32c2 FUN_1474d32c2 body=256 status=ok
// SIG undefined FUN_1474d32c2(void)

undefined8 FUN_1474d32c2(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa0f0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa0f0 = FUN_140002ddd(FUN_1463306b3,uVar2,L"AnimNode_BlendListByBool");
  }
  local_48 = *(undefined8 *)(DAT_14caaa0f0 + 0x18);
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



// FUNCTION 1474d3440 FUN_1474d3440 body=144 status=ok
// SIG undefined FUN_1474d3440(void)

undefined8 FUN_1474d3440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x18 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_3 + lVar2 + 0x10);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      FUN_140472cde(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      *(undefined4 *)(param_2 + lVar2 + 0x48) = *(undefined4 *)(param_3 + lVar2 + 0x48);
      lVar2 = lVar2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474d34f8 FUN_1474d34f8 body=59 status=ok
// SIG undefined FUN_1474d34f8(void)

undefined8 FUN_1474d34f8(longlong *param_1)

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



// FUNCTION 1474d353e FUN_1474d353e body=32 status=ok
// SIG undefined FUN_1474d353e(void)

void FUN_1474d353e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d35ac FUN_1474d35ac body=38 status=ok
// SIG undefined FUN_1474d35ac(void)

undefined8 FUN_1474d35ac(undefined8 param_1,int param_2)

{
  FUN_141798252();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474d35d2 FUN_1474d35d2 body=55 status=ok
// SIG undefined FUN_1474d35d2(void)

void FUN_1474d35d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa108 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa108 = FUN_140002ddd(FUN_146330749,uVar1,L"AnimNode_BlendListByEnum");
  }
  return;
}



// FUNCTION 1474d360a FUN_1474d360a body=25 status=ok
// SIG undefined FUN_1474d360a(void)

undefined8 FUN_1474d360a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1474d3624(param_3);
  return param_2;
}



// FUNCTION 1474d3624 FUN_1474d3624 body=256 status=ok
// SIG undefined FUN_1474d3624(void)

undefined8 FUN_1474d3624(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa108 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa108 = FUN_140002ddd(FUN_146330749,uVar2,L"AnimNode_BlendListByEnum");
  }
  local_48 = *(undefined8 *)(DAT_14caaa108 + 0x18);
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



// FUNCTION 1474d3796 FUN_1474d3796 body=59 status=ok
// SIG undefined FUN_1474d3796(void)

undefined8 FUN_1474d3796(longlong *param_1)

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



// FUNCTION 1474d37dc FUN_1474d37dc body=32 status=ok
// SIG undefined FUN_1474d37dc(void)

void FUN_1474d37dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1474d384a FUN_1474d384a body=55 status=ok
// SIG undefined FUN_1474d384a(void)

void FUN_1474d384a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa120 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa120 = FUN_140002ddd(FUN_1463307df,uVar1,L"AnimNode_BlendListByInt");
  }
  return;
}



// FUNCTION 1474d3882 FUN_1474d3882 body=25 status=ok
// SIG undefined FUN_1474d3882(void)

undefined8 FUN_1474d3882(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1474d389c(param_3);
  return param_2;
}



// FUNCTION 1474d389c FUN_1474d389c body=256 status=ok
// SIG undefined FUN_1474d389c(void)

undefined8 FUN_1474d389c(float *param_1,undefined8 param_2)

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
  if (DAT_14caaa120 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caaa120 = FUN_140002ddd(FUN_1463307df,uVar2,L"AnimNode_BlendListByInt");
  }
  local_48 = *(undefined8 *)(DAT_14caaa120 + 0x18);
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



// FUNCTION 1474d3a6a FUN_1474d3a6a body=63 status=ok
// SIG undefined FUN_1474d3a6a(void)

undefined1 FUN_1474d3a6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474d3b92(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1474d3ad2 FUN_1474d3ad2 body=59 status=ok
// SIG undefined FUN_1474d3ad2(void)

undefined8 FUN_1474d3ad2(longlong *param_1)

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



// FUNCTION 1474d3b1e FUN_1474d3b1e body=38 status=ok
// SIG undefined FUN_1474d3b1e(void)

void FUN_1474d3b1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140f5e6f8(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}


