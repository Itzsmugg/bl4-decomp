// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ddb456 FUN_145ddb456 body=146 status=ok
// SIG undefined FUN_145ddb456(void)

code * FUN_145ddb456(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405f00c8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FShaderPrintCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000022a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4d288;
  return FUN_146307e64;
}



// FUNCTION 145ddb4f4 FUN_145ddb4f4 body=173 status=ok
// SIG undefined FUN_145ddb4f4(void)

undefined8 * FUN_145ddb4f4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a660600;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb90) {
    FUN_144b3d300(&DAT_14caebb90);
    if (DAT_14caebb90 == -1) {
      FUN_141557974();
      atexit((_func_5014 *)&LAB_14356efa5);
      _Init_thread_footer(&DAT_14caebb90);
    }
  }
  return param_1;
}



// FUNCTION 145ddb5ac FUN_145ddb5ac body=173 status=ok
// SIG undefined FUN_145ddb5ac(void)

undefined8 * FUN_145ddb5ac(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a660f00;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb78) {
    FUN_144b3d300(&DAT_14caebb78);
    if (DAT_14caebb78 == -1) {
      FUN_141557a1a();
      atexit((_func_5014 *)&LAB_14356ef91);
      _Init_thread_footer(&DAT_14caebb78);
    }
  }
  return param_1;
}



// FUNCTION 145ddb664 FUN_145ddb664 body=173 status=ok
// SIG undefined FUN_145ddb664(void)

undefined8 * FUN_145ddb664(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a664660;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb0b0) {
    FUN_144b3d300(&DAT_14caeb0b0);
    if (DAT_14caeb0b0 == -1) {
      FUN_141557ac0();
      atexit((_func_5014 *)&LAB_14356dc92);
      _Init_thread_footer(&DAT_14caeb0b0);
    }
  }
  return param_1;
}



// FUNCTION 145ddb71c FUN_145ddb71c body=172 status=ok
// SIG undefined FUN_145ddb71c(void)

undefined8 * FUN_145ddb71c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a675150;
  memset(param_1 + 0x16,0,0x460);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb028) {
    FUN_144b3d300(&DAT_14caeb028);
    if (DAT_14caeb028 == -1) {
      FUN_141557b66();
      atexit((_func_5014 *)&LAB_14356db6d);
      _Init_thread_footer(&DAT_14caeb028);
    }
  }
  return param_1;
}



// FUNCTION 145ddb7d4 FUN_145ddb7d4 body=173 status=ok
// SIG undefined FUN_145ddb7d4(void)

undefined8 * FUN_145ddb7d4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68c0c0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebc68) {
    FUN_144b3d300(&DAT_14caebc68);
    if (DAT_14caebc68 == -1) {
      FUN_141557c0c();
      atexit((_func_5014 *)&LAB_14356f0ce);
      _Init_thread_footer(&DAT_14caebc68);
    }
  }
  return param_1;
}



// FUNCTION 145ddb88c FUN_145ddb88c body=173 status=ok
// SIG undefined FUN_145ddb88c(void)

undefined8 * FUN_145ddb88c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68cd80;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebce0) {
    FUN_144b3d300(&DAT_14caebce0);
    if (DAT_14caebce0 == -1) {
      FUN_141557cb2();
      atexit((_func_5014 *)&LAB_14356f132);
      _Init_thread_footer(&DAT_14caebce0);
    }
  }
  return param_1;
}



// FUNCTION 145ddb93a FUN_145ddb93a body=337 status=ok
// SIG undefined FUN_145ddb93a(void)

void FUN_145ddb93a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined *local_30;
  undefined1 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ddbb32();
  FUN_145ddba8c();
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x152) == '\x03')) {
    *(undefined1 *)(param_1 + 0x531) = 1;
    if ((*(longlong *)(lVar1 + 0x30) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) {
      lVar3 = FUN_140a99ecc();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          (*(char *)(lVar1 + 0x668) == '\x01')))) {
        *(undefined1 *)(param_1 + 0x531) = 0;
      }
    }
  }
  FUN_145ddbc4c(param_1);
  if (DAT_14c872bf2 == '\x01') {
    puVar2 = *(undefined8 **)(param_1 + 0x380);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x80;
      *(undefined4 *)(puVar2 + 6) = 0xffffffff;
      *(undefined8 **)(param_1 + 0x380) = puVar2;
    }
    local_28 = &local_31;
    local_31 = 1;
    local_30 = &DAT_14cbca3e8;
    FUN_145ddbd1a(puVar2,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddba8c FUN_145ddba8c body=164 status=ok
// SIG undefined FUN_145ddba8c(void)

void FUN_145ddba8c(void)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ddbfd7(&local_20);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar3 = local_20;
  if (local_18 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar3);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14054d1d4();
    puVar3 = local_20;
    if (local_18 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    local_28 = 0;
    (**(code **)(*plVar2 + 0x30))(plVar2,puVar3,0,1);
  }
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ddbb32 FUN_145ddbb32 body=193 status=ok
// SIG undefined FUN_145ddbb32(void)

void FUN_145ddbb32(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ddbbf4(param_1,&DAT_14cb98240,0);
  FUN_145ddbbf4(param_1,&DAT_14cb98248,1);
  FUN_145ddbbf4(param_1,&DAT_14cb98250,3);
  if (DAT_14c872bf2 == '\x01') {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    FUN_148ab76aa(&local_28);
    (**(code **)(*param_1 + 0x5a8))(param_1,&local_28);
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddbbf4 FUN_145ddbbf4 body=86 status=ok
// SIG undefined FUN_145ddbbf4(void)

void FUN_145ddbbf4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined4 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_24;
  local_24 = param_3;
  local_20 = param_2;
  FUN_140171856(param_1 + 0x388,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddbc4c FUN_145ddbc4c body=205 status=ok
// SIG undefined FUN_145ddbc4c(void)

void FUN_145ddbc4c(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [38];
  undefined1 local_42;
  undefined1 local_41;
  undefined *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_41 = 1;
  local_42 = 3;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *(undefined8 **)(param_1 + 0x380) = puVar1;
  local_40 = &DAT_14cbca450;
  local_38 = &local_41;
  FUN_145ddbd1a(puVar1,local_2c,&local_40);
  local_40 = &DAT_14cbca8a0;
  local_38 = &local_42;
  FUN_145ddbd1a(*(undefined8 *)(param_1 + 0x380),local_2c,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddbd1a FUN_145ddbd1a body=330 status=ok
// SIG undefined FUN_145ddbd1a(void)

undefined4 * FUN_145ddbd1a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_145ddbef0(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145ddbe66(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_145ddc0e8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddbe66 FUN_145ddbe66 body=137 status=ok
// SIG undefined FUN_145ddbe66(void)

undefined8 FUN_145ddbe66(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_148d35cea(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ddbef0 FUN_145ddbef0 body=231 status=ok
// SIG undefined FUN_145ddbef0(void)

int * FUN_145ddbef0(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 145ddbfd7 FUN_145ddbfd7 body=272 status=ok
// SIG undefined FUN_145ddbfd7(void)

longlong * FUN_145ddbfd7(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_140b74eb8();
  FUN_140056680(&local_58,uVar1);
  local_48 = local_58;
  local_40 = local_50 + -1;
  if (local_50 == 0) {
    local_40 = 0;
  }
  local_38 = L"GbxRelaunch.bat";
  local_30 = 0xf;
  FUN_140bee87a(&local_68,&local_48,2);
  if ((longlong *)&local_68 == param_1) {
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_68;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_64;
    *(undefined4 *)(param_1 + 1) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  }
  FUN_1401aea18(&local_48,param_1);
  if (&local_48 == param_1) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_48;
    local_48 = 0;
    *(int *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddc0e8 FUN_145ddc0e8 body=482 status=ok
// SIG undefined FUN_145ddc0e8(void)

void FUN_145ddc0e8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145ddc2cc FUN_145ddc2cc body=144 status=ok
// SIG undefined FUN_145ddc2cc(void)

code * FUN_145ddc2cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ddc35c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AmbientCubemap";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAmbientCubemapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d3860;
}



// FUNCTION 145ddc35c FUN_145ddc35c body=268 status=ok
// SIG undefined FUN_145ddc35c(void)

undefined * FUN_145ddc35c(void)

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
              0x110) < DAT_14c9e7530) {
    FUN_144b3d300(&DAT_14c9e7530);
    if (DAT_14c9e7530 == -1) {
      FUN_145ddc46a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAmbientCubemapParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e74b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd940);
      _Init_thread_footer(&DAT_14c9e7530);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e74b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddc46a FUN_145ddc46a body=226 status=ok
// SIG undefined FUN_145ddc46a(void)

longlong * FUN_145ddc46a(longlong *param_1)

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
  pcVar13 = FUN_1462d38ee;
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



// FUNCTION 145ddc54e FUN_145ddc54e body=132 status=ok
// SIG undefined FUN_145ddc54e(void)

undefined1 * FUN_145ddc54e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientCubemapColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c6410;
}



// FUNCTION 145ddc5d2 FUN_145ddc5d2 body=138 status=ok
// SIG undefined FUN_145ddc5d2(void)

code * FUN_145ddc5d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientCubemapMipAdjust";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddc54e;
}



// FUNCTION 145ddc65c FUN_145ddc65c body=138 status=ok
// SIG undefined FUN_145ddc65c(void)

code * FUN_145ddc65c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientCubemap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddc5d2;
}



// FUNCTION 145ddc6e6 FUN_145ddc6e6 body=138 status=ok
// SIG undefined FUN_145ddc6e6(void)

undefined1 * FUN_145ddc6e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ddc770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_148057c54;
}



// FUNCTION 145ddc770 FUN_145ddc770 body=268 status=ok
// SIG undefined FUN_145ddc770(void)

undefined * FUN_145ddc770(void)

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
              0x110) < DAT_14cb35070) {
    FUN_144b3d300(&DAT_14cb35070);
    if (DAT_14cb35070 == -1) {
      FUN_145ddc87e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCommonShaderParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x16;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34ff0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb960);
      _Init_thread_footer(&DAT_14cb35070);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34ff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddc87e FUN_145ddc87e body=226 status=ok
// SIG undefined FUN_145ddc87e(void)

longlong * FUN_145ddc87e(longlong *param_1)

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
  pcVar13 = FUN_145ee4cbc;
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



// FUNCTION 145ddc962 FUN_145ddc962 body=138 status=ok
// SIG undefined FUN_145ddc962(void)

code * FUN_145ddc962(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Common_StaticFloatBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148057d70;
}



// FUNCTION 145ddc9ec FUN_145ddc9ec body=138 status=ok
// SIG undefined FUN_145ddc9ec(void)

code * FUN_145ddc9ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Common_SimulationInvDeltaTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148057f98;
}



// FUNCTION 145ddca76 FUN_145ddca76 body=138 status=ok
// SIG undefined FUN_145ddca76(void)

code * FUN_145ddca76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Common_FloatOutputBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148057dfa;
}



// FUNCTION 145ddcb00 FUN_145ddcb00 body=306 status=ok
// SIG undefined FUN_145ddcb00(void)

undefined4 FUN_145ddcb00(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  plVar7 = *(longlong **)(param_3 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
  }
  uVar6 = 0;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
  }
  uStack_40 = 1;
  FUN_1413eac7e(&local_48,0);
  *local_48 = uVar6;
  local_48[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  uVar5 = (**(code **)(*param_1 + 0x398))(param_1,param_2,&local_48,param_4);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddcc34 FUN_145ddcc34 body=52 status=ok
// SIG undefined FUN_145ddcc34(void)

void FUN_145ddcc34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x248,0x10);
  FUN_145ddcc68(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 145ddcc68 FUN_145ddcc68 body=647 status=ok
// SIG undefined FUN_145ddcc68(void)

undefined8 * FUN_145ddcc68(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b85c0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x19] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1c) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1d] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1e) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1f] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x20) = (int)plVar2[1];
  FUN_1446f470e(param_1 + 0x21,&DAT_149dfb77a,1);
  FUN_140056680(param_1 + 0x22,&DAT_149dfb77a);
  param_1[0x24] = 0;
  FUN_140056680(param_1 + 0x25,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x27,&DAT_149dfb77a);
  FUN_1446f470e(param_1 + 0x29,&DAT_149dfb77a,1);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2c) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2d] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2e) = (int)plVar2[1];
  FUN_140056680(param_1 + 0x2f,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x31,&DAT_149dfb77a);
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x199) = 0;
  *(byte *)((longlong)param_1 + 0x19b) = *(byte *)((longlong)param_1 + 0x19b) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0xfe;
  FUN_140056680(param_1 + 0x37,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x39,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x3b,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(byte *)((longlong)param_1 + 0x1ea) = *(byte *)((longlong)param_1 + 0x1ea) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145ddcef0 FUN_145ddcef0 body=146 status=ok
// SIG undefined FUN_145ddcef0(void)

code * FUN_145ddcef0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ddcf82();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenSceneLightingStochasticParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fe4d0;
  return FUN_1462e32ec;
}



// FUNCTION 145ddcf82 FUN_145ddcf82 body=261 status=ok
// SIG undefined FUN_145ddcf82(void)

void FUN_145ddcf82(void)

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
              0x110) < DAT_14c9fe550) {
    FUN_144b3d300(&DAT_14c9fe550);
    if (DAT_14c9fe550 == -1) {
      FUN_141557f38(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenSceneLightingStochasticParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x10b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe4d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993bf);
      _Init_thread_footer(&DAT_14c9fe550);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddd088 FUN_145ddd088 body=138 status=ok
// SIG undefined FUN_145ddd088(void)

code * FUN_145ddd088(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplingMinWeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000113;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720e206;
}



// FUNCTION 145ddd112 FUN_145ddd112 body=138 status=ok
// SIG undefined FUN_145ddd112(void)

code * FUN_145ddd112(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalNeighborhoodClampScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000115;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720e17c;
}



// FUNCTION 145ddd19c FUN_145ddd19c body=138 status=ok
// SIG undefined FUN_145ddd19c(void)

code * FUN_145ddd19c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalAdvanceFrame";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddd112;
}



// FUNCTION 145ddd226 FUN_145ddd226 body=292 status=ok
// SIG undefined FUN_145ddd226(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ddd226(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02920) {
    FUN_144b3d300(&DAT_14ca02920);
    if (DAT_14ca02920 == -1) {
      FUN_145ddd34a();
      FUN_145ddd450();
      FUN_140db5666(&DAT_14ca02878,0,&DAT_14ca02810,L"FLumenTranslucencyVolumeHardwareRayTracingRGS"
                    ,L"/Engine/Private/Lumen/LumenTranslucencyVolumeHardwareRayTracing.usf",
                    L"LumenTranslucencyVolumeHardwareRayTracingRGS",6,8,FUN_1472220b8,FUN_147222074,
                    &LAB_1462e73d8,&LAB_147222070,&LAB_14722206a,&LAB_14722204a,0xe0,&DAT_14ca06340)
      ;
      _DAT_14ca02878 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbdf35);
      _Init_thread_footer(&DAT_14ca02920);
    }
  }
  return &DAT_14ca02878;
}



// FUNCTION 145ddd34a FUN_145ddd34a body=261 status=ok
// SIG undefined FUN_145ddd34a(void)

void FUN_145ddd34a(void)

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
              0x110) < DAT_14ca063c0) {
    FUN_144b3d300(&DAT_14ca063c0);
    if (DAT_14ca063c0 == -1) {
      FUN_145ddd59a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x430;
      local_58 = 0x3a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06340,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd342f);
      _Init_thread_footer(&DAT_14ca063c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddd450 FUN_145ddd450 body=205 status=ok
// SIG undefined FUN_145ddd450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddd450(void)

{
  if ((DAT_14ca02877 & 2) == 0) {
    DAT_14ca02877 = DAT_14ca02877 | 2;
    _DAT_14ca02818 = L"FLumenTranslucencyVolumeHardwareRayTracingRGS";
    _DAT_14ca02830 = FUN_146826540;
    _DAT_14ca02838 = FUN_146825d77;
    _DAT_14ca02840 = FUN_146825fd6;
    _DAT_14ca02848 = FUN_1407e02ea;
    _DAT_14ca02850 = FUN_146826273;
    _DAT_14ca02828 = FUN_14722201c;
    _DAT_14ca02868 = 0xffffffff000000e0;
    _DAT_14ca02870 = 8;
    DAT_14ca02874 = 0;
    _DAT_14ca02858 = &LAB_147222046;
    FUN_145ddd51e();
    FUN_1407e00cc(&DAT_14ca02810);
    return;
  }
  return;
}



// FUNCTION 145ddd51e FUN_145ddd51e body=123 status=ok
// SIG undefined FUN_145ddd51e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddd51e(void)

{
  _DAT_14ca07cd0 = L"BASE";
  DAT_14ca07cfa = 4;
  _DAT_14ca07cd8 = FUN_140b35ae4();
  _DAT_14ca07ce0 = DAT_14ca02820;
  _DAT_14ca07ce8 = &LAB_14682652b;
  DAT_14ca02820 = &DAT_14ca07cd0;
  DAT_14ca02875 = DAT_14ca02875 + '\x01';
  _DAT_14ca07cf0 = 0x100000000;
  if (*(char *)(_DAT_14ca07cd8 + 100) != '\0') {
    DAT_14ca02876 = DAT_14ca02876 + '\x01';
  }
  return;
}



// FUNCTION 145ddd59a FUN_145ddd59a body=226 status=ok
// SIG undefined FUN_145ddd59a(void)

longlong * FUN_145ddd59a(longlong *param_1)

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
  pcVar13 = FUN_145d3c692;
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



// FUNCTION 145ddd682 FUN_145ddd682 body=144 status=ok
// SIG undefined FUN_145ddd682(void)

code * FUN_145ddd682(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141364c62();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ddd712;
}



// FUNCTION 145ddd712 FUN_145ddd712 body=144 status=ok
// SIG undefined FUN_145ddd712(void)

code * FUN_145ddd712(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ad0612();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenHardwareRayTracingShaderBase::FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e99d8;
}



// FUNCTION 145ddd7a2 FUN_145ddd7a2 body=40 status=ok
// SIG undefined FUN_145ddd7a2(void)

undefined8 FUN_145ddd7a2(undefined8 param_1,int param_2)

{
  FUN_145ddd7ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ddd7ca FUN_145ddd7ca body=135 status=ok
// SIG undefined FUN_145ddd7ca(void)

void FUN_145ddd7ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a448310;
  FUN_1449db362(param_1 + 0x13);
  FUN_1449db362(param_1 + 0x11);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ddd852 FUN_145ddd852 body=40 status=ok
// SIG undefined FUN_145ddd852(void)

undefined8 FUN_145ddd852(undefined8 param_1,int param_2)

{
  FUN_145ddd87a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ddd87a FUN_145ddd87a body=135 status=ok
// SIG undefined FUN_145ddd87a(void)

void FUN_145ddd87a(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8a1120;
  param_1[5] = &PTR_FUN_14a8a13d0;
  lVar1 = 0;
  do {
    *(undefined **)((longlong)param_1 + lVar1 + 0x130) = &DAT_14a176f00;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x1a0) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0x130) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 0x138);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x180);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ddd902 FUN_145ddd902 body=40 status=ok
// SIG undefined FUN_145ddd902(void)

undefined8 FUN_145ddd902(undefined8 param_1,int param_2)

{
  FUN_145ddd92a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ddd92a FUN_145ddd92a body=135 status=ok
// SIG undefined FUN_145ddd92a(void)

void FUN_145ddd92a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14abb7e80;
  param_1[0x72] = &PTR_FUN_14abb84d0;
  param_1[0x73] = &PTR_FUN_14abb8530;
  FUN_1449db362(param_1 + 0x9b);
  plVar3 = (longlong *)param_1[0x9a];
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
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ddd9b2 FUN_145ddd9b2 body=40 status=ok
// SIG undefined FUN_145ddd9b2(void)

undefined8 FUN_145ddd9b2(undefined8 param_1,int param_2)

{
  FUN_145ddd9da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ddd9da FUN_145ddd9da body=135 status=ok
// SIG undefined FUN_145ddd9da(void)

void FUN_145ddd9da(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aecbc90;
  param_1[5] = &PTR_FUN_14aecc060;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    plVar1 = param_1 + 0x82;
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x80];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x76] != 0) {
    plVar1 = param_1 + 0x7a;
    if ((longlong *)param_1[0x78] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x78];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14594033c(param_1);
  return;
}



// FUNCTION 145ddda6c FUN_145ddda6c body=164 status=ok
// SIG undefined FUN_145ddda6c(void)

undefined8 * FUN_145ddda6c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af0c4c0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0xbff0000000000000;
  param_1[0x14] = 0xf000100000004;
  *(undefined4 *)(param_1 + 0x15) = 0x40000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 5;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  return param_1;
}



// FUNCTION 145dddb10 FUN_145dddb10 body=46 status=ok
// SIG undefined FUN_145dddb10(void)

void FUN_145dddb10(void)

{
  FUN_145dddb3e(0);
  if (DAT_14cb95310 != 0) {
    FUN_148a29754();
    DAT_14cb95310 = 0;
  }
  return;
}



// FUNCTION 145dddb3e FUN_145dddb3e body=129 status=ok
// SIG undefined FUN_145dddb3e(void)

void FUN_145dddb3e(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb95318) {
    FUN_144b3d300(&DAT_14cb95318);
    if (DAT_14cb95318 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14cb95268;
        (*param_1)(&DAT_14cb95268);
      }
      DAT_14cb95310 = puVar1;
      atexit(FUN_143ecc153);
      _Init_thread_footer(&DAT_14cb95318);
      return;
    }
  }
  return;
}



// FUNCTION 145dddbc0 FUN_145dddbc0 body=169 status=ok
// SIG undefined FUN_145dddbc0(void)

bool FUN_145dddbc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dddc70 FUN_145dddc70 body=169 status=ok
// SIG undefined FUN_145dddc70(void)

bool FUN_145dddc70(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dddd20 FUN_145dddd20 body=68 status=ok
// SIG undefined FUN_145dddd20(void)

void FUN_145dddd20(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xb90);
  memset(_Dst,0,0xb90);
  FUN_145dddd64(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145dddd64 FUN_145dddd64 body=107 status=ok
// SIG undefined FUN_145dddd64(void)

undefined8 * FUN_145dddd64(undefined8 *param_1)

{
  FUN_145854e74();
  *param_1 = &PTR_FUN_14b906470;
  FUN_140056680(param_1 + 0x16a,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x16c,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x16e,&DAT_149dfb77a);
  param_1[0x170] = 0;
  *(undefined4 *)(param_1 + 0x171) = 0;
  return param_1;
}



// FUNCTION 145ddddd0 FUN_145ddddd0 body=40 status=ok
// SIG undefined FUN_145ddddd0(void)

undefined8 FUN_145ddddd0(undefined8 param_1,int param_2)

{
  FUN_145ddddf8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ddddf8 FUN_145ddddf8 body=135 status=ok
// SIG undefined FUN_145ddddf8(void)

void FUN_145ddddf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14beae0d0;
  if (param_1[0x12] != 0) {
    FUN_141092d32(&DAT_14cb10aa8);
  }
  if (param_1[0x13] != 0) {
    FUN_141092d32(&DAT_14cb10ae8);
  }
  if (param_1[0x14] != 0) {
    FUN_14480f766(&DAT_14caf6fc8);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ddde80 FUN_145ddde80 body=145 status=ok
// SIG undefined FUN_145ddde80(void)

void FUN_145ddde80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"OnlineSubsystem",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,local_20);
  (**(code **)(*plVar3 + 0x80))(plVar3,DAT_14cb8e198);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dddf12 FUN_145dddf12 body=29 status=ok
// SIG undefined FUN_145dddf12(void)

undefined8 FUN_145dddf12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dddf30 FUN_145dddf30 body=25 status=ok
// SIG undefined FUN_145dddf30(void)

undefined8 FUN_145dddf30(undefined8 param_1,undefined8 param_2)

{
  FUN_145dddf4a(param_2);
  return param_2;
}



// FUNCTION 145dddf4a FUN_145dddf4a body=456 status=ok
// SIG undefined FUN_145dddf4a(void)

undefined8 * FUN_145dddf4a(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb8aad0 != (longlong *)0x0 && DAT_14cb8aad8 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb8aad0 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb8aad0;
    if (DAT_14cb8aad8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145dde03d;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  FUN_145dde114(puVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b425bb0;
  plVar4[2] = (longlong)puVar3;
  local_30 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    goto LAB_145dde03d;
  }
  local_38 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_145dde03d;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_145dde0b8:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145dde033;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_145dde0b8;
      puVar3[3] = plVar4;
    }
LAB_145dde033:
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
  }
LAB_145dde03d:
  *param_1 = local_38;
  param_1[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145dde114 FUN_145dde114 body=131 status=ok
// SIG undefined FUN_145dde114(void)

undefined8 * FUN_145dde114(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b425b90;
  FUN_1409e1656(param_1 + 4);
  param_1[5] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1405bceb4(param_1 + 5);
  *param_1 = &PTR_FUN_14b425b00;
  param_1[4] = &PTR_FUN_14b425b20;
  param_1[5] = &PTR_FUN_14b425b70;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145dde198 FUN_145dde198 body=21 status=ok
// SIG undefined FUN_145dde198(void)

undefined8 FUN_145dde198(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145dde1ae FUN_145dde1ae body=71 status=ok
// SIG undefined FUN_145dde1ae(void)

void FUN_145dde1ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145dde1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145dde1f6 FUN_145dde1f6 body=42 status=ok
// SIG undefined FUN_145dde1f6(void)

void FUN_145dde1f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145dde220(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145dde220 FUN_145dde220 body=94 status=ok
// SIG undefined FUN_145dde220(void)

void FUN_145dde220(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14480f766(&DAT_14c867408);
  }
  FUN_140100e25(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140100e25(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_145806982(param_1);
  return;
}



// FUNCTION 145dde27e FUN_145dde27e body=229 status=ok
// SIG undefined FUN_145dde27e(void)

void FUN_145dde27e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145dde376(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == (longlong *)0x0) goto LAB_145dde2ca;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_145dde30e:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145dde2ca;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x30) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (local_28 != plVar4) {
      *(longlong **)(param_1 + 0x38) = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_145dde2ca;
      goto LAB_145dde30e;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145dde2ca;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145dde2ca:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dde376 FUN_145dde376 body=413 status=ok
// SIG undefined FUN_145dde376(void)

longlong * FUN_145dde376(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x50,0x10);
  FUN_145dde514(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bef1610;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_145dde431;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_145dde4b7:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_145dde420;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_145dde4b7;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_145dde420:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_145dde431:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145dde514 FUN_145dde514 body=139 status=ok
// SIG undefined FUN_145dde514(void)

undefined8 * FUN_145dde514(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bef06b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_30 = FUN_140100db8;
  local_28 = 0;
  FUN_145dde5a0(&local_20,param_1);
  param_1[9] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dde5a0 FUN_145dde5a0 body=196 status=ok
// SIG undefined FUN_145dde5a0(void)

undefined8 FUN_145dde5a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bef1690;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_1448b6402(&DAT_14c867408,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dde666 FUN_145dde666 body=253 status=ok
// SIG undefined FUN_145dde666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dde666(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cbcecc8 = 0;
  DAT_14cbcecd0 = 0;
  DAT_14cbceca8 = 0;
  _DAT_14cbcecb0 = 0;
  _DAT_14cbcecd4 = 0xffffffff00000080;
  DAT_14cbcecdc = 0;
  DAT_14cbcece8 = 0;
  DAT_14cbcecf0 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145ddec12(uVar5 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cbcecf0 == 0) || (DAT_14cbcecf0 < iVar2)) {
      DAT_14cbcecf0 = iVar2;
      FUN_145ddea36();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_145dde764(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dde764 FUN_145dde764 body=300 status=ok
// SIG undefined FUN_145dde764(void)

undefined4 * FUN_145dde764(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145dde928(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 1) = *puVar1;
  local_38[3] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_145dde892(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cbcecb0 - DAT_14cbcecdc;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14cbcecf0)) {
      uVar7 = DAT_14cbcecf0 - 1U & uVar7;
      local_38[4] = uVar7;
      puVar6 = DAT_14cbcece8;
      if (DAT_14cbcece8 == (undefined *)0x0) {
        puVar6 = &DAT_14cbcece0;
      }
      local_38[3] = *(uint *)(puVar6 + ((longlong)DAT_14cbcecf0 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14cbcece8;
      if (DAT_14cbcece8 == (undefined *)0x0) {
        puVar6 = &DAT_14cbcece0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cbcecf0 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cbcecf0 = iVar9;
      FUN_145ddea36();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dde892 FUN_145dde892 body=149 status=ok
// SIG undefined FUN_145dde892(void)

undefined8 FUN_145dde892(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14cbcecb0 - DAT_14cbcecdc != 1) && (DAT_14cbcecb0 != DAT_14cbcecdc)) {
    puVar4 = &DAT_14cbcece0;
    if (DAT_14cbcece8 != (undefined *)0x0) {
      puVar4 = DAT_14cbcece8;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cbcecf0 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(DAT_14cbceca8 + (longlong)iVar3 * 0x14);
        if (*piVar1 == *param_2) {
          uVar2 = *(undefined8 *)param_2;
          piVar1[2] = param_2[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_148db15bc(*param_3);
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = piVar1[3];
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145dde928 FUN_145dde928 body=270 status=ok
// SIG undefined FUN_145dde928(void)

int * FUN_145dde928(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbcecd8;
  iVar4 = DAT_14cbcecb0;
  if (DAT_14cbcecdc == 0) {
    iVar2 = DAT_14cbcecb0 + 1;
    bVar7 = DAT_14cbcecb4 == DAT_14cbcecb0;
    DAT_14cbcecb0 = iVar2;
    if (bVar7) {
      FUN_140171ad2(&DAT_14cbceca8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cbcecb8,1);
    puVar3 = DAT_14cbcecc8;
    if (DAT_14cbcecc8 == (undefined *)0x0) {
      puVar3 = &DAT_14cbcecb8;
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
    lVar6 = (longlong)DAT_14cbcecd8;
    DAT_14cbcecd8 = *(int *)(DAT_14cbceca8 + 4 + lVar6 * 0x14);
    DAT_14cbcecdc = DAT_14cbcecdc + -1;
    iVar4 = iVar2;
    if (DAT_14cbcecdc != 0) {
      *(undefined4 *)(DAT_14cbceca8 + (longlong)DAT_14cbcecd8 * 0x14) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cbcecb8;
  if (DAT_14cbcecc8 != (undefined *)0x0) {
    puVar3 = DAT_14cbcecc8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x14 + DAT_14cbceca8;
  return param_1;
}



// FUNCTION 145ddea36 FUN_145ddea36 body=474 status=ok
// SIG undefined FUN_145ddea36(void)

void FUN_145ddea36(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbcece8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbcece8,0,0,4);
  }
  uVar2 = DAT_14cbcecf0;
  uVar3 = local_50;
  if (DAT_14cbcecf0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbcece0,0,DAT_14cbcecf0,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14cbcece8;
        if (DAT_14cbcece8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcece0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbcecf0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbcecb8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbcecd0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbceca8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14cbcecf0 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x14);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x10 + lVar5 * 0x14) = iVar8;
        puVar6 = DAT_14cbcece8;
        if (DAT_14cbcece8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcece0;
        }
        *(undefined4 *)(lVar1 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbcecf0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbcece8;
        if (DAT_14cbcece8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcece0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbcecf0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ddec12 FUN_145ddec12 body=479 status=ok
// SIG undefined FUN_145ddec12(void)

void FUN_145ddec12(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cbcecb0;
  uVar9 = param_1 - DAT_14cbcecb0;
  if (uVar9 != 0 && DAT_14cbcecb0 <= (int)param_1) {
    iVar8 = DAT_14cbcecb0;
    if (DAT_14cbcecb4 < (int)param_1) {
      FUN_1401ad22e(&DAT_14cbceca8);
      iVar8 = DAT_14cbcecb0;
    }
    DAT_14cbcecb0 = iVar8 + uVar9;
    if ((uint)(DAT_14cbcecb4 - iVar8) < uVar9) {
      FUN_140171ad2(&DAT_14cbceca8);
    }
    lVar2 = DAT_14cbceca8;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)(DAT_14cbceca8 + (ulonglong)param_1 * 0x14 + -0x10);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cbcecdc == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cbcecd8 * 0x14) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cbcecdc) {
          iVar13 = DAT_14cbcecd8;
        }
        *piVar7 = iVar13;
        DAT_14cbcecdc = DAT_14cbcecdc + 1;
        piVar7 = piVar7 + -5;
        uVar12 = uVar1;
        DAT_14cbcecd8 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cbcecd0 = uVar9;
      if (DAT_14cbcecd4 + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cbcecb8,0,uVar10,4);
        DAT_14cbcecd4 = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cbcecc8;
      if (DAT_14cbcecc8 == (undefined *)0x0) {
        puVar6 = &DAT_14cbcecb8;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cbcecd0 + 0x1f;
      if (-1 < (int)DAT_14cbcecd0) {
        uVar9 = DAT_14cbcecd0;
      }
      if ((int)DAT_14cbcecd0 % 0x20 != 0) {
        puVar6 = &DAT_14cbcecb8;
        if (DAT_14cbcecc8 != (undefined *)0x0) {
          puVar6 = DAT_14cbcecc8;
        }
        bVar5 = -(char)((int)DAT_14cbcecd0 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cbcecb8,uVar9);
      FUN_1447c6044(&DAT_14cbcecb8,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 145ddedf2 FUN_145ddedf2 body=472 status=ok
// SIG undefined FUN_145ddedf2(void)

int FUN_145ddedf2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [104];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [8];
  longlong *local_a8;
  char local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140665294(param_2 + 0x30,&local_b8);
  lVar3 = CONCAT44(uStack_b4,local_b8);
  if ((lVar3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar3 + 0x50),lVar3);
  }
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_2 + 0x48);
  }
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x5c) == '\x01') {
      if (0.0 < *(float *)(lVar3 + 0x58)) {
        *(float *)(param_2 + 0x18) = *(float *)(lVar3 + 0x58);
        goto LAB_145ddef9f;
      }
    }
    iVar5 = DAT_14cb8c95c + 1;
    DAT_14cb8c95c = iVar5;
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))();
    lVar4 = FUN_140316ff8();
    if (lVar3 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)((double)*(float *)(lVar4 + 0x6c8) + *(double *)(lVar3 + 0x6e0));
    }
    FUN_1457320fc(local_120,param_2);
    FUN_145ddefee(&local_b8,fVar6,local_120,iVar5);
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
      FUN_145ddf048((longlong *)(param_1 + 0x40),iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 0x78);
    *puVar1 = local_b8;
    FUN_145732422(puVar1 + 2,local_b0);
    puVar1[0x1c] = local_48;
    local_80 = 0;
    local_78 = 0xffffffffffffffff;
    if (local_84 == '\x01') {
      local_84 = '\0';
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
      return iVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_145ddef9f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_148);
}



// FUNCTION 145ddefee FUN_145ddefee body=89 status=ok
// SIG undefined FUN_145ddefee(void)

undefined4 *
FUN_145ddefee(undefined4 *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  *param_1 = param_2;
  FUN_1457320fc(param_1 + 2,param_3);
  param_1[0x1c] = param_4;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0xffffffffffffffff;
  if (*(char *)(param_3 + 0x2c) == '\x01') {
    *(undefined1 *)(param_3 + 0x2c) = 0;
  }
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_3 + 8) + 0x10))();
  }
  return param_1;
}



// FUNCTION 145ddf048 FUN_145ddf048 body=143 status=ok
// SIG undefined FUN_145ddf048(void)

void FUN_145ddf048(longlong param_1,int param_2)

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



// FUNCTION 145ddf0d8 FUN_145ddf0d8 body=269 status=ok
// SIG undefined FUN_145ddf0d8(void)

int FUN_145ddf0d8(longlong param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [104];
  int local_50;
  undefined2 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = DAT_14cb8c95c + 1;
  iVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    lVar4 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x30) + lVar4);
      iVar2 = iVar2 + (uint)(*param_2 < fVar1);
      if (fVar1 <= *param_2) break;
      bVar5 = (longlong)*(int *)(param_1 + 0x38) * 0x88 + -0x88 != lVar4;
      lVar4 = lVar4 + 0x88;
    } while (bVar5);
  }
  DAT_14cb8c95c = iVar3;
  FUN_1457320fc(local_b8);
  local_4c = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = iVar3;
  FUN_145732176(local_b8);
  FUN_145732362(param_1 + 0x30,local_b8,iVar2);
  FUN_140665564(local_b8);
  FUN_140664ae6(param_1 + -0x28,0);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145ddf1f2 FUN_145ddf1f2 body=277 status=ok
// SIG undefined FUN_145ddf1f2(void)

undefined8 * FUN_145ddf1f2(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cfc80;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_145ddf308(param_1 + 8,0);
  *(undefined1 *)((longlong)param_1 + 0x32) = 0x2c;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14038fb82();
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x84);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_30,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xda);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_38,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddf308 FUN_145ddf308 body=62 status=ok
// SIG undefined FUN_145ddf308(void)

void FUN_145ddf308(longlong param_1,int param_2)

{
  FUN_145bcc98a();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 145ddf34e caseD_46 body=996 status=ok
// SIG undefined caseD_46(void)

bool switchD_148704b3c::caseD_46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_14155b406();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x18) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    bVar12 = false;
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_145ddf511;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x20) = lVar5;
        if (lVar5 != 0) goto LAB_145ddf3e3;
        goto LAB_145ddf555;
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    goto LAB_145ddf555;
  }
LAB_145ddf3e3:
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_140feeb70();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  plVar2 = (longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((*plVar2 != 0) && (lVar5 != 0)) {
      plVar8 = *(longlong **)(lVar5 + 0xb8);
      if (plVar8 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar5 = FUN_144aff482(uVar4,plVar2);
          *(longlong *)(param_1 + 0x38) = lVar5;
          if (lVar5 != 0) goto LAB_145ddf5aa;
          goto LAB_145ddf416;
        }
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
LAB_145ddf416:
    lVar5 = FUN_14155b440(param_3);
LAB_145ddf41e:
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_14155b406();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x18) = lVar6;
      }
      lVar11 = *(longlong *)(param_1 + 0x20);
      if (((lVar11 == 0) && (lVar11 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_145ddf727:
          lVar11 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 == '\0') goto LAB_145ddf727;
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar11 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x20) = lVar11;
      }
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
      uVar4 = FUN_14155b406();
      lStack_50 = FUN_14477b664(uVar4);
      lVar6 = FUN_14155b406();
      uVar4 = FUN_14155b406();
      FUN_1402d1bfa(&local_38,uVar4,lVar11);
      if (local_58 != local_38) {
        local_48 = 0;
      }
      local_58 = local_38;
      lVar7 = FUN_14155b406();
      if (lVar6 == 0) {
LAB_145ddf4cc:
        lVar7 = lVar6;
      }
      else if (lVar7 == 0) {
        lVar7 = 0;
      }
      else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) goto LAB_145ddf4cc;
      if (lStack_50 != lVar7) {
        local_48 = 0;
      }
      uVar4 = FUN_14477b664(lVar7);
      lStack_50 = FUN_14477b664(uVar4);
      if ((local_38 != 0) && (lStack_50 != 0)) {
        local_48 = lVar11;
      }
      cVar3 = FUN_140d137fe(lVar5,&local_58);
      bVar12 = *(char *)(param_1 + 0x40) == cVar3;
      goto LAB_145ddf511;
    }
  }
  else {
LAB_145ddf5aa:
    plVar8 = (longlong *)FUN_1447262c2(param_3);
    if (plVar8 != (longlong *)0x0) {
      uVar4 = FUN_144a7c80a();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar4);
      if (plVar8 != (longlong *)0x0) {
        uVar4 = FUN_144a7c80a();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar4);
        if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
          uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar5 = *(longlong *)(param_1 + 0x30);
          if (lVar5 == 0) {
            uVar10 = FUN_140feeb70();
            lVar5 = FUN_14477b664(uVar10);
            *(longlong *)(param_1 + 0x30) = lVar5;
          }
          lVar6 = *(longlong *)(param_1 + 0x38);
          if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar2 != 0)) {
            plVar8 = *(longlong **)(lVar5 + 0xb8);
            if (plVar8 == (longlong *)0x0) {
LAB_145ddf72f:
              lVar6 = 0;
            }
            else {
              cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8);
              if (cVar3 == '\0') goto LAB_145ddf72f;
              uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
              lVar6 = FUN_144aff482(uVar10,plVar2);
            }
            *(longlong *)(param_1 + 0x38) = lVar6;
          }
          lVar5 = FUN_144b39ca2(uVar4,lVar6,0);
          goto LAB_145ddf41e;
        }
      }
    }
  }
LAB_145ddf555:
  bVar12 = false;
LAB_145ddf511:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddf734 FUN_145ddf734 body=284 status=ok
// SIG undefined FUN_145ddf734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ddf734(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85e10) {
    FUN_144b3d300(&DAT_14ca85e10);
    if (DAT_14ca85e10 == -1) {
      FUN_145ddf850();
      FUN_140db5666(&DAT_14ca85d68,0,&DAT_14ca85d00,L"FClearReplacementVS",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,FUN_147415d82,
                    FUN_147415d2e,&LAB_147415d2a,&LAB_147415d26,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca85d68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e0f);
      _Init_thread_footer(&DAT_14ca85e10);
    }
  }
  return &DAT_14ca85d68;
}



// FUNCTION 145ddf850 FUN_145ddf850 body=313 status=ok
// SIG undefined FUN_145ddf850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddf850(void)

{
  if ((DAT_14ca85d67 & 2) == 0) {
    DAT_14ca85d67 = DAT_14ca85d67 | 2;
    _DAT_14ca85d08 = L"FClearReplacementVS";
    _DAT_14ca85d20 = FUN_146826540;
    _DAT_14ca85d28 = FUN_146825d77;
    _DAT_14ca85d30 = FUN_146825fd6;
    _DAT_14ca85d38 = FUN_1407e02ea;
    _DAT_14ca85d40 = FUN_146826273;
    _DAT_14ca85d18 = FUN_147415cf6;
    _DAT_14ca85d58 = 0xffffffff00000100;
    _DAT_14ca85d60 = 8;
    DAT_14ca85d64 = 0;
    _DAT_14ca85d48 = &LAB_147415d22;
    _DAT_14ca91ee8 = L"DepthParam";
    DAT_14ca91f12 = FUN_140850cc5();
    _DAT_14ca91ef0 = FUN_140ec6960();
    _DAT_14ca91f00 = &LAB_14682652b;
    _DAT_14ca91f08 = 0x1000000f8;
    _DAT_14ca91f10 = 0;
    _DAT_14ca91ef8 = DAT_14ca85d10;
    DAT_14ca85d10 = &DAT_14ca91ee8;
    FUN_145ddf98a();
    FUN_1407e00cc(&DAT_14ca85d00);
    return;
  }
  return;
}



// FUNCTION 145ddf98a FUN_145ddf98a body=133 status=ok
// SIG undefined FUN_145ddf98a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddf98a(void)

{
  _DAT_14ca91f18 = L"BASE";
  DAT_14ca91f42 = 4;
  FUN_145ddfa10();
  _DAT_14ca91f28 = DAT_14ca85d10;
  _DAT_14ca91f20 = &DAT_14ca91f48;
  _DAT_14ca91f30 = &LAB_14682652b;
  DAT_14ca85d10 = &DAT_14ca91f18;
  DAT_14ca85d65 = DAT_14ca85d65 + '\x01';
  _DAT_14ca91f38 = 0x100000000;
  if (DAT_14ca91fac != '\0') {
    DAT_14ca85d66 = DAT_14ca85d66 + '\x01';
  }
  return;
}



// FUNCTION 145ddfa10 FUN_145ddfa10 body=205 status=ok
// SIG undefined FUN_145ddfa10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddfa10(void)

{
  if ((DAT_14ca91faf & 2) != 0) {
    return;
  }
  DAT_14ca91faf = DAT_14ca91faf | 2;
  _DAT_14ca91f50 = L"TClearReplacementBase";
  _DAT_14ca91f68 = FUN_146826540;
  _DAT_14ca91f70 = FUN_146825d77;
  _DAT_14ca91f78 = FUN_146825fd6;
  _DAT_14ca91f80 = FUN_1407e02ea;
  _DAT_14ca91f88 = FUN_146826273;
  _DAT_14ca91f60 = FUN_147425b6e;
  _DAT_14ca91fa0 = 0xffffffff000000f8;
  _DAT_14ca91fa8 = 8;
  DAT_14ca91fac = 0;
  _DAT_14ca91f90 = &LAB_147425b9a;
  FUN_145ddfade();
  FUN_145ddfb58();
  FUN_1407e00cc(&DAT_14ca91f48);
  return;
}



// FUNCTION 145ddfade FUN_145ddfade body=121 status=ok
// SIG undefined FUN_145ddfade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddfade(void)

{
  FUN_145ddfbde();
  _DAT_14ca91fb0 = L"ClearValueParam";
  DAT_14ca91fda = FUN_140850cc5();
  _DAT_14ca91fb8 = FUN_140ec6960();
  _DAT_14ca91fc8 = &LAB_14682652b;
  _DAT_14ca91fd0 = 0x1000000e0;
  _DAT_14ca91fd8 = 0;
  _DAT_14ca91fc0 = DAT_14ca91f58;
  DAT_14ca91f58 = &DAT_14ca91fb0;
  return;
}



// FUNCTION 145ddfb58 FUN_145ddfb58 body=133 status=ok
// SIG undefined FUN_145ddfb58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddfb58(void)

{
  _DAT_14ca92040 = L"BASE";
  DAT_14ca9206a = 4;
  FUN_140b35ae4();
  _DAT_14ca92050 = DAT_14ca91f58;
  _DAT_14ca92048 = &DAT_14ca8c6c8;
  _DAT_14ca92058 = &LAB_14682652b;
  DAT_14ca91f58 = &DAT_14ca92040;
  DAT_14ca91fad = DAT_14ca91fad + '\x01';
  _DAT_14ca92060 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca91fae = DAT_14ca91fae + '\x01';
  }
  return;
}



// FUNCTION 145ddfbde FUN_145ddfbde body=216 status=ok
// SIG undefined FUN_145ddfbde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddfbde(void)

{
  _DAT_14ca92010 = L"MaxBoundsParam";
  DAT_14ca9203a = FUN_140850cc5();
  _DAT_14ca92018 = FUN_140ec6960();
  _DAT_14ca92028 = &LAB_14682652b;
  _DAT_14ca92030 = 0x1000000ec;
  _DAT_14ca92038 = 0;
  _DAT_14ca92020 = DAT_14ca91f58;
  DAT_14ca91f58 = &DAT_14ca92010;
  _DAT_14ca91fe0 = L"MinBoundsParam";
  DAT_14ca9200a = FUN_140850cc5();
  _DAT_14ca91fe8 = FUN_140ec6960();
  _DAT_14ca91ff8 = &LAB_14682652b;
  _DAT_14ca92000 = 0x1000000e6;
  _DAT_14ca92008 = 0;
  _DAT_14ca91ff0 = DAT_14ca91f58;
  DAT_14ca91f58 = &DAT_14ca91fe0;
  return;
}



// FUNCTION 145ddfcb6 FUN_145ddfcb6 body=284 status=ok
// SIG undefined FUN_145ddfcb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ddfcb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86500) {
    FUN_144b3d300(&DAT_14ca86500);
    if (DAT_14ca86500 == -1) {
      FUN_145ddfdd2();
      FUN_140db5666(&DAT_14ca86458,0,&DAT_14ca863f0,L"FClearReplacementCS_Buffer_Uint_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416460,
                    FUN_147416408,&LAB_147416404,&LAB_147416400,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86458 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e57);
      _Init_thread_footer(&DAT_14ca86500);
    }
  }
  return &DAT_14ca86458;
}



// FUNCTION 145ddfdd2 FUN_145ddfdd2 body=313 status=ok
// SIG undefined FUN_145ddfdd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddfdd2(void)

{
  if ((DAT_14ca86457 & 2) == 0) {
    DAT_14ca86457 = DAT_14ca86457 | 2;
    _DAT_14ca863f8 = L"FClearReplacementCS_Buffer_Uint_Bounds";
    _DAT_14ca86410 = FUN_146826540;
    _DAT_14ca86418 = FUN_146825d77;
    _DAT_14ca86420 = FUN_146825fd6;
    _DAT_14ca86428 = FUN_1407e02ea;
    _DAT_14ca86430 = FUN_146826273;
    _DAT_14ca86408 = FUN_1474163d0;
    _DAT_14ca86448 = 0xffffffff00000100;
    _DAT_14ca86450 = 8;
    DAT_14ca86454 = 0;
    _DAT_14ca86438 = &LAB_1474163fc;
    _DAT_14ca92410 = L"ClearResourceParam";
    DAT_14ca9243a = FUN_140850cc5();
    _DAT_14ca92418 = FUN_140fb78d0();
    _DAT_14ca92428 = &LAB_14682652b;
    _DAT_14ca92430 = 0x1000000f8;
    _DAT_14ca92438 = 0;
    _DAT_14ca92420 = DAT_14ca86400;
    DAT_14ca86400 = &DAT_14ca92410;
    FUN_145ddff0c();
    FUN_1407e00cc(&DAT_14ca863f0);
    return;
  }
  return;
}



// FUNCTION 145ddff0c FUN_145ddff0c body=133 status=ok
// SIG undefined FUN_145ddff0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddff0c(void)

{
  _DAT_14ca92440 = L"BASE";
  DAT_14ca9246a = 4;
  FUN_145ddff92();
  _DAT_14ca92450 = DAT_14ca86400;
  _DAT_14ca92448 = &DAT_14ca92470;
  _DAT_14ca92458 = &LAB_14682652b;
  DAT_14ca86400 = &DAT_14ca92440;
  DAT_14ca86455 = DAT_14ca86455 + '\x01';
  _DAT_14ca92460 = 0x100000000;
  if (DAT_14ca924d4 != '\0') {
    DAT_14ca86456 = DAT_14ca86456 + '\x01';
  }
  return;
}



// FUNCTION 145ddff92 FUN_145ddff92 body=205 status=ok
// SIG undefined FUN_145ddff92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddff92(void)

{
  if ((DAT_14ca924d7 & 2) != 0) {
    return;
  }
  DAT_14ca924d7 = DAT_14ca924d7 | 2;
  _DAT_14ca92478 = L"TClearReplacementBase";
  _DAT_14ca92490 = FUN_146826540;
  _DAT_14ca92498 = FUN_146825d77;
  _DAT_14ca924a0 = FUN_146825fd6;
  _DAT_14ca924a8 = FUN_1407e02ea;
  _DAT_14ca924b0 = FUN_146826273;
  _DAT_14ca92488 = FUN_147425cc8;
  _DAT_14ca924c8 = 0xffffffff000000f8;
  _DAT_14ca924d0 = 8;
  DAT_14ca924d4 = 0;
  _DAT_14ca924b8 = &LAB_147425cf4;
  FUN_145de0060();
  FUN_145de00da();
  FUN_1407e00cc(&DAT_14ca92470);
  return;
}



// FUNCTION 145de0060 FUN_145de0060 body=121 status=ok
// SIG undefined FUN_145de0060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0060(void)

{
  FUN_145de0160();
  _DAT_14ca924d8 = L"ClearValueParam";
  DAT_14ca92502 = FUN_140850cc5();
  _DAT_14ca924e0 = FUN_140ec6960();
  _DAT_14ca924f0 = &LAB_14682652b;
  _DAT_14ca924f8 = 0x1000000e0;
  _DAT_14ca92500 = 0;
  _DAT_14ca924e8 = DAT_14ca92480;
  DAT_14ca92480 = &DAT_14ca924d8;
  return;
}



// FUNCTION 145de00da FUN_145de00da body=133 status=ok
// SIG undefined FUN_145de00da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de00da(void)

{
  _DAT_14ca92568 = L"BASE";
  DAT_14ca92592 = 4;
  FUN_140b35ae4();
  _DAT_14ca92578 = DAT_14ca92480;
  _DAT_14ca92570 = &DAT_14ca8c6c8;
  _DAT_14ca92580 = &LAB_14682652b;
  DAT_14ca92480 = &DAT_14ca92568;
  DAT_14ca924d5 = DAT_14ca924d5 + '\x01';
  _DAT_14ca92588 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca924d6 = DAT_14ca924d6 + '\x01';
  }
  return;
}



// FUNCTION 145de0160 FUN_145de0160 body=216 status=ok
// SIG undefined FUN_145de0160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0160(void)

{
  _DAT_14ca92538 = L"MaxBoundsParam";
  DAT_14ca92562 = FUN_140850cc5();
  _DAT_14ca92540 = FUN_140ec6960();
  _DAT_14ca92550 = &LAB_14682652b;
  _DAT_14ca92558 = 0x1000000ec;
  _DAT_14ca92560 = 0;
  _DAT_14ca92548 = DAT_14ca92480;
  DAT_14ca92480 = &DAT_14ca92538;
  _DAT_14ca92508 = L"MinBoundsParam";
  DAT_14ca92532 = FUN_140850cc5();
  _DAT_14ca92510 = FUN_140ec6960();
  _DAT_14ca92520 = &LAB_14682652b;
  _DAT_14ca92528 = 0x1000000e6;
  _DAT_14ca92530 = 0;
  _DAT_14ca92518 = DAT_14ca92480;
  DAT_14ca92480 = &DAT_14ca92508;
  return;
}



// FUNCTION 145de0238 FUN_145de0238 body=284 status=ok
// SIG undefined FUN_145de0238(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145de0238(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86878) {
    FUN_144b3d300(&DAT_14ca86878);
    if (DAT_14ca86878 == -1) {
      FUN_145de0354();
      FUN_140db5666(&DAT_14ca867d0,0,&DAT_14ca86768,L"FClearReplacementCS_Buffer_Float_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474167c6,
                    FUN_14741676e,&LAB_14741676a,&LAB_147416766,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca867d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e7b);
      _Init_thread_footer(&DAT_14ca86878);
    }
  }
  return &DAT_14ca867d0;
}



// FUNCTION 145de0354 FUN_145de0354 body=313 status=ok
// SIG undefined FUN_145de0354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0354(void)

{
  if ((DAT_14ca867cf & 2) == 0) {
    DAT_14ca867cf = DAT_14ca867cf | 2;
    _DAT_14ca86770 = L"FClearReplacementCS_Buffer_Float_Bounds";
    _DAT_14ca86788 = FUN_146826540;
    _DAT_14ca86790 = FUN_146825d77;
    _DAT_14ca86798 = FUN_146825fd6;
    _DAT_14ca867a0 = FUN_1407e02ea;
    _DAT_14ca867a8 = FUN_146826273;
    _DAT_14ca86780 = FUN_147416736;
    _DAT_14ca867c0 = 0xffffffff00000100;
    _DAT_14ca867c8 = 8;
    DAT_14ca867cc = 0;
    _DAT_14ca867b0 = &LAB_147416762;
    _DAT_14ca928a8 = L"ClearResourceParam";
    DAT_14ca928d2 = FUN_140850cc5();
    _DAT_14ca928b0 = FUN_140fb78d0();
    _DAT_14ca928c0 = &LAB_14682652b;
    _DAT_14ca928c8 = 0x1000000f8;
    _DAT_14ca928d0 = 0;
    _DAT_14ca928b8 = DAT_14ca86778;
    DAT_14ca86778 = &DAT_14ca928a8;
    FUN_145de048e();
    FUN_1407e00cc(&DAT_14ca86768);
    return;
  }
  return;
}



// FUNCTION 145de048e FUN_145de048e body=133 status=ok
// SIG undefined FUN_145de048e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de048e(void)

{
  _DAT_14ca928d8 = L"BASE";
  DAT_14ca92902 = 4;
  FUN_145de0514();
  _DAT_14ca928e8 = DAT_14ca86778;
  _DAT_14ca928e0 = &DAT_14ca92908;
  _DAT_14ca928f0 = &LAB_14682652b;
  DAT_14ca86778 = &DAT_14ca928d8;
  DAT_14ca867cd = DAT_14ca867cd + '\x01';
  _DAT_14ca928f8 = 0x100000000;
  if (DAT_14ca9296c != '\0') {
    DAT_14ca867ce = DAT_14ca867ce + '\x01';
  }
  return;
}



// FUNCTION 145de0514 FUN_145de0514 body=205 status=ok
// SIG undefined FUN_145de0514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0514(void)

{
  if ((DAT_14ca9296f & 2) != 0) {
    return;
  }
  DAT_14ca9296f = DAT_14ca9296f | 2;
  _DAT_14ca92910 = L"TClearReplacementBase";
  _DAT_14ca92928 = FUN_146826540;
  _DAT_14ca92930 = FUN_146825d77;
  _DAT_14ca92938 = FUN_146825fd6;
  _DAT_14ca92940 = FUN_1407e02ea;
  _DAT_14ca92948 = FUN_146826273;
  _DAT_14ca92920 = FUN_147425eee;
  _DAT_14ca92960 = 0xffffffff000000f8;
  _DAT_14ca92968 = 8;
  DAT_14ca9296c = 0;
  _DAT_14ca92950 = &LAB_147425f1a;
  FUN_145de05e2();
  FUN_145de065c();
  FUN_1407e00cc(&DAT_14ca92908);
  return;
}



// FUNCTION 145de05e2 FUN_145de05e2 body=121 status=ok
// SIG undefined FUN_145de05e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de05e2(void)

{
  FUN_145de06e2();
  _DAT_14ca92970 = L"ClearValueParam";
  DAT_14ca9299a = FUN_140850cc5();
  _DAT_14ca92978 = FUN_140ec6960();
  _DAT_14ca92988 = &LAB_14682652b;
  _DAT_14ca92990 = 0x1000000e0;
  _DAT_14ca92998 = 0;
  _DAT_14ca92980 = DAT_14ca92918;
  DAT_14ca92918 = &DAT_14ca92970;
  return;
}



// FUNCTION 145de065c FUN_145de065c body=133 status=ok
// SIG undefined FUN_145de065c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de065c(void)

{
  _DAT_14ca92a00 = L"BASE";
  DAT_14ca92a2a = 4;
  FUN_140b35ae4();
  _DAT_14ca92a10 = DAT_14ca92918;
  _DAT_14ca92a08 = &DAT_14ca8c6c8;
  _DAT_14ca92a18 = &LAB_14682652b;
  DAT_14ca92918 = &DAT_14ca92a00;
  DAT_14ca9296d = DAT_14ca9296d + '\x01';
  _DAT_14ca92a20 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9296e = DAT_14ca9296e + '\x01';
  }
  return;
}



// FUNCTION 145de06e2 FUN_145de06e2 body=216 status=ok
// SIG undefined FUN_145de06e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de06e2(void)

{
  _DAT_14ca929d0 = L"MaxBoundsParam";
  DAT_14ca929fa = FUN_140850cc5();
  _DAT_14ca929d8 = FUN_140ec6960();
  _DAT_14ca929e8 = &LAB_14682652b;
  _DAT_14ca929f0 = 0x1000000ec;
  _DAT_14ca929f8 = 0;
  _DAT_14ca929e0 = DAT_14ca92918;
  DAT_14ca92918 = &DAT_14ca929d0;
  _DAT_14ca929a0 = L"MinBoundsParam";
  DAT_14ca929ca = FUN_140850cc5();
  _DAT_14ca929a8 = FUN_140ec6960();
  _DAT_14ca929b8 = &LAB_14682652b;
  _DAT_14ca929c0 = 0x1000000e6;
  _DAT_14ca929c8 = 0;
  _DAT_14ca929b0 = DAT_14ca92918;
  DAT_14ca92918 = &DAT_14ca929a0;
  return;
}



// FUNCTION 145de07ba FUN_145de07ba body=284 status=ok
// SIG undefined FUN_145de07ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145de07ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca879d0) {
    FUN_144b3d300(&DAT_14ca879d0);
    if (DAT_14ca879d0 == -1) {
      FUN_145de08d6();
      FUN_140db5666(&DAT_14ca87928,0,&DAT_14ca878c0,L"FClearReplacementCS_Buffer_Uint_Zero",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417924,
                    FUN_1474178fc,&LAB_1474178f8,&LAB_1474178f4,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f2f);
      _Init_thread_footer(&DAT_14ca879d0);
    }
  }
  return &DAT_14ca87928;
}



// FUNCTION 145de08d6 FUN_145de08d6 body=313 status=ok
// SIG undefined FUN_145de08d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de08d6(void)

{
  if ((DAT_14ca87927 & 2) == 0) {
    DAT_14ca87927 = DAT_14ca87927 | 2;
    _DAT_14ca878c8 = L"FClearReplacementCS_Buffer_Uint_Zero";
    _DAT_14ca878e0 = FUN_146826540;
    _DAT_14ca878e8 = FUN_146825d77;
    _DAT_14ca878f0 = FUN_146825fd6;
    _DAT_14ca878f8 = FUN_1407e02ea;
    _DAT_14ca87900 = FUN_146826273;
    _DAT_14ca878d8 = FUN_1474178c4;
    _DAT_14ca87918 = 0xffffffff00000100;
    _DAT_14ca87920 = 8;
    DAT_14ca87924 = 0;
    _DAT_14ca87908 = &LAB_1474178f0;
    _DAT_14ca93098 = L"ClearResourceParam";
    DAT_14ca930c2 = FUN_140850cc5();
    _DAT_14ca930a0 = FUN_140fb78d0();
    _DAT_14ca930b0 = &LAB_14682652b;
    _DAT_14ca930b8 = 0x1000000f8;
    _DAT_14ca930c0 = 0;
    _DAT_14ca930a8 = DAT_14ca878d0;
    DAT_14ca878d0 = &DAT_14ca93098;
    FUN_145de0a10();
    FUN_1407e00cc(&DAT_14ca878c0);
    return;
  }
  return;
}



// FUNCTION 145de0a10 FUN_145de0a10 body=133 status=ok
// SIG undefined FUN_145de0a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0a10(void)

{
  _DAT_14ca930c8 = L"BASE";
  DAT_14ca930f2 = 4;
  FUN_145de0a96();
  _DAT_14ca930d8 = DAT_14ca878d0;
  _DAT_14ca930d0 = &DAT_14ca930f8;
  _DAT_14ca930e0 = &LAB_14682652b;
  DAT_14ca878d0 = &DAT_14ca930c8;
  DAT_14ca87925 = DAT_14ca87925 + '\x01';
  _DAT_14ca930e8 = 0x100000000;
  if (DAT_14ca9315c != '\0') {
    DAT_14ca87926 = DAT_14ca87926 + '\x01';
  }
  return;
}



// FUNCTION 145de0a96 FUN_145de0a96 body=205 status=ok
// SIG undefined FUN_145de0a96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0a96(void)

{
  if ((DAT_14ca9315f & 2) != 0) {
    return;
  }
  DAT_14ca9315f = DAT_14ca9315f | 2;
  _DAT_14ca93100 = L"TClearReplacementBase";
  _DAT_14ca93118 = FUN_146826540;
  _DAT_14ca93120 = FUN_146825d77;
  _DAT_14ca93128 = FUN_146825fd6;
  _DAT_14ca93130 = FUN_1407e02ea;
  _DAT_14ca93138 = FUN_146826273;
  _DAT_14ca93110 = FUN_147426156;
  _DAT_14ca93150 = 0xffffffff000000f8;
  _DAT_14ca93158 = 8;
  DAT_14ca9315c = 0;
  _DAT_14ca93140 = &LAB_147426182;
  FUN_145de0b64();
  FUN_145de0bde();
  FUN_1407e00cc(&DAT_14ca930f8);
  return;
}



// FUNCTION 145de0b64 FUN_145de0b64 body=121 status=ok
// SIG undefined FUN_145de0b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0b64(void)

{
  FUN_145de0c64();
  _DAT_14ca93160 = L"ClearValueParam";
  DAT_14ca9318a = FUN_140850cc5();
  _DAT_14ca93168 = FUN_140ec6960();
  _DAT_14ca93178 = &LAB_14682652b;
  _DAT_14ca93180 = 0x1000000e0;
  _DAT_14ca93188 = 0;
  _DAT_14ca93170 = DAT_14ca93108;
  DAT_14ca93108 = &DAT_14ca93160;
  return;
}



// FUNCTION 145de0bde FUN_145de0bde body=133 status=ok
// SIG undefined FUN_145de0bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0bde(void)

{
  _DAT_14ca931f0 = L"BASE";
  DAT_14ca9321a = 4;
  FUN_140b35ae4();
  _DAT_14ca93200 = DAT_14ca93108;
  _DAT_14ca931f8 = &DAT_14ca8c6c8;
  _DAT_14ca93208 = &LAB_14682652b;
  DAT_14ca93108 = &DAT_14ca931f0;
  DAT_14ca9315d = DAT_14ca9315d + '\x01';
  _DAT_14ca93210 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9315e = DAT_14ca9315e + '\x01';
  }
  return;
}



// FUNCTION 145de0c64 FUN_145de0c64 body=216 status=ok
// SIG undefined FUN_145de0c64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de0c64(void)

{
  _DAT_14ca931c0 = L"MaxBoundsParam";
  DAT_14ca931ea = FUN_140850cc5();
  _DAT_14ca931c8 = FUN_140ec6960();
  _DAT_14ca931d8 = &LAB_14682652b;
  _DAT_14ca931e0 = 0x1000000ec;
  _DAT_14ca931e8 = 0;
  _DAT_14ca931d0 = DAT_14ca93108;
  DAT_14ca93108 = &DAT_14ca931c0;
  _DAT_14ca93190 = L"MinBoundsParam";
  DAT_14ca931ba = FUN_140850cc5();
  _DAT_14ca93198 = FUN_140ec6960();
  _DAT_14ca931a8 = &LAB_14682652b;
  _DAT_14ca931b0 = 0x1000000e6;
  _DAT_14ca931b8 = 0;
  _DAT_14ca931a0 = DAT_14ca93108;
  DAT_14ca93108 = &DAT_14ca93190;
  return;
}



// FUNCTION 145de0d3c FUN_145de0d3c body=144 status=ok
// SIG undefined FUN_145de0d3c(void)

code * FUN_145de0d3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145de0dcc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LumenParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenTranslucencyLightingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xbe00000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d3ea12;
}



// FUNCTION 145de0dcc FUN_145de0dcc body=268 status=ok
// SIG undefined FUN_145de0dcc(void)

undefined * FUN_145de0dcc(void)

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
              0x110) < DAT_14c9b7e78) {
    FUN_144b3d300(&DAT_14c9b7e78);
    if (DAT_14c9b7e78 == -1) {
      FUN_145de0eda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenTranslucencyLightingParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7df8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df8b);
      _Init_thread_footer(&DAT_14c9b7e78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9b7df8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de0eda FUN_145de0eda body=226 status=ok
// SIG undefined FUN_145de0eda(void)

longlong * FUN_145de0eda(longlong *param_1)

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
  pcVar13 = FUN_1462b6a90;
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



// FUNCTION 145de0fbe FUN_145de0fbe body=138 status=ok
// SIG undefined FUN_145de0fbe(void)

code * FUN_145de0fbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyGIVolume1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147136a56;
}



// FUNCTION 145de1048 FUN_145de1048 body=138 status=ok
// SIG undefined FUN_145de1048(void)

code * FUN_145de1048(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyGIVolumeSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b6b18;
}



// FUNCTION 145de10d2 FUN_145de10d2 body=138 status=ok
// SIG undefined FUN_145de10d2(void)

undefined1 * FUN_145de10d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141364c62();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheInterpolationParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x21;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147136bf8;
}



// FUNCTION 145de115c FUN_145de115c body=144 status=ok
// SIG undefined FUN_145de115c(void)

code * FUN_145de115c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145de11ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateForwardPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa7000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b71fa;
}



// FUNCTION 145de11ec FUN_145de11ec body=268 status=ok
// SIG undefined FUN_145de11ec(void)

undefined * FUN_145de11ec(void)

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
              0x110) < DAT_14c9c0a28) {
    FUN_144b3d300(&DAT_14c9c0a28);
    if (DAT_14c9c0a28 == -1) {
      FUN_145de12fa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstrateForwardPassUniformParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x28;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c09a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfdf);
      _Init_thread_footer(&DAT_14c9c0a28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c09a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de12fa FUN_145de12fa body=226 status=ok
// SIG undefined FUN_145de12fa(void)

longlong * FUN_145de12fa(longlong *param_1)

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
  pcVar13 = FUN_1462b728a;
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



// FUNCTION 145de13de FUN_145de13de body=138 status=ok
// SIG undefined FUN_145de13de(void)

code * FUN_145de13de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstSliceStoringSubstrateSSSData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de14f2;
}



// FUNCTION 145de1468 FUN_145de1468 body=138 status=ok
// SIG undefined FUN_145de1468(void)

code * FUN_145de1468(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de13de;
}



// FUNCTION 145de14f2 FUN_145de14f2 body=138 status=ok
// SIG undefined FUN_145de14f2(void)

undefined1 * FUN_145de14f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d01600();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147138108;
}



// FUNCTION 145de157c FUN_145de157c body=144 status=ok
// SIG undefined FUN_145de157c(void)

code * FUN_145de157c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145de160c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam32";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSolveVelocitiesAndForcesModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x18000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d3f4ce;
}



// FUNCTION 145de160c FUN_145de160c body=268 status=ok
// SIG undefined FUN_145de160c(void)

undefined * FUN_145de160c(void)

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
              0x110) < DAT_14cb34e50) {
    FUN_144b3d300(&DAT_14cb34e50);
    if (DAT_14cb34e50 == -1) {
      FUN_14155b548(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSolveVelocitiesAndForcesModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x8c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34dd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb930);
      _Init_thread_footer(&DAT_14cb34e50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de171a FUN_145de171a body=138 status=ok
// SIG undefined FUN_145de171a(void)

code * FUN_145de171a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_WindBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480574d0;
}



// FUNCTION 145de17a4 FUN_145de17a4 body=138 status=ok
// SIG undefined FUN_145de17a4(void)

code * FUN_145de17a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_AccelerationScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de171a;
}



// FUNCTION 145de182e FUN_145de182e body=138 status=ok
// SIG undefined FUN_145de182e(void)

code * FUN_145de182e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_AccelerationBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de17a4;
}



// FUNCTION 145de18b8 FUN_145de18b8 body=342 status=ok
// SIG undefined FUN_145de18b8(void)

void FUN_145de18b8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144729dda(param_1 + 0xc18);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0xc18);
    local_50 = 0;
    FUN_14485c47a(&local_50,uVar4);
    uVar4 = local_50;
    if (*param_3 == 0) {
      uVar5 = FUN_14479d2ce();
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,4,0x10);
      puVar1 = local_48;
      local_40 = 4;
      *local_48 = &PTR_LAB_14b96b7d0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b96d210;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,uVar5);
      puVar1[4] = uVar4;
      *(undefined1 *)(puVar1 + 5) = 2;
      puVar1[6] = param_1;
      FUN_145de1a10(param_2,&local_58,&local_48);
      FUN_1449db362(&local_48);
      *param_3 = local_58;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de1a10 FUN_145de1a10 body=216 status=ok
// SIG undefined FUN_145de1a10(void)

undefined8 * FUN_145de1a10(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145de1af6 FUN_145de1af6 body=100 status=ok
// SIG undefined FUN_145de1af6(void)

bool FUN_145de1af6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 8);
  local_20 = &local_30;
  local_28 = FUN_1427b8af0;
  local_30 = param_1;
  FUN_145de1b5c(param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 < *(int *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de1b5c FUN_145de1b5c body=518 status=ok
// SIG undefined FUN_145de1b5c(void)

void FUN_145de1b5c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_728 [32];
  code **local_708;
  undefined8 uStack_700;
  undefined8 local_6f0;
  int local_6e8;
  code *local_6e0;
  undefined8 *local_6d8;
  undefined1 *local_6d0;
  undefined4 local_6c8;
  undefined1 *local_6c0;
  undefined4 local_6b8;
  undefined1 *local_6b0;
  undefined4 local_6a8;
  code *local_6a0;
  undefined8 *local_698;
  undefined8 local_690;
  int local_688;
  undefined8 local_680;
  undefined1 *local_678;
  undefined1 *local_670;
  undefined1 **local_668;
  char local_660;
  undefined1 local_658 [512];
  undefined1 *local_458;
  undefined1 *local_450;
  undefined1 **local_448;
  char local_440;
  undefined1 local_438 [512];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_728;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_458 = local_438;
  local_440 = '\0';
  local_448 = &local_238;
  local_678 = local_658;
  local_660 = '\0';
  local_668 = &local_458;
  local_690 = *param_1;
  local_688 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_688 = 0;
  }
  local_708 = (code **)0x0;
  uStack_700 = 0;
  local_680 = param_2;
  local_670 = local_678;
  local_450 = local_458;
  local_230 = local_238;
  cVar1 = FUN_1411bb394();
  if (cVar1 == '\0') {
    local_6d8 = &local_680;
    local_6e0 = FUN_1427b8b8e;
    local_6f0 = *param_1;
    local_6e8 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      local_6e8 = 0;
    }
    FUN_1468c5ec6(DAT_14c9518c8);
  }
  else {
    local_698 = &local_680;
    local_708 = &local_6a0;
    local_6a0 = FUN_1427b8b8e;
    local_6b0 = local_678;
    local_6a8 = (undefined4)((ulonglong)((longlong)local_670 - (longlong)local_678) >> 1);
    local_6c0 = local_458;
    local_6b8 = (undefined4)((ulonglong)((longlong)local_450 - (longlong)local_458) >> 1);
    local_6d0 = local_238;
    local_6c8 = (undefined4)((ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
    FUN_145de1d64();
  }
  if (local_660 == '\x01') {
    FUN_1400020a8(local_678);
  }
  if (local_440 == '\x01') {
    FUN_1400020a8(local_458);
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de1d64 FUN_145de1d64 body=142 status=ok
// SIG undefined FUN_145de1d64(void)

void FUN_145de1d64(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined1 **local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_10 = &local_20;
  local_20 = param_5;
  local_68 = &local_18;
  local_18 = &LAB_14280dd58;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  (**(code **)(*param_1 + 0x68))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de1df4 FUN_145de1df4 body=253 status=ok
// SIG undefined FUN_145de1df4(void)

void FUN_145de1df4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_b8 = &PTR_LAB_149e910a0;
  local_b0 = 0;
  FUN_145de1ef2(local_a8);
  local_b8 = &PTR_FUN_149e91080;
  local_78 = uVar1;
  uStack_70 = uVar2;
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar4 = local_88;
  if (local_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar3 + 0xa0))(plVar3,puVar4,&local_b8);
  local_b8 = &PTR_FUN_149e91080;
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de1ef2 FUN_145de1ef2 body=389 status=ok
// SIG undefined FUN_145de1ef2(void)

undefined8 *
FUN_145de1ef2(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  FUN_14006620a(&local_38,*param_3,*(undefined4 *)(param_3 + 1));
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_140aa5ef8(&local_38);
  if (plVar1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
    uStack_30 = 0;
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(&local_38,*param_4,*(undefined4 *)(param_4 + 1));
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_1407ec8fc(&local_38,plVar1);
  if (param_1 + 4 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
    uStack_30 = 0;
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de2078 FUN_145de2078 body=40 status=ok
// SIG undefined FUN_145de2078(void)

undefined8 FUN_145de2078(undefined8 param_1,int param_2)

{
  FUN_145de20a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de20a0 FUN_145de20a0 body=136 status=ok
// SIG undefined FUN_145de20a0(void)

void FUN_145de20a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e5a000;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 9) != -1) {
    param_1[9] = 0xffffffff;
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x34) != -1) {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = 0;
    param_1[6] = 0xffffffff00000000;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145de2128 FUN_145de2128 body=40 status=ok
// SIG undefined FUN_145de2128(void)

undefined8 FUN_145de2128(undefined8 param_1,int param_2)

{
  FUN_145de2150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de2150 FUN_145de2150 body=136 status=ok
// SIG undefined FUN_145de2150(void)

void FUN_145de2150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6c45a0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145de21d8 FUN_145de21d8 body=106 status=ok
// SIG undefined FUN_145de21d8(void)

void FUN_145de21d8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aaf78d0;
  FUN_144760e21(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a34c1a(param_1 + 0xb);
  FUN_145de2242(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145de223e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145de2242 FUN_145de2242 body=70 status=ok
// SIG undefined FUN_145de2242(void)

void FUN_145de2242(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaf78f0;
  FUN_1447a1747(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 3);
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 145de2288 FUN_145de2288 body=40 status=ok
// SIG undefined FUN_145de2288(void)

undefined8 FUN_145de2288(undefined8 param_1,int param_2)

{
  FUN_145de22b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de22b0 FUN_145de22b0 body=63 status=ok
// SIG undefined FUN_145de22b0(void)

void FUN_145de22b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac93700;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145de22f0(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145de22f0 FUN_145de22f0 body=53 status=ok
// SIG undefined FUN_145de22f0(void)

void FUN_145de22f0(longlong *param_1)

{
  FUN_145de2326();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de2326 FUN_145de2326 body=371 status=ok
// SIG undefined FUN_145de2326(void)

void FUN_145de2326(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x40 + lVar3 * 0x58) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x58 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 145de24a2 FUN_145de24a2 body=168 status=ok
// SIG undefined FUN_145de24a2(void)

undefined8 * FUN_145de24a2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  *param_1 = &PTR_FUN_14aed0150;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0x101;
  *(undefined4 *)(param_1 + 0x15) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0x3f00000041200000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return param_1;
}



// FUNCTION 145de254a FUN_145de254a body=541 status=ok
// SIG undefined FUN_145de254a(void)

void FUN_145de254a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_70 = 0;
  local_68 = 0xb;
  local_60 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar2 = local_74;
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_70;
  local_88 = local_68;
  local_80 = 0;
  local_a0 = local_58;
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_50;
  FUN_14155b62c(&local_a0,&local_90,uVar2,uVar1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de2772 FUN_145de2772 body=79 status=ok
// SIG undefined FUN_145de2772(void)

void FUN_145de2772(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f0e10;
  param_1[4] = &PTR_FUN_14b4f0e38;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ea1e(param_1);
  return;
}



// FUNCTION 145de27c2 FUN_145de27c2 body=21 status=ok
// SIG undefined FUN_145de27c2(void)

undefined8 FUN_145de27c2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145de27d8 FUN_145de27d8 body=462 status=ok
// SIG undefined FUN_145de27d8(void)

void FUN_145de27d8(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_60 = 0;
    uVar6 = FUN_14485c47a();
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) {
      local_6c = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      plVar9 = (longlong *)0x0;
      uVar6 = 0;
    }
    else {
      uVar7 = (ulonglong)*(uint *)(plVar9 + 1);
      uVar6 = 0;
      do {
        uVar5 = (uint)uVar7;
        if (uVar5 == 0) {
          local_6c = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
          plVar9 = (longlong *)0x0;
          goto LAB_145de2859;
        }
        LOCK();
        uVar3 = *(uint *)(plVar9 + 1);
        if (uVar5 == uVar3) {
          *(uint *)(plVar9 + 1) = uVar5 + 1;
        }
        else {
          uVar7 = (ulonglong)uVar3;
        }
        UNLOCK();
      } while (uVar5 != uVar3);
      uVar6 = *param_1;
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      local_6c = 0;
    }
LAB_145de2859:
    uVar4 = local_60;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar10 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e020b0;
    uVar8 = FUN_144a3f946();
    puVar10[2] = uVar8;
    *puVar10 = &PTR_FUN_14b4ff340;
    puVar10[3] = uVar6;
    puVar10[4] = plVar9;
    puVar10[5] = uVar4;
    FUN_1448b6402(param_2 + 0x7b8,local_68,&local_58);
    FUN_1449db362(&local_58);
    FUN_1410908dc(param_2,&local_58,0);
    puVar10 = local_58;
    if (local_50 == 0) {
      puVar10 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_1408cdca6(param_1,2,puVar10);
    FUN_1447f69b6(param_1 + 2);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if ((char)local_6c == '\0') {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de29b4 FUN_145de29b4 body=52 status=ok
// SIG undefined FUN_145de29b4(void)

void FUN_145de29b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(400);
  memset(_Dst,0,400);
  FUN_145de29e8(_Dst);
  return;
}



// FUNCTION 145de29e8 FUN_145de29e8 body=289 status=ok
// SIG undefined FUN_145de29e8(void)

undefined8 * FUN_145de29e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba38460;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x25),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2a),4000);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 145de2b0a FUN_145de2b0a body=40 status=ok
// SIG undefined FUN_145de2b0a(void)

undefined8 FUN_145de2b0a(undefined8 param_1,int param_2)

{
  FUN_145de2b32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de2b32 FUN_145de2b32 body=136 status=ok
// SIG undefined FUN_145de2b32(void)

void FUN_145de2b32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba63010;
  param_1[0x72] = &PTR_LAB_14ba63790;
  FUN_1449db362(param_1 + 0x93);
  FUN_1449db362(param_1 + 0x91);
  FUN_1449db362(param_1 + 0x8f);
  FUN_1449db362(param_1 + 0x8d);
  FUN_1449db362(param_1 + 0x8b);
  FUN_1449db362(param_1 + 0x89);
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_1458da08e(param_1);
  return;
}



// FUNCTION 145de2bc2 FUN_145de2bc2 body=167 status=ok
// SIG undefined FUN_145de2bc2(void)

undefined8 * FUN_145de2bc2(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411b565c();
  *param_1 = &PTR_FUN_14bd0b4c0;
  param_1[0x21] = &PTR_FUN_14bd0b7c0;
  param_1[0x22] = &PTR_FUN_14bd0b7f0;
  param_1[0x23] = &PTR_FUN_14bd0b808;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_1 + 0x26);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de2c72 FUN_145de2c72 body=168 status=ok
// SIG undefined FUN_145de2c72(void)

undefined8 * FUN_145de2c72(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14bedee50;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((longlong)param_1 + 0x392) = 0;
  param_1[0x73] = 0x4059000000000000;
  param_1[0x74] = 0x4059000000000000;
  *(undefined4 *)(param_1 + 0x75) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = 1;
  param_1[0x76] = &DAT_3f8000003f800000;
  param_1[0x77] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x45cb2000;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0x3f800000447a0000;
  *(undefined4 *)(param_1 + 0x80) = 0x42300000;
  return param_1;
}



// FUNCTION 145de2d1a FUN_145de2d1a body=120 status=ok
// SIG undefined FUN_145de2d1a(void)

void FUN_145de2d1a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x38);
  local_40 = FUN_145f3c6da;
  local_38 = 0;
  FUN_145de2e88(local_30,param_1);
  (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0x30),param_1 + 0x48,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de2d94 FUN_145de2d94 body=97 status=ok
// SIG undefined FUN_145de2d94(void)

void FUN_145de2d94(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_145de2df6(param_4,param_2,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1449db362(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de2df6 FUN_145de2df6 body=145 status=ok
// SIG undefined FUN_145de2df6(void)

void FUN_145de2df6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_3;
    local_18 = param_3[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_20,0);
  }
  plVar3 = (longlong *)param_3[1];
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



// FUNCTION 145de2e88 FUN_145de2e88 body=428 status=ok
// SIG undefined FUN_145de2e88(void)

longlong * FUN_145de2e88(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145de2f68:
    *puVar5 = &PTR_LAB_14b4e0ea0;
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
    *puVar5 = &PTR_FUN_14b4e0e30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145de2f68;
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
    *puVar5 = &PTR_LAB_14b4e0ea0;
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
    *puVar5 = &PTR_FUN_14b4e0e30;
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



// FUNCTION 145de3034 FUN_145de3034 body=205 status=ok
// SIG undefined FUN_145de3034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de3034(void)

{
  if ((DAT_14ca7006f & 2) == 0) {
    DAT_14ca7006f = DAT_14ca7006f | 2;
    _DAT_14ca70010 = L"TPageTableUpdateVS<false>";
    _DAT_14ca70028 = FUN_146826540;
    _DAT_14ca70030 = FUN_146825d77;
    _DAT_14ca70038 = FUN_146825fd6;
    _DAT_14ca70040 = FUN_1407e02ea;
    _DAT_14ca70048 = FUN_146826273;
    _DAT_14ca70020 = FUN_147340fb4;
    _DAT_14ca70060 = 0xffffffff000000f8;
    _DAT_14ca70068 = 8;
    DAT_14ca7006c = 0;
    _DAT_14ca70050 = &LAB_147340fde;
    FUN_145de3102();
    FUN_1407e00cc(&DAT_14ca70008);
    return;
  }
  return;
}



// FUNCTION 145de3102 FUN_145de3102 body=133 status=ok
// SIG undefined FUN_145de3102(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de3102(void)

{
  _DAT_14ca71f38 = L"BASE";
  DAT_14ca71f62 = 4;
  FUN_145de3188();
  _DAT_14ca71f48 = DAT_14ca70018;
  _DAT_14ca71f40 = &DAT_14ca71f68;
  _DAT_14ca71f50 = &LAB_14682652b;
  DAT_14ca70018 = &DAT_14ca71f38;
  DAT_14ca7006d = DAT_14ca7006d + '\x01';
  _DAT_14ca71f58 = 0x100000000;
  if (DAT_14ca71fcc != '\0') {
    DAT_14ca7006e = DAT_14ca7006e + '\x01';
  }
  return;
}



// FUNCTION 145de3188 FUN_145de3188 body=210 status=ok
// SIG undefined FUN_145de3188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de3188(void)

{
  if ((DAT_14ca71fcf & 2) == 0) {
    DAT_14ca71fcf = DAT_14ca71fcf | 2;
    _DAT_14ca71f70 = L"FPageTableUpdateVS";
    _DAT_14ca71f88 = FUN_146826540;
    _DAT_14ca71f90 = FUN_146825d77;
    _DAT_14ca71f98 = FUN_146825fd6;
    _DAT_14ca71fa0 = FUN_1407e02ea;
    _DAT_14ca71fa8 = FUN_146826273;
    _DAT_14ca71f80 = FUN_14734704a;
    _DAT_14ca71fc0 = 0xffffffff000000f8;
    _DAT_14ca71fc8 = 8;
    DAT_14ca71fcc = 0;
    _DAT_14ca71fb0 = &LAB_147347074;
    FUN_145de325a();
    FUN_145de334e();
    FUN_1407e00cc(&DAT_14ca71f68);
    return;
  }
  return;
}



// FUNCTION 145de325a FUN_145de325a body=121 status=ok
// SIG undefined FUN_145de325a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de325a(void)

{
  FUN_145de32d4();
  _DAT_14ca71fd0 = L"PageTableSize";
  DAT_14ca71ffa = FUN_140850cc5();
  _DAT_14ca71fd8 = FUN_140ec6960();
  _DAT_14ca71fe8 = &LAB_14682652b;
  _DAT_14ca71ff0 = 0x1000000e0;
  _DAT_14ca71ff8 = 0;
  _DAT_14ca71fe0 = DAT_14ca71f78;
  DAT_14ca71f78 = &DAT_14ca71fd0;
  return;
}



// FUNCTION 145de32d4 FUN_145de32d4 body=121 status=ok
// SIG undefined FUN_145de32d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de32d4(void)

{
  FUN_145de33ca();
  _DAT_14ca72000 = L"FirstUpdate";
  DAT_14ca7202a = FUN_140850cc5();
  _DAT_14ca72008 = FUN_140ec6960();
  _DAT_14ca72018 = &LAB_14682652b;
  _DAT_14ca72020 = 0x1000000e6;
  _DAT_14ca72028 = 0;
  _DAT_14ca72010 = DAT_14ca71f78;
  DAT_14ca71f78 = &DAT_14ca72000;
  return;
}



// FUNCTION 145de334e FUN_145de334e body=123 status=ok
// SIG undefined FUN_145de334e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de334e(void)

{
  _DAT_14ca72090 = L"BASE";
  DAT_14ca720ba = 4;
  _DAT_14ca72098 = FUN_140b35ae4();
  _DAT_14ca720a0 = DAT_14ca71f78;
  _DAT_14ca720a8 = &LAB_14682652b;
  DAT_14ca71f78 = &DAT_14ca72090;
  DAT_14ca71fcd = DAT_14ca71fcd + '\x01';
  _DAT_14ca720b0 = 0x100000000;
  if (*(char *)(_DAT_14ca72098 + 100) != '\0') {
    DAT_14ca71fce = DAT_14ca71fce + '\x01';
  }
  return;
}



// FUNCTION 145de33ca FUN_145de33ca body=216 status=ok
// SIG undefined FUN_145de33ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de33ca(void)

{
  _DAT_14ca72060 = L"UpdateBuffer";
  DAT_14ca7208a = FUN_140850cc5();
  _DAT_14ca72068 = FUN_140fb78d0();
  _DAT_14ca72078 = &LAB_14682652b;
  _DAT_14ca72080 = 0x1000000f2;
  _DAT_14ca72088 = 0;
  _DAT_14ca72070 = DAT_14ca71f78;
  DAT_14ca71f78 = &DAT_14ca72060;
  _DAT_14ca72030 = L"NumUpdates";
  DAT_14ca7205a = FUN_140850cc5();
  _DAT_14ca72038 = FUN_140ec6960();
  _DAT_14ca72048 = &LAB_14682652b;
  _DAT_14ca72050 = 0x1000000ec;
  _DAT_14ca72058 = 0;
  _DAT_14ca72040 = DAT_14ca71f78;
  DAT_14ca71f78 = &DAT_14ca72030;
  return;
}



// FUNCTION 145de34a2 FUN_145de34a2 body=210 status=ok
// SIG undefined FUN_145de34a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de34a2(void)

{
  if ((DAT_14caf621f & 2) == 0) {
    DAT_14caf621f = DAT_14caf621f | 2;
    _DAT_14caf61c0 = L"FParticleSpriteVertexFactoryShaderParametersVS";
    _DAT_14caf61d8 = FUN_146826540;
    _DAT_14caf61e0 = FUN_146825d77;
    _DAT_14caf61e8 = FUN_146825fd6;
    _DAT_14caf61f0 = FUN_1407e02ea;
    _DAT_14caf61f8 = FUN_146826273;
    _DAT_14caf61d0 = &LAB_147c44c5a;
    _DAT_14caf6210 = 0xffffffff00000010;
    _DAT_14caf6218 = 4;
    DAT_14caf621c = 0;
    _DAT_14caf6200 = &LAB_147c44c66;
    FUN_145de373e();
    FUN_145de3574();
    FUN_1407e00cc(&DAT_14caf61b8);
    return;
  }
  return;
}



// FUNCTION 145de3574 FUN_145de3574 body=133 status=ok
// SIG undefined FUN_145de3574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de3574(void)

{
  _DAT_14caf6e60 = L"BASE";
  DAT_14caf6e8a = 4;
  FUN_145de35fa();
  _DAT_14caf6e70 = DAT_14caf61c8;
  _DAT_14caf6e68 = &DAT_14caf6148;
  _DAT_14caf6e78 = &LAB_14682652b;
  DAT_14caf61c8 = &DAT_14caf6e60;
  DAT_14caf621d = DAT_14caf621d + '\x01';
  _DAT_14caf6e80 = 0x100000000;
  if (DAT_14caf61ac != '\0') {
    DAT_14caf621e = DAT_14caf621e + '\x01';
  }
  return;
}



// FUNCTION 145de35fa FUN_145de35fa body=200 status=ok
// SIG undefined FUN_145de35fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de35fa(void)

{
  if ((DAT_14caf61af & 2) != 0) {
    return;
  }
  DAT_14caf61af = DAT_14caf61af | 2;
  _DAT_14caf6150 = L"FParticleSpriteVertexFactoryShaderParameters";
  _DAT_14caf6168 = FUN_146826540;
  _DAT_14caf6170 = FUN_146825d77;
  _DAT_14caf6178 = FUN_146825fd6;
  _DAT_14caf6180 = FUN_1407e02ea;
  _DAT_14caf6188 = FUN_146826273;
  _DAT_14caf6160 = &LAB_147c44c4e;
  _DAT_14caf61a0 = 0xffffffff00000004;
  _DAT_14caf61a8 = 4;
  DAT_14caf61ac = 0;
  _DAT_14caf6190 = &LAB_147c44c56;
  FUN_145de36c2();
  FUN_1407e00cc(&DAT_14caf6148);
  return;
}



// FUNCTION 145de36c2 FUN_145de36c2 body=123 status=ok
// SIG undefined FUN_145de36c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de36c2(void)

{
  _DAT_14caf6e30 = L"BASE";
  DAT_14caf6e5a = 4;
  _DAT_14caf6e38 = FUN_1412f7d22();
  _DAT_14caf6e40 = DAT_14caf6158;
  _DAT_14caf6e48 = &LAB_14682652b;
  DAT_14caf6158 = &DAT_14caf6e30;
  DAT_14caf61ad = DAT_14caf61ad + '\x01';
  _DAT_14caf6e50 = 0x100000000;
  if (*(char *)(_DAT_14caf6e38 + 100) != '\0') {
    DAT_14caf61ae = DAT_14caf61ae + '\x01';
  }
  return;
}



// FUNCTION 145de373e FUN_145de373e body=216 status=ok
// SIG undefined FUN_145de373e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de373e(void)

{
  _DAT_14caf6e00 = L"CutoutGeometry";
  DAT_14caf6e2a = FUN_140850cc5();
  _DAT_14caf6e08 = FUN_140fb78d0();
  _DAT_14caf6e18 = &LAB_14682652b;
  _DAT_14caf6e20 = &DAT_10000000a;
  _DAT_14caf6e28 = 0;
  _DAT_14caf6e10 = DAT_14caf61c8;
  DAT_14caf61c8 = &DAT_14caf6e00;
  _DAT_14caf6dd0 = L"NumCutoutVerticesPerFrame";
  DAT_14caf6dfa = FUN_140850cc5();
  _DAT_14caf6dd8 = FUN_140ec6960();
  _DAT_14caf6de8 = &LAB_14682652b;
  _DAT_14caf6df0 = &DAT_100000004;
  _DAT_14caf6df8 = 0;
  _DAT_14caf6de0 = DAT_14caf61c8;
  DAT_14caf61c8 = &DAT_14caf6dd0;
  return;
}



// FUNCTION 145de3816 FUN_145de3816 body=155 status=ok
// SIG undefined FUN_145de3816(void)

void FUN_145de3816(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c96e8;
  DAT_14c9a7d48 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_145de38b2(param_1 + 0x4f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  FUN_145de38e8(param_1 + 0x43);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_140f484f6(param_1 + 0x32);
  FUN_145bfbed6(param_1);
  return;
}



// FUNCTION 145de38b2 FUN_145de38b2 body=53 status=ok
// SIG undefined FUN_145de38b2(void)

void FUN_145de38b2(longlong *param_1)

{
  FUN_14155b898();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de38e8 FUN_145de38e8 body=53 status=ok
// SIG undefined FUN_145de38e8(void)

void FUN_145de38e8(longlong *param_1)

{
  FUN_145de391e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de391e FUN_145de391e body=356 status=ok
// SIG undefined FUN_145de391e(void)

void FUN_145de391e(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x10);
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
    FUN_14474875a(param_1,0);
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



// FUNCTION 145de3a8e FUN_145de3a8e body=177 status=ok
// SIG undefined FUN_145de3a8e(void)

undefined8 * FUN_145de3a8e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a648f90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb418) {
    FUN_144b3d300(&DAT_14caeb418);
    if (DAT_14caeb418 == -1) {
      FUN_14155b8f0();
      atexit((_func_5014 *)&LAB_14356e05f);
      _Init_thread_footer(&DAT_14caeb418);
    }
  }
  return param_1;
}



// FUNCTION 145de3b4a FUN_145de3b4a body=177 status=ok
// SIG undefined FUN_145de3b4a(void)

undefined8 * FUN_145de3b4a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6493c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd88) {
    FUN_144b3d300(&DAT_14caebd88);
    if (DAT_14caebd88 == -1) {
      FUN_14155b996();
      atexit((_func_5014 *)&LAB_14356f1be);
      _Init_thread_footer(&DAT_14caebd88);
    }
  }
  return param_1;
}



// FUNCTION 145de3c06 FUN_145de3c06 body=177 status=ok
// SIG undefined FUN_145de3c06(void)

undefined8 * FUN_145de3c06(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64aa10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf58) {
    FUN_144b3d300(&DAT_14caeaf58);
    if (DAT_14caeaf58 == -1) {
      FUN_14155ba3c();
      atexit((_func_5014 *)&LAB_14356daae);
      _Init_thread_footer(&DAT_14caeaf58);
    }
  }
  return param_1;
}



// FUNCTION 145de3cc2 FUN_145de3cc2 body=177 status=ok
// SIG undefined FUN_145de3cc2(void)

undefined8 * FUN_145de3cc2(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64ae10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf70) {
    FUN_144b3d300(&DAT_14caeaf70);
    if (DAT_14caeaf70 == -1) {
      FUN_14155bae2();
      atexit((_func_5014 *)&LAB_14356dac2);
      _Init_thread_footer(&DAT_14caeaf70);
    }
  }
  return param_1;
}



// FUNCTION 145de3d7e FUN_145de3d7e body=177 status=ok
// SIG undefined FUN_145de3d7e(void)

undefined8 * FUN_145de3d7e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64b200;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf28) {
    FUN_144b3d300(&DAT_14caeaf28);
    if (DAT_14caeaf28 == -1) {
      FUN_14155bb88();
      atexit((_func_5014 *)&LAB_14356da86);
      _Init_thread_footer(&DAT_14caeaf28);
    }
  }
  return param_1;
}



// FUNCTION 145de3e3a FUN_145de3e3a body=177 status=ok
// SIG undefined FUN_145de3e3a(void)

undefined8 * FUN_145de3e3a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64b5f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf40) {
    FUN_144b3d300(&DAT_14caeaf40);
    if (DAT_14caeaf40 == -1) {
      FUN_14155bc2e();
      atexit((_func_5014 *)&LAB_14356da9a);
      _Init_thread_footer(&DAT_14caeaf40);
    }
  }
  return param_1;
}



// FUNCTION 145de3ef6 FUN_145de3ef6 body=177 status=ok
// SIG undefined FUN_145de3ef6(void)

undefined8 * FUN_145de3ef6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64b9e0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaf88) {
    FUN_144b3d300(&DAT_14caeaf88);
    if (DAT_14caeaf88 == -1) {
      FUN_14155bcd4();
      atexit((_func_5014 *)&LAB_14356dad6);
      _Init_thread_footer(&DAT_14caeaf88);
    }
  }
  return param_1;
}



// FUNCTION 145de3fb2 FUN_145de3fb2 body=177 status=ok
// SIG undefined FUN_145de3fb2(void)

undefined8 * FUN_145de3fb2(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64c660;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeafa0) {
    FUN_144b3d300(&DAT_14caeafa0);
    if (DAT_14caeafa0 == -1) {
      FUN_14155bd7a();
      atexit((_func_5014 *)&LAB_14356daea);
      _Init_thread_footer(&DAT_14caeafa0);
    }
  }
  return param_1;
}



// FUNCTION 145de406e FUN_145de406e body=177 status=ok
// SIG undefined FUN_145de406e(void)

undefined8 * FUN_145de406e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64e740;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb60) {
    FUN_144b3d300(&DAT_14caebb60);
    if (DAT_14caebb60 == -1) {
      FUN_14155be20();
      atexit((_func_5014 *)&LAB_14356ef7d);
      _Init_thread_footer(&DAT_14caebb60);
    }
  }
  return param_1;
}



// FUNCTION 145de412a FUN_145de412a body=177 status=ok
// SIG undefined FUN_145de412a(void)

undefined8 * FUN_145de412a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a650d30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb0f8) {
    FUN_144b3d300(&DAT_14caeb0f8);
    if (DAT_14caeb0f8 == -1) {
      FUN_14155bec6();
      atexit((_func_5014 *)&LAB_14356dcce);
      _Init_thread_footer(&DAT_14caeb0f8);
    }
  }
  return param_1;
}



// FUNCTION 145de41e6 FUN_145de41e6 body=177 status=ok
// SIG undefined FUN_145de41e6(void)

undefined8 * FUN_145de41e6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65df40;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb500) {
    FUN_144b3d300(&DAT_14caeb500);
    if (DAT_14caeb500 == -1) {
      FUN_14155bf6c();
      atexit((_func_5014 *)&LAB_14356e132);
      _Init_thread_footer(&DAT_14caeb500);
    }
  }
  return param_1;
}



// FUNCTION 145de42a2 FUN_145de42a2 body=177 status=ok
// SIG undefined FUN_145de42a2(void)

undefined8 * FUN_145de42a2(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a662c50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb370) {
    FUN_144b3d300(&DAT_14caeb370);
    if (DAT_14caeb370 == -1) {
      FUN_14155c012();
      atexit((_func_5014 *)&LAB_14356dfd3);
      _Init_thread_footer(&DAT_14caeb370);
    }
  }
  return param_1;
}



// FUNCTION 145de435e FUN_145de435e body=177 status=ok
// SIG undefined FUN_145de435e(void)

undefined8 * FUN_145de435e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a663040;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb388) {
    FUN_144b3d300(&DAT_14caeb388);
    if (DAT_14caeb388 == -1) {
      FUN_14155c0b8();
      atexit((_func_5014 *)&LAB_14356dfe7);
      _Init_thread_footer(&DAT_14caeb388);
    }
  }
  return param_1;
}



// FUNCTION 145de441a FUN_145de441a body=177 status=ok
// SIG undefined FUN_145de441a(void)

undefined8 * FUN_145de441a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a664a20;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb0c8) {
    FUN_144b3d300(&DAT_14caeb0c8);
    if (DAT_14caeb0c8 == -1) {
      FUN_14155c15e();
      atexit((_func_5014 *)&LAB_14356dca6);
      _Init_thread_footer(&DAT_14caeb0c8);
    }
  }
  return param_1;
}



// FUNCTION 145de44d6 FUN_145de44d6 body=177 status=ok
// SIG undefined FUN_145de44d6(void)

undefined8 * FUN_145de44d6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a664e50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb0e0) {
    FUN_144b3d300(&DAT_14caeb0e0);
    if (DAT_14caeb0e0 == -1) {
      FUN_14155c204();
      atexit((_func_5014 *)&LAB_14356dcba);
      _Init_thread_footer(&DAT_14caeb0e0);
    }
  }
  return param_1;
}



// FUNCTION 145de4592 FUN_145de4592 body=177 status=ok
// SIG undefined FUN_145de4592(void)

undefined8 * FUN_145de4592(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6668a0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb188) {
    FUN_144b3d300(&DAT_14caeb188);
    if (DAT_14caeb188 == -1) {
      FUN_14155c2aa();
      atexit((_func_5014 *)&LAB_14356dd46);
      _Init_thread_footer(&DAT_14caeb188);
    }
  }
  return param_1;
}



// FUNCTION 145de464e FUN_145de464e body=177 status=ok
// SIG undefined FUN_145de464e(void)

undefined8 * FUN_145de464e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a677f50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb340) {
    FUN_144b3d300(&DAT_14caeb340);
    if (DAT_14caeb340 == -1) {
      FUN_14155c350();
      atexit((_func_5014 *)&LAB_14356dfab);
      _Init_thread_footer(&DAT_14caeb340);
    }
  }
  return param_1;
}



// FUNCTION 145de470a FUN_145de470a body=177 status=ok
// SIG undefined FUN_145de470a(void)

undefined8 * FUN_145de470a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a677c70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb328) {
    FUN_144b3d300(&DAT_14caeb328);
    if (DAT_14caeb328 == -1) {
      FUN_14155c3f6();
      atexit((_func_5014 *)&LAB_14356df97);
      _Init_thread_footer(&DAT_14caeb328);
    }
  }
  return param_1;
}



// FUNCTION 145de47c6 FUN_145de47c6 body=177 status=ok
// SIG undefined FUN_145de47c6(void)

undefined8 * FUN_145de47c6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a678230;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb3a0) {
    FUN_144b3d300(&DAT_14caeb3a0);
    if (DAT_14caeb3a0 == -1) {
      FUN_14155c49c();
      atexit((_func_5014 *)&LAB_14356dffb);
      _Init_thread_footer(&DAT_14caeb3a0);
    }
  }
  return param_1;
}



// FUNCTION 145de4882 FUN_145de4882 body=177 status=ok
// SIG undefined FUN_145de4882(void)

undefined8 * FUN_145de4882(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6787f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb3d0) {
    FUN_144b3d300(&DAT_14caeb3d0);
    if (DAT_14caeb3d0 == -1) {
      FUN_14155c542();
      atexit((_func_5014 *)&LAB_14356e023);
      _Init_thread_footer(&DAT_14caeb3d0);
    }
  }
  return param_1;
}



// FUNCTION 145de493e FUN_145de493e body=177 status=ok
// SIG undefined FUN_145de493e(void)

undefined8 * FUN_145de493e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a678510;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb3b8) {
    FUN_144b3d300(&DAT_14caeb3b8);
    if (DAT_14caeb3b8 == -1) {
      FUN_14155c5e8();
      atexit((_func_5014 *)&LAB_14356e00f);
      _Init_thread_footer(&DAT_14caeb3b8);
    }
  }
  return param_1;
}



// FUNCTION 145de49fa FUN_145de49fa body=177 status=ok
// SIG undefined FUN_145de49fa(void)

undefined8 * FUN_145de49fa(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a680690;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebef8) {
    FUN_144b3d300(&DAT_14caebef8);
    if (DAT_14caebef8 == -1) {
      FUN_14155c68e();
      atexit((_func_5014 *)&LAB_14356f314);
      _Init_thread_footer(&DAT_14caebef8);
    }
  }
  return param_1;
}



// FUNCTION 145de4ab6 FUN_145de4ab6 body=177 status=ok
// SIG undefined FUN_145de4ab6(void)

undefined8 * FUN_145de4ab6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a678db0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb400) {
    FUN_144b3d300(&DAT_14caeb400);
    if (DAT_14caeb400 == -1) {
      FUN_14155c734();
      atexit((_func_5014 *)&LAB_14356e04b);
      _Init_thread_footer(&DAT_14caeb400);
    }
  }
  return param_1;
}



// FUNCTION 145de4b72 FUN_145de4b72 body=177 status=ok
// SIG undefined FUN_145de4b72(void)

undefined8 * FUN_145de4b72(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6823d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeae98) {
    FUN_144b3d300(&DAT_14caeae98);
    if (DAT_14caeae98 == -1) {
      FUN_14155c7da();
      atexit((_func_5014 *)&LAB_14356da0e);
      _Init_thread_footer(&DAT_14caeae98);
    }
  }
  return param_1;
}



// FUNCTION 145de4c2e FUN_145de4c2e body=177 status=ok
// SIG undefined FUN_145de4c2e(void)

undefined8 * FUN_145de4c2e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a682c70;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba88) {
    FUN_144b3d300(&DAT_14caeba88);
    if (DAT_14caeba88 == -1) {
      FUN_14155c880();
      atexit((_func_5014 *)&LAB_14356eec9);
      _Init_thread_footer(&DAT_14caeba88);
    }
  }
  return param_1;
}



// FUNCTION 145de4cea FUN_145de4cea body=177 status=ok
// SIG undefined FUN_145de4cea(void)

undefined8 * FUN_145de4cea(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a683410;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb358) {
    FUN_144b3d300(&DAT_14caeb358);
    if (DAT_14caeb358 == -1) {
      FUN_14155c926();
      atexit((_func_5014 *)&LAB_14356dfbf);
      _Init_thread_footer(&DAT_14caeb358);
    }
  }
  return param_1;
}



// FUNCTION 145de4da6 FUN_145de4da6 body=177 status=ok
// SIG undefined FUN_145de4da6(void)

undefined8 * FUN_145de4da6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a684290;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb110) {
    FUN_144b3d300(&DAT_14caeb110);
    if (DAT_14caeb110 == -1) {
      FUN_14155c9cc();
      atexit((_func_5014 *)&LAB_14356dce2);
      _Init_thread_footer(&DAT_14caeb110);
    }
  }
  return param_1;
}



// FUNCTION 145de4e62 FUN_145de4e62 body=177 status=ok
// SIG undefined FUN_145de4e62(void)

undefined8 * FUN_145de4e62(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a686f40;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead50) {
    FUN_144b3d300(&DAT_14caead50);
    if (DAT_14caead50 == -1) {
      FUN_14155ca72();
      atexit((_func_5014 *)&LAB_14356d8b6);
      _Init_thread_footer(&DAT_14caead50);
    }
  }
  return param_1;
}



// FUNCTION 145de4f1e FUN_145de4f1e body=177 status=ok
// SIG undefined FUN_145de4f1e(void)

undefined8 * FUN_145de4f1e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68ae30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb140) {
    FUN_144b3d300(&DAT_14caeb140);
    if (DAT_14caeb140 == -1) {
      FUN_14155cb18();
      atexit((_func_5014 *)&LAB_14356dd0a);
      _Init_thread_footer(&DAT_14caeb140);
    }
  }
  return param_1;
}



// FUNCTION 145de4fda FUN_145de4fda body=177 status=ok
// SIG undefined FUN_145de4fda(void)

undefined8 * FUN_145de4fda(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a68c900;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebcb0) {
    FUN_144b3d300(&DAT_14caebcb0);
    if (DAT_14caebcb0 == -1) {
      FUN_14155cbbe();
      atexit((_func_5014 *)&LAB_14356f10a);
      _Init_thread_footer(&DAT_14caebcb0);
    }
  }
  return param_1;
}



// FUNCTION 145de5096 FUN_145de5096 body=177 status=ok
// SIG undefined FUN_145de5096(void)

undefined8 * FUN_145de5096(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a691230;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb2f8) {
    FUN_144b3d300(&DAT_14caeb2f8);
    if (DAT_14caeb2f8 == -1) {
      FUN_14155cc64();
      atexit((_func_5014 *)&LAB_14356df6f);
      _Init_thread_footer(&DAT_14caeb2f8);
    }
  }
  return param_1;
}



// FUNCTION 145de5152 FUN_145de5152 body=177 status=ok
// SIG undefined FUN_145de5152(void)

undefined8 * FUN_145de5152(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a72b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb128) {
    FUN_144b3d300(&DAT_14caeb128);
    if (DAT_14caeb128 == -1) {
      FUN_14155cd0a();
      atexit((_func_5014 *)&LAB_14356dcf6);
      _Init_thread_footer(&DAT_14caeb128);
    }
  }
  return param_1;
}



// FUNCTION 145de520e FUN_145de520e body=177 status=ok
// SIG undefined FUN_145de520e(void)

undefined8 * FUN_145de520e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6ac870;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd40) {
    FUN_144b3d300(&DAT_14caebd40);
    if (DAT_14caebd40 == -1) {
      FUN_14155cdb0();
      atexit((_func_5014 *)&LAB_14356f182);
      _Init_thread_footer(&DAT_14caebd40);
    }
  }
  return param_1;
}



// FUNCTION 145de52d6 FUN_145de52d6 body=331 status=ok
// SIG undefined FUN_145de52d6(void)

void FUN_145de52d6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong *local_50;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_144729dda(param_1 + 200);
  if (cVar3 != '\0') {
    local_58 = 0;
    local_30 = 0;
    FUN_1405833e0(&local_58,param_1 + 200);
    plVar4 = (longlong *)FUN_1447262c2(&local_58);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_140c7d35c();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
      if (plVar4 != (longlong *)0x0) {
        uVar5 = FUN_140c7d35c();
        plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
        if (plVar4 != plVar6) {
          FUN_144a5ac3a(&local_58);
          if (plVar6 != (longlong *)0x0) {
            FUN_1402815f4(param_1,&local_58);
            lVar2 = *(longlong *)(CONCAT71(uStack_57,local_58) + 0xb0);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
            *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_50 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
            (**(code **)(*plVar6 + 0x10))(plVar6,lVar2 + 0x10);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
          }
          goto LAB_145de53db;
        }
      }
    }
    FUN_144a5ac3a(&local_58);
  }
LAB_145de53db:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de5422 FUN_145de5422 body=106 status=ok
// SIG undefined FUN_145de5422(void)

void FUN_145de5422(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_145de548c(param_1,(longlong *)(param_1 + 0x90));
  if (cVar1 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (DAT_14c950c29 == '\x01') {
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c();
        plVar2 = *(longlong **)(param_1 + 0x90);
      }
    }
    *(longlong **)(param_1 + 0x88) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x000145de546d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 145de548c FUN_145de548c body=69 status=ok
// SIG undefined FUN_145de548c(void)

ulonglong FUN_145de548c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_145de54d1();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 145de54d1 FUN_145de54d1 body=177 status=ok
// SIG undefined FUN_145de54d1(void)

undefined8 FUN_145de54d1(undefined8 param_1)

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
  local_b8 = FUN_145999830();
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



// FUNCTION 145de5584 FUN_145de5584 body=194 status=ok
// SIG undefined FUN_145de5584(void)

undefined8 * FUN_145de5584(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0xbff0000000000000;
  param_1[2] = 0xbff0000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x400000000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  FUN_145de5646(param_1 + 0x27);
  param_1[0x27] = &PTR_FUN_14b996738;
  return param_1;
}



// FUNCTION 145de5646 FUN_145de5646 body=159 status=ok
// SIG undefined FUN_145de5646(void)

undefined8 * FUN_145de5646(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b996748;
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *puVar1 = &PTR_FUN_14b996758;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b996770;
  puVar2[2] = puVar1;
  param_1[1] = puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = puVar2;
  }
  return param_1;
}



// FUNCTION 145de56e6 FUN_145de56e6 body=52 status=ok
// SIG undefined FUN_145de56e6(void)

void FUN_145de56e6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x3a8);
  memset(_Dst,0,0x3a8);
  FUN_145de571a(_Dst);
  return;
}



// FUNCTION 145de571a FUN_145de571a body=301 status=ok
// SIG undefined FUN_145de571a(void)

undefined8 * FUN_145de571a(undefined8 *param_1)

{
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9bece0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined1 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x68] = 0x3f80000000000000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x3f704dba3e67bf62;
  param_1[0x6b] = 0x3f8000003eec63ae;
  param_1[0x6c] = 0x3f80000000000000;
  param_1[0x6d] = 0x3e2b47843e11c715;
  param_1[0x6e] = 0x3f800000;
  param_1[0x6f] = &DAT_3f8000003f800000;
  param_1[0x70] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x72] = 0x3fe0000000000000;
  param_1[0x73] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return param_1;
}



// FUNCTION 145de5848 FUN_145de5848 body=158 status=ok
// SIG undefined FUN_145de5848(void)

bool FUN_145de5848(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de58e8 FUN_145de58e8 body=100 status=ok
// SIG undefined FUN_145de58e8(void)

void FUN_145de58e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x20);
      lVar3 = (longlong)*(int *)(param_2 + 0x28) << 3;
      do {
        lVar1 = FUN_140495e96(param_1 + 0x30);
        if (lVar1 != 0) {
          FUN_145de59b0(lVar1,lVar2);
        }
        lVar2 = lVar2 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    FUN_14155ce56(param_1);
    return;
  }
  return;
}



// FUNCTION 145de594c FUN_145de594c body=100 status=ok
// SIG undefined FUN_145de594c(void)

void FUN_145de594c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x20);
      lVar3 = (longlong)*(int *)(param_2 + 0x28) << 3;
      do {
        lVar1 = FUN_140495e96(param_1 + 0x30);
        if (lVar1 != 0) {
          FUN_145de59b0(lVar1,lVar2);
        }
        lVar2 = lVar2 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    FUN_14155ce56(param_1);
    return;
  }
  return;
}



// FUNCTION 145de59b0 FUN_145de59b0 body=12 status=ok
// SIG undefined FUN_145de59b0(void)

void FUN_145de59b0(longlong param_1)

{
  FUN_140721fbe(param_1 + 0x438);
  return;
}



// FUNCTION 145de59ce FUN_145de59ce body=140 status=ok
// SIG undefined FUN_145de59ce(void)

undefined1 * FUN_145de59ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145de5a5a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbFSR3Upscaler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXFSRPassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x75;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a048;
  return &LAB_149820dfa;
}



// FUNCTION 145de5a5a FUN_145de5a5a body=278 status=ok
// SIG undefined FUN_145de5a5a(void)

undefined * FUN_145de5a5a(void)

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
              0x110) < DAT_14cc2a0c8) {
    FUN_144b3d300(&DAT_14cc2a0c8);
    if (DAT_14cc2a0c8 == -1) {
      FUN_14155d046(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"cbFSR3Upscaler";
      local_78 = L"FFXFSRPassParameters";
      local_50 = 0x90;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a048,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144655ceb);
      _Init_thread_footer(&DAT_14cc2a0c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc2a048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de5b72 FUN_145de5b72 body=138 status=ok
// SIG undefined FUN_145de5b72(void)

code * FUN_145de5b72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fMotionVectorScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498216e6;
}



// FUNCTION 145de5bfc FUN_145de5bfc body=138 status=ok
// SIG undefined FUN_145de5bfc(void)

code * FUN_145de5bfc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fViewSpaceToMetersFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498214be;
}



// FUNCTION 145de5c86 FUN_145de5c86 body=138 status=ok
// SIG undefined FUN_145de5c86(void)

code * FUN_145de5c86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fMotionVectorJitterCancellation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982165c;
}



// FUNCTION 145de5d10 FUN_145de5d10 body=221 status=ok
// SIG undefined FUN_145de5d10(void)

void FUN_145de5d10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (1 < (int)DAT_14cb026c0) {
    lVar1 = 0xa8;
    do {
      if (*(longlong *)(DAT_14cb026b8 + 0xa0 + lVar1) == param_1) {
        *(undefined8 *)(DAT_14cb026b8 + 0xa0 + lVar1) = 0;
        puVar2 = (undefined8 *)(lVar1 + DAT_14cb026b8);
        *puVar2 = 0x3ead32613f691bc5;
        puVar2[1] = 0x3f8000003e8b295f;
        puVar2[2] = 0x3db632943f800000;
        puVar2[3] = 0x3f8000003d93a699;
        puVar2[4] = 0x3dcccccd402b2fed;
        *(undefined2 *)(puVar2 + 5) = 0;
        *(undefined1 **)((longlong)puVar2 + 0x2c) = &DAT_3f8000003f800000;
        *(undefined1 **)((longlong)puVar2 + 0x34) = &DAT_3f8000003f800000;
        *(undefined8 *)((longlong)puVar2 + 0x3c) = 0x3ef5c28f3f99999a;
        *(undefined8 *)((longlong)puVar2 + 0x44) = 0x3e8f5c293ed1eb85;
        *(undefined1 **)((longlong)puVar2 + 0x4c) = &DAT_3f8000003f800000;
        *(undefined8 *)((longlong)puVar2 + 0x54) = 0x3e99999a3ebd70a4;
        *(undefined4 *)((longlong)puVar2 + 0x5c) = 0x3f800000;
        puVar2[0xc] = &DAT_3f8000003f800000;
        puVar2[0xd] = &DAT_3f8000003f800000;
        puVar2[0xe] = 0x3da3d70a3f800000;
        puVar2[0xf] = 0x3fc666663f6e147b;
        puVar2[0x10] = 0x3fa666663f400000;
        puVar2[0x11] = 0x3f8000003f59999a;
        puVar2[0x12] = &DAT_3f8000003f800000;
        *(undefined4 *)(puVar2 + 0x13) = 0x3f800000;
        return;
      }
      lVar1 = lVar1 + 0xa8;
    } while ((ulonglong)DAT_14cb026c0 * 0xa8 - lVar1 != 0);
  }
  return;
}



// FUNCTION 145de5dee FUN_145de5dee body=257 status=ok
// SIG undefined FUN_145de5dee(void)

void FUN_145de5dee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_145de5ebb;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_145de5ebb;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(lVar1 + 0x38) & 0x20) != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x280))();
      FUN_144a62f0c(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined2 *)(lVar1 + 0x40));
    }
    FUN_145de5ef0(uVar2,lVar1);
    return;
  }
LAB_145de5ebb:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 145de5ef0 FUN_145de5ef0 body=278 status=ok
// SIG undefined FUN_145de5ef0(void)

void FUN_145de5ef0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  longlong *local_60;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x70);
    local_6c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
    local_80 = *(longlong *)(param_2 + 0x78);
    local_70 = *(undefined4 *)(local_80 + 0x34);
    iVar5 = *(int *)(param_1 + 8);
    local_78 = param_1;
    local_68 = uVar1;
    if (0 < iVar5) {
      iVar7 = 0;
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + -1;
        iVar6 = iVar5 + -1;
        if (-1 < iVar6) {
          uVar3 = rand();
          iVar4 = (int)((float)iVar5 * ((float)(uVar3 & 0x7fff) / 32767.0));
          if (iVar4 < iVar6) {
            iVar6 = iVar4;
          }
          if (iVar6 != 0) {
            if (iVar2 <= iVar4) {
              iVar4 = iVar2;
            }
            local_54 = iVar4 + iVar7;
            local_60 = &local_80;
            local_58 = iVar7;
            FUN_145de6008(&local_80,&local_60);
          }
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de6008 FUN_145de6008 body=61 status=ok
// SIG undefined FUN_145de6008(void)

void FUN_145de6008(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(*param_2 + 0x10);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_145de6046((int)param_2[1] * lVar1 + **(longlong **)(param_1 + 8),
                  *(int *)((longlong)param_2 + 0xc) * lVar1 + **(longlong **)(param_1 + 8),lVar1);
    return;
  }
  FUN_147b4c7da();
  return;
}



// FUNCTION 145de6046 FUN_145de6046 body=243 status=ok
// SIG undefined FUN_145de6046(void)

void FUN_145de6046(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 != 8) {
    switch(param_3) {
    case 0:
      goto switchD_145de6071_caseD_0;
    case 1:
      uVar1 = *(undefined1 *)param_1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      *(undefined1 *)param_2 = uVar1;
switchD_145de6071_caseD_0:
      return;
    case 2:
      uVar2 = *(undefined2 *)param_1;
      *(undefined2 *)param_1 = *(undefined2 *)param_2;
      *(undefined2 *)param_2 = uVar2;
      return;
    case 3:
      uVar2 = *(undefined2 *)param_1;
      *(undefined2 *)param_1 = *(undefined2 *)param_2;
      *(undefined2 *)param_2 = uVar2;
      uVar1 = *(undefined1 *)((longlong)param_1 + 2);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
      *(undefined1 *)((longlong)param_2 + 2) = uVar1;
      return;
    case 4:
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar3;
      return;
    case 5:
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar3;
      uVar1 = *(undefined1 *)((longlong)param_1 + 4);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      *(undefined1 *)((longlong)param_2 + 4) = uVar1;
      return;
    case 6:
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar3;
      uVar2 = *(undefined2 *)((longlong)param_1 + 4);
      *(undefined2 *)((longlong)param_1 + 4) = *(undefined2 *)((longlong)param_2 + 4);
      *(undefined2 *)((longlong)param_2 + 4) = uVar2;
      return;
    case 7:
      uVar3 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar3;
      uVar2 = *(undefined2 *)((longlong)param_1 + 4);
      *(undefined2 *)((longlong)param_1 + 4) = *(undefined2 *)((longlong)param_2 + 4);
      *(undefined2 *)((longlong)param_2 + 4) = uVar2;
      uVar1 = *(undefined1 *)((longlong)param_1 + 6);
      *(undefined1 *)((longlong)param_1 + 6) = *(undefined1 *)((longlong)param_2 + 6);
      *(undefined1 *)((longlong)param_2 + 6) = uVar1;
      return;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      switchD_145de6071::default();
      return;
    case 0x10:
      uVar4 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar4;
      uVar4 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar4;
      return;
    default:
      if (((ulonglong)param_1 & 1) != 0) {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
        param_1 = (undefined8 *)((longlong)param_1 + 1);
        param_3 = param_3 + -1;
      }
      if (((ulonglong)param_1 & 2) != 0) {
        uVar2 = *(undefined2 *)param_2;
        *(undefined2 *)param_2 = *(undefined2 *)param_1;
        param_2 = (undefined8 *)((longlong)param_2 + 2);
        *(undefined2 *)param_1 = uVar2;
        param_1 = (undefined8 *)((longlong)param_1 + 2);
        param_3 = param_3 + -2;
      }
      if (((ulonglong)param_1 & 4) != 0) {
        uVar3 = *(undefined4 *)param_2;
        *(undefined4 *)param_2 = *(undefined4 *)param_1;
        param_2 = (undefined8 *)((longlong)param_2 + 4);
        *(undefined4 *)param_1 = uVar3;
        param_1 = (undefined8 *)((longlong)param_1 + 4);
        param_3 = param_3 + -4;
      }
      uVar6 = (int)param_1 - (int)param_2 | 8;
      uVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001467b7912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&DAT_149e06790 + (longlong)(int)(&DAT_149e06790)[uVar5]))
                (param_1,param_2,param_3);
      return;
    }
  }
  uVar4 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar4;
  return;
}



// FUNCTION 145de613a FUN_145de613a body=205 status=ok
// SIG undefined FUN_145de613a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de613a(void)

{
  if ((DAT_14ca959c7 & 2) == 0) {
    DAT_14ca959c7 = DAT_14ca959c7 | 2;
    _DAT_14ca95968 = L"FClearUAVRectsPS";
    _DAT_14ca95980 = FUN_146826540;
    _DAT_14ca95988 = FUN_146825d77;
    _DAT_14ca95990 = FUN_146825fd6;
    _DAT_14ca95998 = FUN_1407e02ea;
    _DAT_14ca959a0 = FUN_146826273;
    _DAT_14ca95978 = FUN_14742bb44;
    _DAT_14ca959b8 = 0xffffffff000000e0;
    _DAT_14ca959c0 = 8;
    DAT_14ca959c4 = 0;
    _DAT_14ca959a8 = &LAB_14742bb6e;
    FUN_145de6208();
    FUN_1407e00cc(&DAT_14ca95960);
    return;
  }
  return;
}



// FUNCTION 145de6208 FUN_145de6208 body=123 status=ok
// SIG undefined FUN_145de6208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de6208(void)

{
  _DAT_14ca962b8 = L"BASE";
  DAT_14ca962e2 = 4;
  _DAT_14ca962c0 = FUN_140b35ae4();
  _DAT_14ca962c8 = DAT_14ca95970;
  _DAT_14ca962d0 = &LAB_14682652b;
  DAT_14ca95970 = &DAT_14ca962b8;
  DAT_14ca959c5 = DAT_14ca959c5 + '\x01';
  _DAT_14ca962d8 = 0x100000000;
  if (*(char *)(_DAT_14ca962c0 + 100) != '\0') {
    DAT_14ca959c6 = DAT_14ca959c6 + '\x01';
  }
  return;
}



// FUNCTION 145de6284 FUN_145de6284 body=226 status=ok
// SIG undefined FUN_145de6284(void)

longlong * FUN_145de6284(longlong *param_1)

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
  pcVar13 = FUN_14631f116;
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



// FUNCTION 145de636c FUN_145de636c body=132 status=ok
// SIG undefined FUN_145de636c(void)

undefined1 * FUN_145de636c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClearValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145de6368;
}



// FUNCTION 145de63f0 FUN_145de63f0 body=55 status=ok
// SIG undefined FUN_145de63f0(void)

void FUN_145de63f0(longlong *param_1)

{
  FUN_145de6428(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de6428 FUN_145de6428 body=121 status=ok
// SIG undefined FUN_145de6428(void)

void FUN_145de6428(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 145de64a2 FUN_145de64a2 body=226 status=ok
// SIG undefined FUN_145de64a2(void)

void FUN_145de64a2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14155d350(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 145de6584 FUN_145de6584 body=94 status=ok
// SIG undefined FUN_145de6584(void)

void FUN_145de6584(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145de65e2(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14155d532(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145de65e2 FUN_145de65e2 body=53 status=ok
// SIG undefined FUN_145de65e2(void)

void FUN_145de65e2(longlong *param_1)

{
  FUN_145de6618();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de6618 FUN_145de6618 body=319 status=ok
// SIG undefined FUN_145de6618(void)

void FUN_145de6618(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de6764 FUN_145de6764 body=178 status=ok
// SIG undefined FUN_145de6764(void)

undefined8 * FUN_145de6764(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a695a70;
  param_1[0x16] = 0;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec088) {
    FUN_144b3d300(&DAT_14caec088);
    if (DAT_14caec088 == -1) {
      FUN_14155d572();
      atexit((_func_5014 *)&LAB_14356f544);
      _Init_thread_footer(&DAT_14caec088);
    }
  }
  return param_1;
}



// FUNCTION 145de6822 FUN_145de6822 body=178 status=ok
// SIG undefined FUN_145de6822(void)

undefined8 * FUN_145de6822(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a69a1e0;
  param_1[0x16] = 0;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec160) {
    FUN_144b3d300(&DAT_14caec160);
    if (DAT_14caec160 == -1) {
      FUN_14155d618();
      atexit((_func_5014 *)&LAB_14356f5f8);
      _Init_thread_footer(&DAT_14caec160);
    }
  }
  return param_1;
}



// FUNCTION 145de68d4 FUN_145de68d4 body=40 status=ok
// SIG undefined FUN_145de68d4(void)

undefined8 FUN_145de68d4(undefined8 param_1,int param_2)

{
  FUN_145de68fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de68fc FUN_145de68fc body=137 status=ok
// SIG undefined FUN_145de68fc(void)

void FUN_145de68fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa13ea0;
  param_1[5] = &PTR_FUN_14aa14320;
  param_1[6] = &PTR_LAB_14aa14360;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x26);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145de6990 FUN_145de6990 body=165 status=ok
// SIG undefined FUN_145de6990(void)

undefined8 * FUN_145de6990(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a319be();
  *param_1 = &PTR_FUN_14abea610;
  param_1[5] = &PTR_FUN_14abea950;
  FUN_1400b22c2(&local_28,"Selector");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


