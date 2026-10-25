// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ea1408 FUN_146ea1408 body=127 status=ok
// SIG undefined FUN_146ea1408(void)

void FUN_146ea1408(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x2e));
  lVar1 = param_1[0x2c];
  lVar2 = param_1[0x2d];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x2e));
  if ((longlong)(int)lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 146ea1488 FUN_146ea1488 body=128 status=ok
// SIG undefined FUN_146ea1488(void)

void FUN_146ea1488(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x2e));
  lVar1 = param_1[0x2a];
  lVar2 = param_1[0x2b];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x2e));
  if ((longlong)(int)lVar2 != 0) {
    lVar3 = (longlong)(int)lVar2 << 3;
    lVar2 = lVar1;
    do {
      (**(code **)(*param_1 + 8))(param_1,lVar2);
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 146ea1508 FUN_146ea1508 body=187 status=ok
// SIG undefined FUN_146ea1508(void)

undefined8 * FUN_146ea1508(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  lVar6 = 0x10;
  puVar7 = param_2;
  puVar8 = param_1;
  while( true ) {
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    *puVar8 = *puVar7;
  }
  param_1[0x13] = param_2[0x13];
  uVar5 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar3 = *(undefined4 *)(param_2 + 0x15);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  _Src = (void *)param_2[0x17];
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146ea15c4 FUN_146ea15c4 body=48 status=ok
// SIG undefined FUN_146ea15c4(void)

void FUN_146ea15c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146ea15f4 FUN_146ea15f4 body=29 status=ok
// SIG undefined FUN_146ea15f4(void)

undefined8 FUN_146ea15f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea1618 FUN_146ea1618 body=47 status=ok
// SIG undefined FUN_146ea1618(void)

void FUN_146ea1618(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149f61f50;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 146ea1648 FUN_146ea1648 body=139 status=ok
// SIG undefined FUN_146ea1648(void)

void FUN_146ea1648(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,8);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 146ea16da FUN_146ea16da body=47 status=ok
// SIG undefined FUN_146ea16da(void)

void FUN_146ea16da(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149f61f70;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 146ea170a FUN_146ea170a body=268 status=ok
// SIG undefined FUN_146ea170a(void)

undefined8 FUN_146ea170a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x06')) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea1816 FUN_146ea1816 body=283 status=ok
// SIG undefined FUN_146ea1816(void)

longlong FUN_146ea1816(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\r')
         ) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea1932 FUN_146ea1932 body=268 status=ok
// SIG undefined FUN_146ea1932(void)

undefined8 FUN_146ea1932(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\r')
         ) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea1a3e FUN_146ea1a3e body=70 status=ok
// SIG undefined FUN_146ea1a3e(void)

void FUN_146ea1a3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ea1a84(param_1,param_2,param_3,param_4);
  }
  FUN_146ea1c94(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ea1a84 FUN_146ea1a84 body=526 status=ok
// SIG undefined FUN_146ea1a84(void)

void FUN_146ea1a84(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146ea1b1e;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ea1b1e:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9968ec) && (FUN_144b3d300(&DAT_14c9968ec), DAT_14c9968ec == -1)) {
    DAT_14c9968e4 = 0;
    _Init_thread_footer(&DAT_14c9968ec);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c9968e4;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f63020;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146ea2202(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea1c94 FUN_146ea1c94 body=251 status=ok
// SIG undefined FUN_146ea1c94(void)

void FUN_146ea1c94(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ea1ca4;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ea1ca4:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ea1d90 FUN_146ea1d90 body=204 status=ok
// SIG undefined FUN_146ea1d90(void)

void FUN_146ea1d90(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = (**(code **)(*param_1 + 0x60))();
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  FUN_146ea21c0();
  if (0 < (int)uVar8) {
    uVar10 = 0;
    puVar9 = local_48;
    do {
      lVar2 = param_1[2];
      lVar11 = (longlong)*(int *)(*param_2 + uVar10 * 4) * 0x38;
      puVar9[6] = *(undefined8 *)(lVar2 + 0x30 + lVar11);
      uVar3 = *(undefined8 *)(lVar2 + lVar11);
      uVar4 = ((undefined8 *)(lVar2 + lVar11))[1];
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar11);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar11);
      uVar7 = puVar1[1];
      puVar9[4] = *puVar1;
      puVar9[5] = uVar7;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      *puVar9 = uVar3;
      puVar9[1] = uVar4;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 7;
    } while (uVar8 != uVar10);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  param_1[3] = lStack_40;
  local_48 = (undefined8 *)local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea1e5e FUN_146ea1e5e body=130 status=ok
// SIG undefined FUN_146ea1e5e(void)

void FUN_146ea1e5e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar10 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar10);
  if (0 < (int)uVar10) {
    lVar11 = 0;
    do {
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      *(undefined8 *)(lVar4 + 0x30 + lVar11) = *(undefined8 *)(lVar3 + 0x30 + lVar11);
      uVar5 = *(undefined8 *)(lVar3 + lVar11);
      uVar6 = ((undefined8 *)(lVar3 + lVar11))[1];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
      uVar9 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar4 + lVar11) = uVar5;
      ((undefined8 *)(lVar4 + lVar11))[1] = uVar6;
      lVar11 = lVar11 + 0x38;
    } while ((ulonglong)uVar10 * 0x38 - lVar11 != 0);
  }
  return;
}



// FUNCTION 146ea1ee0 FUN_146ea1ee0 body=213 status=ok
// SIG undefined FUN_146ea1ee0(void)

void FUN_146ea1ee0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar16 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar16)) {
    lVar19 = (longlong)(param_5 + param_3);
    lVar20 = (longlong)param_3;
    lVar17 = lVar20 * 0x38;
    lVar18 = lVar19 * 0x38;
    do {
      if ((int)param_1[3] <= lVar19) {
        return;
      }
      if (param_4 <= lVar20) {
        return;
      }
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      *(undefined8 *)(lVar4 + 0x30 + lVar18) = *(undefined8 *)(lVar3 + 0x30 + lVar17);
      puVar1 = (undefined4 *)(lVar3 + lVar17);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar17);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar17);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar18);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(lVar4 + lVar18);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 1;
      iVar16 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar17 = lVar17 + 0x38;
      lVar18 = lVar18 + 0x38;
    } while (lVar20 < iVar16);
  }
  return;
}



// FUNCTION 146ea1fc0 FUN_146ea1fc0 body=250 status=ok
// SIG undefined FUN_146ea1fc0(void)

void FUN_146ea1fc0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar5 * 0x38 + (longlong)pvVar3),
                    (longlong)iVar7 * 0x38);
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0x38 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar6 * 0x38 + (longlong)pvVar3),(longlong)iVar7 * 0x38)
          ;
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_1401a2d6a(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea20d8 FUN_146ea20d8 body=57 status=ok
// SIG undefined FUN_146ea20d8(void)

undefined8 * FUN_146ea20d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f630b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea2112 FUN_146ea2112 body=63 status=ok
// SIG undefined FUN_146ea2112(void)

void FUN_146ea2112(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ea2152(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 146ea2152 FUN_146ea2152 body=109 status=ok
// SIG undefined FUN_146ea2152(void)

ulonglong FUN_146ea2152(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 146ea21c0 FUN_146ea21c0 body=65 status=ok
// SIG undefined FUN_146ea21c0(void)

int FUN_146ea21c0(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140555802(param_1,iVar1);
  }
  FUN_140ee0864((longlong)iVar1 * 0x38 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ea2202 FUN_146ea2202 body=138 status=ok
// SIG undefined FUN_146ea2202(void)

undefined1 *
FUN_146ea2202(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0xd;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63140;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ea22a6 FUN_146ea22a6 body=29 status=ok
// SIG undefined FUN_146ea22a6(void)

undefined8 FUN_146ea22a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea22c4 FUN_146ea22c4 body=283 status=ok
// SIG undefined FUN_146ea22c4(void)

longlong FUN_146ea22c4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\b')
         ) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea23e0 FUN_146ea23e0 body=283 status=ok
// SIG undefined FUN_146ea23e0(void)

longlong FUN_146ea23e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x04')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea24fc FUN_146ea24fc body=283 status=ok
// SIG undefined FUN_146ea24fc(void)

longlong FUN_146ea24fc(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x02')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea2618 FUN_146ea2618 body=268 status=ok
// SIG undefined FUN_146ea2618(void)

undefined8 FUN_146ea2618(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x04')) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea2724 FUN_146ea2724 body=268 status=ok
// SIG undefined FUN_146ea2724(void)

undefined8 FUN_146ea2724(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x02')) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea2830 FUN_146ea2830 body=70 status=ok
// SIG undefined FUN_146ea2830(void)

void FUN_146ea2830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ea2876(param_1,param_2,param_3,param_4);
  }
  FUN_146ea2a86(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ea2876 FUN_146ea2876 body=526 status=ok
// SIG undefined FUN_146ea2876(void)

void FUN_146ea2876(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146ea2910;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ea2910:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9968d4) && (FUN_144b3d300(&DAT_14c9968d4), DAT_14c9968d4 == -1)) {
    DAT_14c9968cc = 0;
    _Init_thread_footer(&DAT_14c9968d4);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c9968cc;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f62da0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146ea339c(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea2a86 FUN_146ea2a86 body=251 status=ok
// SIG undefined FUN_146ea2a86(void)

void FUN_146ea2a86(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ea2a96;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ea2a96:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ea2b82 FUN_146ea2b82 body=187 status=ok
// SIG undefined FUN_146ea2b82(void)

void FUN_146ea2b82(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146ea3096();
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*param_2 + uVar4 * 4);
      lVar1 = param_1[2];
      *(undefined4 *)(local_48 + 8 + lVar3) = *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc);
      *(undefined8 *)(local_48 + lVar3) = *(undefined8 *)(lVar1 + lVar5 * 0xc);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar2 != uVar4);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea2c3e FUN_146ea2c3e body=86 status=ok
// SIG undefined FUN_146ea2c3e(void)

void FUN_146ea2c3e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar1 = param_1[2];
      lVar5 = 0;
      do {
        lVar6 = (longlong)*(int *)(lVar1 + lVar3 + lVar5 * 4);
        if (-1 < lVar6) {
          *(undefined4 *)(lVar1 + lVar3 + lVar5 * 4) = *(undefined4 *)(*param_2 + lVar6 * 4);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar4 != uVar2);
  }
  return;
}



// FUNCTION 146ea2c94 FUN_146ea2c94 body=111 status=ok
// SIG undefined FUN_146ea2c94(void)

void FUN_146ea2c94(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_2[2];
      lVar2 = param_1[2];
      *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(lVar1 + 8 + lVar4);
      *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)uVar3 * 0xc != lVar4);
  }
  return;
}



// FUNCTION 146ea2d04 FUN_146ea2d04 body=199 status=ok
// SIG undefined FUN_146ea2d04(void)

void FUN_146ea2d04(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar3 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar3)) {
    lVar6 = (longlong)(param_5 + param_3);
    lVar7 = (longlong)param_3;
    lVar4 = lVar7 * 0xc;
    lVar5 = lVar6 * 0xc;
    do {
      if ((int)param_1[3] <= lVar6) {
        return;
      }
      if (param_4 <= lVar7) {
        return;
      }
      lVar1 = param_2[2];
      lVar2 = param_1[2];
      *(undefined4 *)(lVar2 + 8 + lVar5) = *(undefined4 *)(lVar1 + 8 + lVar4);
      *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(lVar1 + lVar4);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 1;
      iVar3 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + 0xc;
    } while (lVar7 < iVar3);
  }
  return;
}



// FUNCTION 146ea2e0c FUN_146ea2e0c body=265 status=ok
// SIG undefined FUN_146ea2e0c(void)

void FUN_146ea2e0c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0xc + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar5 * 0xc),(longlong)iVar7 * 0xc)
            ;
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0xc + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar6 * 0xc),(longlong)iVar7 * 0xc);
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ea3024(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea2f34 FUN_146ea2f34 body=57 status=ok
// SIG undefined FUN_146ea2f34(void)

undefined8 * FUN_146ea2f34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62e30;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea2f6d FUN_146ea2f6d body=1 status=ok
// SIG undefined FUN_146ea2f6d(void)

void FUN_146ea2f6d(void)

{
  return;
}



// FUNCTION 146ea2f6e FUN_146ea2f6e body=63 status=ok
// SIG undefined FUN_146ea2f6e(void)

void FUN_146ea2f6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ea2fae(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146ea2fae FUN_146ea2fae body=117 status=ok
// SIG undefined FUN_146ea2fae(void)

ulonglong FUN_146ea2fae(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146ea3024 FUN_146ea3024 body=113 status=ok
// SIG undefined FUN_146ea3024(void)

void FUN_146ea3024(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 146ea3096 FUN_146ea3096 body=69 status=ok
// SIG undefined FUN_146ea3096(void)

int FUN_146ea3096(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146ddc768(param_1,iVar1);
  }
  FUN_146ea2f6d((longlong)iVar1 * 0xc + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ea30db FUN_146ea30db body=262 status=ok
// SIG undefined FUN_146ea30db(void)

longlong * FUN_146ea30db(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ea3024(param_2);
    }
    FUN_140da13d2(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140333cf8(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0xc;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea31e4 FUN_146ea31e4 body=370 status=ok
// SIG undefined FUN_146ea31e4(void)

longlong * FUN_146ea31e4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146ea3024(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_140333cf8(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146ea3024(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146ea3358(param_2);
        FUN_140333cf8(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ea3358 FUN_146ea3358 body=68 status=ok
// SIG undefined FUN_146ea3358(void)

longlong FUN_146ea3358(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ddc768(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_146ea2f6d(lVar2,1);
  return lVar2;
}



// FUNCTION 146ea339c FUN_146ea339c body=138 status=ok
// SIG undefined FUN_146ea339c(void)

undefined1 *
FUN_146ea339c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 2;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f62ec0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ea3440 FUN_146ea3440 body=29 status=ok
// SIG undefined FUN_146ea3440(void)

undefined8 FUN_146ea3440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea345e FUN_146ea345e body=283 status=ok
// SIG undefined FUN_146ea345e(void)

longlong FUN_146ea345e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '%'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea357a FUN_146ea357a body=283 status=ok
// SIG undefined FUN_146ea357a(void)

longlong FUN_146ea357a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '#'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea3696 FUN_146ea3696 body=283 status=ok
// SIG undefined FUN_146ea3696(void)

longlong FUN_146ea3696(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '&'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146ea37b2 FUN_146ea37b2 body=268 status=ok
// SIG undefined FUN_146ea37b2(void)

undefined8 FUN_146ea37b2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '%'))
      {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea38be FUN_146ea38be body=268 status=ok
// SIG undefined FUN_146ea38be(void)

undefined8 FUN_146ea38be(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '&'))
      {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ea39ca FUN_146ea39ca body=70 status=ok
// SIG undefined FUN_146ea39ca(void)

void FUN_146ea39ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ea3a10(param_1,param_2,param_3,param_4);
  }
  FUN_146ea3c20(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ea3a10 FUN_146ea3a10 body=526 status=ok
// SIG undefined FUN_146ea3a10(void)

void FUN_146ea3a10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146ea3aaa;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ea3aaa:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996890) && (FUN_144b3d300(&DAT_14c996890), DAT_14c996890 == -1)) {
    DAT_14c996888 = 0;
    _Init_thread_footer(&DAT_14c996890);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996888;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f62190;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146ea4412(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea3c20 FUN_146ea3c20 body=251 status=ok
// SIG undefined FUN_146ea3c20(void)

void FUN_146ea3c20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ea3c30;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ea3c30:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ea3d28 FUN_146ea3d28 body=39 status=ok
// SIG undefined FUN_146ea3d28(void)

void FUN_146ea3d28(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_1403b10bc(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146ea3d50 FUN_146ea3d50 body=313 status=ok
// SIG undefined FUN_146ea3d50(void)

void FUN_146ea3d50(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_140bfc2d4(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_144716727(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea3e8a FUN_146ea3e8a body=106 status=ok
// SIG undefined FUN_146ea3e8a(void)

void FUN_146ea3e8a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      iVar5 = *(int *)(param_1[2] + 8 + uVar3 * 0x10);
      if (0 < iVar5) {
        plVar4 = (longlong *)(param_1[2] + uVar3 * 0x10);
        lVar6 = 0;
        do {
          lVar1 = *plVar4;
          lVar7 = (longlong)*(int *)(lVar1 + lVar6 * 4);
          if (-1 < lVar7) {
            *(undefined4 *)(lVar1 + lVar6 * 4) = *(undefined4 *)(*param_2 + lVar7 * 4);
            iVar5 = (int)plVar4[1];
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar5);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 146ea3ef4 FUN_146ea3ef4 body=105 status=ok
// SIG undefined FUN_146ea3ef4(void)

void FUN_146ea3ef4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_14054c6c4(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ea3f5e FUN_146ea3f5e body=94 status=ok
// SIG undefined FUN_146ea3f5e(void)

void FUN_146ea3f5e(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ea427d(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ea3fc6 FUN_146ea3fc6 body=69 status=ok
// SIG undefined FUN_146ea3fc6(void)

undefined8 * FUN_146ea3fc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62220;
  FUN_144716727(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea400c FUN_146ea400c body=122 status=ok
// SIG undefined FUN_146ea400c(void)

void FUN_146ea400c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea4088 FUN_146ea4088 body=172 status=ok
// SIG undefined FUN_146ea4088(void)

void FUN_146ea4088(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_1467b0fc0(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_1467b0fc0(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_1403b10bc(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea413c FUN_146ea413c body=185 status=ok
// SIG undefined FUN_146ea413c(void)

void FUN_146ea413c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ea4313(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea41fc FUN_146ea41fc body=59 status=ok
// SIG undefined FUN_146ea41fc(void)

void FUN_146ea41fc(longlong param_1)

{
  FUN_144716727(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1403b10bc(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146ea4238 FUN_146ea4238 body=69 status=ok
// SIG undefined FUN_146ea4238(void)

undefined8 * FUN_146ea4238(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62220;
  FUN_144716727(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea427d FUN_146ea427d body=150 status=ok
// SIG undefined FUN_146ea427d(void)

void FUN_146ea427d(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_14054c6c4(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ea4313 FUN_146ea4313 body=252 status=ok
// SIG undefined FUN_146ea4313(void)

longlong * FUN_146ea4313(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1403b10bc(param_2);
    }
    FUN_140bfc200(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1406276ca(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea4412 FUN_146ea4412 body=138 status=ok
// SIG undefined FUN_146ea4412(void)

undefined1 *
FUN_146ea4412(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x25;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f62030;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ea44b6 FUN_146ea44b6 body=29 status=ok
// SIG undefined FUN_146ea44b6(void)

undefined8 FUN_146ea44b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea44d4 FUN_146ea44d4 body=70 status=ok
// SIG undefined FUN_146ea44d4(void)

void FUN_146ea44d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ea451a(param_1,param_2,param_3,param_4);
  }
  FUN_146ea472a(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ea451a FUN_146ea451a body=526 status=ok
// SIG undefined FUN_146ea451a(void)

void FUN_146ea451a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146ea45b4;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ea45b4:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996884) && (FUN_144b3d300(&DAT_14c996884), DAT_14c996884 == -1)) {
    DAT_14c99687c = 0;
    _Init_thread_footer(&DAT_14c996884);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c99687c;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f62070;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146ea538c(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea472a FUN_146ea472a body=251 status=ok
// SIG undefined FUN_146ea472a(void)

void FUN_146ea472a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ea473a;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ea473a:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ea4832 FUN_146ea4832 body=38 status=ok
// SIG undefined FUN_146ea4832(void)

void FUN_146ea4832(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146dedcd2(param_1 + 0x10);
  return;
}



// FUNCTION 146ea485a FUN_146ea485a body=167 status=ok
// SIG undefined FUN_146ea485a(void)

void FUN_146ea485a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146ea4e7e(&local_48,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(local_48 + uVar2 * 8) =
           *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea4902 FUN_146ea4902 body=97 status=ok
// SIG undefined FUN_146ea4902(void)

void FUN_146ea4902(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      lVar4 = uVar3 * 8 + param_1[2];
      lVar6 = 0;
      bVar1 = true;
      do {
        bVar5 = bVar1;
        lVar7 = (longlong)*(int *)(lVar4 + lVar6 * 4);
        if (-1 < lVar7) {
          *(undefined4 *)(lVar4 + lVar6 * 4) = *(undefined4 *)(*param_2 + lVar7 * 4);
        }
        lVar6 = 1;
        bVar1 = false;
      } while (bVar5);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 146ea4964 FUN_146ea4964 body=92 status=ok
// SIG undefined FUN_146ea4964(void)

void FUN_146ea4964(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ea49c0 FUN_146ea49c0 body=149 status=ok
// SIG undefined FUN_146ea49c0(void)

void FUN_146ea49c0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ea4a84 FUN_146ea4a84 body=57 status=ok
// SIG undefined FUN_146ea4a84(void)

undefined8 * FUN_146ea4a84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62100;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea4abe FUN_146ea4abe body=122 status=ok
// SIG undefined FUN_146ea4abe(void)

void FUN_146ea4abe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea4b3a FUN_146ea4b3a body=249 status=ok
// SIG undefined FUN_146ea4b3a(void)

void FUN_146ea4b3a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146dedcd2(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea4c3c FUN_146ea4c3c body=206 status=ok
// SIG undefined FUN_146ea4c3c(void)

void FUN_146ea4c3c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146ea4ec2(param_2,param_1 + 0x10);
  }
  else {
    FUN_146ea4fc0(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea4d2c FUN_146ea4d2c body=57 status=ok
// SIG undefined FUN_146ea4d2c(void)

undefined8 * FUN_146ea4d2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62100;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea4d66 FUN_146ea4d66 body=115 status=ok
// SIG undefined FUN_146ea4d66(void)

void FUN_146ea4d66(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400232c6(param_1,iVar1);
    }
    FUN_146ea4dda((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146ea4ddc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ea4dda FUN_146ea4dda body=1 status=ok
// SIG undefined FUN_146ea4dda(void)

void FUN_146ea4dda(void)

{
  return;
}



// FUNCTION 146ea4ddc FUN_146ea4ddc body=63 status=ok
// SIG undefined FUN_146ea4ddc(void)

void FUN_146ea4ddc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ea4e1c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146ea4e1c FUN_146ea4e1c body=97 status=ok
// SIG undefined FUN_146ea4e1c(void)

ulonglong FUN_146ea4e1c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146ea4e7e FUN_146ea4e7e body=68 status=ok
// SIG undefined FUN_146ea4e7e(void)

int FUN_146ea4e7e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1400232c6(param_1,iVar1);
  }
  FUN_146ea4dda((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ea4ec2 FUN_146ea4ec2 body=252 status=ok
// SIG undefined FUN_146ea4ec2(void)

longlong * FUN_146ea4ec2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146dedcd2(param_2);
    }
    FUN_146ea4d66(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140731b82(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea4fc0 FUN_146ea4fc0 body=542 status=ok
// SIG undefined FUN_146ea4fc0(void)

void FUN_146ea4fc0(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 8;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146ea51e0(param_2,param_1);
    goto LAB_146ea518d;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 3,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146ea518d;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146ea517a:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 3);
  }
  else {
    if (local_24 == 8) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x10000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_146dedcd2(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1400232c6(param_1,iVar4);
        }
        goto LAB_146ea517a;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146ea518d:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea51e0 FUN_146ea51e0 body=362 status=ok
// SIG undefined FUN_146ea51e0(void)

longlong * FUN_146ea51e0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146dedcd2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_140731b82(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146dedcd2(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146ea534c(param_2);
        FUN_140731b82(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ea534c FUN_146ea534c body=64 status=ok
// SIG undefined FUN_146ea534c(void)

longlong FUN_146ea534c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1400232c6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_146ea4dda(lVar2,1);
  return lVar2;
}



// FUNCTION 146ea538c FUN_146ea538c body=138 status=ok
// SIG undefined FUN_146ea538c(void)

undefined1 *
FUN_146ea538c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x23;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f61f90;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ea5430 FUN_146ea5430 body=29 status=ok
// SIG undefined FUN_146ea5430(void)

undefined8 FUN_146ea5430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea544e FUN_146ea544e body=218 status=ok
// SIG undefined FUN_146ea544e(void)

void FUN_146ea544e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_14475e4ac(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 2);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined4 *)((longlong)local_48 + uVar2 * 4) =
             *(undefined4 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 4);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea552a FUN_146ea552a body=94 status=ok
// SIG undefined FUN_146ea552a(void)

void FUN_146ea552a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1[2] + uVar2 * 4) = *(undefined4 *)(param_2[2] + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ea5588 FUN_146ea5588 body=153 status=ok
// SIG undefined FUN_146ea5588(void)

void FUN_146ea5588(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined4 *)(param_1[2] + lVar2 * 4) = *(undefined4 *)(param_2[2] + lVar3 * 4);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ea562c FUN_146ea562c body=249 status=ok
// SIG undefined FUN_146ea562c(void)

void FUN_146ea562c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 4),(longlong)iVar7 << 2);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 4 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 4),(longlong)iVar7 << 2);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_14482f6fa(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea5744 FUN_146ea5744 body=57 status=ok
// SIG undefined FUN_146ea5744(void)

undefined8 * FUN_146ea5744(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f631f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea578a FUN_146ea578a body=38 status=ok
// SIG undefined FUN_146ea578a(void)

void FUN_146ea578a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ea5c74(param_1 + 0x10);
  return;
}



// FUNCTION 146ea57b2 FUN_146ea57b2 body=313 status=ok
// SIG undefined FUN_146ea57b2(void)

void FUN_146ea57b2(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146d8cedc(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146d8b433(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea58ec FUN_146ea58ec body=105 status=ok
// SIG undefined FUN_146ea58ec(void)

void FUN_146ea58ec(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146e9cba2(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ea5956 FUN_146ea5956 body=94 status=ok
// SIG undefined FUN_146ea5956(void)

void FUN_146ea5956(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ea5cd4(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ea59be FUN_146ea59be body=69 status=ok
// SIG undefined FUN_146ea59be(void)

undefined8 * FUN_146ea59be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62460;
  FUN_146d8b433(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea5a04 FUN_146ea5a04 body=122 status=ok
// SIG undefined FUN_146ea5a04(void)

void FUN_146ea5a04(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea5a80 FUN_146ea5a80 body=172 status=ok
// SIG undefined FUN_146ea5a80(void)

void FUN_146ea5a80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146d8cf62(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146d8cf62(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ea5c74(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea5b34 FUN_146ea5b34 body=185 status=ok
// SIG undefined FUN_146ea5b34(void)

void FUN_146ea5b34(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ea5d70(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea5bf4 FUN_146ea5bf4 body=58 status=ok
// SIG undefined FUN_146ea5bf4(void)

void FUN_146ea5bf4(longlong param_1)

{
  FUN_146d8b433(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ea5c74(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ea5c2e FUN_146ea5c2e body=69 status=ok
// SIG undefined FUN_146ea5c2e(void)

undefined8 * FUN_146ea5c2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62460;
  FUN_146d8b433(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea5c74 FUN_146ea5c74 body=96 status=ok
// SIG undefined FUN_146ea5c74(void)

void FUN_146ea5c74(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ea5cd4 FUN_146ea5cd4 body=156 status=ok
// SIG undefined FUN_146ea5cd4(void)

void FUN_146ea5cd4(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_146e9cba2(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ea5d70 FUN_146ea5d70 body=252 status=ok
// SIG undefined FUN_146ea5d70(void)

longlong * FUN_146ea5d70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ea5c74(param_2);
    }
    FUN_146d8ce4c(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d9a68d(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea5e6e FUN_146ea5e6e body=70 status=ok
// SIG undefined FUN_146ea5e6e(void)

void FUN_146ea5e6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ea5eb4(param_1,param_2,param_3,param_4);
  }
  FUN_146ea60c4(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ea5eb4 FUN_146ea5eb4 body=526 status=ok
// SIG undefined FUN_146ea5eb4(void)

void FUN_146ea5eb4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146ea5f4e;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ea5f4e:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c99689c) && (FUN_144b3d300(&DAT_14c99689c), DAT_14c99689c == -1)) {
    DAT_14c996894 = 0;
    _Init_thread_footer(&DAT_14c99689c);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996894;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f622b0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146ea6850(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea60c4 FUN_146ea60c4 body=251 status=ok
// SIG undefined FUN_146ea60c4(void)

void FUN_146ea60c4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ea60d4;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ea60d4:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ea61cc FUN_146ea61cc body=38 status=ok
// SIG undefined FUN_146ea61cc(void)

void FUN_146ea61cc(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d8b190(param_1 + 0x10);
  return;
}



// FUNCTION 146ea61f4 FUN_146ea61f4 body=318 status=ok
// SIG undefined FUN_146ea61f4(void)

void FUN_146ea61f4(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uVar2 = uStack_60._4_4_;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar3;
  if (uVar3 != 0) {
    uStack_60._4_4_ = uVar2;
    FUN_146d8b2f2(&local_68);
    memset(local_68,0,(longlong)(int)uVar3 << 4);
    if (0 < (int)uVar3) {
      lVar6 = 0;
      uVar4 = 0;
      do {
        pvVar1 = local_68;
        puVar5 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar4 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar6 + (longlong)local_68) != puVar5) {
          if (*(longlong *)((longlong)local_68 + lVar6) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar6) = *puVar5;
          *puVar5 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar6 + 8) = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar6 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0xc);
          puVar5[1] = 0;
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar3 != uVar4);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_1411d370f(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea6334 FUN_146ea6334 body=105 status=ok
// SIG undefined FUN_146ea6334(void)

void FUN_146ea6334(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_144a67f5c(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ea639e FUN_146ea639e body=94 status=ok
// SIG undefined FUN_146ea639e(void)

void FUN_146ea639e(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ea66bb(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ea6406 FUN_146ea6406 body=69 status=ok
// SIG undefined FUN_146ea6406(void)

undefined8 * FUN_146ea6406(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62340;
  FUN_1411d370f(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea644c FUN_146ea644c body=122 status=ok
// SIG undefined FUN_146ea644c(void)

void FUN_146ea644c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea64c8 FUN_146ea64c8 body=172 status=ok
// SIG undefined FUN_146ea64c8(void)

void FUN_146ea64c8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146d8b1f0(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146d8b1f0(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d8b190(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea657c FUN_146ea657c body=185 status=ok
// SIG undefined FUN_146ea657c(void)

void FUN_146ea657c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ea6751(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea663c FUN_146ea663c body=58 status=ok
// SIG undefined FUN_146ea663c(void)

void FUN_146ea663c(longlong param_1)

{
  FUN_1411d370f(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146d8b190(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ea6676 FUN_146ea6676 body=69 status=ok
// SIG undefined FUN_146ea6676(void)

undefined8 * FUN_146ea6676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62340;
  FUN_1411d370f(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea66bb FUN_146ea66bb body=150 status=ok
// SIG undefined FUN_146ea66bb(void)

void FUN_146ea66bb(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_144a67f5c(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ea6751 FUN_146ea6751 body=252 status=ok
// SIG undefined FUN_146ea6751(void)

longlong * FUN_146ea6751(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d8b190(param_2);
    }
    FUN_146d84510(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146dad8ef(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea6850 FUN_146ea6850 body=138 status=ok
// SIG undefined FUN_146ea6850(void)

undefined1 *
FUN_146ea6850(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x26;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f62050;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ea68f4 FUN_146ea68f4 body=29 status=ok
// SIG undefined FUN_146ea68f4(void)

undefined8 FUN_146ea68f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea691e FUN_146ea691e body=38 status=ok
// SIG undefined FUN_146ea691e(void)

void FUN_146ea691e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ea6dc4(param_1 + 0x10);
  return;
}



// FUNCTION 146ea6946 FUN_146ea6946 body=245 status=ok
// SIG undefined FUN_146ea6946(void)

void FUN_146ea6946(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_146ea6e74(&local_58);
    memset(local_58,0,(longlong)(int)uVar1 << 4);
    if (0 < (int)uVar1) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_146ea6e24((longlong)local_58 + lVar2,
                      (longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar1 != uVar3);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146ea7035(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea6a3c FUN_146ea6a3c body=105 status=ok
// SIG undefined FUN_146ea6a3c(void)

void FUN_146ea6a3c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146e9cbfa(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ea6aa6 FUN_146ea6aa6 body=94 status=ok
// SIG undefined FUN_146ea6aa6(void)

void FUN_146ea6aa6(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ea6ef9(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ea6b0e FUN_146ea6b0e body=69 status=ok
// SIG undefined FUN_146ea6b0e(void)

undefined8 * FUN_146ea6b0e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62580;
  FUN_146ea7035(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea6b54 FUN_146ea6b54 body=122 status=ok
// SIG undefined FUN_146ea6b54(void)

void FUN_146ea6b54(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea6bd0 FUN_146ea6bd0 body=172 status=ok
// SIG undefined FUN_146ea6bd0(void)

void FUN_146ea6bd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146ea6f96(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146ea6f96(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ea6dc4(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ea6c84 FUN_146ea6c84 body=185 status=ok
// SIG undefined FUN_146ea6c84(void)

void FUN_146ea6c84(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ea70cd(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea6d44 FUN_146ea6d44 body=58 status=ok
// SIG undefined FUN_146ea6d44(void)

void FUN_146ea6d44(longlong param_1)

{
  FUN_146ea7035(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ea6dc4(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ea6d7e FUN_146ea6d7e body=69 status=ok
// SIG undefined FUN_146ea6d7e(void)

undefined8 * FUN_146ea6d7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62580;
  FUN_146ea7035(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea6dc4 FUN_146ea6dc4 body=96 status=ok
// SIG undefined FUN_146ea6dc4(void)

void FUN_146ea6dc4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ea6e24 FUN_146ea6e24 body=80 status=ok
// SIG undefined FUN_146ea6e24(void)

longlong * FUN_146ea6e24(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146d8d0e9(*param_1,(int)param_1[1]);
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



// FUNCTION 146ea6e74 FUN_146ea6e74 body=132 status=ok
// SIG undefined FUN_146ea6e74(void)

void FUN_146ea6e74(longlong param_1,int param_2)

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



// FUNCTION 146ea6ef9 FUN_146ea6ef9 body=156 status=ok
// SIG undefined FUN_146ea6ef9(void)

void FUN_146ea6ef9(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_146e9cbfa(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ea6f96 FUN_146ea6f96 body=95 status=ok
// SIG undefined FUN_146ea6f96(void)

void FUN_146ea6f96(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146ea7035(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ea6ff6 FUN_146ea6ff6 body=63 status=ok
// SIG undefined FUN_146ea6ff6(void)

void FUN_146ea6ff6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ea706c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146ea7035 FUN_146ea7035 body=54 status=ok
// SIG undefined FUN_146ea7035(void)

void FUN_146ea7035(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146d8d0e9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ea706c FUN_146ea706c body=97 status=ok
// SIG undefined FUN_146ea706c(void)

ulonglong FUN_146ea706c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146ea70cd FUN_146ea70cd body=252 status=ok
// SIG undefined FUN_146ea70cd(void)

longlong * FUN_146ea70cd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ea6dc4(param_2);
    }
    FUN_146e9cc5a(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ea71cb(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea71cb FUN_146ea71cb body=252 status=ok
// SIG undefined FUN_146ea71cb(void)

longlong * FUN_146ea71cb(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ea72ca(param_2);
    }
    FUN_146e9e272(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146c977cf(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ea72ca FUN_146ea72ca body=96 status=ok
// SIG undefined FUN_146ea72ca(void)

void FUN_146ea72ca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ea732a FUN_146ea732a body=98 status=ok
// SIG undefined FUN_146ea732a(void)

void FUN_146ea732a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ea738c FUN_146ea738c body=98 status=ok
// SIG undefined FUN_146ea738c(void)

void FUN_146ea738c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146ea73ee FUN_146ea73ee body=120 status=ok
// SIG undefined FUN_146ea73ee(void)

void FUN_146ea73ee(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_140c0b9de(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ea7466 FUN_146ea7466 body=142 status=ok
// SIG undefined FUN_146ea7466(void)

void FUN_146ea7466(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f62790;
  param_1[0x1f] = &PTR_LAB_149f627f0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  param_1[0x19] = &PTR_FUN_149f62f70;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_14054b30a(param_1);
  return;
}



// FUNCTION 146ea7504 FUN_146ea7504 body=14 status=ok
// SIG undefined FUN_146ea7504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146ea7504(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_14c996908;
  *param_1 = _DAT_14c996900;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 146ea7512 FUN_146ea7512 body=92 status=ok
// SIG undefined FUN_146ea7512(void)

void FUN_146ea7512(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = 0.0;
  param_3 = ABS(param_3);
  param_2 = ABS(param_2);
  fVar3 = param_2;
  if (param_3 <= param_2) {
    fVar3 = param_3;
  }
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_1[1] = param_2;
  *param_1 = fVar3;
  if (0.0 <= fVar1) {
    if (1.1920929e-07 < fVar3) {
      return;
    }
  }
  else if ((fVar3 != 0.0) || (NAN(fVar3))) {
    fVar2 = -fVar3;
  }
  else {
    fVar2 = -1.1920929e-07;
  }
  *param_1 = fVar2;
  return;
}



// FUNCTION 146ea756e FUN_146ea756e body=112 status=ok
// SIG undefined FUN_146ea756e(void)

void FUN_146ea756e(float *param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 <= *param_1) {
    bVar1 = param_1[2] <= 0.0 && param_1[2] != 0.0;
  }
  else {
    bVar1 = false;
  }
  param_3 = ABS(param_3);
  param_2 = ABS(param_2);
  fVar2 = param_2;
  if (param_3 <= param_2) {
    fVar2 = param_3;
  }
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_1[3] = param_2;
  param_1[2] = fVar2;
  fVar3 = 0.0;
  if (bVar1) {
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      fVar3 = -fVar2;
    }
    else {
      fVar3 = -1.1920929e-07;
    }
  }
  else if (1.1920929e-07 < fVar2) {
    return;
  }
  param_1[2] = fVar3;
  return;
}



// FUNCTION 146ea75de FUN_146ea75de body=75 status=ok
// SIG undefined FUN_146ea75de(void)

void FUN_146ea75de(float *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1;
  fVar1 = ABS(fVar2);
  *param_1 = fVar1;
  if (param_2 == '\0') {
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      fVar2 = -fVar1;
    }
    else {
      fVar2 = -1.1920929e-07;
    }
  }
  else {
    fVar2 = 0.0;
    if (1.1920929e-07 < fVar1) {
      return;
    }
  }
  *param_1 = fVar2;
  return;
}



// FUNCTION 146ea762a FUN_146ea762a body=78 status=ok
// SIG undefined FUN_146ea762a(void)

void FUN_146ea762a(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = ABS(fVar2);
  *(float *)(param_1 + 8) = fVar1;
  if (param_2 == '\0') {
    fVar2 = 0.0;
    if (1.1920929e-07 < fVar1) {
      return;
    }
  }
  else if ((fVar2 != 0.0) || (NAN(fVar2))) {
    fVar2 = -fVar1;
  }
  else {
    fVar2 = -1.1920929e-07;
  }
  *(float *)(param_1 + 8) = fVar2;
  return;
}



// FUNCTION 146ea7678 FUN_146ea7678 body=69 status=ok
// SIG undefined FUN_146ea7678(void)

void FUN_146ea7678(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 8) = 1;
    lVar5 = param_2[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar6 = 0;
      do {
        uVar4 = param_3[1];
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar3 + 0x10) + (longlong)*(int *)(lVar2 + lVar6) * 0x10);
        *puVar1 = *param_3;
        puVar1[1] = uVar4;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 146ea76be FUN_146ea76be body=49 status=ok
// SIG undefined FUN_146ea76be(void)

void FUN_146ea76be(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x18))) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar3 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar4);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < *(int *)(lVar2 + 0x18));
  }
  return;
}



// FUNCTION 146ea76f0 FUN_146ea76f0 body=1541 status=ok
// SIG undefined FUN_146ea76f0(void)

undefined8 * FUN_146ea76f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = param_2;
  FUN_1446ddc76(&local_40,"Vertex",1);
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = local_40;
  param_1[5] = DAT_14c996ae0;
  param_1[6] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_40,"GeometryIndex",1);
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = local_40;
  param_1[0xc] = DAT_14c996ae0;
  param_1[0xd] = DAT_14c996af0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_40,"SelectionState",1);
  param_1[0x10] = param_2;
  param_1[0x11] = param_2;
  param_1[0x12] = local_40;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_40,"HitIndex",1);
  param_1[0x17] = param_2;
  param_1[0x18] = param_2;
  param_1[0x19] = local_40;
  param_1[0x1a] = DAT_14c996ae0;
  param_1[0x1b] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_40,"Normal",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_2;
  param_1[0x20] = local_40;
  param_1[0x21] = DAT_14c996ae0;
  param_1[0x22] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_40,"Color",1);
  param_1[0x25] = param_2;
  param_1[0x26] = param_2;
  param_1[0x27] = local_40;
  param_1[0x28] = DAT_14c996ae0;
  param_1[0x29] = 0;
  uVar1 = FUN_146ea23e0(param_2);
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  FUN_1446ddc76(&local_40,"Indices",1);
  param_1[0x2c] = param_2;
  param_1[0x2d] = param_2;
  param_1[0x2e] = local_40;
  param_1[0x2f] = DAT_14c996ae8;
  param_1[0x30] = DAT_14c996ae0;
  uVar1 = FUN_146ea24fc(param_2);
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  FUN_1446ddc76(&local_40,"MaterialID",1);
  param_1[0x33] = param_2;
  param_1[0x34] = param_2;
  param_1[0x35] = local_40;
  param_1[0x36] = DAT_14c996ae8;
  param_1[0x37] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  FUN_1446ddc76(&local_40,"Sections",1);
  param_1[0x3a] = param_2;
  param_1[0x3b] = param_2;
  param_1[0x3c] = local_40;
  param_1[0x3d] = DAT_14c996a80;
  param_1[0x3e] = 0;
  uVar1 = FUN_146eb3618(param_2);
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar1;
  FUN_1446ddc76(&local_40,&DAT_149e3cc53,1);
  param_1[0x41] = param_2;
  param_1[0x42] = param_2;
  param_1[0x43] = local_40;
  param_1[0x44] = DAT_14c996af0;
  param_1[0x45] = 0;
  uVar1 = FUN_146ea22c4(param_2);
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar1;
  FUN_1446ddc76(&local_40,"HitIndex",1);
  param_1[0x48] = param_2;
  param_1[0x49] = param_2;
  param_1[0x4a] = local_40;
  param_1[0x4b] = DAT_14c996af0;
  param_1[0x4c] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x4d] = uVar1;
  param_1[0x4e] = uVar1;
  FUN_1446ddc76(&local_40,"VertexStart",1);
  param_1[0x4f] = param_2;
  param_1[0x50] = param_2;
  param_1[0x51] = local_40;
  param_1[0x52] = DAT_14c996af0;
  param_1[0x53] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar1;
  FUN_1446ddc76(&local_40,"VertexCount",1);
  param_1[0x56] = param_2;
  param_1[0x57] = param_2;
  param_1[0x58] = local_40;
  param_1[0x59] = DAT_14c996af0;
  param_1[0x5a] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x5b] = uVar1;
  param_1[0x5c] = uVar1;
  FUN_1446ddc76(&local_40,"IndicesStart",1);
  param_1[0x5d] = param_2;
  param_1[0x5e] = param_2;
  param_1[0x5f] = local_40;
  param_1[0x60] = DAT_14c996af0;
  param_1[0x61] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  FUN_1446ddc76(&local_40,"IndicesCount",1);
  param_1[100] = param_2;
  param_1[0x65] = param_2;
  param_1[0x66] = local_40;
  param_1[0x67] = DAT_14c996af0;
  param_1[0x68] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar1;
  FUN_1446ddc76(&local_40,"SelectionState",1);
  param_1[0x6b] = param_2;
  param_1[0x6c] = param_2;
  param_1[0x6d] = local_40;
  param_1[0x6e] = DAT_14c996af0;
  param_1[0x6f] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x70] = uVar1;
  param_1[0x71] = uVar1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea7cf6 FUN_146ea7cf6 body=59 status=ok
// SIG undefined FUN_146ea7cf6(void)

bool FUN_146ea7cf6(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_146ea7d32();
  if ((cVar1 != '\0') &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 400) + 0x60))(), iVar2 != 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 146ea7d32 FUN_146ea7d32 body=172 status=ok
// SIG undefined FUN_146ea7d32(void)

bool FUN_146ea7d32(longlong param_1)

{
  bool bVar1;
  
  if (((((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) ||
       (*(longlong *)(param_1 + 0xb0) == 0)) ||
      (((*(longlong *)(param_1 + 0xe8) == 0 || (*(longlong *)(param_1 + 400) == 0)) ||
       ((*(longlong *)(param_1 + 0x1c8) == 0 ||
        ((*(longlong *)(param_1 + 0x200) == 0 || (*(longlong *)(param_1 + 0x238) == 0)))))))) ||
     ((*(longlong *)(param_1 + 0x270) == 0 ||
      (((((*(longlong *)(param_1 + 0x2a8) == 0 || (*(longlong *)(param_1 + 0x2e0) == 0)) ||
         (*(longlong *)(param_1 + 0x318) == 0)) ||
        ((*(longlong *)(param_1 + 0x350) == 0 || (*(longlong *)(param_1 + 0x388) == 0)))) ||
       (*(longlong *)(param_1 + 0x158) == 0)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(longlong *)(param_1 + 0x120) != 0;
  }
  return bVar1;
}



// FUNCTION 146ea7dde FUN_146ea7dde body=44 status=ok
// SIG undefined FUN_146ea7dde(void)

undefined8 FUN_146ea7dde(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_146ea7d32();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146ea7dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 400) + 0x60))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 146ea7e0a FUN_146ea7e0a body=95 status=ok
// SIG undefined FUN_146ea7e0a(void)

int FUN_146ea7e0a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  plVar2 = *(longlong **)(param_1 + 0x388);
  iVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(plVar2[2] + lVar5 * 4) != 0) {
        iVar3 = iVar3 + *(int *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 4);
      }
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*plVar2 + 0x60))(plVar2);
    } while (lVar5 < iVar4);
  }
  return iVar3;
}



// FUNCTION 146ea7e6a FUN_146ea7e6a body=309 status=ok
// SIG undefined FUN_146ea7e6a(void)

void FUN_146ea7e6a(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146ea7f33;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146ea7f33:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146eb3850(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea7fa0 FUN_146ea7fa0 body=339 status=ok
// SIG undefined FUN_146ea7fa0(void)

undefined8 * FUN_146ea7fa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = DAT_14c9974b8;
  param_1[5] = DAT_14c9974a8;
  param_1[6] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = DAT_14c9974c0;
  param_1[0xc] = DAT_14c9974a8;
  param_1[0xd] = 0;
  uVar1 = FUN_14075a50c(param_2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2;
  param_1[0x11] = param_2;
  param_1[0x12] = DAT_14c9974b0;
  param_1[0x13] = DAT_14c9974a8;
  param_1[0x14] = 0;
  uVar1 = FUN_146eb4e12(param_2);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_30,"BoneName",1);
  param_1[0x17] = param_2;
  param_1[0x18] = param_2;
  param_1[0x19] = local_30;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  uVar1 = FUN_146ea22c4(param_2);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea80f4 FUN_146ea80f4 body=330 status=ok
// SIG undefined FUN_146ea80f4(void)

undefined8 * FUN_146ea80f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = DAT_14c9974b8;
  param_1[5] = DAT_14c9974a8;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[8] = uVar1;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = DAT_14c9974c0;
  param_1[0xc] = DAT_14c9974a8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_140b35e94(param_2);
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = DAT_14c9974b0;
  param_1[0x13] = DAT_14c9974a8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_146eb4f2e(param_2);
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_48,"BoneName",1);
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = local_48;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_1409bc4a4(param_2);
  param_1[0x1d] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea8240 FUN_146ea8240 body=30 status=ok
// SIG undefined FUN_146ea8240(void)

bool FUN_146ea8240(longlong param_1)

{
  bool bVar1;
  
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(longlong *)(param_1 + 0xb0) != 0;
  }
  return bVar1;
}



// FUNCTION 146ea825e FUN_146ea825e body=59 status=ok
// SIG undefined FUN_146ea825e(void)

undefined8 * FUN_146ea825e(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (*(longlong *)(param_1 + 0xb0) != 0)) {
    FUN_146eb7819(*(longlong *)(param_1 + 0xb0),*(longlong *)(param_1 + 0x40),param_2);
  }
  return param_2;
}



// FUNCTION 146ea829a FUN_146ea829a body=39 status=ok
// SIG undefined FUN_146ea829a(void)

undefined8 FUN_146ea829a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_146eba115(param_2,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x40),param_3);
  return param_2;
}



// FUNCTION 146ea82c2 FUN_146ea82c2 body=686 status=ok
// SIG undefined FUN_146ea82c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ea82c2(undefined8 param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_128 [32];
  double local_108 [2];
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar1 = *(undefined1 (*) [16])(param_2 + 8);
  auVar2 = *(undefined1 (*) [16])(param_2 + 10);
  lVar13 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar15._8_4_ = (int)lVar13;
  auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar15._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd((int)local_a0,auVar15);
  lVar13 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar17._8_4_ = (int)lVar13;
  auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar17._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar12 = movmskpd(param_3,auVar17);
  if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
    pdVar10 = (double *)&DAT_14c846480;
    pdVar11 = local_108;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar11 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pdVar11 = pdVar11 + 1;
    }
  }
  else {
    auVar17 = divpd(_DAT_149934d80,auVar1);
    auVar15 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    local_c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_);
    dStack_c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_);
    local_b8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar15._0_8_);
    local_108[0] = -*param_2;
    local_108[1] = -param_2[1];
    dVar4 = param_2[2] * -1.0;
    dVar5 = param_2[3] * 1.0;
    dVar14 = param_2[4] * local_c8;
    dVar16 = param_2[5] * dStack_c0;
    dVar3 = param_2[6] * local_b8;
    local_f8._8_4_ = SUB84(dVar5,0);
    local_f8._0_8_ = dVar4;
    local_f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar7 = dVar16 * local_108[0] - local_108[1] * dVar14;
    dVar8 = dVar3 * local_108[1] - dVar4 * dVar16;
    dVar6 = dVar14 * dVar4 - local_108[0] * dVar3;
    dVar8 = dVar8 + dVar8;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    local_e8 = 0.0 - ((dVar7 * local_108[1] - dVar6 * dVar4) + dVar5 * dVar8 + dVar14);
    dStack_e0 = 0.0 - (dVar7 * *param_2 + dVar4 * dVar8 + dVar5 * dVar6 + dVar16);
    local_d8 = 0.0 - (dVar5 * dVar7 + dVar3 + (dVar6 * local_108[0] - dVar8 * local_108[1]));
    uStack_d0 = 0;
    uStack_b0 = 0;
  }
  FUN_146ea8572(param_1,local_108);
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea8572 FUN_146ea8572 body=1420 status=ok
// SIG undefined FUN_146ea8572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ea8572(longlong param_1,double *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  int local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  pfVar12 = (float *)(param_1 + 0x10);
  FUN_140b1d1c2(&local_1d8);
  lVar9 = local_1d8;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8) = 1;
    auVar8 = _DAT_149e1ef10;
    auVar7 = _DAT_149932320;
    auVar6 = _DAT_1499314a0;
    if ((longlong)local_1d0 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
      lVar13 = 0;
      fVar4 = DAT_149e1ef10._4_4_;
      fVar5 = DAT_149e1ef10._12_4_;
      do {
        fVar27 = (float)param_2[10];
        fVar30 = (float)param_2[0xb];
        auVar17._12_4_ = fVar30;
        auVar17._8_4_ = fVar27;
        auVar17._0_4_ = (float)param_2[8];
        auVar17._4_4_ = (float)param_2[9];
        lVar10 = *(longlong *)(lVar3 + 0x10);
        auVar21._0_4_ = (float)param_2[4];
        auVar21._4_4_ = (float)param_2[5];
        lVar14 = (longlong)*(int *)(lVar9 + lVar13) * 0x30;
        fVar18 = (float)param_2[2];
        fVar24 = (float)param_2[3];
        pfVar1 = (float *)(lVar10 + lVar14);
        fVar40 = (float)*param_2;
        fVar41 = (float)param_2[1];
        auVar21._12_4_ = (float)param_2[7];
        auVar21._8_4_ = (float)param_2[6];
        auVar2 = *(undefined1 (*) [16])(lVar10 + 0x20 + lVar14);
        auVar28 = minps(auVar2,auVar17);
        auVar39._4_4_ = -(uint)(auVar28._4_4_ < 0.0);
        auVar39._0_4_ = -(uint)(auVar28._0_4_ < 0.0);
        auVar39._8_4_ = -(uint)(auVar28._8_4_ < 0.0);
        auVar39._12_4_ = -(uint)(auVar28._12_4_ < 0.0);
        iVar11 = movmskps((int)pfVar12,auVar39);
        if (iVar11 == 0) {
          fVar19 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar26 = pfVar1[2];
          fVar32 = pfVar1[3];
          auVar23._0_4_ =
               fVar18 * fVar25 * -1.0 +
               fVar41 * fVar26 * 1.0 + fVar40 * fVar32 * 1.0 + fVar24 * fVar19;
          auVar23._4_4_ =
               fVar18 * fVar19 * 1.0 +
               fVar41 * fVar32 * 1.0 + fVar40 * fVar26 * -1.0 + fVar24 * fVar25;
          auVar23._8_4_ =
               fVar18 * fVar32 * 1.0 +
               fVar41 * fVar19 * -1.0 + fVar40 * fVar25 * 1.0 + fVar24 * fVar26;
          auVar23._12_4_ =
               fVar18 * fVar26 * -1.0 +
               fVar41 * fVar25 * -1.0 + fVar40 * fVar19 * -1.0 + fVar24 * fVar32;
          fVar19 = pfVar1[4] * auVar17._0_4_;
          fVar25 = pfVar1[5] * auVar17._4_4_;
          fVar26 = pfVar1[6] * fVar27;
          fVar32 = pfVar1[7] * fVar30;
          fVar31 = fVar25 * fVar40 - fVar41 * fVar19;
          fVar35 = fVar26 * fVar41 - fVar18 * fVar25;
          fVar36 = fVar19 * fVar18 - fVar40 * fVar26;
          fVar37 = fVar32 * fVar24 - fVar24 * fVar32;
          fVar31 = fVar31 + fVar31;
          fVar35 = fVar35 + fVar35;
          fVar36 = fVar36 + fVar36;
          fVar37 = fVar37 + fVar37;
          auVar28._0_4_ =
               auVar21._0_4_ + (fVar31 * fVar41 - fVar36 * fVar18) + fVar24 * fVar35 + fVar19;
          auVar28._4_4_ =
               auVar21._4_4_ + (fVar35 * fVar18 - fVar31 * fVar40) + fVar24 * fVar36 + fVar25;
          auVar28._8_4_ =
               (float)param_2[6] + (fVar36 * fVar40 - fVar35 * fVar41) + fVar24 * fVar31 + fVar26;
          auVar28._12_4_ =
               (float)param_2[7] + (fVar37 * fVar24 - fVar37 * fVar24) + fVar24 * fVar37 + fVar32;
          pfVar12 = (float *)0x0;
        }
        else {
          fVar19 = fVar40 + fVar40;
          fVar25 = fVar41 + fVar41;
          fVar26 = fVar18 + fVar18;
          fVar32 = fVar24 * (fVar24 + fVar24);
          auVar38._0_4_ = (auVar8._0_4_ - (fVar18 * fVar26 + fVar41 * fVar25)) * auVar17._0_4_;
          auVar38._4_4_ = (fVar4 - (fVar18 * fVar26 + fVar40 * fVar19)) * auVar17._4_4_;
          auVar38._8_4_ = (auVar8._8_4_ - (fVar41 * fVar25 + fVar40 * fVar19)) * fVar27;
          auVar38._12_4_ = (fVar5 - (fVar32 + fVar32)) * fVar30;
          fVar18 = (fVar25 * fVar40 + fVar24 * fVar26) * auVar17._0_4_;
          auVar33._4_4_ = (fVar26 * fVar41 + fVar24 * fVar19) * auVar17._4_4_;
          auVar33._0_4_ = fVar18;
          local_158 = (fVar26 * fVar40 + fVar24 * fVar25) * fVar27;
          local_168 = (fVar25 * fVar40 - fVar24 * fVar26) * auVar17._4_4_;
          fStack_154 = (fVar26 * fVar41 - fVar24 * fVar19) * fVar27;
          auVar39 = blendps(auVar38,ZEXT816(0),8);
          auVar33._8_4_ = local_158;
          auVar33._12_4_ = (fVar19 * fVar40 + fVar24 * fVar19) * fVar30;
          local_178._4_4_ = fVar18;
          local_178._0_4_ = auVar38._0_4_;
          local_178._8_4_ = (fVar26 * fVar40 - fVar24 * fVar25) * auVar17._0_4_;
          local_178._12_4_ = 0;
          auVar28 = insertps(auVar33,auVar33,0x4c);
          uStack_160 = auVar28._0_4_;
          uStack_15c = auVar28._8_4_;
          uStack_150 = auVar39._8_4_;
          uStack_14c = auVar39._12_4_;
          local_148 = insertps(auVar21,ZEXT816(0x3f800000),0x30);
          fVar18 = *pfVar1;
          fVar24 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar41 = pfVar1[3];
          fVar19 = pfVar1[8];
          local_1a8 = pfVar1[9];
          fStack_194 = pfVar1[10];
          fVar26 = fVar18 + fVar18;
          fVar32 = fVar24 + fVar24;
          fVar31 = fVar40 + fVar40;
          fVar25 = fVar41 * (fVar41 + fVar41);
          auVar20._0_4_ = (auVar8._0_4_ - (fVar40 * fVar31 + fVar24 * fVar32)) * fVar19;
          auVar20._4_4_ = (fVar4 - (fVar40 * fVar31 + fVar18 * fVar26)) * local_1a8;
          auVar20._8_4_ = (auVar8._8_4_ - (fVar24 * fVar32 + fVar18 * fVar26)) * fStack_194;
          auVar20._12_4_ = (fVar5 - (fVar25 + fVar25)) * pfVar1[0xb];
          fVar40 = (fVar32 * fVar18 + fVar31 * fVar41) * fVar19;
          auVar34._4_4_ = (fVar31 * fVar24 + fVar26 * fVar41) * local_1a8;
          auVar34._0_4_ = fVar40;
          local_198 = (fVar31 * fVar18 + fVar32 * fVar41) * fStack_194;
          local_1a8 = (fVar32 * fVar18 - fVar31 * fVar41) * local_1a8;
          fStack_194 = (fVar31 * fVar24 - fVar26 * fVar41) * fStack_194;
          auVar21 = blendps(auVar20,ZEXT816(0),8);
          auVar34._8_4_ = local_198;
          auVar34._12_4_ = (fVar26 * fVar18 + fVar26 * fVar41) * pfVar1[0xb];
          local_1b8._4_4_ = fVar40;
          local_1b8._0_4_ = auVar20._0_4_;
          local_1b8._8_4_ = (fVar31 * fVar18 - fVar32 * fVar41) * fVar19;
          local_1b8._12_4_ = 0;
          auVar28 = insertps(auVar34,auVar34,0x4c);
          uStack_1a0 = auVar28._0_4_;
          uStack_19c = auVar28._8_4_;
          uStack_190 = auVar21._8_4_;
          uStack_18c = auVar21._12_4_;
          local_188 = insertps(*(undefined1 (*) [16])(pfVar1 + 4),ZEXT816(0x3f800000),0x30);
          fStack_1a4 = auVar20._4_4_;
          fStack_164 = auVar38._4_4_;
          FUN_144afeb32(&local_138,local_1b8,auVar21._0_8_);
          FUN_144afd82e(&local_138);
          auVar15._4_4_ = -(uint)(0.0 <= auVar2._4_4_ * auVar17._4_4_);
          auVar15._0_4_ = -(uint)(0.0 <= auVar2._0_4_ * auVar17._0_4_);
          auVar15._8_4_ = -(uint)(0.0 <= auVar2._8_4_ * fVar27);
          auVar15._12_4_ = -(uint)(0.0 <= auVar2._12_4_ * fVar30);
          auVar21 = blendvps(_DAT_149f63320,auVar8,auVar15);
          fVar18 = auVar21._0_4_;
          local_130 = local_130 * fVar18;
          local_134 = local_134 * fVar18;
          local_138 = local_138 * fVar18;
          fVar18 = auVar21._4_4_;
          local_120 = local_120 * fVar18;
          local_124 = local_124 * fVar18;
          local_128 = fVar18 * local_128;
          fVar18 = auVar21._8_4_;
          local_110 = local_110 * fVar18;
          local_114 = local_114 * fVar18;
          local_118 = fVar18 * local_118;
          pfVar12 = &local_138;
          FUN_14066c2ac(&local_1c8);
          fVar18 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
          fVar24 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
          auVar22._0_4_ = fVar24 + fVar18;
          auVar22._4_4_ = fVar24 + fVar18;
          auVar22._8_4_ = fVar18 + fVar24;
          auVar22._12_4_ = fVar18 + fVar24;
          auVar16._4_4_ = -(uint)(1e-08 <= auVar22._4_4_);
          auVar16._0_4_ = -(uint)(1e-08 <= auVar22._0_4_);
          auVar16._8_4_ = -(uint)(1e-08 <= auVar22._8_4_);
          auVar16._12_4_ = -(uint)(1e-08 <= auVar22._12_4_);
          auVar21 = sqrtps(auVar22,auVar22);
          auVar21 = divps(auVar6,auVar21);
          auVar29._0_4_ = auVar21._0_4_ * local_1c8;
          auVar29._4_4_ = auVar21._4_4_ * fStack_1c4;
          auVar29._8_4_ = auVar21._8_4_ * fStack_1c0;
          auVar29._12_4_ = auVar21._12_4_ * fStack_1bc;
          auVar23 = blendvps(auVar7,auVar29,auVar16);
          auVar28 = blendps(local_108,ZEXT816(0),8);
          lVar10 = *(longlong *)(lVar3 + 0x10);
        }
        *(undefined1 (*) [16])(lVar10 + lVar14) = auVar23;
        *(undefined1 (*) [16])(lVar10 + 0x10 + lVar14) = auVar28;
        pfVar1 = (float *)(lVar10 + 0x20 + lVar14);
        *pfVar1 = auVar2._0_4_ * auVar17._0_4_;
        pfVar1[1] = auVar2._4_4_ * auVar17._4_4_;
        pfVar1[2] = auVar2._8_4_ * fVar27;
        pfVar1[3] = auVar2._12_4_ * fVar30;
        lVar13 = lVar13 + 4;
      } while ((longlong)local_1d0 * 4 != lVar13);
    }
  }
  if (local_1d8 != 0) {
    FUN_1400020a8(local_1d8);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea8b00 FUN_146ea8b00 body=1917 status=ok
// SIG undefined FUN_146ea8b00(void)

undefined8 *
FUN_146ea8b00(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,double *param_4,
             double *param_5,undefined8 *param_6,float param_7,undefined8 *param_8,
             undefined8 *param_9,char param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined1 auStack_878 [39];
  undefined1 local_851;
  undefined8 *local_850;
  undefined8 local_848 [16];
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined8 local_750;
  undefined8 local_748 [16];
  undefined8 local_6c8 [16];
  double local_648;
  double local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  double local_628;
  double local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  double local_5c8 [3];
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  double local_588;
  undefined8 local_580;
  double local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  double local_548 [6];
  double local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  double local_500;
  double local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8 [16];
  undefined1 local_448 [128];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 local_350;
  undefined8 local_348 [16];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  double local_248 [6];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [128];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_e0 = *(undefined4 *)(param_9 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_9 + 0xc);
  uStack_d8 = *(undefined4 *)(param_9 + 2);
  uStack_d4 = *(undefined4 *)((longlong)param_9 + 0x14);
  local_e8 = *param_9;
  local_148 = 0x3ff0000000000000;
  local_128 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = 0;
  local_120 = 0x3ff0000000000000;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0x3ff0000000000000;
  local_f0 = 0;
  local_d0 = 0x3ff0000000000000;
  local_851 = param_3;
  local_850 = param_2;
  FUN_14494412e(&local_148,local_1c8);
  local_248[0] = (double)param_7;
  local_1f8 = param_5[2] * local_248[0];
  local_248[5] = param_5[1] * local_248[0];
  local_248[0] = local_248[0] * *param_5;
  local_248[4] = 0.0;
  local_208 = 0;
  uStack_200 = 0;
  local_248[1] = 0.0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_248[2] = 0.0;
  local_248[3] = 0.0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1d0 = 0x3ff0000000000000;
  local_288 = param_6[1];
  uStack_280 = param_6[2];
  local_2a8 = *param_6;
  local_2c8 = 0x3ff0000000000000;
  local_2c0 = 0;
  local_2a0 = 0x3ff0000000000000;
  local_260 = 0;
  uStack_258 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_278 = 0x3ff0000000000000;
  local_270 = 0;
  uStack_268 = 0;
  local_250 = 0x3ff0000000000000;
  puVar8 = &DAT_14c846400;
  puVar9 = local_348;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_360 = *(undefined4 *)(param_8 + 1);
  uStack_35c = *(undefined4 *)((longlong)param_8 + 0xc);
  uStack_358 = *(undefined4 *)(param_8 + 2);
  uStack_354 = *(undefined4 *)((longlong)param_8 + 0x14);
  local_368 = *param_8;
  local_3c8 = 0x3ff0000000000000;
  local_3a8 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_3c0 = 0;
  local_3a0 = 0x3ff0000000000000;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_378 = 0x3ff0000000000000;
  local_370 = 0;
  local_350 = 0x3ff0000000000000;
  FUN_14494412e(&local_3c8,local_448);
  puVar8 = &DAT_14c846400;
  puVar9 = local_4c8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  dVar1 = sin(*param_4 * 0.017453292519943295);
  dVar2 = sin(param_4[1] * 0.017453292519943295);
  dVar3 = sin(param_4[2] * 0.017453292519943295);
  dVar4 = cos(*param_4 * 0.017453292519943295);
  dVar5 = cos(param_4[1] * 0.017453292519943295);
  local_648 = cos(param_4[2] * 0.017453292519943295);
  local_500 = -dVar1;
  local_548[0] = 1.0;
  local_548[4] = 0.0;
  local_548[1] = 0.0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_548[2] = 0.0;
  local_548[3] = 0.0;
  local_510 = 0;
  uStack_508 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4d0 = 0x3ff0000000000000;
  local_5c8[2] = -dVar2;
  local_5c8[1] = 0.0;
  local_5a0 = 0x3ff0000000000000;
  local_580 = 0;
  local_560 = 0;
  uStack_558 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_5b0 = 0;
  uStack_5a8 = 0;
  local_570 = 0;
  uStack_568 = 0;
  local_550 = 0x3ff0000000000000;
  local_628 = -dVar3;
  local_608 = 0;
  uStack_600 = 0;
  local_5e0 = 0;
  uStack_5d8 = 0;
  local_638 = 0;
  uStack_630 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_5f8 = 0x3ff0000000000000;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_5d0 = 0x3ff0000000000000;
  local_640 = dVar3;
  local_620 = local_648;
  local_5c8[0] = dVar5;
  local_588 = dVar2;
  local_578 = dVar5;
  local_548[5] = dVar4;
  local_518 = dVar1;
  local_4f8 = dVar4;
  switch(local_851) {
  case 0:
    pdVar7 = local_548;
    pdVar10 = local_5c8;
    break;
  case 1:
    pdVar7 = local_5c8;
    pdVar10 = &local_648;
    goto LAB_146ea9011;
  case 2:
    pdVar7 = &local_648;
    pdVar10 = local_548;
    goto LAB_146ea8fc5;
  case 3:
    pdVar7 = local_548;
    pdVar10 = &local_648;
LAB_146ea8fc5:
    FUN_1447fea8d(local_6c8,pdVar7,pdVar10);
    pdVar7 = local_5c8;
    goto LAB_146ea9029;
  case 4:
    pdVar7 = local_5c8;
    pdVar10 = local_548;
    break;
  case 5:
    pdVar7 = &local_648;
    pdVar10 = local_5c8;
LAB_146ea9011:
    FUN_1447fea8d(local_6c8,pdVar7,pdVar10);
    pdVar7 = local_548;
    goto LAB_146ea9029;
  default:
    goto switchD_146ea8f42_default;
  }
  FUN_1447fea8d(local_6c8,pdVar7,pdVar10);
  pdVar7 = &local_648;
LAB_146ea9029:
  FUN_1447fea8d(local_748,local_6c8,pdVar7);
  puVar8 = local_748;
  puVar9 = local_6c8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
switchD_146ea8f42_default:
  puVar8 = &DAT_14c846400;
  puVar9 = local_748;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_760 = *(undefined4 *)(local_850 + 1);
  uStack_75c = *(undefined4 *)((longlong)local_850 + 0xc);
  uStack_758 = *(undefined4 *)(local_850 + 2);
  uStack_754 = *(undefined4 *)((longlong)local_850 + 0x14);
  local_768 = *local_850;
  local_7c8 = 0x3ff0000000000000;
  local_7a8 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_7c0 = 0;
  local_7a0 = 0x3ff0000000000000;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_778 = 0x3ff0000000000000;
  local_770 = 0;
  local_750 = 0x3ff0000000000000;
  FUN_1447fea8d(param_1,local_1c8,local_248);
  FUN_1447fea8d(local_848,param_1,&local_2c8);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,&local_148);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,local_348);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,local_448);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,local_4c8);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,local_6c8);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,&local_3c8);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,local_748);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1447fea8d(local_848,param_1,&local_7c8);
  puVar8 = local_848;
  puVar9 = param_1;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (param_10 != '\0') {
    FUN_14494412e(param_1,local_848);
    puVar8 = local_848;
    puVar9 = param_1;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_878) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ea927e FUN_146ea927e body=169 status=ok
// SIG undefined FUN_146ea927e(void)

undefined8 FUN_146ea927e(undefined8 param_1)

{
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 in_stack_00000048;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_c0 = in_stack_00000048;
  local_d0 = in_stack_00000038;
  uStack_c8 = in_stack_00000040;
  local_d8 = in_stack_00000030;
  local_e8 = in_stack_00000028;
  FUN_146ea8b00(local_98);
  FUN_1448ac920(param_1,local_98);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea9328 FUN_146ea9328 body=79 status=ok
// SIG undefined FUN_146ea9328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ea9328(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8) = 1;
    uVar3 = uRam000000014c846088;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    lVar4 = (longlong)param_2 * 0x30;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar4);
    *puVar1 = _DAT_14c846080;
    puVar1[1] = uVar3;
    uVar3 = uRam000000014c846078;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar4);
    *puVar1 = _DAT_14c846070;
    puVar1[1] = uVar3;
    uVar3 = uRam000000014c846068;
    *(undefined8 *)(lVar2 + lVar4) = _DAT_14c846060;
    ((undefined8 *)(lVar2 + lVar4))[1] = uVar3;
  }
  return;
}



// FUNCTION 146ea9378 FUN_146ea9378 body=1973 status=ok
// SIG undefined FUN_146ea9378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ea9378(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auStack_258 [32];
  undefined1 local_238 [8];
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [16];
  longlong local_1e8;
  int local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8) = 1;
  plVar2 = *(longlong **)(param_1 + 0xa8);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 8) = 1;
  plVar3 = *(longlong **)(param_1 + 0x38);
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 8) = 1;
  if ((int)param_2 < -1) goto LAB_146ea9947;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (iVar5 <= (int)param_2) goto LAB_146ea9947;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_146eb8859(plVar2,plVar3);
  iVar5 = (int)param_3[1];
  if (0 < iVar5) {
    lVar12 = 0;
    do {
      iVar5 = *(int *)(*param_3 + lVar12 * 4);
      lVar13 = (longlong)iVar5;
      if ((-1 < lVar13) && (iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3), iVar5 < iVar6)) {
        iVar6 = *(int *)(plVar3[2] + lVar13 * 4);
        if ((-1 < (longlong)iVar6) && (iVar7 = (**(code **)(*plVar3 + 0x60))(plVar3), iVar6 < iVar7)
           ) {
          FUN_144a7cc9e((longlong)iVar6 * 0x50 + *(longlong *)(lVar10 + 0x10),iVar5);
        }
        *(uint *)(plVar3[2] + lVar13 * 4) = param_2;
      }
      lVar12 = lVar12 + 1;
      iVar5 = (int)param_3[1];
    } while (lVar12 < iVar5);
  }
  if (param_2 == 0xffffffff) {
LAB_146ea94ce:
    uStack_230 = uRam000000014c846078;
    local_238 = (undefined1  [8])_DAT_14c846070;
    fVar46 = _DAT_14c846060;
    fVar47 = fRam000000014c846064;
    fVar48 = fRam000000014c846068;
    fVar49 = fRam000000014c84606c;
    auVar28 = _DAT_14c846080;
  }
  else {
    local_1e8 = *param_3;
    uVar9 = SUB84(&local_1e8,0);
    local_1e0 = iVar5;
    FUN_146bc855c((ulonglong)param_2 * 0x50 + *(longlong *)(lVar10 + 0x10));
    lVar10 = (ulonglong)param_2 * 0x30;
    auVar28 = *(undefined1 (*) [16])(local_1d8 + 0x20 + lVar10);
    auVar25._4_4_ = -(uint)(1e-08 < ABS(auVar28._4_4_));
    auVar25._0_4_ = -(uint)(1e-08 < ABS(auVar28._0_4_));
    auVar25._8_4_ = -(uint)(1e-08 < ABS(auVar28._8_4_));
    auVar25._12_4_ = -(uint)(1e-08 < ABS(auVar28._12_4_));
    iVar5 = movmskps(uVar9,auVar25);
    if (iVar5 == 0) goto LAB_146ea94ce;
    pfVar8 = (float *)(local_1d8 + lVar10);
    auVar25 = insertps(auVar28,0x3f800000,0x30);
    auVar28 = divps(_DAT_149e1ef10,auVar28);
    auVar50._0_4_ = -(uint)(1e-08 < ABS(auVar25._0_4_)) & auVar28._0_4_;
    auVar50._4_4_ = -(uint)(1e-08 < ABS(auVar25._4_4_)) & auVar28._4_4_;
    auVar50._8_4_ = -(uint)(1e-08 < ABS(auVar25._8_4_)) & auVar28._8_4_;
    auVar50._12_4_ = -(uint)(1e-08 < ABS(auVar25._12_4_)) & auVar28._12_4_;
    auVar28 = blendps(auVar50,ZEXT816(0),8);
    fVar46 = *pfVar8 * -1.0;
    fVar47 = pfVar8[1] * -1.0;
    fVar48 = pfVar8[2] * -1.0;
    fVar49 = pfVar8[3] * 1.0;
    fVar20 = pfVar8[4] * auVar28._0_4_;
    fVar29 = pfVar8[5] * auVar28._4_4_;
    fVar34 = pfVar8[6] * auVar28._8_4_;
    fVar35 = pfVar8[7] * auVar28._12_4_;
    fVar36 = fVar29 * fVar46 - fVar47 * fVar20;
    fVar38 = fVar34 * fVar47 - fVar48 * fVar29;
    fVar39 = fVar20 * fVar48 - fVar46 * fVar34;
    fVar40 = fVar35 * fVar49 - fVar49 * fVar35;
    fVar36 = fVar36 + fVar36;
    fVar38 = fVar38 + fVar38;
    fVar39 = fVar39 + fVar39;
    fVar40 = fVar40 + fVar40;
    auVar31._0_4_ = 0.0 - ((fVar36 * fVar47 - fVar39 * fVar48) + fVar49 * fVar38 + fVar20);
    auVar31._4_4_ = 0.0 - ((fVar38 * fVar48 - fVar36 * fVar46) + fVar49 * fVar39 + fVar29);
    auVar31._8_4_ = 0.0 - ((fVar39 * fVar46 - fVar38 * fVar47) + fVar49 * fVar36 + fVar34);
    auVar31._12_4_ = 0.0 - ((fVar40 * fVar49 - fVar40 * fVar49) + fVar49 * fVar40 + fVar35);
    _local_238 = blendps(auVar31,ZEXT816(0),8);
  }
  if (0 < (int)param_3[1]) {
    fVar29 = fVar46 + fVar46;
    fVar34 = fVar47 + fVar47;
    fVar35 = fVar48 + fVar48;
    fVar20 = fVar49 * (fVar49 + fVar49);
    fVar36 = auVar28._0_4_;
    auVar24._0_4_ = (1.0 - (fVar48 * fVar35 + fVar47 * fVar34)) * fVar36;
    fVar38 = auVar28._4_4_;
    auVar24._4_4_ = (1.0 - (fVar48 * fVar35 + fVar46 * fVar29)) * fVar38;
    fVar39 = auVar28._8_4_;
    auVar24._8_4_ = (1.0 - (fVar47 * fVar34 + fVar46 * fVar29)) * fVar39;
    fVar40 = auVar28._12_4_;
    auVar24._12_4_ = (0.0 - (fVar20 + fVar20)) * fVar40;
    fVar20 = (fVar34 * fVar46 + fVar35 * fVar49) * fVar36;
    fVar51 = (fVar35 * fVar46 + fVar34 * fVar49) * fVar39;
    auVar25 = blendps(auVar24,ZEXT816(0),8);
    auVar26._4_4_ = (fVar35 * fVar47 + fVar29 * fVar49) * fVar38;
    auVar26._0_4_ = fVar20;
    auVar26._8_4_ = fVar51;
    auVar26._12_4_ = (fVar29 * fVar46 + fVar29 * fVar49) * fVar40;
    auVar31 = insertps(auVar26,auVar26,0x4c);
    local_1f8 = insertps(_local_238,0x3f800000,0x30);
    lVar10 = 0;
    local_228 = fVar48;
    fStack_224 = fVar48;
    fStack_220 = fVar48;
    fStack_21c = fVar48;
    local_218 = fVar47;
    fStack_214 = fVar47;
    fStack_210 = fVar47;
    fStack_20c = fVar47;
    local_208 = fVar46;
    fStack_204 = fVar46;
    fStack_200 = fVar46;
    fStack_1fc = fVar46;
    do {
      auVar26 = _DAT_149e1ef10;
      iVar5 = *(int *)(*param_3 + lVar10 * 4);
      lVar12 = (longlong)iVar5 * 0x30;
      auVar50 = *(undefined1 (*) [16])(local_1d8 + 0x20 + lVar12);
      pfVar8 = (float *)(local_1d8 + lVar12);
      auVar16 = minps(auVar50,auVar28);
      auVar45._4_4_ = -(uint)(auVar16._4_4_ < 0.0);
      auVar45._0_4_ = -(uint)(auVar16._0_4_ < 0.0);
      auVar45._8_4_ = -(uint)(auVar16._8_4_ < 0.0);
      auVar45._12_4_ = -(uint)(auVar16._12_4_ < 0.0);
      iVar5 = movmskps(iVar5,auVar45);
      if (iVar5 == 0) {
        fVar15 = *pfVar8;
        fVar19 = pfVar8[1];
        fVar23 = pfVar8[2];
        fVar22 = pfVar8[3];
        auVar27._0_4_ =
             fVar19 * local_228 * -1.0 +
             fVar23 * local_218 * 1.0 + fVar22 * local_208 * 1.0 + fVar49 * fVar15;
        auVar27._4_4_ =
             fVar15 * fStack_224 * 1.0 +
             fVar22 * fStack_214 * 1.0 + fVar23 * fStack_204 * -1.0 + fVar49 * fVar19;
        auVar27._8_4_ =
             fVar22 * fStack_220 * 1.0 +
             fVar15 * fStack_210 * -1.0 + fVar19 * fStack_200 * 1.0 + fVar49 * fVar23;
        auVar27._12_4_ =
             fVar23 * fStack_21c * -1.0 +
             fVar19 * fStack_20c * -1.0 + fVar15 * fStack_1fc * -1.0 + fVar49 * fVar22;
        fVar30 = pfVar8[4] * fVar36;
        fVar21 = pfVar8[5] * fVar38;
        fVar41 = pfVar8[6] * fVar39;
        fVar42 = pfVar8[7] * fVar40;
        fVar15 = fVar21 * fVar46 - fVar47 * fVar30;
        fVar19 = fVar41 * fVar47 - fVar48 * fVar21;
        fVar23 = fVar30 * fVar48 - fVar46 * fVar41;
        fVar22 = fVar42 * fVar49 - fVar49 * fVar42;
        fVar15 = fVar15 + fVar15;
        fVar19 = fVar19 + fVar19;
        fVar23 = fVar23 + fVar23;
        fVar22 = fVar22 + fVar22;
        auVar16._0_4_ =
             (fVar15 * fVar47 - fVar23 * fVar48) + fVar49 * fVar19 + fVar30 + (float)local_238._0_4_
        ;
        auVar16._4_4_ =
             (fVar19 * fVar48 - fVar15 * fVar46) + fVar49 * fVar23 + fVar21 + (float)local_238._4_4_
        ;
        auVar16._8_4_ =
             (fVar23 * fVar46 - fVar19 * fVar47) + fVar49 * fVar15 + fVar41 + (float)uStack_230;
        auVar16._12_4_ =
             (fVar22 * fVar49 - fVar22 * fVar49) + fVar49 * fVar22 + fVar42 + uStack_230._4_4_;
      }
      else {
        local_178._4_4_ = fVar20;
        local_178._0_4_ = auVar24._0_4_;
        local_178._8_4_ = (fVar35 * fVar46 - fVar34 * fVar49) * fVar36;
        local_178._12_4_ = 0;
        local_148 = local_1f8._0_8_;
        uStack_140 = local_1f8._8_8_;
        fVar15 = *pfVar8;
        fVar19 = pfVar8[1];
        fVar23 = pfVar8[2];
        fVar22 = pfVar8[3];
        fVar30 = pfVar8[8];
        local_1a8 = pfVar8[9];
        fStack_194 = pfVar8[10];
        fVar41 = fVar15 + fVar15;
        fVar42 = fVar19 + fVar19;
        fVar43 = fVar23 + fVar23;
        fVar21 = fVar22 * (fVar22 + fVar22);
        auVar32._0_4_ = ((float)DAT_149e1ef10 - (fVar23 * fVar43 + fVar19 * fVar42)) * fVar30;
        auVar32._4_4_ = (DAT_149e1ef10._4_4_ - (fVar23 * fVar43 + fVar15 * fVar41)) * local_1a8;
        auVar32._8_4_ = (DAT_149e1ef10._8_4_ - (fVar19 * fVar42 + fVar15 * fVar41)) * fStack_194;
        auVar32._12_4_ = (DAT_149e1ef10._12_4_ - (fVar21 + fVar21)) * pfVar8[0xb];
        fVar23 = (fVar42 * fVar15 + fVar43 * fVar22) * fVar30;
        auVar44._4_4_ = (fVar43 * fVar19 + fVar41 * fVar22) * local_1a8;
        auVar44._0_4_ = fVar23;
        local_198 = (fVar43 * fVar15 + fVar42 * fVar22) * fStack_194;
        local_1a8 = (fVar42 * fVar15 - fVar43 * fVar22) * local_1a8;
        fStack_194 = (fVar43 * fVar19 - fVar41 * fVar22) * fStack_194;
        auVar16 = blendps(auVar32,ZEXT816(0),8);
        auVar44._8_4_ = local_198;
        auVar44._12_4_ = (fVar41 * fVar15 + fVar41 * fVar22) * pfVar8[0xb];
        local_1b8._4_4_ = fVar23;
        local_1b8._0_4_ = auVar32._0_4_;
        local_1b8._8_4_ = (fVar43 * fVar15 - fVar42 * fVar22) * fVar30;
        local_1b8._12_4_ = 0;
        auVar45 = insertps(auVar44,auVar44,0x4c);
        uStack_1a0 = auVar45._0_4_;
        uStack_19c = auVar45._8_4_;
        uStack_190 = auVar16._8_4_;
        uStack_18c = auVar16._12_4_;
        local_188 = insertps(*(undefined1 (*) [16])(pfVar8 + 4),0x3f800000,0x30);
        fStack_1a4 = auVar32._4_4_;
        local_168 = (fVar34 * fVar46 - fVar35 * fVar49) * fVar38;
        fStack_164 = auVar24._4_4_;
        uStack_160 = auVar31._0_4_;
        uStack_15c = auVar31._8_4_;
        local_158 = fVar51;
        fStack_154 = (fVar35 * fVar47 - fVar29 * fVar49) * fVar39;
        uStack_150 = auVar25._8_4_;
        uStack_14c = auVar25._12_4_;
        FUN_144afeb32(&local_138,local_1b8,auVar16._0_8_);
        FUN_144afd82e(&local_138);
        auVar17._4_4_ = -(uint)(0.0 <= auVar50._4_4_ * fVar38);
        auVar17._0_4_ = -(uint)(0.0 <= auVar50._0_4_ * fVar36);
        auVar17._8_4_ = -(uint)(0.0 <= auVar50._8_4_ * fVar39);
        auVar17._12_4_ = -(uint)(0.0 <= auVar50._12_4_ * fVar40);
        auVar26 = blendvps(_DAT_149f63320,auVar26,auVar17);
        fVar15 = auVar26._0_4_;
        local_130 = local_130 * fVar15;
        local_134 = local_134 * fVar15;
        local_138 = local_138 * fVar15;
        fVar15 = auVar26._4_4_;
        local_120 = local_120 * fVar15;
        local_124 = local_124 * fVar15;
        local_128 = fVar15 * local_128;
        fVar15 = auVar26._8_4_;
        local_110 = local_110 * fVar15;
        local_114 = local_114 * fVar15;
        local_118 = fVar15 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar15 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar19 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar33._0_4_ = fVar19 + fVar15;
        auVar33._4_4_ = fVar19 + fVar15;
        auVar33._8_4_ = fVar15 + fVar19;
        auVar33._12_4_ = fVar15 + fVar19;
        auVar18._4_4_ = -(uint)(1e-08 <= auVar33._4_4_);
        auVar18._0_4_ = -(uint)(1e-08 <= auVar33._0_4_);
        auVar18._8_4_ = -(uint)(1e-08 <= auVar33._8_4_);
        auVar18._12_4_ = -(uint)(1e-08 <= auVar33._12_4_);
        auVar26 = sqrtps(auVar33,auVar33);
        auVar26 = divps(_DAT_1499314a0,auVar26);
        auVar37._0_4_ = auVar26._0_4_ * local_1c8;
        auVar37._4_4_ = auVar26._4_4_ * fStack_1c4;
        auVar37._8_4_ = auVar26._8_4_ * fStack_1c0;
        auVar37._12_4_ = auVar26._12_4_ * fStack_1bc;
        auVar27 = blendvps(_DAT_149932320,auVar37,auVar18);
        auVar16 = blendps(local_108,ZEXT816(0),8);
      }
      lVar13 = plVar2[2];
      *(undefined1 (*) [16])(lVar13 + lVar12) = auVar27;
      *(undefined1 (*) [16])(lVar13 + 0x10 + lVar12) = auVar16;
      pfVar8 = (float *)(lVar13 + 0x20 + lVar12);
      *pfVar8 = auVar50._0_4_ * fVar36;
      pfVar8[1] = auVar50._4_4_ * fVar38;
      pfVar8[2] = auVar50._8_4_ * fVar39;
      pfVar8[3] = auVar50._12_4_ * fVar40;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_3[1]);
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
LAB_146ea9947:
  (**(code **)(*plVar3 + 0x60))(plVar3);
  if ((longlong)(int)param_3[1] != 0) {
    piVar11 = (int *)*param_3;
    piVar1 = piVar11 + (int)param_3[1];
    do {
      iVar5 = *piVar11;
      iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
      bVar14 = iVar5 != -1;
      if (0 < iVar6 && bVar14) {
        iVar7 = 1;
        do {
          iVar5 = *(int *)(plVar3[2] + (longlong)iVar5 * 4);
          bVar14 = iVar5 != -1;
          if (iVar5 == -1) break;
          bVar4 = iVar7 < iVar6;
          iVar7 = iVar7 + 1;
        } while (bVar4);
      }
    } while ((!bVar14) && (piVar11 = piVar11 + 1, piVar11 != piVar1));
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ea9b2e FUN_146ea9b2e body=991 status=ok
// SIG undefined FUN_146ea9b2e(void)

undefined8 * FUN_146ea9b2e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  FUN_1446ddc76(&local_48,"Parent",1);
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = local_48;
  param_1[4] = DAT_14c9974a8;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[7] = uVar1;
  FUN_1446ddc76(&local_48,"Children",1);
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = local_48;
  param_1[0xb] = DAT_14c9974a8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_140b35e94(param_2);
  param_1[0xe] = uVar1;
  FUN_1446ddc76(&local_48,"Level",1);
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = local_48;
  param_1[0x12] = DAT_14c9974a8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x15] = uVar1;
  FUN_1446ddc76(&local_48,"SimulationType",1);
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  param_1[0x18] = local_48;
  param_1[0x19] = DAT_14c9974a8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x1c] = uVar1;
  FUN_1446ddc76(&local_48,"TransformToGeometryIndex",1);
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0;
  param_1[0x1f] = local_48;
  param_1[0x20] = DAT_14c9974a8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x23] = uVar1;
  FUN_1446ddc76(&local_48,"TransformIndex",1);
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = local_48;
  param_1[0x27] = DAT_14c996af0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x2a] = uVar1;
  FUN_1446ddc76(&local_48,"VertexStart",1);
  param_1[0x2b] = param_2;
  param_1[0x2c] = 0;
  param_1[0x2d] = local_48;
  param_1[0x2e] = DAT_14c996af0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x31] = uVar1;
  FUN_1446ddc76(&local_48,"VertexCount",1);
  param_1[0x32] = param_2;
  param_1[0x33] = 0;
  param_1[0x34] = local_48;
  param_1[0x35] = DAT_14c996af0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x38] = uVar1;
  FUN_1446ddc76(&local_48,"FaceStart",1);
  param_1[0x39] = param_2;
  param_1[0x3a] = 0;
  param_1[0x3b] = local_48;
  param_1[0x3c] = DAT_14c996af0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x3f] = uVar1;
  FUN_1446ddc76(&local_48,"FaceCount",1);
  param_1[0x40] = param_2;
  param_1[0x41] = 0;
  param_1[0x42] = local_48;
  param_1[0x43] = DAT_14c996af0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x46] = uVar1;
  FUN_1446ddc76(&local_48,"Indices",1);
  param_1[0x47] = param_2;
  param_1[0x48] = 0;
  param_1[0x49] = local_48;
  param_1[0x4a] = DAT_14c996ae8;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  uVar1 = FUN_146ea2724(param_2);
  param_1[0x4d] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ea9f0e FUN_146ea9f0e body=452 status=ok
// SIG undefined FUN_146ea9f0e(void)

void FUN_146ea9f0e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int local_4c;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    iVar8 = *(int *)(param_2 + 1);
    lVar11 = (longlong)iVar8;
    if (lVar11 != 0) {
      piVar1 = (int *)*param_2;
      local_4c = 0;
      bVar5 = iVar2 <= *piVar1 || *piVar1 == -1;
      iVar6 = 0;
      do {
        lVar3 = (longlong)iVar6;
        iVar10 = iVar6;
        lVar4 = lVar3;
        iVar9 = iVar6 + 1;
        if (iVar6 + 1 < iVar8) {
          iVar9 = iVar8;
        }
        do {
          lVar4 = lVar4 + 1;
          iVar7 = iVar9;
          if (lVar11 <= lVar4) break;
          iVar7 = iVar10 + 1;
          iVar10 = iVar7;
        } while (bVar5 == (iVar2 <= piVar1[lVar4] || piVar1[lVar4] == -1));
        if (bVar5 == false) {
          if (local_4c != iVar6) {
            memmove(piVar1 + local_4c,piVar1 + lVar3,(longlong)(iVar7 - iVar6) << 2);
          }
          local_4c = local_4c + (iVar7 - iVar6);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar6 = iVar7;
      } while (lVar4 < lVar11);
      *(int *)(param_2 + 1) = local_4c;
      if (local_4c != 0) {
        piVar1 = (int *)*param_2;
        iVar2 = 0;
        bVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + (longlong)*piVar1 * 4
                        ) == -1;
        iVar8 = 0;
        do {
          lVar4 = (longlong)iVar8;
          iVar9 = iVar8;
          lVar11 = lVar4;
          iVar6 = iVar8 + 1;
          if (iVar8 + 1 < local_4c) {
            iVar6 = local_4c;
          }
          do {
            lVar11 = lVar11 + 1;
            iVar10 = iVar6;
            if (local_4c <= lVar11) break;
            iVar10 = iVar9 + 1;
            iVar9 = iVar10;
          } while (bVar5 == (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) +
                                     (longlong)piVar1[lVar11] * 4) == -1));
          if (bVar5 == false) {
            if (iVar2 != iVar8) {
              memmove(piVar1 + iVar2,piVar1 + lVar4,(longlong)(iVar10 - iVar8) << 2);
            }
            iVar2 = iVar2 + (iVar10 - iVar8);
          }
          bVar5 = (bool)(bVar5 ^ 1);
          iVar8 = iVar10;
        } while (lVar11 < local_4c);
        *(int *)(param_2 + 1) = iVar2;
      }
    }
  }
  return;
}



// FUNCTION 146eaa0d2 FUN_146eaa0d2 body=166 status=ok
// SIG undefined FUN_146eaa0d2(void)

longlong * FUN_146eaa0d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + 0xa8) != 0) && (lVar2 = *(longlong *)(param_1 + 0xe0), lVar2 != 0))
     && (*(longlong *)(param_1 + 0x70) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
    }
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        if (0xfffffffd < *(int *)(*(longlong *)(lVar2 + 0x10) + uVar5 * 4) - 3U) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return param_2;
}



// FUNCTION 146eaa178 FUN_146eaa178 body=209 status=ok
// SIG undefined FUN_146eaa178(void)

longlong * FUN_146eaa178(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
      uVar3 = FUN_1401f66f6(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    }
    if (0 < (int)uVar3) {
      uVar4 = 0;
      do {
        if (((param_4 == '\0') ||
            (0xfffffffd <
             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10) + uVar4 * 4) - 3U)) &&
           ((param_3 == -1 || (*(int *)(*(longlong *)(lVar2 + 0x10) + uVar4 * 4) == param_3)))) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_2;
}



// FUNCTION 146eaa24a FUN_146eaa24a body=1002 status=ok
// SIG undefined FUN_146eaa24a(void)

void FUN_146eaa24a(longlong param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  bool bVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) goto LAB_146eaa48d;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
  uVar1 = *(uint *)(param_2 + 1);
  lVar10 = (longlong)(int)uVar1;
  piVar13 = (int *)*param_2;
  if (lVar10 == 0) {
    uVar8 = 0;
    if (param_3 == '\0') goto LAB_146eaa47e;
    local_50 = 0;
    local_60 = param_1;
LAB_146eaa45a:
    local_58 = (void *)0x0;
    local_4c = 0;
    uVar8 = 0;
LAB_146eaa465:
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
      uVar8 = *(uint *)(param_2 + 1);
    }
    piVar13 = (int *)*param_2;
  }
  else {
    local_78 = CONCAT71(local_78._1_7_,param_3);
    uVar8 = 0;
    bVar15 = iVar4 <= *piVar13 || *piVar13 == -1;
    local_70 = param_2;
    local_68 = param_1;
    uVar12 = 0;
    do {
      lVar6 = (longlong)(int)uVar12;
      uVar17 = uVar12;
      lVar14 = lVar6;
      uVar9 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar1) {
        uVar9 = uVar1;
      }
      do {
        lVar14 = lVar14 + 1;
        uVar18 = uVar9;
        if (lVar10 <= lVar14) break;
        uVar18 = uVar17 + 1;
        uVar17 = uVar18;
      } while (bVar15 == (iVar4 <= piVar13[lVar14] || piVar13[lVar14] == -1));
      if (bVar15 == false) {
        if (uVar8 != uVar12) {
          memmove(piVar13 + (int)uVar8,piVar13 + lVar6,(longlong)(int)(uVar18 - uVar12) << 2);
        }
        uVar8 = uVar8 + (uVar18 - uVar12);
      }
      param_2 = local_70;
      bVar15 = (bool)(bVar15 ^ 1);
      uVar12 = uVar18;
    } while (lVar14 < lVar10);
    *(uint *)(local_70 + 1) = uVar8;
    piVar13 = (int *)*local_70;
    if ((char)local_78 != '\0') {
      local_60 = local_68;
      local_58 = (void *)0x0;
      local_50 = uVar8;
      if (uVar8 == 0) goto LAB_146eaa45a;
      FUN_144a06ca8(&local_58,uVar8,0);
      memcpy(local_58,piVar13,(longlong)(int)uVar8 << 2);
      lVar10 = local_60;
      uVar1 = *(uint *)(param_2 + 1);
      uVar7 = (ulonglong)(int)uVar1;
      uVar8 = 0;
      if (uVar7 == 0) goto LAB_146eaa465;
      piVar13 = (int *)*param_2;
      iVar4 = *piVar13;
      if ((longlong)iVar4 < 0) {
LAB_146eaa4b5:
        bVar15 = true;
      }
      else {
        if (*(longlong **)(local_60 + 0x38) == (longlong *)0x0) {
          iVar5 = FUN_1401f66f6(*(undefined8 *)(local_60 + 8),*(undefined8 *)(local_60 + 0x20));
        }
        else {
          iVar5 = (**(code **)(**(longlong **)(local_60 + 0x38) + 0x60))();
        }
        if (iVar5 <= iVar4) goto LAB_146eaa4b5;
        plVar2 = *(longlong **)(lVar10 + 0x38);
        if ((plVar2 == (longlong *)0x0) ||
           (iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2), iVar5 <= iVar4)) {
LAB_146eaa61c:
          bVar15 = false;
        }
        else {
          iVar4 = *(int *)(plVar2[2] + (longlong)iVar4 * 4);
          if (iVar4 == -1) goto LAB_146eaa61c;
          bVar15 = false;
          do {
            if (local_50 != 0) {
              lVar10 = 0;
              do {
                if (*(int *)((longlong)local_58 + lVar10) == iVar4) goto LAB_146eaa4b5;
                lVar10 = lVar10 + 4;
              } while ((longlong)(int)local_50 << 2 != lVar10);
            }
            iVar4 = *(int *)(plVar2[2] + (longlong)iVar4 * 4);
          } while (iVar4 != -1);
        }
      }
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar8 = uVar12 + 1;
        uVar9 = uVar12;
        local_78 = uVar11;
        if ((int)uVar8 < (int)uVar1) {
          uVar11 = (ulonglong)uVar12;
          do {
            uVar9 = (uint)uVar11;
            bVar3 = true;
            uVar11 = (longlong)(int)uVar9 + 1;
            do {
              lVar10 = local_60;
              iVar4 = piVar13[uVar11];
              if ((longlong)iVar4 < 0) {
LAB_146eaa55d:
                if (!bVar15) {
                  uVar12 = (uint)uVar11;
                  goto LAB_146eaa5c6;
                }
              }
              else {
                if (*(longlong **)(local_60 + 0x38) == (longlong *)0x0) {
                  iVar5 = FUN_1401f66f6(*(undefined8 *)(local_60 + 8),
                                        *(undefined8 *)(local_60 + 0x20));
                }
                else {
                  iVar5 = (**(code **)(**(longlong **)(local_60 + 0x38) + 0x60))();
                }
                if (iVar5 <= iVar4) goto LAB_146eaa55d;
                plVar2 = *(longlong **)(lVar10 + 0x38);
                if ((plVar2 != (longlong *)0x0) &&
                   (iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2), iVar4 < iVar5)) {
                  iVar4 = *(int *)(plVar2[2] + (longlong)iVar4 * 4);
                  if (iVar4 != -1) {
                    do {
                      if (local_50 != 0) {
                        lVar10 = 0;
                        do {
                          if (*(int *)((longlong)local_58 + lVar10) == iVar4) goto LAB_146eaa55d;
                          lVar10 = lVar10 + 4;
                        } while ((longlong)(int)local_50 << 2 != lVar10);
                      }
                      iVar4 = *(int *)(plVar2[2] + (longlong)iVar4 * 4);
                    } while (iVar4 != -1);
                  }
                }
                if (bVar15) {
                  if (!bVar3) goto LAB_146eaa609;
                  goto LAB_146eaa599;
                }
              }
              uVar16 = uVar11 + 1;
              bVar3 = (longlong)uVar16 < (longlong)uVar7;
              uVar11 = uVar16;
            } while (uVar16 != uVar7);
            uVar12 = uVar1;
            if (!bVar15) goto LAB_146eaa5c6;
            uVar11 = (ulonglong)uVar1;
            if ((longlong)uVar7 <= (longlong)uVar16) goto LAB_146eaa609;
LAB_146eaa599:
            uVar9 = (uint)uVar11;
            uVar8 = uVar9 + 1;
            bVar15 = false;
            uVar11 = uVar11 & 0xffffffff;
          } while ((int)uVar8 < (int)uVar1);
        }
        if (bVar15) {
LAB_146eaa609:
          uVar8 = (uint)local_78;
          break;
        }
        bVar3 = false;
        uVar12 = uVar8;
LAB_146eaa5c6:
        uVar8 = (uint)local_78;
        if (uVar8 != uVar9) {
          memmove(piVar13 + (int)uVar8,piVar13 + (int)uVar9,(longlong)(int)(uVar12 - uVar9) << 2);
        }
        uVar8 = uVar8 + (uVar12 - uVar9);
        uVar11 = (ulonglong)uVar8;
        bVar15 = true;
      } while (bVar3);
      *(uint *)(local_70 + 1) = uVar8;
      param_2 = local_70;
      goto LAB_146eaa465;
    }
  }
LAB_146eaa47e:
  FUN_144958a06(piVar13,uVar8);
LAB_146eaa48d:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaa636 FUN_146eaa636 body=359 status=ok
// SIG undefined FUN_146eaa636(void)

void FUN_146eaa636(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10) + (longlong)param_2 * 4) == 1)
    {
      iVar6 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
        FUN_1446f48e2(param_3,iVar6);
      }
      *(int *)(*param_3 + (longlong)iVar6 * 4) = param_2;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
      lVar5 = (longlong)param_2 * 0x50;
      plVar1 = (longlong *)(lVar2 + lVar5);
      lVar2 = lVar2 + lVar5;
      lVar5 = lVar2 + 0x10;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar5;
      if (*(int *)(lVar2 + 0x28) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = (int)plVar1[5];
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar3 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar4 = local_68._4_4_;
      local_80 = plVar1;
      if ((local_68._4_4_ != iVar6) || (local_68 = local_48, uStack_50 != lVar5)) {
        do {
          local_68 = uVar3;
          FUN_146eaa636(param_1,*(undefined4 *)(*local_80 + (longlong)iVar4 * 0xc),param_3);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_80 != plVar1 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar5 || local_68._4_4_ != iVar6));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaa79e FUN_146eaa79e body=224 status=ok
// SIG undefined FUN_146eaa79e(void)

void FUN_146eaa79e(undefined8 param_1,void **param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146eaa24a(param_1,param_2,1);
  local_48 = (void *)0x0;
  uStack_40 = 0;
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 != 0) {
    pvVar2 = *param_2;
    lVar3 = 0;
    do {
      FUN_146eaa636(param_1,*(undefined4 *)((longlong)pvVar2 + lVar3),&local_48);
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  pvVar2 = local_48;
  if (&local_48 != param_2) {
    iVar1 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_2 + 1) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_2,uStack_40 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(*param_2,pvVar2,lVar3 << 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaa880 FUN_146eaa880 body=169 status=ok
// SIG undefined FUN_146eaa880(void)

void FUN_146eaa880(longlong param_1,longlong *param_2)

{
  int *_Dst;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    FUN_146eaa24a(param_1,param_2,1);
    iVar4 = (int)param_2[1];
    if (0 < iVar4) {
      uVar5 = 0;
      do {
        lVar3 = *param_2;
        lVar7 = (longlong)*(int *)(lVar3 + (longlong)(int)uVar5 * 4);
        if (*(int *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 4) == 0) {
          _Dst = (int *)(lVar3 + (longlong)(int)uVar5 * 4);
          iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4);
          if (iVar6 == -1) {
            iVar6 = ~uVar5 + iVar4;
            if (iVar6 != 0) {
              if (0 < iVar6) {
                iVar6 = 1;
              }
              memmove(_Dst,(void *)(lVar3 + (longlong)(iVar4 - iVar6) * 4),(longlong)iVar6 << 2);
              iVar4 = (int)param_2[1];
            }
            iVar4 = iVar4 + -1;
            *(int *)(param_2 + 1) = iVar4;
            uVar5 = uVar5 - 1;
          }
          else {
            *_Dst = iVar6;
            iVar4 = (int)param_2[1];
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}



// FUNCTION 146eaa92a FUN_146eaa92a body=124 status=ok
// SIG undefined FUN_146eaa92a(void)

void FUN_146eaa92a(longlong param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = (int *)*param_2;
  piVar5 = piVar1;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar4 = piVar1 + *(int *)(param_2 + 1);
    lVar2 = *(longlong *)(param_1 + 0xe0);
    piVar6 = piVar1;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      while (piVar5 = piVar6, *(uint *)(lVar3 + (longlong)*piVar5 * 4) == (param_3 & 0xff)) {
        piVar6 = piVar5 + 1;
        piVar5 = piVar4;
        if (piVar6 == piVar4) goto LAB_146eaa993;
      }
      while( true ) {
        piVar4 = piVar4 + -1;
        if (*(uint *)(lVar3 + (longlong)*piVar4 * 4) == (param_3 & 0xff)) break;
        if (piVar4 == piVar5) goto LAB_146eaa993;
      }
      *piVar5 = *piVar4;
      piVar6 = piVar5 + 1;
      piVar5 = piVar4;
    } while (piVar4 != piVar6);
  }
LAB_146eaa993:
  FUN_144a1a59e(param_2,(ulonglong)((longlong)piVar5 - (longlong)piVar1) >> 2,1);
  return;
}



// FUNCTION 146eaa9a6 FUN_146eaa9a6 body=501 status=ok
// SIG undefined FUN_146eaa9a6(void)

void FUN_146eaa9a6(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [47];
  char local_b9;
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0xe0);
  local_b9 = param_3;
  FUN_146eaa24a(param_1,param_2,1);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar7 = param_2[1];
  local_b8 = param_2;
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = *param_2;
    lVar10 = 0;
    do {
      iVar8 = *(int *)(lVar4 + lVar10);
      local_b0 = CONCAT44(local_b0._4_4_,iVar8);
      lVar5 = *(longlong *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar5 + (longlong)iVar8 * 4);
      plVar9 = (longlong *)(local_a0 + 4);
      plVar11 = &local_b0;
      if (iVar1 == 2) {
LAB_146eaaa70:
        FUN_1447cbafe(&local_98,plVar9,plVar11,0);
      }
      else {
        lVar6 = *(longlong *)(lVar2 + 0x10);
        local_a0._4_4_ = *(int *)(lVar6 + (longlong)iVar8 * 4);
        if ((iVar1 == 0) && (local_a0._4_4_ != -1)) {
          iVar8 = local_a0._4_4_;
          local_a0._4_4_ = *(int *)(lVar6 + (longlong)(int)local_a0._4_4_ * 4);
        }
        if ((local_a0._4_4_ == -1) && (*(int *)(lVar5 + (longlong)iVar8 * 4) == 1)) {
          if (local_b9 != '\0') {
            plVar9 = (longlong *)local_a0;
            goto LAB_146eaaa70;
          }
        }
        else if ((local_a0._4_4_ != (int)DAT_14c75f3b2) &&
                (*(int *)(lVar5 + (longlong)(int)local_a0._4_4_ * 4) == 2)) {
          plVar9 = (longlong *)local_a0;
          plVar11 = (longlong *)(local_a0 + 4);
          goto LAB_146eaaa70;
        }
      }
      lVar10 = lVar10 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar10);
  }
  FUN_140619b9c(&local_98,&local_b0);
  plVar9 = local_b8;
  if (&local_b0 == local_b8) {
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_b8 != 0) {
      FUN_1400020a8();
    }
    *plVar9 = local_b0;
    local_b0 = 0;
    *(undefined4 *)(plVar9 + 1) = local_a8;
    *(undefined4 *)((longlong)plVar9 + 0xc) = local_a4;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaab9c FUN_146eaab9c body=131 status=ok
// SIG undefined FUN_146eaab9c(void)

longlong * FUN_146eaab9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1);
    iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        if (*(int *)(plVar1[2] + lVar3 * 4) == -1) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_2,iVar2);
          }
          *(int *)(*param_2 + (longlong)iVar2 * 4) = (int)lVar3;
        }
        lVar3 = lVar3 + 1;
        iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
      } while (lVar3 < iVar2);
    }
  }
  return param_2;
}



// FUNCTION 146eaac20 FUN_146eaac20 body=10 status=ok
// SIG undefined FUN_146eaac20(void)

undefined8 * FUN_146eaac20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146eaac2a FUN_146eaac2a body=108 status=ok
// SIG undefined FUN_146eaac2a(void)

longlong * FUN_146eaac2a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1);
    iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_2,iVar3);
        }
        *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar2;
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
      } while (iVar2 < iVar3);
    }
  }
  return param_2;
}



// FUNCTION 146eaac96 FUN_146eaac96 body=254 status=ok
// SIG undefined FUN_146eaac96(void)

longlong *
FUN_146eaac96(longlong param_1,longlong *param_2,char param_3,float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    if (0 < iVar2) {
      uVar4 = (uint)param_4;
      iVar5 = 0;
      do {
        if (param_3 == '\0') {
          uVar3 = rand();
          fVar6 = (float)(uVar3 & 0x7fff) / 32767.0;
        }
        else {
          uVar4 = uVar4 * 0xbb38435 + 0x3619636b;
          fVar6 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
        }
        if (param_5 < fVar6) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return param_2;
}



// FUNCTION 146eaad94 FUN_146eaad94 body=290 status=ok
// SIG undefined FUN_146eaad94(void)

int ** FUN_146eaad94(longlong param_1,int **param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = (int *)0x0;
  param_2[1] = (int *)0x0;
  if (((*(longlong **)(param_1 + 0x38) == (longlong *)0x0) || (*(longlong *)(param_1 + 0xa8) == 0))
     || (lVar1 = *(longlong *)(param_1 + 0xe0), lVar1 == 0)) goto LAB_146eaadd7;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
  FUN_146eaa0d2(param_1,&local_38);
  if (&local_38 == param_2) {
    if (local_38 != (int *)0x0) {
      FUN_1400020a8();
      local_38 = *param_2;
      local_30 = *(int *)(param_2 + 1);
      goto LAB_146eaae2c;
    }
    local_38 = (int *)0x0;
    piVar5 = (int *)0x0;
  }
  else {
    *param_2 = local_38;
    *(int *)(param_2 + 1) = local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
LAB_146eaae2c:
    piVar5 = local_38;
    if (local_30 != 0) {
      piVar3 = local_38 + local_30;
      piVar4 = local_38;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        while (piVar5 = piVar4, *(int *)(lVar2 + (longlong)*piVar5 * 4) == 1) {
          piVar4 = piVar5 + 1;
          piVar5 = piVar3;
          if (piVar4 == piVar3) goto LAB_146eaae7e;
        }
        while( true ) {
          piVar3 = piVar3 + -1;
          if (*(int *)(lVar2 + (longlong)*piVar3 * 4) == 1) break;
          if (piVar3 == piVar5) goto LAB_146eaae7e;
        }
        *piVar5 = *piVar3;
        piVar4 = piVar5 + 1;
        piVar5 = piVar3;
      } while (piVar3 != piVar4);
    }
  }
LAB_146eaae7e:
  FUN_144a1a59e(param_2,(ulonglong)((longlong)piVar5 - (longlong)local_38) >> 2,1);
LAB_146eaadd7:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eaaeb8 FUN_146eaaeb8 body=290 status=ok
// SIG undefined FUN_146eaaeb8(void)

int ** FUN_146eaaeb8(longlong param_1,int **param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = (int *)0x0;
  param_2[1] = (int *)0x0;
  if (((*(longlong **)(param_1 + 0x38) == (longlong *)0x0) || (*(longlong *)(param_1 + 0xa8) == 0))
     || (lVar1 = *(longlong *)(param_1 + 0xe0), lVar1 == 0)) goto LAB_146eaaefb;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
  FUN_146eaa0d2(param_1,&local_38);
  if (&local_38 == param_2) {
    if (local_38 != (int *)0x0) {
      FUN_1400020a8();
      local_38 = *param_2;
      local_30 = *(int *)(param_2 + 1);
      goto LAB_146eaaf50;
    }
    local_38 = (int *)0x0;
    piVar5 = (int *)0x0;
  }
  else {
    *param_2 = local_38;
    *(int *)(param_2 + 1) = local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
LAB_146eaaf50:
    piVar5 = local_38;
    if (local_30 != 0) {
      piVar3 = local_38 + local_30;
      piVar4 = local_38;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        while (piVar5 = piVar4, *(int *)(lVar2 + (longlong)*piVar5 * 4) == 2) {
          piVar4 = piVar5 + 1;
          piVar5 = piVar3;
          if (piVar4 == piVar3) goto LAB_146eaafa2;
        }
        while( true ) {
          piVar3 = piVar3 + -1;
          if (*(int *)(lVar2 + (longlong)*piVar3 * 4) == 2) break;
          if (piVar3 == piVar5) goto LAB_146eaafa2;
        }
        *piVar5 = *piVar3;
        piVar4 = piVar5 + 1;
        piVar5 = piVar3;
      } while (piVar3 != piVar4);
    }
  }
LAB_146eaafa2:
  FUN_144a1a59e(param_2,(ulonglong)((longlong)piVar5 - (longlong)local_38) >> 2,1);
LAB_146eaaefb:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eaafdc FUN_146eaafdc body=577 status=ok
// SIG undefined FUN_146eaafdc(void)

void FUN_146eaafdc(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_180;
  undefined8 *local_170;
  code *local_168;
  undefined8 **local_160;
  undefined4 local_154;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (((param_1[7] != 0) && (param_1[0x15] != 0)) && (param_1[0x1c] != 0)) {
    puVar4 = (undefined8 *)FUN_146eab21e(*param_1);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_146eca9da(local_a0,puVar4);
      FUN_146eca9e2(local_a0,0);
      uVar3 = DAT_14c996af0;
      FUN_1446ddc76(&local_a8,"Proximity",1);
      FUN_146eab2fc(puVar4,local_a8,uVar3);
      FUN_14075a44e(&local_150,puVar4);
      lVar2 = param_2[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *param_2;
        lVar5 = 0;
        do {
          local_154 = *(undefined4 *)(lVar1 + lVar5);
          FUN_1447cbafe(&local_98,&local_170,&local_154,0);
          local_168 = FUN_1429fcc80;
          local_180 = 0;
          local_188 = param_3;
          local_170 = &local_98;
          local_160 = &local_170;
          FUN_146ecb5e0(local_a0,&local_150,local_154);
          lVar5 = lVar5 + 4;
        } while ((longlong)(int)lVar2 * 4 != lVar5);
      }
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_140619b9c(&local_98,&local_150);
  if (&local_150 == param_2) {
    if (local_150 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_150;
    local_150 = 0;
    *(undefined4 *)(param_2 + 1) = local_148;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_144;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eab21e FUN_146eab21e body=220 status=ok
// SIG undefined FUN_146eab21e(void)

undefined8 FUN_146eab21e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14001cc68(0x4c0,0x10);
  FUN_140b1d240(uVar2,&DAT_149e1e2f8);
  FUN_142a0992c(uVar2,&local_48);
  lVar1 = local_48;
  if ((longlong)(int)uStack_40 != 0) {
    lVar3 = 0;
    do {
      FUN_146ece8e2(uVar2,*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)uStack_40 * 8 != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14062fde4(param_1,uVar2,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146eab2fc FUN_146eab2fc body=227 status=ok
// SIG undefined FUN_146eab2fc(void)

undefined8 FUN_146eab2fc(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146eab308;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146eab308:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146eab3e0 FUN_146eab3e0 body=368 status=ok
// SIG undefined FUN_146eab3e0(void)

void FUN_146eab3e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 != 0) && (lVar4 = param_2[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *param_2;
    lVar6 = 0;
    cVar5 = DAT_14c75f3b2;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)*(int *)(lVar3 + lVar6) * 4);
      local_b0 = CONCAT44(local_b0._4_4_,iVar1);
      if (iVar1 != cVar5) {
        FUN_1447cbafe(&local_98,local_9c,&local_b0,0);
        cVar5 = DAT_14c75f3b2;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  FUN_140619b9c(&local_98,&local_b0);
  if (&local_b0 == param_2) {
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_b0;
    local_b0 = 0;
    *(undefined4 *)(param_2 + 1) = local_a8;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_a4;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eab552 FUN_146eab552 body=788 status=ok
// SIG undefined FUN_146eab552(void)

void FUN_146eab552(longlong param_1,longlong **param_2)

{
  longlong lVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  longlong **local_108;
  longlong *local_100;
  longlong local_f8;
  undefined1 local_ec [4];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar8 = *(longlong *)(param_1 + 0x70);
  local_108 = param_2;
  if ((lVar8 != 0) && ((longlong)*(int *)(param_2 + 1) != 0)) {
    plVar9 = *param_2;
    plVar6 = (longlong *)((longlong)plVar9 + (longlong)*(int *)(param_2 + 1) * 4);
    local_100 = plVar6;
    local_f8 = lVar8;
    do {
      local_bc = (int)*plVar9;
      lVar1 = *(longlong *)(lVar8 + 0x10);
      lVar4 = (longlong)local_bc * 0x50;
      if (*(int *)(lVar1 + 8 + lVar4) == *(int *)(lVar1 + 0x34 + lVar4)) {
        FUN_1447cbafe(&local_98,&local_e8,&local_bc,0);
      }
      else {
        plVar7 = (longlong *)(lVar1 + lVar4);
        plVar6 = plVar7 + 2;
        local_b8 = 0x100000000;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_b0 = plVar6;
        if ((int)plVar7[5] != 0) {
          FUN_1449c0562(&local_b8);
        }
        local_d0 = local_a8;
        local_c8 = local_a0;
        local_c4 = local_9c;
        local_e0 = local_b8;
        local_d8 = local_b0;
        uVar5 = *(uint *)(plVar7 + 5);
        local_b8 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
        local_a8 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
        local_a0 = uVar5 & 0xffffffe0;
        local_e8 = plVar7;
        local_b0 = plVar6;
        if (*(uint *)(plVar7 + 5) != uVar5) {
          FUN_1449c0562(&local_b8);
          uVar5 = local_a8._4_4_;
        }
        plVar3 = local_b0;
        plVar6 = local_100;
        lVar8 = local_f8;
        if ((local_e8 != plVar7 || local_d8 != local_b0) || local_d0._4_4_ != uVar5) {
          do {
            local_b8 = CONCAT44(local_b8._4_4_,
                                *(undefined4 *)(*local_e8 + (longlong)(int)local_d0._4_4_ * 0xc));
            FUN_1447cbafe(&local_98,local_ec,&local_b8,0);
            local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
            FUN_1449c0562(&local_e0);
            plVar6 = local_100;
            lVar8 = local_f8;
          } while (local_e8 != plVar7 || (local_d8 != plVar3 || local_d0._4_4_ != uVar5));
        }
      }
      plVar9 = (longlong *)((longlong)plVar9 + 4);
    } while (plVar9 != plVar6);
  }
  FUN_140619b9c(&local_98,&local_e8);
  pplVar2 = local_108;
  if (&local_e8 == local_108) {
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *pplVar2 = local_e8;
    local_e8 = (longlong *)0x0;
    *(undefined4 *)(pplVar2 + 1) = (undefined4)local_e0;
    *(uint *)((longlong)pplVar2 + 0xc) = local_e0._4_4_;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eab868 FUN_146eab868 body=797 status=ok
// SIG undefined FUN_146eab868(void)

void FUN_146eab868(longlong param_1,longlong **param_2)

{
  longlong lVar1;
  longlong **pplVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  longlong **local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined1 local_e4 [4];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f0 = *(longlong *)(param_1 + 0x38);
  local_108 = param_2;
  if (((local_f0 != 0) && (local_100 = *(longlong *)(param_1 + 0x70), local_100 != 0)) &&
     ((longlong)*(int *)(param_2 + 1) != 0)) {
    plVar5 = *param_2;
    local_f8 = (longlong *)((longlong)plVar5 + (longlong)*(int *)(param_2 + 1) * 4);
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(local_f0 + 0x10) + (longlong)(int)*plVar5 * 4);
      if (lVar3 != -1) {
        lVar1 = *(longlong *)(local_100 + 0x10);
        lVar3 = lVar3 * 0x50;
        lVar6 = lVar3 + 0x10 + lVar1;
        local_b8 = 0x100000000;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        local_b0 = lVar6;
        if (*(int *)(lVar6 + 0x18) != 0) {
          FUN_1449c0562(&local_b8);
        }
        plVar7 = (longlong *)(lVar1 + lVar3);
        local_c8 = local_a8;
        local_c0 = local_a0;
        local_bc = local_9c;
        local_d8 = local_b8;
        local_d0 = local_b0;
        uVar4 = *(uint *)(plVar7 + 5);
        local_b8 = CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
        local_a8 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
        local_a0 = uVar4 & 0xffffffe0;
        local_e0 = plVar7;
        local_b0 = lVar6;
        if (*(uint *)(plVar7 + 5) != uVar4) {
          FUN_1449c0562(&local_b8);
          uVar4 = local_a8._4_4_;
        }
        lVar3 = local_b0;
        if ((local_e0 != plVar7 || local_d0 != local_b0) || local_c8._4_4_ != uVar4) {
          do {
            local_b8 = CONCAT44(local_b8._4_4_,
                                *(undefined4 *)(*local_e0 + (longlong)(int)local_c8._4_4_ * 0xc));
            FUN_1447cbafe(&local_98,local_e4,&local_b8,0);
            local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
            FUN_1449c0562(&local_d8);
          } while (local_e0 != plVar7 || (local_d0 != lVar3 || local_c8._4_4_ != uVar4));
        }
      }
      plVar5 = (longlong *)((longlong)plVar5 + 4);
    } while (plVar5 != local_f8);
  }
  FUN_140619b9c(&local_98,&local_e0);
  pplVar2 = local_108;
  if (&local_e0 == local_108) {
    if (local_e0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *pplVar2 = local_e0;
    local_e0 = (longlong *)0x0;
    *(undefined4 *)(pplVar2 + 1) = (undefined4)local_d8;
    *(uint *)((longlong)pplVar2 + 0xc) = local_d8._4_4_;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eabb86 FUN_146eabb86 body=439 status=ok
// SIG undefined FUN_146eabb86(void)

void FUN_146eabb86(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar2 = *(longlong **)(param_1 + 0x38);
  local_b8 = param_2;
  if ((plVar2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0xa8), lVar3 != 0)) {
    iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
    if ((longlong)(int)local_b8[1] != 0) {
      piVar8 = (int *)*local_b8;
      piVar7 = piVar8 + (int)local_b8[1];
      do {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)*piVar8 * 4);
        local_b0 = local_b0 & 0xffffffff00000000;
        if (0 < iVar5) {
          iVar6 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar6 * 4) == iVar1) {
              FUN_1447cbafe(&local_98,local_9c,&local_b0,0);
              iVar6 = (int)local_b0;
            }
            iVar6 = iVar6 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          } while (iVar6 < iVar5);
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar7);
    }
  }
  FUN_140619b9c(&local_98,&local_b0);
  puVar4 = local_b8;
  if (&local_b0 == local_b8) {
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_b8 != 0) {
      FUN_1400020a8();
    }
    *puVar4 = local_b0;
    local_b0 = 0;
    *(undefined4 *)(puVar4 + 1) = local_a8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_a4;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eabd3e FUN_146eabd3e body=480 status=ok
// SIG undefined FUN_146eabd3e(void)

void FUN_146eabd3e(longlong *param_1,int param_2,char param_3,float param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  
  uVar9 = (uint)param_4;
  uVar1 = *(uint *)(param_1 + 1);
  if (param_3 == '\0') {
    uVar5 = rand();
    iVar4 = (int)(((float)(uVar5 & 0x7fff) / 32767.0) * 41.0);
    iVar8 = 0x28;
    if (iVar4 < 0x28) {
      iVar8 = iVar4;
    }
  }
  else {
    uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
    iVar8 = (int)(((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 41.0);
  }
  if (-10 < iVar8) {
    iVar4 = iVar8 + 9;
    if (iVar8 + 9 < 1) {
      iVar4 = 0;
    }
    iVar8 = 0;
    do {
      if (0 < (int)uVar1) {
        lVar13 = 0;
        lVar10 = (longlong)(int)(uVar1 - 1);
        uVar12 = (ulonglong)uVar1;
        do {
          iVar11 = (int)uVar12;
          if (param_3 == '\0') {
            if (-1 < lVar10) {
              uVar5 = rand();
              iVar6 = (int)((float)iVar11 * ((float)(uVar5 & 0x7fff) / 32767.0));
              if (iVar11 + -1 <= iVar6) {
                iVar6 = iVar11 + -1;
              }
              goto LAB_146eabe55;
            }
          }
          else if (-1 < lVar10) {
            uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
            iVar6 = (int)((float)iVar11 * ((float)(uVar9 >> 9 | 0x3f800000) + -1.0));
LAB_146eabe55:
            if (iVar6 != 0) {
              lVar3 = *param_1;
              lVar7 = (longlong)(iVar6 + (int)lVar13);
              uVar2 = *(undefined4 *)(lVar3 + lVar13 * 4);
              *(undefined4 *)(lVar3 + lVar13 * 4) = *(undefined4 *)(lVar3 + lVar7 * 4);
              *(undefined4 *)(lVar3 + lVar7 * 4) = uVar2;
            }
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + -1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      bVar14 = iVar8 != iVar4;
      iVar8 = iVar8 + 1;
    } while (bVar14);
  }
  fVar15 = (float)(int)param_1[1] * (float)param_2 * 0.01;
  FUN_144a1a59e(param_1,(int)ROUND(fVar15 + fVar15 + 0.5) >> 1,1);
  return;
}



// FUNCTION 146eabf1e FUN_146eabf1e body=434 status=ok
// SIG undefined FUN_146eabf1e(void)

longlong *
FUN_146eabf1e(undefined8 *param_1,longlong *param_2,float param_3,float param_4,char param_5,
             char param_6,char param_7)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  char local_78;
  char local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_7 == '\0') {
    local_70 = param_6;
    local_78 = param_5;
    FUN_146eac0d2(param_1,param_2,param_3 * param_3 * param_3,param_4 * param_4 * param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
  }
  *param_2 = 0;
  param_2[1] = 0;
  puVar4 = (undefined8 *)FUN_146eab21e(*param_1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_146ec1438(puVar4);
    uVar2 = DAT_14c9974a8;
    FUN_1446ddc76(&local_68,&DAT_149eda610,1);
    plVar5 = (longlong *)FUN_146eac244(puVar4,local_68,uVar2);
    if ((plVar5 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5), 0 < iVar3)) {
      lVar6 = 0;
      do {
        fVar1 = *(float *)(plVar5[2] + lVar6 * 4);
        if (param_6 == '\0') {
          if (param_5 == '\0') {
            if ((fVar1 < param_3) || (param_4 < fVar1)) goto LAB_146eac079;
          }
          else if ((fVar1 <= param_3) || (param_4 <= fVar1)) goto LAB_146eac079;
        }
        else if (param_5 == '\0') {
          if ((param_3 < fVar1) && (fVar1 < param_4)) goto LAB_146eac079;
        }
        else if ((param_3 <= fVar1) && (fVar1 <= param_4)) {
LAB_146eac079:
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_2,iVar3);
          }
          *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)lVar6;
        }
        lVar6 = lVar6 + 1;
        iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
      } while (lVar6 < iVar3);
    }
    (**(code **)*puVar4)(puVar4,1);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eac0d2 FUN_146eac0d2 body=368 status=ok
// SIG undefined FUN_146eac0d2(void)

longlong *
FUN_146eac0d2(undefined8 *param_1,longlong *param_2,float param_3,float param_4,char param_5,
             char param_6)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  puVar4 = (undefined8 *)FUN_146eab21e(*param_1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_146ec1438(puVar4);
    uVar2 = DAT_14c9974a8;
    FUN_1446ddc76(&local_68,"Volume",1);
    plVar5 = (longlong *)FUN_146eac244(puVar4,local_68,uVar2);
    if ((plVar5 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5), 0 < iVar3)) {
      lVar6 = 0;
      do {
        fVar1 = *(float *)(plVar5[2] + lVar6 * 4);
        if (param_6 == '\0') {
          if (param_5 == '\0') goto joined_r0x000146eac1f2;
          if ((fVar1 <= param_3) || (param_4 <= fVar1)) goto LAB_146eac1f9;
        }
        else {
          if (param_5 == '\0') {
            if ((fVar1 <= param_3) || (param_4 <= fVar1)) goto LAB_146eac21e;
          }
          else {
joined_r0x000146eac1f2:
            if ((fVar1 < param_3) || (param_4 < fVar1)) goto LAB_146eac21e;
          }
LAB_146eac1f9:
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_2,iVar3);
          }
          *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)lVar6;
        }
LAB_146eac21e:
        lVar6 = lVar6 + 1;
        iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
      } while (lVar6 < iVar3);
    }
    (**(code **)*puVar4)(puVar4,1);
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eac244 FUN_146eac244 body=274 status=ok
// SIG undefined FUN_146eac244(void)

longlong FUN_146eac244(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eac356 FUN_146eac356 body=168 status=ok
// SIG undefined FUN_146eac356(void)

undefined8 * FUN_146eac356(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_3;
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      iVar1 = *(int *)(lVar3 + lVar7);
      plVar6 = (longlong *)
               FUN_140147222(param_2,*(undefined4 *)
                                      (*(longlong *)(lVar4 + 0x10) + (longlong)iVar1 * 4));
      iVar2 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar6,iVar2);
      }
      *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar1;
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  return param_2;
}



// FUNCTION 146eac3fe FUN_146eac3fe body=1251 status=ok
// SIG undefined FUN_146eac3fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_146eac3fe(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  double dVar20;
  undefined1 auVar18 [16];
  double dVar21;
  double dVar22;
  undefined1 auStack_648 [44];
  int local_61c;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  longlong local_5b8;
  int local_5b0;
  undefined1 local_5a8 [64];
  undefined8 local_568;
  undefined8 local_4f8;
  undefined1 local_4b8 [968];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    iVar9 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e9b7f8(local_4b8,*param_1);
    FUN_146ea80f4(local_5a8,*param_1);
    auVar7 = _DAT_149934d80;
    local_61c = iVar9;
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        FUN_146e9c26e(local_4b8,&local_5b8,iVar9);
        lVar8 = local_5b8;
        lVar10 = (longlong)local_5b0;
        if (lVar10 == 0) {
          if (param_5 != '\0') goto LAB_146eac8ad;
        }
        else {
          iVar12 = 0;
          lVar11 = 0;
          while( true ) {
            fVar1 = *(float *)(lVar8 + 8 + lVar11);
            fVar2 = *(float *)(lVar8 + 4 + lVar11);
            fVar3 = *(float *)(lVar8 + lVar11);
            FUN_146eba115(&local_618,local_4f8,local_568,iVar9);
            dVar5 = (double)fVar3 * local_5d8;
            dVar6 = (double)fVar2 * dStack_5d0;
            dVar14 = (double)fVar1 * local_5c8;
            dVar17 = dVar6 * local_618 - dVar5 * dStack_610;
            dVar19 = dVar14 * dStack_610 - dVar6 * local_608;
            dVar20 = dVar5 * local_608 - local_618 * dVar14;
            dVar19 = dVar19 + dVar19;
            dVar20 = dVar20 + dVar20;
            dVar17 = dVar17 + dVar17;
            dVar15 = ((dVar17 * dStack_610 - dVar20 * local_608) + dStack_600 * dVar19 + dVar5 +
                     local_5f8) - param_4[4];
            dVar16 = ((local_608 * dVar19 - local_618 * dVar17) + dStack_600 * dVar20 + dVar6 +
                     dStack_5f0) - param_4[5];
            dVar17 = (dVar17 * dStack_600 + dVar14 + (dVar20 * local_618 - dVar19 * dStack_610) +
                     local_5e8) - param_4[6];
            dVar5 = -*param_4;
            dVar6 = -param_4[1];
            dVar21 = param_4[2] * -1.0;
            dVar22 = param_4[3] * 1.0;
            dVar19 = dVar15 * dVar21 - dVar5 * dVar17;
            dVar20 = dVar16 * dVar5 - dVar6 * dVar15;
            dVar14 = dVar17 * dVar6 - dVar21 * dVar16;
            dVar14 = dVar14 + dVar14;
            dVar19 = dVar19 + dVar19;
            dVar20 = dVar20 + dVar20;
            auVar4 = *(undefined1 (*) [16])(param_4 + 8);
            auVar18 = divpd(auVar7,auVar4);
            dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar18._0_8_
                             ) * ((dVar20 * dVar6 - dVar19 * dVar21) + dVar22 * dVar14 + dVar15);
            dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar18._8_8_
                             ) * (*param_4 * dVar20 + dVar21 * dVar14 + dVar22 * dVar19 + dVar16);
            if ((((dVar15 < *param_3 || dVar15 == *param_3) || (param_3[3] <= dVar15)) ||
                (dVar16 < param_3[1] || dVar16 == param_3[1])) ||
               ((param_3[4] <= dVar16 ||
                (dVar17 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                                  (ulonglong)(1.0 / param_4[10])) *
                          (dVar17 + dVar22 * dVar20 + (dVar19 * dVar5 - dVar14 * dVar6)),
                dVar17 < param_3[2] || dVar17 == param_3[2])))) break;
            iVar12 = iVar12 + (uint)(dVar17 < param_3[5]);
            if ((param_3[5] <= dVar17) ||
               ((param_5 == '\0' ||
                (bVar13 = lVar10 * 0xc + -0xc == lVar11, lVar11 = lVar11 + 0xc, bVar13)))) break;
          }
          if (param_5 == '\0') {
            if (0 < iVar12) goto LAB_146eac8ad;
          }
          else if (iVar12 == local_5b0) {
LAB_146eac8ad:
            iVar12 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar12 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
              FUN_1446f48e2(param_2,iVar12);
            }
            *(int *)(*param_2 + (longlong)iVar12 * 4) = iVar9;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != local_61c);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eac8e2 FUN_146eac8e2 body=1168 status=ok
// SIG undefined FUN_146eac8e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_146eac8e2(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auStack_3d8 [32];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_378;
  double dStack_370;
  double local_368;
  longlong local_350;
  int local_348;
  undefined1 local_340 [64];
  undefined8 local_300;
  undefined8 local_290;
  undefined1 local_250 [352];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    uVar5 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e99c1c(local_250,*param_1);
    FUN_146ea80f4(local_340,*param_1);
    FUN_146e99f90(local_250,&local_350);
    auVar4 = _DAT_149934d80;
    if (0 < (int)uVar5) {
      uVar7 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(param_1[0x23] + 0x10) + uVar7 * 4);
        lVar6 = (longlong)iVar3;
        if ((-1 < lVar6) && (iVar3 < local_348)) {
          pdVar1 = (double *)(local_350 + lVar6 * 0x18);
          dVar17 = *pdVar1;
          dVar18 = pdVar1[1];
          dVar15 = *(double *)(local_350 + 0x10 + lVar6 * 0x18);
          FUN_146eba115(&local_3b8,local_290,local_300,uVar7 & 0xffffffff);
          dVar17 = dVar17 * local_378;
          dVar18 = dVar18 * dStack_370;
          dVar15 = dVar15 * local_368;
          dVar10 = dVar18 * local_3b8 - dVar17 * dStack_3b0;
          dVar11 = dVar15 * dStack_3b0 - dVar18 * local_3a8;
          dVar12 = dVar17 * local_3a8 - local_3b8 * dVar15;
          dVar11 = dVar11 + dVar11;
          dVar12 = dVar12 + dVar12;
          dVar10 = dVar10 + dVar10;
          dVar13 = ((dVar10 * dStack_3b0 - dVar12 * local_3a8) + dStack_3a0 * dVar11 + dVar17 +
                   local_398) - param_4[4];
          dVar14 = ((local_3a8 * dVar11 - local_3b8 * dVar10) + dStack_3a0 * dVar12 + dVar18 +
                   dStack_390) - param_4[5];
          dVar11 = (dVar10 * dStack_3a0 + dVar15 + (dVar12 * local_3b8 - dVar11 * dStack_3b0) +
                   local_388) - param_4[6];
          auVar2 = *(undefined1 (*) [16])(param_4 + 8);
          dVar15 = -*param_4;
          dVar12 = -param_4[1];
          dVar8 = param_4[2] * -1.0;
          dVar9 = param_4[3] * 1.0;
          dVar10 = dVar13 * dVar8 - dVar15 * dVar11;
          dVar17 = dVar14 * dVar15 - dVar12 * dVar13;
          dVar18 = dVar11 * dVar12 - dVar8 * dVar14;
          dVar18 = dVar18 + dVar18;
          dVar10 = dVar10 + dVar10;
          dVar17 = dVar17 + dVar17;
          auVar16 = divpd(auVar4,auVar2);
          dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_)
                   * ((dVar17 * dVar12 - dVar10 * dVar8) + dVar9 * dVar18 + dVar13);
          dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar16._8_8_) *
                  (*param_4 * dVar17 + dVar8 * dVar18 + dVar9 * dVar10 + dVar14);
          if ((*param_3 <= dVar13 && dVar13 != *param_3) && (dVar13 < param_3[3])) {
            if ((param_3[1] <= dVar8 && dVar8 != param_3[1]) && (dVar8 < param_3[4])) {
              dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                               (ulonglong)(1.0 / param_4[10])) *
                       (dVar11 + dVar9 * dVar17 + (dVar10 * dVar15 - dVar18 * dVar12));
              if ((param_3[2] <= dVar15 && dVar15 != param_3[2]) && (dVar15 < param_3[5])) {
                iVar3 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                  FUN_1446f48e2(param_2,iVar3);
                }
                *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)uVar7;
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    if (local_350 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eacd74 FUN_146eacd74 body=471 status=ok
// SIG undefined FUN_146eacd74(void)

longlong * FUN_146eacd74(undefined8 *param_1,longlong *param_2,double *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_3b8 [40];
  longlong local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  undefined1 local_350 [56];
  undefined1 local_318 [104];
  undefined1 local_2b0 [64];
  undefined8 local_270;
  undefined8 local_200;
  undefined1 local_1c0 [64];
  longlong local_180;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e99c1c(local_1c0,*param_1);
    FUN_146ea80f4(local_2b0,*param_1);
    if (0 < (int)uVar3) {
      local_390 = local_180;
      lVar5 = 0;
      uVar4 = 0;
      do {
        lVar2 = *(longlong *)(local_390 + 0x10);
        FUN_146eba115(local_318,local_200,local_270,uVar4 & 0xffffffff);
        FUN_144a1c3a2(lVar2 + lVar5,local_350,local_318);
        FUN_146eacf4c(local_350,&local_388,param_4);
        if (((((*param_3 < local_388) && (local_388 < param_3[3])) && (param_3[1] < local_380)) &&
            ((((local_380 < param_3[4] && (param_3[2] < local_378)) &&
              ((local_378 < param_3[5] && ((*param_3 < local_370 && (local_370 < param_3[3])))))) &&
             (param_3[1] < local_368)))) &&
           (((local_368 < param_3[4] && (param_3[2] < local_360)) && (local_360 < param_3[5])))) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_2,iVar1);
          }
          *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)uVar4;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar3 != uVar4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eacf4c FUN_146eacf4c body=1047 status=ok
// SIG undefined FUN_146eacf4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146eacf4c(undefined8 *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1b8 [32];
  double local_198;
  double dStack_190;
  double local_188 [6];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_188[4] = (double)param_1[2];
  local_188[2] = (double)*param_1;
  local_188[3] = (double)param_1[1];
  local_150 = param_1[5];
  local_188[5] = (double)*param_1;
  local_158 = param_1[1];
  local_138 = param_1[2];
  local_140 = param_1[4];
  local_148 = local_188[5];
  local_130 = param_1[3];
  local_128 = local_158;
  local_120 = local_138;
  local_118 = local_130;
  local_110 = local_140;
  local_108 = local_138;
  local_100 = local_130;
  local_f8 = local_158;
  local_f0 = local_150;
  local_e8 = local_188[5];
  local_e0 = local_140;
  local_d8 = local_150;
  local_d0 = param_1[3];
  uStack_c8 = param_1[4];
  local_c0 = param_1[5];
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  local_188[0] = param_3[4];
  local_188[1] = param_3[5];
  local_198 = param_3[6];
  dStack_190 = param_3[7];
  dVar10 = -*param_3;
  dVar11 = -param_3[1];
  dVar12 = param_3[2] * -1.0;
  dVar13 = param_3[3] * 1.0;
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  dVar7 = param_3[10];
  auVar17 = divpd(_DAT_149934d80,auVar1);
  auVar15._8_4_ = 0;
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = 0x3ff00000;
  auVar15 = divpd(ZEXT816(0x3ff0000000000000),auVar15);
  bVar9 = true;
  dVar14 = 0.0;
  lVar8 = 0x10;
  dVar16 = 0.0;
  dVar6 = 0.0;
  do {
    dVar4 = *(double *)((longlong)local_188 + lVar8) - local_188[0];
    dVar5 = *(double *)((longlong)local_188 + lVar8 + 8) - local_188[1];
    dVar19 = *(double *)((longlong)local_188 + lVar8 + 0x10) - local_198;
    dVar18 = dVar5 * dVar10 - dVar11 * dVar4;
    dVar3 = dVar19 * dVar11 - dVar12 * dVar5;
    dVar20 = dVar4 * dVar12 - dVar19 * dVar10;
    dVar3 = dVar3 + dVar3;
    dVar20 = dVar20 + dVar20;
    dVar18 = dVar18 + dVar18;
    dVar4 = ((dVar18 * dVar11 - dVar20 * dVar12) + dVar13 * dVar3 + dVar4) *
            (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_);
    dVar5 = ((dVar12 * dVar3 - dVar10 * dVar18) + dVar13 * dVar20 + dVar5) *
            (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_);
    dVar19 = (dVar18 * dVar13 + dVar19 + (dVar20 * dVar10 - dVar3 * dVar11)) *
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar7)) & auVar15._0_8_);
    if (bVar9) {
      auVar2._8_4_ = SUB84(dVar5,0);
      auVar2._0_8_ = dVar4;
      auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 3) = auVar2;
      param_2[5] = dVar19;
      *param_2 = param_2[3];
      param_2[1] = param_2[4];
      param_2[2] = param_2[5];
      dVar14 = dVar5;
      dVar16 = dVar4;
    }
    else {
      dVar18 = *param_2;
      if (dVar4 <= *param_2) {
        dVar18 = dVar4;
      }
      *param_2 = dVar18;
      dVar18 = param_2[1];
      if (dVar5 <= param_2[1]) {
        dVar18 = dVar5;
      }
      param_2[1] = dVar18;
      dVar18 = param_2[2];
      if (dVar19 <= param_2[2]) {
        dVar18 = dVar19;
      }
      param_2[2] = dVar18;
      if (dVar16 <= dVar4) {
        dVar16 = dVar4;
      }
      param_2[3] = dVar16;
      if (dVar14 <= dVar5) {
        dVar14 = dVar5;
      }
      param_2[4] = dVar14;
      if (dVar6 <= dVar19) {
        dVar6 = dVar19;
      }
      dVar19 = dVar6;
      param_2[5] = dVar19;
    }
    lVar8 = lVar8 + 0x18;
    bVar9 = false;
    dVar6 = dVar19;
  } while (lVar8 != 0xd0);
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ead364 FUN_146ead364 body=1225 status=ok
// SIG undefined FUN_146ead364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_146ead364(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_648 [36];
  int local_624;
  longlong *local_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  longlong local_5b8;
  int local_5b0;
  undefined1 local_5a8 [64];
  undefined8 local_568;
  undefined8 local_4f8;
  undefined1 local_4b8 [968];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    iVar7 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e9b7f8(local_4b8,*param_1);
    FUN_146ea80f4(local_5a8,*param_1);
    auVar5 = _DAT_149934d80;
    local_624 = iVar7;
    if (0 < iVar7) {
      iVar7 = 0;
      local_620 = param_2;
      do {
        FUN_146e9c26e(local_4b8,&local_5b8,iVar7);
        lVar6 = local_5b8;
        lVar8 = (longlong)local_5b0;
        if (lVar8 == 0) {
          if (param_5 != '\0') goto LAB_146ead7f9;
        }
        else {
          iVar10 = 0;
          lVar9 = 0;
          do {
            fVar1 = *(float *)(lVar6 + 8 + lVar9);
            fVar2 = *(float *)(lVar6 + 4 + lVar9);
            fVar3 = *(float *)(lVar6 + lVar9);
            FUN_146eba115(&local_618,local_4f8,local_568,iVar7);
            dVar14 = (double)fVar3 * local_5d8;
            dVar16 = (double)fVar2 * dStack_5d0;
            dVar12 = (double)fVar1 * local_5c8;
            dVar18 = dVar16 * local_618 - dVar14 * dStack_610;
            dVar20 = dVar12 * dStack_610 - dVar16 * local_608;
            dVar22 = dVar14 * local_608 - local_618 * dVar12;
            dVar20 = dVar20 + dVar20;
            dVar22 = dVar22 + dVar22;
            dVar18 = dVar18 + dVar18;
            dVar15 = ((dVar18 * dStack_610 - dVar22 * local_608) + dStack_600 * dVar20 + dVar14 +
                     local_5f8) - param_4[4];
            dVar17 = ((local_608 * dVar20 - local_618 * dVar18) + dStack_600 * dVar22 + dVar16 +
                     dStack_5f0) - param_4[5];
            dVar18 = (dVar18 * dStack_600 + dVar12 + (dVar22 * local_618 - dVar20 * dStack_610) +
                     local_5e8) - param_4[6];
            dVar14 = -*param_4;
            dVar16 = -param_4[1];
            dVar19 = param_4[2] * -1.0;
            dVar21 = param_4[3] * 1.0;
            dVar22 = dVar15 * dVar19 - dVar14 * dVar18;
            dVar12 = dVar17 * dVar14 - dVar16 * dVar15;
            dVar20 = dVar18 * dVar16 - dVar19 * dVar17;
            dVar20 = dVar20 + dVar20;
            dVar22 = dVar22 + dVar22;
            dVar12 = dVar12 + dVar12;
            auVar4 = *(undefined1 (*) [16])(param_4 + 8);
            auVar13 = divpd(auVar5,auVar4);
            dVar14 = param_3[2] -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                             (ulonglong)(1.0 / param_4[10])) *
                     (dVar21 * dVar12 + dVar18 + (dVar22 * dVar14 - dVar20 * dVar16));
            dVar18 = *param_3 -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar13._0_8_
                             ) * ((dVar12 * dVar16 - dVar22 * dVar19) + dVar21 * dVar20 + dVar15);
            dVar16 = param_3[1] -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar13._8_8_
                             ) * (*param_4 * dVar12 + dVar19 * dVar20 + dVar21 * dVar22 + dVar17);
            dVar14 = dVar14 * dVar14 + dVar18 * dVar18 + dVar16 * dVar16;
            dVar18 = (param_3[3] + 9.999999747378752e-05) * (param_3[3] + 9.999999747378752e-05);
            iVar10 = (iVar10 + 1) - (uint)(dVar18 < dVar14);
            if ((dVar18 < dVar14) || (param_5 == '\0')) break;
            bVar11 = lVar8 * 0xc + -0xc != lVar9;
            lVar9 = lVar9 + 0xc;
          } while (bVar11);
          param_2 = local_620;
          if (param_5 == '\0') {
            if (iVar10 != 0) goto LAB_146ead7f9;
          }
          else if (iVar10 == local_5b0) {
LAB_146ead7f9:
            iVar10 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
              FUN_1446f48e2(param_2,iVar10);
            }
            *(int *)(*param_2 + (longlong)iVar10 * 4) = iVar7;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != local_624);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ead82e FUN_146ead82e body=1117 status=ok
// SIG undefined FUN_146ead82e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_146ead82e(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_3d8 [32];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_378;
  double dStack_370;
  double local_368;
  longlong local_350 [2];
  undefined1 local_340 [64];
  undefined8 local_300;
  undefined8 local_290;
  undefined1 local_250 [352];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    uVar5 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e99c1c(local_250,*param_1);
    FUN_146ea80f4(local_340,*param_1);
    FUN_146e99f90(local_250,local_350);
    auVar4 = _DAT_149934d80;
    if (0 < (int)uVar5) {
      lVar6 = 0x10;
      uVar7 = 0;
      do {
        pdVar1 = (double *)(local_350[0] + -0x10 + lVar6);
        dVar12 = *pdVar1;
        dVar17 = pdVar1[1];
        dVar8 = *(double *)(local_350[0] + lVar6);
        FUN_146eba115(&local_3b8,local_290,local_300,uVar7 & 0xffffffff);
        dVar12 = dVar12 * local_378;
        dVar17 = dVar17 * dStack_370;
        dVar8 = dVar8 * local_368;
        dVar10 = dVar17 * local_3b8 - dVar12 * dStack_3b0;
        dVar13 = dVar8 * dStack_3b0 - dVar17 * local_3a8;
        dVar18 = dVar12 * local_3a8 - local_3b8 * dVar8;
        dVar13 = dVar13 + dVar13;
        dVar18 = dVar18 + dVar18;
        dVar10 = dVar10 + dVar10;
        dVar11 = ((dVar10 * dStack_3b0 - dVar18 * local_3a8) + dStack_3a0 * dVar13 + dVar12 +
                 local_398) - param_4[4];
        dVar14 = ((local_3a8 * dVar13 - local_3b8 * dVar10) + dStack_3a0 * dVar18 + dVar17 +
                 dStack_390) - param_4[5];
        dVar18 = (dVar10 * dStack_3a0 + dVar8 + (dVar18 * local_3b8 - dVar13 * dStack_3b0) +
                 local_388) - param_4[6];
        dVar8 = -*param_4;
        dVar12 = -param_4[1];
        dVar15 = param_4[2] * -1.0;
        dVar16 = param_4[3] * 1.0;
        dVar13 = dVar11 * dVar15 - dVar8 * dVar18;
        dVar17 = dVar14 * dVar8 - dVar12 * dVar11;
        dVar10 = dVar18 * dVar12 - dVar15 * dVar14;
        dVar10 = dVar10 + dVar10;
        dVar13 = dVar13 + dVar13;
        dVar17 = dVar17 + dVar17;
        auVar2 = *(undefined1 (*) [16])(param_4 + 8);
        auVar9 = divpd(auVar4,auVar2);
        dVar18 = param_3[2] -
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                         (ulonglong)(1.0 / param_4[10])) *
                 (dVar16 * dVar17 + dVar18 + (dVar13 * dVar8 - dVar10 * dVar12));
        dVar8 = *param_3 -
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar9._0_8_) *
                ((dVar17 * dVar12 - dVar13 * dVar15) + dVar16 * dVar10 + dVar11);
        dVar12 = param_3[1] -
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar9._8_8_) *
                 (*param_4 * dVar17 + dVar15 * dVar10 + dVar16 * dVar13 + dVar14);
        if (dVar18 * dVar18 + dVar8 * dVar8 + dVar12 * dVar12 <=
            (param_3[3] + 9.999999747378752e-05) * (param_3[3] + 9.999999747378752e-05)) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_2,iVar3);
          }
          *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)uVar7;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar5 != uVar7);
    }
    if (local_350[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eadc8c FUN_146eadc8c body=1209 status=ok
// SIG undefined FUN_146eadc8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_146eadc8c(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_3e8 [32];
  ulonglong local_3c8;
  longlong local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_378;
  double dStack_370;
  double local_368;
  longlong local_350;
  int local_348;
  undefined1 local_340 [64];
  undefined8 local_300;
  undefined8 local_290;
  undefined1 local_250 [64];
  longlong local_210;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    uVar5 = (**(code **)(*(longlong *)param_1[7] + 0x60))();
    FUN_146e99c1c(local_250,*param_1);
    FUN_146ea80f4(local_340,*param_1);
    auVar4 = _DAT_149934d80;
    if (0 < (int)uVar5) {
      local_3c0 = local_210;
      uVar8 = 0;
      local_3c8 = (ulonglong)uVar5;
      do {
        FUN_146e9a384(&local_350,uVar8 * 0x38 + *(longlong *)(local_3c0 + 0x10));
        iVar7 = 0;
        if (0 < local_348) {
          iVar7 = 0;
          lVar9 = 0x10;
          lVar6 = 1;
          do {
            FUN_146eba115(&local_3b8,local_290,local_300,uVar8 & 0xffffffff);
            pdVar1 = (double *)(local_350 + -0x10 + lVar9);
            dVar12 = *pdVar1 * local_378;
            dVar14 = pdVar1[1] * dStack_370;
            dVar10 = *(double *)(local_350 + lVar9) * local_368;
            dVar18 = dVar14 * local_3b8 - dVar12 * dStack_3b0;
            dVar19 = dVar10 * dStack_3b0 - dVar14 * local_3a8;
            dVar20 = dVar12 * local_3a8 - local_3b8 * dVar10;
            dVar19 = dVar19 + dVar19;
            dVar20 = dVar20 + dVar20;
            dVar18 = dVar18 + dVar18;
            dVar13 = ((dVar18 * dStack_3b0 - dVar20 * local_3a8) + dStack_3a0 * dVar19 + dVar12 +
                     local_398) - param_4[4];
            dVar15 = ((local_3a8 * dVar19 - local_3b8 * dVar18) + dStack_3a0 * dVar20 + dVar14 +
                     dStack_390) - param_4[5];
            dVar20 = (dVar18 * dStack_3a0 + dVar10 + (dVar20 * local_3b8 - dVar19 * dStack_3b0) +
                     local_388) - param_4[6];
            dVar18 = -*param_4;
            dVar10 = -param_4[1];
            dVar16 = param_4[2] * -1.0;
            dVar17 = param_4[3] * 1.0;
            dVar19 = dVar13 * dVar16 - dVar18 * dVar20;
            dVar12 = dVar15 * dVar18 - dVar10 * dVar13;
            dVar14 = dVar20 * dVar10 - dVar16 * dVar15;
            dVar14 = dVar14 + dVar14;
            dVar19 = dVar19 + dVar19;
            dVar12 = dVar12 + dVar12;
            auVar2 = *(undefined1 (*) [16])(param_4 + 8);
            auVar11 = divpd(auVar4,auVar2);
            dVar20 = param_3[2] -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                             (ulonglong)(1.0 / param_4[10])) *
                     (dVar17 * dVar12 + dVar20 + (dVar19 * dVar18 - dVar14 * dVar10));
            dVar18 = *param_3 -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar11._0_8_
                             ) * ((dVar12 * dVar10 - dVar19 * dVar16) + dVar17 * dVar14 + dVar13);
            dVar10 = param_3[1] -
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar11._8_8_
                             ) * (*param_4 * dVar12 + dVar16 * dVar14 + dVar17 * dVar19 + dVar15);
            dVar10 = dVar20 * dVar20 + dVar18 * dVar18 + dVar10 * dVar10;
            dVar18 = (param_3[3] + 9.999999747378752e-05) * (param_3[3] + 9.999999747378752e-05);
            iVar7 = (iVar7 + 1) - (uint)(dVar18 < dVar10);
            if (dVar18 < dVar10) break;
            lVar9 = lVar9 + 0x18;
            bVar3 = lVar6 < local_348;
            lVar6 = lVar6 + 1;
          } while (bVar3);
        }
        if (iVar7 == local_348) {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(int *)(*param_2 + (longlong)iVar7 * 4) = (int)uVar8;
        }
        if (local_350 != 0) {
          FUN_1400020a8();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_3c8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eae146 FUN_146eae146 body=416 status=ok
// SIG undefined FUN_146eae146(void)

longlong *
FUN_146eae146(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             float param_5,float param_6,char param_7,char param_8)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  puVar7 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if ((int)param_3[1] != 0) {
    puVar5 = (undefined2 *)*param_3;
  }
  uVar2 = *param_1;
  FUN_1446f470e(&local_78,puVar5,1);
  if ((int)param_4[1] != 0) {
    puVar7 = (undefined2 *)*param_4;
  }
  FUN_1446f470e(&local_80,puVar7,1);
  plVar4 = (longlong *)FUN_140b35f8c(uVar2,local_80,local_78);
  if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4), 0 < iVar3)) {
    lVar6 = 0;
    do {
      fVar1 = *(float *)(plVar4[2] + lVar6 * 4);
      if (param_8 == '\0') {
        if (param_7 == '\0') {
          if ((fVar1 < param_5) || (param_6 < fVar1)) goto LAB_146eae252;
        }
        else if ((fVar1 <= param_5) || (param_6 <= fVar1)) goto LAB_146eae252;
      }
      else if (param_7 == '\0') {
        if ((param_5 < fVar1) && (fVar1 < param_6)) goto LAB_146eae252;
      }
      else if ((param_5 <= fVar1) && (fVar1 <= param_6)) {
LAB_146eae252:
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_2,iVar3);
        }
        *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)lVar6;
      }
      lVar6 = lVar6 + 1;
      iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
    } while (lVar6 < iVar3);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146eae2e8 FUN_146eae2e8 body=419 status=ok
// SIG undefined FUN_146eae2e8(void)

longlong *
FUN_146eae2e8(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,int param_5,
             int param_6,char param_7,char param_8)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  puVar8 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if ((int)param_3[1] != 0) {
    puVar6 = (undefined2 *)*param_3;
  }
  uVar1 = *param_1;
  local_68 = param_3;
  FUN_1446f470e(&local_50,puVar6,1);
  if ((int)param_4[1] != 0) {
    puVar8 = (undefined2 *)*param_4;
  }
  local_60 = param_4;
  FUN_1446f470e(&local_58,puVar8,1);
  plVar4 = (longlong *)FUN_1401c0c0c(uVar1,local_58,local_50);
  if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4), 0 < iVar3)) {
    lVar7 = 0;
    do {
      iVar3 = *(int *)(plVar4[2] + lVar7 * 4);
      if (param_8 == '\0') {
        if (param_7 == '\0') {
          bVar5 = param_5 <= iVar3;
          bVar2 = iVar3 <= param_6;
        }
        else {
          bVar5 = param_5 < iVar3;
          bVar2 = iVar3 < param_6;
        }
        bVar5 = (bool)(bVar5 & bVar2);
      }
      else {
        if (param_7 == '\0') {
          bVar2 = iVar3 <= param_5;
          bVar5 = param_6 <= iVar3;
        }
        else {
          bVar2 = iVar3 < param_5;
          bVar5 = param_6 < iVar3;
        }
        bVar5 = (bool)(bVar5 | bVar2);
      }
      if (!bVar5) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_2,iVar3);
        }
        *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)lVar7;
      }
      lVar7 = lVar7 + 1;
      iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
    } while (lVar7 < iVar3);
  }
  if (*local_68 != 0) {
    FUN_1400020a8();
  }
  if (*local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eae48c FUN_146eae48c body=196 status=ok
// SIG undefined FUN_146eae48c(void)

undefined8 * FUN_146eae48c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_1[0x2a] != 0) && (lVar3 = param_1[0x31], lVar3 != 0)) &&
     (lVar4 = param_1[0x38], lVar4 != 0)) {
    uVar5 = FUN_1401f66f6(*param_1);
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      piVar7 = (int *)*param_3;
      piVar1 = piVar7 + *(int *)(param_3 + 1);
      do {
        if (0 < (int)uVar5) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar6);
            if ((iVar2 <= *piVar7) &&
               (*piVar7 < iVar2 + *(int *)(*(longlong *)(lVar4 + 0x10) + lVar6))) {
              FUN_1449e3bb0(param_2);
              break;
            }
            lVar6 = lVar6 + 4;
          } while ((ulonglong)uVar5 << 2 != lVar6);
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar1);
    }
  }
  return param_2;
}



// FUNCTION 146eae550 FUN_146eae550 body=196 status=ok
// SIG undefined FUN_146eae550(void)

undefined8 * FUN_146eae550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_1[0x2a] != 0) && (lVar3 = param_1[0x3f], lVar3 != 0)) &&
     (lVar4 = param_1[0x46], lVar4 != 0)) {
    uVar5 = FUN_1401f66f6(*param_1);
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      piVar7 = (int *)*param_3;
      piVar1 = piVar7 + *(int *)(param_3 + 1);
      do {
        if (0 < (int)uVar5) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar6);
            if ((iVar2 <= *piVar7) &&
               (*piVar7 < iVar2 + *(int *)(*(longlong *)(lVar4 + 0x10) + lVar6))) {
              FUN_1449e3bb0(param_2);
              break;
            }
            lVar6 = lVar6 + 4;
          } while ((ulonglong)uVar5 << 2 != lVar6);
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar1);
    }
  }
  return param_2;
}



// FUNCTION 146eae614 FUN_146eae614 body=433 status=ok
// SIG undefined FUN_146eae614(void)

undefined8 * FUN_146eae614(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_1[0x3f] != 0) && (param_1[0x46] != 0)) && (param_1[0x4d] != 0)) {
    iVar2 = FUN_1401f66f6(*param_1,DAT_14c996ae8);
    uVar3 = FUN_1401f66f6(*param_1,DAT_14c996ae0);
    local_48 = 0;
    uStack_40 = 0;
    FUN_146cd456c(&local_48,uVar3);
    lVar4 = param_1[0x4d];
    local_4c = 0;
    if (0 < iVar2) {
      do {
        FUN_1449e3bb0((longlong)*(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)local_4c * 0xc) *
                      0x10 + local_48,&local_4c);
        FUN_1449e3bb0((longlong)*(int *)(*(longlong *)(lVar4 + 0x10) + 4 + (longlong)local_4c * 0xc)
                      * 0x10 + local_48,&local_4c);
        FUN_1449e3bb0((longlong)*(int *)(*(longlong *)(lVar4 + 0x10) + 8 + (longlong)local_4c * 0xc)
                      * 0x10 + local_48,&local_4c);
        local_4c = local_4c + 1;
      } while (local_4c < iVar2);
    }
    lVar4 = local_48;
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      piVar5 = (int *)*param_3;
      piVar1 = piVar5 + *(int *)(param_3 + 1);
      do {
        lVar7 = (longlong)*piVar5 * 0x10;
        if (0 < *(int *)(lVar4 + 8 + lVar7)) {
          lVar8 = 0;
          lVar6 = 0;
          do {
            FUN_1449e3bb0(param_2,*(longlong *)(lVar4 + lVar7) + lVar8);
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 4;
            lVar4 = local_48;
          } while (lVar6 < *(int *)(local_48 + 8 + lVar7));
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar1);
    }
    FUN_144716727(lVar4,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eae7c6 FUN_146eae7c6 body=220 status=ok
// SIG undefined FUN_146eae7c6(void)

longlong * FUN_146eae7c6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if ((((lVar5 != 0) && (lVar6 = *(longlong *)(param_1 + 0x1f8), lVar6 != 0)) &&
      (lVar7 = *(longlong *)(param_1 + 0x230), lVar7 != 0)) &&
     ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar11 = (int *)*param_3;
    piVar1 = piVar11 + *(int *)(param_3 + 1);
    lVar8 = *(longlong *)(lVar5 + 0x10);
    lVar9 = *(longlong *)(lVar7 + 0x10);
    do {
      iVar2 = *piVar11;
      lVar10 = (longlong)*(int *)(lVar8 + (longlong)iVar2 * 4);
      if (0 < *(int *)(lVar9 + lVar10 * 4)) {
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 4);
        iVar12 = 0;
        do {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1446f48e2(param_2,iVar4);
          }
          *(int *)(*param_2 + (longlong)iVar4 * 4) = iVar3 + iVar12;
          iVar12 = iVar12 + 1;
          lVar8 = *(longlong *)(lVar5 + 0x10);
          lVar9 = *(longlong *)(lVar7 + 0x10);
        } while (iVar12 < *(int *)(lVar9 + (longlong)*(int *)(lVar8 + (longlong)iVar2 * 4) * 4));
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar1);
  }
  return param_2;
}



// FUNCTION 146eae8a2 FUN_146eae8a2 body=146 status=ok
// SIG undefined FUN_146eae8a2(void)

undefined8 * FUN_146eae8a2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x268);
  if ((lVar1 != 0) && (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
    lVar2 = *param_3;
    lVar5 = 0;
    do {
      lVar3 = (longlong)*(int *)(lVar2 + lVar5) * 0xc;
      FUN_1449e3bb0(param_2,*(longlong *)(lVar1 + 0x10) + lVar3);
      FUN_1449e3bb0(param_2,*(longlong *)(lVar1 + 0x10) + lVar3 + 4);
      FUN_1449e3bb0(param_2,*(longlong *)(lVar1 + 0x10) + lVar3 + 8);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar5);
  }
  return param_2;
}



// FUNCTION 146eae934 FUN_146eae934 body=220 status=ok
// SIG undefined FUN_146eae934(void)

longlong * FUN_146eae934(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if ((((lVar5 != 0) && (lVar6 = *(longlong *)(param_1 + 0x188), lVar6 != 0)) &&
      (lVar7 = *(longlong *)(param_1 + 0x1c0), lVar7 != 0)) &&
     ((longlong)*(int *)(param_3 + 1) != 0)) {
    piVar11 = (int *)*param_3;
    piVar1 = piVar11 + *(int *)(param_3 + 1);
    lVar8 = *(longlong *)(lVar5 + 0x10);
    lVar9 = *(longlong *)(lVar7 + 0x10);
    do {
      iVar2 = *piVar11;
      lVar10 = (longlong)*(int *)(lVar8 + (longlong)iVar2 * 4);
      if (0 < *(int *)(lVar9 + lVar10 * 4)) {
        iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 4);
        iVar12 = 0;
        do {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1446f48e2(param_2,iVar4);
          }
          *(int *)(*param_2 + (longlong)iVar4 * 4) = iVar3 + iVar12;
          iVar12 = iVar12 + 1;
          lVar8 = *(longlong *)(lVar5 + 0x10);
          lVar9 = *(longlong *)(lVar7 + 0x10);
        } while (iVar12 < *(int *)(lVar9 + (longlong)*(int *)(lVar8 + (longlong)iVar2 * 4) * 4));
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar1);
  }
  return param_2;
}



// FUNCTION 146eaea10 FUN_146eaea10 body=197 status=ok
// SIG undefined FUN_146eaea10(void)

undefined8 * FUN_146eaea10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = DAT_14c9969d8;
  param_1[3] = DAT_14c9969d0;
  param_1[4] = 0;
  uVar1 = FUN_146ea22c4(param_2);
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = DAT_14c9969e0;
  param_1[10] = DAT_14c9969d0;
  param_1[0xb] = 0;
  uVar1 = FUN_146ea22c4(param_2);
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2;
  param_1[0xf] = param_2;
  param_1[0x10] = DAT_14c9969e8;
  param_1[0x11] = DAT_14c9969d0;
  param_1[0x12] = DAT_14c9974a8;
  uVar1 = FUN_14075a50c(param_2);
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  return param_1;
}



// FUNCTION 146eaead6 FUN_146eaead6 body=309 status=ok
// SIG undefined FUN_146eaead6(void)

void FUN_146eaead6(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146eaeb9f;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146eaeb9f:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146eb114a(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaec0c FUN_146eaec0c body=201 status=ok
// SIG undefined FUN_146eaec0c(void)

void FUN_146eaec0c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_146e9b062(param_1,1,0);
  FUN_146e9b062(param_1 + 0x38,1,0);
  FUN_146eaead6(param_1 + 0x70,1,0);
  iVar1 = FUN_1409bcbd8(*(undefined8 *)(param_1 + 8),1,*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 8) = 1;
  lVar2 = (longlong)iVar1 * 0x10;
  FUN_144a787a6(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + lVar2,param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
  FUN_144a787a6(lVar2 + *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10),param_3);
  *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
  FUN_145c3f772((longlong)iVar1 * 0x50 + *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10),param_4
               );
  return;
}



// FUNCTION 146eaecd5 FUN_146eaecd5 body=19 status=ok
// SIG undefined FUN_146eaecd5(void)

void FUN_146eaecd5(undefined8 param_1)

{
  FUN_140498cd4(param_1,DAT_14c996a90,DAT_14c996a88);
  return;
}



// FUNCTION 146eaece8 FUN_146eaece8 body=203 status=ok
// SIG undefined FUN_146eaece8(void)

bool FUN_146eaece8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = param_2 - 1;
  if (uVar2 < 8) {
    lVar4 = 0;
    do {
      local_58 = 0;
      local_50 = 1;
      FUN_140b1eb1a(param_1,*(undefined8 *)((longlong)&DAT_14c996a90 + lVar4),DAT_14c996a88,
                    &local_58);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)param_2 * 8 - lVar4 != 0);
    if ((int)param_2 < 8) {
      puVar3 = &DAT_14c996a90 + param_2;
      uVar1 = uVar2;
      do {
        FUN_140498ea8(param_1,*puVar3,DAT_14c996a88);
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while ((int)uVar1 < 7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 < 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaedb4 FUN_146eaedb4 body=432 status=ok
// SIG undefined FUN_146eaedb4(void)

undefined8 * FUN_146eaedb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = DAT_14c9969f8;
  param_1[5] = DAT_14c996ae0;
  param_1[6] = DAT_14c9974a8;
  uVar1 = FUN_146ea345e(param_2);
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = DAT_14c9969f0;
  param_1[0xc] = DAT_14c996ae0;
  param_1[0xd] = DAT_14c9974a8;
  uVar1 = FUN_146ea3696(param_2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2;
  param_1[0x11] = param_2;
  param_1[0x12] = DAT_14c996a00;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  uVar1 = FUN_1401c090c(param_2);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = param_2;
  param_1[0x18] = param_2;
  param_1[0x19] = DAT_14c9974b8;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_30,"Vertex",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_2;
  param_1[0x20] = local_30;
  param_1[0x21] = DAT_14c996ae0;
  param_1[0x22] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  FUN_1429fb402(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaef66 FUN_146eaef66 body=416 status=ok
// SIG undefined FUN_146eaef66(void)

undefined8 * FUN_146eaef66(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = DAT_14c9969f8;
  param_1[5] = DAT_14c996ae0;
  param_1[6] = DAT_14c9974a8;
  param_1[7] = 0;
  uVar1 = FUN_146ea37b2(param_2);
  param_1[8] = uVar1;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = DAT_14c9969f0;
  param_1[0xc] = DAT_14c996ae0;
  param_1[0xd] = DAT_14c9974a8;
  param_1[0xe] = 0;
  uVar1 = FUN_146ea38be(param_2);
  param_1[0xf] = uVar1;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = DAT_14c996a00;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_146ea170a(param_2);
  param_1[0x16] = uVar1;
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = DAT_14c9974b8;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_48,"Vertex",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = local_48;
  param_1[0x21] = DAT_14c996ae0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0x24] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaf108 FUN_146eaf108 body=104 status=ok
// SIG undefined FUN_146eaf108(void)

void FUN_146eaf108(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8) = 1;
    lVar5 = param_2[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(param_1 + 0xa8);
      lVar7 = 0;
      do {
        uVar2 = *(uint *)(lVar3 + lVar7);
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0x28))) {
          lVar6 = *(longlong *)(lVar4 + 0x20);
          if (*(longlong *)(lVar4 + 0x20) == 0) {
            lVar6 = lVar4 + 0x10;
          }
          puVar1 = (uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
        }
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar7);
    }
  }
  return;
}



// FUNCTION 146eaf170 FUN_146eaf170 body=200 status=ok
// SIG undefined FUN_146eaf170(void)

void FUN_146eaf170(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146ecf306();
  FUN_1446ddc76(&local_28,"FGeometryCollection",1);
  cVar1 = (**(code **)(*param_2 + 8))(param_2,local_28);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    iVar2 = FUN_1401f66f6(param_2,DAT_14c996af0);
    iVar3 = FUN_1401f66f6(param_2,DAT_14c9974a8);
    iVar4 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    if (iVar3 < iVar4) {
      lVar5 = (longlong)iVar3;
      do {
        iVar3 = *(int *)(*(longlong *)(param_1 + 400) + lVar5 * 4);
        if (iVar3 != -1) {
          *(int *)(*(longlong *)(param_1 + 400) + lVar5 * 4) = iVar3 + iVar2;
        }
        lVar5 = lVar5 + 1;
      } while (iVar4 != lVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaf23a FUN_146eaf23a body=69 status=ok
// SIG undefined FUN_146eaf23a(void)

ulonglong FUN_146eaf23a(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  do {
    cVar1 = FUN_140498cd4(param_1,(&DAT_14c996a90)[uVar2],DAT_14c996a88);
    if (cVar1 == '\0') goto LAB_146eaf275;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  uVar2 = 8;
LAB_146eaf275:
  return uVar2 & 0xffffffff;
}



// FUNCTION 146eaf280 thunk_FUN_146eaece8 body=5 status=ok
// SIG undefined thunk_FUN_146eaece8(void)

bool thunk_FUN_146eaece8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined2 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = param_2 - 1;
  if (uVar2 < 8) {
    lVar4 = 0;
    do {
      uStack_58 = 0;
      uStack_50 = 1;
      FUN_140b1eb1a(param_1,*(undefined8 *)((longlong)&DAT_14c996a90 + lVar4),DAT_14c996a88,
                    &uStack_58);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)param_2 * 8 - lVar4 != 0);
    if ((int)param_2 < 8) {
      puVar3 = &DAT_14c996a90 + param_2;
      uVar1 = uVar2;
      do {
        FUN_140498ea8(param_1,*puVar3,DAT_14c996a88);
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while ((int)uVar1 < 7);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 < 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eaf286 thunk_FUN_146eaf28c body=5 status=ok
// SIG undefined thunk_FUN_146eaf28c(void)

void thunk_FUN_146eaf28c(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uVar2 = DAT_14c996ae8;
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446ddc76(&uStack_50,"MaterialID",1);
  cVar3 = FUN_140498cd4(param_1,uStack_50,uVar2);
  uVar2 = DAT_14c996a80;
  if (cVar3 != '\0') {
    FUN_1446ddc76(&uStack_58,"Sections",1);
    cVar3 = FUN_140498cd4(param_1,uStack_58,uVar2);
    uVar2 = DAT_14c996ae8;
    if (cVar3 != '\0') {
      FUN_1446ddc76(&uStack_60,"MaterialIndex",1);
      cVar3 = FUN_140498cd4(param_1,uStack_60,uVar2);
      uVar2 = DAT_14c996ae8;
      if (cVar3 != '\0') {
        FUN_1446ddc76(&uStack_68,"MaterialID",1);
        lVar9 = FUN_140b1fc18(param_1,uStack_68,uVar2);
        uVar2 = DAT_14c996a80;
        FUN_1446ddc76(&uStack_70,"Sections",1);
        lVar10 = FUN_146eaf69a(param_1,uStack_70,uVar2);
        uVar2 = DAT_14c996ae8;
        FUN_1446ddc76(&uStack_78,"MaterialIndex",1);
        lVar11 = FUN_140b1fc18(param_1,uStack_78,uVar2);
        lStack_88 = 0;
        uStack_80 = 0;
        uVar4 = FUN_1401f66f6(param_1,DAT_14c996a80);
        FUN_146eb9a22(&lStack_88,uVar4);
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996a80,&lStack_88,0x100);
        bVar16 = (longlong)uStack_80 < 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        if (bVar16) {
          FUN_14481578e(&lStack_88,0);
        }
        uVar5 = FUN_1401f66f6(param_1,DAT_14c996ae8);
        if (0 < (int)uVar5) {
          uVar14 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4);
            while (iVar6 = FUN_1401f66f6(param_1,DAT_14c996a80), iVar6 <= iVar7) {
              iVar6 = FUN_1409bcbd8(param_1,1,DAT_14c996a80);
              lVar12 = (longlong)iVar6 * 0x20;
              *(int *)(*(longlong *)(lVar10 + 0x10) + lVar12) = iVar6;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 4 + lVar12) = 0xffffffff;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar12) = 0;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0xc + lVar12) = 0;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x10 + lVar12) = 0;
            }
            piVar1 = (int *)(*(longlong *)(lVar10 + 0x10) + 8 + (longlong)iVar7 * 0x20);
            *piVar1 = *piVar1 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar5);
        }
        iVar7 = FUN_1401f66f6(param_1,DAT_14c996a80);
        if (0 < iVar7) {
          lVar15 = 0;
          lVar12 = 0;
          do {
            lVar13 = *(longlong *)(lVar10 + 0x10);
            if (lVar12 == 0) {
              *(undefined4 *)(lVar13 + 4) = 0;
            }
            else {
              *(int *)(lVar13 + 4 + lVar15) =
                   *(int *)(lVar13 + -0x18 + lVar15) * 3 + *(int *)(lVar13 + -0x1c + lVar15);
            }
            iVar7 = FUN_1401f66f6(param_1,DAT_14c996ae0);
            uVar14 = uStack_80;
            *(int *)(*(longlong *)(lVar10 + 0x10) + 0x10 + lVar15) = iVar7 + -1;
            if (*(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar15) == 0) {
              lVar13 = (longlong)(int)uStack_80;
              uVar5 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              if (uStack_80._4_4_ < uVar5) {
                FUN_1446f48e2(&lStack_88,uVar14 & 0xffffffff);
              }
              *(int *)(lStack_88 + lVar13 * 4) = (int)lVar12;
            }
            lVar12 = lVar12 + 1;
            iVar7 = FUN_1401f66f6(param_1,DAT_14c996a80);
            lVar15 = lVar15 + 0x20;
          } while (lVar12 < iVar7);
        }
        uVar5 = FUN_1401f66f6(param_1,DAT_14c996a80);
        uVar8 = FUN_1401f66f6(param_1,DAT_14c996ae8);
        lStack_98 = 0;
        uStack_90 = (ulonglong)uVar5;
        if (uVar5 != 0) {
          iVar7 = 0;
          FUN_1446f48e2(&lStack_98,0);
          if (0 < (int)uVar5) {
            lVar12 = 0;
            do {
              *(int *)(lStack_98 + lVar12) = iVar7;
              iVar7 = iVar7 + *(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar12 * 8);
              lVar12 = lVar12 + 4;
            } while ((ulonglong)uVar5 << 2 != lVar12);
          }
        }
        if (0 < (int)uVar8) {
          uVar14 = 0;
          do {
            lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4);
            iVar7 = *(int *)(lStack_98 + lVar10 * 4);
            *(int *)(lStack_98 + lVar10 * 4) = iVar7 + 1;
            *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar7 * 4) = (int)uVar14;
            uVar14 = uVar14 + 1;
          } while (uVar8 != uVar14);
        }
        if ((int)uStack_80 != 0) {
          (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996a80,&lStack_88,0x100);
        }
        if (lStack_98 != 0) {
          FUN_1400020a8();
        }
        if (lStack_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaf28c FUN_146eaf28c body=1037 status=ok
// SIG undefined FUN_146eaf28c(void)

void FUN_146eaf28c(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar2 = DAT_14c996ae8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446ddc76(&local_50,"MaterialID",1);
  cVar3 = FUN_140498cd4(param_1,local_50,uVar2);
  uVar2 = DAT_14c996a80;
  if (cVar3 != '\0') {
    FUN_1446ddc76(&local_58,"Sections",1);
    cVar3 = FUN_140498cd4(param_1,local_58,uVar2);
    uVar2 = DAT_14c996ae8;
    if (cVar3 != '\0') {
      FUN_1446ddc76(&local_60,"MaterialIndex",1);
      cVar3 = FUN_140498cd4(param_1,local_60,uVar2);
      uVar2 = DAT_14c996ae8;
      if (cVar3 != '\0') {
        FUN_1446ddc76(&local_68,"MaterialID",1);
        lVar9 = FUN_140b1fc18(param_1,local_68,uVar2);
        uVar2 = DAT_14c996a80;
        FUN_1446ddc76(&local_70,"Sections",1);
        lVar10 = FUN_146eaf69a(param_1,local_70,uVar2);
        uVar2 = DAT_14c996ae8;
        FUN_1446ddc76(&local_78,"MaterialIndex",1);
        lVar11 = FUN_140b1fc18(param_1,local_78,uVar2);
        local_88 = 0;
        uStack_80 = 0;
        uVar4 = FUN_1401f66f6(param_1,DAT_14c996a80);
        FUN_146eb9a22(&local_88,uVar4);
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996a80,&local_88,0x100);
        bVar16 = (longlong)uStack_80 < 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        if (bVar16) {
          FUN_14481578e(&local_88,0);
        }
        uVar5 = FUN_1401f66f6(param_1,DAT_14c996ae8);
        if (0 < (int)uVar5) {
          uVar14 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4);
            while (iVar6 = FUN_1401f66f6(param_1,DAT_14c996a80), iVar6 <= iVar7) {
              iVar6 = FUN_1409bcbd8(param_1,1,DAT_14c996a80);
              lVar12 = (longlong)iVar6 * 0x20;
              *(int *)(*(longlong *)(lVar10 + 0x10) + lVar12) = iVar6;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 4 + lVar12) = 0xffffffff;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar12) = 0;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0xc + lVar12) = 0;
              *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x10 + lVar12) = 0;
            }
            piVar1 = (int *)(*(longlong *)(lVar10 + 0x10) + 8 + (longlong)iVar7 * 0x20);
            *piVar1 = *piVar1 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar5);
        }
        iVar7 = FUN_1401f66f6(param_1,DAT_14c996a80);
        if (0 < iVar7) {
          lVar15 = 0;
          lVar12 = 0;
          do {
            lVar13 = *(longlong *)(lVar10 + 0x10);
            if (lVar12 == 0) {
              *(undefined4 *)(lVar13 + 4) = 0;
            }
            else {
              *(int *)(lVar13 + 4 + lVar15) =
                   *(int *)(lVar13 + -0x18 + lVar15) * 3 + *(int *)(lVar13 + -0x1c + lVar15);
            }
            iVar7 = FUN_1401f66f6(param_1,DAT_14c996ae0);
            uVar14 = uStack_80;
            *(int *)(*(longlong *)(lVar10 + 0x10) + 0x10 + lVar15) = iVar7 + -1;
            if (*(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar15) == 0) {
              lVar13 = (longlong)(int)uStack_80;
              uVar5 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              if (uStack_80._4_4_ < uVar5) {
                FUN_1446f48e2(&local_88,uVar14 & 0xffffffff);
              }
              *(int *)(local_88 + lVar13 * 4) = (int)lVar12;
            }
            lVar12 = lVar12 + 1;
            iVar7 = FUN_1401f66f6(param_1,DAT_14c996a80);
            lVar15 = lVar15 + 0x20;
          } while (lVar12 < iVar7);
        }
        uVar5 = FUN_1401f66f6(param_1,DAT_14c996a80);
        uVar8 = FUN_1401f66f6(param_1,DAT_14c996ae8);
        local_98 = 0;
        uStack_90 = (ulonglong)uVar5;
        if (uVar5 != 0) {
          iVar7 = 0;
          FUN_1446f48e2(&local_98,0);
          if (0 < (int)uVar5) {
            lVar12 = 0;
            do {
              *(int *)(local_98 + lVar12) = iVar7;
              iVar7 = iVar7 + *(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar12 * 8);
              lVar12 = lVar12 + 4;
            } while ((ulonglong)uVar5 << 2 != lVar12);
          }
        }
        if (0 < (int)uVar8) {
          uVar14 = 0;
          do {
            lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 4);
            iVar7 = *(int *)(local_98 + lVar10 * 4);
            *(int *)(local_98 + lVar10 * 4) = iVar7 + 1;
            *(int *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar7 * 4) = (int)uVar14;
            uVar14 = uVar14 + 1;
          } while (uVar8 != uVar14);
        }
        if ((int)uStack_80 != 0) {
          (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996a80,&local_88,0x100);
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaf69a FUN_146eaf69a body=251 status=ok
// SIG undefined FUN_146eaf69a(void)

void FUN_146eaf69a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146eaf6aa;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146eaf6aa:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146eaf796 FUN_146eaf796 body=487 status=ok
// SIG undefined FUN_146eaf796(void)

void FUN_146eaf796(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_3[1] != 0) {
    uVar3 = FUN_1401f66f6(param_1,*param_2);
    local_58 = CONCAT44(local_58._4_4_,uVar3);
    FUN_146eb9b24(param_3);
    lVar7 = *param_2;
    if (lVar7 == DAT_14c9974a8) {
      plVar1 = (longlong *)(param_1 + 0x3a0);
      local_58 = 0;
      uStack_50 = 0;
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x3a0) + 0x60))(plVar1);
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          uVar2 = uStack_50;
          if ((longlong)(int)param_3[1] != 0) {
            lVar6 = 0;
            do {
              if (*(int *)(*param_3 + lVar6) == *(int *)(*(longlong *)(param_1 + 0x3b0) + lVar7 * 4)
                 ) {
                lVar6 = (longlong)(int)uStack_50;
                uVar5 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                if (uStack_50._4_4_ < uVar5) {
                  FUN_1446f48e2(&local_58,uVar2 & 0xffffffff);
                }
                *(int *)(local_58 + lVar6 * 4) = (int)lVar7;
                break;
              }
              lVar6 = lVar6 + 4;
            } while ((longlong)(int)param_3[1] * 4 != lVar6);
          }
          lVar7 = lVar7 + 1;
          iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
        } while (lVar7 < iVar4);
      }
      FUN_146eaf97e(param_1,&local_58);
      FUN_146ec60f2(param_1,param_3);
      FUN_146ecf53a(param_1,param_2,param_3,0x101);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else if (lVar7 == DAT_14c996af0) {
      FUN_146eaf97e(param_1,param_3);
    }
    else if (lVar7 == DAT_14c996ae8) {
      FUN_146eafd00(param_1);
      FUN_146ecf53a(param_1,param_2,param_3,0x101);
      FUN_146eafe54(param_1);
    }
    else if (lVar7 == DAT_14c996ae0) {
      FUN_146eaff68(param_1);
      FUN_146ecf53a(param_1,param_2,param_3,0x101);
      FUN_146eb00bc(param_1);
    }
    else {
      FUN_146ecf53a(param_1,param_2,param_3,0x101);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaf97e FUN_146eaf97e body=897 status=ok
// SIG undefined FUN_146eaf97e(void)

void FUN_146eaf97e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_2[1] != 0) {
    uVar6 = FUN_1401f66f6(param_1,DAT_14c996af0);
    local_68 = CONCAT44(local_68._4_4_,uVar6);
    FUN_146eb9b24(param_2,&local_68);
    local_68 = 0;
    uStack_60 = 0;
    iVar8 = (int)param_2[1];
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        uVar9 = uStack_60;
        iVar2 = *(int *)(*param_2 + lVar14 * 4);
        lVar12 = (longlong)iVar2;
        if (((-1 < lVar12) && (iVar2 < *(int *)(param_1 + 0x3b8))) &&
           (lVar10 = *(longlong *)(param_1 + 0x3b0), *(int *)(lVar10 + lVar12 * 4) != -1)) {
          lVar13 = (longlong)(int)uStack_60;
          uVar7 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
          if (uStack_60._4_4_ < uVar7) {
            FUN_1446f48e2(&local_68,uVar9 & 0xffffffff);
          }
          *(undefined4 *)(local_68 + lVar13 * 4) = *(undefined4 *)(lVar10 + lVar12 * 4);
          iVar8 = (int)param_2[1];
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar8);
    }
    local_78 = 0;
    uStack_70 = 0;
    uVar6 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    local_88 = CONCAT44(local_88._4_4_,uVar6);
    FUN_146eb9aad(&local_68,&local_88,&local_78);
    local_88 = 0;
    uStack_80 = 0;
    iVar8 = *(int *)(param_1 + 0x2d8);
    if (iVar8 < 1) {
      uVar9 = 0;
    }
    else {
      lVar14 = 0;
      cVar5 = DAT_14c75f3b2;
      do {
        uVar9 = uStack_80;
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x2d0) + lVar14 * 4);
        if (((iVar2 != cVar5) && (iVar2 < (int)uStack_70)) &&
           (*(char *)(local_78 + iVar2) == '\x01')) {
          lVar12 = (longlong)(int)uStack_80;
          uVar7 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
          if (uStack_80._4_4_ < uVar7) {
            FUN_1446f48e2(&local_88,uVar9 & 0xffffffff);
            cVar5 = DAT_14c75f3b2;
          }
          *(int *)(local_88 + lVar12 * 4) = (int)lVar14;
          iVar8 = *(int *)(param_1 + 0x2d8);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar8);
      uVar9 = uStack_80 & 0xffffffff;
    }
    FUN_144958a06(local_88,uVar9);
    uVar6 = FUN_1401f66f6(param_1,DAT_14c996ae0);
    local_98 = CONCAT44(local_98._4_4_,uVar6);
    FUN_146eb9aad(&local_88,&local_98,&local_78);
    plVar1 = (longlong *)(param_1 + 0x2e0);
    local_98 = 0;
    uStack_90 = 0;
    iVar8 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x60))(plVar1);
    if (0 < iVar8) {
      lVar14 = 0;
      lVar12 = 0;
      do {
        lVar10 = 0;
        do {
          if (*(char *)(local_78 + *(int *)(*(longlong *)(param_1 + 0x2f0) + lVar14 + lVar10 * 4))
              == '\x01') {
            lVar10 = (longlong)(int)uStack_90;
            uVar7 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
            if (uStack_90._4_4_ < uVar7) {
              FUN_1446f48e2(&local_98);
            }
            *(int *)(local_98 + lVar10 * 4) = (int)lVar12;
            break;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
        lVar12 = lVar12 + 1;
        iVar8 = (**(code **)(*plVar1 + 0x60))(plVar1);
        lVar14 = lVar14 + 0xc;
      } while (lVar12 < iVar8);
    }
    FUN_144958a06(local_98,uStack_90 & 0xffffffff);
    FUN_146ecf53a(param_1,&DAT_14c996af0,param_2,0x101);
    FUN_146ecf53a(param_1,&DAT_14c996ae0,&local_88,0x101);
    FUN_146ecf53a(param_1,&DAT_14c996ae8,&local_98,0x101);
    if (0 < (longlong)(int)param_2[1]) {
      iVar8 = *(int *)(param_1 + 0x198);
      lVar14 = (longlong)(int)param_2[1];
      do {
        if (0 < iVar8) {
          iVar2 = *(int *)(*param_2 + -4 + lVar14 * 4);
          lVar12 = 0;
          do {
            iVar3 = *(int *)(*(longlong *)(param_1 + 400) + lVar12 * 4);
            if (iVar2 < iVar3) {
              iVar11 = iVar3 + -1;
LAB_146eafc85:
              *(int *)(*(longlong *)(param_1 + 400) + lVar12 * 4) = iVar11;
              iVar8 = *(int *)(param_1 + 0x198);
            }
            else {
              iVar11 = -1;
              if (iVar3 == iVar2) goto LAB_146eafc85;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar8);
        }
        bVar4 = 1 < lVar14;
        lVar14 = lVar14 + -1;
      } while (bVar4);
    }
    FUN_146eaf28c(param_1);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eafd00 FUN_146eafd00 body=339 status=ok
// SIG undefined FUN_146eafd00(void)

void FUN_146eafd00(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar2 = DAT_14c996ae8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446ddc76(&local_30,"FaceToGeometryIndex",1);
  lVar4 = FUN_146eb0af2(param_1,local_30,uVar2);
  if (lVar4 == 0) {
    FUN_1446ddc76(&local_38,&DAT_149e02088,1);
    uVar2 = DAT_14c996ae8;
    local_48 = local_38;
    local_40 = 0;
    FUN_1446ddc76(&local_50,"FaceToGeometryIndex",1);
    FUN_140b1fb8c(param_1,local_50,uVar2,&local_48);
  }
  uVar2 = DAT_14c996ae8;
  FUN_1446ddc76(&local_58,"FaceToGeometryIndex",1);
  lVar4 = FUN_146eb0af2(param_1,local_58,uVar2);
  if (lVar4 != 0) {
    uVar3 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (0 < (int)uVar3) {
      uVar5 = (ulonglong)uVar3;
      do {
        uVar6 = uVar5 - 1;
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x490) + -4 + uVar5 * 4);
        if (0 < lVar7) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x470) + uVar6 * 4);
          lVar7 = lVar7 + lVar8;
          do {
            *(int *)(*(longlong *)(lVar4 + 0x10) + lVar8 * 4) = (int)uVar6;
            lVar8 = lVar8 + 1;
          } while (lVar8 < lVar7);
        }
        bVar1 = 1 < (longlong)uVar5;
        uVar5 = uVar6;
      } while (bVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eafe54 FUN_146eafe54 body=275 status=ok
// SIG undefined FUN_146eafe54(void)

void FUN_146eafe54(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  uVar3 = DAT_14c996ae8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FaceToGeometryIndex",1);
  lVar5 = FUN_146eb0af2(param_1,local_28,uVar3);
  if (lVar5 != 0) {
    uVar4 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (0 < (int)uVar4) {
      uVar6 = (ulonglong)uVar4 + 1;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x470) + -8 + uVar6 * 4) = 0x7fffffff;
        *(undefined4 *)(*(longlong *)(param_1 + 0x490) + -8 + uVar6 * 4) = 0;
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    uVar4 = FUN_1401f66f6(param_1,DAT_14c996ae8);
    if (0 < (int)uVar4) {
      uVar6 = (ulonglong)uVar4;
      do {
        lVar8 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + -4 + uVar6 * 4);
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x470) + lVar8 * 4);
        iVar7 = (int)(uVar6 - 1);
        if (iVar7 <= iVar9) {
          iVar9 = iVar7;
        }
        *(int *)(*(longlong *)(param_1 + 0x470) + lVar8 * 4) = iVar9;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x490) +
                        (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + -4 + uVar6 * 4) * 4);
        *piVar1 = *piVar1 + 1;
        bVar2 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar2);
    }
  }
  FUN_146eb0c04(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eaff68 FUN_146eaff68 body=339 status=ok
// SIG undefined FUN_146eaff68(void)

void FUN_146eaff68(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar2 = DAT_14c996ae0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446ddc76(&local_30,"VertexToGeometryIndex",1);
  lVar4 = FUN_146eb0af2(param_1,local_30,uVar2);
  if (lVar4 == 0) {
    FUN_1446ddc76(&local_38,&DAT_149e02088,1);
    uVar2 = DAT_14c996ae0;
    local_48 = local_38;
    local_40 = 0;
    FUN_1446ddc76(&local_50,"VertexToGeometryIndex",1);
    FUN_140b1fb8c(param_1,local_50,uVar2,&local_48);
  }
  uVar2 = DAT_14c996ae0;
  FUN_1446ddc76(&local_58,"VertexToGeometryIndex",1);
  lVar4 = FUN_146eb0af2(param_1,local_58,uVar2);
  if (lVar4 != 0) {
    uVar3 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (0 < (int)uVar3) {
      uVar5 = (ulonglong)uVar3;
      do {
        uVar6 = uVar5 - 1;
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + -4 + uVar5 * 4);
        if (0 < lVar7) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + uVar6 * 4);
          lVar7 = lVar7 + lVar8;
          do {
            *(int *)(*(longlong *)(lVar4 + 0x10) + lVar8 * 4) = (int)uVar6;
            lVar8 = lVar8 + 1;
          } while (lVar8 < lVar7);
        }
        bVar1 = 1 < (longlong)uVar5;
        uVar5 = uVar6;
      } while (bVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb00bc FUN_146eb00bc body=275 status=ok
// SIG undefined FUN_146eb00bc(void)

void FUN_146eb00bc(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  uVar3 = DAT_14c996ae0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"VertexToGeometryIndex",1);
  lVar5 = FUN_146eb0af2(param_1,local_28,uVar3);
  if (lVar5 != 0) {
    uVar4 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (0 < (int)uVar4) {
      uVar6 = (ulonglong)uVar4 + 1;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x430) + -8 + uVar6 * 4) = 0x7fffffff;
        *(undefined4 *)(*(longlong *)(param_1 + 0x450) + -8 + uVar6 * 4) = 0;
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    uVar4 = FUN_1401f66f6(param_1,DAT_14c996ae0);
    if (0 < (int)uVar4) {
      uVar6 = (ulonglong)uVar4;
      do {
        lVar8 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + -4 + uVar6 * 4);
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x430) + lVar8 * 4);
        iVar7 = (int)(uVar6 - 1);
        if (iVar7 <= iVar9) {
          iVar9 = iVar7;
        }
        *(int *)(*(longlong *)(param_1 + 0x430) + lVar8 * 4) = iVar9;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x450) +
                        (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + -4 + uVar6 * 4) * 4);
        *piVar1 = *piVar1 + 1;
        bVar2 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar2);
    }
  }
  FUN_146eb0c04(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb01d0 FUN_146eb01d0 body=26 status=ok
// SIG undefined FUN_146eb01d0(void)

void FUN_146eb01d0(undefined8 param_1)

{
  FUN_146ecf2ec();
  FUN_140b1dae4(param_1);
  return;
}



// FUNCTION 146eb0212 FUN_146eb0212 body=1787 status=ok
// SIG undefined FUN_146eb0212(void)

void FUN_146eb0212(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  int *piVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_408 [40];
  longlong *local_3e0;
  undefined1 local_3d4 [4];
  longlong *local_3d0;
  undefined8 local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined4 *local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  longlong local_368;
  longlong lStack_360;
  undefined4 local_358 [4];
  undefined8 local_348;
  int local_340;
  undefined8 local_33c;
  undefined4 local_334;
  longlong local_328;
  undefined4 local_320;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  uVar3 = *(uint *)(param_1 + 0x3b8);
  uVar10 = (ulonglong)uVar3;
  local_398 = 0;
  uStack_390 = 0;
  local_3e0 = param_2;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  if (uVar10 == 0) {
    local_3a8 = 0;
    uStack_3a0 = 0;
  }
  else {
    FUN_1429fccce(&local_398);
    uVar19 = 0;
    do {
      lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3b0) + uVar19 * 4);
      if (lVar18 != -1) {
        lVar25 = *local_3e0;
        lVar21 = (longlong)(int)uStack_390;
        uVar5 = (int)uStack_390 + 1;
        uStack_390 = CONCAT44(uStack_390._4_4_,uVar5);
        if (uStack_390._4_4_ < uVar5) {
          FUN_1429fcdfe(&local_398);
        }
        *(undefined4 *)(local_398 + lVar21 * 8) = *(undefined4 *)(lVar25 + lVar18 * 4);
        *(int *)(local_398 + 4 + lVar21 * 8) = (int)uVar19;
      }
      lVar18 = local_398;
      uVar19 = uVar19 + 1;
    } while (uVar10 != uVar19);
    iVar14 = (int)uStack_390;
    lVar25 = (longlong)(int)uStack_390;
    if (1 < lVar25) {
      memset(local_358,0,0x2f0);
      local_368 = lVar18;
      lStack_360 = lVar18 + lVar25 * 8 + -8;
      fVar27 = logf((float)iVar14);
      local_358[0] = (int)(longlong)(fVar27 + fVar27);
      plVar7 = &local_368;
      do {
        piVar9 = (int *)*plVar7;
        piVar6 = (int *)plVar7[1];
        iVar14 = (int)plVar7[2];
        iVar4 = (int)((ulonglong)((longlong)piVar6 - (longlong)piVar9) >> 3);
        uVar5 = iVar4 + 1;
        piVar12 = piVar6;
        piVar20 = piVar9;
        if (iVar14 != 0) {
LAB_146eb063e:
          if (8 < (int)uVar5) {
            uVar1 = *(undefined8 *)(piVar9 + (ulonglong)(uVar5 >> 1) * 2);
            *(undefined8 *)(piVar9 + (ulonglong)(uVar5 >> 1) * 2) = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = uVar1;
            piVar17 = piVar12 + 2;
            piVar8 = piVar9;
            do {
              piVar2 = piVar8 + 2;
              piVar13 = piVar8 + 2;
              do {
                piVar8 = piVar13;
                piVar24 = piVar2;
                if (piVar12 < piVar8) break;
                piVar2 = piVar24 + 2;
                piVar13 = piVar8 + 2;
              } while (*piVar8 <= *piVar9);
              piVar2 = piVar17 + -4;
              do {
                piVar13 = piVar17;
                piVar22 = piVar2;
                piVar17 = piVar13 + -2;
                if (piVar17 <= piVar9) break;
                piVar2 = piVar22 + -2;
              } while (*piVar9 <= *piVar17);
              if (piVar17 < piVar8) goto LAB_146eb06bd;
              uVar1 = *(undefined8 *)piVar8;
              *(undefined8 *)piVar8 = *(undefined8 *)piVar17;
              *(undefined8 *)piVar17 = uVar1;
            } while( true );
          }
          if (piVar9 < piVar12) {
            do {
              piVar6 = piVar9;
              if (piVar9 + 2 <= piVar12) {
                piVar20 = piVar9 + 2;
                iVar14 = *piVar9;
                do {
                  iVar4 = *piVar20;
                  iVar16 = iVar14;
                  if (iVar14 <= iVar4) {
                    iVar16 = iVar4;
                  }
                  if (iVar14 < iVar4) {
                    piVar6 = piVar20;
                  }
                  piVar20 = piVar20 + 2;
                  iVar14 = iVar16;
                } while (piVar20 <= piVar12);
              }
              uVar1 = *(undefined8 *)piVar6;
              *(undefined8 *)piVar6 = *(undefined8 *)piVar12;
              *(undefined8 *)piVar12 = uVar1;
              piVar12 = piVar12 + -2;
            } while (piVar9 < piVar12);
          }
          goto LAB_146eb08c9;
        }
LAB_146eb0750:
        if (uVar5 != 0) {
          iVar14 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          iVar4 = iVar14;
joined_r0x000146eb0775:
          do {
            iVar16 = iVar14 * 2 + 1;
            if (iVar16 < (int)uVar5) {
              iVar15 = iVar14 * 2 + 2;
              if ((iVar15 < (int)uVar5) &&
                 (piVar9[(longlong)iVar16 * 2] <= piVar9[(longlong)iVar15 * 2])) {
                iVar16 = iVar15;
              }
              lVar18 = (longlong)iVar14;
              lVar25 = (longlong)iVar16;
              if (piVar9[lVar18 * 2] < piVar9[lVar25 * 2]) {
                uVar1 = *(undefined8 *)(piVar9 + lVar18 * 2);
                *(undefined8 *)(piVar9 + lVar18 * 2) = *(undefined8 *)(piVar9 + lVar25 * 2);
                *(undefined8 *)(piVar9 + lVar25 * 2) = uVar1;
                iVar14 = iVar16;
                goto joined_r0x000146eb0775;
              }
            }
            bVar26 = iVar4 != 0;
            iVar14 = iVar4 + -1;
            iVar4 = iVar14;
          } while (bVar26);
          if (1 < (int)uVar5) {
            uVar19 = (ulonglong)uVar5;
            uVar1 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = *(undefined8 *)(piVar9 + uVar19 * 2 + -2);
            *(undefined8 *)(piVar9 + uVar19 * 2 + -2) = uVar1;
            if (uVar5 != 2) {
              do {
                uVar19 = uVar19 - 1;
                iVar14 = 0;
                iVar16 = 1;
                iVar4 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar15 = iVar16;
                  if (((longlong)iVar14 < (longlong)uVar19) &&
                     (piVar9[(longlong)iVar16 * 2] <= piVar9[(longlong)iVar14 * 2])) {
                    iVar15 = iVar14;
                  }
                  lVar18 = (longlong)iVar4;
                  lVar25 = (longlong)iVar15;
                  if (piVar9[lVar25 * 2] <= piVar9[lVar18 * 2]) break;
                  uVar1 = *(undefined8 *)(piVar9 + lVar18 * 2);
                  *(undefined8 *)(piVar9 + lVar18 * 2) = *(undefined8 *)(piVar9 + lVar25 * 2);
                  *(undefined8 *)(piVar9 + lVar25 * 2) = uVar1;
                  iVar14 = iVar15 * 2;
                  iVar16 = iVar15 * 2 + 1;
                  iVar4 = iVar15;
                } while ((longlong)iVar16 < (longlong)uVar19);
                uVar1 = *(undefined8 *)piVar9;
                *(undefined8 *)piVar9 = *(undefined8 *)(piVar9 + uVar19 * 2 + -2);
                *(undefined8 *)(piVar9 + uVar19 * 2 + -2) = uVar1;
              } while (2 < uVar19);
            }
          }
        }
LAB_146eb08c9:
        plVar7 = plVar7 + -3;
      } while (&local_368 <= plVar7);
    }
    local_3a8 = 0;
    uStack_3a0 = 0;
    if (uVar10 != 0) {
      FUN_14481578e(&local_3a8,uVar3);
    }
  }
  lVar18 = local_398;
  lVar25 = (longlong)(int)uStack_390;
  if (lVar25 != 0) {
    lVar21 = 0;
    do {
      uVar10 = uStack_3a0;
      lVar23 = (longlong)(int)uStack_3a0;
      uVar3 = (int)uStack_3a0 + 1;
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar3);
      if (uStack_3a0._4_4_ < uVar3) {
        FUN_1446f48e2(&local_3a8,uVar10 & 0xffffffff);
      }
      *(undefined4 *)(local_3a8 + lVar23 * 4) = *(undefined4 *)(lVar18 + 4 + lVar21);
      lVar21 = lVar21 + 8;
    } while (lVar25 * 8 != lVar21);
  }
  FUN_146eb0910(param_1,&local_3a8);
  if (0 < *(int *)(param_1 + 0x128)) {
    lVar18 = 0;
    do {
      lVar25 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + lVar18 * 4);
      if (lVar25 != -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x120) + lVar18 * 4) =
             *(undefined4 *)(*local_3e0 + lVar25 * 4);
      }
      local_348 = 0;
      local_340 = 0;
      local_368 = 0;
      lStack_360 = 0;
      local_33c = 0xffffffff00000080;
      local_334 = 0;
      local_328 = 0;
      local_320 = 0;
      FUN_145c3f772(&local_368,*(longlong *)(param_1 + 0x140) + lVar18 * 0x50);
      FUN_14068ded2(lVar18 * 0x50 + *(longlong *)(param_1 + 0x140),0);
      local_388 = 0x100000000;
      local_378 = 0xffffffff;
      local_370 = 0;
      iVar14 = 0;
      local_380 = local_358;
      if (local_340 != 0) {
        FUN_1449c0562(&local_388);
        iVar14 = local_340;
      }
      local_3b8 = local_378;
      uVar1 = local_3b8;
      local_3b0 = local_370;
      local_3ac = local_36c;
      local_3c8 = local_388;
      local_3c0 = local_380;
      local_3b8._4_4_ = (int)((ulonglong)local_378 >> 0x20);
      local_3d0 = &local_368;
      if ((local_3b8._4_4_ != iVar14) || (local_380 != local_358)) {
        iVar4 = local_3b8._4_4_;
        local_3b8 = uVar1;
        do {
          iVar4 = *(int *)(*local_3d0 + (longlong)iVar4 * 0xc);
          local_388 = CONCAT44(local_388._4_4_,iVar4);
          if ((longlong)iVar4 < 0) {
            puVar11 = &local_388;
          }
          else {
            puVar11 = (undefined8 *)((longlong)iVar4 * 4 + *local_3e0);
          }
          FUN_1447cbafe(*(longlong *)(param_1 + 0x140) + lVar18 * 0x50,local_3d4,puVar11,0);
          local_3b8 = CONCAT44(local_3b8._4_4_,(uint)local_3b8 & ~local_3c8._4_4_);
          FUN_1449c0562(&local_3c8);
          iVar4 = local_3b8._4_4_;
          uVar1 = local_3b8;
        } while (local_3d0 != &local_368 || (local_3c0 != local_358 || local_3b8._4_4_ != iVar14));
      }
      local_3b8 = uVar1;
      local_320 = 0;
      if (local_328 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_368);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x128));
  }
  FUN_146ece4fc(param_1,DAT_14c9974a8,local_3e0);
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146eb06bd:
  uVar1 = *(undefined8 *)piVar9;
  *(undefined8 *)piVar9 = *(undefined8 *)piVar17;
  *(undefined8 *)piVar17 = uVar1;
  iVar14 = iVar14 + -1;
  piVar13 = piVar13 + -4;
  if ((longlong)piVar22 - (longlong)piVar20 < (longlong)piVar6 - (longlong)piVar24) {
    if (piVar8 < piVar12) {
      *plVar7 = (longlong)piVar8;
      plVar7[1] = (longlong)piVar12;
      *(int *)(plVar7 + 2) = iVar14;
      plVar7 = plVar7 + 3;
    }
    piVar24 = piVar9;
    piVar6 = piVar22;
    if (piVar17 <= piVar9 + 2) goto LAB_146eb08c9;
  }
  else {
    if (piVar9 + 2 < piVar17) {
      *plVar7 = (longlong)piVar9;
      plVar7[1] = (longlong)piVar13;
      *(int *)(plVar7 + 2) = iVar14;
      plVar7 = plVar7 + 3;
    }
    piVar9 = piVar8;
    piVar13 = piVar12;
    piVar6 = piVar12;
    if (piVar12 <= piVar8) goto LAB_146eb08c9;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar6 - (longlong)piVar24) >> 3);
  uVar5 = iVar4 + 1;
  piVar12 = piVar13;
  piVar20 = piVar24;
  if (iVar14 == 0) goto LAB_146eb0750;
  goto LAB_146eb063e;
}



// FUNCTION 146eb0910 FUN_146eb0910 body=480 status=ok
// SIG undefined FUN_146eb0910(void)

void FUN_146eb0910(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2;
  uVar2 = FUN_1401f66f6(param_1,DAT_14c996af0);
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = FUN_1401f66f6(param_1,DAT_14c996ae0);
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_14481578e(&local_58,iVar3);
    }
    local_68 = 0;
    uStack_60 = 0;
    iVar3 = FUN_1401f66f6(param_1,DAT_14c996ae8);
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        FUN_14481578e(&local_68,iVar3);
      }
      if (0 < (int)uVar2) {
        uVar6 = 0;
        local_70 = (ulonglong)uVar2;
        do {
          lVar4 = (longlong)*(int *)(*local_78 + uVar6 * 4);
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x450) + lVar4 * 4);
          if (0 < iVar3) {
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x430) + lVar4 * 4);
            iVar3 = iVar3 + iVar5;
            do {
              uVar1 = uStack_50;
              lVar7 = (longlong)(int)uStack_50;
              uVar2 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
              if (uStack_50._4_4_ < uVar2) {
                FUN_1446f48e2(&local_58,uVar1 & 0xffffffff);
              }
              *(int *)(local_58 + lVar7 * 4) = iVar5;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x490) + lVar4 * 4);
          if (0 < iVar3) {
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x470) + lVar4 * 4);
            iVar3 = iVar3 + iVar5;
            do {
              uVar1 = uStack_60;
              lVar4 = (longlong)(int)uStack_60;
              uVar2 = (int)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
              if (uStack_60._4_4_ < uVar2) {
                FUN_1446f48e2(&local_68,uVar1 & 0xffffffff);
              }
              *(int *)(local_68 + lVar4 * 4) = iVar5;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != local_70);
      }
      FUN_146ece4fc(param_1,DAT_14c996ae0,&local_58);
      FUN_146ece4fc(param_1,DAT_14c996ae8,&local_68);
      FUN_146ece4fc(param_1,DAT_14c996af0,local_78);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 146eb0af2 FUN_146eb0af2 body=274 status=ok
// SIG undefined FUN_146eb0af2(void)

longlong FUN_146eb0af2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb0c04 FUN_146eb0c04 body=597 status=ok
// SIG undefined FUN_146eb0c04(void)

ulonglong FUN_146eb0c04(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  uint local_ac;
  longlong local_a8 [3];
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  local_78 = 0;
  local_70 = 0;
  local_a8[2] = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  uVar5 = FUN_1401f66f6(param_1,DAT_14c996ae0);
  local_ac = 0xffffffff;
  FUN_1448156a8(local_a8,&local_ac,uVar5);
  uVar11 = (ulonglong)*(int *)(param_1 + 0x3b8);
  if ((longlong)uVar11 < 1) {
    uVar9 = CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2d8);
    uVar12 = 0;
    uVar9 = 0;
    do {
      local_ac = *(uint *)(*(longlong *)(param_1 + 0x3b0) + uVar12 * 4);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + uVar12 * 4);
      iVar13 = *(int *)(*(longlong *)(param_1 + 0x450) + uVar12 * 4);
      if ((int)uStack_90 != local_64) {
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_60;
        }
        for (iVar3 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & local_ac) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_a8[2] + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_a8[2] + (longlong)iVar3 * 0xc) == local_ac) goto LAB_146eb0df5;
        }
      }
      FUN_1447cbafe(local_a8 + 2,local_b0,&local_ac,0);
      if (0 < (int)uVar1) {
        lVar6 = (longlong)iVar13;
        uVar7 = 0;
        do {
          if ((lVar10 <= (longlong)uVar7) && ((longlong)uVar7 < lVar6 + lVar10)) {
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2d0) + uVar7 * 4);
            *(uint *)(local_a8[0] + uVar7 * 4) = uVar2;
            if (local_ac != uVar2 || (iVar4 <= (int)uVar2 || -1 >= (int)uVar2)) goto LAB_146eb0df5;
            iVar13 = iVar13 - (uint)(local_ac == uVar2 && ((int)uVar2 < iVar4 && -1 < (int)uVar2));
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
      }
      if (iVar13 != 0) goto LAB_146eb0df5;
      uVar12 = uVar12 + 1;
      uVar9 = (ulonglong)(uVar11 <= uVar12);
    } while (uVar12 != uVar11);
  }
  lVar10 = 0;
  do {
    iVar4 = FUN_1401f66f6(param_1,DAT_14c996ae0);
    if (iVar4 <= lVar10) goto LAB_146eb0df5;
    lVar6 = lVar10 * 4;
    lVar10 = lVar10 + 1;
  } while (-1 < *(int *)(local_a8[0] + lVar6));
  uVar9 = 0;
LAB_146eb0df5:
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_a8 + 2);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb0e5a FUN_146eb0e5a body=115 status=ok
// SIG undefined FUN_146eb0e5a(void)

ulonglong FUN_146eb0e5a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong unaff_RBP;
  bool bVar5;
  
  plVar1 = (longlong *)(param_1 + 0x300);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x300) + 0x60))(plVar1);
  uVar4 = 0;
  if (iVar2 < 1) {
    unaff_RBP = 0;
  }
  else {
    do {
      lVar3 = *(longlong *)(param_1 + 800);
      if (*(longlong *)(param_1 + 800) == 0) {
        lVar3 = param_1 + 0x310;
      }
      bVar5 = (*(uint *)(lVar3 + (ulonglong)(uVar4 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f)) != 0;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
      if (bVar5) break;
      uVar4 = uVar4 + 1;
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while ((int)uVar4 < iVar2);
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146eb0ece FUN_146eb0ece body=634 status=ok
// SIG undefined FUN_146eb0ece(void)

double * FUN_146eb0ece(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  char local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_146eb7819(param_1 + 0xb0,param_1 + 0x110);
  iVar4 = FUN_1401f66f6(param_1,DAT_14c996af0);
  if (iVar4 < 1) {
    uVar8 = 0;
    uVar9 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    uVar17 = 0;
    uVar18 = 0;
    lVar6 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar8 = 0;
    uVar9 = 0;
    cVar5 = '\0';
    lVar7 = 0;
    do {
      FUN_144a1c3a2(*(longlong *)(param_1 + 0x3d0) + lVar6,&local_f0,
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x3b0) + lVar7 * 4) * 0x60 + local_b8
                   );
      uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
      uVar25 = (undefined4)((ulonglong)local_e8 >> 0x20);
      uVar22 = (undefined4)((ulonglong)local_e0 >> 0x20);
      uVar13 = (undefined4)((ulonglong)local_d8 >> 0x20);
      uVar16 = (undefined4)((ulonglong)local_d0 >> 0x20);
      uVar10 = (undefined4)((ulonglong)local_c8 >> 0x20);
      if (local_c0 == '\0' || cVar5 == '\0') {
        if (local_c0 != '\0') {
          uVar8 = SUB84(local_c8,0);
          uVar9 = uVar10;
          uVar11 = SUB84(local_d8,0);
          uVar12 = uVar13;
          uVar14 = SUB84(local_d0,0);
          uVar15 = uVar16;
          uVar17 = SUB84(local_f0,0);
          uVar18 = uVar19;
          uVar20 = SUB84(local_e0,0);
          uVar21 = uVar22;
          uVar23 = SUB84(local_e8,0);
          uVar24 = uVar25;
          cVar5 = local_c0;
        }
      }
      else {
        if (local_f0 <= (double)CONCAT44(uVar18,uVar17)) {
          uVar17 = SUB84(local_f0,0);
          uVar18 = uVar19;
        }
        if (local_e8 <= (double)CONCAT44(uVar24,uVar23)) {
          uVar23 = SUB84(local_e8,0);
          uVar24 = uVar25;
        }
        if (local_e0 <= (double)CONCAT44(uVar21,uVar20)) {
          uVar20 = SUB84(local_e0,0);
          uVar21 = uVar22;
        }
        if ((double)CONCAT44(uVar12,uVar11) <= local_d8) {
          uVar11 = SUB84(local_d8,0);
          uVar12 = uVar13;
        }
        if ((double)CONCAT44(uVar15,uVar14) <= local_d0) {
          uVar14 = SUB84(local_d0,0);
          uVar15 = uVar16;
        }
        if ((double)CONCAT44(uVar9,uVar8) <= local_c8) {
          uVar8 = SUB84(local_c8,0);
          uVar9 = uVar10;
        }
      }
      lVar7 = lVar7 + 1;
      iVar4 = FUN_1401f66f6(param_1,DAT_14c996af0);
      lVar6 = lVar6 + 0x38;
    } while (lVar7 < iVar4);
  }
  dVar1 = ((double)CONCAT44(uVar9,uVar8) - (double)CONCAT44(uVar21,uVar20)) * 0.5;
  dVar3 = ((double)CONCAT44(uVar15,uVar14) - (double)CONCAT44(uVar24,uVar23)) * 0.5;
  dVar2 = ((double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar18,uVar17)) * 0.5;
  *param_2 = (double)CONCAT44(uVar18,uVar17) + dVar2;
  param_2[1] = (double)CONCAT44(uVar24,uVar23) + dVar3;
  param_2[2] = (double)CONCAT44(uVar21,uVar20) + dVar1;
  param_2[3] = dVar2;
  param_2[4] = dVar3;
  param_2[5] = dVar1;
  param_2[6] = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb114a FUN_146eb114a body=70 status=ok
// SIG undefined FUN_146eb114a(void)

void FUN_146eb114a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146eb5596(param_1,param_2,param_3,param_4);
  }
  FUN_146eb57a6(param_1,param_2,param_3);
  return;
}


