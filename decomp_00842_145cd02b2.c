// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cd02b2 FUN_145cd02b2 body=249 status=ok
// SIG undefined FUN_145cd02b2(void)

undefined8 * FUN_145cd02b2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bdbd980;
  param_1[5] = &PTR_FUN_14bdbdd20;
  param_1[0x13] = &PTR_FUN_14bdbdd40;
  param_1[0x17] = &PTR_FUN_14bdbdd70;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_1446f470e(&local_20,L"RemeshProperties",1);
  uVar1 = FUN_145923e26();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x18] = lVar2;
  FUN_14472eae2(lVar2,8);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd03ac FUN_145cd03ac body=57 status=ok
// SIG undefined FUN_145cd03ac(void)

void FUN_145cd03ac(longlong param_1)

{
  longlong lVar1;
  
  FUN_145cd03e6();
  FUN_140457ffc(&DAT_14cb10a20,param_1);
  lVar1 = thunk_FUN_1404eee4c(param_1 + 0x90);
  FUN_140457ffc(lVar1 + 8,param_1);
  return;
}



// FUNCTION 145cd03e6 FUN_145cd03e6 body=72 status=ok
// SIG undefined FUN_145cd03e6(void)

void FUN_145cd03e6(undefined8 param_1)

{
  longlong lVar1;
  
  if (DAT_14c868883 == '\x01') {
    FUN_14146e7de();
    lVar1 = 0;
    do {
      FUN_140457ffc(&DAT_14c9a3f50 + lVar1,param_1);
      lVar1 = lVar1 + 0x18;
    } while (lVar1 != 0xa8);
  }
  return;
}



// FUNCTION 145cd042e FUN_145cd042e body=39 status=ok
// SIG undefined FUN_145cd042e(void)

void FUN_145cd042e(void)

{
  FUN_145cd065e();
  FUN_145cd0456();
  FUN_145cd055a();
  FUN_145cd0a0e();
  FUN_145cd08be();
  FUN_145cd0b6e();
  return;
}



// FUNCTION 145cd0456 FUN_145cd0456 body=203 status=ok
// SIG undefined FUN_145cd0456(void)

void FUN_145cd0456(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd0522();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df670;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0522 FUN_145cd0522 body=55 status=ok
// SIG undefined FUN_145cd0522(void)

void FUN_145cd0522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf6a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf6a0 = FUN_140002ddd(FUN_146370110,uVar1,L"IntegerAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd055a FUN_145cd055a body=203 status=ok
// SIG undefined FUN_145cd055a(void)

void FUN_145cd055a(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd0626();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df6b0;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0626 FUN_145cd0626 body=55 status=ok
// SIG undefined FUN_145cd0626(void)

void FUN_145cd0626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf6b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf6b8 = FUN_140002ddd(FUN_146370170,uVar1,L"StringAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd065e FUN_145cd065e body=274 status=ok
// SIG undefined FUN_145cd065e(void)

void FUN_145cd065e(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd07f8();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6f0;
  lVar4 = (longlong)(int)DAT_14cacd6f0;
  DAT_14cacd6f0 = DAT_14cacd6f0 + 1;
  if (DAT_14cacd6f4 < DAT_14cacd6f0) {
    FUN_145cd0772(&DAT_14cacd6e8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6e8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df630;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0772 FUN_145cd0772 body=132 status=ok
// SIG undefined FUN_145cd0772(void)

void FUN_145cd0772(longlong param_1,int param_2)

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



// FUNCTION 145cd07f8 FUN_145cd07f8 body=55 status=ok
// SIG undefined FUN_145cd07f8(void)

void FUN_145cd07f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf688 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf688 = FUN_140002ddd(FUN_1463700b0,uVar1,L"FloatAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd0830 FUN_145cd0830 body=140 status=ok
// SIG undefined FUN_145cd0830(void)

void FUN_145cd0830(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cacd6e0;
  if (param_1 <= (int)DAT_14cacd6e0) {
    if (DAT_14cacd6e4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cacd6e0) {
        uVar2 = DAT_14cacd6e0;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cacd6e0 + ((ulonglong)((longlong)(int)DAT_14cacd6e0 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cacd6e4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cacd6d8,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cd08be FUN_145cd08be body=279 status=ok
// SIG undefined FUN_145cd08be(void)

void FUN_145cd08be(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd09d6();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6f0;
  lVar4 = (longlong)(int)DAT_14cacd6f0;
  DAT_14cacd6f0 = DAT_14cacd6f0 + 1;
  if (DAT_14cacd6f4 < DAT_14cacd6f0) {
    FUN_145cd0772(&DAT_14cacd6e8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6e8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df730;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd09d6 FUN_145cd09d6 body=55 status=ok
// SIG undefined FUN_145cd09d6(void)

void FUN_145cd09d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf6e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf6e8 = FUN_140002ddd(FUN_146370230,uVar1,L"VectorAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd0a0e FUN_145cd0a0e body=294 status=ok
// SIG undefined FUN_145cd0a0e(void)

void FUN_145cd0a0e(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd0b36();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6f0;
  lVar4 = (longlong)(int)DAT_14cacd6f0;
  DAT_14cacd6f0 = DAT_14cacd6f0 + 1;
  if (DAT_14cacd6f4 < DAT_14cacd6f0) {
    FUN_145cd0772(&DAT_14cacd6e8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6e8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df6f0;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0b36 FUN_145cd0b36 body=55 status=ok
// SIG undefined FUN_145cd0b36(void)

void FUN_145cd0b36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf6d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf6d0 = FUN_140002ddd(FUN_1463701d0,uVar1,L"TransformAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd0b6e FUN_145cd0b6e body=294 status=ok
// SIG undefined FUN_145cd0b6e(void)

void FUN_145cd0b6e(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_145cd0c96();
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6d0;
  lVar4 = (longlong)(int)DAT_14cacd6d0;
  DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
  if (DAT_14cacd6d4 < DAT_14cacd6d0) {
    FUN_145cd0772(&DAT_14cacd6c8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6c8 + lVar4 * 8) = local_20;
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar2);
  iVar1 = DAT_14cacd6f0;
  lVar4 = (longlong)(int)DAT_14cacd6f0;
  DAT_14cacd6f0 = DAT_14cacd6f0 + 1;
  if (DAT_14cacd6f4 < DAT_14cacd6f0) {
    FUN_145cd0772(&DAT_14cacd6e8,iVar1);
  }
  *(undefined8 *)(DAT_14cacd6e8 + lVar4 * 8) = local_20;
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar3 = &PTR_FUN_14a7df770;
  iVar1 = DAT_14cacd6e0;
  lVar4 = (longlong)(int)DAT_14cacd6e0;
  DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
  if (DAT_14cacd6e4 < DAT_14cacd6e0) {
    FUN_145cd0830(iVar1);
  }
  *(undefined8 **)(DAT_14cacd6d8 + lVar4 * 8) = puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0c96 FUN_145cd0c96 body=55 status=ok
// SIG undefined FUN_145cd0c96(void)

void FUN_145cd0c96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf700 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf700 = FUN_140002ddd(FUN_146370290,uVar1,L"QuaternionAnimationAttribute");
  }
  return;
}



// FUNCTION 145cd0cce FUN_145cd0cce body=9 status=ok
// SIG undefined FUN_145cd0cce(void)

void FUN_145cd0cce(longlong param_1)

{
  FUN_145cd0cd8(param_1 + 0x10);
  return;
}



// FUNCTION 145cd0cd8 FUN_145cd0cd8 body=178 status=ok
// SIG undefined FUN_145cd0cd8(void)

void FUN_145cd0cd8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c1aa0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_145cd0dbf(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd0d8a(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cd0d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cd0d8a FUN_145cd0d8a body=53 status=ok
// SIG undefined FUN_145cd0d8a(void)

void FUN_145cd0d8a(longlong *param_1)

{
  FUN_145cd0df6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd0dbf FUN_145cd0dbf body=55 status=ok
// SIG undefined FUN_145cd0dbf(void)

void FUN_145cd0dbf(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cd0df6 FUN_145cd0df6 body=350 status=ok
// SIG undefined FUN_145cd0df6(void)

void FUN_145cd0df6(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x38 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145cd0f56 FUN_145cd0f56 body=152 status=ok
// SIG undefined FUN_145cd0f56(void)

void FUN_145cd0f56(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_1475d7d52(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd101a FUN_145cd101a body=26 status=ok
// SIG undefined FUN_145cd101a(void)

void FUN_145cd101a(undefined8 param_1)

{
  FUN_145cd1034();
  FUN_145cd1092(param_1);
  return;
}



// FUNCTION 145cd1034 FUN_145cd1034 body=94 status=ok
// SIG undefined FUN_145cd1034(void)

void FUN_145cd1034(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140790e84(param_1 + 0x138);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
        lVar1 = *(longlong *)(param_1 + 0xd0);
        lVar2 = (longlong)*(int *)(param_1 + 0xd8) * 0x38;
        do {
          FUN_1411ab7fc(lVar1);
          lVar1 = lVar1 + 0x38;
          lVar2 = lVar2 + -0x38;
        } while (lVar2 != 0);
      }
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 145cd1092 FUN_145cd1092 body=163 status=ok
// SIG undefined FUN_145cd1092(void)

void FUN_145cd1092(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong *)(param_1 + 0x340) != 0)) {
    lVar1 = FUN_14603c812(param_1);
    if (lVar1 != 0) {
      FUN_14603ccb6(lVar1);
    }
    local_20 = &local_29;
    local_28 = &LAB_1441e83c6;
    FUN_14603c8c8(param_1);
    FUN_1415287c4(param_1 + 0x338);
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd1136 FUN_145cd1136 body=40 status=ok
// SIG undefined FUN_145cd1136(void)

undefined8 FUN_145cd1136(undefined8 param_1,int param_2)

{
  FUN_145cd115e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd115e FUN_145cd115e body=589 status=ok
// SIG undefined FUN_145cd115e(void)

void FUN_145cd115e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b670fd0;
  param_1[0x72] = &PTR_FUN_14b671660;
  param_1[0x73] = &PTR_FUN_14b671680;
  param_1[0x74] = &PTR_FUN_14b6716b0;
  param_1[0x75] = &PTR_FUN_14b6716c0;
  param_1[0x76] = &PTR_FUN_14b671730;
  param_1[0x77] = &PTR_FUN_14b671760;
  param_1[0x78] = &PTR_FUN_14b671790;
  param_1[0x7f] = &PTR_FUN_14b671840;
  param_1[0x80] = &PTR_FUN_14b6718b0;
  param_1[0x81] = &PTR_FUN_14b671920;
  param_1[0x82] = &PTR_FUN_14b671950;
  param_1[0x83] = &PTR_FUN_14b671990;
  param_1[0x84] = &PTR_FUN_14b671a30;
  param_1[0x85] = &PTR_FUN_14b671a50;
  param_1[0x89] = &PTR_FUN_14b671a70;
  param_1[0x8a] = &PTR_FUN_14b671b30;
  param_1[0x8b] = &PTR_FUN_14b671bb0;
  param_1[0x8c] = &PTR_FUN_14b671c00;
  param_1[0x8d] = &PTR_FUN_14b671c40;
  param_1[0x8e] = &PTR_FUN_14b671c60;
  param_1[0x8f] = &PTR_FUN_14b671c80;
  param_1[0x90] = &PTR_FUN_14b671ca0;
  param_1[0x91] = &PTR_FUN_14b671cc0;
  param_1[0x92] = &PTR_FUN_14b671ce0;
  param_1[0x93] = &PTR_FUN_14b671d00;
  param_1[0x94] = &PTR_FUN_14b671d20;
  param_1[0x95] = &PTR_FUN_14b671d40;
  param_1[0x96] = &PTR_FUN_14b671d60;
  param_1[0x34b] = &PTR_FUN_14b671d80;
  param_1[0x352] = &PTR_FUN_14b671d90;
  param_1[0x353] = &PTR_FUN_14b671dd0;
  param_1[0x354] = &PTR_FUN_14b671e10;
  param_1[0x355] = &PTR_FUN_14b671e60;
  param_1[0x356] = &PTR_FUN_14b671e90;
  param_1[0x359] = &PTR_FUN_14b671ed0;
  param_1[0x35a] = &PTR_FUN_14b671ee0;
  param_1[0x35b] = &PTR_FUN_14b671f10;
  param_1[0x35c] = &PTR_FUN_14b671fb0;
  param_1[0x4bf] = &PTR_FUN_14b671fd0;
  FUN_145cd13ac(param_1 + 0x4e0);
  FUN_14102816a(param_1);
  return;
}



// FUNCTION 145cd13ac FUN_145cd13ac body=83 status=ok
// SIG undefined FUN_145cd13ac(void)

void FUN_145cd13ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b676410;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 145cd1400 FUN_145cd1400 body=309 status=ok
// SIG undefined FUN_145cd1400(void)

void FUN_145cd1400(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong *local_190;
  undefined1 local_188 [296];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    local_188[0] = DAT_14c96b238;
    local_60 = 0;
    local_58 = 0x400000000;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    plVar4 = (longlong *)param_2[1];
    local_198 = lVar3;
    if (plVar4 == (longlong *)0x0) {
      local_190 = (longlong *)0x0;
      cVar5 = FUN_1407c4db4(param_1 + 0x36,&local_198,local_188);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_190 = plVar4;
      cVar5 = FUN_1407c4db4(param_1 + 0x36,&local_198,local_188);
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
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 0x158))(param_1,local_188,param_3);
    }
    FUN_1447fa21a(local_188);
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cd1536 FUN_145cd1536 body=305 status=ok
// SIG undefined FUN_145cd1536(void)

void FUN_145cd1536(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x310);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar8);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
        FUN_1410a406a(param_1,lVar3,param_2,param_3);
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar8);
  }
  lVar5 = (longlong)*(int *)(param_2 + 0x130);
  if (lVar5 < 1) {
    plVar7 = *(longlong **)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (plVar7 == (longlong *)0x0) goto LAB_145cd15f9;
  }
  else {
    lVar8 = param_2 + 8;
    if (*(longlong *)(param_2 + 0x128) != 0) {
      lVar8 = *(longlong *)(param_2 + 0x128);
    }
    uVar4 = *(undefined8 *)(lVar8 + -0x10 + lVar5 * 0x48);
    plVar7 = *(longlong **)(lVar8 + -8 + lVar5 * 0x48);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x330) = uVar4;
      plVar6 = *(longlong **)(param_1 + 0x338);
      if (plVar6 == (longlong *)0x0) goto LAB_145cd15f9;
LAB_145cd15e5:
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      *(longlong **)(param_1 + 0x338) = plVar7;
      if (plVar7 == (longlong *)0x0) goto LAB_145cd15f9;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x330) = uVar4;
      if (*(longlong **)(param_1 + 0x338) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x338);
        if (plVar6 != (longlong *)0x0) goto LAB_145cd15e5;
        *(longlong **)(param_1 + 0x338) = plVar7;
      }
    }
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_145cd15f9;
    (**(code **)*plVar7)(plVar7);
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar7 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_145cd15f9:
  *(char *)(param_1 + 0x340) = (char)param_3;
  return;
}



// FUNCTION 145cd1672 FUN_145cd1672 body=115 status=ok
// SIG undefined FUN_145cd1672(void)

undefined8 * FUN_145cd1672(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad81f10;
  param_1[7] = &PTR_FUN_14ad82350;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  FUN_145cd16e6(puVar2,param_1);
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145cd16e6 FUN_145cd16e6 body=133 status=ok
// SIG undefined FUN_145cd16e6(void)

undefined8 * FUN_145cd16e6(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ad87a60;
  FUN_14485c47a(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145cd1776 FUN_145cd1776 body=451 status=ok
// SIG undefined FUN_145cd1776(void)

undefined8 * FUN_145cd1776(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b18f780;
  *(undefined4 *)(param_1 + 0x16) = 0xdeadbeee;
  param_1[0x17] = "breakdown";
  FUN_1400b22c2(local_58,"GbxItem.BreakDown");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd193a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd186e;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd186e:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd193a FUN_145cd193a body=55 status=ok
// SIG undefined FUN_145cd193a(void)

void FUN_145cd193a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fd20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fd20 = FUN_140002ddd(FUN_1464e929f,uVar1,L"GbxItemBreakDownDef");
  }
  return;
}



// FUNCTION 145cd197c FUN_145cd197c body=451 status=ok
// SIG undefined FUN_145cd197c(void)

undefined8 * FUN_145cd197c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b348a70;
  *(undefined4 *)(param_1 + 0x16) = 0x2005;
  param_1[0x17] = "MissionArchetype";
  FUN_140056680(local_58,L"Missions.MissionArchetype");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd1b40();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd1a74;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd1a74:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd1b40 FUN_145cd1b40 body=55 status=ok
// SIG undefined FUN_145cd1b40(void)

void FUN_145cd1b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc38 = FUN_140002ddd(FUN_14652e46c,uVar1,L"MissionArchetypeDef");
  }
  return;
}



// FUNCTION 145cd1b82 FUN_145cd1b82 body=247 status=ok
// SIG undefined FUN_145cd1b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145cd1b82(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b37e510;
  *(undefined4 *)(param_1 + 0x16) = 0x19107;
  param_1[0x17] = "skill_state_machine";
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8be18) {
    FUN_144b3d300(&DAT_14cb8be18);
    if (DAT_14cb8be18 == -1) {
      _DAT_14cb8be00 = "state";
      _DAT_14cb8be08 = "register";
      _DAT_14cb8be10 = 0;
      _Init_thread_footer(&DAT_14cb8be18);
    }
  }
  param_1[0x18] = &DAT_14cb8be00;
  FUN_1400b22c2(local_28,"GbxSkills.Skill State Machine");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd1c86 FUN_145cd1c86 body=451 status=ok
// SIG undefined FUN_145cd1c86(void)

undefined8 * FUN_145cd1c86(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b38e040;
  *(undefined4 *)(param_1 + 0x16) = 0xb4216cde;
  param_1[0x17] = "globalactivities";
  FUN_1400b22c2(local_58,"GlobalActivities");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd1e4a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd1d7e;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd1d7e:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd1e4a FUN_145cd1e4a body=55 status=ok
// SIG undefined FUN_145cd1e4a(void)

void FUN_145cd1e4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f378 = FUN_140002ddd(FUN_1464e5c41,uVar1,L"GbxGlobalActivitiesDef");
  }
  return;
}



// FUNCTION 145cd1e8c FUN_145cd1e8c body=451 status=ok
// SIG undefined FUN_145cd1e8c(void)

undefined8 * FUN_145cd1e8c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b38e540;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0001;
  param_1[0x17] = "rotation";
  FUN_1400b22c2(local_58,"Animation.Rotation");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2050();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd1f84;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd1f84:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2050 FUN_145cd2050 body=55 status=ok
// SIG undefined FUN_145cd2050(void)

void FUN_145cd2050(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62ca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62ca0 = FUN_140002ddd(FUN_1464fab5a,uVar1,L"GbxRotationDef");
  }
  return;
}



// FUNCTION 145cd2092 FUN_145cd2092 body=451 status=ok
// SIG undefined FUN_145cd2092(void)

undefined8 * FUN_145cd2092(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b71a680;
  *(undefined4 *)(param_1 + 0x16) = 0xbbaaaddd;
  param_1[0x17] = "collectible";
  FUN_1400b22c2(local_58,"OakCollectibleSetCompletionDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2256();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd218a;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd218a:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2256 FUN_145cd2256 body=55 status=ok
// SIG undefined FUN_145cd2256(void)

void FUN_145cd2256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba91c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba91c0 = FUN_140002ddd(FUN_1465d2d7c,uVar1,L"OakCollectibleSetCompletionDef");
  }
  return;
}



// FUNCTION 145cd2298 FUN_145cd2298 body=451 status=ok
// SIG undefined FUN_145cd2298(void)

undefined8 * FUN_145cd2298(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b7212e0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0049;
  param_1[0x17] = "CorpseArchetype";
  FUN_1400b22c2(local_58,"Animation.CorpseArchetype");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd245c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd2390;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd2390:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd245c FUN_145cd245c body=55 status=ok
// SIG undefined FUN_145cd245c(void)

void FUN_145cd245c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9270 = FUN_140002ddd(FUN_1465d3448,uVar1,L"OakCorpseArchetypeDef");
  }
  return;
}



// FUNCTION 145cd249e FUN_145cd249e body=451 status=ok
// SIG undefined FUN_145cd249e(void)

undefined8 * FUN_145cd249e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b79c3a0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0420;
  param_1[0x17] = "cinematic_player_exit";
  FUN_1400b22c2(local_58,"Cinematics.PlayerExit");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2662();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd2596;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd2596:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2662 FUN_145cd2662 body=55 status=ok
// SIG undefined FUN_145cd2662(void)

void FUN_145cd2662(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabea8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabea8 = FUN_140002ddd(FUN_1465df84e,uVar1,L"OakLevelSequencePlayerExitDef");
  }
  return;
}



// FUNCTION 145cd26a4 FUN_145cd26a4 body=451 status=ok
// SIG undefined FUN_145cd26a4(void)

undefined8 * FUN_145cd26a4(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b7bb6e0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0006;
  param_1[0x17] = "formation";
  FUN_1400b22c2(local_58,"AI.NavFormation");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2868();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd279c;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd279c:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2868 FUN_145cd2868 body=55 status=ok
// SIG undefined FUN_145cd2868(void)

void FUN_145cd2868(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad048 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad048 = FUN_140002ddd(FUN_1465e43b5,uVar1,L"OakNavFormationDef");
  }
  return;
}



// FUNCTION 145cd28aa FUN_145cd28aa body=451 status=ok
// SIG undefined FUN_145cd28aa(void)

undefined8 * FUN_145cd28aa(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b802440;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0004;
  param_1[0x17] = &DAT_14b9a0d60;
  FUN_1400b22c2(local_58,"AI.Town");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2a6e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd29a2;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd29a2:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2a6e FUN_145cd2a6e body=55 status=ok
// SIG undefined FUN_145cd2a6e(void)

void FUN_145cd2a6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf440 = FUN_140002ddd(FUN_1465ef150,uVar1,L"OakTownDef");
  }
  return;
}



// FUNCTION 145cd2ab0 FUN_145cd2ab0 body=451 status=ok
// SIG undefined FUN_145cd2ab0(void)

undefined8 * FUN_145cd2ab0(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b914c60;
  *(undefined4 *)(param_1 + 0x16) = 0xdeadf00d;
  param_1[0x17] = "poa_actor";
  FUN_1400b22c2(local_58,"Activities.PoAActorDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd2c74();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd2ba8;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd2ba8:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd2c74 FUN_145cd2c74 body=55 status=ok
// SIG undefined FUN_145cd2c74(void)

void FUN_145cd2c74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfba0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfba0 = FUN_140002ddd(FUN_146613f4c,uVar1,L"PoAActorDef");
  }
  return;
}



// FUNCTION 145cd2cac FUN_145cd2cac body=40 status=ok
// SIG undefined FUN_145cd2cac(void)

undefined8 FUN_145cd2cac(undefined8 param_1,int param_2)

{
  FUN_145cd2cd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd2cd4 FUN_145cd2cd4 body=85 status=ok
// SIG undefined FUN_145cd2cd4(void)

void FUN_145cd2cd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4cf520;
  plVar3 = (longlong *)param_1[0x38];
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
  FUN_145cd2d2a(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cd2d2a FUN_145cd2d2a body=99 status=ok
// SIG undefined FUN_145cd2d2a(void)

void FUN_145cd2d2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1409ca440(param_1 + 0x170);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
    FUN_140457ffc(lVar1 + 0x658,param_1);
    FUN_140457ffc(lVar1 + 0x670,param_1);
    FUN_140457ffc(lVar1 + 0x688,param_1);
  }
  FUN_145cd2d8e(param_1);
  return;
}



// FUNCTION 145cd2d8e FUN_145cd2d8e body=187 status=ok
// SIG undefined FUN_145cd2d8e(void)

void FUN_145cd2d8e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145cd2e4a(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145cd2e80(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e882(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8ba(param_1);
  return;
}



// FUNCTION 145cd2e4a FUN_145cd2e4a body=53 status=ok
// SIG undefined FUN_145cd2e4a(void)

void FUN_145cd2e4a(longlong *param_1)

{
  FUN_145cd2f10();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd2e80 FUN_145cd2e80 body=53 status=ok
// SIG undefined FUN_145cd2e80(void)

void FUN_145cd2e80(longlong *param_1)

{
  FUN_145cd2eb6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd2eb6 FUN_145cd2eb6 body=90 status=ok
// SIG undefined FUN_145cd2eb6(void)

void FUN_145cd2eb6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 145cd2f10 FUN_145cd2f10 body=299 status=ok
// SIG undefined FUN_145cd2f10(void)

void FUN_145cd2f10(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x10;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_145fcac6c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cd303c FUN_145cd303c body=40 status=ok
// SIG undefined FUN_145cd303c(void)

undefined8 FUN_145cd303c(undefined8 param_1,int param_2)

{
  FUN_145cd3064();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd3064 FUN_145cd3064 body=160 status=ok
// SIG undefined FUN_145cd3064(void)

void FUN_145cd3064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af05230;
  param_1[5] = &PTR_FUN_14af05cb0;
  param_1[6] = &PTR_LAB_14af05cf0;
  param_1[0x55] = &PTR_FUN_14af05d40;
  param_1[0x56] = &PTR_FUN_14af05dc0;
  param_1[0x57] = &PTR_FUN_14af05dd0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd3170(param_1 + 0xe0);
  FUN_145cd3104(param_1 + 0xd9);
  FUN_145cd313a(param_1 + 0xd2);
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 145cd3104 FUN_145cd3104 body=53 status=ok
// SIG undefined FUN_145cd3104(void)

void FUN_145cd3104(longlong *param_1)

{
  FUN_145cd327e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd313a FUN_145cd313a body=53 status=ok
// SIG undefined FUN_145cd313a(void)

void FUN_145cd313a(longlong *param_1)

{
  FUN_145cd31a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd3170 FUN_145cd3170 body=55 status=ok
// SIG undefined FUN_145cd3170(void)

void FUN_145cd3170(longlong *param_1)

{
  FUN_145cd3202(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd31a8 FUN_145cd31a8 body=90 status=ok
// SIG undefined FUN_145cd31a8(void)

void FUN_145cd31a8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b3fa4(param_1,0);
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



// FUNCTION 145cd3202 FUN_145cd3202 body=123 status=ok
// SIG undefined FUN_145cd3202(void)

void FUN_145cd3202(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 145cd327e FUN_145cd327e body=332 status=ok
// SIG undefined FUN_145cd327e(void)

void FUN_145cd327e(longlong *param_1)

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
      FUN_1484e31f8((longlong)iStack_4c * 0x38 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145cd33cc FUN_145cd33cc body=757 status=ok
// SIG undefined FUN_145cd33cc(void)

void FUN_145cd33cc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aa64d50;
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  FUN_14588b8d6(param_1 + 0xd5);
  lVar1 = param_1[0xd4];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = param_1[0xd3];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = param_1[0xd2];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = param_1[0xd1];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  FUN_14008008d(param_1[0xcd],*(undefined4 *)(param_1 + 0xce));
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_1409232ec(param_1 + 0xbf);
  if (param_1[0xbd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_14008005c(param_1[0xb5],*(undefined4 *)(param_1 + 0xb6));
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd374c(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x74];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd36cc(param_1 + 0x4e);
  FUN_145cd36cc(param_1 + 0x2a);
  FUN_145cd36cc(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145cd36cc FUN_145cd36cc body=93 status=ok
// SIG undefined FUN_145cd36cc(void)

void FUN_145cd36cc(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1400389e8(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cd3729 FUN_145cd3729 body=35 status=ok
// SIG undefined FUN_145cd3729(void)

void FUN_145cd3729(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145cd374c FUN_145cd374c body=53 status=ok
// SIG undefined FUN_145cd374c(void)

void FUN_145cd374c(longlong *param_1)

{
  FUN_145cd3782();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd3782 FUN_145cd3782 body=89 status=ok
// SIG undefined FUN_145cd3782(void)

void FUN_145cd3782(longlong param_1)

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



// FUNCTION 145cd37dc FUN_145cd37dc body=40 status=ok
// SIG undefined FUN_145cd37dc(void)

undefined8 FUN_145cd37dc(undefined8 param_1,int param_2)

{
  FUN_145cd3804();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd3804 FUN_145cd3804 body=220 status=ok
// SIG undefined FUN_145cd3804(void)

void FUN_145cd3804(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd382f0;
  FUN_145cd38e0(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd390c(param_1 + 0x2d);
  plVar3 = (longlong *)param_1[0x2b];
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
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145cd38e0 FUN_145cd38e0 body=43 status=ok
// SIG undefined FUN_145cd38e0(void)

void FUN_145cd38e0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1404dbc70(param_1);
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 145cd390c FUN_145cd390c body=86 status=ok
// SIG undefined FUN_145cd390c(void)

void FUN_145cd390c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 6);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd3962 FUN_145cd3962 body=284 status=ok
// SIG undefined FUN_145cd3962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cd3962(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86188) {
    FUN_144b3d300(&DAT_14ca86188);
    if (DAT_14ca86188 == -1) {
      FUN_145cd3a7e();
      FUN_140db5666(&DAT_14ca860e0,0,&DAT_14ca86078,L"FClearReplacementPS",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearPS",3,1,FUN_1474160e8,
                    FUN_147416088,&LAB_147416084,&LAB_147416080,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca860e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e33);
      _Init_thread_footer(&DAT_14ca86188);
    }
  }
  return &DAT_14ca860e0;
}



// FUNCTION 145cd3a7e FUN_145cd3a7e body=205 status=ok
// SIG undefined FUN_145cd3a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3a7e(void)

{
  if ((DAT_14ca860df & 2) == 0) {
    DAT_14ca860df = DAT_14ca860df | 2;
    _DAT_14ca86080 = L"FClearReplacementPS";
    _DAT_14ca86098 = FUN_146826540;
    _DAT_14ca860a0 = FUN_146825d77;
    _DAT_14ca860a8 = FUN_146825fd6;
    _DAT_14ca860b0 = FUN_1407e02ea;
    _DAT_14ca860b8 = FUN_146826273;
    _DAT_14ca86090 = FUN_147416050;
    _DAT_14ca860d0 = 0xffffffff000000f8;
    _DAT_14ca860d8 = 8;
    DAT_14ca860dc = 0;
    _DAT_14ca860c0 = &LAB_14741607c;
    FUN_145cd3b4c();
    FUN_1407e00cc(&DAT_14ca86078);
    return;
  }
  return;
}



// FUNCTION 145cd3b4c FUN_145cd3b4c body=133 status=ok
// SIG undefined FUN_145cd3b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3b4c(void)

{
  _DAT_14ca92258 = L"BASE";
  DAT_14ca92282 = 4;
  FUN_145cd3bd2();
  _DAT_14ca92268 = DAT_14ca86088;
  _DAT_14ca92260 = &DAT_14ca92288;
  _DAT_14ca92270 = &LAB_14682652b;
  DAT_14ca86088 = &DAT_14ca92258;
  DAT_14ca860dd = DAT_14ca860dd + '\x01';
  _DAT_14ca92278 = 0x100000000;
  if (DAT_14ca922ec != '\0') {
    DAT_14ca860de = DAT_14ca860de + '\x01';
  }
  return;
}



// FUNCTION 145cd3bd2 FUN_145cd3bd2 body=205 status=ok
// SIG undefined FUN_145cd3bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3bd2(void)

{
  if ((DAT_14ca922ef & 2) != 0) {
    return;
  }
  DAT_14ca922ef = DAT_14ca922ef | 2;
  _DAT_14ca92290 = L"TClearReplacementBase";
  _DAT_14ca922a8 = FUN_146826540;
  _DAT_14ca922b0 = FUN_146825d77;
  _DAT_14ca922b8 = FUN_146825fd6;
  _DAT_14ca922c0 = FUN_1407e02ea;
  _DAT_14ca922c8 = FUN_146826273;
  _DAT_14ca922a0 = FUN_147425c98;
  _DAT_14ca922e0 = 0xffffffff000000f8;
  _DAT_14ca922e8 = 8;
  DAT_14ca922ec = 0;
  _DAT_14ca922d0 = &LAB_147425cc4;
  FUN_145cd3ca0();
  FUN_145cd3d1a();
  FUN_1407e00cc(&DAT_14ca92288);
  return;
}



// FUNCTION 145cd3ca0 FUN_145cd3ca0 body=121 status=ok
// SIG undefined FUN_145cd3ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3ca0(void)

{
  FUN_145cd3da0();
  _DAT_14ca922f0 = L"ClearValueParam";
  DAT_14ca9231a = FUN_140850cc5();
  _DAT_14ca922f8 = FUN_140ec6960();
  _DAT_14ca92308 = &LAB_14682652b;
  _DAT_14ca92310 = 0x1000000e0;
  _DAT_14ca92318 = 0;
  _DAT_14ca92300 = DAT_14ca92298;
  DAT_14ca92298 = &DAT_14ca922f0;
  return;
}



// FUNCTION 145cd3d1a FUN_145cd3d1a body=133 status=ok
// SIG undefined FUN_145cd3d1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3d1a(void)

{
  _DAT_14ca92380 = L"BASE";
  DAT_14ca923aa = 4;
  FUN_140b35ae4();
  _DAT_14ca92390 = DAT_14ca92298;
  _DAT_14ca92388 = &DAT_14ca8c6c8;
  _DAT_14ca92398 = &LAB_14682652b;
  DAT_14ca92298 = &DAT_14ca92380;
  DAT_14ca922ed = DAT_14ca922ed + '\x01';
  _DAT_14ca923a0 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca922ee = DAT_14ca922ee + '\x01';
  }
  return;
}



// FUNCTION 145cd3da0 FUN_145cd3da0 body=216 status=ok
// SIG undefined FUN_145cd3da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd3da0(void)

{
  _DAT_14ca92350 = L"MaxBoundsParam";
  DAT_14ca9237a = FUN_140850cc5();
  _DAT_14ca92358 = FUN_140ec6960();
  _DAT_14ca92368 = &LAB_14682652b;
  _DAT_14ca92370 = 0x1000000ec;
  _DAT_14ca92378 = 0;
  _DAT_14ca92360 = DAT_14ca92298;
  DAT_14ca92298 = &DAT_14ca92350;
  _DAT_14ca92320 = L"MinBoundsParam";
  DAT_14ca9234a = FUN_140850cc5();
  _DAT_14ca92328 = FUN_140ec6960();
  _DAT_14ca92338 = &LAB_14682652b;
  _DAT_14ca92340 = 0x1000000e6;
  _DAT_14ca92348 = 0;
  _DAT_14ca92330 = DAT_14ca92298;
  DAT_14ca92298 = &DAT_14ca92320;
  return;
}



// FUNCTION 145cd3e78 FUN_145cd3e78 body=146 status=ok
// SIG undefined FUN_145cd3e78(void)

code * FUN_145cd3e78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cd3f0a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOScreenGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAOScreenGridParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8850;
  return FUN_1462bfd66;
}



// FUNCTION 145cd3f0a FUN_145cd3f0a body=261 status=ok
// SIG undefined FUN_145cd3f0a(void)

void FUN_145cd3f0a(void)

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
              0x110) < DAT_14c9c88d0) {
    FUN_144b3d300(&DAT_14c9c88d0);
    if (DAT_14c9c88d0 == -1) {
      FUN_145cd4010(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAOScreenGridParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8850,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76fa);
      _Init_thread_footer(&DAT_14c9c88d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd4010 FUN_145cd4010 body=226 status=ok
// SIG undefined FUN_145cd4010(void)

longlong * FUN_145cd4010(longlong *param_1)

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
  pcVar13 = FUN_1462bfdf8;
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



// FUNCTION 145cd40f8 FUN_145cd40f8 body=132 status=ok
// SIG undefined FUN_145cd40f8(void)

undefined1 * FUN_145cd40f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenGridConeVisibility";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x43;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145cd40f4;
}



// FUNCTION 145cd417c FUN_145cd417c body=138 status=ok
// SIG undefined FUN_145cd417c(void)

code * FUN_145cd417c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenGridConeVisibility";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cd40f8;
}



// FUNCTION 145cd4206 FUN_145cd4206 body=287 status=ok
// SIG undefined FUN_145cd4206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cd4206(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9adba0) {
    FUN_144b3d300(&DAT_14c9adba0);
    if (DAT_14c9adba0 == -1) {
      FUN_145cd4326();
      FUN_140db5666(&DAT_14c9adaf8,2,&DAT_14c9ada90,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b7c0,
                    FUN_14712b798,FUN_141748cae,&LAB_14712b794,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9adaf8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2e3);
      _Init_thread_footer(&DAT_14c9adba0);
    }
  }
  return &DAT_14c9adaf8;
}



// FUNCTION 145cd4326 FUN_145cd4326 body=205 status=ok
// SIG undefined FUN_145cd4326(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4326(void)

{
  if ((DAT_14c9adaf7 & 2) == 0) {
    DAT_14c9adaf7 = DAT_14c9adaf7 | 2;
    _DAT_14c9ada98 = L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9adab0 = FUN_146826540;
    _DAT_14c9adab8 = FUN_146825d77;
    _DAT_14c9adac0 = FUN_146825fd6;
    _DAT_14c9adac8 = FUN_1407e02ea;
    _DAT_14c9adad0 = FUN_146826273;
    _DAT_14c9adaa8 = FUN_14712b75a;
    _DAT_14c9adae8 = 0xffffffff00000118;
    _DAT_14c9adaf0 = 8;
    DAT_14c9adaf4 = 0;
    _DAT_14c9adad8 = &LAB_14712b790;
    FUN_145cd43f4();
    FUN_1407e00cc(&DAT_14c9ada90);
    return;
  }
  return;
}



// FUNCTION 145cd43f4 FUN_145cd43f4 body=133 status=ok
// SIG undefined FUN_145cd43f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd43f4(void)

{
  _DAT_14c9b9a10 = L"BASE";
  DAT_14c9b9a3a = 4;
  FUN_145cd447a();
  _DAT_14c9b9a20 = DAT_14c9adaa0;
  _DAT_14c9b9a18 = &DAT_14c9b9a40;
  _DAT_14c9b9a28 = &LAB_14682652b;
  DAT_14c9adaa0 = &DAT_14c9b9a10;
  DAT_14c9adaf5 = DAT_14c9adaf5 + '\x01';
  _DAT_14c9b9a30 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9adaf6 = DAT_14c9adaf6 + '\x01';
  }
  return;
}



// FUNCTION 145cd447a FUN_145cd447a body=200 status=ok
// SIG undefined FUN_145cd447a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd447a(void)

{
  if ((DAT_14c9b9aa7 & 2) != 0) {
    return;
  }
  DAT_14c9b9aa7 = DAT_14c9b9aa7 | 2;
  _DAT_14c9b9a48 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9b9a60 = FUN_146826540;
  _DAT_14c9b9a68 = FUN_146825d77;
  _DAT_14c9b9a70 = FUN_146825fd6;
  _DAT_14c9b9a78 = FUN_1407e02ea;
  _DAT_14c9b9a80 = FUN_146826273;
  _DAT_14c9b9a58 = FUN_14713c278;
  _DAT_14c9b9a98 = 0xffffffff00000118;
  _DAT_14c9b9aa0 = 8;
  DAT_14c9b9aa4 = 0;
  _DAT_14c9b9a88 = &LAB_14713c2ae;
  FUN_145cd4542();
  FUN_1407e00cc(&DAT_14c9b9a40);
  return;
}



// FUNCTION 145cd4542 FUN_145cd4542 body=133 status=ok
// SIG undefined FUN_145cd4542(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4542(void)

{
  _DAT_14c9b9aa8 = L"BASE";
  DAT_14c9b9ad2 = 4;
  FUN_145cd45c8();
  _DAT_14c9b9ab8 = DAT_14c9b9a50;
  _DAT_14c9b9ab0 = &DAT_14c9b9ad8;
  _DAT_14c9b9ac0 = &LAB_14682652b;
  DAT_14c9b9a50 = &DAT_14c9b9aa8;
  DAT_14c9b9aa5 = DAT_14c9b9aa5 + '\x01';
  _DAT_14c9b9ac8 = 0x100000000;
  if (DAT_14c9b9b3c != '\0') {
    DAT_14c9b9aa6 = DAT_14c9b9aa6 + '\x01';
  }
  return;
}



// FUNCTION 145cd45c8 FUN_145cd45c8 body=313 status=ok
// SIG undefined FUN_145cd45c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd45c8(void)

{
  if ((DAT_14c9b9b3f & 2) == 0) {
    DAT_14c9b9b3f = DAT_14c9b9b3f | 2;
    _DAT_14c9b9ae0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9b9af8 = FUN_146826540;
    _DAT_14c9b9b00 = FUN_146825d77;
    _DAT_14c9b9b08 = FUN_146825fd6;
    _DAT_14c9b9b10 = FUN_1407e02ea;
    _DAT_14c9b9b18 = FUN_146826273;
    _DAT_14c9b9af0 = FUN_14713c2b2;
    _DAT_14c9b9b30 = 0xffffffff00000118;
    _DAT_14c9b9b38 = 8;
    DAT_14c9b9b3c = 0;
    _DAT_14c9b9b20 = &LAB_14713c2e8;
    _DAT_14c9b9b40 = L"ReflectionCaptureBuffer";
    DAT_14c9b9b6a = FUN_140850cc5();
    _DAT_14c9b9b48 = FUN_14106a12a();
    _DAT_14c9b9b58 = &LAB_14682652b;
    _DAT_14c9b9b60 = 0x100000110;
    _DAT_14c9b9b68 = 0;
    _DAT_14c9b9b50 = DAT_14c9b9ae8;
    DAT_14c9b9ae8 = &DAT_14c9b9b40;
    FUN_145cd4702();
    FUN_1407e00cc(&DAT_14c9b9ad8);
    return;
  }
  return;
}



// FUNCTION 145cd4702 FUN_145cd4702 body=235 status=ok
// SIG undefined FUN_145cd4702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4702(void)

{
  _DAT_14c9b9b70 = L"BASE";
  DAT_14c9b9b9a = 4;
  FUN_145cd47ee();
  _DAT_14c9b9b80 = DAT_14c9b9ae8;
  _DAT_14c9b9b78 = &DAT_14c9b9ba0;
  _DAT_14c9b9b88 = &LAB_14682652b;
  DAT_14c9b9ae8 = &DAT_14c9b9b70;
  DAT_14c9b9b3d = DAT_14c9b9b3d + '\x01';
  _DAT_14c9b9b90 = &DAT_100000108;
  if (DAT_14c9b9c04 != '\0') {
    DAT_14c9b9b3e = DAT_14c9b9b3e + '\x01';
  }
  _DAT_14c9b9c68 = L"BASE";
  DAT_14c9b9c92 = 4;
  _DAT_14c9b9c70 = FUN_141092e92();
  _DAT_14c9b9c78 = DAT_14c9b9ae8;
  _DAT_14c9b9c80 = &LAB_14682652b;
  DAT_14c9b9ae8 = &DAT_14c9b9c68;
  DAT_14c9b9b3d = DAT_14c9b9b3d + '\x01';
  _DAT_14c9b9c88 = 0x100000000;
  if (*(char *)(_DAT_14c9b9c70 + 100) != '\0') {
    DAT_14c9b9b3e = DAT_14c9b9b3e + '\x01';
  }
  return;
}



// FUNCTION 145cd47ee FUN_145cd47ee body=205 status=ok
// SIG undefined FUN_145cd47ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd47ee(void)

{
  if ((DAT_14c9b9c07 & 2) == 0) {
    DAT_14c9b9c07 = DAT_14c9b9c07 | 2;
    _DAT_14c9b9ba8 = L"PixelParametersType";
    _DAT_14c9b9bc0 = FUN_146826540;
    _DAT_14c9b9bc8 = FUN_146825d77;
    _DAT_14c9b9bd0 = FUN_146825fd6;
    _DAT_14c9b9bd8 = FUN_1407e02ea;
    _DAT_14c9b9be0 = FUN_146826273;
    _DAT_14c9b9bb8 = &LAB_14713c2ec;
    _DAT_14c9b9bf8 = 0xffffffff00000008;
    _DAT_14c9b9c00 = 2;
    DAT_14c9b9c04 = 0;
    _DAT_14c9b9be8 = &LAB_14713c2fa;
    FUN_145cd48bc();
    FUN_1407e00cc(&DAT_14c9b9ba0);
    return;
  }
  return;
}



// FUNCTION 145cd48bc FUN_145cd48bc body=235 status=ok
// SIG undefined FUN_145cd48bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd48bc(void)

{
  _DAT_14c9b9c08 = L"BASE";
  DAT_14c9b9c32 = 4;
  FUN_145c86426();
  _DAT_14c9b9c18 = DAT_14c9b9bb0;
  _DAT_14c9b9c10 = &DAT_14c9b8f80;
  _DAT_14c9b9c20 = &LAB_14682652b;
  DAT_14c9b9bb0 = &DAT_14c9b9c08;
  DAT_14c9b9c05 = DAT_14c9b9c05 + '\x01';
  _DAT_14c9b9c28 = 0x100000006;
  if (DAT_14c9b8fe4 != '\0') {
    DAT_14c9b9c06 = DAT_14c9b9c06 + '\x01';
  }
  _DAT_14c9b9c38 = L"BASE";
  DAT_14c9b9c62 = 4;
  _DAT_14c9b9c40 = FUN_1411cad6c();
  _DAT_14c9b9c48 = DAT_14c9b9bb0;
  _DAT_14c9b9c50 = &LAB_14682652b;
  DAT_14c9b9bb0 = &DAT_14c9b9c38;
  DAT_14c9b9c05 = DAT_14c9b9c05 + '\x01';
  _DAT_14c9b9c58 = 0x100000000;
  if (*(char *)(_DAT_14c9b9c40 + 100) != '\0') {
    DAT_14c9b9c06 = DAT_14c9b9c06 + '\x01';
  }
  return;
}



// FUNCTION 145cd49a8 FUN_145cd49a8 body=287 status=ok
// SIG undefined FUN_145cd49a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cd49a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aeaa8) {
    FUN_144b3d300(&DAT_14c9aeaa8);
    if (DAT_14c9aeaa8 == -1) {
      FUN_145cd4ac8();
      FUN_140db5666(&DAT_14c9aea00,2,&DAT_14c9ae998,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c160,
                    FUN_14712c138,FUN_14174b416,&LAB_14712c134,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aea00 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c37f);
      _Init_thread_footer(&DAT_14c9aeaa8);
    }
  }
  return &DAT_14c9aea00;
}



// FUNCTION 145cd4ac8 FUN_145cd4ac8 body=205 status=ok
// SIG undefined FUN_145cd4ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4ac8(void)

{
  if ((DAT_14c9ae9ff & 2) == 0) {
    DAT_14c9ae9ff = DAT_14c9ae9ff | 2;
    _DAT_14c9ae9a0 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylight";
    _DAT_14c9ae9b8 = FUN_146826540;
    _DAT_14c9ae9c0 = FUN_146825d77;
    _DAT_14c9ae9c8 = FUN_146825fd6;
    _DAT_14c9ae9d0 = FUN_1407e02ea;
    _DAT_14c9ae9d8 = FUN_146826273;
    _DAT_14c9ae9b0 = FUN_14712c0fa;
    _DAT_14c9ae9f0 = 0xffffffff00000118;
    _DAT_14c9ae9f8 = 8;
    DAT_14c9ae9fc = 0;
    _DAT_14c9ae9e0 = &LAB_14712c130;
    FUN_145cd4b96();
    FUN_1407e00cc(&DAT_14c9ae998);
    return;
  }
  return;
}



// FUNCTION 145cd4b96 FUN_145cd4b96 body=133 status=ok
// SIG undefined FUN_145cd4b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4b96(void)

{
  _DAT_14c9ba690 = L"BASE";
  DAT_14c9ba6ba = 4;
  FUN_145cd4c1c();
  _DAT_14c9ba6a0 = DAT_14c9ae9a8;
  _DAT_14c9ba698 = &DAT_14c9ba6c0;
  _DAT_14c9ba6a8 = &LAB_14682652b;
  DAT_14c9ae9a8 = &DAT_14c9ba690;
  DAT_14c9ae9fd = DAT_14c9ae9fd + '\x01';
  _DAT_14c9ba6b0 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9ae9fe = DAT_14c9ae9fe + '\x01';
  }
  return;
}



// FUNCTION 145cd4c1c FUN_145cd4c1c body=200 status=ok
// SIG undefined FUN_145cd4c1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4c1c(void)

{
  if ((DAT_14c9ba727 & 2) != 0) {
    return;
  }
  DAT_14c9ba727 = DAT_14c9ba727 | 2;
  _DAT_14c9ba6c8 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9ba6e0 = FUN_146826540;
  _DAT_14c9ba6e8 = FUN_146825d77;
  _DAT_14c9ba6f0 = FUN_146825fd6;
  _DAT_14c9ba6f8 = FUN_1407e02ea;
  _DAT_14c9ba700 = FUN_146826273;
  _DAT_14c9ba6d8 = FUN_14713c71a;
  _DAT_14c9ba718 = 0xffffffff00000118;
  _DAT_14c9ba720 = 8;
  DAT_14c9ba724 = 0;
  _DAT_14c9ba708 = &LAB_14713c750;
  FUN_145cd4ce4();
  FUN_1407e00cc(&DAT_14c9ba6c0);
  return;
}



// FUNCTION 145cd4ce4 FUN_145cd4ce4 body=133 status=ok
// SIG undefined FUN_145cd4ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4ce4(void)

{
  _DAT_14c9ba728 = L"BASE";
  DAT_14c9ba752 = 4;
  FUN_145cd4d6a();
  _DAT_14c9ba738 = DAT_14c9ba6d0;
  _DAT_14c9ba730 = &DAT_14c9ba758;
  _DAT_14c9ba740 = &LAB_14682652b;
  DAT_14c9ba6d0 = &DAT_14c9ba728;
  DAT_14c9ba725 = DAT_14c9ba725 + '\x01';
  _DAT_14c9ba748 = 0x100000000;
  if (DAT_14c9ba7bc != '\0') {
    DAT_14c9ba726 = DAT_14c9ba726 + '\x01';
  }
  return;
}



// FUNCTION 145cd4d6a FUN_145cd4d6a body=313 status=ok
// SIG undefined FUN_145cd4d6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4d6a(void)

{
  if ((DAT_14c9ba7bf & 2) == 0) {
    DAT_14c9ba7bf = DAT_14c9ba7bf | 2;
    _DAT_14c9ba760 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9ba778 = FUN_146826540;
    _DAT_14c9ba780 = FUN_146825d77;
    _DAT_14c9ba788 = FUN_146825fd6;
    _DAT_14c9ba790 = FUN_1407e02ea;
    _DAT_14c9ba798 = FUN_146826273;
    _DAT_14c9ba770 = FUN_14713c754;
    _DAT_14c9ba7b0 = 0xffffffff00000118;
    _DAT_14c9ba7b8 = 8;
    DAT_14c9ba7bc = 0;
    _DAT_14c9ba7a0 = &LAB_14713c78a;
    _DAT_14c9ba7c0 = L"ReflectionCaptureBuffer";
    DAT_14c9ba7ea = FUN_140850cc5();
    _DAT_14c9ba7c8 = FUN_14106a12a();
    _DAT_14c9ba7d8 = &LAB_14682652b;
    _DAT_14c9ba7e0 = 0x100000110;
    _DAT_14c9ba7e8 = 0;
    _DAT_14c9ba7d0 = DAT_14c9ba768;
    DAT_14c9ba768 = &DAT_14c9ba7c0;
    FUN_145cd4ea4();
    FUN_1407e00cc(&DAT_14c9ba758);
    return;
  }
  return;
}



// FUNCTION 145cd4ea4 FUN_145cd4ea4 body=235 status=ok
// SIG undefined FUN_145cd4ea4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4ea4(void)

{
  _DAT_14c9ba7f0 = L"BASE";
  DAT_14c9ba81a = 4;
  FUN_145cd4f90();
  _DAT_14c9ba800 = DAT_14c9ba768;
  _DAT_14c9ba7f8 = &DAT_14c9ba820;
  _DAT_14c9ba808 = &LAB_14682652b;
  DAT_14c9ba768 = &DAT_14c9ba7f0;
  DAT_14c9ba7bd = DAT_14c9ba7bd + '\x01';
  _DAT_14c9ba810 = &DAT_100000108;
  if (DAT_14c9ba884 != '\0') {
    DAT_14c9ba7be = DAT_14c9ba7be + '\x01';
  }
  _DAT_14c9ba8e8 = L"BASE";
  DAT_14c9ba912 = 4;
  _DAT_14c9ba8f0 = FUN_141092e92();
  _DAT_14c9ba8f8 = DAT_14c9ba768;
  _DAT_14c9ba900 = &LAB_14682652b;
  DAT_14c9ba768 = &DAT_14c9ba8e8;
  DAT_14c9ba7bd = DAT_14c9ba7bd + '\x01';
  _DAT_14c9ba908 = 0x100000000;
  if (*(char *)(_DAT_14c9ba8f0 + 100) != '\0') {
    DAT_14c9ba7be = DAT_14c9ba7be + '\x01';
  }
  return;
}



// FUNCTION 145cd4f90 FUN_145cd4f90 body=205 status=ok
// SIG undefined FUN_145cd4f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd4f90(void)

{
  if ((DAT_14c9ba887 & 2) == 0) {
    DAT_14c9ba887 = DAT_14c9ba887 | 2;
    _DAT_14c9ba828 = L"PixelParametersType";
    _DAT_14c9ba840 = FUN_146826540;
    _DAT_14c9ba848 = FUN_146825d77;
    _DAT_14c9ba850 = FUN_146825fd6;
    _DAT_14c9ba858 = FUN_1407e02ea;
    _DAT_14c9ba860 = FUN_146826273;
    _DAT_14c9ba838 = &LAB_14713c78e;
    _DAT_14c9ba878 = 0xffffffff00000008;
    _DAT_14c9ba880 = 2;
    DAT_14c9ba884 = 0;
    _DAT_14c9ba868 = &LAB_14713c79c;
    FUN_145cd505e();
    FUN_1407e00cc(&DAT_14c9ba820);
    return;
  }
  return;
}



// FUNCTION 145cd505e FUN_145cd505e body=235 status=ok
// SIG undefined FUN_145cd505e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cd505e(void)

{
  _DAT_14c9ba888 = L"BASE";
  DAT_14c9ba8b2 = 4;
  FUN_145c86426();
  _DAT_14c9ba898 = DAT_14c9ba830;
  _DAT_14c9ba890 = &DAT_14c9b8f80;
  _DAT_14c9ba8a0 = &LAB_14682652b;
  DAT_14c9ba830 = &DAT_14c9ba888;
  DAT_14c9ba885 = DAT_14c9ba885 + '\x01';
  _DAT_14c9ba8a8 = 0x100000006;
  if (DAT_14c9b8fe4 != '\0') {
    DAT_14c9ba886 = DAT_14c9ba886 + '\x01';
  }
  _DAT_14c9ba8b8 = L"BASE";
  DAT_14c9ba8e2 = 4;
  _DAT_14c9ba8c0 = FUN_1411cad6c();
  _DAT_14c9ba8c8 = DAT_14c9ba830;
  _DAT_14c9ba8d0 = &LAB_14682652b;
  DAT_14c9ba830 = &DAT_14c9ba8b8;
  DAT_14c9ba885 = DAT_14c9ba885 + '\x01';
  _DAT_14c9ba8d8 = 0x100000000;
  if (*(char *)(_DAT_14c9ba8c0 + 100) != '\0') {
    DAT_14c9ba886 = DAT_14c9ba886 + '\x01';
  }
  return;
}



// FUNCTION 145cd514a FUN_145cd514a body=620 status=ok
// SIG undefined FUN_145cd514a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000145cd53ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_145cd514a(longlong param_1,char *param_2,undefined1 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  void *_Src;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [256];
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined **local_c8;
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  if (param_2 == (char *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_1f8,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_e0,local_f0);
  local_d0 = *param_3;
  local_c8 = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(local_c0,param_4 + 8);
  local_98 = *(undefined4 *)(param_4 + 0x30);
  local_94 = *(undefined1 *)(param_4 + 0x34);
  local_c8 = &PTR_FUN_14b819640;
  local_90 = *(undefined8 *)(param_4 + 0x38);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_80;
  _Src = (void *)*param_5;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,8);
  *puVar2 = &PTR_FUN_14b9c1200;
  FUN_145cd5402(puVar2 + 1,local_e0);
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_145daf51e;
    local_78 = &LAB_145daf51e;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_145cd53b8(local_e0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cd53b8 FUN_145cd53b8 body=73 status=ok
// SIG undefined FUN_145cd53b8(void)

void FUN_145cd53b8(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = (longlong)&PTR_FUN_14b8194d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cd5402 FUN_145cd5402 body=182 status=ok
// SIG undefined FUN_145cd5402(void)

undefined8 * FUN_145cd5402(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
  param_1[3] = &PTR_FUN_14b819640;
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145cd54d0 FUN_145cd54d0 body=140 status=ok
// SIG undefined FUN_145cd54d0(void)

undefined1 * FUN_145cd54d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cd555c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"LumenVisualize::FSceneParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06808;
  return &LAB_14722c80e;
}



// FUNCTION 145cd555c FUN_145cd555c body=258 status=ok
// SIG undefined FUN_145cd555c(void)

void FUN_145cd555c(void)

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
              0x110) < DAT_14ca06888) {
    FUN_144b3d300(&DAT_14ca06888);
    if (DAT_14ca06888 == -1) {
      FUN_145cd5660(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSceneParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x27;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06808,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a73);
      _Init_thread_footer(&DAT_14ca06888);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd5660 FUN_145cd5660 body=226 status=ok
// SIG undefined FUN_145cd5660(void)

longlong * FUN_145cd5660(longlong *param_1)

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
  pcVar13 = FUN_1462ea17c;
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



// FUNCTION 145cd5744 FUN_145cd5744 body=138 status=ok
// SIG undefined FUN_145cd5744(void)

code * FUN_145cd5744(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722c89c;
}



// FUNCTION 145cd57ce FUN_145cd57ce body=138 status=ok
// SIG undefined FUN_145cd57ce(void)

code * FUN_145cd57ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d36bee;
}



// FUNCTION 145cd5858 FUN_145cd5858 body=138 status=ok
// SIG undefined FUN_145cd5858(void)

code * FUN_145cd5858(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722cb4e;
}



// FUNCTION 145cd58e2 FUN_145cd58e2 body=140 status=ok
// SIG undefined FUN_145cd58e2(void)

void FUN_145cd58e2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 145cd5976 FUN_145cd5976 body=122 status=ok
// SIG undefined FUN_145cd5976(void)

undefined8 * FUN_145cd5976(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14a3f6d80;
  param_1[5] = &PTR_FUN_14a3f7210;
  param_1[6] = &PTR_LAB_14a3f7250;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f800000461c4000;
  *(undefined2 *)(param_1 + 0x27) = 0x100;
  return param_1;
}



// FUNCTION 145cd59fc FUN_145cd59fc body=119 status=ok
// SIG undefined FUN_145cd59fc(void)

undefined8 * FUN_145cd59fc(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a61cb10;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3ee666663eb33333;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f4ccccd3f000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_1 + 0x6c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_1 + 0x7c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3d4ccccd3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3e4ccccd3d4ccccd;
  return param_1;
}



// FUNCTION 145cd5a7c FUN_145cd5a7c body=122 status=ok
// SIG undefined FUN_145cd5a7c(void)

undefined8 * FUN_145cd5a7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
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
  *param_1 = &PTR_FUN_14a6883f0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x49742400;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 145cd5b02 FUN_145cd5b02 body=119 status=ok
// SIG undefined FUN_145cd5b02(void)

undefined8 * FUN_145cd5b02(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab22db0;
  param_1[5] = &PTR_FUN_14ab230f0;
  param_1[6] = &PTR_FUN_14ab23170;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xba) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x7fffffff;
  return param_1;
}



// FUNCTION 145cd5b7a FUN_145cd5b7a body=40 status=ok
// SIG undefined FUN_145cd5b7a(void)

undefined8 FUN_145cd5b7a(undefined8 param_1,int param_2)

{
  FUN_145cd5ba2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd5ba2 FUN_145cd5ba2 body=90 status=ok
// SIG undefined FUN_145cd5ba2(void)

void FUN_145cd5ba2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab267f0;
  param_1[5] = &PTR_FUN_14ab26a90;
  param_1[6] = &PTR_FUN_14ab26aa0;
  FUN_140ebe7a0(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145a58c2e(param_1);
  return;
}



// FUNCTION 145cd5bfc FUN_145cd5bfc body=30 status=ok
// SIG undefined FUN_145cd5bfc(void)

void FUN_145cd5bfc(longlong param_1)

{
  FUN_145cd5c1a(*(undefined8 *)(param_1 + 0x28));
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145cd5c1a FUN_145cd5c1a body=100 status=ok
// SIG undefined FUN_145cd5c1a(void)

void FUN_145cd5c1a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_141092d32(&DAT_14caced90);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_141092d32(&DAT_14cacedd0);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (*(char *)(param_1 + 0x110) != '\x01') {
    return;
  }
  FUN_14815874a(param_1);
  return;
}



// FUNCTION 145cd5c84 FUN_145cd5c84 body=125 status=ok
// SIG undefined FUN_145cd5c84(void)

void FUN_145cd5c84(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b45e210;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  return;
}



// FUNCTION 145cd5d02 FUN_145cd5d02 body=40 status=ok
// SIG undefined FUN_145cd5d02(void)

undefined8 FUN_145cd5d02(undefined8 param_1,int param_2)

{
  FUN_145cd5d2a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd5d2a FUN_145cd5d2a body=90 status=ok
// SIG undefined FUN_145cd5d2a(void)

void FUN_145cd5d2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4b38f0;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_148a34282(param_1 + 10);
    *(undefined1 *)(param_1 + 0x12) = 0;
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



// FUNCTION 145cd5d84 FUN_145cd5d84 body=46 status=ok
// SIG undefined FUN_145cd5d84(void)

void FUN_145cd5d84(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cd5db2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b577560;
  puVar1[5] = &PTR_FUN_14b577880;
  return;
}



// FUNCTION 145cd5db2 FUN_145cd5db2 body=84 status=ok
// SIG undefined FUN_145cd5db2(void)

undefined8 * FUN_145cd5db2(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a5169d0;
  param_1[5] = &PTR_FUN_14a516cf0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145cd5e12 FUN_145cd5e12 body=451 status=ok
// SIG undefined FUN_145cd5e12(void)

undefined8 * FUN_145cd5e12(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b72c5b0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0003;
  param_1[0x17] = "critterbiome";
  FUN_1400b22c2(local_58,"AI.CritterBiome");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1415289f2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd5f0a;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd5f0a:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd5fe2 FUN_145cd5fe2 body=581 status=ok
// SIG undefined FUN_145cd5fe2(void)

undefined8 * FUN_145cd5fe2(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b747e70;
  *(undefined4 *)(param_1 + 0x16) = 0xab30e364;
  param_1[0x17] = "oak_discovery_priority_group_def";
  lVar5 = FUN_145cd6228();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd60b9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145cd60b9:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Priority Group Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd6228 FUN_145cd6228 body=57 status=ok
// SIG undefined FUN_145cd6228(void)

void FUN_145cd6228(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b20 = FUN_140002ddd(FUN_1465d54de,uVar1,L"OakDiscoveryPriorityGroupDef");
  }
  return;
}



// FUNCTION 145cd6262 FUN_145cd6262 body=141 status=ok
// SIG undefined FUN_145cd6262(void)

void FUN_145cd6262(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce(param_1 + 0x68);
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14b9a06b0;
    local_58 = FUN_148dfe9d2;
    local_30 = param_2;
    FUN_145cd62f0(lVar1);
  }
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd62f0 FUN_145cd62f0 body=204 status=ok
// SIG undefined FUN_145cd62f0(void)

void FUN_145cd62f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x238);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x10 + lVar7);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
        pcVar4 = (code *)*param_2;
        plVar6 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar6 = param_2 + 4;
        }
        local_48 = lVar3;
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar4)(uVar5,&local_48);
      }
      lVar7 = lVar7 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar7);
  }
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cd63ca FUN_145cd63ca body=31 status=ok
// SIG undefined FUN_145cd63ca(void)

undefined8 FUN_145cd63ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd63f0 FUN_145cd63f0 body=125 status=ok
// SIG undefined FUN_145cd63f0(void)

undefined8 * FUN_145cd63f0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
  memset(_Dst,0,0x2d0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9daa40;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  FUN_140056680(_Dst + 0x56,L"action_ui_menu_tutorial_skip");
  FUN_140056680(_Dst + 0x58,L"action_ui_menu_tutorial_continue_complete");
  return _Dst;
}



// FUNCTION 145cd6478 FUN_145cd6478 body=119 status=ok
// SIG undefined FUN_145cd6478(void)

undefined8 * FUN_145cd6478(undefined8 *param_1)

{
  FUN_1410b0e54();
  *param_1 = &PTR_FUN_14bcb4670;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 145cd64f8 FUN_145cd64f8 body=122 status=ok
// SIG undefined FUN_145cd64f8(void)

undefined8 * FUN_145cd64f8(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_14bed3910;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 145cd6572 FUN_145cd6572 body=142 status=ok
// SIG undefined FUN_145cd6572(void)

code * FUN_145cd6572(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cd6600();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SkylightParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPathTracingSkylight";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x150000004a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f60d2;
}



// FUNCTION 145cd6600 FUN_145cd6600 body=265 status=ok
// SIG undefined FUN_145cd6600(void)

undefined * FUN_145cd6600(void)

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
              0x110) < DAT_14ca25318) {
    FUN_144b3d300(&DAT_14ca25318);
    if (DAT_14ca25318 == -1) {
      FUN_145cd670a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPathTracingSkylight";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca25298,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c79);
      _Init_thread_footer(&DAT_14ca25318);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca25298;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd670a FUN_145cd670a body=226 status=ok
// SIG undefined FUN_145cd670a(void)

longlong * FUN_145cd670a(longlong *param_1)

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
  pcVar13 = FUN_1462f6164;
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



// FUNCTION 145cd67ee FUN_145cd67ee body=130 status=ok
// SIG undefined FUN_145cd67ee(void)

undefined1 * FUN_145cd67ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkylightTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14727bbc0;
}



// FUNCTION 145cd6870 FUN_145cd6870 body=138 status=ok
// SIG undefined FUN_145cd6870(void)

code * FUN_145cd6870(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkylightPdf";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cd67ee;
}



// FUNCTION 145cd68fa FUN_145cd68fa body=138 status=ok
// SIG undefined FUN_145cd68fa(void)

code * FUN_145cd68fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkylightTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cd6870;
}



// FUNCTION 145cd6990 FUN_145cd6990 body=712 status=ok
// SIG undefined FUN_145cd6990(void)

undefined8 * FUN_145cd6990(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar3);
  *param_1 = &PTR_FUN_14ab7d260;
  *(undefined4 *)(param_1 + 0x16) = 0xb0;
  param_1[0x17] = "navlink";
  FUN_1400b22c2(local_58,"AI.NavLink");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145cd6c5a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    FUN_1446f8bcc(param_1 + 0x5d,0);
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd6a93;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd6a93:
  lVar4 = FUN_145cd6c5a();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    FUN_1446f8bcc(param_1 + 0x62,0);
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145cd6b28;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145cd6b28:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd6c5a FUN_145cd6c5a body=57 status=ok
// SIG undefined FUN_145cd6c5a(void)

void FUN_145cd6c5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd00 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd00 = FUN_140002ddd(FUN_14641dd0a,uVar1,L"GbxNavLinkDef");
  }
  return;
}



// FUNCTION 145cd6c94 FUN_145cd6c94 body=310 status=ok
// SIG undefined FUN_145cd6c94(void)

void FUN_145cd6c94(void)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c9518a0 != (longlong *)0x0 && DAT_14c9518a8 != 0) &&
     (cVar2 = (**(code **)(*DAT_14c9518a0 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14c9518a0;
    if (DAT_14c9518a8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    DAT_14c9518c8 = (undefined8 *)(**(code **)(*plVar4 + 0x58))();
  }
  if (DAT_14c9518c8 == (undefined8 *)0x0) {
    DAT_14c9518c8 = (undefined8 *)FUN_14001cc68(8,0x10);
    *DAT_14c9518c8 = &PTR_FUN_149e90120;
  }
  cVar2 = FUN_141528a2c();
  if (cVar2 != '\0') {
    FUN_145cd6e4f(&local_20,DAT_14c9518c8);
    uVar3 = FUN_141528a38();
    local_30 = local_20;
    local_28 = local_18;
    if (local_18 == (longlong *)0x0) {
      FUN_145cd6dcc(uVar3,&local_30,0);
    }
    else {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
      FUN_145cd6dcc(uVar3,&local_30,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_18 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_18 + 0x10))(local_18);
          }
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cd6dcc FUN_145cd6dcc body=130 status=ok
// SIG undefined FUN_145cd6dcc(void)

void FUN_145cd6dcc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *param_1;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_145cd6f6e(uVar3,&local_20);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd6e4f FUN_145cd6e4f body=132 status=ok
// SIG undefined FUN_145cd6e4f(void)

longlong * FUN_145cd6e4f(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e91dc0;
  FUN_145cd6ed4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 145cd6ed4 FUN_145cd6ed4 body=153 status=ok
// SIG undefined FUN_145cd6ed4(void)

undefined8 * FUN_145cd6ed4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149e900c0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 145cd6f6e FUN_145cd6f6e body=400 status=ok
// SIG undefined FUN_145cd6f6e(void)

void FUN_145cd6f6e(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  int local_58 [2];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    puVar3 = (undefined8 *)*param_2;
    local_40 = *(undefined8 *)(param_1 + 8);
    local_38 = *(longlong *)(param_1 + 0x10);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    (**(code **)*puVar3)(puVar3,&local_40);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar6 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar6) {
    iVar10 = 0;
    uVar8 = (ulonglong)uVar6;
    do {
      uVar8 = uVar8 >> 1;
      uVar9 = (uint)uVar8 + iVar10;
      if (param_3 < *(int *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar9 * 0x18)) {
        iVar10 = uVar9 + (uVar6 & 1);
      }
      bVar5 = 1 < uVar6;
      uVar6 = (uint)uVar8;
    } while (bVar5);
  }
  local_50 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_58[0] = param_3;
  local_48 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_145cd7100(param_1 + 0x28,local_58);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_145cd7100(param_1 + 0x28);
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
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if ((*(char *)(param_1 + 0xf1) == '\x01') && (*(longlong *)(param_1 + 0x80) == 0)) {
    local_60 = 0;
    local_68 = 0xffffffffffffffff;
    uVar7 = FUN_1411b1052(param_1,L"IoDispatcher",0,1);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7100 FUN_145cd7100 body=137 status=ok
// SIG undefined FUN_145cd7100(void)

ulonglong FUN_145cd7100(longlong *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145cd718a(param_1,iVar1);
  }
  lVar4 = (ulonglong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar4 + 0x18),(void *)(*param_1 + lVar4),
          (ulonglong)(iVar1 - param_3) * 0x18);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar4) = *(undefined8 *)(param_2 + 2);
  lVar3 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar2 + 0x10 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return (ulonglong)param_3;
}



// FUNCTION 145cd718a FUN_145cd718a body=147 status=ok
// SIG undefined FUN_145cd718a(void)

void FUN_145cd718a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cd7228 FUN_145cd7228 body=281 status=ok
// SIG undefined FUN_145cd7228(void)

undefined8 * FUN_145cd7228(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *param_1 = &PTR_FUN_14a4cddf0;
  lVar1 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0xde);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = FUN_145990528();
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_18);
    }
    local_20 = param_1[2];
    if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = FUN_145a674f0();
    if (local_28 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_28);
    }
    local_30 = param_1[2];
    if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7342 FUN_145cd7342 body=40 status=ok
// SIG undefined FUN_145cd7342(void)

undefined8 FUN_145cd7342(undefined8 param_1,int param_2)

{
  FUN_145cd736a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd736a FUN_145cd736a body=339 status=ok
// SIG undefined FUN_145cd736a(void)

void FUN_145cd736a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7eeb80;
  FUN_145cd74e9(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd751a(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145cd74bd(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cd74bd FUN_145cd74bd body=44 status=ok
// SIG undefined FUN_145cd74bd(void)

void FUN_145cd74bd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145cd74e9 FUN_145cd74e9 body=49 status=ok
// SIG undefined FUN_145cd74e9(void)

void FUN_145cd74e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cd751a FUN_145cd751a body=49 status=ok
// SIG undefined FUN_145cd751a(void)

void FUN_145cd751a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cd7556 FUN_145cd7556 body=454 status=ok
// SIG undefined FUN_145cd7556(void)

undefined8 * FUN_145cd7556(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14acb5630;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1010;
  param_1[0x17] = "audioprovider";
  lVar4 = FUN_145cd771e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd762d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd762d:
  FUN_1400b22c2(local_58,"GbxAudio.AudioProvider");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd771e FUN_145cd771e body=55 status=ok
// SIG undefined FUN_145cd771e(void)

void FUN_145cd771e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb253b8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb253b8 = FUN_140002ddd(FUN_146446a22,uVar1,L"GbxAudioProviderDef");
  }
  return;
}



// FUNCTION 145cd7760 FUN_145cd7760 body=454 status=ok
// SIG undefined FUN_145cd7760(void)

undefined8 * FUN_145cd7760(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0f95a0;
  *(undefined4 *)(param_1 + 0x16) = 0xc3769d17;
  param_1[0x17] = "cinematic_mode";
  lVar4 = FUN_145cd7928();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd7837;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd7837:
  FUN_1400b22c2(local_58,"Cinematics.CinematicModes");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7928 FUN_145cd7928 body=55 status=ok
// SIG undefined FUN_145cd7928(void)

void FUN_145cd7928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5be98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5be98 = FUN_140002ddd(FUN_1464d3121,uVar1,L"GbxCinematicModeDef");
  }
  return;
}



// FUNCTION 145cd796a FUN_145cd796a body=454 status=ok
// SIG undefined FUN_145cd796a(void)

undefined8 * FUN_145cd796a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b162a70;
  *(undefined4 *)(param_1 + 0x16) = 0xa60000;
  param_1[0x17] = "gamemode_module_event";
  lVar4 = FUN_145cd7b32();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd7a41;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd7a41:
  FUN_1400b22c2(local_58,"GameModes.Module Event");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7b32 FUN_145cd7b32 body=55 status=ok
// SIG undefined FUN_145cd7b32(void)

void FUN_145cd7b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e860 = FUN_140002ddd(FUN_1464e255e,uVar1,L"GbxGameModeModuleEventDef");
  }
  return;
}



// FUNCTION 145cd7b74 FUN_145cd7b74 body=454 status=ok
// SIG undefined FUN_145cd7b74(void)

undefined8 * FUN_145cd7b74(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1cdec0;
  *(undefined4 *)(param_1 + 0x16) = 0x68fad100;
  param_1[0x17] = "gbxmusic";
  lVar4 = FUN_145cd7d3c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd7c4b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd7c4b:
  FUN_1400b22c2(local_58,"Music.MusicDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7d3c FUN_145cd7d3c body=55 status=ok
// SIG undefined FUN_145cd7d3c(void)

void FUN_145cd7d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61748 = FUN_140002ddd(FUN_1464f3c1a,uVar1,L"GbxMusicDef");
  }
  return;
}



// FUNCTION 145cd7d7e FUN_145cd7d7e body=454 status=ok
// SIG undefined FUN_145cd7d7e(void)

undefined8 * FUN_145cd7d7e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1dc7e0;
  *(undefined4 *)(param_1 + 0x16) = 0x68fad102;
  param_1[0x17] = "opportunistic_ambient_audio_config";
  lVar4 = FUN_145cd7f46();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd7e55;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd7e55:
  FUN_1400b22c2(local_58,"GbxAudio.OpportunisticAmbientAudioConfig");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd7f46 FUN_145cd7f46 body=55 status=ok
// SIG undefined FUN_145cd7f46(void)

void FUN_145cd7f46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61a00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61a00 = FUN_140002ddd(FUN_1464f455b,uVar1,L"GbxOpportunisticAmbientAudioConfigDef");
  }
  return;
}



// FUNCTION 145cd7f88 FUN_145cd7f88 body=454 status=ok
// SIG undefined FUN_145cd7f88(void)

undefined8 * FUN_145cd7f88(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1d4b90;
  *(undefined4 *)(param_1 + 0x16) = 0xb07def;
  param_1[0x17] = "player_bot";
  lVar4 = FUN_145cd8150();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd805f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd805f:
  FUN_1400b22c2(local_58,"Players.PlayerBot");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8150 FUN_145cd8150 body=55 status=ok
// SIG undefined FUN_145cd8150(void)

void FUN_145cd8150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61b50 = FUN_140002ddd(FUN_1464f4b37,uVar1,L"GbxPlayerBotDef");
  }
  return;
}



// FUNCTION 145cd8192 FUN_145cd8192 body=454 status=ok
// SIG undefined FUN_145cd8192(void)

undefined8 * FUN_145cd8192(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1e75a0;
  *(undefined4 *)(param_1 + 0x16) = 0x19210;
  param_1[0x17] = "progression_command_list";
  lVar4 = FUN_145cd835a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8269;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8269:
  FUN_1400b22c2(local_58,"GbxProgress.Command List");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd835a FUN_145cd835a body=55 status=ok
// SIG undefined FUN_145cd835a(void)

void FUN_145cd835a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62278 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62278 = FUN_140002ddd(FUN_1464f6e0e,uVar1,L"GbxProgressionCommandListDef");
  }
  return;
}



// FUNCTION 145cd839c FUN_145cd839c body=454 status=ok
// SIG undefined FUN_145cd839c(void)

undefined8 * FUN_145cd839c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1f2f70;
  *(undefined4 *)(param_1 + 0x16) = 0x68fad103;
  param_1[0x17] = &DAT_14b3ef95d;
  lVar4 = FUN_145cd8564();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8473;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8473:
  FUN_1400b22c2(local_58,0x14b3ef96b);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8564 FUN_145cd8564 body=55 status=ok
// SIG undefined FUN_145cd8564(void)

void FUN_145cd8564(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62648 = FUN_140002ddd(FUN_1464f8365,uVar1,L"GbxRadioStationDef");
  }
  return;
}



// FUNCTION 145cd85a6 FUN_145cd85a6 body=454 status=ok
// SIG undefined FUN_145cd85a6(void)

undefined8 * FUN_145cd85a6(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b371ac0;
  *(undefined4 *)(param_1 + 0x16) = 0xa003;
  param_1[0x17] = "input_action";
  lVar4 = FUN_145cd876e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd867d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd867d:
  FUN_1400b22c2(local_58,"GbxInput.Input Action");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd876e FUN_145cd876e body=55 status=ok
// SIG undefined FUN_145cd876e(void)

void FUN_145cd876e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f748 = FUN_140002ddd(FUN_1464e750f,uVar1,L"GbxInputActionDef");
  }
  return;
}



// FUNCTION 145cd87b0 FUN_145cd87b0 body=454 status=ok
// SIG undefined FUN_145cd87b0(void)

undefined8 * FUN_145cd87b0(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b371fe0;
  *(undefined4 *)(param_1 + 0x16) = 0xa008;
  param_1[0x17] = "input_action_group";
  lVar4 = FUN_145cd8978();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8887;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8887:
  FUN_1400b22c2(local_58,"GbxInput.Input Action Group");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8978 FUN_145cd8978 body=55 status=ok
// SIG undefined FUN_145cd8978(void)

void FUN_145cd8978(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f778 = FUN_140002ddd(FUN_1464e75fd,uVar1,L"GbxInputActionGroupDef");
  }
  return;
}



// FUNCTION 145cd89ba FUN_145cd89ba body=454 status=ok
// SIG undefined FUN_145cd89ba(void)

undefined8 * FUN_145cd89ba(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3724f0;
  *(undefined4 *)(param_1 + 0x16) = 0xa005;
  param_1[0x17] = "input_context";
  lVar4 = FUN_145cd8b82();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8a91;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8a91:
  FUN_1400b22c2(local_58,"GbxInput.Input Context");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8b82 FUN_145cd8b82 body=55 status=ok
// SIG undefined FUN_145cd8b82(void)

void FUN_145cd8b82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f7f0 = FUN_140002ddd(FUN_1464e7876,uVar1,L"GbxInputContextDef");
  }
  return;
}



// FUNCTION 145cd8bc4 FUN_145cd8bc4 body=454 status=ok
// SIG undefined FUN_145cd8bc4(void)

undefined8 * FUN_145cd8bc4(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b372f10;
  *(undefined4 *)(param_1 + 0x16) = 0xa002;
  param_1[0x17] = "rebind_key";
  lVar4 = FUN_145cd8d8c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8c9b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8c9b:
  FUN_1400b22c2(local_58,"GbxInput.Rebind Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8d8c FUN_145cd8d8c body=55 status=ok
// SIG undefined FUN_145cd8d8c(void)

void FUN_145cd8d8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fad8 = FUN_140002ddd(FUN_1464e8953,uVar1,L"GbxInputKeyRebindDef");
  }
  return;
}



// FUNCTION 145cd8dce FUN_145cd8dce body=454 status=ok
// SIG undefined FUN_145cd8dce(void)

undefined8 * FUN_145cd8dce(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b373430;
  *(undefined4 *)(param_1 + 0x16) = 0xa001;
  param_1[0x17] = "rebind_cont";
  lVar4 = FUN_145cd8f96();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd8ea5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd8ea5:
  FUN_1400b22c2(local_58,"GbxInput.Rebind Context");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd8f96 FUN_145cd8f96 body=55 status=ok
// SIG undefined FUN_145cd8f96(void)

void FUN_145cd8f96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fb38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fb38 = FUN_140002ddd(FUN_1464e8aff,uVar1,L"GbxInputRebindContextDef");
  }
  return;
}



// FUNCTION 145cd8fd8 FUN_145cd8fd8 body=454 status=ok
// SIG undefined FUN_145cd8fd8(void)

undefined8 * FUN_145cd8fd8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3757c0;
  *(undefined4 *)(param_1 + 0x16) = 0x19110;
  param_1[0x17] = "skill_action_exec_query";
  lVar4 = FUN_145cd91a0();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd90af;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd90af:
  FUN_1400b22c2(local_58,"GbxSkills.Action Exec Query");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd91a0 FUN_145cd91a0 body=55 status=ok
// SIG undefined FUN_145cd91a0(void)

void FUN_145cd91a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63b50 = FUN_140002ddd(FUN_1464ff0a6,uVar1,L"GbxSkillActionExecFilterDef");
  }
  return;
}



// FUNCTION 145cd91e2 FUN_145cd91e2 body=454 status=ok
// SIG undefined FUN_145cd91e2(void)

undefined8 * FUN_145cd91e2(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37d5c0;
  *(undefined4 *)(param_1 + 0x16) = 0x1910b;
  param_1[0x17] = "skill_mresource_group";
  lVar4 = FUN_145cd93aa();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd92b9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd92b9:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Managed Resource Group");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd93aa FUN_145cd93aa body=55 status=ok
// SIG undefined FUN_145cd93aa(void)

void FUN_145cd93aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65198 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65198 = FUN_140002ddd(FUN_14650864a,uVar1,L"GbxSkillManagedResourceGroupDef");
  }
  return;
}



// FUNCTION 145cd93ec FUN_145cd93ec body=454 status=ok
// SIG undefined FUN_145cd93ec(void)

undefined8 * FUN_145cd93ec(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37dff0;
  *(undefined4 *)(param_1 + 0x16) = 0x19108;
  param_1[0x17] = "skill_state_condition";
  lVar4 = FUN_145cd95b4();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd94c3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd94c3:
  FUN_1400b22c2(local_58,"GbxSkills.Skill State Condition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd95b4 FUN_145cd95b4 body=55 status=ok
// SIG undefined FUN_145cd95b4(void)

void FUN_145cd95b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65528 = FUN_140002ddd(FUN_146509c56,uVar1,L"GbxSkillStateConditionDef");
  }
  return;
}



// FUNCTION 145cd95f6 FUN_145cd95f6 body=454 status=ok
// SIG undefined FUN_145cd95f6(void)

undefined8 * FUN_145cd95f6(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37ea40;
  *(undefined4 *)(param_1 + 0x16) = 0x19105;
  param_1[0x17] = "skill_target_list";
  lVar4 = FUN_145cd97be();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd96cd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd96cd:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Target List");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd97be FUN_145cd97be body=55 status=ok
// SIG undefined FUN_145cd97be(void)

void FUN_145cd97be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65cd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65cd0 = FUN_140002ddd(FUN_1418589ab,uVar1,L"GbxSkillTargetListDef");
  }
  return;
}



// FUNCTION 145cd9800 FUN_145cd9800 body=454 status=ok
// SIG undefined FUN_145cd9800(void)

undefined8 * FUN_145cd9800(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37ef70;
  *(undefined4 *)(param_1 + 0x16) = 0x19102;
  param_1[0x17] = "skill_res_strategy";
  lVar4 = FUN_145cd99c8();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd98d7;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd98d7:
  FUN_1400b22c2(local_58,"GbxSkills.Target Resolution Strategy");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd99c8 FUN_145cd99c8 body=55 status=ok
// SIG undefined FUN_145cd99c8(void)

void FUN_145cd99c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65dd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65dd8 = FUN_140002ddd(FUN_14650d624,uVar1,L"GbxSkillTargetResolutionStrategyDef");
  }
  return;
}



// FUNCTION 145cd9a0a FUN_145cd9a0a body=454 status=ok
// SIG undefined FUN_145cd9a0a(void)

undefined8 * FUN_145cd9a0a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37f490;
  *(undefined4 *)(param_1 + 0x16) = 0x9104;
  param_1[0x17] = "status_effect_pushevent";
  lVar4 = FUN_145cd9bd2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd9ae1;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd9ae1:
  FUN_1400b22c2(local_58,"GbxStatusEffects.Push Event");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd9bd2 FUN_145cd9bd2 body=55 status=ok
// SIG undefined FUN_145cd9bd2(void)

void FUN_145cd9bd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb671e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb671e0 = FUN_140002ddd(FUN_146514976,uVar1,L"GbxStatusEffectPushEventDef");
  }
  return;
}



// FUNCTION 145cd9c14 FUN_145cd9c14 body=454 status=ok
// SIG undefined FUN_145cd9c14(void)

undefined8 * FUN_145cd9c14(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37f9b0;
  *(undefined4 *)(param_1 + 0x16) = 0x9101;
  param_1[0x17] = "status_effect_rule";
  lVar4 = FUN_145cd9ddc();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd9ceb;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd9ceb:
  FUN_1400b22c2(local_58,"GbxStatusEffects.Rule");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd9ddc FUN_145cd9ddc body=55 status=ok
// SIG undefined FUN_145cd9ddc(void)

void FUN_145cd9ddc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb672e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb672e8 = FUN_140002ddd(FUN_146514f82,uVar1,L"GbxStatusEffectRuleDef");
  }
  return;
}



// FUNCTION 145cd9e1e FUN_145cd9e1e body=454 status=ok
// SIG undefined FUN_145cd9e1e(void)

undefined8 * FUN_145cd9e1e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37fee0;
  *(undefined4 *)(param_1 + 0x16) = 0x9100;
  param_1[0x17] = "se_severity_channel";
  lVar4 = FUN_145cd9fe6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cd9ef5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cd9ef5:
  FUN_1400b22c2(local_58,"GbxStatusEffects.Severity Channel");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd9fe6 FUN_145cd9fe6 body=55 status=ok
// SIG undefined FUN_145cd9fe6(void)

void FUN_145cd9fe6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67530 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67530 = FUN_140002ddd(FUN_146515ae3,uVar1,L"GbxStatusEffectSeverityChannelDef");
  }
  return;
}



// FUNCTION 145cda028 FUN_145cda028 body=454 status=ok
// SIG undefined FUN_145cda028(void)

undefined8 * FUN_145cda028(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b386980;
  *(undefined4 *)(param_1 + 0x16) = 0x1020;
  param_1[0x17] = "preferredparts";
  lVar4 = FUN_145cda1f0();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cda0ff;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cda0ff:
  FUN_1400b22c2(local_58,"Item Pool.Preferred Parts");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cda1f0 FUN_145cda1f0 body=55 status=ok
// SIG undefined FUN_145cda1f0(void)

void FUN_145cda1f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a770 = FUN_140002ddd(FUN_146527008,uVar1,L"ItemPoolPreferredPartsDef");
  }
  return;
}



// FUNCTION 145cda230 FUN_145cda230 body=512 status=ok
// SIG undefined FUN_145cda230(void)

undefined8 * FUN_145cda230(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b7e1190;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 4;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 3;
  *(char *)(param_1 + 0x13) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1446f470e(&local_48,L"AnyStance_Puppet_Default",1);
  param_1[0x21] = local_48;
  *(undefined4 *)(param_1 + 0x22) = 0xc;
  param_1[0x23] = 0;
  FUN_1446f470e(&local_50,L"AnyStance_Puppet_Aim",1);
  param_1[0x24] = local_50;
  *(undefined4 *)(param_1 + 0x25) = 0xc;
  param_1[0x26] = 0;
  FUN_1446f470e(&local_58,L"AnyStance_Puppet_Sprint",1);
  param_1[0x27] = local_58;
  *(undefined4 *)(param_1 + 0x28) = 0xc;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xc07a400000000000;
  param_1[0x2c] = 0x4044000000000000;
  param_1[0x2d] = 0x403e000000000000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xc07a400000000000;
  param_1[0x31] = 0x4044000000000000;
  param_1[0x32] = 0x403e000000000000;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  param_1[0x34] = 0x3f3333333e99999a;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cda432 FUN_145cda432 body=216 status=ok
// SIG undefined FUN_145cda432(void)

undefined8 * FUN_145cda432(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145cda522 FUN_145cda522 body=215 status=ok
// SIG undefined FUN_145cda522(void)

undefined8 * FUN_145cda522(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
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
  *param_1 = &PTR_FUN_14a64db60;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebde8) {
    FUN_144b3d300(&DAT_14caebde8);
    if (DAT_14caebde8 == -1) {
      FUN_141528a40();
      atexit((_func_5014 *)&LAB_14356f20e);
      _Init_thread_footer(&DAT_14caebde8);
    }
  }
  param_1[0x20] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145cda5fa FUN_145cda5fa body=38 status=ok
// SIG undefined FUN_145cda5fa(void)

undefined8 FUN_145cda5fa(undefined8 param_1,int param_2)

{
  FUN_145cda620();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cda620 FUN_145cda620 body=344 status=ok
// SIG undefined FUN_145cda620(void)

void FUN_145cda620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c4e80;
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x8c);
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_145cda778(param_1 + 0x6d);
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f404(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145cda778 FUN_145cda778 body=53 status=ok
// SIG undefined FUN_145cda778(void)

void FUN_145cda778(longlong *param_1)

{
  FUN_145cda7ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cda7ae FUN_145cda7ae body=346 status=ok
// SIG undefined FUN_145cda7ae(void)

void FUN_145cda7ae(longlong *param_1)

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



// FUNCTION 145cda90a FUN_145cda90a body=138 status=ok
// SIG undefined FUN_145cda90a(void)

undefined1 * FUN_145cda90a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cda994();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceHierarchyParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceHierarchyParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147257100;
}



// FUNCTION 145cda994 FUN_145cda994 body=268 status=ok
// SIG undefined FUN_145cda994(void)

undefined * FUN_145cda994(void)

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
              0x110) < DAT_14ca19730) {
    FUN_144b3d300(&DAT_14ca19730);
    if (DAT_14ca19730 == -1) {
      FUN_145cdaaa2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInstanceHierarchyParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca196b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2760f);
      _Init_thread_footer(&DAT_14ca19730);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca196b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdaaa2 FUN_145cdaaa2 body=226 status=ok
// SIG undefined FUN_145cdaaa2(void)

longlong * FUN_145cdaaa2(longlong *param_1)

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
  pcVar13 = FUN_1462f096e;
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



// FUNCTION 145cdab8a FUN_145cdab8a body=138 status=ok
// SIG undefined FUN_145cdab8a(void)

code * FUN_145cdab8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseExplicitCellBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cdac14;
}



// FUNCTION 145cdac14 FUN_145cdac14 body=138 status=ok
// SIG undefined FUN_145cdac14(void)

code * FUN_145cdac14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472572a2;
}



// FUNCTION 145cdac9e FUN_145cdac9e body=284 status=ok
// SIG undefined FUN_145cdac9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cdac9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0740) {
    FUN_144b3d300(&DAT_14cae0740);
    if (DAT_14cae0740 == -1) {
      FUN_145cdadba();
      FUN_140db5666(&DAT_14cae0698,0,&DAT_14cae0630,L"FRecomputeTangentsPerTrianglePassCS<0>",
                    L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
                    FUN_147ada4c8,FUN_147ada4a0,&LAB_1463d0992,&LAB_147ada49c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x130,0);
      _DAT_14cae0698 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512285);
      _Init_thread_footer(&DAT_14cae0740);
    }
  }
  return &DAT_14cae0698;
}



// FUNCTION 145cdadba FUN_145cdadba body=205 status=ok
// SIG undefined FUN_145cdadba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdadba(void)

{
  if ((DAT_14cae0697 & 2) == 0) {
    DAT_14cae0697 = DAT_14cae0697 | 2;
    _DAT_14cae0638 = L"FRecomputeTangentsPerTrianglePassCS<0>";
    _DAT_14cae0650 = FUN_146826540;
    _DAT_14cae0658 = FUN_146825d77;
    _DAT_14cae0660 = FUN_146825fd6;
    _DAT_14cae0668 = FUN_1407e02ea;
    _DAT_14cae0670 = FUN_146826273;
    _DAT_14cae0648 = FUN_147ada46e;
    _DAT_14cae0688 = 0xffffffff00000130;
    _DAT_14cae0690 = 8;
    DAT_14cae0694 = 0;
    _DAT_14cae0678 = &LAB_147ada498;
    FUN_145cdae88();
    FUN_1407e00cc(&DAT_14cae0630);
    return;
  }
  return;
}



// FUNCTION 145cdae88 FUN_145cdae88 body=133 status=ok
// SIG undefined FUN_145cdae88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdae88(void)

{
  _DAT_14cae3008 = L"BASE";
  DAT_14cae3032 = 4;
  FUN_145cdaf0e();
  _DAT_14cae3018 = DAT_14cae0640;
  _DAT_14cae3010 = &DAT_14cae3038;
  _DAT_14cae3020 = &LAB_14682652b;
  DAT_14cae0640 = &DAT_14cae3008;
  DAT_14cae0695 = DAT_14cae0695 + '\x01';
  _DAT_14cae3028 = 0x100000000;
  if (DAT_14cae309c != '\0') {
    DAT_14cae0696 = DAT_14cae0696 + '\x01';
  }
  return;
}



// FUNCTION 145cdaf0e FUN_145cdaf0e body=205 status=ok
// SIG undefined FUN_145cdaf0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdaf0e(void)

{
  if ((DAT_14cae309f & 2) != 0) {
    return;
  }
  DAT_14cae309f = DAT_14cae309f | 2;
  _DAT_14cae3040 = L"FBaseRecomputeTangentsPerTriangleShader";
  _DAT_14cae3058 = FUN_146826540;
  _DAT_14cae3060 = FUN_146825d77;
  _DAT_14cae3068 = FUN_146825fd6;
  _DAT_14cae3070 = FUN_1407e02ea;
  _DAT_14cae3078 = FUN_146826273;
  _DAT_14cae3050 = FUN_147ae1a62;
  _DAT_14cae3090 = 0xffffffff00000130;
  _DAT_14cae3098 = 8;
  DAT_14cae309c = 0;
  _DAT_14cae3080 = &LAB_147ae1a8c;
  FUN_145cdafdc();
  FUN_145cdb60e();
  FUN_1407e00cc(&DAT_14cae3038);
  return;
}



// FUNCTION 145cdafdc FUN_145cdafdc body=121 status=ok
// SIG undefined FUN_145cdafdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdafdc(void)

{
  FUN_145cdb056();
  _DAT_14cae30a0 = L"IntermediateAccumBufferUAV";
  DAT_14cae30ca = FUN_140850cc5();
  _DAT_14cae30a8 = FUN_140fb78d0();
  _DAT_14cae30b8 = &LAB_14682652b;
  _DAT_14cae30c0 = 0x1000000e0;
  _DAT_14cae30c8 = 0;
  _DAT_14cae30b0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae30a0;
  return;
}



// FUNCTION 145cdb056 FUN_145cdb056 body=121 status=ok
// SIG undefined FUN_145cdb056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb056(void)

{
  FUN_145cdb0d0();
  _DAT_14cae30d0 = L"IntermediateAccumBufferOffset";
  DAT_14cae30fa = FUN_140850cc5();
  _DAT_14cae30d8 = FUN_140ec6960();
  _DAT_14cae30e8 = &LAB_14682652b;
  _DAT_14cae30f0 = 0x1000000e4;
  _DAT_14cae30f8 = 0;
  _DAT_14cae30e0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae30d0;
  return;
}



// FUNCTION 145cdb0d0 FUN_145cdb0d0 body=121 status=ok
// SIG undefined FUN_145cdb0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb0d0(void)

{
  FUN_145cdb14a();
  _DAT_14cae3100 = L"NumTriangles";
  DAT_14cae312a = FUN_140850cc5();
  _DAT_14cae3108 = FUN_140ec6960();
  _DAT_14cae3118 = &LAB_14682652b;
  _DAT_14cae3120 = 0x1000000ea;
  _DAT_14cae3128 = 0;
  _DAT_14cae3110 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3100;
  return;
}



// FUNCTION 145cdb14a FUN_145cdb14a body=121 status=ok
// SIG undefined FUN_145cdb14a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb14a(void)

{
  FUN_145cdb1c4();
  _DAT_14cae3130 = L"GPUPositionCacheBuffer";
  DAT_14cae315a = FUN_140850cc5();
  _DAT_14cae3138 = FUN_140fb78d0();
  _DAT_14cae3148 = &LAB_14682652b;
  _DAT_14cae3150 = 0x1000000f0;
  _DAT_14cae3158 = 0;
  _DAT_14cae3140 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3130;
  return;
}



// FUNCTION 145cdb1c4 FUN_145cdb1c4 body=121 status=ok
// SIG undefined FUN_145cdb1c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb1c4(void)

{
  FUN_145cdb23e();
  _DAT_14cae3160 = L"GPUTangentCacheBuffer";
  DAT_14cae318a = FUN_140850cc5();
  _DAT_14cae3168 = FUN_140fb78d0();
  _DAT_14cae3178 = &LAB_14682652b;
  _DAT_14cae3180 = 0x1000000f4;
  _DAT_14cae3188 = 0;
  _DAT_14cae3170 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3160;
  return;
}



// FUNCTION 145cdb23e FUN_145cdb23e body=121 status=ok
// SIG undefined FUN_145cdb23e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb23e(void)

{
  FUN_145cdb2b8();
  _DAT_14cae3190 = L"SkinCacheStart";
  DAT_14cae31ba = FUN_140850cc5();
  _DAT_14cae3198 = FUN_140ec6960();
  _DAT_14cae31a8 = &LAB_14682652b;
  _DAT_14cae31b0 = 0x1000000f8;
  _DAT_14cae31b8 = 0;
  _DAT_14cae31a0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3190;
  return;
}



// FUNCTION 145cdb2b8 FUN_145cdb2b8 body=121 status=ok
// SIG undefined FUN_145cdb2b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb2b8(void)

{
  FUN_145cdb332();
  _DAT_14cae31c0 = L"IndexBuffer";
  DAT_14cae31ea = FUN_140850cc5();
  _DAT_14cae31c8 = FUN_140fb78d0();
  _DAT_14cae31d8 = &LAB_14682652b;
  _DAT_14cae31e0 = 0x1000000fe;
  _DAT_14cae31e8 = 0;
  _DAT_14cae31d0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae31c0;
  return;
}



// FUNCTION 145cdb332 FUN_145cdb332 body=121 status=ok
// SIG undefined FUN_145cdb332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb332(void)

{
  FUN_145cdb3ac();
  _DAT_14cae31f0 = L"IndexBufferOffset";
  DAT_14cae321a = FUN_140850cc5();
  _DAT_14cae31f8 = FUN_140ec6960();
  _DAT_14cae3208 = &LAB_14682652b;
  _DAT_14cae3210 = 0x100000102;
  _DAT_14cae3218 = 0;
  _DAT_14cae3200 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae31f0;
  return;
}



// FUNCTION 145cdb3ac FUN_145cdb3ac body=121 status=ok
// SIG undefined FUN_145cdb3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb3ac(void)

{
  FUN_145cdb426();
  _DAT_14cae3220 = L"InputStreamStart";
  DAT_14cae324a = FUN_140850cc5();
  _DAT_14cae3228 = FUN_140ec6960();
  _DAT_14cae3238 = &LAB_14682652b;
  _DAT_14cae3240 = &DAT_100000108;
  _DAT_14cae3248 = 0;
  _DAT_14cae3230 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3220;
  return;
}



// FUNCTION 145cdb426 FUN_145cdb426 body=121 status=ok
// SIG undefined FUN_145cdb426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb426(void)

{
  FUN_145cdb4a0();
  _DAT_14cae3250 = L"NumTexCoords";
  DAT_14cae327a = FUN_140850cc5();
  _DAT_14cae3258 = FUN_140ec6960();
  _DAT_14cae3268 = &LAB_14682652b;
  _DAT_14cae3270 = 0x10000010e;
  _DAT_14cae3278 = 0;
  _DAT_14cae3260 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3250;
  return;
}



// FUNCTION 145cdb4a0 FUN_145cdb4a0 body=121 status=ok
// SIG undefined FUN_145cdb4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb4a0(void)

{
  FUN_145cdb51a();
  _DAT_14cae3280 = L"SelectedTexCoord";
  DAT_14cae32aa = FUN_140850cc5();
  _DAT_14cae3288 = FUN_140ec6960();
  _DAT_14cae3298 = &LAB_14682652b;
  _DAT_14cae32a0 = 0x100000114;
  _DAT_14cae32a8 = 0;
  _DAT_14cae3290 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3280;
  return;
}



// FUNCTION 145cdb51a FUN_145cdb51a body=121 status=ok
// SIG undefined FUN_145cdb51a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb51a(void)

{
  FUN_145cdb594();
  _DAT_14cae32b0 = L"TangentInputBuffer";
  DAT_14cae32da = FUN_140850cc5();
  _DAT_14cae32b8 = FUN_140fb78d0();
  _DAT_14cae32c8 = &LAB_14682652b;
  _DAT_14cae32d0 = 0x10000011a;
  _DAT_14cae32d8 = 0;
  _DAT_14cae32c0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae32b0;
  return;
}



// FUNCTION 145cdb594 FUN_145cdb594 body=121 status=ok
// SIG undefined FUN_145cdb594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb594(void)

{
  FUN_145cdb68a();
  _DAT_14cae32e0 = L"UVsInputBuffer";
  DAT_14cae330a = FUN_140850cc5();
  _DAT_14cae32e8 = FUN_140fb78d0();
  _DAT_14cae32f8 = &LAB_14682652b;
  _DAT_14cae3300 = 0x10000011e;
  _DAT_14cae3308 = 0;
  _DAT_14cae32f0 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae32e0;
  return;
}



// FUNCTION 145cdb60e FUN_145cdb60e body=123 status=ok
// SIG undefined FUN_145cdb60e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb60e(void)

{
  _DAT_14cae3370 = L"BASE";
  DAT_14cae339a = 4;
  _DAT_14cae3378 = FUN_140b35ae4();
  _DAT_14cae3380 = DAT_14cae3048;
  _DAT_14cae3388 = &LAB_14682652b;
  DAT_14cae3048 = &DAT_14cae3370;
  DAT_14cae309d = DAT_14cae309d + '\x01';
  _DAT_14cae3390 = 0x100000000;
  if (*(char *)(_DAT_14cae3378 + 100) != '\0') {
    DAT_14cae309e = DAT_14cae309e + '\x01';
  }
  return;
}



// FUNCTION 145cdb68a FUN_145cdb68a body=216 status=ok
// SIG undefined FUN_145cdb68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdb68a(void)

{
  _DAT_14cae3340 = L"DuplicatedIndicesIndices";
  DAT_14cae336a = FUN_140850cc5();
  _DAT_14cae3348 = FUN_140fb78d0();
  _DAT_14cae3358 = &LAB_14682652b;
  _DAT_14cae3360 = 0x100000126;
  _DAT_14cae3368 = 0;
  _DAT_14cae3350 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3340;
  _DAT_14cae3310 = L"DuplicatedIndices";
  DAT_14cae333a = FUN_140850cc5();
  _DAT_14cae3318 = FUN_140fb78d0();
  _DAT_14cae3328 = &LAB_14682652b;
  _DAT_14cae3330 = 0x100000122;
  _DAT_14cae3338 = 0;
  _DAT_14cae3320 = DAT_14cae3048;
  DAT_14cae3048 = &DAT_14cae3310;
  return;
}



// FUNCTION 145cdb76e FUN_145cdb76e body=250 status=ok
// SIG undefined FUN_145cdb76e(void)

undefined8 * FUN_145cdb76e(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b3225c0;
  param_1[0xd] = &PTR_LAB_14b322910;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7c428) {
    FUN_144b3d300(&DAT_14cb7c428);
    if (DAT_14cb7c428 == -1) {
      FUN_1446f470e(&DAT_14cb7c420,L"JunkChannel",1);
      _Init_thread_footer(&DAT_14cb7c428);
    }
  }
  param_1[8] = DAT_14cb7c420;
  return param_1;
}



// FUNCTION 145cdb868 FUN_145cdb868 body=146 status=ok
// SIG undefined FUN_145cdb868(void)

code * FUN_145cdb868(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cdb8fa();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FScreenGridParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c87c8;
  return FUN_1462bfc4e;
}



// FUNCTION 145cdb8fa FUN_145cdb8fa body=261 status=ok
// SIG undefined FUN_145cdb8fa(void)

void FUN_145cdb8fa(void)

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
              0x110) < DAT_14c9c8848) {
    FUN_144b3d300(&DAT_14c9c8848);
    if (DAT_14c9c8848 == -1) {
      FUN_145cdba00(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenGridParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x76;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c87c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76ee);
      _Init_thread_footer(&DAT_14c9c8848);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdba00 FUN_145cdba00 body=226 status=ok
// SIG undefined FUN_145cdba00(void)

longlong * FUN_145cdba00(longlong *param_1)

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
  pcVar13 = FUN_1462bfcde;
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



// FUNCTION 145cdbae8 FUN_145cdbae8 body=138 status=ok
// SIG undefined FUN_145cdbae8(void)

code * FUN_145cdbae8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BaseLevelTexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cdbb72;
}



// FUNCTION 145cdbb72 FUN_145cdbb72 body=138 status=ok
// SIG undefined FUN_145cdbb72(void)

code * FUN_145cdbb72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldNormalSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152d4e;
}



// FUNCTION 145cdbbfc FUN_145cdbbfc body=1017 status=ok
// SIG undefined FUN_145cdbbfc(void)

void FUN_145cdbbfc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  wchar_t **local_100;
  longlong **local_f8;
  undefined8 *local_f0;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145cdc706(&local_58,param_1);
  lVar2 = FUN_1402ca1b2();
  lVar4 = *(longlong *)(lVar2 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar2);
    lVar4 = *(longlong *)(lVar2 + 0x110);
    if (lVar4 == 0) goto LAB_145cdbda8;
  }
  FUN_1446ddc76(&local_60,"Settings",1);
  plVar3 = (longlong *)FUN_1447c1074(local_60);
  if (plVar3 != (longlong *)0x0) {
    local_78 = 0;
    FUN_14485c47a(&local_78,lVar4);
    local_58 = L"SettingsDescription";
    local_50 = 0x13;
    FUN_1446e940c(local_8c,&local_58);
    local_58 = L"GameplayDebuggerModule";
    local_50 = 0x16;
    FUN_1446e940c(local_90,&local_58);
    FUN_140208bae(local_88,local_90,local_8c,L"Settings for the gameplay debugger tool.");
    local_58 = L"SettingsName";
    local_50 = 0xc;
    FUN_1446e940c(local_94,&local_58);
    local_58 = L"GameplayDebuggerModule";
    local_50 = 0x16;
    FUN_1446e940c(local_98,&local_58);
    FUN_140208bae(&local_58,local_98,local_94,L"Gameplay Debugger");
    FUN_1446ddc76(local_a0,"GameplayDebugger",1);
    FUN_1446ddc76(local_a8,"Engine",1);
    FUN_1446ddc76(local_b0,"Project",1);
    local_f0 = &local_78;
    local_108 = local_a0;
    local_100 = &local_58;
    local_f8 = local_88;
    (**(code **)(*plVar3 + 0x58))(plVar3,local_70,local_b0,local_a8);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
  }
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,2,0x10);
  local_b8 = 2;
  *local_c0 = &PTR_LAB_14b5b7330;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_c0[2] = lVar2;
  *local_c0 = &PTR_FUN_14b5b72c0;
  local_c0[3] = FUN_1456f40d0;
  FUN_1446ddc76(&local_c8,"Spectator",1);
  FUN_145cdbff6(param_1 + 8,local_c8,&local_c0);
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,2,0x10);
  local_d0 = 2;
  *local_d8 = &PTR_LAB_14b5b7330;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_d8[2] = lVar2;
  *local_d8 = &PTR_FUN_14b5b72c0;
  local_d8[3] = FUN_1456f3fe2;
  FUN_1446ddc76(&local_e0,"GameHUD",1);
  FUN_145cdbff6(param_1 + 8,local_e0,&local_d8);
  FUN_1447f69b6(param_1 + 0x20);
LAB_145cdbda8:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cdbff6 FUN_145cdbff6 body=341 status=ok
// SIG undefined FUN_145cdbff6(void)

void FUN_145cdbff6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [47];
  char local_69;
  longlong local_68;
  undefined4 local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_50 = param_2;
  FUN_1402c9880(&local_68,param_3);
  local_58 = local_58 | 1;
  local_69 = '\x01';
  lVar3 = FUN_1402ca1b2();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  FUN_145cdc14c(lVar4,param_2,&local_69);
  local_58 = (local_58 & 0xfffffffd) + (uint)(local_69 != '\0') * 2;
  local_48 = &local_50;
  local_40 = &local_68;
  FUN_145cdc37e(param_1 + 0x30,local_34);
  DAT_14cb9ead0 = local_50;
  if (*(int *)(param_3 + 1) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)*param_3;
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,&local_48);
  plVar5 = local_40;
  DAT_14cb9ead0 = 0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
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
  FUN_1449db362(&local_68);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdc14c FUN_145cdc14c body=342 status=ok
// SIG undefined FUN_145cdc14c(void)

void FUN_145cdc14c(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_2;
  FUN_140721fbe(param_1 + 0x1a8,&local_40);
  plVar1 = (longlong *)(param_1 + 0x188);
  if (0 < *(int *)(param_1 + 400)) {
    lVar7 = 8;
    uVar6 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(*plVar1 + lVar7) != 0) {
        puVar5 = *(undefined2 **)(*plVar1 + -8 + lVar7);
      }
      cVar3 = FUN_1402ca022(local_40,puVar5);
      if (cVar3 != '\0') goto LAB_145cdc24c;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 400));
  }
  local_58 = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1400021e4(&local_40,&local_78);
  uVar2 = *(uint *)(param_1 + 400);
  uVar6 = (ulonglong)uVar2;
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  *(uint *)(param_1 + 400) = uVar2 + 1;
  if (*(uint *)(param_1 + 0x194) < uVar2 + 1) {
    FUN_145cdc672(plVar1,uVar2);
  }
  FUN_145cdc2e0((longlong)(int)uVar2 * 0x28 + *plVar1,&local_68);
  FUN_145cdc2a4(&local_68);
LAB_145cdc24c:
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 400))) {
    cVar3 = *(char *)(*plVar1 + 0x10 + (uVar6 & 0xffffffff) * 0x28);
    bVar4 = *param_3 != '\0';
    if (cVar3 != '\x02') {
      bVar4 = cVar3 == '\0';
    }
    *param_3 = bVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdc2a4 FUN_145cdc2a4 body=59 status=ok
// SIG undefined FUN_145cdc2a4(void)

void FUN_145cdc2a4(longlong *param_1)

{
  FUN_1412d963a(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cdc2e0 FUN_145cdc2e0 body=157 status=ok
// SIG undefined FUN_145cdc2e0(void)

undefined8 * FUN_145cdc2e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148b7ad3e(param_1 + 3,iVar1,0);
    FUN_148b7adb1(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145cdc37e FUN_145cdc37e body=362 status=ok
// SIG undefined FUN_145cdc37e(void)

undefined4 * FUN_145cdc37e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cdc58a(param_1,local_48);
  lVar7 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0;
  FUN_1402c9880(local_40 + 1,lVar7);
  *(undefined1 *)(local_40 + 3) = *(undefined1 *)(lVar7 + 0x10);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145cdc4ea(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cdc7e6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


