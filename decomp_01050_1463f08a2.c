// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463f08a2 FUN_1463f08a2 body=171 status=ok
// SIG undefined FUN_1463f08a2(void)

void FUN_1463f08a2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x800020000;
  local_18 = 0x1100000002;
  local_98 = 0x1001001040001;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f094e FUN_1463f094e body=67 status=ok
// SIG undefined FUN_1463f094e(void)

void FUN_1463f094e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04670;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463f0992 FUN_1463f0992 body=71 status=ok
// SIG undefined FUN_1463f0992(void)

void FUN_1463f0992(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf4bcd = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f09c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf4bc0 + 0x18))(&DAT_14caf4bc0,uVar1,*(code **)(DAT_14caf4bc0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf4bc0,0);
  return;
}



// FUNCTION 1463f09da FUN_1463f09da body=214 status=ok
// SIG undefined FUN_1463f09da(void)

void FUN_1463f09da(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x1004c00040000;
  local_98 = 0x1004c01041000;
  local_90 = 0x1004c02042000;
  local_88 = 0x1004c03043000;
  local_80 = 0x1004c04034000;
  local_18 = 0x1100000006;
  local_78 = 0x805020001;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f0ab2 FUN_1463f0ab2 body=67 status=ok
// SIG undefined FUN_1463f0ab2(void)

void FUN_1463f0ab2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa046e0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463f0af6 FUN_1463f0af6 body=71 status=ok
// SIG undefined FUN_1463f0af6(void)

void FUN_1463f0af6(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf4ecd = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f0b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf4ec0 + 0x18))(&DAT_14caf4ec0,uVar1,*(code **)(DAT_14caf4ec0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf4ec0,0);
  return;
}



// FUNCTION 1463f0b3e FUN_1463f0b3e body=157 status=ok
// SIG undefined FUN_1463f0b3e(void)

void FUN_1463f0b3e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0x800020000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f0bdc FUN_1463f0bdc body=67 status=ok
// SIG undefined FUN_1463f0bdc(void)

void FUN_1463f0bdc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04740;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463f0c20 FUN_1463f0c20 body=1124 status=ok
// SIG undefined FUN_1463f0c20(void)

void FUN_1463f0c20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caf59c0) {
      FUN_144b3d300(&DAT_14caf59c0);
      if (DAT_14caf59c0 == -1) {
        FUN_1446f470e(&DAT_14caf59b8,&DAT_149e01fe8,1);
        _Init_thread_footer(&DAT_14caf59c0);
      }
    }
    FUN_1446f470e(&local_50,L"DistributionParam1",1);
    local_70 = 0;
    local_78 = 0;
    lVar6 = FUN_147bf866f(param_1,local_50,0,0);
    *(undefined4 *)(lVar6 + 0x38) = 0x3f800000;
    FUN_1446f470e(&local_58,L"DistributionParam2",1);
    local_70 = 0;
    local_78 = 0;
    lVar7 = FUN_147bf866f(param_1,local_58,0,0);
    *(undefined4 *)(lVar7 + 0x38) = 0x3f800000;
    FUN_1446f470e(&local_60,L"DistributionParam3",1);
    local_70 = 0;
    local_78 = 0;
    lVar8 = FUN_147bf866f(param_1,local_60,0,0);
    *(undefined4 *)(lVar8 + 0x38) = 0x3f800000;
    FUN_1446f470e(&local_68,L"DistributionParam4");
    local_70 = 0;
    local_78 = 0;
    lVar9 = FUN_147bf866f(param_1,local_68,0,0);
    *(undefined4 *)(lVar9 + 0x38) = 0x3f800000;
    uVar5 = DAT_14caf59b8;
    if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x38);
    lVar10 = (longlong)iVar3;
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_147c41830(plVar1,iVar3);
    }
    lVar4 = *plVar1;
    *(undefined8 *)(lVar4 + lVar10 * 0x48) = uVar5;
    *(undefined4 *)(lVar4 + 8 + lVar10 * 0x48) = 0;
    *(undefined1 *)(lVar4 + 0xc + lVar10 * 0x48) = 0;
    *(undefined1 *)(lVar4 + 0x10 + lVar10 * 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x38 + lVar10 * 0x48) = 0;
    puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar10 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar4 + 0x25 + lVar10 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(lVar4 + 0x40 + lVar10 * 0x48) = lVar6;
    if (DAT_14c950c29 == 1 && lVar6 != 0) {
      FUN_1456cec3c(lVar6);
    }
    uVar5 = DAT_14caf59b8;
    if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar7);
    }
    iVar3 = *(int *)(param_1 + 0x38);
    lVar6 = (longlong)iVar3;
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_147c41830(plVar1,iVar3);
    }
    lVar10 = *plVar1;
    *(undefined8 *)(lVar10 + lVar6 * 0x48) = uVar5;
    *(undefined4 *)(lVar10 + 8 + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar10 + 0xc + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar10 + 0x10 + lVar6 * 0x48) = 0;
    *(undefined8 *)(lVar10 + 0x38 + lVar6 * 0x48) = 0;
    puVar2 = (undefined8 *)(lVar10 + 0x18 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar10 + 0x25 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(lVar10 + 0x40 + lVar6 * 0x48) = lVar7;
    if (DAT_14c950c29 == 1 && lVar7 != 0) {
      FUN_1456cec3c(lVar7);
    }
    uVar5 = DAT_14caf59b8;
    if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar8);
    }
    iVar3 = *(int *)(param_1 + 0x38);
    lVar6 = (longlong)iVar3;
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_147c41830(plVar1,iVar3);
    }
    lVar7 = *plVar1;
    *(undefined8 *)(lVar7 + lVar6 * 0x48) = uVar5;
    *(undefined4 *)(lVar7 + 8 + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar7 + 0x10 + lVar6 * 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x38 + lVar6 * 0x48) = 0;
    puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar7 + 0x25 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(lVar7 + 0x40 + lVar6 * 0x48) = lVar8;
    if (DAT_14c950c29 == 1 && lVar8 != 0) {
      FUN_1456cec3c(lVar8);
    }
    uVar5 = DAT_14caf59b8;
    if ((lVar9 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar9);
    }
    iVar3 = *(int *)(param_1 + 0x38);
    lVar6 = (longlong)iVar3;
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_147c41830(plVar1,iVar3);
    }
    lVar7 = *plVar1;
    *(undefined8 *)(lVar7 + lVar6 * 0x48) = uVar5;
    *(undefined4 *)(lVar7 + 8 + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar6 * 0x48) = 0;
    *(undefined1 *)(lVar7 + 0x10 + lVar6 * 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x38 + lVar6 * 0x48) = 0;
    puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar7 + 0x25 + lVar6 * 0x48);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(lVar7 + 0x40 + lVar6 * 0x48) = lVar9;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f1086 FUN_1463f1086 body=42 status=ok
// SIG undefined FUN_1463f1086(void)

void FUN_1463f1086(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2aaee(param_1);
  return;
}



// FUNCTION 1463f10b0 FUN_1463f10b0 body=42 status=ok
// SIG undefined FUN_1463f10b0(void)

void FUN_1463f10b0(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2af62(param_1);
  return;
}



// FUNCTION 1463f10da FUN_1463f10da body=42 status=ok
// SIG undefined FUN_1463f10da(void)

void FUN_1463f10da(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2b65c(param_1);
  return;
}



// FUNCTION 1463f1104 FUN_1463f1104 body=42 status=ok
// SIG undefined FUN_1463f1104(void)

void FUN_1463f1104(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2bae2(param_1);
  return;
}



// FUNCTION 1463f112e FUN_1463f112e body=42 status=ok
// SIG undefined FUN_1463f112e(void)

void FUN_1463f112e(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2c1b0(param_1);
  return;
}



// FUNCTION 1463f1158 FUN_1463f1158 body=42 status=ok
// SIG undefined FUN_1463f1158(void)

void FUN_1463f1158(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2c456(param_1);
  return;
}



// FUNCTION 1463f1182 FUN_1463f1182 body=42 status=ok
// SIG undefined FUN_1463f1182(void)

void FUN_1463f1182(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2c514(param_1);
  return;
}



// FUNCTION 1463f11ac FUN_1463f11ac body=42 status=ok
// SIG undefined FUN_1463f11ac(void)

void FUN_1463f11ac(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2c764(param_1);
  return;
}



// FUNCTION 1463f11d6 FUN_1463f11d6 body=42 status=ok
// SIG undefined FUN_1463f11d6(void)

void FUN_1463f11d6(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2cdbc(param_1);
  return;
}



// FUNCTION 1463f1200 FUN_1463f1200 body=42 status=ok
// SIG undefined FUN_1463f1200(void)

void FUN_1463f1200(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2d104(param_1);
  return;
}



// FUNCTION 1463f122a FUN_1463f122a body=42 status=ok
// SIG undefined FUN_1463f122a(void)

void FUN_1463f122a(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c2e078(param_1);
  return;
}



// FUNCTION 1463f1254 FUN_1463f1254 body=63 status=ok
// SIG undefined FUN_1463f1254(void)

void FUN_1463f1254(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1463f1294 FUN_1463f1294 body=55 status=ok
// SIG undefined FUN_1463f1294(void)

void FUN_1463f1294(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf5d38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf5d38 = FUN_140002ddd(FUN_1463f12cb,uVar1,L"ParticleSystemWorldManagerTickFunction");
  }
  return;
}



// FUNCTION 1463f12cb FUN_1463f12cb body=47 status=ok
// SIG undefined FUN_1463f12cb(void)

longlong FUN_1463f12cb(void)

{
  if (DAT_14caf5d30 == 0) {
    FUN_14086a14e(&DAT_14caf5d30,&PTR_FUN_14aa05970);
  }
  return DAT_14caf5d30;
}



// FUNCTION 1463f12fa FUN_1463f12fa body=48 status=ok
// SIG undefined FUN_1463f12fa(void)

void FUN_1463f12fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14aa06f70;
  return;
}



// FUNCTION 1463f132a FUN_1463f132a body=136 status=ok
// SIG undefined FUN_1463f132a(void)

code * FUN_1463f132a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KeyCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4162c;
}



// FUNCTION 1463f13b2 FUN_1463f13b2 body=136 status=ok
// SIG undefined FUN_1463f13b2(void)

code * FUN_1463f13b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ChunksPerGroup";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c414d2;
}



// FUNCTION 1463f143a FUN_1463f143a body=29 status=ok
// SIG undefined FUN_1463f143a(void)

undefined8 FUN_1463f143a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463f1458 FUN_1463f1458 body=71 status=ok
// SIG undefined FUN_1463f1458(void)

void FUN_1463f1458(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf6055 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f148a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf6048 + 0x18))(&DAT_14caf6048,uVar1,*(code **)(DAT_14caf6048 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf6048,0);
  return;
}



// FUNCTION 1463f14a0 FUN_1463f14a0 body=71 status=ok
// SIG undefined FUN_1463f14a0(void)

void FUN_1463f14a0(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf5b4d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f14d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf5b40 + 0x18))(&DAT_14caf5b40,uVar1,*(code **)(DAT_14caf5b40 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf5b40,0);
  return;
}



// FUNCTION 1463f14e8 FUN_1463f14e8 body=71 status=ok
// SIG undefined FUN_1463f14e8(void)

void FUN_1463f14e8(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf603d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f151a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf6030 + 0x18))(&DAT_14caf6030,uVar1,*(code **)(DAT_14caf6030 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf6030,0);
  return;
}



// FUNCTION 1463f1530 FUN_1463f1530 body=71 status=ok
// SIG undefined FUN_1463f1530(void)

void FUN_1463f1530(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf5b65 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f1562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf5b58 + 0x18))(&DAT_14caf5b58,uVar1,*(code **)(DAT_14caf5b58 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf5b58,0);
  return;
}



// FUNCTION 1463f1578 FUN_1463f1578 body=71 status=ok
// SIG undefined FUN_1463f1578(void)

void FUN_1463f1578(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf601d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f15aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf6010 + 0x18))(&DAT_14caf6010,uVar1,*(code **)(DAT_14caf6010 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf6010,0);
  return;
}



// FUNCTION 1463f15c0 FUN_1463f15c0 body=67 status=ok
// SIG undefined FUN_1463f15c0(void)

void FUN_1463f15c0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07660;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 1463f1604 FUN_1463f1604 body=52 status=ok
// SIG undefined FUN_1463f1604(void)

void FUN_1463f1604(void)

{
  if (1 < DAT_14caf6008) {
    FUN_145bccbb4();
    DAT_14caf6008 = 1;
    FUN_1414abb4e();
    return;
  }
  FUN_147c43622();
  FUN_145bccbb4();
  return;
}



// FUNCTION 1463f1638 FUN_1463f1638 body=42 status=ok
// SIG undefined FUN_1463f1638(void)

void FUN_1463f1638(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c4488c(param_1);
  return;
}



// FUNCTION 1463f1662 FUN_1463f1662 body=92 status=ok
// SIG undefined FUN_1463f1662(void)

void FUN_1463f1662(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x28);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_14aa07e60;
    puVar1[4] = 0;
    puVar1[3] = param_1 + 0x40;
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  }
  return;
}



// FUNCTION 1463f16be FUN_1463f16be body=54 status=ok
// SIG undefined FUN_1463f16be(void)

void FUN_1463f16be(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_140414380(*(longlong *)(param_1 + 0x58),0);
  FUN_1400fb146(param_1 + 0x50,0);
  return;
}



// FUNCTION 1463f16fe FUN_1463f16fe body=42 status=ok
// SIG undefined FUN_1463f16fe(void)

void FUN_1463f16fe(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1463f1728 FUN_1463f1728 body=49 status=ok
// SIG undefined FUN_1463f1728(void)

longlong FUN_1463f1728(void)

{
  if (DAT_14caf62d8 == 0) {
    FUN_1409ce572(&DAT_14caf62d8,&PTR_FUN_14aa07f60);
  }
  return DAT_14caf62d8;
}



// FUNCTION 1463f175a FUN_1463f175a body=55 status=ok
// SIG undefined FUN_1463f175a(void)

void FUN_1463f175a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf62f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf62f8 = FUN_140002ddd(FUN_1463f1791,uVar1,L"PSCPoolElem");
  }
  return;
}



// FUNCTION 1463f1791 FUN_1463f1791 body=47 status=ok
// SIG undefined FUN_1463f1791(void)

longlong FUN_1463f1791(void)

{
  if (DAT_14caf62f0 == 0) {
    FUN_14086a14e(&DAT_14caf62f0,&PTR_FUN_14aa08000);
  }
  return DAT_14caf62f0;
}



// FUNCTION 1463f17c0 FUN_1463f17c0 body=48 status=ok
// SIG undefined FUN_1463f17c0(void)

void FUN_1463f17c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14aa1b710;
  return;
}



// FUNCTION 1463f17f0 FUN_1463f17f0 body=55 status=ok
// SIG undefined FUN_1463f17f0(void)

void FUN_1463f17f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6310 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6310 = FUN_140002ddd(FUN_1463f1827,uVar1,L"PSCPool");
  }
  return;
}



// FUNCTION 1463f1827 FUN_1463f1827 body=47 status=ok
// SIG undefined FUN_1463f1827(void)

longlong FUN_1463f1827(void)

{
  if (DAT_14caf6308 == 0) {
    FUN_14086a14e(&DAT_14caf6308,&PTR_FUN_14aa080d0);
  }
  return DAT_14caf6308;
}



// FUNCTION 1463f1856 FUN_1463f1856 body=48 status=ok
// SIG undefined FUN_1463f1856(void)

void FUN_1463f1856(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14aa1b870;
  return;
}



// FUNCTION 1463f1886 FUN_1463f1886 body=55 status=ok
// SIG undefined FUN_1463f1886(void)

void FUN_1463f1886(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6328 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6328 = FUN_140002ddd(FUN_1463f18bd,uVar1,L"WorldPSCPool");
  }
  return;
}



// FUNCTION 1463f18bd FUN_1463f18bd body=47 status=ok
// SIG undefined FUN_1463f18bd(void)

longlong FUN_1463f18bd(void)

{
  if (DAT_14caf6320 == 0) {
    FUN_14086a14e(&DAT_14caf6320,&PTR_FUN_14aa08208);
  }
  return DAT_14caf6320;
}



// FUNCTION 1463f18ec FUN_1463f18ec body=48 status=ok
// SIG undefined FUN_1463f18ec(void)

void FUN_1463f18ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14aa1b9d0;
  return;
}



// FUNCTION 1463f191c FUN_1463f191c body=47 status=ok
// SIG undefined FUN_1463f191c(void)

longlong FUN_1463f191c(void)

{
  if (DAT_14caf6378 == 0) {
    FUN_14000fc22(&DAT_14caf6378,&PTR_FUN_14aa08498);
  }
  return DAT_14caf6378;
}



// FUNCTION 1463f194b FUN_1463f194b body=47 status=ok
// SIG undefined FUN_1463f194b(void)

longlong FUN_1463f194b(void)

{
  if (DAT_14caf6380 == 0) {
    FUN_14000fc22(&DAT_14caf6380,&PTR_FUN_14aa08630);
  }
  return DAT_14caf6380;
}



// FUNCTION 1463f197a FUN_1463f197a body=47 status=ok
// SIG undefined FUN_1463f197a(void)

longlong FUN_1463f197a(void)

{
  if (DAT_14caf6388 == 0) {
    FUN_14000fc22(&DAT_14caf6388,&PTR_FUN_14aa086c8);
  }
  return DAT_14caf6388;
}



// FUNCTION 1463f19a9 FUN_1463f19a9 body=47 status=ok
// SIG undefined FUN_1463f19a9(void)

longlong FUN_1463f19a9(void)

{
  if (DAT_14caf6390 == 0) {
    FUN_14000fc22(&DAT_14caf6390,&PTR_FUN_14aa08760);
  }
  return DAT_14caf6390;
}



// FUNCTION 1463f19d8 FUN_1463f19d8 body=47 status=ok
// SIG undefined FUN_1463f19d8(void)

longlong FUN_1463f19d8(void)

{
  if (DAT_14caf6398 == 0) {
    FUN_14000fc22(&DAT_14caf6398,&PTR_FUN_14aa087f8);
  }
  return DAT_14caf6398;
}



// FUNCTION 1463f1a07 FUN_1463f1a07 body=47 status=ok
// SIG undefined FUN_1463f1a07(void)

longlong FUN_1463f1a07(void)

{
  if (DAT_14caf63a0 == 0) {
    FUN_14000fc22(&DAT_14caf63a0,&PTR_FUN_14aa08930);
  }
  return DAT_14caf63a0;
}



// FUNCTION 1463f1a36 FUN_1463f1a36 body=47 status=ok
// SIG undefined FUN_1463f1a36(void)

longlong FUN_1463f1a36(void)

{
  if (DAT_14caf63a8 == 0) {
    FUN_14000fc22(&DAT_14caf63a8,&PTR_FUN_14aa089d8);
  }
  return DAT_14caf63a8;
}



// FUNCTION 1463f1a65 FUN_1463f1a65 body=47 status=ok
// SIG undefined FUN_1463f1a65(void)

longlong FUN_1463f1a65(void)

{
  if (DAT_14caf63b0 == 0) {
    FUN_14000fc22(&DAT_14caf63b0,&PTR_FUN_14aa08a40);
  }
  return DAT_14caf63b0;
}



// FUNCTION 1463f1a94 FUN_1463f1a94 body=47 status=ok
// SIG undefined FUN_1463f1a94(void)

longlong FUN_1463f1a94(void)

{
  if (DAT_14caf63b8 == 0) {
    FUN_14000fc22(&DAT_14caf63b8,&PTR_FUN_14aa08ae0);
  }
  return DAT_14caf63b8;
}



// FUNCTION 1463f1ac3 FUN_1463f1ac3 body=47 status=ok
// SIG undefined FUN_1463f1ac3(void)

longlong FUN_1463f1ac3(void)

{
  if (DAT_14caf63c0 == 0) {
    FUN_14000fc22(&DAT_14caf63c0,&PTR_FUN_14aa08b78);
  }
  return DAT_14caf63c0;
}



// FUNCTION 1463f1af2 FUN_1463f1af2 body=47 status=ok
// SIG undefined FUN_1463f1af2(void)

longlong FUN_1463f1af2(void)

{
  if (DAT_14caf63c8 == 0) {
    FUN_14000fc22(&DAT_14caf63c8,&PTR_FUN_14aa08c00);
  }
  return DAT_14caf63c8;
}



// FUNCTION 1463f1b21 FUN_1463f1b21 body=47 status=ok
// SIG undefined FUN_1463f1b21(void)

longlong FUN_1463f1b21(void)

{
  if (DAT_14caf63d0 == 0) {
    FUN_14000fc22(&DAT_14caf63d0,&PTR_FUN_14aa08ca8);
  }
  return DAT_14caf63d0;
}



// FUNCTION 1463f1b50 FUN_1463f1b50 body=47 status=ok
// SIG undefined FUN_1463f1b50(void)

longlong FUN_1463f1b50(void)

{
  if (DAT_14caf63d8 == 0) {
    FUN_14000fc22(&DAT_14caf63d8,&PTR_FUN_14aa08d50);
  }
  return DAT_14caf63d8;
}



// FUNCTION 1463f1b7f FUN_1463f1b7f body=47 status=ok
// SIG undefined FUN_1463f1b7f(void)

longlong FUN_1463f1b7f(void)

{
  if (DAT_14caf63e0 == 0) {
    FUN_14000fc22(&DAT_14caf63e0,&PTR_FUN_14aa08e38);
  }
  return DAT_14caf63e0;
}



// FUNCTION 1463f1bae FUN_1463f1bae body=47 status=ok
// SIG undefined FUN_1463f1bae(void)

longlong FUN_1463f1bae(void)

{
  if (DAT_14caf63e8 == 0) {
    FUN_14000fc22(&DAT_14caf63e8,&PTR_FUN_14aa08ed8);
  }
  return DAT_14caf63e8;
}



// FUNCTION 1463f1bdd FUN_1463f1bdd body=47 status=ok
// SIG undefined FUN_1463f1bdd(void)

longlong FUN_1463f1bdd(void)

{
  if (DAT_14caf63f0 == 0) {
    FUN_14000fc22(&DAT_14caf63f0,&PTR_FUN_14aa08f78);
  }
  return DAT_14caf63f0;
}



// FUNCTION 1463f1c0c FUN_1463f1c0c body=47 status=ok
// SIG undefined FUN_1463f1c0c(void)

longlong FUN_1463f1c0c(void)

{
  if (DAT_14caf63f8 == 0) {
    FUN_14000fc22(&DAT_14caf63f8,&PTR_FUN_14aa09028);
  }
  return DAT_14caf63f8;
}



// FUNCTION 1463f1c3b FUN_1463f1c3b body=47 status=ok
// SIG undefined FUN_1463f1c3b(void)

longlong FUN_1463f1c3b(void)

{
  if (DAT_14caf6400 == 0) {
    FUN_14000fc22(&DAT_14caf6400,&PTR_FUN_14aa090d0);
  }
  return DAT_14caf6400;
}



// FUNCTION 1463f1c6a FUN_1463f1c6a body=47 status=ok
// SIG undefined FUN_1463f1c6a(void)

longlong FUN_1463f1c6a(void)

{
  if (DAT_14caf6408 == 0) {
    FUN_14000fc22(&DAT_14caf6408,&PTR_FUN_14aa09158);
  }
  return DAT_14caf6408;
}



// FUNCTION 1463f1c99 FUN_1463f1c99 body=47 status=ok
// SIG undefined FUN_1463f1c99(void)

longlong FUN_1463f1c99(void)

{
  if (DAT_14caf6410 == 0) {
    FUN_14000fc22(&DAT_14caf6410,&PTR_FUN_14aa091f0);
  }
  return DAT_14caf6410;
}



// FUNCTION 1463f1cc8 FUN_1463f1cc8 body=47 status=ok
// SIG undefined FUN_1463f1cc8(void)

longlong FUN_1463f1cc8(void)

{
  if (DAT_14caf6418 == 0) {
    FUN_14000fc22(&DAT_14caf6418,&PTR_FUN_14aa09288);
  }
  return DAT_14caf6418;
}



// FUNCTION 1463f1cf7 FUN_1463f1cf7 body=47 status=ok
// SIG undefined FUN_1463f1cf7(void)

longlong FUN_1463f1cf7(void)

{
  if (DAT_14caf6420 == 0) {
    FUN_14000fc22(&DAT_14caf6420,&PTR_FUN_14aa09328);
  }
  return DAT_14caf6420;
}



// FUNCTION 1463f1d26 FUN_1463f1d26 body=47 status=ok
// SIG undefined FUN_1463f1d26(void)

longlong FUN_1463f1d26(void)

{
  if (DAT_14caf6428 == 0) {
    FUN_14000fc22(&DAT_14caf6428,&PTR_FUN_14aa093c8);
  }
  return DAT_14caf6428;
}



// FUNCTION 1463f1d55 FUN_1463f1d55 body=47 status=ok
// SIG undefined FUN_1463f1d55(void)

longlong FUN_1463f1d55(void)

{
  if (DAT_14caf6430 == 0) {
    FUN_14000fc22(&DAT_14caf6430,&PTR_FUN_14aa09460);
  }
  return DAT_14caf6430;
}



// FUNCTION 1463f1d84 FUN_1463f1d84 body=47 status=ok
// SIG undefined FUN_1463f1d84(void)

longlong FUN_1463f1d84(void)

{
  if (DAT_14caf6438 == 0) {
    FUN_14000fc22(&DAT_14caf6438,&PTR_FUN_14aa094e8);
  }
  return DAT_14caf6438;
}



// FUNCTION 1463f1db3 FUN_1463f1db3 body=47 status=ok
// SIG undefined FUN_1463f1db3(void)

longlong FUN_1463f1db3(void)

{
  if (DAT_14caf6440 == 0) {
    FUN_14000fc22(&DAT_14caf6440,&PTR_FUN_14aa09588);
  }
  return DAT_14caf6440;
}



// FUNCTION 1463f1de2 FUN_1463f1de2 body=47 status=ok
// SIG undefined FUN_1463f1de2(void)

longlong FUN_1463f1de2(void)

{
  if (DAT_14caf6448 == 0) {
    FUN_14000fc22(&DAT_14caf6448,&PTR_FUN_14aa09628);
  }
  return DAT_14caf6448;
}



// FUNCTION 1463f1e11 FUN_1463f1e11 body=47 status=ok
// SIG undefined FUN_1463f1e11(void)

longlong FUN_1463f1e11(void)

{
  if (DAT_14caf6450 == 0) {
    FUN_14000fc22(&DAT_14caf6450,&PTR_FUN_14aa09680);
  }
  return DAT_14caf6450;
}



// FUNCTION 1463f1e5a FUN_1463f1e5a body=47 status=ok
// SIG undefined FUN_1463f1e5a(void)

longlong FUN_1463f1e5a(void)

{
  if (DAT_14caf6458 == 0) {
    FUN_14000fc22(&DAT_14caf6458,&PTR_FUN_14aa096c0);
  }
  return DAT_14caf6458;
}



// FUNCTION 1463f1e89 FUN_1463f1e89 body=47 status=ok
// SIG undefined FUN_1463f1e89(void)

longlong FUN_1463f1e89(void)

{
  if (DAT_14caf6460 == 0) {
    FUN_14000fc22(&DAT_14caf6460,&PTR_FUN_14aa09840);
  }
  return DAT_14caf6460;
}



// FUNCTION 1463f1eb8 FUN_1463f1eb8 body=47 status=ok
// SIG undefined FUN_1463f1eb8(void)

longlong FUN_1463f1eb8(void)

{
  if (DAT_14caf6470 == 0) {
    FUN_14000fc22(&DAT_14caf6470,&PTR_FUN_14aa09970);
  }
  return DAT_14caf6470;
}



// FUNCTION 1463f1ee7 FUN_1463f1ee7 body=47 status=ok
// SIG undefined FUN_1463f1ee7(void)

longlong FUN_1463f1ee7(void)

{
  if (DAT_14caf6480 == 0) {
    FUN_14000fc22(&DAT_14caf6480,&PTR_FUN_14aa09a38);
  }
  return DAT_14caf6480;
}



// FUNCTION 1463f1f16 FUN_1463f1f16 body=47 status=ok
// SIG undefined FUN_1463f1f16(void)

longlong FUN_1463f1f16(void)

{
  if (DAT_14caf6490 == 0) {
    FUN_14000fc22(&DAT_14caf6490,&PTR_FUN_14aa09ab0);
  }
  return DAT_14caf6490;
}



// FUNCTION 1463f1f45 FUN_1463f1f45 body=47 status=ok
// SIG undefined FUN_1463f1f45(void)

longlong FUN_1463f1f45(void)

{
  if (DAT_14caf64a0 == 0) {
    FUN_14000fc22(&DAT_14caf64a0,&PTR_FUN_14aa09b78);
  }
  return DAT_14caf64a0;
}



// FUNCTION 1463f1f74 FUN_1463f1f74 body=47 status=ok
// SIG undefined FUN_1463f1f74(void)

longlong FUN_1463f1f74(void)

{
  if (DAT_14caf64a8 == 0) {
    FUN_14000fc22(&DAT_14caf64a8,&PTR_FUN_14aa09c78);
  }
  return DAT_14caf64a8;
}



// FUNCTION 1463f1fa3 FUN_1463f1fa3 body=47 status=ok
// SIG undefined FUN_1463f1fa3(void)

longlong FUN_1463f1fa3(void)

{
  if (DAT_14caf64b0 == 0) {
    FUN_14000fc22(&DAT_14caf64b0,&PTR_FUN_14aa09cd0);
  }
  return DAT_14caf64b0;
}



// FUNCTION 1463f1fd2 FUN_1463f1fd2 body=34 status=ok
// SIG undefined FUN_1463f1fd2(void)

void FUN_1463f1fd2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7cbb2();
  FUN_14069c8d6(uVar1,&PTR_s_AddControllerPitchInput_14aa09d10,0x1e);
  return;
}



// FUNCTION 1463f2000 FUN_1463f2000 body=304 status=ok
// SIG undefined FUN_1463f2000(void)

void FUN_1463f2000(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf64d8) {
    FUN_144b3d300(&DAT_14caf64d8);
    if (DAT_14caf64d8 == -1) {
      FUN_1446f470e(&DAT_14caf64d0,L"RemoteViewPitch",1);
      _Init_thread_footer(&DAT_14caf64d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf64e4) {
    FUN_144b3d300(&DAT_14caf64e4);
    if (DAT_14caf64e4 == -1) {
      FUN_1446f470e(&DAT_14caf64dc,L"PlayerState",1);
      _Init_thread_footer(&DAT_14caf64e4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf64f0) {
    FUN_144b3d300(&DAT_14caf64f0);
    if (DAT_14caf64f0 == -1) {
      FUN_1446f470e(&DAT_14caf64e8,L"Controller",1);
      _Init_thread_footer(&DAT_14caf64f0);
      return;
    }
  }
  return;
}



// FUNCTION 1463f2130 FUN_1463f2130 body=26 status=ok
// SIG undefined FUN_1463f2130(void)

void FUN_1463f2130(longlong param_1)

{
  FUN_1401b2056();
  *(undefined1 *)(param_1 + 0x17b) = 0;
  return;
}



// FUNCTION 1463f214a FUN_1463f214a body=98 status=ok
// SIG undefined FUN_1463f214a(void)

undefined8 FUN_1463f214a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(char *)(lVar1 + 0x2eb) != '\x02') {
        return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(char *)(lVar1 + 0x2eb) == '\x01');
      }
    }
  }
  uVar3 = FUN_14038e76a(param_1,param_2);
  return uVar3;
}



// FUNCTION 1463f21b1 FUN_1463f21b1 body=88 status=ok
// SIG undefined FUN_1463f21b1(void)

void FUN_1463f21b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa0b270;
  puVar1[5] = &PTR_LAB_14aa0b540;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_140810d00(puVar1 + 8,0);
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 1463f220e FUN_1463f220e body=47 status=ok
// SIG undefined FUN_1463f220e(void)

longlong FUN_1463f220e(void)

{
  if (DAT_14caf6530 == 0) {
    FUN_14073dd9a(&DAT_14caf6530,&PTR_LAB_14aa0b228);
  }
  return DAT_14caf6530;
}



// FUNCTION 1463f223e FUN_1463f223e body=74 status=ok
// SIG undefined FUN_1463f223e(void)

void FUN_1463f223e(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1405f35b2(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  lVar1 = FUN_14045d4ce(param_1 + 0x40,PTR_u_SeamlessNetTransition_14c761ec8,0);
  *(bool *)(param_1 + 0xc0) = lVar1 != 0;
  return;
}



// FUNCTION 1463f2288 FUN_1463f2288 body=49 status=ok
// SIG undefined FUN_1463f2288(void)

longlong FUN_1463f2288(void)

{
  if (DAT_14caf65b0 == 0) {
    FUN_1409ce572(&DAT_14caf65b0,&PTR_FUN_14aa0bee0);
  }
  return DAT_14caf65b0;
}



// FUNCTION 1463f22ba FUN_1463f22ba body=55 status=ok
// SIG undefined FUN_1463f22ba(void)

void FUN_1463f22ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf65d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf65d0 = FUN_140002ddd(FUN_1463f22f1,uVar1,L"PerQualityLevelInt");
  }
  return;
}



// FUNCTION 1463f22f1 FUN_1463f22f1 body=49 status=ok
// SIG undefined FUN_1463f22f1(void)

longlong FUN_1463f22f1(void)

{
  if (DAT_14caf65c8 == 0) {
    FUN_14086a14e(&DAT_14caf65c8,&PTR_FUN_14aa0c078);
  }
  return DAT_14caf65c8;
}



// FUNCTION 1463f2322 FUN_1463f2322 body=48 status=ok
// SIG undefined FUN_1463f2322(void)

void FUN_1463f2322(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14aa1bbf0;
  return;
}



// FUNCTION 1463f2352 FUN_1463f2352 body=55 status=ok
// SIG undefined FUN_1463f2352(void)

void FUN_1463f2352(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf65e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf65e8 = FUN_140002ddd(FUN_1463f2389,uVar1,L"PerQualityLevelFloat");
  }
  return;
}



// FUNCTION 1463f2389 FUN_1463f2389 body=49 status=ok
// SIG undefined FUN_1463f2389(void)

longlong FUN_1463f2389(void)

{
  if (DAT_14caf65e0 == 0) {
    FUN_14086a14e(&DAT_14caf65e0,&PTR_FUN_14aa0c1f8);
  }
  return DAT_14caf65e0;
}



// FUNCTION 1463f23ba FUN_1463f23ba body=48 status=ok
// SIG undefined FUN_1463f23ba(void)

void FUN_1463f23ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14aa1bd50;
  return;
}



// FUNCTION 1463f23ea FUN_1463f23ea body=49 status=ok
// SIG undefined FUN_1463f23ea(void)

longlong FUN_1463f23ea(void)

{
  if (DAT_14caf6640 == 0) {
    FUN_14073dd9a(&DAT_14caf6640,&PTR_LAB_14aa0c760);
  }
  return DAT_14caf6640;
}



// FUNCTION 1463f241b FUN_1463f241b body=47 status=ok
// SIG undefined FUN_1463f241b(void)

longlong FUN_1463f241b(void)

{
  if (DAT_14caf6618 == 0) {
    FUN_14000fc22(&DAT_14caf6618,&PTR_FUN_14aa0c338);
  }
  return DAT_14caf6618;
}



// FUNCTION 1463f244a FUN_1463f244a body=47 status=ok
// SIG undefined FUN_1463f244a(void)

longlong FUN_1463f244a(void)

{
  if (DAT_14caf6620 == 0) {
    FUN_14000fc22(&DAT_14caf6620,&PTR_FUN_14aa0c3d0);
  }
  return DAT_14caf6620;
}



// FUNCTION 1463f2479 FUN_1463f2479 body=47 status=ok
// SIG undefined FUN_1463f2479(void)

longlong FUN_1463f2479(void)

{
  if (DAT_14caf6630 == 0) {
    FUN_14000fc22(&DAT_14caf6630,&PTR_FUN_14aa0c4b0);
  }
  return DAT_14caf6630;
}



// FUNCTION 1463f24a8 FUN_1463f24a8 body=34 status=ok
// SIG undefined FUN_1463f24a8(void)

void FUN_1463f24a8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a72852();
  FUN_14069c8d6(uVar1,&PTR_s_GetDataToConsume_14aa0c4f0,3);
  return;
}



// FUNCTION 1463f24ca FUN_1463f24ca body=47 status=ok
// SIG undefined FUN_1463f24ca(void)

longlong FUN_1463f24ca(void)

{
  if (DAT_14caf6668 == 0) {
    FUN_1409ce572(&DAT_14caf6668,&PTR_FUN_14aa0ce00);
  }
  return DAT_14caf6668;
}



// FUNCTION 1463f24fa FUN_1463f24fa body=55 status=ok
// SIG undefined FUN_1463f24fa(void)

void FUN_1463f24fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6688 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6688 = FUN_140002ddd(FUN_1463f2531,uVar1,L"CollisionResponse");
  }
  return;
}



// FUNCTION 1463f2531 FUN_1463f2531 body=47 status=ok
// SIG undefined FUN_1463f2531(void)

longlong FUN_1463f2531(void)

{
  if (DAT_14caf6680 == 0) {
    FUN_14086a14e(&DAT_14caf6680,&PTR_FUN_14aa0cf60);
  }
  return DAT_14caf6680;
}



// FUNCTION 1463f2560 FUN_1463f2560 body=48 status=ok
// SIG undefined FUN_1463f2560(void)

void FUN_1463f2560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14aa1bf50;
  return;
}



// FUNCTION 1463f2590 FUN_1463f2590 body=55 status=ok
// SIG undefined FUN_1463f2590(void)

void FUN_1463f2590(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf66a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf66a0 = FUN_140002ddd(FUN_1463f25c7,uVar1,L"BodyInstanceAsyncPhysicsTickHandle");
  }
  return;
}



// FUNCTION 1463f25c7 FUN_1463f25c7 body=49 status=ok
// SIG undefined FUN_1463f25c7(void)

longlong FUN_1463f25c7(void)

{
  if (DAT_14caf6698 == 0) {
    FUN_14086a14e(&DAT_14caf6698,&PTR_FUN_14aa0d008);
  }
  return DAT_14caf6698;
}



// FUNCTION 1463f25f8 FUN_1463f25f8 body=48 status=ok
// SIG undefined FUN_1463f25f8(void)

void FUN_1463f25f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14aa1c0c0;
  return;
}



// FUNCTION 1463f2628 FUN_1463f2628 body=55 status=ok
// SIG undefined FUN_1463f2628(void)

void FUN_1463f2628(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf66b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf66b8 = FUN_140002ddd(FUN_1417e5331,uVar1,L"BodyInstance");
  }
  return;
}



// FUNCTION 1463f2660 FUN_1463f2660 body=48 status=ok
// SIG undefined FUN_1463f2660(void)

void FUN_1463f2660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000188;
  *puVar1 = &PTR_FUN_14aa1c220;
  return;
}



// FUNCTION 1463f2690 FUN_1463f2690 body=47 status=ok
// SIG undefined FUN_1463f2690(void)

longlong FUN_1463f2690(void)

{
  if (DAT_14caf67a0 == 0) {
    FUN_14073dd9a(&DAT_14caf67a0,&PTR_LAB_14aa0ee38);
  }
  return DAT_14caf67a0;
}



// FUNCTION 1463f26bf FUN_1463f26bf body=47 status=ok
// SIG undefined FUN_1463f26bf(void)

longlong FUN_1463f26bf(void)

{
  if (DAT_14caf6810 == 0) {
    FUN_14073dd9a(&DAT_14caf6810,&PTR_LAB_14aa0f5d0);
  }
  return DAT_14caf6810;
}



// FUNCTION 1463f26ee FUN_1463f26ee body=47 status=ok
// SIG undefined FUN_1463f26ee(void)

longlong FUN_1463f26ee(void)

{
  if (DAT_14caf6800 == 0) {
    FUN_14000fc22(&DAT_14caf6800,&PTR_FUN_14aa0f4c8);
  }
  return DAT_14caf6800;
}



// FUNCTION 1463f271e FUN_1463f271e body=34 status=ok
// SIG undefined FUN_1463f271e(void)

void FUN_1463f271e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7293e();
  FUN_14069c8d6(uVar1,&PTR_s_GetClusterUnionComponent_14aa0f510,1);
  return;
}



// FUNCTION 1463f2740 FUN_1463f2740 body=55 status=ok
// SIG undefined FUN_1463f2740(void)

void FUN_1463f2740(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6828 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6828 = FUN_140002ddd(FUN_1463f2777,uVar1,L"ClusterUnionBoneData");
  }
  return;
}



// FUNCTION 1463f2777 FUN_1463f2777 body=47 status=ok
// SIG undefined FUN_1463f2777(void)

longlong FUN_1463f2777(void)

{
  if (DAT_14caf6820 == 0) {
    FUN_14086a14e(&DAT_14caf6820,&PTR_FUN_14aa0fcd8);
  }
  return DAT_14caf6820;
}



// FUNCTION 1463f27a6 FUN_1463f27a6 body=48 status=ok
// SIG undefined FUN_1463f27a6(void)

void FUN_1463f27a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14aa1c390;
  return;
}



// FUNCTION 1463f27d6 FUN_1463f27d6 body=55 status=ok
// SIG undefined FUN_1463f27d6(void)

void FUN_1463f27d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6840 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6840 = FUN_140002ddd(FUN_1463f280d,uVar1,L"ClusteredComponentData");
  }
  return;
}



// FUNCTION 1463f280d FUN_1463f280d body=47 status=ok
// SIG undefined FUN_1463f280d(void)

longlong FUN_1463f280d(void)

{
  if (DAT_14caf6838 == 0) {
    FUN_14086a14e(&DAT_14caf6838,&PTR_FUN_14aa0feb8);
  }
  return DAT_14caf6838;
}



// FUNCTION 1463f2842 FUN_1463f2842 body=48 status=ok
// SIG undefined FUN_1463f2842(void)

void FUN_1463f2842(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aa1c500;
  return;
}



// FUNCTION 1463f2872 FUN_1463f2872 body=55 status=ok
// SIG undefined FUN_1463f2872(void)

void FUN_1463f2872(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6858 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6858 = FUN_140002ddd(FUN_1463f28a9,uVar1,L"ClusteredActorData");
  }
  return;
}



// FUNCTION 1463f28a9 FUN_1463f28a9 body=47 status=ok
// SIG undefined FUN_1463f28a9(void)

longlong FUN_1463f28a9(void)

{
  if (DAT_14caf6850 == 0) {
    FUN_14086a14e(&DAT_14caf6850,&PTR_FUN_14aa0ff90);
  }
  return DAT_14caf6850;
}



// FUNCTION 1463f28d8 FUN_1463f28d8 body=48 status=ok
// SIG undefined FUN_1463f28d8(void)

void FUN_1463f28d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14aa1c660;
  return;
}



// FUNCTION 1463f2908 FUN_1463f2908 body=55 status=ok
// SIG undefined FUN_1463f2908(void)

void FUN_1463f2908(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6870 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6870 = FUN_140002ddd(FUN_1463f293f,uVar1,L"ClusterUnionReplicatedData");
  }
  return;
}



// FUNCTION 1463f293f FUN_1463f293f body=47 status=ok
// SIG undefined FUN_1463f293f(void)

longlong FUN_1463f293f(void)

{
  if (DAT_14caf6868 == 0) {
    FUN_14086a14e(&DAT_14caf6868,&PTR_FUN_14aa100d0);
  }
  return DAT_14caf6868;
}



// FUNCTION 1463f296e FUN_1463f296e body=48 status=ok
// SIG undefined FUN_1463f296e(void)

void FUN_1463f296e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14aa1c7c0;
  return;
}



// FUNCTION 1463f299e FUN_1463f299e body=55 status=ok
// SIG undefined FUN_1463f299e(void)

void FUN_1463f299e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6888 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6888 = FUN_140002ddd(FUN_1463f29d5,uVar1,L"ClusterUnionPendingAddData");
  }
  return;
}



// FUNCTION 1463f29d5 FUN_1463f29d5 body=47 status=ok
// SIG undefined FUN_1463f29d5(void)

longlong FUN_1463f29d5(void)

{
  if (DAT_14caf6880 == 0) {
    FUN_14086a14e(&DAT_14caf6880,&PTR_FUN_14aa101f0);
  }
  return DAT_14caf6880;
}



// FUNCTION 1463f2a04 FUN_1463f2a04 body=48 status=ok
// SIG undefined FUN_1463f2a04(void)

void FUN_1463f2a04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aa1c920;
  return;
}



// FUNCTION 1463f2a34 FUN_1463f2a34 body=55 status=ok
// SIG undefined FUN_1463f2a34(void)

void FUN_1463f2a34(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf68a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf68a0 = FUN_140002ddd(FUN_1463f2a6b,uVar1,L"ClusterUnionInitializationData");
  }
  return;
}



// FUNCTION 1463f2a6b FUN_1463f2a6b body=47 status=ok
// SIG undefined FUN_1463f2a6b(void)

longlong FUN_1463f2a6b(void)

{
  if (DAT_14caf6898 == 0) {
    FUN_14086a14e(&DAT_14caf6898,&PTR_FUN_14aa10388);
  }
  return DAT_14caf6898;
}



// FUNCTION 1463f2a9a FUN_1463f2a9a body=48 status=ok
// SIG undefined FUN_1463f2a9a(void)

void FUN_1463f2a9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14aa1ca80;
  return;
}



// FUNCTION 1463f2aca FUN_1463f2aca body=47 status=ok
// SIG undefined FUN_1463f2aca(void)

longlong FUN_1463f2aca(void)

{
  if (DAT_14caf68b0 == 0) {
    FUN_14000fc22(&DAT_14caf68b0,&PTR_FUN_14aa10510);
  }
  return DAT_14caf68b0;
}



// FUNCTION 1463f2af9 FUN_1463f2af9 body=47 status=ok
// SIG undefined FUN_1463f2af9(void)

longlong FUN_1463f2af9(void)

{
  if (DAT_14caf68b8 == 0) {
    FUN_14000fc22(&DAT_14caf68b8,&PTR_FUN_14aa105d0);
  }
  return DAT_14caf68b8;
}



// FUNCTION 1463f2b28 FUN_1463f2b28 body=47 status=ok
// SIG undefined FUN_1463f2b28(void)

longlong FUN_1463f2b28(void)

{
  if (DAT_14caf68c0 == 0) {
    FUN_14000fc22(&DAT_14caf68c0,&PTR_FUN_14aa106d0);
  }
  return DAT_14caf68c0;
}



// FUNCTION 1463f2b57 FUN_1463f2b57 body=49 status=ok
// SIG undefined FUN_1463f2b57(void)

longlong FUN_1463f2b57(void)

{
  if (DAT_14caf6938 == 0) {
    FUN_14073dd9a(&DAT_14caf6938,&PTR_LAB_14aa11850);
  }
  return DAT_14caf6938;
}



// FUNCTION 1463f2b88 FUN_1463f2b88 body=47 status=ok
// SIG undefined FUN_1463f2b88(void)

longlong FUN_1463f2b88(void)

{
  if (DAT_14caf68c8 == 0) {
    FUN_14000fc22(&DAT_14caf68c8,&PTR_FUN_14aa10858);
  }
  return DAT_14caf68c8;
}



// FUNCTION 1463f2bb7 FUN_1463f2bb7 body=47 status=ok
// SIG undefined FUN_1463f2bb7(void)

longlong FUN_1463f2bb7(void)

{
  if (DAT_14caf68d0 == 0) {
    FUN_14000fc22(&DAT_14caf68d0,&PTR_FUN_14aa10a10);
  }
  return DAT_14caf68d0;
}



// FUNCTION 1463f2be6 FUN_1463f2be6 body=47 status=ok
// SIG undefined FUN_1463f2be6(void)

longlong FUN_1463f2be6(void)

{
  if (DAT_14caf68d8 == 0) {
    FUN_14000fc22(&DAT_14caf68d8,&PTR_FUN_14aa10af0);
  }
  return DAT_14caf68d8;
}



// FUNCTION 1463f2c15 FUN_1463f2c15 body=47 status=ok
// SIG undefined FUN_1463f2c15(void)

longlong FUN_1463f2c15(void)

{
  if (DAT_14caf68e0 == 0) {
    FUN_14000fc22(&DAT_14caf68e0,&PTR_FUN_14aa10bd8);
  }
  return DAT_14caf68e0;
}



// FUNCTION 1463f2c44 FUN_1463f2c44 body=47 status=ok
// SIG undefined FUN_1463f2c44(void)

longlong FUN_1463f2c44(void)

{
  if (DAT_14caf68e8 == 0) {
    FUN_14000fc22(&DAT_14caf68e8,&PTR_FUN_14aa10d20);
  }
  return DAT_14caf68e8;
}



// FUNCTION 1463f2c73 FUN_1463f2c73 body=47 status=ok
// SIG undefined FUN_1463f2c73(void)

longlong FUN_1463f2c73(void)

{
  if (DAT_14caf68f0 == 0) {
    FUN_14000fc22(&DAT_14caf68f0,&PTR_FUN_14aa10e78);
  }
  return DAT_14caf68f0;
}



// FUNCTION 1463f2ca2 FUN_1463f2ca2 body=47 status=ok
// SIG undefined FUN_1463f2ca2(void)

longlong FUN_1463f2ca2(void)

{
  if (DAT_14caf68f8 == 0) {
    FUN_14000fc22(&DAT_14caf68f8,&PTR_FUN_14aa10f10);
  }
  return DAT_14caf68f8;
}



// FUNCTION 1463f2cd1 FUN_1463f2cd1 body=47 status=ok
// SIG undefined FUN_1463f2cd1(void)

longlong FUN_1463f2cd1(void)

{
  if (DAT_14caf6900 == 0) {
    FUN_14000fc22(&DAT_14caf6900,&PTR_FUN_14aa10ff8);
  }
  return DAT_14caf6900;
}



// FUNCTION 1463f2d00 FUN_1463f2d00 body=47 status=ok
// SIG undefined FUN_1463f2d00(void)

longlong FUN_1463f2d00(void)

{
  if (DAT_14caf6908 == 0) {
    FUN_14000fc22(&DAT_14caf6908,&PTR_FUN_14aa11050);
  }
  return DAT_14caf6908;
}



// FUNCTION 1463f2d2f FUN_1463f2d2f body=47 status=ok
// SIG undefined FUN_1463f2d2f(void)

longlong FUN_1463f2d2f(void)

{
  if (DAT_14caf6910 == 0) {
    FUN_14000fc22(&DAT_14caf6910,&PTR_FUN_14aa11178);
  }
  return DAT_14caf6910;
}



// FUNCTION 1463f2d5e FUN_1463f2d5e body=47 status=ok
// SIG undefined FUN_1463f2d5e(void)

longlong FUN_1463f2d5e(void)

{
  if (DAT_14caf6918 == 0) {
    FUN_14000fc22(&DAT_14caf6918,&PTR_FUN_14aa11220);
  }
  return DAT_14caf6918;
}



// FUNCTION 1463f2d8d FUN_1463f2d8d body=47 status=ok
// SIG undefined FUN_1463f2d8d(void)

longlong FUN_1463f2d8d(void)

{
  if (DAT_14caf6920 == 0) {
    FUN_14000fc22(&DAT_14caf6920,&PTR_FUN_14aa112a8);
  }
  return DAT_14caf6920;
}



// FUNCTION 1463f2dbc FUN_1463f2dbc body=47 status=ok
// SIG undefined FUN_1463f2dbc(void)

longlong FUN_1463f2dbc(void)

{
  if (DAT_14caf6928 == 0) {
    FUN_14000fc22(&DAT_14caf6928,&PTR_FUN_14aa11340);
  }
  return DAT_14caf6928;
}



// FUNCTION 1463f2dec FUN_1463f2dec body=34 status=ok
// SIG undefined FUN_1463f2dec(void)

void FUN_1463f2dec(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7b636();
  FUN_14069c8d6(uVar1,&PTR_s_AddComponentToCluster_14aa11380,0xd);
  return;
}



// FUNCTION 1463f2e14 FUN_1463f2e14 body=1515 status=ok
// SIG undefined FUN_1463f2e14(void)

void FUN_1463f2e14(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144a7958c();
  if (DAT_14caf6840 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14caf6840 = FUN_140002ddd(FUN_1463f280d,uVar4,L"ClusteredComponentData");
  }
  lVar3 = DAT_14caf6840;
  plVar1 = (longlong *)(param_1 + 0x6a0);
  lVar2 = param_1 + 0x6b0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x6c8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar2)) {
    do {
      do {
        local_a0 = *local_90;
        local_a8 = (longlong)iStack_74;
        local_68 = 0;
        FUN_14485c47a(&local_68,lVar3);
        local_b8 = 0;
        FUN_140de7278(param_2,&local_68,local_a0 + local_a8 * 0x38 + 8,param_1);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar5);
    } while ((local_80 != lVar2) || (local_90 != plVar1));
  }
  if (DAT_14caf6858 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14caf6858 = FUN_140002ddd(FUN_1463f28a9,uVar4,L"ClusteredActorData");
  }
  lVar3 = DAT_14caf6858;
  plVar1 = (longlong *)(param_1 + 0x708);
  lVar2 = param_1 + 0x718;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x730);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar2)) {
    do {
      do {
        local_a0 = *local_90;
        local_a8 = (longlong)iStack_74;
        local_68 = 0;
        FUN_14485c47a(&local_68,lVar3);
        local_b8 = 0;
        FUN_140de7278(param_2,&local_68,local_a0 + local_a8 * 0x68 + 8,param_1);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar5);
    } while ((local_80 != lVar2) || (local_90 != plVar1));
  }
  if (DAT_14caf6888 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14caf6888 = FUN_140002ddd(FUN_1463f29d5,uVar4,L"ClusterUnionPendingAddData");
  }
  lVar3 = DAT_14caf6888;
  plVar1 = (longlong *)(param_1 + 0x758);
  lVar2 = param_1 + 0x768;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x780) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x780);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar2)) {
    do {
      do {
        local_a0 = *local_90;
        local_a8 = (longlong)iStack_74;
        local_68 = 0;
        FUN_14485c47a(&local_68,lVar3);
        local_b8 = 0;
        FUN_140de7278(param_2,&local_68,local_a0 + local_a8 * 0x60 + 8,param_1);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar5);
    } while ((local_80 != lVar2) || (local_90 != plVar1));
  }
  if (DAT_14caf6888 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14caf6888 = FUN_140002ddd(FUN_1463f29d5,uVar4,L"ClusterUnionPendingAddData");
  }
  plVar1 = (longlong *)(param_1 + 0x7a8);
  lVar2 = param_1 + 0x7b8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_98 = DAT_14caf6888;
  local_60 = lVar2;
  if (*(int *)(param_1 + 2000) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 2000);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar2)) {
    do {
      do {
        local_b8 = 0;
        thunk_FUN_140497476(param_2,&local_98,*local_90 + (longlong)iStack_74 * 0x60 + 8,param_1);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar5);
    } while ((local_80 != lVar2) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463f3400 FUN_1463f3400 body=49 status=ok
// SIG undefined FUN_1463f3400(void)

longlong FUN_1463f3400(void)

{
  if (DAT_14caf6a50 == 0) {
    FUN_14073dd9a(&DAT_14caf6a50,&PTR_LAB_14aa13db0);
  }
  return DAT_14caf6a50;
}



// FUNCTION 1463f3431 FUN_1463f3431 body=47 status=ok
// SIG undefined FUN_1463f3431(void)

longlong FUN_1463f3431(void)

{
  if (DAT_14caf69e0 == 0) {
    FUN_14000fc22(&DAT_14caf69e0,&PTR_FUN_14aa13048);
  }
  return DAT_14caf69e0;
}



// FUNCTION 1463f3460 FUN_1463f3460 body=47 status=ok
// SIG undefined FUN_1463f3460(void)

longlong FUN_1463f3460(void)

{
  if (DAT_14caf69e8 == 0) {
    FUN_14000fc22(&DAT_14caf69e8,&PTR_FUN_14aa130f0);
  }
  return DAT_14caf69e8;
}



// FUNCTION 1463f348f FUN_1463f348f body=47 status=ok
// SIG undefined FUN_1463f348f(void)

longlong FUN_1463f348f(void)

{
  if (DAT_14caf69f0 == 0) {
    FUN_14000fc22(&DAT_14caf69f0,&PTR_FUN_14aa131c8);
  }
  return DAT_14caf69f0;
}



// FUNCTION 1463f34be FUN_1463f34be body=47 status=ok
// SIG undefined FUN_1463f34be(void)

longlong FUN_1463f34be(void)

{
  if (DAT_14caf69f8 == 0) {
    FUN_14000fc22(&DAT_14caf69f8,&PTR_FUN_14aa13268);
  }
  return DAT_14caf69f8;
}



// FUNCTION 1463f34ed FUN_1463f34ed body=47 status=ok
// SIG undefined FUN_1463f34ed(void)

longlong FUN_1463f34ed(void)

{
  if (DAT_14caf6a00 == 0) {
    FUN_14000fc22(&DAT_14caf6a00,&PTR_FUN_14aa132c0);
  }
  return DAT_14caf6a00;
}



// FUNCTION 1463f351c FUN_1463f351c body=47 status=ok
// SIG undefined FUN_1463f351c(void)

longlong FUN_1463f351c(void)

{
  if (DAT_14caf6a08 == 0) {
    FUN_14000fc22(&DAT_14caf6a08,&PTR_FUN_14aa13320);
  }
  return DAT_14caf6a08;
}



// FUNCTION 1463f354b FUN_1463f354b body=47 status=ok
// SIG undefined FUN_1463f354b(void)

longlong FUN_1463f354b(void)

{
  if (DAT_14caf6a10 == 0) {
    FUN_14000fc22(&DAT_14caf6a10,&PTR_FUN_14aa13380);
  }
  return DAT_14caf6a10;
}



// FUNCTION 1463f357a FUN_1463f357a body=47 status=ok
// SIG undefined FUN_1463f357a(void)

longlong FUN_1463f357a(void)

{
  if (DAT_14caf6a18 == 0) {
    FUN_14000fc22(&DAT_14caf6a18,&PTR_FUN_14aa133d8);
  }
  return DAT_14caf6a18;
}



// FUNCTION 1463f35a9 FUN_1463f35a9 body=47 status=ok
// SIG undefined FUN_1463f35a9(void)

longlong FUN_1463f35a9(void)

{
  if (DAT_14caf6a20 == 0) {
    FUN_14000fc22(&DAT_14caf6a20,&PTR_FUN_14aa13438);
  }
  return DAT_14caf6a20;
}



// FUNCTION 1463f35d8 FUN_1463f35d8 body=47 status=ok
// SIG undefined FUN_1463f35d8(void)

longlong FUN_1463f35d8(void)

{
  if (DAT_14caf6a28 == 0) {
    FUN_14000fc22(&DAT_14caf6a28,&PTR_FUN_14aa134e0);
  }
  return DAT_14caf6a28;
}



// FUNCTION 1463f3607 FUN_1463f3607 body=47 status=ok
// SIG undefined FUN_1463f3607(void)

longlong FUN_1463f3607(void)

{
  if (DAT_14caf6a30 == 0) {
    FUN_14000fc22(&DAT_14caf6a30,&PTR_FUN_14aa13580);
  }
  return DAT_14caf6a30;
}



// FUNCTION 1463f3636 FUN_1463f3636 body=47 status=ok
// SIG undefined FUN_1463f3636(void)

longlong FUN_1463f3636(void)

{
  if (DAT_14caf6a38 == 0) {
    FUN_14000fc22(&DAT_14caf6a38,&PTR_FUN_14aa13668);
  }
  return DAT_14caf6a38;
}



// FUNCTION 1463f3665 FUN_1463f3665 body=47 status=ok
// SIG undefined FUN_1463f3665(void)

longlong FUN_1463f3665(void)

{
  if (DAT_14caf6a40 == 0) {
    FUN_14000fc22(&DAT_14caf6a40,&PTR_FUN_14aa13760);
  }
  return DAT_14caf6a40;
}



// FUNCTION 1463f3694 FUN_1463f3694 body=34 status=ok
// SIG undefined FUN_1463f3694(void)

void FUN_1463f3694(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992afc();
  FUN_14069c8d6(uVar1,&PTR_s_GetChildClusteredComponent_14aa137a0,0xd);
  return;
}



// FUNCTION 1463f36b6 FUN_1463f36b6 body=49 status=ok
// SIG undefined FUN_1463f36b6(void)

longlong FUN_1463f36b6(void)

{
  if (DAT_14caf6aa0 == 0) {
    FUN_1409ce572(&DAT_14caf6aa0,&PTR_FUN_14aa14530);
  }
  return DAT_14caf6aa0;
}



// FUNCTION 1463f36e8 FUN_1463f36e8 body=55 status=ok
// SIG undefined FUN_1463f36e8(void)

void FUN_1463f36e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6ac0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6ac0 = FUN_140002ddd(FUN_1463f371f,uVar1,L"ConstraintDrive");
  }
  return;
}



// FUNCTION 1463f371f FUN_1463f371f body=49 status=ok
// SIG undefined FUN_1463f371f(void)

longlong FUN_1463f371f(void)

{
  if (DAT_14caf6ab8 == 0) {
    FUN_14086a14e(&DAT_14caf6ab8,&PTR_FUN_14aa14718);
  }
  return DAT_14caf6ab8;
}



// FUNCTION 1463f3750 FUN_1463f3750 body=48 status=ok
// SIG undefined FUN_1463f3750(void)

void FUN_1463f3750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14aa1ccf0;
  return;
}



// FUNCTION 1463f3780 FUN_1463f3780 body=55 status=ok
// SIG undefined FUN_1463f3780(void)

void FUN_1463f3780(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6ad8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6ad8 = FUN_140002ddd(FUN_1463f37b7,uVar1,L"LinearDriveConstraint");
  }
  return;
}



// FUNCTION 1463f37b7 FUN_1463f37b7 body=47 status=ok
// SIG undefined FUN_1463f37b7(void)

longlong FUN_1463f37b7(void)

{
  if (DAT_14caf6ad0 == 0) {
    FUN_14086a14e(&DAT_14caf6ad0,&PTR_FUN_14aa14978);
  }
  return DAT_14caf6ad0;
}



// FUNCTION 1463f37e6 FUN_1463f37e6 body=48 status=ok
// SIG undefined FUN_1463f37e6(void)

void FUN_1463f37e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14aa1ce50;
  return;
}



// FUNCTION 1463f3816 FUN_1463f3816 body=55 status=ok
// SIG undefined FUN_1463f3816(void)

void FUN_1463f3816(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6af0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6af0 = FUN_140002ddd(FUN_1463f384d,uVar1,L"AngularDriveConstraint");
  }
  return;
}



// FUNCTION 1463f384d FUN_1463f384d body=47 status=ok
// SIG undefined FUN_1463f384d(void)

longlong FUN_1463f384d(void)

{
  if (DAT_14caf6ae8 == 0) {
    FUN_14086a14e(&DAT_14caf6ae8,&PTR_FUN_14aa14c70);
  }
  return DAT_14caf6ae8;
}



// FUNCTION 1463f387c FUN_1463f387c body=48 status=ok
// SIG undefined FUN_1463f387c(void)

void FUN_1463f387c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14aa1cfb0;
  return;
}



// FUNCTION 1463f38ac FUN_1463f38ac body=47 status=ok
// SIG undefined FUN_1463f38ac(void)

longlong FUN_1463f38ac(void)

{
  if (DAT_14caf6b00 == 0) {
    FUN_1409ce572(&DAT_14caf6b00,&PTR_FUN_14aa14e10);
  }
  return DAT_14caf6b00;
}



// FUNCTION 1463f38dc FUN_1463f38dc body=55 status=ok
// SIG undefined FUN_1463f38dc(void)

void FUN_1463f38dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6b20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6b20 = FUN_140002ddd(FUN_1463f3913,uVar1,L"ConstraintProfileProperties");
  }
  return;
}



// FUNCTION 1463f3913 FUN_1463f3913 body=49 status=ok
// SIG undefined FUN_1463f3913(void)

longlong FUN_1463f3913(void)

{
  if (DAT_14caf6b18 == 0) {
    FUN_14086a14e(&DAT_14caf6b18,&PTR_FUN_14aa15638);
  }
  return DAT_14caf6b18;
}



// FUNCTION 1463f3944 FUN_1463f3944 body=48 status=ok
// SIG undefined FUN_1463f3944(void)

void FUN_1463f3944(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000160;
  *puVar1 = &PTR_FUN_14aa1d330;
  return;
}



// FUNCTION 1463f3974 FUN_1463f3974 body=55 status=ok
// SIG undefined FUN_1463f3974(void)

void FUN_1463f3974(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6b38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6b38 = FUN_140002ddd(FUN_1463f39ab,uVar1,L"ConstraintInstanceBase");
  }
  return;
}



// FUNCTION 1463f39ab FUN_1463f39ab body=47 status=ok
// SIG undefined FUN_1463f39ab(void)

longlong FUN_1463f39ab(void)

{
  if (DAT_14caf6b30 == 0) {
    FUN_14086a14e(&DAT_14caf6b30,&PTR_FUN_14aa156b8);
  }
  return DAT_14caf6b30;
}



// FUNCTION 1463f39da FUN_1463f39da body=48 status=ok
// SIG undefined FUN_1463f39da(void)

void FUN_1463f39da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14aa1d490;
  return;
}



// FUNCTION 1463f3a0a FUN_1463f3a0a body=55 status=ok
// SIG undefined FUN_1463f3a0a(void)

void FUN_1463f3a0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6b50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6b50 = FUN_140002ddd(FUN_1463f3a41,uVar1,L"ConstraintInstance");
  }
  return;
}



// FUNCTION 1463f3a41 FUN_1463f3a41 body=49 status=ok
// SIG undefined FUN_1463f3a41(void)

longlong FUN_1463f3a41(void)

{
  if (DAT_14caf6b48 == 0) {
    FUN_14086a14e(&DAT_14caf6b48,&PTR_FUN_14aa15b10);
  }
  return DAT_14caf6b48;
}



// FUNCTION 1463f3a72 FUN_1463f3a72 body=48 status=ok
// SIG undefined FUN_1463f3a72(void)

void FUN_1463f3a72(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000288;
  *puVar1 = &PTR_FUN_14aa1d600;
  return;
}



// FUNCTION 1463f3aa2 FUN_1463f3aa2 body=55 status=ok
// SIG undefined FUN_1463f3aa2(void)

void FUN_1463f3aa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6b68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6b68 = FUN_140002ddd(FUN_1417e6a40,uVar1,L"ConstraintInstanceAccessor");
  }
  return;
}



// FUNCTION 1463f3ada FUN_1463f3ada body=48 status=ok
// SIG undefined FUN_1463f3ada(void)

void FUN_1463f3ada(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14aa1d770;
  return;
}



// FUNCTION 1463f3b0a FUN_1463f3b0a body=47 status=ok
// SIG undefined FUN_1463f3b0a(void)

longlong FUN_1463f3b0a(void)

{
  if (DAT_14caf6bf8 == 0) {
    FUN_14000fc22(&DAT_14caf6bf8,&PTR_FUN_14aa16380);
  }
  return DAT_14caf6bf8;
}



// FUNCTION 1463f3b39 FUN_1463f3b39 body=47 status=ok
// SIG undefined FUN_1463f3b39(void)

longlong FUN_1463f3b39(void)

{
  if (DAT_14caf6c00 == 0) {
    FUN_14000fc22(&DAT_14caf6c00,&PTR_FUN_14aa164b0);
  }
  return DAT_14caf6c00;
}



// FUNCTION 1463f3b68 FUN_1463f3b68 body=47 status=ok
// SIG undefined FUN_1463f3b68(void)

longlong FUN_1463f3b68(void)

{
  if (DAT_14caf6c08 == 0) {
    FUN_14000fc22(&DAT_14caf6c08,&PTR_FUN_14aa165a8);
  }
  return DAT_14caf6c08;
}



// FUNCTION 1463f3b97 FUN_1463f3b97 body=47 status=ok
// SIG undefined FUN_1463f3b97(void)

longlong FUN_1463f3b97(void)

{
  if (DAT_14caf6c10 == 0) {
    FUN_14000fc22(&DAT_14caf6c10,&PTR_FUN_14aa16748);
  }
  return DAT_14caf6c10;
}



// FUNCTION 1463f3bc6 FUN_1463f3bc6 body=47 status=ok
// SIG undefined FUN_1463f3bc6(void)

longlong FUN_1463f3bc6(void)

{
  if (DAT_14caf6c18 == 0) {
    FUN_14000fc22(&DAT_14caf6c18,&PTR_FUN_14aa169c0);
  }
  return DAT_14caf6c18;
}



// FUNCTION 1463f3bf5 FUN_1463f3bf5 body=47 status=ok
// SIG undefined FUN_1463f3bf5(void)

longlong FUN_1463f3bf5(void)

{
  if (DAT_14caf6c20 == 0) {
    FUN_14000fc22(&DAT_14caf6c20,&PTR_FUN_14aa16ac0);
  }
  return DAT_14caf6c20;
}



// FUNCTION 1463f3c24 FUN_1463f3c24 body=47 status=ok
// SIG undefined FUN_1463f3c24(void)

longlong FUN_1463f3c24(void)

{
  if (DAT_14caf6c28 == 0) {
    FUN_14000fc22(&DAT_14caf6c28,&PTR_FUN_14aa16bf0);
  }
  return DAT_14caf6c28;
}



// FUNCTION 1463f3c53 FUN_1463f3c53 body=47 status=ok
// SIG undefined FUN_1463f3c53(void)

longlong FUN_1463f3c53(void)

{
  if (DAT_14caf6c30 == 0) {
    FUN_14000fc22(&DAT_14caf6c30,&PTR_FUN_14aa16e60);
  }
  return DAT_14caf6c30;
}



// FUNCTION 1463f3c82 FUN_1463f3c82 body=47 status=ok
// SIG undefined FUN_1463f3c82(void)

longlong FUN_1463f3c82(void)

{
  if (DAT_14caf6c38 == 0) {
    FUN_14000fc22(&DAT_14caf6c38,&PTR_FUN_14aa170d0);
  }
  return DAT_14caf6c38;
}



// FUNCTION 1463f3cb1 FUN_1463f3cb1 body=47 status=ok
// SIG undefined FUN_1463f3cb1(void)

longlong FUN_1463f3cb1(void)

{
  if (DAT_14caf6c40 == 0) {
    FUN_14000fc22(&DAT_14caf6c40,&PTR_FUN_14aa171d0);
  }
  return DAT_14caf6c40;
}



// FUNCTION 1463f3ce0 FUN_1463f3ce0 body=47 status=ok
// SIG undefined FUN_1463f3ce0(void)

longlong FUN_1463f3ce0(void)

{
  if (DAT_14caf6c48 == 0) {
    FUN_14000fc22(&DAT_14caf6c48,&PTR_FUN_14aa17340);
  }
  return DAT_14caf6c48;
}



// FUNCTION 1463f3d0f FUN_1463f3d0f body=47 status=ok
// SIG undefined FUN_1463f3d0f(void)

longlong FUN_1463f3d0f(void)

{
  if (DAT_14caf6c50 == 0) {
    FUN_14000fc22(&DAT_14caf6c50,&PTR_FUN_14aa17440);
  }
  return DAT_14caf6c50;
}



// FUNCTION 1463f3d3e FUN_1463f3d3e body=47 status=ok
// SIG undefined FUN_1463f3d3e(void)

longlong FUN_1463f3d3e(void)

{
  if (DAT_14caf6c58 == 0) {
    FUN_14000fc22(&DAT_14caf6c58,&PTR_FUN_14aa17580);
  }
  return DAT_14caf6c58;
}



// FUNCTION 1463f3d6d FUN_1463f3d6d body=47 status=ok
// SIG undefined FUN_1463f3d6d(void)

longlong FUN_1463f3d6d(void)

{
  if (DAT_14caf6c60 == 0) {
    FUN_14000fc22(&DAT_14caf6c60,&PTR_FUN_14aa17668);
  }
  return DAT_14caf6c60;
}



// FUNCTION 1463f3d9c FUN_1463f3d9c body=47 status=ok
// SIG undefined FUN_1463f3d9c(void)

longlong FUN_1463f3d9c(void)

{
  if (DAT_14caf6c68 == 0) {
    FUN_14000fc22(&DAT_14caf6c68,&PTR_FUN_14aa17758);
  }
  return DAT_14caf6c68;
}



// FUNCTION 1463f3dcb FUN_1463f3dcb body=47 status=ok
// SIG undefined FUN_1463f3dcb(void)

longlong FUN_1463f3dcb(void)

{
  if (DAT_14caf6c70 == 0) {
    FUN_14000fc22(&DAT_14caf6c70,&PTR_FUN_14aa17880);
  }
  return DAT_14caf6c70;
}



// FUNCTION 1463f3dfa FUN_1463f3dfa body=47 status=ok
// SIG undefined FUN_1463f3dfa(void)

longlong FUN_1463f3dfa(void)

{
  if (DAT_14caf6c78 == 0) {
    FUN_14000fc22(&DAT_14caf6c78,&PTR_FUN_14aa179e8);
  }
  return DAT_14caf6c78;
}



// FUNCTION 1463f3e29 FUN_1463f3e29 body=47 status=ok
// SIG undefined FUN_1463f3e29(void)

longlong FUN_1463f3e29(void)

{
  if (DAT_14caf6c80 == 0) {
    FUN_14000fc22(&DAT_14caf6c80,&PTR_FUN_14aa17b98);
  }
  return DAT_14caf6c80;
}



// FUNCTION 1463f3e58 FUN_1463f3e58 body=47 status=ok
// SIG undefined FUN_1463f3e58(void)

longlong FUN_1463f3e58(void)

{
  if (DAT_14caf6c88 == 0) {
    FUN_14000fc22(&DAT_14caf6c88,&PTR_FUN_14aa17d08);
  }
  return DAT_14caf6c88;
}



// FUNCTION 1463f3e87 FUN_1463f3e87 body=47 status=ok
// SIG undefined FUN_1463f3e87(void)

longlong FUN_1463f3e87(void)

{
  if (DAT_14caf6c90 == 0) {
    FUN_14000fc22(&DAT_14caf6c90,&PTR_FUN_14aa17ec8);
  }
  return DAT_14caf6c90;
}



// FUNCTION 1463f3eb6 FUN_1463f3eb6 body=47 status=ok
// SIG undefined FUN_1463f3eb6(void)

longlong FUN_1463f3eb6(void)

{
  if (DAT_14caf6c98 == 0) {
    FUN_14000fc22(&DAT_14caf6c98,&PTR_FUN_14aa17fb8);
  }
  return DAT_14caf6c98;
}



// FUNCTION 1463f3ee5 FUN_1463f3ee5 body=47 status=ok
// SIG undefined FUN_1463f3ee5(void)

longlong FUN_1463f3ee5(void)

{
  if (DAT_14caf6ca0 == 0) {
    FUN_14000fc22(&DAT_14caf6ca0,&PTR_FUN_14aa18230);
  }
  return DAT_14caf6ca0;
}



// FUNCTION 1463f3f14 FUN_1463f3f14 body=47 status=ok
// SIG undefined FUN_1463f3f14(void)

longlong FUN_1463f3f14(void)

{
  if (DAT_14caf6ca8 == 0) {
    FUN_14000fc22(&DAT_14caf6ca8,&PTR_FUN_14aa183a8);
  }
  return DAT_14caf6ca8;
}



// FUNCTION 1463f3f43 FUN_1463f3f43 body=47 status=ok
// SIG undefined FUN_1463f3f43(void)

longlong FUN_1463f3f43(void)

{
  if (DAT_14caf6cb0 == 0) {
    FUN_14000fc22(&DAT_14caf6cb0,&PTR_FUN_14aa18498);
  }
  return DAT_14caf6cb0;
}



// FUNCTION 1463f3f72 FUN_1463f3f72 body=47 status=ok
// SIG undefined FUN_1463f3f72(void)

longlong FUN_1463f3f72(void)

{
  if (DAT_14caf6cb8 == 0) {
    FUN_14000fc22(&DAT_14caf6cb8,&PTR_FUN_14aa18590);
  }
  return DAT_14caf6cb8;
}



// FUNCTION 1463f3fa1 FUN_1463f3fa1 body=47 status=ok
// SIG undefined FUN_1463f3fa1(void)

longlong FUN_1463f3fa1(void)

{
  if (DAT_14caf6cc0 == 0) {
    FUN_14000fc22(&DAT_14caf6cc0,&PTR_FUN_14aa18680);
  }
  return DAT_14caf6cc0;
}



// FUNCTION 1463f3fd0 FUN_1463f3fd0 body=47 status=ok
// SIG undefined FUN_1463f3fd0(void)

longlong FUN_1463f3fd0(void)

{
  if (DAT_14caf6cc8 == 0) {
    FUN_14000fc22(&DAT_14caf6cc8,&PTR_FUN_14aa187c0);
  }
  return DAT_14caf6cc8;
}



// FUNCTION 1463f3fff FUN_1463f3fff body=47 status=ok
// SIG undefined FUN_1463f3fff(void)

longlong FUN_1463f3fff(void)

{
  if (DAT_14caf6cd0 == 0) {
    FUN_14000fc22(&DAT_14caf6cd0,&PTR_FUN_14aa188a8);
  }
  return DAT_14caf6cd0;
}



// FUNCTION 1463f402e FUN_1463f402e body=47 status=ok
// SIG undefined FUN_1463f402e(void)

longlong FUN_1463f402e(void)

{
  if (DAT_14caf6cd8 == 0) {
    FUN_14000fc22(&DAT_14caf6cd8,&PTR_FUN_14aa18a18);
  }
  return DAT_14caf6cd8;
}



// FUNCTION 1463f405d FUN_1463f405d body=47 status=ok
// SIG undefined FUN_1463f405d(void)

longlong FUN_1463f405d(void)

{
  if (DAT_14caf6ce0 == 0) {
    FUN_14000fc22(&DAT_14caf6ce0,&PTR_FUN_14aa18b28);
  }
  return DAT_14caf6ce0;
}



// FUNCTION 1463f408c FUN_1463f408c body=47 status=ok
// SIG undefined FUN_1463f408c(void)

longlong FUN_1463f408c(void)

{
  if (DAT_14caf6ce8 == 0) {
    FUN_14000fc22(&DAT_14caf6ce8,&PTR_FUN_14aa18c00);
  }
  return DAT_14caf6ce8;
}



// FUNCTION 1463f40bb FUN_1463f40bb body=47 status=ok
// SIG undefined FUN_1463f40bb(void)

longlong FUN_1463f40bb(void)

{
  if (DAT_14caf6cf0 == 0) {
    FUN_14000fc22(&DAT_14caf6cf0,&PTR_FUN_14aa18d50);
  }
  return DAT_14caf6cf0;
}



// FUNCTION 1463f40ea FUN_1463f40ea body=47 status=ok
// SIG undefined FUN_1463f40ea(void)

longlong FUN_1463f40ea(void)

{
  if (DAT_14caf6cf8 == 0) {
    FUN_14000fc22(&DAT_14caf6cf8,&PTR_FUN_14aa18f78);
  }
  return DAT_14caf6cf8;
}



// FUNCTION 1463f4119 FUN_1463f4119 body=47 status=ok
// SIG undefined FUN_1463f4119(void)

longlong FUN_1463f4119(void)

{
  if (DAT_14caf6d00 == 0) {
    FUN_14000fc22(&DAT_14caf6d00,&PTR_FUN_14aa19050);
  }
  return DAT_14caf6d00;
}



// FUNCTION 1463f4148 FUN_1463f4148 body=47 status=ok
// SIG undefined FUN_1463f4148(void)

longlong FUN_1463f4148(void)

{
  if (DAT_14caf6d08 == 0) {
    FUN_14000fc22(&DAT_14caf6d08,&PTR_FUN_14aa19168);
  }
  return DAT_14caf6d08;
}



// FUNCTION 1463f4177 FUN_1463f4177 body=47 status=ok
// SIG undefined FUN_1463f4177(void)

longlong FUN_1463f4177(void)

{
  if (DAT_14caf6d10 == 0) {
    FUN_14000fc22(&DAT_14caf6d10,&PTR_FUN_14aa19360);
  }
  return DAT_14caf6d10;
}



// FUNCTION 1463f41a6 FUN_1463f41a6 body=47 status=ok
// SIG undefined FUN_1463f41a6(void)

longlong FUN_1463f41a6(void)

{
  if (DAT_14caf6d18 == 0) {
    FUN_14000fc22(&DAT_14caf6d18,&PTR_FUN_14aa19550);
  }
  return DAT_14caf6d18;
}



// FUNCTION 1463f41d5 FUN_1463f41d5 body=47 status=ok
// SIG undefined FUN_1463f41d5(void)

longlong FUN_1463f41d5(void)

{
  if (DAT_14caf6d20 == 0) {
    FUN_14000fc22(&DAT_14caf6d20,&PTR_FUN_14aa19620);
  }
  return DAT_14caf6d20;
}



// FUNCTION 1463f4204 FUN_1463f4204 body=47 status=ok
// SIG undefined FUN_1463f4204(void)

longlong FUN_1463f4204(void)

{
  if (DAT_14caf6d28 == 0) {
    FUN_14000fc22(&DAT_14caf6d28,&PTR_FUN_14aa19738);
  }
  return DAT_14caf6d28;
}



// FUNCTION 1463f4233 FUN_1463f4233 body=47 status=ok
// SIG undefined FUN_1463f4233(void)

longlong FUN_1463f4233(void)

{
  if (DAT_14caf6d30 == 0) {
    FUN_14000fc22(&DAT_14caf6d30,&PTR_FUN_14aa19810);
  }
  return DAT_14caf6d30;
}



// FUNCTION 1463f4262 FUN_1463f4262 body=47 status=ok
// SIG undefined FUN_1463f4262(void)

longlong FUN_1463f4262(void)

{
  if (DAT_14caf6d38 == 0) {
    FUN_14000fc22(&DAT_14caf6d38,&PTR_FUN_14aa198e0);
  }
  return DAT_14caf6d38;
}



// FUNCTION 1463f4291 FUN_1463f4291 body=47 status=ok
// SIG undefined FUN_1463f4291(void)

longlong FUN_1463f4291(void)

{
  if (DAT_14caf6d40 == 0) {
    FUN_14000fc22(&DAT_14caf6d40,&PTR_FUN_14aa199b0);
  }
  return DAT_14caf6d40;
}



// FUNCTION 1463f42c0 FUN_1463f42c0 body=47 status=ok
// SIG undefined FUN_1463f42c0(void)

longlong FUN_1463f42c0(void)

{
  if (DAT_14caf6d48 == 0) {
    FUN_14000fc22(&DAT_14caf6d48,&PTR_FUN_14aa19ac8);
  }
  return DAT_14caf6d48;
}



// FUNCTION 1463f42ef FUN_1463f42ef body=47 status=ok
// SIG undefined FUN_1463f42ef(void)

longlong FUN_1463f42ef(void)

{
  if (DAT_14caf6d50 == 0) {
    FUN_14000fc22(&DAT_14caf6d50,&PTR_FUN_14aa19c10);
  }
  return DAT_14caf6d50;
}



// FUNCTION 1463f431e FUN_1463f431e body=47 status=ok
// SIG undefined FUN_1463f431e(void)

longlong FUN_1463f431e(void)

{
  if (DAT_14caf6d58 == 0) {
    FUN_14000fc22(&DAT_14caf6d58,&PTR_FUN_14aa19dc8);
  }
  return DAT_14caf6d58;
}



// FUNCTION 1463f434d FUN_1463f434d body=47 status=ok
// SIG undefined FUN_1463f434d(void)

longlong FUN_1463f434d(void)

{
  if (DAT_14caf6d60 == 0) {
    FUN_14000fc22(&DAT_14caf6d60,&PTR_FUN_14aa19f20);
  }
  return DAT_14caf6d60;
}



// FUNCTION 1463f437c FUN_1463f437c body=47 status=ok
// SIG undefined FUN_1463f437c(void)

longlong FUN_1463f437c(void)

{
  if (DAT_14caf6d68 == 0) {
    FUN_14000fc22(&DAT_14caf6d68,&PTR_FUN_14aa1a080);
  }
  return DAT_14caf6d68;
}



// FUNCTION 1463f43ab FUN_1463f43ab body=47 status=ok
// SIG undefined FUN_1463f43ab(void)

longlong FUN_1463f43ab(void)

{
  if (DAT_14caf6d70 == 0) {
    FUN_14000fc22(&DAT_14caf6d70,&PTR_FUN_14aa1a150);
  }
  return DAT_14caf6d70;
}



// FUNCTION 1463f43da FUN_1463f43da body=47 status=ok
// SIG undefined FUN_1463f43da(void)

longlong FUN_1463f43da(void)

{
  if (DAT_14caf6d78 == 0) {
    FUN_14000fc22(&DAT_14caf6d78,&PTR_FUN_14aa1a340);
  }
  return DAT_14caf6d78;
}



// FUNCTION 1463f4409 FUN_1463f4409 body=47 status=ok
// SIG undefined FUN_1463f4409(void)

longlong FUN_1463f4409(void)

{
  if (DAT_14caf6d80 == 0) {
    FUN_14000fc22(&DAT_14caf6d80,&PTR_FUN_14aa1a4a0);
  }
  return DAT_14caf6d80;
}



// FUNCTION 1463f4438 FUN_1463f4438 body=47 status=ok
// SIG undefined FUN_1463f4438(void)

longlong FUN_1463f4438(void)

{
  if (DAT_14caf6d88 == 0) {
    FUN_14000fc22(&DAT_14caf6d88,&PTR_FUN_14aa1a570);
  }
  return DAT_14caf6d88;
}



// FUNCTION 1463f4467 FUN_1463f4467 body=47 status=ok
// SIG undefined FUN_1463f4467(void)

longlong FUN_1463f4467(void)

{
  if (DAT_14caf6d90 == 0) {
    FUN_14000fc22(&DAT_14caf6d90,&PTR_FUN_14aa1a660);
  }
  return DAT_14caf6d90;
}



// FUNCTION 1463f4496 FUN_1463f4496 body=47 status=ok
// SIG undefined FUN_1463f4496(void)

longlong FUN_1463f4496(void)

{
  if (DAT_14caf6d98 == 0) {
    FUN_14000fc22(&DAT_14caf6d98,&PTR_FUN_14aa1a730);
  }
  return DAT_14caf6d98;
}



// FUNCTION 1463f44c5 FUN_1463f44c5 body=47 status=ok
// SIG undefined FUN_1463f44c5(void)

longlong FUN_1463f44c5(void)

{
  if (DAT_14caf6da0 == 0) {
    FUN_14000fc22(&DAT_14caf6da0,&PTR_FUN_14aa1a848);
  }
  return DAT_14caf6da0;
}



// FUNCTION 1463f44f4 FUN_1463f44f4 body=47 status=ok
// SIG undefined FUN_1463f44f4(void)

longlong FUN_1463f44f4(void)

{
  if (DAT_14caf6da8 == 0) {
    FUN_14000fc22(&DAT_14caf6da8,&PTR_FUN_14aa1a938);
  }
  return DAT_14caf6da8;
}



// FUNCTION 1463f4523 FUN_1463f4523 body=47 status=ok
// SIG undefined FUN_1463f4523(void)

longlong FUN_1463f4523(void)

{
  if (DAT_14caf6db0 == 0) {
    FUN_14000fc22(&DAT_14caf6db0,&PTR_FUN_14aa1aa90);
  }
  return DAT_14caf6db0;
}



// FUNCTION 1463f4552 FUN_1463f4552 body=34 status=ok
// SIG undefined FUN_1463f4552(void)

void FUN_1463f4552(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a72a2a();
  FUN_14069c8d6(uVar1,&PTR_s_CopyParams_14aa1aad0,0x38);
  return;
}



// FUNCTION 1463f4574 FUN_1463f4574 body=35 status=ok
// SIG undefined FUN_1463f4574(void)

void FUN_1463f4574(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa1b280;
  return;
}



// FUNCTION 1463f4598 FUN_1463f4598 body=40 status=ok
// SIG undefined FUN_1463f4598(void)

undefined8 FUN_1463f4598(undefined8 param_1,int param_2)

{
  FUN_140cbb210();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463f45c0 FUN_1463f45c0 body=94 status=ok
// SIG undefined FUN_1463f45c0(void)

undefined8 * FUN_1463f45c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa0c7a0;
  param_1[5] = &PTR_LAB_14aa0cc20;
  param_1[6] = &PTR_LAB_14aa0cc60;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


