// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14252d150 FUN_14252d150 body=32 status=ok
// SIG undefined FUN_14252d150(void)

ulonglong FUN_14252d150(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0x10000010100U >> ((char)*(uint *)(param_1 + 0x28) * '\b' & 0x3fU) & 0xffffffff;
  if (5 < *(uint *)(param_1 + 0x28)) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14252d170 FUN_14252d170 body=246 status=ok
// SIG undefined FUN_14252d170(void)

ulonglong FUN_14252d170(longlong param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar2 = *param_2;
  do {
    if (0 < iVar2) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 6) {
      if (iVar2 == 1) {
        dVar1 = *(double *)(param_1 + 8);
        if (dVar1 <= 2147483647.0) {
          if (-2147483648.0 <= dVar1) {
            return (ulonglong)(uint)(int)dVar1;
          }
LAB_14252d259:
          *param_2 = 3;
          return 0x80000000;
        }
      }
      else {
        if (iVar2 != 5) {
          if (iVar2 == 2) {
            return (ulonglong)*(uint *)(param_1 + 8);
          }
          goto LAB_14252d1f2;
        }
        uVar3 = *(ulonglong *)(param_1 + 8);
        if ((longlong)uVar3 < 0x80000000) {
          if (-0x80000001 < (longlong)uVar3) {
            return uVar3;
          }
          goto LAB_14252d259;
        }
      }
      *param_2 = 3;
      return 0x7fffffff;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      *param_2 = 7;
      return 0;
    }
    lVar4 = __RTDynamicCast(*(longlong *)(param_1 + 8),0,&icu_64::UObject::RTTI_Type_Descriptor,
                            &icu_64::Measure::RTTI_Type_Descriptor,0);
    if (lVar4 == 0) {
LAB_14252d1f2:
      *param_2 = 3;
      return 0;
    }
    param_1 = *(longlong *)(param_1 + 8) + 8;
    iVar2 = *param_2;
  } while( true );
}



// FUNCTION 14252d270 FUN_14252d270 body=180 status=ok
// SIG undefined FUN_14252d270(void)

double FUN_14252d270(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  while( true ) {
    if (0 < iVar1) {
      return 0.0;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 6) break;
    if (*(longlong *)(param_1 + 8) == 0) {
      *param_2 = 7;
      return 0.0;
    }
    lVar2 = __RTDynamicCast(*(longlong *)(param_1 + 8),0,&icu_64::UObject::RTTI_Type_Descriptor,
                            &icu_64::Measure::RTTI_Type_Descriptor,0);
    if (lVar2 == 0) goto LAB_14252d304;
    param_1 = *(longlong *)(param_1 + 8) + 8;
    iVar1 = *param_2;
  }
  if (iVar1 == 1) {
    return *(double *)(param_1 + 8);
  }
  if ((iVar1 == 5) || (iVar1 == 2)) {
    return (double)*(longlong *)(param_1 + 8);
  }
LAB_14252d304:
  *param_2 = 3;
  return 0.0;
}



// FUNCTION 14252d330 FUN_14252d330 body=14 status=ok
// SIG undefined FUN_14252d330(void)

undefined8 FUN_14252d330(longlong param_1)

{
  if (*(int *)(param_1 + 0x28) == 6) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 14252d340 FUN_14252d340 body=44 status=ok
// SIG undefined FUN_14252d340(void)

void FUN_14252d340(longlong param_1,undefined8 param_2)

{
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14252d370 FUN_14252d370 body=37 status=ok
// SIG undefined FUN_14252d370(void)

void FUN_14252d370(longlong param_1,int param_2)

{
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(longlong *)(param_1 + 8) = (longlong)param_2;
  return;
}



// FUNCTION 14252d3a0 FUN_14252d3a0 body=44 status=ok
// SIG undefined FUN_14252d3a0(void)

void FUN_14252d3a0(longlong param_1,undefined8 param_2)

{
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14252d3d0 FUN_14252d3d0 body=85 status=ok
// SIG undefined FUN_14252d3d0(void)

void FUN_14252d3d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 3;
  lVar1 = thunk_FUN_1424da030(0x40);
  if (lVar1 != 0) {
    FUN_1424a6be0(lVar1,param_2);
  }
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}



// FUNCTION 14252d430 Unwind@14252d430 body=34 status=ok
// SIG undefined Unwind@14252d430(void)

void Unwind_14252d430(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14252d460 FUN_14252d460 body=43 status=ok
// SIG undefined FUN_14252d460(void)

void FUN_14252d460(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 4;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 14252d490 FUN_14252d490 body=35 status=ok
// SIG undefined FUN_14252d490(void)

void FUN_14252d490(longlong param_1,undefined8 param_2)

{
  FUN_14252d010();
  *(undefined4 *)(param_1 + 0x28) = 6;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14252d4c0 FUN_14252d4c0 body=48 status=ok
// SIG undefined FUN_14252d4c0(void)

longlong FUN_14252d4c0(longlong param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x28) == 3) {
    if (*(longlong *)(param_1 + 8) != 0) {
      return *(longlong *)(param_1 + 8);
    }
    if (*param_2 < 1) {
      *param_2 = 7;
    }
  }
  else if (*param_2 < 1) {
    *param_2 = 3;
  }
  return param_1 + 0x30;
}



// FUNCTION 14252d4f0 FUN_14252d4f0 body=120 status=ok
// SIG undefined FUN_14252d4f0(void)

void FUN_14252d4f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_142537dc0(param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 5) {
    FUN_142539210(param_2,*(undefined8 *)(param_1 + 8));
    return;
  }
  if (iVar1 == 2) {
    FUN_142538f60(param_2,*(undefined4 *)(param_1 + 8));
    return;
  }
  if (iVar1 == 1) {
    FUN_142539590(param_2,*(undefined8 *)(param_1 + 8));
    FUN_14253af10(param_2);
    return;
  }
  *param_3 = 0x1b;
  return;
}



// FUNCTION 14252d570 FUN_14252d570 body=123 status=ok
// SIG undefined FUN_14252d570(void)

void FUN_14252d570(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    cVar2 = FUN_142539e00(param_2,0);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar4 = FUN_142538d80(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
    else {
      lVar3 = FUN_142538cc0(*(undefined8 *)(param_1 + 0x20),0);
      *(longlong *)(param_1 + 8) = lVar3;
      if ((int)lVar3 == lVar3) {
        *(undefined4 *)(param_1 + 0x28) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = 5;
      }
    }
  }
  return;
}



// FUNCTION 14252d5f0 FUN_14252d5f0 body=65 status=ok
// SIG undefined FUN_14252d5f0(void)

undefined8 * FUN_14252d5f0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::Formattable::vftable;
  FUN_14252d010();
  FUN_140859a90(param_1 + 6);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14252d640 FUN_14252d640 body=8 status=ok
// SIG undefined FUN_14252d640(void)

undefined * FUN_14252d640(void)

{
  return &DAT_14c792f84;
}



// FUNCTION 14252d650 FUN_14252d650 body=1465 status=ok
// SIG undefined FUN_14252d650(void)

undefined8 *
FUN_14252d650(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,int *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  double dVar6;
  undefined1 local_1b0 [200];
  undefined1 local_e8 [64];
  undefined **local_a8;
  undefined2 local_a0;
  int local_64;
  longlong local_60;
  undefined8 *local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  FUN_1425d90b0(param_1,param_4);
  *param_1 = icu_64::OlsonTimeZone::vftable;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  UNLOCK();
  if ((param_2 == 0 || param_3 == 0) && (*param_5 < 1)) {
    *param_5 = 1;
    goto LAB_14252dbae;
  }
  if (0 < *param_5) goto LAB_14252dbae;
  local_58 = param_1;
  FUN_1424ea920(local_1b0);
  FUN_1424ecc30(param_3,"transPre32",local_1b0,param_5);
  uVar3 = FUN_1424eaea0(local_1b0,local_4c,param_5);
  puVar1 = local_58;
  local_58[10] = uVar3;
  *(short *)(local_58 + 9) = (short)(local_4c[0] >> 1);
  if (*param_5 == 2) {
    local_58[10] = 0;
    *(undefined2 *)(local_58 + 9) = 0;
    iVar5 = 0;
LAB_14252d79b:
    *param_5 = iVar5;
  }
  else if ((*param_5 < 1) && (iVar5 = 3, (local_4c[0] & 0xffff8001) != 0)) goto LAB_14252d79b;
  FUN_1424ecc30(param_3,"trans",local_1b0,param_5);
  uVar3 = FUN_1424eaea0(local_1b0,local_4c,param_5);
  puVar1[0xb] = uVar3;
  *(short *)((longlong)puVar1 + 0x4a) = (short)local_4c[0];
  if (*param_5 == 2) {
    puVar1[0xb] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x4a) = 0;
    iVar5 = 0;
LAB_14252d801:
    *param_5 = iVar5;
  }
  else if ((*param_5 < 1) && (iVar5 = 3, 0x7fff < local_4c[0])) goto LAB_14252d801;
  FUN_1424ecc30(param_3,"transPost32",local_1b0,param_5);
  uVar3 = FUN_1424eaea0(local_1b0,local_4c,param_5);
  puVar1[0xc] = uVar3;
  *(short *)((longlong)puVar1 + 0x4c) = (short)(local_4c[0] >> 1);
  if (*param_5 == 2) {
    puVar1[0xc] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x4c) = 0;
    iVar5 = 0;
LAB_14252d86b:
    *param_5 = iVar5;
  }
  else if ((*param_5 < 1) && (iVar5 = 3, (local_4c[0] & 0xffff8001) != 0)) goto LAB_14252d86b;
  FUN_1424ecc30(param_3,"typeOffsets",local_1b0,param_5);
  uVar3 = FUN_1424eaea0(local_1b0,local_4c,param_5);
  puVar1[0xe] = uVar3;
  if ((*param_5 < 1) && ((0x7ffc < local_4c[0] - 2 || ((local_4c[0] & 1) != 0)))) {
    *param_5 = 3;
  }
  *(short *)(puVar1 + 0xd) = (short)((uint)(int)(short)local_4c[0] >> 1);
  puVar1[0xf] = 0;
  if (0 < (short)(*(short *)((longlong)puVar1 + 0x4a) + *(short *)(puVar1 + 9) +
                 *(short *)((longlong)puVar1 + 0x4c))) {
    FUN_1424ecc30(param_3,"typeMap",local_1b0,param_5);
    uVar3 = FUN_1424eae50(local_1b0,local_4c,param_5);
    puVar1[0xf] = uVar3;
    if ((*param_5 == 2) ||
       ((*param_5 < 1 &&
        (local_4c[0] !=
         (int)(short)(*(short *)((longlong)puVar1 + 0x4a) + *(short *)(puVar1 + 9) +
                     *(short *)((longlong)puVar1 + 0x4c)))))) {
      *param_5 = 3;
    }
  }
  uVar3 = FUN_1424ecf00(param_3,"finalRule",local_4c,param_5);
  FUN_1424ecc30(param_3,"finalRaw",local_1b0,param_5);
  iVar5 = FUN_1424eaef0(local_1b0,param_5);
  FUN_1424ecc30(param_3,"finalYear",local_1b0,param_5);
  uVar2 = FUN_1424eaef0(local_1b0,param_5);
  if (*param_5 < 1) {
    FUN_1424a7060(local_e8,1,uVar3,local_4c[0]);
    uVar3 = FUN_1424b7110(param_2,local_e8,0,param_5);
    puVar4 = (undefined1 *)FUN_1424eaea0(uVar3,local_4c,param_5);
    if ((*param_5 < 1) && (local_4c[0] == 0xb)) {
      local_a8 = &PTR_FUN_149e18960;
      local_a0 = 2;
      local_60 = thunk_FUN_1424da030(0xa0);
      if (local_60 == 0) {
        local_58[0x10] = 0;
        *param_5 = 7;
      }
      else {
        local_64 = *(int *)(puVar4 + 0x28) * 1000;
        local_4d = puVar4[8];
        local_4e = *puVar4;
        FUN_14251fa90(local_60,iVar5 * 1000,&local_a8,local_4e,puVar4[4],local_4d,
                      *(int *)(puVar4 + 0xc) * 1000,*(undefined4 *)(puVar4 + 0x10),puVar4[0x14],
                      puVar4[0x18],puVar4[0x1c],*(int *)(puVar4 + 0x20) * 1000,
                      *(undefined4 *)(puVar4 + 0x24),local_64,param_5);
        puVar1 = local_58;
        local_58[0x10] = local_60;
        *(undefined4 *)(local_58 + 0x12) = uVar2;
        dVar6 = (double)FUN_142500e20(uVar2,0,1);
        puVar1[0x11] = dVar6 * 86400000.0;
      }
      FUN_140859a90(&local_a8);
    }
    else {
      *param_5 = 3;
    }
    FUN_1424ea9f0(uVar3);
    FUN_140859a90(local_e8);
  }
  else if (*param_5 == 2) {
    *param_5 = 0;
  }
  uVar3 = FUN_14252a2a0(param_4,param_5);
  param_1 = local_58;
  local_58[0x13] = uVar3;
  FUN_1424ea970(local_1b0);
  if (*param_5 < 1) {
    return param_1;
  }
LAB_14252dbae:
  param_1[0x13] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = &DAT_1499dcb48;
  return param_1;
}



// FUNCTION 14252dc10 Unwind@14252dc10 body=58 status=ok
// SIG undefined Unwind@14252dc10(void)

void Unwind_14252dc10(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1c8));
  return;
}



// FUNCTION 14252dc50 Unwind@14252dc50 body=58 status=ok
// SIG undefined Unwind@14252dc50(void)

void Unwind_14252dc50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x180);
  return;
}



// FUNCTION 14252dc90 Unwind@14252dc90 body=58 status=ok
// SIG undefined Unwind@14252dc90(void)

void Unwind_14252dc90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 14252dcd0 Unwind@14252dcd0 body=58 status=ok
// SIG undefined Unwind@14252dcd0(void)

void Unwind_14252dcd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b72e0(*(undefined8 *)(param_2 + 0x1d0));
  return;
}



// FUNCTION 14252dd10 Unwind@14252dd10 body=55 status=ok
// SIG undefined Unwind@14252dd10(void)

void Unwind_14252dd10(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0x78);
  return;
}



// FUNCTION 14252dd50 FUN_14252dd50 body=280 status=ok
// SIG undefined FUN_14252dd50(void)

undefined8 * FUN_14252dd50(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1425d90d0();
  *param_1 = icu_64::OlsonTimeZone::vftable;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x48);
  *(undefined2 *)((longlong)param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined2 *)((longlong)param_1 + 0x4c) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x58))();
  }
  param_1[0x10] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  UNLOCK();
  return param_1;
}



// FUNCTION 14252de70 Unwind@14252de70 body=36 status=ok
// SIG undefined Unwind@14252de70(void)

void Unwind_14252de70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b72e0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252dea0 FUN_14252dea0 body=252 status=ok
// SIG undefined FUN_14252dea0(void)

undefined4 FUN_14252dea0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    sVar3 = *(short *)(param_1 + 200);
    if (0 < sVar3) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xc0) + lVar4 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
          sVar3 = *(short *)(param_1 + 200);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < sVar3);
      lVar4 = *(longlong *)(param_1 + 0xc0);
    }
    FUN_1424da110(lVar4);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14252dfa0 FUN_14252dfa0 body=102 status=ok
// SIG undefined FUN_14252dfa0(void)

bool FUN_14252dfa0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    lVar4 = __RTtypeid();
    lVar5 = __RTtypeid(param_2);
    iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
    if ((iVar3 == 0) && (cVar1 = FUN_1424b73a0(param_1,param_2), cVar1 != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
      return cVar1 != '\0';
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14252e010 FUN_14252e010 body=64 status=ok
// SIG undefined FUN_14252e010(void)

longlong FUN_14252e010(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0xe0);
  if (lVar1 != 0) {
    FUN_14252dd50(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 14252e050 Unwind@14252e050 body=32 status=ok
// SIG undefined Unwind@14252e050(void)

void Unwind_14252e050(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252e070 FUN_14252e070 body=200 status=ok
// SIG undefined FUN_14252e070(void)

undefined8 FUN_14252e070(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  int *in_stack_00000040;
  
  if (param_4 < 0xc) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
  }
  else {
    if (*in_stack_00000040 < 1) {
      *in_stack_00000040 = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14252e140 FUN_14252e140 body=287 status=ok
// SIG undefined FUN_14252e140(void)

void FUN_14252e140(longlong param_1,byte param_2,int param_3,uint param_4,int param_5,char param_6,
                  uint param_7,int param_8,int *param_9)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_9 < 1) {
    if (((((param_2 < 2) && (param_4 < 0xc)) && (0 < param_5)) &&
        ((0xfffffffb < param_8 - 0x20U && (param_7 < 86400000)))) &&
       ((0xf8 < (byte)(param_6 - 8U) && (param_5 <= param_8)))) {
      iVar1 = -param_3;
      if (param_2 != 0) {
        iVar1 = param_3;
      }
      if ((*(longlong *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x90) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
      dVar2 = (double)FUN_142500e20(iVar1,param_4);
      local_48 = local_40;
      local_50 = local_3c;
      local_58 = 1;
      FUN_14252e290(param_1,(double)(int)param_7 + dVar2 * 86400000.0,1,3);
    }
    else {
      *param_9 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 14252e290 FUN_14252e290 body=939 status=ok
// SIG undefined FUN_14252e290(void)

void FUN_14252e290(longlong param_1,double param_2,char param_3,uint param_4,uint param_5,
                  int *param_6,int *param_7)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  
  uVar13 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4c);
  if ((short)uVar13 < 1) {
LAB_14252e354:
    *param_6 = **(int **)(param_1 + 0x70) * 1000;
    lVar11 = 1;
  }
  else {
    dVar22 = (double)FUN_1424d97b0(param_2 / 1000.0);
    uVar3 = *(ushort *)(param_1 + 0x48);
    if (param_3 == '\0') {
      if ((short)uVar3 < 1) {
        sVar7 = -uVar3;
        if (sVar7 < *(short *)(param_1 + 0x4a)) {
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar7 * 4);
        }
        else {
          iVar16 = (int)(short)(sVar7 - *(short *)(param_1 + 0x4a));
          lVar11 = CONCAT44(*(undefined4 *)
                             (*(longlong *)(param_1 + 0x60) + (longlong)(iVar16 * 2) * 4),
                            *(undefined4 *)
                             (*(longlong *)(param_1 + 0x60) + (longlong)(iVar16 * 2 + 1) * 4));
        }
      }
      else {
        lVar11 = CONCAT44(**(undefined4 **)(param_1 + 0x50),(*(undefined4 **)(param_1 + 0x50))[1]);
      }
      if (dVar22 < (double)lVar11) goto LAB_14252e354;
    }
    lVar11 = *(longlong *)(param_1 + 0x78);
    piVar6 = *(int **)(param_1 + 0x70);
    uVar8 = param_4 & 3;
    uVar9 = param_5 & 3;
    uVar19 = (uint)uVar13 * 2;
    uVar17 = (ulonglong)uVar13;
    do {
      uVar19 = uVar19 - 2;
      if ((longlong)uVar17 < 1) {
        *param_6 = *piVar6 * 1000;
        lVar11 = 1;
        goto LAB_14252e624;
      }
      if ((longlong)(short)uVar3 < (longlong)uVar17) {
        sVar7 = ~uVar3 + (short)uVar17;
        if (*(short *)(param_1 + 0x4a) <= sVar7) {
          iVar16 = (int)(short)((~uVar3 - *(short *)(param_1 + 0x4a)) + (short)uVar17);
          uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)(iVar16 * 2) * 4);
          uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)(iVar16 * 2 + 1) * 4);
          goto LAB_14252e48c;
        }
        lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar7 * 4);
      }
      else {
        uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar19 & 0x1fffe) * 4);
        uVar5 = *(undefined4 *)
                 (*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar19 & 0x1fffe | 1) * 4);
LAB_14252e48c:
        lVar18 = CONCAT44(uVar4,uVar5);
      }
      uVar1 = uVar17 - 1;
      if ((param_3 != '\0') && ((double)(lVar18 + -0x15180) <= dVar22)) {
        if (uVar17 < 2) {
          iVar16 = piVar6[1] + *piVar6;
          lVar12 = 1;
        }
        else {
          bVar2 = *(byte *)(lVar11 + (ulonglong)((int)uVar17 - 2U & 0xffff));
          iVar16 = piVar6[(uint)bVar2 * 2 | 1] + piVar6[(ulonglong)bVar2 * 2];
          lVar12 = (ulonglong)bVar2 * 2 + 1;
        }
        bVar20 = piVar6[lVar12] != 0;
        bVar2 = *(byte *)(lVar11 + (uVar1 & 0xffff));
        iVar14 = piVar6[(ulonglong)bVar2 * 2] + piVar6[(uint)bVar2 * 2 | 1];
        bVar21 = piVar6[(uint)bVar2 * 2 | 1] == 0;
        if (iVar14 < iVar16) {
          iVar15 = iVar14;
          if ((uVar9 != 1 || (!bVar21 || !bVar20)) && (uVar9 != 3 || (bVar21 || bVar20))) {
            if ((param_5 & 0xc) == 4) {
              iVar14 = iVar16;
            }
            iVar10 = iVar14;
            if (bVar21 && bVar20) {
              iVar10 = iVar16;
            }
            if (uVar9 != 3) {
              iVar10 = iVar14;
            }
            if (bVar21 || bVar20) {
              iVar16 = iVar10;
            }
            iVar15 = iVar16;
            if (uVar9 != 1) {
              iVar15 = iVar10;
            }
          }
        }
        else {
          iVar15 = iVar16;
          if ((uVar8 != 1 || (!bVar21 || !bVar20)) && (uVar8 != 3 || (bVar21 || bVar20))) {
            if ((param_4 & 0xc) != 0xc) {
              iVar16 = iVar14;
            }
            iVar10 = iVar16;
            if (bVar21 && bVar20) {
              iVar10 = iVar14;
            }
            if (uVar8 != 3) {
              iVar10 = iVar16;
            }
            if (bVar21 || bVar20) {
              iVar14 = iVar10;
            }
            iVar15 = iVar14;
            if (uVar8 != 1) {
              iVar15 = iVar10;
            }
          }
        }
        lVar18 = lVar18 + iVar15;
      }
      uVar17 = uVar1;
    } while (dVar22 < (double)lVar18);
    *param_6 = piVar6[(ulonglong)*(byte *)(lVar11 + (uVar1 & 0xffff)) * 2] * 1000;
    lVar11 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + (uVar1 & 0xffff)) * 2 + 1;
  }
LAB_14252e624:
  *param_7 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar11 * 4) * 1000;
  return;
}



// FUNCTION 14252e650 FUN_14252e650 body=93 status=ok
// SIG undefined FUN_14252e650(void)

void FUN_14252e650(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  longlong *plVar1;
  
  if (*param_6 < 1) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    if ((plVar1 != (longlong *)0x0) && (*(double *)(param_1 + 0x88) <= param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014252e687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,*(code **)(*plVar1 + 0x18));
      return;
    }
    FUN_14252e290(param_1,param_5,param_3,4,0xc,param_4,param_5);
  }
  return;
}



// FUNCTION 14252e6b0 FUN_14252e6b0 body=104 status=ok
// SIG undefined FUN_14252e6b0(void)

void FUN_14252e6b0(longlong param_1,double param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7)

{
  longlong *plVar1;
  
  if (*param_7 < 1) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    if ((plVar1 != (longlong *)0x0) && (*(double *)(param_1 + 0x88) <= param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014252e6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x98))(plVar1,plVar1,param_3);
      return;
    }
    FUN_14252e290(param_1,plVar1,1,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 14252e720 FUN_14252e720 body=1 status=ok
// SIG undefined FUN_14252e720(void)

void FUN_14252e720(void)

{
  return;
}



// FUNCTION 14252e730 FUN_14252e730 body=102 status=ok
// SIG undefined FUN_14252e730(void)

void FUN_14252e730(longlong *param_1)

{
  double dVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 *local_30;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_14 = 0;
  dVar1 = (double)FUN_1424d9690();
  local_30 = &local_14;
  local_38 = local_1c;
  (**(code **)(*param_1 + 0x18))(param_1,dVar1 * 1000.0,0,local_18);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 14252e7a0 FUN_14252e7a0 body=633 status=ok
// SIG undefined FUN_14252e7a0(void)

void FUN_14252e7a0(longlong param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar15 = (double)FUN_1424d9690();
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(double *)(param_1 + 0x88) <= dVar15)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  local_88 = local_78;
  local_90 = local_74;
  local_98 = local_70;
  FUN_142501130(dVar15,&local_64,local_68,local_6c);
  dVar15 = (double)FUN_142500e20(local_64,0,1);
  dVar16 = (double)FUN_142500e20(local_64 + 1,0,1);
  sVar1 = *(short *)(param_1 + 0x48);
  sVar2 = *(short *)(param_1 + 0x4a);
  uVar8 = sVar2 + sVar1 + *(short *)(param_1 + 0x4c);
  if ((short)uVar8 < 1) goto LAB_14252e932;
  lVar5 = *(longlong *)(param_1 + 0x60);
  puVar6 = *(undefined4 **)(param_1 + 0x50);
  if (sVar1 < 1) {
    sVar9 = -sVar1;
    if (sVar2 <= sVar9) {
      uVar3 = *(undefined4 *)(lVar5 + (longlong)((short)(sVar9 - sVar2) * 2) * 4);
      uVar4 = *(undefined4 *)(lVar5 + (longlong)((short)(sVar9 - sVar2) * 2 + 1) * 4);
      goto LAB_14252e8eb;
    }
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar9 * 4);
  }
  else {
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
LAB_14252e8eb:
    lVar12 = CONCAT44(uVar3,uVar4);
  }
  dVar17 = (double)lVar12;
  if (dVar17 < dVar16 * 86400.0) {
    dVar15 = dVar15 * 86400.0;
    pbVar7 = *(byte **)(param_1 + 0x78);
    lVar12 = *(longlong *)(param_1 + 0x70);
    if ((((dVar17 < dVar15) || (*(int *)(lVar12 + 4 + (ulonglong)*pbVar7 * 8) == 0)) &&
        ((dVar17 <= dVar15 || (*(int *)(lVar12 + 4) == 0)))) && (uVar8 != 1)) {
      uVar14 = 0x10000;
      iVar13 = 3;
      do {
        if ((longlong)(uVar14 - 0xffff) < (longlong)sVar1) {
          uVar3 = puVar6[iVar13 + -1];
          uVar4 = puVar6[iVar13];
LAB_14252ea02:
          lVar11 = CONCAT44(uVar3,uVar4);
        }
        else {
          sVar9 = -sVar1 + (short)uVar14 + 1;
          if (sVar2 <= sVar9) {
            iVar10 = (int)(short)((-sVar1 - sVar2) + (short)uVar14 + 1);
            uVar3 = *(undefined4 *)(lVar5 + (longlong)(iVar10 * 2) * 4);
            uVar4 = *(undefined4 *)(lVar5 + (longlong)(iVar10 * 2 + 1) * 4);
            goto LAB_14252ea02;
          }
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar9 * 4);
        }
        dVar17 = (double)lVar11;
        if (((dVar16 * 86400.0 <= dVar17) ||
            ((dVar15 <= dVar17 &&
             (*(int *)(lVar12 + 4 + (ulonglong)pbVar7[uVar14 - 0xffff] * 8) != 0)))) ||
           ((dVar15 < dVar17 && (*(int *)(lVar12 + 4 + (ulonglong)pbVar7[uVar14 & 0xffff] * 8) != 0)
            ))) break;
        iVar13 = iVar13 + 2;
        lVar11 = uVar14 - uVar8;
        uVar14 = uVar14 + 1;
      } while (lVar11 != 0xfffe);
    }
  }
LAB_14252e932:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14252ea60 FUN_14252ea60 body=30 status=ok
// SIG undefined FUN_14252ea60(void)

void FUN_14252ea60(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252ea72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))();
    return;
  }
  FUN_1424b8b20(param_1);
  return;
}



// FUNCTION 14252ea80 FUN_14252ea80 body=70 status=ok
// SIG undefined FUN_14252ea80(void)

void FUN_14252ea80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = local_18;
  local_20 = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,local_28,0,local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 14252ead0 FUN_14252ead0 body=408 status=ok
// SIG undefined FUN_14252ead0(void)

ulonglong FUN_14252ead0(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_1 == param_2) goto LAB_14252ec58;
  lVar6 = __RTDynamicCast(param_2,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                          &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if (lVar6 != 0) {
    if (*(longlong *)(param_1 + 0x78) == *(longlong *)(lVar6 + 0x78)) goto LAB_14252ec58;
    if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
      if (*(longlong *)(lVar6 + 0x80) == 0) goto LAB_14252eb92;
    }
    else if ((*(longlong *)(lVar6 + 0x80) != 0) &&
            (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))(), cVar5 != '\0')) {
      if (*(longlong *)(param_1 + 0x80) == 0) {
LAB_14252eb92:
        sVar1 = *(short *)(param_1 + 0x68);
        if (sVar1 == *(short *)(lVar6 + 0x68)) {
          sVar2 = *(short *)(param_1 + 0x48);
          if (sVar2 == *(short *)(lVar6 + 0x48)) {
            sVar3 = *(short *)(param_1 + 0x4a);
            if (sVar3 == *(short *)(lVar6 + 0x4a)) {
              sVar4 = *(short *)(param_1 + 0x4c);
              if ((((sVar4 == *(short *)(lVar6 + 0x4c)) &&
                   (cVar5 = FUN_14252ec70(*(undefined8 *)(param_1 + 0x50),
                                          *(undefined8 *)(lVar6 + 0x50),sVar2 * 8), cVar5 != '\0'))
                  && (cVar5 = FUN_14252ec70(*(undefined8 *)(param_1 + 0x58),
                                            *(undefined8 *)(lVar6 + 0x58),sVar3 * 4), cVar5 != '\0')
                  ) && ((cVar5 = FUN_14252ec70(*(undefined8 *)(param_1 + 0x60),
                                               *(undefined8 *)(lVar6 + 0x60),sVar4 * 8),
                        cVar5 != '\0' &&
                        (cVar5 = FUN_14252ec70(*(undefined8 *)(param_1 + 0x70),
                                               *(undefined8 *)(lVar6 + 0x70),(int)sVar1 << 3),
                        cVar5 != '\0')))) {
                uVar7 = FUN_14252ec70(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar6 + 0x78),
                                      (int)(short)(sVar3 + sVar2 + sVar4));
                return uVar7;
              }
            }
          }
        }
      }
      else if (*(int *)(param_1 + 0x90) == *(int *)(lVar6 + 0x90)) {
        if ((*(double *)(param_1 + 0x88) == *(double *)(lVar6 + 0x88)) &&
           (!NAN(*(double *)(param_1 + 0x88)) && !NAN(*(double *)(lVar6 + 0x88))))
        goto LAB_14252eb92;
      }
    }
  }
  uVar7 = 0;
LAB_14252ec58:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14252ec70 FUN_14252ec70 body=74 status=ok
// SIG undefined FUN_14252ec70(void)

bool FUN_14252ec70(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != (void *)0x0 || param_2 != (void *)0x0) {
    bVar2 = false;
    if (((param_1 == (void *)0x0 || param_2 != (void *)0x0) &&
        (param_1 != (void *)0x0 || param_2 == (void *)0x0)) && (bVar2 = true, param_1 != param_2)) {
      iVar1 = memcmp(param_1,param_2,(longlong)param_3);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}



// FUNCTION 14252ecc0 FUN_14252ecc0 body=1843 status=ok
// SIG undefined FUN_14252ecc0(void)

/* WARNING: Removing unreachable block (ram,0x00014252f312) */

void FUN_14252ecc0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  short sVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  ushort uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined1 local_180 [64];
  undefined1 local_140 [64];
  undefined **local_100;
  undefined2 local_f8;
  undefined1 local_c0 [64];
  ulonglong local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return;
  }
  FUN_14252dea0();
  local_100 = &PTR_FUN_149e18960;
  local_f8 = 2;
  FUN_1424a7c80(&local_100,param_1 + 8);
  FUN_1424a7060(local_140,1,L"(STD)",0xffffffff);
  FUN_1424a66c0(local_180,&local_100,local_140);
  FUN_140859a90(local_140);
  FUN_1424a7060(local_c0,1,L"(DST)",0xffffffff);
  FUN_1424a66c0(local_140,&local_100,local_c0);
  FUN_140859a90(local_c0);
  iVar19 = **(int **)(param_1 + 0x70);
  iVar18 = (*(int **)(param_1 + 0x70))[1];
  lVar7 = thunk_FUN_1424da030(0x50);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *param_2 = 7;
    FUN_14252dea0(param_1);
    goto LAB_14252f3d2;
  }
  puVar15 = local_140;
  if (iVar18 == 0) {
    puVar15 = local_180;
  }
  local_68 = lVar7;
  FUN_1425da4c0(lVar7,puVar15,iVar19 * 1000,iVar18 * 1000);
  *(longlong *)(param_1 + 0xa0) = local_68;
  uVar20 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4c);
  uVar16 = (uint)(short)uVar20;
  uVar21 = (ulonglong)uVar16;
  if (0 < (short)uVar20) {
    *(undefined2 *)(param_1 + 0xb0) = 0;
    uVar11 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x78) + uVar11) != '\0') {
        if (uVar20 != (ushort)uVar11) {
          lVar7 = FUN_1424da030(uVar21 << 3);
          if (lVar7 == 0) {
            *param_2 = 7;
            FUN_14252dea0(param_1);
            goto LAB_14252f3d2;
          }
          local_80 = uVar21;
          if (*(short *)(param_1 + 0x68) < 1) goto LAB_14252f0ae;
          uVar21 = 0;
          goto LAB_14252eec1;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      *(short *)(param_1 + 0xb0) = (short)uVar11;
    } while (uVar20 != uVar11);
  }
  goto LAB_14252f12b;
LAB_14252eec1:
  do {
    sVar3 = *(short *)(param_1 + 0xb0);
    if (sVar3 < (short)uVar20) {
      lVar9 = (longlong)sVar3;
      lVar12 = (longlong)(sVar3 * 2) << 2;
      iVar19 = 0;
      do {
        if (uVar21 == *(byte *)(*(longlong *)(param_1 + 0x78) + lVar9)) {
          sVar3 = *(short *)(param_1 + 0x48);
          if (lVar9 < sVar3) {
            lVar14 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar12),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + lVar12));
          }
          else {
            sVar17 = (short)lVar9 - sVar3;
            if (sVar17 < *(short *)(param_1 + 0x4a)) {
              lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)sVar17 * 4);
            }
            else {
              iVar18 = (int)(short)(((short)lVar9 - *(short *)(param_1 + 0x4a)) - sVar3);
              lVar14 = CONCAT44(*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x60) + (longlong)(iVar18 * 2) * 4),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x60) + (longlong)(iVar18 * 2 + 1) * 4));
            }
          }
          if ((*(longlong *)(param_1 + 0x80) == 0) ||
             ((double)lVar14 * 1000.0 <= *(double *)(param_1 + 0x88))) {
            lVar13 = (longlong)iVar19;
            iVar19 = iVar19 + 1;
            *(double *)(lVar7 + lVar13 * 8) = (double)lVar14 * 1000.0;
          }
        }
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar9 < (short)uVar20);
      if (0 < iVar19) {
        local_78 = *(int *)(*(longlong *)(param_1 + 0x70) + uVar21 * 8) * 1000;
        local_74 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + uVar21 * 8);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          *(short *)(param_1 + 200) = *(short *)(param_1 + 0x68);
          lVar9 = FUN_1424da030((longlong)*(short *)(param_1 + 0x68) << 3);
          *(longlong *)(param_1 + 0xc0) = lVar9;
          if (lVar9 == 0) {
            *param_2 = 7;
            FUN_14252dea0(param_1);
            FUN_1424da110(lVar7);
            goto LAB_14252f3d2;
          }
          if (0 < *(short *)(param_1 + 200)) {
            lVar9 = 0;
            do {
              *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(short *)(param_1 + 200));
          }
        }
        local_68 = thunk_FUN_1424da030(0x160);
        if (local_68 != 0) {
          puVar15 = local_140;
          if (local_74 == 0) {
            puVar15 = local_180;
          }
          FUN_1425dafe0(local_68,puVar15,local_78,local_74 * 1000,lVar7,iVar19,2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar21 * 8) = local_68;
        if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar21 * 8) == 0) {
          *param_2 = 7;
          FUN_14252dea0(param_1);
          goto LAB_14252f3d2;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while ((longlong)uVar21 < (longlong)*(short *)(param_1 + 0x68));
LAB_14252f0ae:
  FUN_1424da110(lVar7);
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x78) + (longlong)*(short *)(param_1 + 0xb0));
  lVar7 = thunk_FUN_1424da030(0x20);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *param_2 = 7;
    FUN_14252dea0(param_1);
    goto LAB_14252f3d2;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)bVar2 * 8);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar22 = FUN_14252f780(param_1,*(undefined2 *)(param_1 + 0xb0));
  local_68 = lVar7;
  FUN_14257c070(lVar7,uVar22,uVar10,uVar1);
  *(longlong *)(param_1 + 0xa8) = local_68;
  uVar16 = (uint)local_80;
LAB_14252f12b:
  if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) goto LAB_14252f3d2;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  local_70 = uVar1;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x40))();
  pcVar4 = *(code **)(**(longlong **)(param_1 + 0x80) + 0x58);
  if (cVar5 == '\0') {
    lVar7 = (*pcVar4)();
    *(longlong *)(param_1 + 0xd0) = lVar7;
    if (lVar7 == 0) {
      *param_2 = 7;
      FUN_14252dea0(param_1);
      goto LAB_14252f3d2;
    }
    FUN_1424a7c80(&local_100,*(longlong *)(param_1 + 0x80) + 8);
    lVar7 = thunk_FUN_1424da030(0x160);
    if (lVar7 == 0) {
      *param_2 = 7;
      FUN_14252dea0(param_1);
      goto LAB_14252f3d2;
    }
    local_68 = lVar7;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
    FUN_1425dafe0(local_68,&local_100,uVar6,0,&local_70,1,2);
    lVar7 = local_68;
    if (0 < (short)uVar20) goto LAB_14252f1ea;
    goto LAB_14252f204;
  }
  lVar7 = (*pcVar4)();
  *(longlong *)(param_1 + 0xd0) = lVar7;
  if (lVar7 == 0) {
    *param_2 = 7;
    FUN_14252dea0(param_1);
    goto LAB_14252f3d2;
  }
  FUN_14251ff90(lVar7,*(undefined4 *)(param_1 + 0x90));
  FUN_14257c0f0(local_c0);
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x68))
            (*(longlong **)(param_1 + 0xd0),uVar1,0,local_c0);
  plVar8 = (longlong *)FUN_14257c2d0(local_c0);
  lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (lVar7 == 0) {
    *param_2 = 7;
    FUN_14252dea0(param_1);
    FUN_14257c110(local_c0);
    goto LAB_14252f3d2;
  }
  local_70 = FUN_14257c2c0(local_c0);
  FUN_14257c110(local_c0);
  if ((short)uVar20 < 1) {
LAB_14252f204:
    plVar8 = *(longlong **)(param_1 + 0xa0);
  }
  else {
LAB_14252f1ea:
    plVar8 = *(longlong **)
              (*(longlong *)(param_1 + 0xc0) +
              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar16 - 1)) * 8);
    if (plVar8 == (longlong *)0x0) goto LAB_14252f204;
  }
  lVar9 = thunk_FUN_1424da030(0x20);
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *param_2 = 7;
    FUN_14252dea0(param_1);
  }
  else {
    local_68 = lVar9;
    FUN_14257c0f0(lVar9);
    *(longlong *)(param_1 + 0xb8) = local_68;
    FUN_14257c250(local_68,local_70);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_14257c260(uVar1,uVar10);
    FUN_14257c290(*(undefined8 *)(param_1 + 0xb8),lVar7);
  }
LAB_14252f3d2:
  FUN_140859a90(local_140);
  FUN_140859a90(local_180);
  FUN_140859a90(&local_100);
  return;
}



// FUNCTION 14252f410 Unwind@14252f410 body=66 status=ok
// SIG undefined Unwind@14252f410(void)

void Unwind_14252f410(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 14252f460 Unwind@14252f460 body=66 status=ok
// SIG undefined Unwind@14252f460(void)

void Unwind_14252f460(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 14252f4b0 Unwind@14252f4b0 body=69 status=ok
// SIG undefined Unwind@14252f4b0(void)

void Unwind_14252f4b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 14252f500 Unwind@14252f500 body=68 status=ok
// SIG undefined Unwind@14252f500(void)

void Unwind_14252f500(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 14252f550 Unwind@14252f550 body=68 status=ok
// SIG undefined Unwind@14252f550(void)

void Unwind_14252f550(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 14252f5a0 Unwind@14252f5a0 body=66 status=ok
// SIG undefined Unwind@14252f5a0(void)

void Unwind_14252f5a0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0xf8);
  return;
}



// FUNCTION 14252f5f0 Unwind@14252f5f0 body=69 status=ok
// SIG undefined Unwind@14252f5f0(void)

void Unwind_14252f5f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 14252f640 Unwind@14252f640 body=69 status=ok
// SIG undefined Unwind@14252f640(void)

void Unwind_14252f640(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x150));
  return;
}



// FUNCTION 14252f690 Unwind@14252f690 body=66 status=ok
// SIG undefined Unwind@14252f690(void)

void Unwind_14252f690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 14252f6e0 Unwind@14252f6e0 body=66 status=ok
// SIG undefined Unwind@14252f6e0(void)

void Unwind_14252f6e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14252f730 Unwind@14252f730 body=65 status=ok
// SIG undefined Unwind@14252f730(void)

void Unwind_14252f730(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 14252f780 FUN_14252f780 body=120 status=ok
// SIG undefined FUN_14252f780(void)

double FUN_14252f780(longlong param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 < *(short *)(param_1 + 0x48)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)(param_2 * 2) * 4);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)(param_2 * 2 + 1) * 4);
  }
  else {
    param_2 = param_2 - *(short *)(param_1 + 0x48);
    if (param_2 < *(short *)(param_1 + 0x4a)) {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 4);
      goto LAB_14252f7ea;
    }
    iVar4 = (int)(short)(param_2 - *(short *)(param_1 + 0x4a));
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)(iVar4 * 2) * 4);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)(iVar4 * 2 + 1) * 4);
  }
  lVar3 = CONCAT44(uVar1,uVar2);
LAB_14252f7ea:
  return (double)lVar3 * 1000.0;
}



// FUNCTION 14252f800 FUN_14252f800 body=1071 status=ok
// SIG undefined FUN_14252f800(void)

ulonglong FUN_14252f800(longlong *param_1,double param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  short sVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined7 uVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  double dVar21;
  undefined **local_100;
  ushort local_f8;
  int local_f4;
  undefined **local_c0;
  short local_b8;
  int local_b4;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_64 = 0;
  if ((int)param_1[0x1b] == 2) {
LAB_14252f883:
    iVar14 = local_64;
    if (*(int *)((longlong)param_1 + 0xdc) < 1) goto joined_r0x00014252f897;
  }
  else {
    cVar7 = FUN_142501800(param_1 + 0x1b);
    if (cVar7 == '\0') goto LAB_14252f883;
    FUN_14252ecc0(param_1,&local_64);
    iVar14 = local_64;
    *(int *)((longlong)param_1 + 0xdc) = local_64;
    FUN_1425019c0(param_1 + 0x1b);
joined_r0x00014252f897:
    if (iVar14 < 1) {
      uVar13 = (undefined7)((ulonglong)param_1 >> 8);
      if (param_1[0x10] == 0) {
LAB_14252f8e1:
        lVar12 = param_1[0x18];
        if (lVar12 == 0) goto LAB_14252fa6a;
        iVar14 = *(int *)((longlong)param_1 + 0x4c);
        sVar1 = *(short *)((longlong)param_1 + 0x4a);
        sVar6 = (short)(int)param_1[9];
        iVar17 = (short)(sVar1 + sVar6 + (short)iVar14) + -1;
        iVar18 = (int)(short)iVar17;
        if ((short)param_1[0x16] <= (short)iVar17) {
          local_78 = param_1[0xc];
          lVar19 = param_1[10];
          local_70 = param_1[0xb];
          iVar15 = iVar17;
          do {
            iVar14 = iVar14 + -1;
            if ((short)iVar15 < sVar6) {
              uVar2 = *(undefined4 *)(lVar19 + (longlong)(iVar18 * 2) * 4);
              uVar3 = *(undefined4 *)(lVar19 + (longlong)(iVar18 * 2 + 1) * 4);
LAB_14252f9ba:
              lVar9 = CONCAT44(uVar2,uVar3);
            }
            else {
              sVar16 = (short)iVar14;
              if (sVar1 <= (short)(sVar1 + sVar16)) {
                uVar2 = *(undefined4 *)(local_78 + (longlong)(sVar16 * 2) * 4);
                uVar3 = *(undefined4 *)(local_78 + (longlong)(sVar16 * 2 + 1) * 4);
                goto LAB_14252f9ba;
              }
              lVar9 = (longlong)*(int *)(local_70 + (longlong)(short)(sVar1 + sVar16) * 4);
            }
            local_80 = lVar12;
            if (((double)lVar9 * 1000.0 < param_2) ||
               ((char)param_3 == '\0' && (double)lVar9 * 1000.0 == param_2)) {
              if (iVar17 == iVar18) goto LAB_14252fa51;
              sVar16 = (short)iVar18 + 1;
              plVar4 = *(longlong **)
                        (lVar12 + (ulonglong)*(byte *)(param_1[0xf] + (longlong)(short)iVar15) * 8);
              if (sVar16 < sVar6) {
                uVar2 = *(undefined4 *)(lVar19 + (longlong)(sVar16 * 2) * 4);
                uVar3 = *(undefined4 *)(lVar19 + (longlong)(sVar16 * 2 + 1) * 4);
LAB_14252fb0a:
                lVar19 = CONCAT44(uVar2,uVar3);
              }
              else {
                sVar16 = sVar16 - sVar6;
                if (sVar1 <= sVar16) {
                  uVar2 = *(undefined4 *)(local_78 + (longlong)((short)(sVar16 - sVar1) * 2) * 4);
                  uVar3 = *(undefined4 *)
                           (local_78 + (longlong)((short)(sVar16 - sVar1) * 2 + 1) * 4);
                  goto LAB_14252fb0a;
                }
                lVar19 = (longlong)*(int *)(local_70 + (longlong)sVar16 * 4);
              }
              plVar5 = *(longlong **)
                        (lVar12 + (ulonglong)*(byte *)(param_1[0xf] + 1 + (longlong)iVar18) * 8);
              local_100 = &PTR_FUN_149e18960;
              local_f8 = 2;
              local_c0 = &PTR_FUN_149e18960;
              local_b8 = 2;
              FUN_1425da410(plVar4,&local_100);
              FUN_1425da410(plVar5,&local_c0);
              if ((local_f8 & 1) == 0) {
                if (-1 < (short)local_f8) {
                  local_f4 = (int)(short)local_f8 >> 5;
                }
                if (-1 < local_b8) {
                  local_b4 = (int)local_b8 >> 5;
                }
                if ((((int)local_b8 & 1U) == 0) && (local_f4 == local_b4)) {
                  cVar7 = FUN_1412ae090(&local_100,&local_c0);
                  bVar20 = cVar7 != '\0';
                  goto LAB_14252fba2;
                }
LAB_14252fbed:
                FUN_14257c250(param_4,(double)lVar19 * 1000.0);
                uVar11 = (**(code **)(*plVar4 + 0x10))(plVar4);
                FUN_14257c260(param_4,uVar11);
                uVar11 = (**(code **)(*plVar5 + 0x10))(plVar5);
                uVar10 = CONCAT71(uVar13,1);
                FUN_14257c290(param_4,uVar11);
              }
              else {
                bVar20 = (bool)((byte)local_b8 & 1);
LAB_14252fba2:
                if (bVar20 == false) goto LAB_14252fbed;
                iVar14 = FUN_1425da430(plVar4);
                iVar17 = FUN_1425da430(plVar5);
                if (iVar14 != iVar17) goto LAB_14252fbed;
                iVar14 = FUN_1425da440(plVar4);
                iVar17 = FUN_1425da440(plVar5);
                if (iVar14 != iVar17) goto LAB_14252fbed;
                uVar8 = (**(code **)(*param_1 + 0x68))(param_1,(double)lVar19 * 1000.0,0,param_4);
                uVar10 = (ulonglong)uVar8;
              }
              FUN_140859a90(&local_c0);
              FUN_140859a90(&local_100);
              goto LAB_14252fa6c;
            }
            iVar15 = iVar15 + -1;
            iVar18 = (int)(short)iVar15;
          } while ((short)param_1[0x16] <= (short)iVar15);
        }
        if (iVar17 == iVar18) {
LAB_14252fa51:
          lVar12 = param_1[0x17];
          if (lVar12 == 0) goto LAB_14252fa6a;
        }
        else {
          lVar12 = param_1[0x15];
        }
      }
      else {
        if ((char)param_3 == '\0') {
LAB_14252f8cb:
          dVar21 = (double)FUN_14257c2c0(param_1[0x17]);
          if (dVar21 <= param_2) {
            cVar7 = (**(code **)(*(longlong *)param_1[0x10] + 0x40))();
            if (cVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014252fa49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (**(code **)(*(longlong *)param_1[0x1a] + 0x68))
                                 ((longlong *)param_1[0x1a],param_2,param_3,param_4);
              return uVar10;
            }
            goto LAB_14252fa6a;
          }
          goto LAB_14252f8e1;
        }
        dVar21 = (double)FUN_14257c2c0(param_1[0x17]);
        if ((dVar21 != param_2) || (NAN(dVar21) || NAN(param_2))) goto LAB_14252f8cb;
        lVar12 = param_1[0x17];
      }
      FUN_14257c160(param_4,lVar12);
      uVar10 = CONCAT71(uVar13,1);
      goto LAB_14252fa6c;
    }
  }
LAB_14252fa6a:
  uVar10 = 0;
LAB_14252fa6c:
  return uVar10 & 0xffffffff;
}



// FUNCTION 14252fc40 Unwind@14252fc40 body=74 status=ok
// SIG undefined Unwind@14252fc40(void)

void Unwind_14252fc40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14252fc90 FUN_14252fc90 body=1036 status=ok
// SIG undefined FUN_14252fc90(void)

ulonglong FUN_14252fc90(longlong *param_1,double param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  short sVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  short sVar16;
  undefined7 uVar17;
  longlong lVar18;
  short sVar19;
  bool bVar20;
  double dVar21;
  undefined **local_f8;
  ushort local_f0;
  int local_ec;
  undefined **local_b8;
  short local_b0;
  int local_ac;
  longlong local_78;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_64 = 0;
  if ((int)param_1[0x1b] == 2) {
LAB_14252fd13:
    iVar10 = local_64;
    if (*(int *)((longlong)param_1 + 0xdc) < 1) goto joined_r0x00014252fd27;
  }
  else {
    cVar8 = FUN_142501800(param_1 + 0x1b);
    if (cVar8 == '\0') goto LAB_14252fd13;
    FUN_14252ecc0(param_1,&local_64);
    iVar10 = local_64;
    *(int *)((longlong)param_1 + 0xdc) = local_64;
    FUN_1425019c0(param_1 + 0x1b);
joined_r0x00014252fd27:
    if (iVar10 < 1) {
      uVar17 = (undefined7)((ulonglong)param_1 >> 8);
      if (param_1[0x10] != 0) {
        if ((char)param_3 == '\0') {
LAB_14252fd53:
          dVar21 = (double)FUN_14257c2c0(param_1[0x17]);
          if (param_2 <= dVar21) goto LAB_14252fdac;
          cVar8 = (**(code **)(*(longlong *)param_1[0x10] + 0x40))();
          if (cVar8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014252fda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar13 = (**(code **)(*(longlong *)param_1[0x1a] + 0x70))
                               ((longlong *)param_1[0x1a],param_2,param_3,param_4);
            return uVar13;
          }
        }
        else {
          dVar21 = (double)FUN_14257c2c0(param_1[0x17]);
          if ((dVar21 != param_2) || (NAN(dVar21) || NAN(param_2))) goto LAB_14252fd53;
        }
        lVar18 = param_1[0x17];
LAB_14252feeb:
        FUN_14257c160(param_4,lVar18);
        uVar13 = CONCAT71(uVar17,1);
        goto LAB_14252feca;
      }
LAB_14252fdac:
      local_78 = param_1[0x18];
      if (local_78 == 0) goto LAB_14252fec8;
      sVar1 = *(short *)((longlong)param_1 + 0x4a);
      sVar16 = *(short *)((longlong)param_1 + 0x4c);
      lVar18 = param_1[0xc];
      local_70 = param_1[0xb];
      lVar4 = param_1[10];
      sVar7 = (short)(int)param_1[9];
      do {
        sVar19 = sVar1 + sVar7 + sVar16 + -1;
        if (sVar19 < (short)param_1[0x16]) goto LAB_14252fec8;
        if (sVar19 < sVar7) {
          uVar2 = *(undefined4 *)(lVar4 + (longlong)(sVar19 * 2) * 4);
          uVar3 = *(undefined4 *)(lVar4 + (longlong)(sVar19 * 2 + 1) * 4);
LAB_14252fe7f:
          lVar14 = CONCAT44(uVar2,uVar3);
        }
        else {
          sVar9 = sVar1 + sVar16 + -1;
          if (sVar1 <= sVar9) {
            uVar2 = *(undefined4 *)(lVar18 + (longlong)((short)(sVar16 + -1) * 2) * 4);
            uVar3 = *(undefined4 *)(lVar18 + (longlong)((short)(sVar16 + -1) * 2 + 1) * 4);
            goto LAB_14252fe7f;
          }
          lVar14 = (longlong)*(int *)(local_70 + (longlong)sVar9 * 4);
        }
        sVar16 = sVar16 + -1;
      } while ((param_2 <= (double)lVar14 * 1000.0) &&
              ((char)param_3 == '\0' || (double)lVar14 * 1000.0 != param_2));
      if ((short)(((short)param_1[0x16] - sVar1) - sVar7) == sVar16) {
        lVar18 = param_1[0x15];
        goto LAB_14252feeb;
      }
      sVar9 = sVar1 + sVar7 + sVar16;
      plVar5 = *(longlong **)
                (local_78 + (ulonglong)*(byte *)(param_1[0xf] + -1 + (longlong)sVar9) * 8);
      if (sVar19 < sVar7) {
        lVar18 = CONCAT44(*(undefined4 *)(lVar4 + (longlong)(sVar9 * 2) * 4),
                          *(undefined4 *)(lVar4 + (longlong)(sVar9 * 2 + 1) * 4));
      }
      else if ((short)(sVar1 + sVar16) < sVar1) {
        lVar18 = (longlong)*(int *)(local_70 + (longlong)(short)(sVar1 + sVar16) * 4);
      }
      else {
        lVar18 = CONCAT44(*(undefined4 *)(lVar18 + (longlong)(sVar16 * 2) * 4),
                          *(undefined4 *)(lVar18 + (longlong)(sVar16 * 2 + 1) * 4));
      }
      plVar6 = *(longlong **)(local_78 + (ulonglong)*(byte *)(param_1[0xf] + (longlong)sVar9) * 8);
      local_f8 = &PTR_FUN_149e18960;
      local_f0 = 2;
      local_b8 = &PTR_FUN_149e18960;
      local_b0 = 2;
      FUN_1425da410(plVar5,&local_f8);
      FUN_1425da410(plVar6,&local_b8);
      if ((local_f0 & 1) == 0) {
        if (-1 < (short)local_f0) {
          local_ec = (int)(short)local_f0 >> 5;
        }
        if (-1 < local_b0) {
          local_ac = (int)local_b0 >> 5;
        }
        if ((((int)local_b0 & 1U) == 0) && (local_ec == local_ac)) {
          cVar8 = FUN_1412ae090(&local_f8,&local_b8);
          bVar20 = cVar8 != '\0';
          goto LAB_142530010;
        }
LAB_14253005b:
        FUN_14257c250(param_4,(double)lVar18 * 1000.0);
        uVar15 = (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_14257c260(param_4,uVar15);
        uVar15 = (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar13 = CONCAT71(uVar17,1);
        FUN_14257c290(param_4,uVar15);
      }
      else {
        bVar20 = (bool)((byte)local_b0 & 1);
LAB_142530010:
        if (bVar20 == false) goto LAB_14253005b;
        iVar10 = FUN_1425da430(plVar5);
        iVar11 = FUN_1425da430(plVar6);
        if (iVar10 != iVar11) goto LAB_14253005b;
        iVar10 = FUN_1425da440(plVar5);
        iVar11 = FUN_1425da440(plVar6);
        if (iVar10 != iVar11) goto LAB_14253005b;
        uVar12 = (**(code **)(*param_1 + 0x70))(param_1,(double)lVar18 * 1000.0,0,param_4);
        uVar13 = (ulonglong)uVar12;
      }
      FUN_140859a90(&local_b8);
      FUN_140859a90(&local_f8);
      goto LAB_14252feca;
    }
  }
LAB_14252fec8:
  uVar13 = 0;
LAB_14252feca:
  return uVar13 & 0xffffffff;
}



// FUNCTION 1425300b0 Unwind@1425300b0 body=74 status=ok
// SIG undefined Unwind@1425300b0(void)

void Unwind_1425300b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142530100 FUN_142530100 body=361 status=ok
// SIG undefined FUN_142530100(void)

int FUN_142530100(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (0 < *param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xd8) == 2) {
LAB_142530157:
    if (0 < *(int *)(param_1 + 0xdc)) {
      *param_2 = *(int *)(param_1 + 0xdc);
      return 0;
    }
  }
  else {
    cVar5 = FUN_142501800(param_1 + 0xd8);
    if (cVar5 == '\0') goto LAB_142530157;
    FUN_14252ecc0(param_1);
    *(int *)(param_1 + 0xdc) = *param_2;
    FUN_1425019c0(param_1 + 0xd8);
  }
  if (0 < *param_2) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xc0);
  iVar7 = 0;
  if (lVar4 != 0) {
    uVar3 = *(ushort *)(param_1 + 200);
    if (0 < (short)uVar3) {
      if (uVar3 < 4) {
        uVar6 = 0;
        iVar7 = 0;
      }
      else {
        uVar6 = (ulonglong)(uVar3 & 0xfffffffc);
        lVar8 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar7 = 0;
        iVar9 = 0;
        do {
          piVar1 = (int *)(lVar4 + lVar8);
          piVar2 = (int *)(lVar4 + 0x10 + lVar8);
          iVar10 = (iVar10 - (uint)(*piVar1 == 0 && piVar1[1] == 0)) + 1;
          iVar11 = (iVar11 - (uint)(piVar1[2] == 0 && piVar1[3] == 0)) + 1;
          iVar7 = (iVar7 - (uint)(*piVar2 == 0 && piVar2[1] == 0)) + 1;
          iVar9 = (iVar9 - (uint)(piVar2[2] == 0 && piVar2[3] == 0)) + 1;
          lVar8 = lVar8 + 0x20;
        } while ((ulonglong)(uVar3 >> 2) << 5 != lVar8);
        iVar7 = iVar9 + iVar11 + iVar7 + iVar10;
        if (uVar6 == uVar3) goto LAB_142530240;
      }
      do {
        iVar7 = (iVar7 + 1) - (uint)(*(longlong *)(lVar4 + uVar6 * 8) == 0);
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
LAB_142530240:
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x40))();
    if (cVar5 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = iVar7 + 2;
    }
  }
  return iVar7;
}



// FUNCTION 142530270 FUN_142530270 body=320 status=ok
// SIG undefined FUN_142530270(void)

void FUN_142530270(longlong param_1,undefined8 *param_2,longlong param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_4c;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *param_5) goto LAB_1425303a3;
  if (*(int *)(param_1 + 0xd8) == 2) {
LAB_1425302e6:
    if (0 < *(int *)(param_1 + 0xdc)) {
      *param_5 = *(int *)(param_1 + 0xdc);
      goto LAB_1425303a3;
    }
  }
  else {
    cVar3 = FUN_142501800();
    if (cVar3 == '\0') goto LAB_1425302e6;
    FUN_14252ecc0(param_1,param_5);
    *(int *)(param_1 + 0xdc) = *param_5;
    FUN_1425019c0();
  }
  if (*param_5 < 1) {
    *param_2 = *(undefined8 *)(param_1 + 0xa0);
    iVar4 = *param_4;
    iVar8 = 0;
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (iVar8 = 0, 0 < iVar4)) {
      sVar7 = *(short *)(param_1 + 200);
      if (0 < sVar7) {
        lVar6 = 0;
        iVar8 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar6 * 8);
          if (lVar1 != 0) {
            lVar5 = (longlong)iVar8;
            iVar8 = iVar8 + 1;
            *(longlong *)(param_3 + lVar5 * 8) = lVar1;
            iVar4 = *param_4;
            if (iVar4 <= iVar8) break;
            sVar7 = *(short *)(param_1 + 200);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < sVar7);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if ((plVar2 != (longlong *)0x0) && (iVar4 - iVar8 != 0 && iVar8 <= iVar4)) {
      local_58 = param_5;
      local_4c = iVar4 - iVar8;
      (**(code **)(*plVar2 + 0x88))(plVar2,local_48,param_3 + (longlong)iVar8 * 8,&local_4c);
      if (0 < *param_5) goto LAB_1425303a3;
      iVar8 = iVar8 + local_4c;
    }
    *param_4 = iVar8;
  }
LAB_1425303a3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425303c0 FUN_1425303c0 body=93 status=ok
// SIG undefined FUN_1425303c0(void)

undefined8 * FUN_1425303c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::OlsonTimeZone::vftable;
  FUN_14252dea0();
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b72e0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142530420 Unwind@142530420 body=21 status=ok
// SIG undefined Unwind@142530420(void)

void Unwind_142530420(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142530440 FUN_142530440 body=8 status=ok
// SIG undefined FUN_142530440(void)

undefined * FUN_142530440(void)

{
  return &DAT_14c792f88;
}



// FUNCTION 142530450 FUN_142530450 body=259 status=ok
// SIG undefined FUN_142530450(void)

void FUN_142530450(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  memcpy((void *)(param_1 + 0x148),&DAT_1499dccd0,0x90);
  if (*param_2 < 1) {
    FUN_14250ef60((void *)(param_1 + 0x148),0,0,param_2);
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 != 0) {
      FUN_1425e46a0(lVar1,param_1,param_2);
    }
    *(longlong *)(param_1 + 0x1f0) = lVar1;
    lVar1 = thunk_FUN_1424da030(0x340);
    if (lVar1 != 0) {
      FUN_1425e4b50(lVar1,param_1,param_2);
    }
    *(longlong *)(param_1 + 0x1e8) = lVar1;
    if ((*param_2 < 1) && ((lVar1 == 0 || (*(longlong *)(param_1 + 0x1f0) == 0)))) {
      *param_2 = 7;
    }
  }
  return;
}



// FUNCTION 142530560 Unwind@142530560 body=36 status=ok
// SIG undefined Unwind@142530560(void)

void Unwind_142530560(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142530590 Unwind@142530590 body=36 status=ok
// SIG undefined Unwind@142530590(void)

void Unwind_142530590(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425305c0 FUN_1425305c0 body=197 status=ok
// SIG undefined FUN_1425305c0(void)

void FUN_1425305c0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  undefined **local_80;
  undefined2 local_78;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424ba440();
  *param_1 = icu_64::RuleBasedBreakIterator::vftable;
  local_40 = param_1 + 0x43;
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  local_30 = param_1;
  FUN_1424a5840(local_40,&local_80);
  FUN_140859a90(&local_80);
  FUN_142530450(local_30,param_3);
  local_38 = thunk_FUN_1424da030(0x90);
  if (local_38 == 0) {
    local_30[0x3b] = 0;
    if (*param_3 < 1) {
      *param_3 = 7;
    }
  }
  else {
    FUN_1425e44e0(local_38,param_2,param_3);
    local_30[0x3b] = local_38;
  }
  return;
}



// FUNCTION 142530690 Unwind@142530690 body=39 status=ok
// SIG undefined Unwind@142530690(void)

void Unwind_142530690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425306c0 Unwind@1425306c0 body=39 status=ok
// SIG undefined Unwind@1425306c0(void)

void Unwind_1425306c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1425306f0 Unwind@1425306f0 body=39 status=ok
// SIG undefined Unwind@1425306f0(void)

void Unwind_1425306f0(undefined8 param_1,longlong param_2)

{
  FUN_1424a5910(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 142530720 Unwind@142530720 body=39 status=ok
// SIG undefined Unwind@142530720(void)

void Unwind_142530720(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 142530750 FUN_142530750 body=357 status=ok
// SIG undefined FUN_142530750(void)

void FUN_142530750(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    FUN_1424ba4c0(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    local_2c = 0;
    local_38 = &local_2c;
    FUN_14250ebe0(param_1 + 0x148,param_2 + 0x148,0,1);
    puVar2 = *(undefined8 **)(param_1 + 0x210);
    puVar1 = (undefined8 *)(param_1 + 0x218);
    if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 **)(param_1 + 0x210) = puVar1;
    plVar3 = *(longlong **)(param_2 + 0x210);
    if ((plVar3 != (longlong *)0x0) && (plVar3 != (longlong *)(param_2 + 0x218))) {
      uVar4 = (**(code **)(*plVar3 + 0x38))();
      *(undefined8 *)(param_1 + 0x210) = uVar4;
    }
    FUN_1424a5940(puVar1,(longlong *)(param_2 + 0x218));
    if (*(longlong *)(param_1 + 0x210) == 0) {
      *(undefined8 **)(param_1 + 0x210) = puVar1;
    }
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      FUN_1425e4620();
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    if (*(longlong *)(param_2 + 0x1d8) != 0) {
      uVar4 = FUN_1425e4680();
      *(undefined8 *)(param_1 + 0x1d8) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
    *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
    FUN_1425e4ba0(*(undefined8 *)(param_1 + 0x1e8));
    FUN_1425e46e0(*(undefined8 *)(param_1 + 0x1f0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425308d0 FUN_1425308d0 body=144 status=ok
// SIG undefined FUN_1425308d0(void)

undefined8 * FUN_1425308d0(undefined8 *param_1,undefined8 param_2)

{
  undefined **local_70;
  undefined2 local_68;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424ba460();
  *param_1 = icu_64::RuleBasedBreakIterator::vftable;
  local_30 = param_1 + 0x43;
  local_70 = &PTR_FUN_149e18960;
  local_68 = 2;
  local_28 = param_1;
  FUN_1424a5840(local_30,&local_70);
  FUN_140859a90(&local_70);
  local_70 = (undefined **)((ulonglong)local_70 & 0xffffffff00000000);
  FUN_142530450(local_28,&local_70);
  FUN_142530750(local_28,param_2);
  return local_28;
}



// FUNCTION 142530960 Unwind@142530960 body=37 status=ok
// SIG undefined Unwind@142530960(void)

void Unwind_142530960(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142530990 Unwind@142530990 body=37 status=ok
// SIG undefined Unwind@142530990(void)

void Unwind_142530990(undefined8 param_1,longlong param_2)

{
  FUN_1424a5910(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1425309c0 Unwind@1425309c0 body=37 status=ok
// SIG undefined Unwind@1425309c0(void)

void Unwind_1425309c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1425309f0 FUN_1425309f0 body=281 status=ok
// SIG undefined FUN_1425309f0(void)

void FUN_1425309f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = icu_64::RuleBasedBreakIterator::vftable;
  puVar1 = (undefined8 *)param_1[0x42];
  if ((puVar1 != param_1 + 0x43) && (puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  param_1[0x42] = 0;
  FUN_14250edb0(param_1 + 0x29);
  if (param_1[0x3b] != 0) {
    FUN_1425e4620();
    param_1[0x3b] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x3d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x3d] = 0;
  lVar2 = param_1[0x3e];
  if (lVar2 != 0) {
    FUN_1425e46d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  param_1[0x3e] = 0;
  puVar1 = (undefined8 *)param_1[0x3f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x3f] = 0;
  puVar1 = (undefined8 *)param_1[0x40];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x40] = 0;
  FUN_1424a5910(param_1 + 0x43);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142530b10 Unwind@142530b10 body=22 status=ok
// SIG undefined Unwind@142530b10(void)

void Unwind_142530b10(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142530b30 FUN_142530b30 body=64 status=ok
// SIG undefined FUN_142530b30(void)

longlong FUN_142530b30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x280);
  if (lVar1 != 0) {
    FUN_1425308d0(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 142530b70 Unwind@142530b70 body=32 status=ok
// SIG undefined Unwind@142530b70(void)

void Unwind_142530b70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142530b90 FUN_142530b90 body=175 status=ok
// SIG undefined FUN_142530b90(void)

ulonglong FUN_142530b90(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = __RTtypeid();
  lVar4 = __RTtypeid(param_2);
  iVar2 = __std_type_info_compare(lVar3 + 8,lVar4 + 8);
  if (iVar2 == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)(lVar3 + 8) >> 8),1);
    if (param_1 == param_2) goto LAB_142530bc3;
    cVar1 = FUN_14250eb30(param_1 + 0x148,param_2 + 0x148);
    if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x1e0) == *(int *)(param_2 + 0x1e0))) &&
        (*(int *)(param_1 + 0x1e4) == *(int *)(param_2 + 0x1e4))) &&
       (*(char *)(param_1 + 0x278) == *(char *)(param_2 + 0x278))) {
      if ((*(longlong *)(param_2 + 0x1d8) == *(longlong *)(param_1 + 0x1d8)) ||
         (((*(longlong *)(param_2 + 0x1d8) != 0 && (*(longlong *)(param_1 + 0x1d8) != 0)) &&
          (cVar1 = FUN_1425e45e0(), cVar1 != '\0')))) goto LAB_142530bc3;
    }
  }
  uVar5 = 0;
LAB_142530bc3:
  return uVar5 & 0xffffffff;
}



// FUNCTION 142530c40 FUN_142530c40 body=26 status=ok
// SIG undefined FUN_142530c40(void)

undefined4 FUN_142530c40(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x1d8) == (longlong *)0x0) {
    return 0;
  }
  return *(undefined4 *)(**(longlong **)(param_1 + 0x1d8) + 0x14);
}



// FUNCTION 142530c60 FUN_142530c60 body=193 status=ok
// SIG undefined FUN_142530c60(void)

void FUN_142530c60(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined **local_68;
  undefined2 local_60;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    FUN_1425e4ba0(param_1[0x3d],0,0);
    FUN_1425e46e0(param_1[0x3e]);
    FUN_14250ebe0(param_1 + 0x29,param_2,0,1,param_3);
    plVar1 = param_1 + 0x43;
    local_68 = &PTR_FUN_149e18960;
    local_60 = 2;
    FUN_1424a5b10(plVar1,&local_68);
    FUN_140859a90(&local_68);
    plVar2 = (longlong *)param_1[0x42];
    if ((plVar2 != plVar1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)*plVar2)(plVar2,1);
    }
    param_1[0x42] = (longlong)plVar1;
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}



// FUNCTION 142530d30 Unwind@142530d30 body=36 status=ok
// SIG undefined Unwind@142530d30(void)

void Unwind_142530d30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142530d60 FUN_142530d60 body=39 status=ok
// SIG undefined FUN_142530d60(void)

void FUN_142530d60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14250ebe0(param_2,param_1 + 0x148,0,1,param_3);
  return;
}



// FUNCTION 142530d90 FUN_142530d90 body=8 status=ok
// SIG undefined FUN_142530d90(void)

undefined8 FUN_142530d90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



// FUNCTION 142530da0 FUN_142530da0 body=182 status=ok
// SIG undefined FUN_142530da0(void)

void FUN_142530da0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)param_1[0x42];
  if ((plVar1 != param_1 + 0x43) && (plVar1 != (longlong *)0x0)) {
    (**(code **)*plVar1)(plVar1,1);
  }
  param_1[0x42] = param_2;
  local_1c = 0;
  FUN_1425e4ba0(param_1[0x3d],0,0);
  FUN_1425e46e0(param_1[0x3e]);
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) != 0)) {
    FUN_14250ef60(param_1 + 0x29,0,0,&local_1c);
  }
  else {
    FUN_14250f010(param_1 + 0x29,param_2,&local_1c);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142530e60 FUN_142530e60 body=159 status=ok
// SIG undefined FUN_142530e60(void)

void FUN_142530e60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_1425e4ba0(param_1[0x3d],0,0);
  FUN_1425e46e0(param_1[0x3e]);
  FUN_14250ee60(param_1 + 0x29,param_2,&local_24);
  plVar1 = param_1 + 0x43;
  FUN_1424a5b10(plVar1,param_2);
  plVar2 = (longlong *)param_1[0x42];
  if ((plVar2 != plVar1) && (plVar2 != (longlong *)0x0)) {
    (**(code **)*plVar2)(plVar2,1);
  }
  param_1[0x42] = (longlong)plVar1;
  (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142530f10 FUN_142530f10 body=121 status=ok
// SIG undefined FUN_142530f10(void)

longlong FUN_142530f10(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *param_3) {
    return param_1;
  }
  if (param_2 != 0) {
    lVar2 = param_1 + 0x148;
    lVar1 = FUN_14250e6e0(lVar2);
    FUN_14250ebe0(lVar2,param_2,0,1,param_3);
    if (0 < *param_3) {
      return param_1;
    }
    FUN_14250e700(lVar2,lVar1);
    lVar2 = FUN_14250e6e0(lVar2);
    if (lVar2 == lVar1) {
      return param_1;
    }
  }
  *param_3 = 1;
  return param_1;
}



// FUNCTION 142530f90 FUN_142530f90 body=93 status=ok
// SIG undefined FUN_142530f90(void)

void FUN_142530f90(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  cVar1 = FUN_1425e4d50(*(undefined8 *)(param_1 + 0x1e8),0);
  if (cVar1 == '\0') {
    FUN_1425e4e10(*(undefined8 *)(param_1 + 0x1e8),0,&local_14);
  }
  FUN_1425e4bc0(*(undefined8 *)(param_1 + 0x1e8));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142531000 FUN_142531000 body=47 status=ok
// SIG undefined FUN_142531000(void)

undefined4 FUN_142531000(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14250e6d0(param_1 + 0x29);
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return uVar1;
}



// FUNCTION 142531030 FUN_142531030 body=86 status=ok
// SIG undefined FUN_142531030(void)

void FUN_142531030(longlong *param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 < 1) {
    if (-1 < (int)param_2) {
                    /* WARNING: Could not recover jumptable at 0x00014253106a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1);
      return;
    }
    do {
      param_2 = param_2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
      if (param_2 == 0) {
        return;
      }
    } while (iVar1 != -1);
  }
  else {
    do {
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
      if (param_2 < 2) {
        return;
      }
      param_2 = param_2 - 1;
    } while (iVar1 != -1);
  }
  return;
}



// FUNCTION 142531090 FUN_142531090 body=99 status=ok
// SIG undefined FUN_142531090(void)

uint FUN_142531090(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x1e8);
  if (*(int *)(lVar2 + 0x1c) == *(int *)(lVar2 + 0x14)) {
    FUN_1425e52b0();
  }
  else {
    uVar3 = *(int *)(lVar2 + 0x1c) + 1U & 0x7f;
    *(uint *)(lVar2 + 0x1c) = uVar3;
    uVar1 = *(undefined4 *)(lVar2 + 0x20 + (ulonglong)uVar3 * 4);
    *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x1e0) = uVar1;
    *(undefined4 *)(lVar2 + 0x18) = uVar1;
    *(uint *)(*(longlong *)(lVar2 + 8) + 0x1e4) =
         (uint)*(ushort *)(lVar2 + 0x220 + (longlong)*(int *)(lVar2 + 0x1c) * 2);
  }
  return -(uint)(*(char *)(param_1 + 0x278) != '\0') | *(uint *)(param_1 + 0x1e0);
}



// FUNCTION 142531100 FUN_142531100 body=79 status=ok
// SIG undefined FUN_142531100(void)

void FUN_142531100(longlong param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1425e5240(*(undefined8 *)(param_1 + 0x1e8),&local_1c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142531160 FUN_142531160 body=126 status=ok
// SIG undefined FUN_142531160(void)

void FUN_142531160(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (-1 < param_2) {
    FUN_14250e700(param_1 + 0x148,param_2);
    uVar1 = FUN_14250e6e0(param_1 + 0x148);
    local_1c = 0;
    FUN_1425e4c00(*(undefined8 *)(param_1 + 0x1e8),uVar1,&local_1c);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142531200 FUN_142531200 body=140 status=ok
// SIG undefined FUN_142531200(void)

void FUN_142531200(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + 0x148;
  lVar3 = FUN_14250e6d0(lVar1);
  if (lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  FUN_14250e700(lVar1,(longlong)param_2);
  uVar2 = FUN_14250e6e0(lVar1);
  local_24 = 0;
  FUN_1425e50c0(*(undefined8 *)(param_1 + 0x1e8),uVar2,&local_24);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425312b0 FUN_1425312b0 body=198 status=ok
// SIG undefined FUN_1425312b0(void)

void FUN_1425312b0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 < 0) {
    (**(code **)(*param_1 + 0x48))(param_1);
    goto LAB_142531369;
  }
  plVar1 = param_1 + 0x29;
  FUN_14250e700(plVar1,param_2);
  iVar3 = FUN_14250e6e0(plVar1);
  local_34 = 0;
  cVar2 = FUN_1425e4d50(param_1[0x3d],iVar3);
  if ((cVar2 != '\0') || (cVar2 = FUN_1425e4e10(param_1[0x3d],iVar3,&local_34), cVar2 != '\0')) {
    iVar4 = FUN_1425e4bc0(param_1[0x3d]);
    if ((iVar3 < param_2) && (iVar4 == param_2)) {
      FUN_14250ea00(plVar1,param_2);
      goto LAB_142531369;
    }
    if (iVar4 == param_2) goto LAB_142531369;
  }
  (**(code **)(*param_1 + 0x68))(param_1);
LAB_142531369:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 142531390 FUN_142531390 body=7 status=ok
// SIG undefined FUN_142531390(void)

undefined4 FUN_142531390(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1e0);
}



// FUNCTION 1425313a0 FUN_1425313a0 body=1299 status=ok
// SIG undefined FUN_1425313a0(void)

void FUN_1425313a0(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ushort *puVar18;
  undefined1 auStack_118 [40];
  longlong local_f0;
  uint local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_bc;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  local_b8 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
  local_e0 = (ulonglong)*(uint *)(local_b8 + 4);
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  uVar17 = *(uint *)(param_1 + 0x1e0);
  lVar13 = (longlong)(int)uVar17;
  local_f0 = param_1 + 0x148;
  uVar5 = lVar13 - *(longlong *)(param_1 + 0x168);
  if ((((longlong)uVar5 < 0) || ((longlong)*(int *)(param_1 + 0x164) <= (longlong)uVar5)) ||
     (0xdbff < *(ushort *)(*(longlong *)(param_1 + 0x178) + uVar5 * 2))) {
    FUN_14250e700(local_f0,lVar13);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x170);
    if ((int)*(uint *)(param_1 + 0x170) < *(int *)(param_1 + 0x174)) goto LAB_142531485;
  }
  else {
    *(int *)(param_1 + 0x170) = (int)uVar5;
    if ((int)uVar5 < *(int *)(param_1 + 0x174)) {
LAB_142531485:
      iVar8 = (int)uVar5;
      if (*(ushort *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 2) < 0xd800) {
        *(int *)(param_1 + 0x170) = iVar8 + 1;
        uVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 2);
        goto LAB_1425314c0;
      }
    }
  }
  uVar3 = FUN_14250e570(local_f0);
  uVar5 = (ulonglong)uVar3;
  if (uVar3 == 0xffffffff) {
    *(undefined1 *)(param_1 + 0x278) = 1;
LAB_1425318d5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
LAB_1425314c0:
  local_c8 = local_b8 + 0x10;
  uVar3 = *(uint *)(local_b8 + 8) & 2;
  uVar9 = (ulonglong)uVar3;
  uVar3 = uVar3 >> 1 ^ 1;
  uVar14 = 0;
  uVar6 = (ulonglong)uVar17;
  uVar11 = local_e0;
  uVar15 = local_e0;
  lVar16 = local_c8;
  local_d0 = param_1;
  local_bc = uVar17;
  local_b0 = lVar13;
LAB_1425314fb:
  local_e8 = (uint)uVar5;
  local_a0 = (ulonglong)((int)(uVar5 >> 0xb) + 0x820);
  uVar7 = uVar5 >> 5;
  local_a8 = (ulonglong)((uint)uVar7 & 0x3f);
  local_d8 = (ulonglong)(local_e8 & 0x1f);
  local_98 = (ulonglong)((uint)uVar7 + 0x140);
  if (0xdbff < local_e8) {
    local_98 = uVar7;
  }
  local_90 = uVar7;
  if (local_e8 == 0xffffffff) goto LAB_142531590;
LAB_142531550:
  local_e4 = (undefined4)CONCAT71((int7)(uVar7 >> 8),uVar3 == 1);
  if (uVar3 != 1) goto LAB_14253164b;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1d8) + 0x30);
  lVar13 = *plVar2;
  uVar17 = (uint)uVar5;
  uVar9 = local_90;
  if ((uVar17 < 0xd800) || (uVar9 = local_98, uVar17 < 0x10000)) {
LAB_142531620:
    iVar8 = (int)local_d8 + (uint)*(ushort *)(lVar13 + uVar9 * 2) * 4;
  }
  else if (uVar17 < 0x110000) {
    if ((int)uVar17 < *(int *)((longlong)plVar2 + 0x2c)) {
      uVar9 = *(ushort *)(lVar13 + local_a0 * 2) + local_a8;
      goto LAB_142531620;
    }
    iVar8 = (int)plVar2[6];
  }
  else {
    iVar8 = (int)plVar2[3] + 0x80;
  }
  uVar1 = *(ushort *)(lVar13 + (longlong)iVar8 * 2);
  uVar9 = (ulonglong)uVar1;
  if ((uVar1 & 0x4000) != 0) {
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    uVar9 = (ulonglong)(uVar1 & 0xbfff);
  }
LAB_14253164b:
  uVar17 = (uint)*(ushort *)(uVar11 + lVar16 + 8 + uVar9 * 2);
  uVar11 = (ulonglong)(uVar17 * (int)uVar15);
  puVar18 = (ushort *)(lVar16 + uVar11);
  uVar7 = (ulonglong)*(ushort *)(lVar16 + uVar11);
  if (*(ushort *)(lVar16 + uVar11) != 0xffff) goto LAB_1425316cb;
  if (uVar3 == 0) {
    uVar3 = 0;
    goto LAB_1425316bc;
  }
  do {
    if (*(int *)(param_1 + 0x164) < (int)*(uint *)(param_1 + 0x170)) {
      uVar6 = (**(code **)(*(longlong *)(param_1 + 0x180) + 0x40))();
      uVar5 = (ulonglong)local_e8;
      param_1 = local_d0;
      uVar15 = local_e0;
      lVar16 = local_c8;
    }
    else {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x168);
    }
LAB_1425316bc:
    *(int *)(param_1 + 0x1e4) = (int)(short)puVar18[2];
    uVar7 = (ulonglong)*puVar18;
LAB_1425316cb:
    do {
      uVar4 = (uint)uVar6;
      uVar12 = (uint)uVar14;
      if (0 < (short)uVar7) {
        if ((int)uVar12 < 1) goto LAB_1425318fc;
        uVar10 = 0;
        while (*(short *)((longlong)&local_68 + uVar10 * 2 + 4) != (short)uVar7) {
          uVar10 = uVar10 + 1;
          if (uVar14 == uVar10) goto LAB_1425318fc;
        }
        iVar8 = *(int *)((longlong)&local_88 + uVar10 * 4 + 4);
        if (-1 < iVar8) {
          *(int *)(param_1 + 0x1e4) = (int)(short)puVar18[2];
          *(int *)(param_1 + 0x1e0) = iVar8;
          goto LAB_1425318d5;
        }
      }
      uVar1 = puVar18[1];
      if (uVar1 != 0) {
        if (*(int *)(param_1 + 0x164) < (int)*(uint *)(param_1 + 0x170)) {
          uVar7 = (**(code **)(*(longlong *)(param_1 + 0x180) + 0x40))();
          uVar5 = (ulonglong)local_e8;
          param_1 = local_d0;
          uVar15 = local_e0;
          lVar16 = local_c8;
          if (0 < (int)uVar12) goto LAB_14253177b;
LAB_142531760:
          uVar14 = 0;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x168);
          if ((int)uVar12 < 1) goto LAB_142531760;
LAB_14253177b:
          uVar10 = 0;
          do {
            if (*(ushort *)((longlong)&local_68 + uVar10 * 2 + 4) == uVar1) {
              *(int *)((longlong)&local_88 + uVar10 * 4 + 4) = (int)uVar7;
              goto joined_r0x0001425317eb;
            }
            uVar10 = uVar10 + 1;
          } while (uVar14 != uVar10);
          if (7 < uVar12) {
LAB_1425318fc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        *(ushort *)((longlong)&local_68 + uVar14 * 2 + 4) = uVar1;
        *(int *)((longlong)&local_88 + uVar14 * 4 + 4) = (int)uVar7;
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
        local_88 = CONCAT44(local_88._4_4_,uVar12);
      }
joined_r0x0001425317eb:
      if ((short)uVar17 == 0) {
LAB_142531872:
        lVar13 = local_f0;
        if (uVar4 == local_bc) {
          FUN_14250e700(local_f0,local_b0);
          FUN_14250e570(lVar13);
          uVar4 = FUN_14250e6e0(lVar13);
          *(undefined4 *)(param_1 + 0x1e4) = 0;
        }
        *(uint *)(param_1 + 0x1e0) = uVar4;
        goto LAB_1425318d5;
      }
      if ((char)local_e4 != '\0') {
        iVar8 = *(int *)(param_1 + 0x170);
        if ((iVar8 < *(int *)(param_1 + 0x174)) &&
           (*(ushort *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 2) < 0xd800)) {
          *(int *)(param_1 + 0x170) = iVar8 + 1;
          uVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar8 * 2);
          uVar3 = 1;
        }
        else {
          uVar17 = FUN_14250e570(local_f0);
          uVar5 = (ulonglong)uVar17;
          uVar3 = 1;
          param_1 = local_d0;
          uVar15 = local_e0;
          lVar16 = local_c8;
        }
        goto LAB_1425314fb;
      }
      uVar3 = uVar3 + (uVar3 == 0);
      if ((int)uVar5 != -1) goto LAB_142531550;
LAB_142531590:
      uVar4 = (uint)uVar6;
      if (uVar3 == 2) goto LAB_142531872;
      uVar17 = (uint)*(ushort *)(local_b8 + 0x1a + uVar11);
      uVar11 = (ulonglong)(uVar17 * (int)uVar15);
      puVar18 = (ushort *)(lVar16 + uVar11);
      uVar1 = *(ushort *)(local_b8 + 0x10 + uVar11);
      uVar7 = (ulonglong)uVar1;
      uVar9 = 1;
      uVar3 = 2;
      local_e4 = 0;
    } while (uVar1 != 0xffff);
  } while( true );
}



// FUNCTION 142531910 FUN_142531910 body=522 status=ok
// SIG undefined FUN_142531910(void)

longlong FUN_142531910(longlong param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  lVar9 = param_1 + 0x148;
  lVar7 = (longlong)param_2 - *(longlong *)(param_1 + 0x168);
  if (((lVar7 < 0) || (*(int *)(param_1 + 0x164) <= lVar7)) ||
     (0xdbff < *(ushort *)(*(longlong *)(param_1 + 0x178) + lVar7 * 2))) {
    FUN_14250e700(lVar9);
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(param_1 + 0x170) = (int)lVar7;
  }
  if (*(int *)(param_1 + 0x164) < *(int *)(param_1 + 0x170)) {
    lVar7 = (**(code **)(*(longlong *)(param_1 + 0x180) + 0x40))(lVar9);
  }
  else {
    lVar7 = (longlong)*(int *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x168);
  }
  if (lVar7 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x170) < 1) {
LAB_1425319d9:
    uVar8 = FUN_14250e620(lVar9);
    if ((int)uVar8 == -1) goto LAB_142531b09;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x170) - 1;
    if (0xd7ff < *(ushort *)(*(longlong *)(param_1 + 0x178) + (ulonglong)uVar4 * 2))
    goto LAB_1425319d9;
    *(uint *)(param_1 + 0x170) = uVar4;
    uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x178) + (ulonglong)uVar4 * 2);
  }
  uVar4 = *(uint *)(lVar2 + 4);
LAB_142531a11:
  do {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1d8) + 0x30);
    lVar7 = *plVar3;
    uVar6 = (uint)uVar8;
    if (uVar6 < 0xd800) {
      uVar1 = *(ushort *)(lVar7 + (uVar8 >> 5 & 0x7ffffff) * 2);
LAB_142531aa5:
      iVar5 = (uVar6 & 0x1f) + (uint)uVar1 * 4;
    }
    else {
      if (uVar6 < 0x10000) {
        uVar10 = uVar8 >> 5 & 0x7ffffff;
        uVar8 = (ulonglong)((int)uVar10 + 0x140);
        if (0xdbff < uVar6) {
          uVar8 = uVar10;
        }
LAB_142531aa0:
        uVar1 = *(ushort *)(lVar7 + uVar8 * 2);
        goto LAB_142531aa5;
      }
      if (uVar6 < 0x110000) {
        if ((int)uVar6 < *(int *)((longlong)plVar3 + 0x2c)) {
          uVar8 = (ulonglong)((uint)(uVar8 >> 5) & 0x3f) +
                  (ulonglong)*(ushort *)(lVar7 + 0x1040 + (uVar8 >> 0xb & 0x1fffff) * 2);
          goto LAB_142531aa0;
        }
        iVar5 = (int)plVar3[6];
      }
      else {
        iVar5 = (int)plVar3[3] + 0x80;
      }
    }
    uVar1 = *(ushort *)
             ((ulonglong)uVar4 + lVar2 + 0x18 +
             (ulonglong)(*(ushort *)(lVar7 + (longlong)iVar5 * 2) & 0xbfff) * 2);
    if (uVar1 == 0) break;
    uVar4 = (uint)uVar1 * *(int *)(lVar2 + 4);
    if (0 < *(int *)(param_1 + 0x170)) {
      uVar6 = *(int *)(param_1 + 0x170) - 1;
      if (*(ushort *)(*(longlong *)(param_1 + 0x178) + (ulonglong)uVar6 * 2) < 0xd800) {
        *(uint *)(param_1 + 0x170) = uVar6;
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x178) + (ulonglong)uVar6 * 2);
        uVar8 = (ulonglong)uVar1;
        if (uVar1 == 0xffffffff) break;
        goto LAB_142531a11;
      }
    }
    uVar8 = FUN_14250e620(lVar9);
  } while ((int)uVar8 != -1);
LAB_142531b09:
  if ((int)*(uint *)(param_1 + 0x170) <= *(int *)(param_1 + 0x164)) {
    return (ulonglong)*(uint *)(param_1 + 0x170) + *(longlong *)(param_1 + 0x168);
  }
  lVar9 = (**(code **)(*(longlong *)(param_1 + 0x180) + 0x40))(lVar9);
  return lVar9;
}



// FUNCTION 142531b40 FUN_142531b40 body=29 status=ok
// SIG undefined FUN_142531b40(void)

undefined4 FUN_142531b40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20);
  return *(undefined4 *)
          (lVar1 + ((longlong)*(int *)(lVar1 + (longlong)*(int *)(param_1 + 0x1e4) * 4) +
                   (longlong)*(int *)(param_1 + 0x1e4)) * 4);
}



// FUNCTION 142531b60 FUN_142531b60 body=204 status=ok
// SIG undefined FUN_142531b60(void)

uint FUN_142531b60(longlong param_1,longlong param_2,uint param_3,int *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (*param_4 < 1) {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20) +
                     (longlong)*(int *)(param_1 + 0x1e4) * 4);
    uVar3 = uVar1;
    if ((int)param_3 < (int)uVar1) {
      *param_4 = 0xf;
      uVar3 = param_3;
    }
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          *(undefined4 *)(param_2 + uVar2 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20) +
                (longlong)(*(int *)(param_1 + 0x1e4) + (int)uVar2 + 1) * 4);
          *(undefined4 *)(param_2 + 4 + uVar2 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20) +
                (longlong)((int)uVar2 + 2 + *(int *)(param_1 + 0x1e4)) * 4);
          uVar2 = uVar2 + 2;
        } while ((uVar3 & 0xfffffffe) != uVar2);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(param_2 + uVar2 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20) +
              (longlong)(*(int *)(param_1 + 0x1e4) + (int)uVar2 + 1) * 4);
      }
    }
  }
  return uVar1;
}



// FUNCTION 142531c30 FUN_142531c30 body=30 status=ok
// SIG undefined FUN_142531c30(void)

longlong FUN_142531c30(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x1d8);
    *param_2 = *(undefined4 *)(lVar1 + 8);
    return lVar1;
  }
  return 0;
}



// FUNCTION 142531c50 FUN_142531c50 body=63 status=ok
// SIG undefined FUN_142531c50(void)

longlong FUN_142531c50(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (*param_4 < 1) {
    if (*param_3 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x18))();
      iVar2 = -0x7e;
      if (lVar1 == 0) {
        iVar2 = 7;
      }
      *param_4 = iVar2;
      return lVar1;
    }
    *param_3 = 1;
  }
  return 0;
}



// FUNCTION 142531c90 FUN_142531c90 body=656 status=ok
// SIG undefined FUN_142531c90(void)

longlong * FUN_142531c90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_44;
  undefined8 *local_40;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x1f8);
  if (*(undefined8 **)(param_1 + 0x1f8) != (undefined8 *)0x0) {
LAB_142531cbf:
    iVar4 = *(int *)(puVar3 + 1);
    while (0 < iVar4) {
      iVar4 = iVar4 + -1;
      plVar2 = (longlong *)FUN_142516630(*(undefined8 *)(param_1 + 0x1f8),iVar4);
      cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if (cVar1 != '\0') {
        return plVar2;
      }
    }
    if ((DAT_14c792fa0 != 2) && (cVar1 = FUN_142501800(&DAT_14c792fa0), cVar1 != '\0')) {
      local_44 = 0;
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar3 == (undefined8 *)0x0) {
        DAT_14c792f98 = (undefined8 *)0x0;
      }
      else {
        local_40 = puVar3;
        FUN_1425d7070(puVar3,&LAB_1425320a0,0,&local_44);
        DAT_14c792f98 = local_40;
        if (local_44 < 1) {
          local_40 = (undefined8 *)thunk_FUN_1424da030(0x10);
          if (local_40 != (undefined8 *)0x0) {
            FUN_1425e5d40(local_40,&local_44);
          }
          FUN_1425163e0(DAT_14c792f98,local_40,&local_44);
        }
      }
      FUN_1424d6720(3,FUN_1425320c0);
      FUN_1425019c0(&DAT_14c792fa0);
    }
    if (DAT_14c792f98 != (undefined8 *)0x0) {
      iVar4 = *(int *)(DAT_14c792f98 + 1);
      while (0 < iVar4) {
        iVar4 = iVar4 + -1;
        plVar2 = (longlong *)FUN_142516630(DAT_14c792f98,iVar4);
        plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2);
        if (plVar2 != (longlong *)0x0) {
          FUN_1425163e0(*(undefined8 *)(param_1 + 0x1f8),plVar2,local_34);
          return plVar2;
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x200);
    if (plVar2 == (longlong *)0x0) {
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x10);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (local_34[0] < 1) {
          return (longlong *)0x0;
        }
      }
      else {
        local_40 = puVar3;
        FUN_1425e5be0(puVar3,local_34);
        *(undefined8 **)(param_1 + 0x200) = local_40;
        puVar3 = local_40;
      }
      FUN_142516500(*(undefined8 *)(param_1 + 0x1f8),puVar3,0,local_34);
      plVar2 = *(longlong **)(param_1 + 0x200);
      if (0 < local_34[0]) {
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
        *(undefined8 *)(param_1 + 0x200) = 0;
        return (longlong *)0x0;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    return *(longlong **)(param_1 + 0x200);
  }
  local_40 = (undefined8 *)thunk_FUN_1424da030(0x28);
  if (local_40 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  else {
    FUN_1425d7050(local_40,local_34);
    *(undefined8 **)(param_1 + 0x1f8) = local_40;
    puVar3 = local_40;
    if (local_34[0] < 1) goto LAB_142531cbf;
    (**(code **)*local_40)(local_40,1);
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return (longlong *)0x0;
}



// FUNCTION 142531f20 Unwind@142531f20 body=40 status=ok
// SIG undefined Unwind@142531f20(void)

void Unwind_142531f20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142531f50 Unwind@142531f50 body=40 status=ok
// SIG undefined Unwind@142531f50(void)

void Unwind_142531f50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142531f80 Unwind@142531f80 body=40 status=ok
// SIG undefined Unwind@142531f80(void)

void Unwind_142531f80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142531fb0 Unwind@142531fb0 body=40 status=ok
// SIG undefined Unwind@142531fb0(void)

void Unwind_142531fb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142531fe0 FUN_142531fe0 body=131 status=ok
// SIG undefined FUN_142531fe0(void)

undefined8 * FUN_142531fe0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    puVar2 = (undefined8 *)FUN_1425e4690();
    return puVar2;
  }
  if (DAT_14c792fa8 != 2) {
    cVar1 = FUN_142501800(&DAT_14c792fa8);
    if (cVar1 != '\0') {
      DAT_14c792f90 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (DAT_14c792f90 != (undefined8 *)0x0) {
        *DAT_14c792f90 = &PTR_FUN_149e18960;
        *(undefined2 *)(DAT_14c792f90 + 1) = 2;
      }
      FUN_1424d6720(3,FUN_1425320c0);
      FUN_1425019c0(&DAT_14c792fa8);
    }
  }
  return DAT_14c792f90;
}



// FUNCTION 142532070 FUN_142532070 body=38 status=ok
// SIG undefined FUN_142532070(void)

undefined8 FUN_142532070(undefined8 param_1,int param_2)

{
  FUN_1425309f0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425320c0 FUN_1425320c0 body=93 status=ok
// SIG undefined FUN_1425320c0(void)

undefined8 FUN_1425320c0(void)

{
  undefined4 uVar1;
  
  if (DAT_14c792f98 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792f98)(DAT_14c792f98,1);
  }
  DAT_14c792f98 = (undefined8 *)0x0;
  if (DAT_14c792f90 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792f90)(DAT_14c792f90,1);
  }
  uVar1 = DAT_14c792fa8;
  DAT_14c792f90 = (undefined8 *)0x0;
  LOCK();
  DAT_14c792fa0 = 0;
  UNLOCK();
  LOCK();
  DAT_14c792fa8 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142532120 FUN_142532120 body=93 status=ok
// SIG undefined FUN_142532120(void)

undefined8 FUN_142532120(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (*param_4 < 1) {
    if (param_3 == 0) {
      puVar1 = (undefined1 *)param_1[1];
      goto LAB_142532130;
    }
    if (param_3 == 1) {
      puVar1 = (undefined1 *)*param_1;
      goto LAB_142532130;
    }
    *param_4 = 1;
  }
  puVar1 = (undefined1 *)0x0;
LAB_142532130:
  puVar2 = &DAT_149e02088;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_1412ae150(param_2,puVar2,0,0,0);
  return param_2;
}



// FUNCTION 142532180 FUN_142532180 body=37 status=ok
// SIG undefined FUN_142532180(void)

undefined8 FUN_142532180(undefined8 *param_1,int param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      return *param_1;
    }
    *param_3 = 1;
    return 0;
  }
  return param_1[1];
}



// FUNCTION 1425321b0 FUN_1425321b0 body=84 status=ok
// SIG undefined FUN_1425321b0(void)

void FUN_1425321b0(longlong *param_1,char *param_2,char *param_3)

{
  if (param_2 != (char *)0x0) {
    strncpy((char *)*param_1,param_2,0x9d);
    *(undefined1 *)(*param_1 + 0x9c) = 0;
  }
  if (param_3 != (char *)0x0) {
    strncpy((char *)param_1[1],param_3,0x9d);
    *(undefined1 *)(param_1[1] + 0x9c) = 0;
  }
  return;
}



// FUNCTION 142532210 FUN_142532210 body=43 status=ok
// SIG undefined FUN_142532210(void)

void FUN_142532210(undefined8 *param_1,longlong param_2,longlong param_3)

{
  strcpy((char *)*param_1,*(char **)(param_2 + 0x28));
  strcpy((char *)param_1[1],*(char **)(param_3 + 0x28));
  return;
}



// FUNCTION 142532240 FUN_142532240 body=30 status=ok
// SIG undefined FUN_142532240(void)

void FUN_142532240(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return;
}



// FUNCTION 142532260 FUN_142532260 body=38 status=ok
// SIG undefined FUN_142532260(void)

void FUN_142532260(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined1 *)(param_1 + 3);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}



// FUNCTION 142532290 FUN_142532290 body=79 status=ok
// SIG undefined FUN_142532290(void)

undefined8 * FUN_142532290(int *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 < 1) {
    puVar1 = (undefined8 *)FUN_1424da030(0x38);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined1 *)(puVar1 + 3) = 1;
      return puVar1;
    }
    *param_1 = 7;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425322e0 FUN_1425322e0 body=28 status=ok
// SIG undefined FUN_1425322e0(void)

longlong FUN_1425322e0(longlong param_1)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 2) != -0x26) || (*(char *)(param_1 + 3) != '\'')) {
      param_1 = param_1 + 8;
    }
    return param_1;
  }
  return 0;
}



// FUNCTION 142532300 FUN_142532300 body=33 status=ok
// SIG undefined FUN_142532300(void)

void FUN_142532300(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if ((*(char *)(param_2 + 2) != -0x26) || (*(char *)(param_2 + 3) != '\'')) {
      param_2 = param_2 + 8;
    }
    *(longlong *)(param_1 + 8) = param_2;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142532330 FUN_142532330 body=72 status=ok
// SIG undefined FUN_142532330(void)

void FUN_142532330(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1424d9ff0();
    if (*(char *)(param_1 + 3) != '\0') {
      FUN_1424da110(param_1);
      return;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
  }
  return;
}



// FUNCTION 142532380 FUN_142532380 body=43 status=ok
// SIG undefined FUN_142532380(void)

longlong FUN_142532380(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 8), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_14258c8c0(lVar2);
    lVar2 = (ulonglong)uVar1 + lVar2;
  }
  return lVar2;
}



// FUNCTION 1425323b0 FUN_1425323b0 body=52 status=ok
// SIG undefined FUN_1425323b0(void)

int FUN_1425323b0(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = -1;
  if (((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x30), -1 < iVar1)) {
    uVar2 = FUN_14258c8c0();
    iVar3 = iVar1 - (uint)uVar2;
  }
  return iVar3;
}



// FUNCTION 1425323f0 FUN_1425323f0 body=9 status=ok
// SIG undefined FUN_1425323f0(void)

bool FUN_1425323f0(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 142532400 FUN_142532400 body=96 status=ok
// SIG undefined FUN_142532400(void)

void FUN_142532400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142535100();
  *param_1 = icu_64::ICULocaleService::vftable;
  uVar1 = FUN_1424a3b00();
  FUN_1424a3ce0(param_1 + 0xf,uVar1);
  param_1[0x2b] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2c) = 2;
  return;
}



// FUNCTION 142532460 Unwind@142532460 body=32 status=ok
// SIG undefined Unwind@142532460(void)

void Unwind_142532460(undefined8 param_1,longlong param_2)

{
  FUN_142535190(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142532480 FUN_142532480 body=52 status=ok
// SIG undefined FUN_142532480(void)

void FUN_142532480(undefined8 *param_1)

{
  *param_1 = icu_64::ICULocaleService::vftable;
  FUN_140859a90(param_1 + 0x2b);
  FUN_1414b3f60(param_1 + 0xf);
  FUN_142535190(param_1);
  return;
}



// FUNCTION 1425324c0 FUN_1425324c0 body=262 status=ok
// SIG undefined FUN_1425324c0(void)

longlong FUN_1425324c0(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                      int *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_b0 [8];
  byte local_a8;
  undefined **local_70;
  undefined2 local_68;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return 0;
  }
  FUN_1424a7220(local_b0,*(undefined8 *)(param_2 + 0x28),0xffffffff,0);
  if ((local_a8 & 1) == 0) {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xb0))(param_1,local_b0,param_3,param_5);
    if (puVar1 != (undefined8 *)0x0) {
      if (param_4 == 0) {
        lVar2 = FUN_1425352b0(param_1,puVar1,param_5);
      }
      else {
        local_70 = &PTR_FUN_149e18960;
        local_68 = 2;
        lVar2 = (**(code **)(*param_1 + 0x30))(param_1,puVar1,&local_70,param_5);
        if (lVar2 != 0) {
          FUN_142534d70(&local_70);
          FUN_142537360(&local_70,param_4);
        }
        FUN_140859a90(&local_70);
      }
      (**(code **)*puVar1)(puVar1,1);
      goto LAB_1425325ac;
    }
  }
  else {
    *param_5 = 7;
  }
  lVar2 = 0;
LAB_1425325ac:
  FUN_140859a90(local_b0);
  return lVar2;
}



// FUNCTION 1425325d0 Unwind@1425325d0 body=43 status=ok
// SIG undefined Unwind@1425325d0(void)

void Unwind_1425325d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142532600 Unwind@142532600 body=43 status=ok
// SIG undefined Unwind@142532600(void)

void Unwind_142532600(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142532630 FUN_142532630 body=23 status=ok
// SIG undefined FUN_142532630(void)

void FUN_142532630(void)

{
  FUN_1425324c0();
  return;
}



// FUNCTION 142532650 FUN_142532650 body=32 status=ok
// SIG undefined FUN_142532650(void)

void FUN_142532650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1425324c0(param_1,param_2,0xffffffff,param_3,param_4);
  return;
}



// FUNCTION 142532670 FUN_142532670 body=152 status=ok
// SIG undefined FUN_142532670(void)

undefined8
FUN_142532670(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_118 [224];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1424a3c00(local_118);
  FUN_142537360(param_3,local_118);
  uVar1 = (**(code **)(*param_1 + 0x90))
                    (param_1,param_2,local_118,0xffffffff,param_4 == '\0',param_5);
  FUN_1414b3f60(local_118);
  return uVar1;
}



// FUNCTION 142532710 Unwind@142532710 body=47 status=ok
// SIG undefined Unwind@142532710(void)

void Unwind_142532710(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 142532740 FUN_142532740 body=38 status=ok
// SIG undefined FUN_142532740(void)

void FUN_142532740(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 142532770 FUN_142532770 body=38 status=ok
// SIG undefined FUN_142532770(void)

void FUN_142532770(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 1425327a0 FUN_1425327a0 body=157 status=ok
// SIG undefined FUN_1425327a0(void)

undefined8
FUN_1425327a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_1424da030(0xa0);
  if (lVar1 != 0) {
    FUN_1425e6630(lVar1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x000142532817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,lVar1,param_6);
    return uVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return 0;
}



// FUNCTION 142532840 Unwind@142532840 body=48 status=ok
// SIG undefined Unwind@142532840(void)

void Unwind_142532840(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142532870 FUN_142532870 body=8 status=ok
// SIG undefined FUN_142532870(void)

undefined * FUN_142532870(void)

{
  return &DAT_14c792fb0;
}



// FUNCTION 142532880 FUN_142532880 body=98 status=ok
// SIG undefined FUN_142532880(void)

undefined8 * FUN_142532880(undefined8 param_1)

{
  undefined8 *puVar1;
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142532cc0(puVar1,param_1,local_1c);
    if (local_1c[0] < 1) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425328f0 Unwind@1425328f0 body=32 status=ok
// SIG undefined Unwind@1425328f0(void)

void Unwind_1425328f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142532910 FUN_142532910 body=266 status=ok
// SIG undefined FUN_142532910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142532910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = FUN_1424a3b00();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793008) {
    FUN_144b3d300(&DAT_14c793008);
    if (DAT_14c793008 == -1) {
      _DAT_14c792ff8 = 0;
      uRam000000014c793000 = 0;
      _DAT_14c792fe8 = 0;
      uRam000000014c792ff0 = 0;
      _DAT_14c792fd8 = 0;
      uRam000000014c792fe0 = 0;
      _DAT_14c792fc8 = 0;
      uRam000000014c792fd0 = 0;
      _DAT_14c792fb8 = 0;
      uRam000000014c792fc0 = 0;
      _Mtx_init_in_situ(&DAT_14c792fb8,2,param_3,param_4,uVar3);
      atexit((_func_5014 *)&LAB_142532a50);
      _Init_thread_footer(&DAT_14c793008);
    }
  }
  FUN_142501320(&DAT_14c792fb8);
  cVar1 = FUN_1424a3f70(uVar2,param_1 + 0x78);
  if (cVar1 == '\0') {
    FUN_1424a3d10(param_1 + 0x78,uVar2);
    FUN_1425374d0(uVar2,param_1 + 0x158);
    FUN_142536690(param_1);
  }
  FUN_142501400(&DAT_14c792fb8);
  return param_1 + 0x158;
}



// FUNCTION 142532a20 Unwind@142532a20 body=39 status=ok
// SIG undefined Unwind@142532a20(void)

void Unwind_142532a20(void)

{
  FUN_142501400(&DAT_14c792fb8);
  return;
}



// FUNCTION 142532a60 FUN_142532a60 body=37 status=ok
// SIG undefined FUN_142532a60(void)

void FUN_142532a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142532910();
  FUN_1425e6950(param_2,uVar1,param_3);
  return;
}



// FUNCTION 142532a90 FUN_142532a90 body=45 status=ok
// SIG undefined FUN_142532a90(void)

void FUN_142532a90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142532910();
  FUN_1425e6960(param_2,uVar1,param_3,param_4);
  return;
}



// FUNCTION 142532ac0 FUN_142532ac0 body=2 status=ok
// SIG undefined FUN_142532ac0(void)

void FUN_142532ac0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 142532ad0 FUN_142532ad0 body=63 status=ok
// SIG undefined FUN_142532ad0(void)

undefined8 * FUN_142532ad0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::ServiceEnumeration::vftable;
  FUN_142515ff0(param_1 + 0x11);
  FUN_14250a7a0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142532b10 FUN_142532b10 body=98 status=ok
// SIG undefined FUN_142532b10(void)

undefined8 * FUN_142532b10(undefined8 param_1)

{
  undefined8 *puVar1;
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142532dc0(puVar1,param_1,local_1c);
    if (local_1c[0] < 1) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142532b80 Unwind@142532b80 body=32 status=ok
// SIG undefined Unwind@142532b80(void)

void Unwind_142532b80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142532ba0 FUN_142532ba0 body=65 status=ok
// SIG undefined FUN_142532ba0(void)

undefined4 FUN_142532ba0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*param_2 < 1) {
    iVar1 = *(int *)(param_1 + 0x80);
    iVar2 = FUN_142536720(*(undefined8 *)(param_1 + 0x78));
    if (iVar1 == iVar2) {
      uVar3 = *(undefined4 *)(param_1 + 0x90);
    }
    else {
      *param_2 = 0x19;
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 142532bf0 FUN_142532bf0 body=98 status=ok
// SIG undefined FUN_142532bf0(void)

undefined8 FUN_142532bf0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*param_2 < 1) {
    iVar1 = *(int *)(param_1 + 0x80);
    iVar2 = FUN_142536720(*(undefined8 *)(param_1 + 0x78));
    if (iVar1 == iVar2) {
      if (*(int *)(param_1 + 0xb0) < *(int *)(param_1 + 0x90)) {
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        uVar3 = FUN_142516630(param_1 + 0x88);
        return uVar3;
      }
    }
    else {
      *param_2 = 0x19;
    }
  }
  return 0;
}



// FUNCTION 142532c60 FUN_142532c60 body=91 status=ok
// SIG undefined FUN_142532c60(void)

void FUN_142532c60(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x19) {
    *param_2 = 0;
  }
  else if (0 < *param_2) {
    return;
  }
  uVar1 = FUN_142536720(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_142535b70(*(undefined8 *)(param_1 + 0x78),param_1 + 0x88,param_2);
  return;
}



// FUNCTION 142532cc0 FUN_142532cc0 body=145 status=ok
// SIG undefined FUN_142532cc0(void)

undefined8 * FUN_142532cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_14250a770();
  *param_1 = icu_64::ServiceEnumeration::vftable;
  param_1[0xf] = param_2;
  uVar1 = FUN_142536720(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_142515f20(param_1 + 0x11,&LAB_1424b70f0,0,param_3);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_142535b70(param_1[0xf],param_1 + 0x11,param_3);
  return param_1;
}



// FUNCTION 142532d60 Unwind@142532d60 body=36 status=ok
// SIG undefined Unwind@142532d60(void)

void Unwind_142532d60(undefined8 param_1,longlong param_2)

{
  FUN_142515ff0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142532d90 Unwind@142532d90 body=36 status=ok
// SIG undefined Unwind@142532d90(void)

void Unwind_142532d90(undefined8 param_1,longlong param_2)

{
  FUN_14250a7a0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142532dc0 FUN_142532dc0 body=221 status=ok
// SIG undefined FUN_142532dc0(void)

void FUN_142532dc0(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  FUN_14250a770();
  *param_1 = icu_64::ServiceEnumeration::vftable;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  puVar4 = param_1 + 0x11;
  FUN_142515f20(puVar4,&LAB_1424b70f0,0,param_3,puVar4,param_1,uVar5);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*param_3 < 1) {
    iVar1 = *(int *)(param_2 + 0x90);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        plVar2 = (longlong *)FUN_142516630(param_2 + 0x88,iVar3);
        uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2);
        FUN_1425163e0(puVar4,uVar5,param_3);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
      if (0 < *param_3) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  }
  return;
}



// FUNCTION 142532ea0 Unwind@142532ea0 body=44 status=ok
// SIG undefined Unwind@142532ea0(void)

void Unwind_142532ea0(undefined8 param_1,longlong param_2)

{
  FUN_14250a7a0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142532ed0 Unwind@142532ed0 body=44 status=ok
// SIG undefined Unwind@142532ed0(void)

void Unwind_142532ed0(undefined8 param_1,longlong param_2)

{
  FUN_142515ff0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142532f00 FUN_142532f00 body=51 status=ok
// SIG undefined FUN_142532f00(void)

undefined8 * FUN_142532f00(undefined8 *param_1)

{
  FUN_142536da0(param_1,0);
  *param_1 = icu_64::ICUResourceBundleFactory::vftable;
  param_1[10] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 142532f40 FUN_142532f40 body=71 status=ok
// SIG undefined FUN_142532f40(void)

undefined8 * FUN_142532f40(undefined8 *param_1,undefined8 param_2)

{
  FUN_142536da0(param_1,0);
  *param_1 = icu_64::ICUResourceBundleFactory::vftable;
  FUN_1424a6be0(param_1 + 10,param_2);
  return param_1;
}



// FUNCTION 142532f90 Unwind@142532f90 body=34 status=ok
// SIG undefined Unwind@142532f90(void)

void Unwind_142532f90(undefined8 param_1,longlong param_2)

{
  FUN_142536dd0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142532fc0 FUN_142532fc0 body=40 status=ok
// SIG undefined FUN_142532fc0(void)

void FUN_142532fc0(undefined8 *param_1)

{
  *param_1 = icu_64::ICUResourceBundleFactory::vftable;
  FUN_140859a90(param_1 + 10);
  FUN_142536dd0(param_1);
  return;
}



// FUNCTION 142532ff0 FUN_142532ff0 body=17 status=ok
// SIG undefined FUN_142532ff0(void)

undefined8 FUN_142532ff0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (0 < *param_2) {
    return 0;
  }
  uVar1 = FUN_142537580(param_1 + 0x50);
  return uVar1;
}



// FUNCTION 142533010 FUN_142533010 body=134 status=ok
// SIG undefined FUN_142533010(void)

longlong FUN_142533010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      int *param_5)

{
  int iVar1;
  undefined1 local_48 [24];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    iVar1 = FUN_1424a83f0(param_1 + 0x50,0,0x7fffffff,local_48,0x14,0);
    if (0x13 < iVar1) {
      return 0;
    }
    local_30 = thunk_FUN_1424da030(0x18);
    if (local_30 != 0) {
      FUN_1425e70c0(local_30,local_48,param_2,param_5);
      return local_30;
    }
  }
  return 0;
}



// FUNCTION 1425330a0 Unwind@1425330a0 body=36 status=ok
// SIG undefined Unwind@1425330a0(void)

void Unwind_1425330a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1425330d0 FUN_1425330d0 body=8 status=ok
// SIG undefined FUN_1425330d0(void)

undefined * FUN_1425330d0(void)

{
  return &DAT_14c79300c;
}



// FUNCTION 1425330e0 FUN_1425330e0 body=60 status=ok
// SIG undefined FUN_1425330e0(void)

undefined8 * FUN_1425330e0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::ICUResourceBundleFactory::vftable;
  FUN_140859a90(param_1 + 10);
  FUN_142536dd0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142533120 FUN_142533120 body=41 status=ok
// SIG undefined FUN_142533120(void)

void FUN_142533120(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425e7160(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142533150 FUN_142533150 body=229 status=ok
// SIG undefined FUN_142533150(void)

undefined8 *
FUN_142533150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 local_1f8 [224];
  undefined1 local_118 [224];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1424ba7d0(param_2,local_1f8,0,param_5);
  FUN_1424ba7d0(param_2,local_118,1,param_5);
  FUN_1424ba860(param_1,local_118,local_1f8);
  FUN_1414b3f60(local_118);
  FUN_1414b3f60(local_1f8);
  *param_1 = icu_64::SimpleFilteredSentenceBreakIterator::vftable;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::SimpleFilteredSentenceBreakData::vftable;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 1;
  }
  param_1[0x29] = puVar1;
  param_1[0x2a] = param_2;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 142533240 Unwind@142533240 body=50 status=ok
// SIG undefined Unwind@142533240(void)

void Unwind_142533240(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x100);
  return;
}



// FUNCTION 142533280 Unwind@142533280 body=47 status=ok
// SIG undefined Unwind@142533280(void)

void Unwind_142533280(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x20);
  return;
}



// FUNCTION 1425332b0 FUN_1425332b0 body=722 status=ok
// SIG undefined FUN_1425332b0(void)

bool FUN_1425332b0(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  FUN_14250e700(*(undefined8 *)(param_1 + 0x158),(longlong)param_2);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar7 + 8);
  *(undefined4 *)(lVar7 + 0x18) = 0xffffffff;
  iVar4 = FUN_14250e620(*(undefined8 *)(param_1 + 0x158));
  if (iVar4 != 0x20) {
    FUN_14250e570(*(undefined8 *)(param_1 + 0x158));
  }
  iVar4 = FUN_14250e620(*(undefined8 *)(param_1 + 0x158));
  if (iVar4 != -1) {
    lVar7 = -1;
    uVar8 = 0xffffffff;
    do {
      uVar5 = FUN_1425e7410(*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x10),iVar4);
      if ((uVar5 & 1) == 0) break;
      if (1 < (int)uVar5) {
        lVar7 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x158));
        puVar2 = *(ushort **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) + 0x10);
        puVar6 = puVar2 + 1;
        uVar1 = *puVar2;
        uVar8 = (uint)uVar1;
        if ((short)uVar1 < 0) {
          uVar8 = uVar8 & 0x7fff;
          if (0x3fff < uVar8) {
            if (uVar8 == 0x7fff) {
              uVar8 = (uint)puVar2[1] << 0x10;
              puVar6 = puVar2 + 2;
            }
            else {
              uVar8 = uVar8 * 0x10000 + 0xc0000000;
            }
            uVar8 = *puVar6 | uVar8;
          }
        }
        else if (uVar8 < 0x4040) {
          uVar8 = (uVar1 >> 6) - 1;
        }
        else if (uVar8 < 0x7fc0) {
          uVar8 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar6 + 0xfeff0000;
        }
        else {
          uVar8 = CONCAT22(puVar2[1],puVar2[2]);
        }
      }
      iVar4 = FUN_14250e620(*(undefined8 *)(param_1 + 0x158));
    } while (iVar4 != -1);
    if (uVar5 == 0) goto LAB_1425334d5;
  }
  puVar2 = *(ushort **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) + 0x10);
  puVar6 = puVar2 + 1;
  uVar1 = *puVar2;
  if ((short)uVar1 < 0) {
    uVar8 = uVar1 & 0x7fff;
    if (0x3fff < uVar8) {
      if (uVar8 == 0x7fff) {
        uVar8 = (uint)puVar2[1] << 0x10;
        puVar6 = puVar2 + 2;
      }
      else {
        uVar8 = uVar8 * 0x10000 + 0xc0000000;
      }
      uVar8 = *puVar6 | uVar8;
    }
  }
  else if (uVar1 < 0x4040) {
    uVar8 = (uVar1 >> 6) - 1;
  }
  else if (uVar1 < 0x7fc0) {
    uVar8 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar6 + 0xfeff0000;
  }
  else {
    uVar8 = CONCAT22(puVar2[1],puVar2[2]);
  }
  lVar7 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x158));
LAB_1425334d5:
  bVar9 = false;
  if ((-1 < lVar7) && (bVar9 = true, uVar8 != 2)) {
    if ((uVar8 == 1) && (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 8), lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 8);
      *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
      FUN_14250e700(*(undefined8 *)(param_1 + 0x158),lVar7);
      iVar4 = FUN_14250e570(*(undefined8 *)(param_1 + 0x158));
      if (iVar4 != -1) {
        do {
          uVar8 = FUN_1425e7410(*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 8),iVar4);
          if ((uVar8 & 1) == 0) break;
          iVar4 = FUN_14250e570(*(undefined8 *)(param_1 + 0x158));
        } while (iVar4 != -1);
        bVar9 = uVar8 != 0;
      }
    }
    else {
      bVar9 = false;
    }
  }
  return bVar9;
}



// FUNCTION 142533590 FUN_142533590 body=225 status=ok
// SIG undefined FUN_142533590(void)

void FUN_142533590(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != -1) && (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) != 0)) {
    local_2c = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),uVar2,&local_2c);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_14250edb0();
    }
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    if ((local_2c < 1) && (lVar3 = FUN_14250e6d0(uVar2), lVar3 != param_2)) {
      while (iVar1 = FUN_1425332b0(param_1,param_2), iVar1 != 0) {
        param_2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x68))();
        if ((param_2 == -1) || (lVar3 == param_2)) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 142533680 FUN_142533680 body=36 status=ok
// SIG undefined FUN_142533680(void)

void FUN_142533680(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x68))();
  FUN_142533590(param_1,uVar1);
  return;
}



// FUNCTION 1425336b0 FUN_1425336b0 body=14 status=ok
// SIG undefined FUN_1425336b0(void)

void FUN_1425336b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425336ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x48))();
  return;
}



// FUNCTION 1425336c0 FUN_1425336c0 body=211 status=ok
// SIG undefined FUN_1425336c0(void)

void FUN_1425336c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x80))();
  if ((1 < iVar1 + 1U) && (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) != 0)) {
    local_24 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),uVar2,&local_24);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_14250edb0();
    }
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    if (local_24 < 1) {
      do {
        iVar1 = FUN_1425332b0(param_1,iVar1);
        if (iVar1 == 0) break;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x58))();
      } while (iVar1 - 1U < 0xfffffffe);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425337a0 FUN_1425337a0 body=211 status=ok
// SIG undefined FUN_1425337a0(void)

void FUN_1425337a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x58))();
  if ((1 < iVar1 + 1U) && (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) != 0)) {
    local_24 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),uVar2,&local_24);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_14250edb0();
    }
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    if (local_24 < 1) {
      do {
        iVar1 = FUN_1425332b0(param_1,iVar1);
        if (iVar1 == 0) break;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x58))();
      } while (iVar1 - 1U < 0xfffffffe);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142533880 FUN_142533880 body=170 status=ok
// SIG undefined FUN_142533880(void)

void FUN_142533880(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x88))();
  if ((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x10) != 0)) {
    local_24 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),uVar2,&local_24);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_14250edb0();
    }
    *(undefined8 *)(param_1 + 0x158) = uVar2;
    FUN_1425332b0(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142533940 FUN_142533940 body=36 status=ok
// SIG undefined FUN_142533940(void)

void FUN_142533940(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x60))();
  FUN_142533590(param_1,uVar1);
  return;
}



// FUNCTION 142533970 FUN_142533970 body=36 status=ok
// SIG undefined FUN_142533970(void)

void FUN_142533970(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x78))();
  FUN_142533590(param_1,uVar1);
  return;
}



// FUNCTION 1425339a0 FUN_1425339a0 body=14 status=ok
// SIG undefined FUN_1425339a0(void)

void FUN_1425339a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425339aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x50))();
  return;
}



// FUNCTION 1425339b0 FUN_1425339b0 body=550 status=ok
// SIG undefined FUN_1425339b0(void)

longlong * FUN_1425339b0(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined **local_b8;
  undefined2 local_b0;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  *param_1 = (longlong)icu_64::SimpleFilteredBreakIteratorBuilder::vftable;
  plVar1 = param_1 + 1;
  local_68 = param_1;
  FUN_142515f80(plVar1,&LAB_1424b70f0,FUN_1424a9cd0,1,param_3);
  *plVar1 = (longlong)icu_64::UStringSet::vftable;
  if (*param_3 < 1) {
    local_44[0] = 0;
    local_78 = plVar1;
    uVar2 = FUN_1424a5500(param_2);
    lVar3 = FUN_1424ebfe0("icudt64l-brkitr",uVar2,local_44);
    if ((local_44[0] < 1) && (local_44[0] != -0x7f)) {
      lVar4 = FUN_1424ec1c0(lVar3,"exceptions",0,local_44);
      if ((local_44[0] < 1) && (local_44[0] != -0x7f)) {
        lVar5 = FUN_1424ec1c0(lVar4,"SentenceBreak",0,local_44);
        if ((local_44[0] < 1) && (local_44[0] != -0x7f)) {
          local_44[0] = *param_3;
          lVar6 = 0;
          local_60 = lVar5;
          local_58 = lVar3;
          local_50 = lVar4;
          do {
            lVar5 = local_60;
            lVar6 = FUN_1424eb190(local_60,lVar6,local_44);
            if ((lVar6 == 0) || (0 < local_44[0])) break;
            local_b8 = &PTR_FUN_149e18960;
            local_b0 = 2;
            local_48 = 0;
            local_70 = lVar6;
            uVar2 = FUN_1424eae00(lVar6,&local_48,param_3);
            if (*param_3 < 1) {
              FUN_1424a8f10(&local_b8,1,uVar2,local_48);
            }
            else {
              FUN_1424a7130(&local_b8);
            }
            (**(code **)(*local_68 + 0x10))(local_68,&local_b8,param_3);
            FUN_140859a90(&local_b8);
            lVar6 = local_70;
            lVar5 = local_60;
          } while (local_44[0] < 1);
          lVar4 = local_50;
          lVar3 = local_58;
          if (((0 < local_44[0]) && (local_44[0] != 8)) && (*param_3 < 1)) {
            *param_3 = local_44[0];
          }
          if (lVar6 != 0) {
            FUN_1424ea9f0(lVar6);
          }
        }
        else {
          *param_3 = local_44[0];
        }
        if (lVar5 != 0) {
          FUN_1424ea9f0(lVar5);
        }
      }
      else {
        *param_3 = local_44[0];
      }
      if (lVar4 != 0) {
        FUN_1424ea9f0(lVar4);
      }
    }
    else {
      *param_3 = local_44[0];
    }
    if (lVar3 != 0) {
      FUN_1424ea9f0(lVar3);
    }
  }
  return local_68;
}



// FUNCTION 142533be0 Unwind@142533be0 body=51 status=ok
// SIG undefined Unwind@142533be0(void)

void Unwind_142533be0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142533c20 Unwind@142533c20 body=51 status=ok
// SIG undefined Unwind@142533c20(void)

void Unwind_142533c20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142533c60 Unwind@142533c60 body=115 status=ok
// SIG undefined Unwind@142533c60(void)

void Unwind_142533c60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x78));
  if (*(longlong *)(param_2 + 0x88) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x98);
  }
  else {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x88));
    lVar1 = *(longlong *)(param_2 + 0x98);
  }
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x90);
  }
  else {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x98));
    lVar1 = *(longlong *)(param_2 + 0x90);
  }
  if (lVar1 != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}



// FUNCTION 142533ce0 Unwind@142533ce0 body=51 status=ok
// SIG undefined Unwind@142533ce0(void)

void Unwind_142533ce0(undefined8 param_1,longlong param_2)

{
  FUN_142515ff0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 142533d20 Unwind@142533d20 body=51 status=ok
// SIG undefined Unwind@142533d20(void)

void Unwind_142533d20(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 142533d60 FUN_142533d60 body=159 status=ok
// SIG undefined FUN_142533d60(void)

undefined8 FUN_142533d60(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*param_3 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x40);
    if (puVar2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
    else {
      FUN_1424a6be0(puVar2,param_2);
      if (*param_3 < 1) {
        iVar1 = FUN_142516b20(param_1 + 8,puVar2,0);
        if ((iVar1 < 0) &&
           (thunk_FUN_142516bd0(param_1 + 8,puVar2,FUN_142534b10,param_3), *param_3 < 1)) {
          return 1;
        }
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return 0;
}



// FUNCTION 142533e00 Unwind@142533e00 body=36 status=ok
// SIG undefined Unwind@142533e00(void)

void Unwind_142533e00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142533e30 FUN_142533e30 body=18 status=ok
// SIG undefined FUN_142533e30(void)

undefined8 FUN_142533e30(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (0 < *param_3) {
    return 0;
  }
  uVar1 = FUN_142516a40(param_1 + 8);
  return uVar1;
}



// FUNCTION 142533e50 FUN_142533e50 body=1627 status=ok
// SIG undefined FUN_142533e50(void)

undefined8 * FUN_142533e50(longlong param_1,undefined8 *param_2,int *param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong local_f0;
  short local_e8;
  int local_e4;
  ulonglong local_b0;
  longlong local_98;
  longlong local_90;
  uint local_88;
  int local_84;
  longlong *local_80;
  int *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  local_68 = (undefined8 *)thunk_FUN_1424da030(0x70);
  if (local_68 == (undefined8 *)0x0) {
    if (*param_3 < 1) {
      *param_3 = 7;
    }
  }
  else {
    FUN_1425e7ad0(local_68,param_3);
  }
  puVar8 = (undefined8 *)thunk_FUN_1424da030(0x70);
  if (puVar8 == (undefined8 *)0x0) {
    if (*param_3 < 1) {
      *param_3 = 7;
    }
    puVar8 = (undefined8 *)0x0;
    puVar15 = local_68;
    puVar21 = local_50;
    goto LAB_1425343de;
  }
  local_70 = puVar8;
  FUN_1425e7ad0(puVar8);
  if (*param_3 < 1) {
    uVar3 = *(uint *)(param_1 + 0x10);
    iVar7 = uVar3 + (uVar3 == 0);
    lVar14 = (longlong)iVar7;
    lVar10 = -1;
    if (-1 < iVar7) {
      lVar10 = lVar14 * 0x40 + 8;
    }
    local_78 = param_3;
    plVar9 = (longlong *)thunk_FUN_1424da030(lVar10);
    if (plVar9 == (longlong *)0x0) {
      local_80 = (longlong *)0x0;
    }
    else {
      *plVar9 = lVar14;
      local_80 = plVar9 + 1;
      plVar17 = local_80;
      do {
        *plVar17 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar17 + 1) = 2;
        plVar17 = plVar17 + 8;
      } while (plVar17 != plVar9 + lVar14 * 8 + 1);
    }
    uVar13 = 0;
    if ((int)uVar3 < 1) {
LAB_142533fa1:
      local_58 = (void *)0x0;
    }
    else {
      local_58 = (void *)FUN_1424da030((ulonglong)uVar3 * 4);
      if (local_58 == (void *)0x0) goto LAB_142533fa1;
      memset(local_58,0,(ulonglong)uVar3 * 4);
      FUN_1424da110(0);
    }
    local_98 = 0;
    local_90 = 0;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        local_60 = local_50;
        lVar10 = FUN_142516630(param_1 + 8,iVar7);
        if (lVar10 == 0) {
          *local_78 = 7;
          goto LAB_14253434c;
        }
        local_60 = local_50;
        FUN_1424a7c80(local_80 + uVar13 * 8,lVar10);
        *(undefined4 *)((longlong)local_58 + uVar13 * 4) = 0;
        uVar13 = (ulonglong)((int)uVar13 + 1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    local_84 = 0;
    for (uVar16 = 0; plVar9 = local_80, (int)uVar16 < (int)uVar3; uVar16 = uVar16 + 1) {
      uVar13 = (ulonglong)uVar16;
      if ((short)local_80[uVar13 * 8 + 1] < 0) {
        iVar7 = *(int *)((longlong)local_80 + uVar13 * 0x40 + 0xc);
      }
      else {
        iVar7 = (int)(short)local_80[uVar13 * 8 + 1] >> 5;
      }
      local_60 = local_50;
      local_b0 = uVar13;
      iVar7 = FUN_1424a8940(local_80 + uVar13 * 8,0x2e,0,iVar7);
      if (-1 < iVar7) {
        sVar1 = (short)plVar9[uVar13 * 8 + 1];
        if (sVar1 < 0) {
          iVar12 = *(int *)((longlong)plVar9 + uVar13 * 0x40 + 0xc);
        }
        else {
          iVar12 = (int)sVar1 >> 5;
        }
        iVar22 = iVar7 + 1;
        if (iVar22 != iVar12) {
          uVar20 = 0;
          local_88 = 0xffffffff;
          if (0 < (int)uVar3) {
            do {
              while (uVar19 = (uint)uVar20, uVar19 == uVar16) {
LAB_1425340e0:
                uVar20 = (ulonglong)(uVar19 + 1);
                if ((int)uVar3 <= (int)(uVar19 + 1)) goto LAB_1425341b0;
              }
              uVar2 = *(ushort *)(local_80 + uVar20 * 8 + 1);
              if ((uVar2 & 1) == 0) {
                if ((short)uVar2 < 0) {
                  uVar11 = *(uint *)((longlong)local_80 + uVar20 * 0x40 + 0xc);
                }
                else {
                  uVar11 = (int)(short)uVar2 >> 5;
                }
                uVar18 = (int)uVar11 >> 0x1f & uVar11;
                iVar12 = uVar11 - uVar18;
                if (iVar7 < iVar12) {
                  iVar12 = iVar22;
                }
                if ((uVar2 & 2) == 0) {
                  lVar10 = local_80[uVar20 * 8 + 3];
                }
                else {
                  lVar10 = (longlong)local_80 + uVar20 * 0x40 + 10;
                }
                local_60 = local_50;
                cVar6 = FUN_1424a7e30(local_80 + uVar13 * 8,0,iVar22,lVar10,uVar18,iVar12);
              }
              else {
                cVar6 = (*(byte *)(local_80 + uVar13 * 8 + 1) & 1) == 0;
              }
              if (cVar6 != '\0') goto LAB_1425340e0;
              uVar11 = *(uint *)((longlong)local_58 + uVar20 * 4);
              if (uVar11 != 0) {
                if ((uVar11 & 1) != 0) {
                  local_88 = uVar19;
                }
                goto LAB_1425340e0;
              }
              *(undefined4 *)((longlong)local_58 + uVar20 * 4) = 3;
              uVar20 = (ulonglong)(uVar19 + 1);
            } while ((int)(uVar19 + 1) < (int)uVar3);
          }
LAB_1425341b0:
          local_60 = local_50;
          FUN_1424a7950(&local_f0,local_80 + uVar13 * 8,0,iVar22);
          uVar13 = local_b0;
          if ((local_88 == 0xffffffff) && (*(int *)((longlong)local_58 + local_b0 * 4) == 0)) {
            iVar7 = local_e4;
            if (-1 < local_e8) {
              iVar7 = (int)local_e8 >> 5;
            }
            FUN_1424a98a0(&local_f0,0,iVar7);
            FUN_1425e7b50(local_68,&local_f0,1,local_78);
            local_84 = local_84 + 1;
            *(undefined4 *)((longlong)local_58 + uVar13 * 4) = 3;
          }
          FUN_140859a90(&local_f0);
        }
      }
    }
    iVar7 = 0;
    uVar16 = 0;
    while ((int)uVar16 < (int)uVar3) {
      uVar13 = (ulonglong)uVar16;
      plVar9 = local_80 + uVar13 * 8;
      if (*(int *)((longlong)local_58 + uVar13 * 4) == 0) {
        if ((short)local_80[uVar13 * 8 + 1] < 0) {
          iVar12 = *(int *)((longlong)local_80 + uVar13 * 0x40 + 0xc);
        }
        else {
          iVar12 = (int)(short)local_80[uVar13 * 8 + 1] >> 5;
        }
        local_60 = local_50;
        FUN_1424a98a0(plVar9,0,iVar12);
        local_60 = local_50;
        FUN_1425e7b50(local_68,plVar9,2,local_78);
        local_84 = local_84 + 1;
        uVar16 = uVar16 + 1;
      }
      else {
        local_60 = local_50;
        FUN_1425e7b50(local_70,plVar9,2,local_78);
        iVar7 = iVar7 + 1;
        uVar16 = uVar16 + 1;
      }
    }
    if (local_84 < 1) {
LAB_142534419:
      if (0 < iVar7) {
        local_60 = local_50;
        lVar10 = FUN_1425e7ce0(local_70,0,local_78);
        lVar14 = local_90;
        if (local_90 != 0) {
          FUN_1425e7160(local_90);
          FUN_1401773f0(lVar14);
        }
        local_90 = lVar10;
        if (0 < *local_78) {
          puVar8 = (undefined8 *)0x0;
          pvVar4 = local_58;
          puVar21 = local_50;
          goto joined_r0x00014253446a;
        }
      }
      puVar21 = local_50;
      pvVar4 = local_58;
      piVar5 = local_78;
      puVar8 = (undefined8 *)thunk_FUN_1424da030(0x160);
      lVar14 = local_90;
      lVar10 = local_98;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
        lVar10 = local_90;
      }
      else {
        local_98 = 0;
        local_90 = 0;
        local_50 = puVar8;
        FUN_142533150(puVar8,puVar21,lVar14,lVar10,piVar5);
        puVar21 = (undefined8 *)0x0;
        lVar10 = local_90;
        puVar8 = local_50;
        pvVar4 = local_58;
      }
    }
    else {
      local_60 = local_50;
      lVar14 = FUN_1425e7ce0(local_68,0,local_78);
      lVar10 = local_98;
      if (local_98 != 0) {
        FUN_1425e7160(local_98);
        FUN_1401773f0(lVar10);
      }
      local_98 = lVar14;
      if (*local_78 < 1) goto LAB_142534419;
LAB_14253434c:
      lVar10 = local_90;
      puVar8 = (undefined8 *)0x0;
      pvVar4 = local_58;
      puVar21 = local_50;
    }
joined_r0x00014253446a:
    local_90 = lVar10;
    if (lVar10 != 0) {
      FUN_1425e7160(lVar10);
      FUN_1401773f0(lVar10);
    }
    lVar10 = local_98;
    if (local_98 != 0) {
      FUN_1425e7160(local_98);
      FUN_1401773f0(lVar10);
    }
    FUN_1424da110(pvVar4);
    plVar9 = local_80;
    if (local_80 != (longlong *)0x0) {
      plVar17 = local_80 + -1;
      if (local_80[-1] != 0) {
        lVar10 = local_80[-1] << 6;
        do {
          FUN_140859a90((longlong)plVar9 + lVar10 + -0x40);
          lVar10 = lVar10 + -0x40;
        } while (lVar10 != 0);
      }
      FUN_1424b70c0(plVar17);
    }
    puVar15 = local_68;
    if (local_70 == (undefined8 *)0x0) goto LAB_1425343de;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    puVar21 = local_50;
  }
  puVar15 = local_68;
  (**(code **)*local_70)(local_70,1);
LAB_1425343de:
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
  if (puVar21 != (undefined8 *)0x0) {
    (**(code **)*puVar21)(puVar21,1);
  }
  return puVar8;
}



// FUNCTION 1425344d0 Unwind@1425344d0 body=62 status=ok
// SIG undefined Unwind@1425344d0(void)

void Unwind_1425344d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xd8));
  *(undefined8 *)(param_2 + 200) = 0;
  return;
}



// FUNCTION 142534510 Unwind@142534510 body=62 status=ok
// SIG undefined Unwind@142534510(void)

void Unwind_142534510(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xd8);
  return;
}



// FUNCTION 142534550 Unwind@142534550 body=62 status=ok
// SIG undefined Unwind@142534550(void)

void Unwind_142534550(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb8));
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0xd8);
  return;
}



// FUNCTION 142534590 Unwind@142534590 body=62 status=ok
// SIG undefined Unwind@142534590(void)

void Unwind_142534590(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0xd8);
  return;
}



// FUNCTION 1425345d0 Unwind@1425345d0 body=110 status=ok
// SIG undefined Unwind@1425345d0(void)

void Unwind_1425345d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 200);
  FUN_142533120(param_2 + 0x98);
  FUN_142533120(param_2 + 0x90);
  FUN_1424da110(*(undefined8 *)(param_2 + 0xd0));
  FUN_1425346e0(param_2 + 0xa8);
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xb8))(*(undefined8 **)(param_2 + 0xb8),1);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return;
}



// FUNCTION 142534640 Unwind@142534640 body=74 status=ok
// SIG undefined Unwind@142534640(void)

void Unwind_142534640(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xc0))(*(undefined8 **)(param_2 + 0xc0),1);
  }
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  return;
}



// FUNCTION 142534690 Unwind@142534690 body=65 status=ok
// SIG undefined Unwind@142534690(void)

void Unwind_142534690(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425346e0 FUN_1425346e0 body=87 status=ok
// SIG undefined FUN_1425346e0(void)

void FUN_1425346e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
    return;
  }
  return;
}



// FUNCTION 142534740 FUN_142534740 body=114 status=ok
// SIG undefined FUN_142534740(void)

undefined8 * FUN_142534740(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x30);
    if (puVar1 == (undefined8 *)0x0) {
      if (*param_2 < 1) {
        *param_2 = 7;
      }
    }
    else {
      FUN_1425339b0(puVar1,param_1,param_2,param_4,puVar1,uVar2);
      if (*param_2 < 1) {
        return puVar1;
      }
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425347c0 Unwind@1425347c0 body=34 status=ok
// SIG undefined Unwind@1425347c0(void)

void Unwind_1425347c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425347f0 FUN_1425347f0 body=95 status=ok
// SIG undefined FUN_1425347f0(void)

undefined8 * FUN_1425347f0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::SimpleFilteredSentenceBreakData::vftable;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1425e7160(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1425e7160(lVar1);
    FUN_1401773f0(lVar1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142534850 FUN_142534850 body=132 status=ok
// SIG undefined FUN_142534850(void)

undefined8 * FUN_142534850(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = icu_64::SimpleFilteredSentenceBreakIterator::vftable;
  puVar2 = (undefined8 *)param_1[0x29];
  iVar1 = *(int *)(puVar2 + 3);
  *(int *)(puVar2 + 3) = iVar1 + -1;
  if (iVar1 < 2) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0x29] = 0;
  if (param_1[0x2b] != 0) {
    FUN_14250edb0();
  }
  puVar2 = (undefined8 *)param_1[0x2a];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425348e0 FUN_1425348e0 body=3 status=ok
// SIG undefined FUN_1425348e0(void)

undefined8 FUN_1425348e0(void)

{
  return 0;
}



// FUNCTION 1425348f0 FUN_1425348f0 body=7 status=ok
// SIG undefined FUN_1425348f0(void)

bool FUN_1425348f0(longlong param_1,longlong param_2)

{
  return param_1 == param_2;
}



// FUNCTION 142534900 FUN_142534900 body=128 status=ok
// SIG undefined FUN_142534900(void)

undefined8 * FUN_142534900(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)thunk_FUN_1424da030(0x160);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1424ba460(puVar3,param_1);
    *puVar3 = icu_64::SimpleFilteredSentenceBreakIterator::vftable;
    lVar2 = *(longlong *)(param_1 + 0x148);
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar3[0x29] = lVar2;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))();
    puVar3[0x2a] = uVar4;
    puVar3[0x2b] = 0;
  }
  return puVar3;
}



// FUNCTION 142534980 Unwind@142534980 body=32 status=ok
// SIG undefined Unwind@142534980(void)

void Unwind_142534980(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425349a0 Unwind@1425349a0 body=32 status=ok
// SIG undefined Unwind@1425349a0(void)

void Unwind_1425349a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425349c0 FUN_1425349c0 body=14 status=ok
// SIG undefined FUN_1425349c0(void)

void FUN_1425349c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425349ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x20))();
  return;
}



// FUNCTION 1425349d0 FUN_1425349d0 body=17 status=ok
// SIG undefined FUN_1425349d0(void)

void FUN_1425349d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425349de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))();
  return;
}



// FUNCTION 1425349f0 FUN_1425349f0 body=17 status=ok
// SIG undefined FUN_1425349f0(void)

void FUN_1425349f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425349fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x30))();
  return;
}



// FUNCTION 142534a10 FUN_142534a10 body=17 status=ok
// SIG undefined FUN_142534a10(void)

void FUN_142534a10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142534a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x38))();
  return;
}



// FUNCTION 142534a30 FUN_142534a30 body=17 status=ok
// SIG undefined FUN_142534a30(void)

void FUN_142534a30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142534a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x40))();
  return;
}



// FUNCTION 142534a50 FUN_142534a50 body=14 status=ok
// SIG undefined FUN_142534a50(void)

void FUN_142534a50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142534a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x70))();
  return;
}



// FUNCTION 142534a60 FUN_142534a60 body=14 status=ok
// SIG undefined FUN_142534a60(void)

void FUN_142534a60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_4 = 0xffffff82;
                    /* WARNING: Could not recover jumptable at 0x000142534a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 142534a70 FUN_142534a70 body=33 status=ok
// SIG undefined FUN_142534a70(void)

longlong FUN_142534a70(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0xa8))();
  return param_1;
}



// FUNCTION 142534aa0 FUN_142534aa0 body=60 status=ok
// SIG undefined FUN_142534aa0(void)

undefined8 * FUN_142534aa0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::SimpleFilteredBreakIteratorBuilder::vftable;
  FUN_142515ff0(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142534ae0 FUN_142534ae0 body=38 status=ok
// SIG undefined FUN_142534ae0(void)

undefined8 FUN_142534ae0(undefined8 param_1,int param_2)

{
  FUN_142515ff0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142534b10 FUN_142534b10 body=121 status=ok
// SIG undefined FUN_142534b10(void)

ulonglong FUN_142534b10(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar2 < 0) {
      iVar6 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar6 = (int)(short)uVar2 >> 5;
    }
    if ((short)uVar1 < 0) {
      uVar4 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar4 = (int)(short)uVar1 >> 5;
    }
    uVar5 = uVar4;
    if ((int)uVar4 < 1) {
      uVar5 = 0;
    }
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
    uVar3 = FUN_1424a7e30(param_1,0,iVar6,param_2,(int)uVar4 >> 0x1f & uVar4,uVar5);
    return uVar3;
  }
  return (ulonglong)CONCAT11((char)(uVar1 >> 8),(uVar2 & 1) == 0);
}



// FUNCTION 142534b90 FUN_142534b90 body=51 status=ok
// SIG undefined FUN_142534b90(void)

undefined8 * FUN_142534b90(undefined8 *param_1)

{
  *param_1 = icu_64::ICUServiceKey::vftable;
  FUN_1424a6be0(param_1 + 1);
  return param_1;
}



// FUNCTION 142534bd0 Unwind@142534bd0 body=30 status=ok
// SIG undefined Unwind@142534bd0(void)

void Unwind_142534bd0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142534bf0 FUN_142534bf0 body=40 status=ok
// SIG undefined FUN_142534bf0(void)

void FUN_142534bf0(undefined8 *param_1)

{
  *param_1 = icu_64::ICUServiceKey::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142534c20 FUN_142534c20 body=5 status=ok
// SIG undefined FUN_142534c20(void)

longlong FUN_142534c20(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142534c30 FUN_142534c30 body=39 status=ok
// SIG undefined FUN_142534c30(void)

void FUN_142534c30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x10) < 0) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 0x10) >> 5;
  }
  FUN_1424a9690(param_2,param_1 + 8,0,iVar1);
  return;
}



// FUNCTION 142534c60 FUN_142534c60 body=10 status=ok
// SIG undefined FUN_142534c60(void)

void FUN_142534c60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142534c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 142534c70 FUN_142534c70 body=90 status=ok
// SIG undefined FUN_142534c70(void)

void FUN_142534c70(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x40))();
  local_1a = 0x2f;
  FUN_1424a6cf0(param_2,&local_1a,0,1);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142534ce0 FUN_142534ce0 body=3 status=ok
// SIG undefined FUN_142534ce0(void)

undefined8 FUN_142534ce0(void)

{
  return 0;
}



// FUNCTION 142534cf0 FUN_142534cf0 body=103 status=ok
// SIG undefined FUN_142534cf0(void)

bool FUN_142534cf0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    sVar2 = *(short *)(param_1 + 0x10);
    if (sVar2 < 0) {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar5 = (int)sVar2 >> 5;
    }
    bVar6 = false;
    if ((((int)sVar2 & 1U) == 0) && (iVar4 == iVar5)) {
      cVar3 = FUN_1412ae090(param_2,param_1 + 8);
      bVar6 = cVar3 != '\0';
    }
  }
  else {
    bVar6 = (bool)(*(byte *)(param_1 + 0x10) & 1);
  }
  return bVar6;
}



// FUNCTION 142534d60 FUN_142534d60 body=4 status=ok
// SIG undefined FUN_142534d60(void)

undefined8 FUN_142534d60(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 142534d70 FUN_142534d70 body=123 status=ok
// SIG undefined FUN_142534d70(void)

longlong FUN_142534d70(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 8) < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 8) >> 5;
  }
  iVar2 = FUN_1424a8940(param_1,0x2f,0,iVar2);
  if (-1 < iVar2) {
    if (iVar2 + 1 == 0x7fffffff) {
      uVar1 = 2;
      if ((*(ushort *)(param_1 + 8) & 1) == 0) {
        uVar1 = *(ushort *)(param_1 + 8) & 0x1f;
      }
      *(ushort *)(param_1 + 8) = uVar1;
    }
    else {
      FUN_1424a9130(param_1,0,iVar2 + 1,0,0,0);
    }
  }
  return param_1;
}



// FUNCTION 142534df0 FUN_142534df0 body=8 status=ok
// SIG undefined FUN_142534df0(void)

undefined * FUN_142534df0(void)

{
  return &DAT_14c793010;
}



// FUNCTION 142534e00 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 142534e10 FUN_142534e10 body=214 status=ok
// SIG undefined FUN_142534e10(void)

undefined8 FUN_142534e10(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined **local_60;
  undefined2 local_58;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return 0;
  }
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  lVar3 = (**(code **)(*param_2 + 0x20))(param_2,&local_60);
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar6 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar6 = (int)(short)uVar1 >> 5;
    }
    uVar1 = *(ushort *)(lVar3 + 8);
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(lVar3 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) != 0) || (iVar6 != iVar5)) goto LAB_142534ed0;
    bVar2 = FUN_1412ae090(param_1 + 0x10,lVar3);
  }
  else {
    bVar2 = *(byte *)(lVar3 + 8) & 1;
  }
  if (bVar2 != 0) {
    uVar4 = (**(code **)(*param_3 + 0x68))(param_3,*(undefined8 *)(param_1 + 8));
    FUN_140859a90(&local_60);
    return uVar4;
  }
LAB_142534ed0:
  FUN_140859a90(&local_60);
  return 0;
}



// FUNCTION 142534ef0 Unwind@142534ef0 body=34 status=ok
// SIG undefined Unwind@142534ef0(void)

void Unwind_142534ef0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142534f20 FUN_142534f20 body=117 status=ok
// SIG undefined FUN_142534f20(void)

void FUN_142534f20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 != 0) {
      FUN_1424a6be0(lVar1,param_1 + 0x10);
    }
    FUN_142502aa0(*param_2,lVar1,param_1,param_3);
    return;
  }
  thunk_FUN_142502da0(*param_2,param_1 + 0x10);
  return;
}



// FUNCTION 142534fa0 Unwind@142534fa0 body=36 status=ok
// SIG undefined Unwind@142534fa0(void)

void Unwind_142534fa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142534fd0 FUN_142534fd0 body=94 status=ok
// SIG undefined FUN_142534fd0(void)

void FUN_142534fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x40);
  if (lVar1 != 0) {
    FUN_1424a6be0(lVar1,param_2);
  }
  FUN_142502aa0(*param_1,lVar1,param_3,param_4);
  return;
}



// FUNCTION 142535030 Unwind@142535030 body=40 status=ok
// SIG undefined Unwind@142535030(void)

void Unwind_142535030(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142535060 FUN_142535060 body=138 status=ok
// SIG undefined FUN_142535060(void)

undefined8 FUN_142535060(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x18);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      uVar1 = *(ushort *)(param_2 + 8);
      if ((short)uVar1 < 0) {
        iVar3 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar3 = (int)(short)uVar1 >> 5;
      }
      if (((uVar1 & 1) != 0) || (iVar4 != iVar3)) goto LAB_1425350d8;
      bVar2 = FUN_1412ae090(param_1 + 0x10);
    }
    else {
      bVar2 = *(byte *)(param_2 + 8) & 1;
    }
    if (bVar2 != 0) {
      FUN_1424a7c80(param_4,param_1 + 0x10);
      return param_4;
    }
  }
LAB_1425350d8:
  FUN_1424a7130(param_4);
  return param_4;
}



// FUNCTION 1425350f0 FUN_1425350f0 body=8 status=ok
// SIG undefined FUN_1425350f0(void)

undefined * FUN_1425350f0(void)

{
  return &DAT_14c793011;
}



// FUNCTION 142535100 FUN_142535100 body=87 status=ok
// SIG undefined FUN_142535100(void)

void FUN_142535100(undefined8 *param_1,undefined8 param_2)

{
  FUN_1425367e0();
  *param_1 = icu_64::ICUService::vftable;
  FUN_1424a6be0(param_1 + 2,param_2);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



// FUNCTION 142535160 Unwind@142535160 body=34 status=ok
// SIG undefined Unwind@142535160(void)

void Unwind_142535160(undefined8 param_1,longlong param_2)

{
  FUN_142536800(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142535190 FUN_142535190 body=256 status=ok
// SIG undefined FUN_142535190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142535190(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = (longlong)icu_64::ICUService::vftable;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c793068) {
    FUN_144b3d300(&DAT_14c793068);
    if (DAT_14c793068 == -1) {
      _DAT_14c793058 = 0;
      uRam000000014c793060 = 0;
      _DAT_14c793048 = 0;
      uRam000000014c793050 = 0;
      _DAT_14c793038 = 0;
      uRam000000014c793040 = 0;
      _DAT_14c793028 = 0;
      uRam000000014c793030 = 0;
      _DAT_14c793018 = 0;
      uRam000000014c793020 = 0;
      _Mtx_init_in_situ(&DAT_14c793018,2);
      atexit((_func_5014 *)&LAB_1425367d0);
      _Init_thread_footer(&DAT_14c793068);
    }
  }
  FUN_142501320(&DAT_14c793018);
  (**(code **)(*param_1 + 0x88))(param_1);
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,uVar2);
  }
  param_1[0xb] = 0;
  FUN_142501400(&DAT_14c793018);
  FUN_140859a90(param_1 + 2);
  FUN_142536800(param_1);
  return;
}



// FUNCTION 142535290 Unwind@142535290 body=20 status=ok
// SIG undefined Unwind@142535290(void)

void Unwind_142535290(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425352b0 FUN_1425352b0 body=16 status=ok
// SIG undefined FUN_1425352b0(void)

void FUN_1425352b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001425352bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 1425352c0 FUN_1425352c0 body=23 status=ok
// SIG undefined FUN_1425352c0(void)

void FUN_1425352c0(void)

{
  FUN_1425352e0();
  return;
}



// FUNCTION 1425352e0 FUN_1425352e0 body=1755 status=ok
// SIG undefined FUN_1425352e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1425352e0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ushort uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 uVar13;
  undefined **local_c8;
  ushort local_c0;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  int *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x58))();
  if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142535368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_5);
    return uVar4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c793068) && (FUN_144b3d300(&DAT_14c793068), DAT_14c793068 == -1)) {
    _DAT_14c793058 = 0;
    uRam000000014c793060 = 0;
    _DAT_14c793048 = 0;
    uRam000000014c793050 = 0;
    _DAT_14c793038 = 0;
    uRam000000014c793040 = 0;
    _DAT_14c793028 = 0;
    uRam000000014c793030 = 0;
    _DAT_14c793018 = 0;
    uRam000000014c793020 = 0;
    _Mtx_init_in_situ(&DAT_14c793018,2);
    atexit((_func_5014 *)&LAB_1425367d0);
    _Init_thread_footer(&DAT_14c793068);
  }
  if (param_4 == 0) {
    FUN_142501320(&DAT_14c793018);
    lVar6 = param_1[0xc];
  }
  else {
    lVar6 = param_1[0xc];
  }
  if (lVar6 == 0) {
    plVar5 = (longlong *)thunk_FUN_1424da030(0x58);
    if (plVar5 == (longlong *)0x0) {
      param_1[0xc] = 0;
    }
    else {
      *plVar5 = 0;
      if (*param_5 < 1) {
        plVar11 = plVar5 + 1;
        FUN_142502140(plVar11,FUN_1424a9c90,FUN_1424a9cd0,0,param_5);
        if (*param_5 < 1) {
          *plVar5 = (longlong)plVar11;
          FUN_142502340(plVar11,&LAB_1424b70f0);
        }
      }
      param_1[0xc] = (longlong)plVar5;
      if (*param_5 < 1) {
        FUN_142502350(*plVar5,FUN_142535b20);
        goto LAB_142535461;
      }
      if (*plVar5 != 0) {
        FUN_142502220();
      }
      FUN_1401773f0(plVar5);
    }
    local_58 = (int *)&DAT_00000001;
    uVar4 = 0;
    goto joined_r0x00014253590e;
  }
LAB_142535461:
  local_c8 = &PTR_FUN_149e18960;
  local_c0 = 2;
  iVar12 = *(int *)(param_1[0xb] + 8);
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  if (param_4 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    do {
      if (iVar12 <= iVar10) {
        *param_5 = 1;
        local_58 = (int *)&DAT_00000001;
        uVar4 = 0;
        param_4 = local_68;
        goto LAB_1425358fa;
      }
      local_60 = (undefined8 *)0x0;
      lVar6 = FUN_142516630(param_1[0xb],iVar10);
      iVar10 = iVar10 + 1;
    } while (lVar6 != local_68);
  }
  puVar8 = (undefined8 *)0x0;
  uVar13 = 0;
  do {
    uVar9 = local_c0 & 0x1f;
    if ((local_c0 & 1) != 0) {
      uVar9 = 2;
    }
    local_c0 = uVar9;
    local_60 = puVar8;
    (**(code **)(*local_78 + 0x28))(local_78,&local_c8);
    local_50 = puVar8;
    piVar7 = (int *)FUN_142502620(*(undefined8 *)param_1[0xc],&local_c8);
    iVar2 = iVar10;
    puVar8 = local_50;
    if (piVar7 != (int *)0x0) {
joined_r0x00014253579d:
      local_60 = puVar8;
      local_50 = local_60;
      if ((local_68 != 0) || ((char)uVar13 == '\0')) goto LAB_1425357a3;
      FUN_142534fd0(param_1[0xc],piVar7 + 2,piVar7,param_5);
      local_58 = (int *)&DAT_00000001;
      if (0 < *param_5) goto LAB_1425358e3;
      if (local_50 == (undefined8 *)0x0) goto LAB_1425357a3;
      iVar12 = *(int *)(local_50 + 1);
      local_88 = uVar13;
      goto LAB_1425356f8;
    }
    while (puVar8 = local_50, iVar2 < iVar12) {
      local_60 = local_50;
      plVar5 = (longlong *)FUN_142516630(param_1[0xb],iVar2);
      local_60 = puVar8;
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,local_78,param_1,param_5);
      if (0 < *param_5) {
        if (puVar8 == (undefined8 *)0x0) goto LAB_1425358d7;
        local_58 = (int *)&DAT_00000001;
        (**(code **)*puVar8)(puVar8,1);
        goto LAB_1425358e3;
      }
      iVar2 = iVar2 + 1;
      if (puVar8 != (undefined8 *)0x0) {
        local_58 = (int *)thunk_FUN_1424da030(0x50);
        if (local_58 == (int *)0x0) {
          local_58 = (int *)&DAT_00000001;
          (**(code **)*puVar8)(puVar8,1);
          *param_5 = 7;
          goto LAB_1425358e3;
        }
        *local_58 = 1;
        FUN_1424a6be0(local_58 + 2,&local_c8);
        *(undefined8 **)(local_58 + 0x12) = puVar8;
        uVar13 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
        piVar7 = local_58;
        puVar8 = local_50;
        goto joined_r0x00014253579d;
      }
    }
    if (local_50 == (undefined8 *)0x0) {
      local_50 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (local_50 != (undefined8 *)0x0) {
        FUN_142515f80(local_50,&LAB_1424b70f0,0,5,param_5);
      }
      if (*param_5 < 1) goto LAB_1425355ae;
LAB_142535943:
      local_58 = (int *)&DAT_00000001;
      goto LAB_1425358e3;
    }
LAB_1425355ae:
    local_58 = (int *)thunk_FUN_1424da030(0x40);
    if ((local_58 == (int *)0x0) ||
       (FUN_1424a6be0(local_58,&local_c8), (*(byte *)(local_58 + 2) & 1) != 0)) {
      *param_5 = 7;
      goto LAB_1425358d7;
    }
    local_60 = local_50;
    FUN_1425163e0(local_50,local_58,param_5);
    puVar8 = local_50;
    if (0 < *param_5) goto LAB_142535943;
    local_60 = local_50;
    cVar3 = (**(code **)(*local_78 + 0x30))();
    uVar13 = 1;
  } while (cVar3 != '\0');
  local_58 = (int *)0x0;
LAB_1425358e3:
  uVar4 = 0;
  param_4 = local_68;
LAB_1425358e7:
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
LAB_1425358fa:
  param_3 = local_70;
  param_2 = local_78;
  FUN_140859a90(&local_c8);
joined_r0x00014253590e:
  if (param_4 == 0) {
    FUN_142501400(&DAT_14c793018);
  }
  if ((int)local_58 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_5);
  }
  return uVar4;
LAB_1425356f8:
  uVar13 = local_88;
  if (iVar12 < 1) goto LAB_1425357a3;
  iVar12 = iVar12 + -1;
  local_60 = local_50;
  uVar4 = FUN_142516630(local_50,iVar12);
  puVar8 = (undefined8 *)param_1[0xc];
  local_80 = thunk_FUN_1424da030(0x40);
  if (local_80 != 0) {
    FUN_1424a6be0(local_80,uVar4);
  }
  FUN_142502aa0(*puVar8,local_80,piVar7,param_5);
  if (0 < *param_5) goto LAB_1425358e3;
  *piVar7 = *piVar7 + 1;
  local_60 = local_50;
  FUN_142516850(local_50,iVar12);
  goto LAB_1425356f8;
LAB_1425357a3:
  if (local_70 != 0) {
    piVar1 = piVar7 + 2;
    if ((short)piVar7[4] < 0) {
      iVar12 = piVar7[5];
    }
    else {
      iVar12 = (int)(short)piVar7[4] >> 5;
    }
    local_60 = local_50;
    iVar12 = FUN_1424a8940(piVar1,0x2f,0,iVar12);
    if (iVar12 == 0) {
      uVar9 = 2;
      if ((*(ushort *)(local_70 + 8) & 1) == 0) {
        uVar9 = *(ushort *)(local_70 + 8) & 0x1f;
      }
      *(ushort *)(local_70 + 8) = uVar9;
      if ((short)piVar7[4] < 0) {
        iVar12 = piVar7[5];
      }
      else {
        iVar12 = (int)(short)piVar7[4] >> 5;
      }
      local_60 = local_50;
      FUN_1424a9690(local_70,piVar1,1,iVar12 + -1);
    }
    else {
      local_60 = local_50;
      FUN_1424a7c80(local_70,piVar1);
    }
    if ((*(byte *)(local_70 + 8) & 1) != 0) {
      *param_5 = 7;
      puVar8 = *(undefined8 **)(piVar7 + 0x12);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      FUN_140859a90(piVar1);
      FUN_1401773f0(piVar7);
LAB_1425358d7:
      local_58 = (int *)&DAT_00000001;
      goto LAB_1425358e3;
    }
  }
  local_60 = local_50;
  uVar4 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined8 *)(piVar7 + 0x12));
  param_4 = local_68;
  local_58 = (int *)&DAT_00000001;
  if ((local_68 != 0) && ((char)uVar13 != '\0')) {
    puVar8 = *(undefined8 **)(piVar7 + 0x12);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    FUN_140859a90(piVar7 + 2);
    FUN_1401773f0(piVar7);
  }
  goto LAB_1425358e7;
}



// FUNCTION 1425359c0 Unwind@1425359c0 body=62 status=ok
// SIG undefined Unwind@1425359c0(void)

void Unwind_1425359c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  *(undefined8 *)(param_2 + 0x98) = 0;
  return;
}



// FUNCTION 142535a00 Unwind@142535a00 body=62 status=ok
// SIG undefined Unwind@142535a00(void)

void Unwind_142535a00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0xa8);
  return;
}



// FUNCTION 142535a40 Unwind@142535a40 body=62 status=ok
// SIG undefined Unwind@142535a40(void)

void Unwind_142535a40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x78));
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0xa8);
  return;
}


